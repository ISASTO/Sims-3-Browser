# DECISIONS

Material technical choices for the private browser port of *The Sims 3* for iOS (com.ea.sims3inc, version 1.4.16).
Each entry lists the evidence it rests on and what would justify revisiting it.

## D1. Inputs are immutable and private
- `original/com_ea_sims3inc-iOS8_0.ipa` (SHA-256 `8820bd62…5c55aa`) and `original/sims3_iphone` (SHA-256 `2fe8b7be…a164e1`)
  are read-only. Everything derived from them (`extract/`, `analysis/`, `build/`) is git-ignored.
- Nothing is pushed or deployed. The user's GitHub repository `ISASTO/Sims-3-Browser` is **public**, so the user's
  privacy requirement rules out pushing even tooling there without explicit instruction. The browser build is
  served only by `tools/serve.py`, which binds to 127.0.0.1.
- Revisit only if the user explicitly authorizes a private remote.

## D2. Recovery strategy: whole-image static recompilation
- **Evidence.**
  - The executable is a single armv7 slice with `cryptid=0`. Representative code disassembles to valid Thumb-2.
  - The symbol table holds 14,046 defined section symbols.
  - The debug information is an Apple linker *debug map*: STABS `N_SO/N_OSO/N_FUN/N_GSYM/N_STSYM/N_SOL` entries for
    397 compile units and 8,795 functions with sizes. The `.o` files it references are absent, so there are **no
    types, locals or line tables**.
  - `LC_FUNCTION_STARTS` and `LC_DATA_IN_CODE` are present.
- **Choice.** Translate every function in `__text` (10,423 functions, 728,641 instructions) from Thumb-2 to C with
  `tools/thumb2c.py`, then compile it (natively for headless testing, to WebAssembly for the browser).
  - Hand decompilation would not reach a connected, playable path in reasonable time, and without type information
    it could not be validated any better.
  - Names and compile-unit structure come from the symbols and the debug map.
- **Not an emulator.** No ARM interpreter exists anywhere in the build. Each guest function is a C function, and
  calls between them are direct C calls.
- **Revisit** to replace hot or simple subsystems with hand-recovered C++ where profiling or maintainability
  justifies it. The translations then serve as the oracle for that replacement.

## D3. Execution model of translated code
- **Registers and flags.**
  - Registers r0–r12, sp and lr are C locals. Flags (N, Z, C, V) and the FPSCR flags are locals.
  - VFP/NEON registers d0–d31 are `uint64_t` locals.
  - At calls, r0–r3, r7, r12, sp and lr are exchanged through the `CPU` struct. Callee-saved registers stay in the
    caller's locals, as the AAPCS allows.
- **Memory.** Guest pointers are `uint32_t`. In wasm, guest address = linear-memory address (`GUEST_IDENTITY`):
  - the image is loaded at its preferred addresses with slide 0;
  - the C data segment starts at 16 MiB, leaving `[0x4000, 0x4E8000)` free for the image;
  - the guest heap is a 448 MiB dlmalloc mspace.

  Natively, a 4 GiB reservation is used, and the thunk range is `PROT_NONE` so stray reads fault.
- **Calls.**
  - Direct calls are C calls.
  - Indirect calls go through a direct-mapped table over `__text`, then the host-thunk table (HLE functions given
    guest addresses), then the `__picsymbolstub4` stubs.
  - Imports resolve to HLE functions named `H` + symbol.
- **ABI facts verified in the code.** armv7 iOS uses the softfp calling convention.
  - 64-bit arguments are *not* even-register aligned.
  - Structs larger than 4 bytes return through memory (`objc_msgSend_stret`).
- **Exceptions.** SjLj frames are found by constant propagation. Unwinding propagates by return (`c->unwinding`),
  without setjmp. C++ and ObjC throws are fatal and have not been observed on the reached paths.
- **Validation.** `tools/difftest.py` executes single instructions in Unicorn and in the compiled translation from
  random states and compares registers, flags and memory. Several capstone decoding defects were found and fixed
  this way.

## D4. Platform frameworks are reimplemented (HLE), not ported
- UIKit, Foundation, CoreFoundation, the ObjC runtime, libc/libc++, OpenGL ES, OpenAL, AudioToolbox,
  CoreGraphics and Security are replaced by C implementations in `runtime/`. They are written against Apple's
  documented contracts and the ABI layouts the recompiled code depends on.
- The ObjC runtime keeps class structures in guest memory, so recompiled code can read `isa` and ivars directly,
  with a host side table for metadata.
- Every one of the 834 undefined symbols has a weak trap stub. An unimplemented call stops with its name and a
  backtrace instead of misbehaving silently.

## D5. Image binds and data imports
- dyld binds are applied at load against HLE tables. Data symbols (for example `_kCFAllocatorDefault`,
  `_NSFileSystemSize`, `ctype<char>::id`) get real guest storage.
- `dlopen`/`dlsym` of system frameworks resolve against the same tables, because FBSDK loads Security.framework
  dynamically.

## D6. Startup reached through the real code path
- `main` → `UIApplicationMain` → `RuntimeAppDelegate` → EAGL setup → `AppEngine` → menus all run as recompiled
  code.
- `UIApplicationMain` "detaches": the host run loop owns the frame, and later callbacks run on the guest stack below
  its frame.

## D7. Guest threads: cooperative scheduler with resumable translations
- **Evidence.**
  - `pthread_create` is reached only through `midp::Thread::start`. The bodies are `SceneMenu::run` and
    `SceneGame::run`, which loop on `updateLoadingState()` and poll a state field with `Thread::sleep(1000)`.
  - The main thread waits with `Thread::sleep(50)` while loading and joins via `Thread::yield` loops.
  - The browser gives one thread. A SharedArrayBuffer/pthread build would require cross-origin-isolation headers.
- **Choice.** For the 171 functions that can sit on a thread stack at a sleep or yield, the recompiler emits a second,
  resumable variant (`A_*`). The set is the thread entries plus all `run()` overrides, plus every function reachable
  from them by direct call that can reach a sleep.
  - A suspended thread saves its resumable frames and returns to the scheduler. Resuming re-enters them outermost
    first.
  - A thread suspends at `usleep`, or is preempted after a call when its slice is spent and it holds no lock.
  - A sleep on the main thread runs the other threads instead of blocking. Sleeps in this game are polling or
    pacing delays, so threads are woken early in that case.
  - Autorelease pools are per thread.
- **Revisit** if a thread blocks in a non-resumable frame. That case is logged.

## D8. Lock semantics
- `NSLock`, `pthread_mutex` and `@synchronized` count held locks per thread. A thread holding a lock is never
  preempted, so critical sections stay atomic under cooperative scheduling.

## D9. Virtual device
- An iPhone 6-class device on iOS 9.3.5, landscape, 667×375 points at @2x (1334×750 pixels).
- The game then selects its @2x iPhone assets and layouts, which are the ones exercised in testing.

## D10. Graphics: OpenGL ES 1.1 emulated on WebGL2; complete frames presented
- **Evidence.**
  - Info.plist has no `EAGLRenderingAPI` key, and the game creates an ES1 context.
  - The renderer is fixed-function (`GraphicsIPhoneGLES1`, M3G): matrix stacks, texenv/combine, fog, alpha test and
    `OES_matrix_palette` skinning.
- **Choice.**
  - `web/gl.js` emulates the ES1 subset with generated GLSL 300 es shaders. Client arrays stream into buffers.
  - The game renders into its own framebuffer object. `presentRenderbuffer:` blits that FBO to the canvas, so the
    canvas only changes on present. This is the fix for the previous attempt's flashing.
  - PVRTC textures (`0x8C00–0x8C03`) are decoded to RGBA8 in `runtime/pvrtc.c`, because WebGL lacks PVRTC outside
    iOS Safari.
  - Packed 16-bit texture types upload as `Uint16Array`.

## D11. Platform services with explicit contracts
- **Networking.** The browser port provides no network service. Requests fail asynchronously with
  `NSURLErrorDomain -1009` ("offline"), the same thing the game sees on a device without connectivity.
  `NSURLSession`/`NSURLSessionConfiguration`/`NSURLSessionDataTask` accept unknown configuration messages with a
  logged "ignored". This leniency applies **only** to these three SDK networking classes; every other class traps
  on an unknown selector.
- **Keychain.** Items are keyed by service, account and generic attribute and persisted to
  `/home/Library/Keychain.plist`.
- **NSUserDefaults.** Persisted to `/home/Library/Preferences/com.ea.sims3inc.plist`.
- **Store, advertising and analytics.** StoreKit reports `canMakePayments = NO`. Ad tracking is disabled. KVO
  observers are accepted, but no automatic change notifications are produced.
- **CommonCrypto.** SHA-1, SHA-256, HMAC, PBKDF2 and AES-ECB/CBC/PKCS7 are implemented and self-tested at startup
  against FIPS-197 and RFC 6070 vectors. Nimble encrypts its persistence with them.

## D12. Keyed archiving
- `NSKeyedArchiver` output is an XML plist object tree that our unarchiver reads back. It is **not**
  byte-compatible with Apple's archives. The game's own save files are written by its own C++ code and are
  unaffected.

## D13. Audio timing
- OpenAL buffers and sources map to WebAudio buffer sources.
- AudioQueue (music) is driven by a C-side timeline on the run-loop clock that issues the game's buffer callbacks.
  The host plays the original CAF (AAC) file from the matching offset, after repackaging it as ADTS for
  `decodeAudioData`.

## D14. Browser host
- **Main thread.** wasm runs on the main thread.
- **Bundle files.** These are read synchronously, as the game expects, via XMLHttpRequest
  (`x-user-defined` charset). `bundle-manifest.json` answers size, existence and directory queries without
  network round trips. Boot reads 37 files (18.5 MiB) in about 0.6 s on localhost.
- **No special requirements.** SharedArrayBuffer, special headers and extensions are not needed.
- **`/home`.** Lives in memory and is persisted to IndexedDB (debounced, and flushed on `pagehide` and
  `visibilitychange`).
- **Input.** Pointer events map to UITouch in game points; multi-touch works through pointer IDs.
- **Lifecycle.**
  - A hidden page means background, which delivers `applicationWillResignActive:` and
    `applicationDidEnterBackground:` (where the game saves).
  - Window blur means inactive.
- **Text.** `UITextField` is a real `<input>` element placed at the field's frame. Return delivers
  `textFieldShouldReturn:` and `UIControlEventEditingDidEndOnExit`, as the iOS keyboard does.

## D15. Toolchain (pinned to what is installed and tested)
| Tool | Version |
| --- | --- |
| clang/lld | Ubuntu 18.1.3 (`--target=wasm32-wasi`) |
| wasi-libc | Ubuntu package 0.0~git20230113.4362b18-3 |
| Python | 3.13.16 |
| capstone | 5.0.7 |
| unicorn | 2.1.0 |
| Node | 22.22.0 |
| Playwright | 1.56.0 |
| Chromium (headless test browser) | 141.0.7390.37 |
