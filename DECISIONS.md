# DECISIONS

Material technical choices for the browser port of *The Sims 3* for iOS (com.ea.sims3inc, version 1.4.16).
Each entry lists the evidence it rests on and what would justify revisiting it.

## D1. Immutable inputs; release scope updated on 2026-10-22
- `original/com_ea_sims3inc-iOS8_0.ipa` (SHA-256 `8820bd62…5c55aa`) and `original/sims3_iphone` (SHA-256 `2fe8b7be…a164e1`)
  are read-only. Everything derived from them (`extract/`, `analysis/`, `build/`) is git-ignored.
- On 2026-10-22 the user explicitly supplied the IPA again and requested continuing the GitHub branch and making
  it playable on the public GitHub Pages site. This supersedes the earlier private-only brief.
- Publish the compiled static release and the source/tooling under `ios/` on `main`. Keep the original IPA,
  generated C, analysis, test profiles, saved games and captures out of source commits. Signing records and the
  bundled Nimble log are omitted from the static resource package.
- `tools/serve.py` still binds to 127.0.0.1 for local development. The public release is ordinary static files.

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
- The browser drawable can rasterize at a different physical size while the guest retains this coordinate and
  asset contract. See D19.

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

## D13. Audio
- **OpenAL.** Buffers are uploaded to WebAudio as PCM; sources are started and stopped on the host. Source state
  (`AL_SOURCE_STATE`, offsets) advances on the run-loop clock in C, so the game's queries are deterministic.
- **AudioQueue decodes, as AudioToolbox does.** The game enqueues raw AAC packets (from `AudioFileReadPackets`) with
  packet descriptions. The runtime decodes them: AAC-LC through `runtime/aac.c`, linear PCM by conversion. It
  appends the 16-bit PCM to a host output stream.
  - The decoder is validated against FFmpeg's: all 12 music files in the bundle decode to within ±1 LSB of FFmpeg's
    output (SNR ≥ 104 dB), with no packet errors (`tools/aac_test.c`).
  - Unsupported streams (HE-AAC, AAC Main/SSR, coupling channels, 960-sample frames, other codecs) are reported
    and play as silence of the right length. They are never approximated.
- **Device-clock driven.** A buffer goes back to the game (its output callback) once the host's output clock has
  played its last frame (`ha_stream_played`). As on iOS, a suspended device (autoplay policy before the first tap, a
  backgrounded page) stops the queue from consuming buffers. The contract is in `runtime/hostaudio.h`. The native
  host simulates the device in run-loop time, and `SIMS3_AUDIO_DUMP=dir` writes each stream's PCM.
- **Test mode.** In `?test` mode the stream clock is the virtual clock, so buffer callbacks stay deterministic.
- **Rejected alternative.** Earlier, the host played the original CAF file from the packet offset the game enqueued,
  after repackaging it as ADTS for `decodeAudioData`. It depended on the browser having an AAC decoder (Playwright's
  Chromium has none) and on guessing file positions from buffer addresses.

## D14. Browser host
- **Main thread.** wasm runs on the main thread.
- **Bundle files.** These are read synchronously, as the game expects, via XMLHttpRequest
  (`x-user-defined` charset). `bundle-manifest.json` answers size, existence and directory queries without
  network round trips. Boot reads 37 files (18.5 MiB) in about 0.6 s on localhost.
  For the published packed build, see D18: files come from lossless gzip members in cached packs. Help HTML stays
  directly addressable for UIWebView, and UIImageView can use Blob URLs for packed images.
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

## D16. Deterministic browser test mode
- `?test` replaces the wall clock with a virtual clock. Frames advance only when the test driver calls
  `window.sims3Test.step(n, drawLast)`. Only the frames that are captured are drawn.
- **Why.** Native text metrics differ from the browser's Canvas2D metrics, so scripted inputs recorded natively do
  not replay in the browser at the same moments. Real-time browser runs vary with SwiftShader speed. A
  frame-exact browser run makes regressions reproducible.
- **Reference script.** `tools/tests/newgame.json` runs from a fresh profile through privacy, DLC notice, menu,
  Create-A-Sim, naming, confirmation and into the world.

## D17. Desktop input mapping
- Touch and pen pointers map one-to-one to UITouches.
- A mouse has only one pointer, so the game's two-finger gestures (camera orbit and pinch) are synthesized. A
  right-button drag (or Ctrl + left drag) places two virtual fingers 45 points either side of the cursor:
  - horizontal motion turns them about the cursor (0.012 rad per point);
  - vertical motion moves them together.
- The game receives ordinary two-touch sequences. Nothing in the game's gesture code is altered.

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
| FFmpeg (AAC reference decoder, tests only) | 6.1.1 (Ubuntu) |

The 2026-10-22 rebuild used the same clang 18.1.3, wasi-libc, capstone 5.0.7, Unicorn 2.1.0, Playwright 1.56.0
and Chromium 141.0.7390.37, with Python 3.12.14 and Node 24.19.0. Node/Python versions do not identify a different
input binary; the original IPA and executable hashes remain the build gate.

## D18. Static resource delivery for GitHub Pages
- `tools/package_site.py` produces `build/site/`, copied to `play/` in the source branch and `ios/play/` on main.
- Each resource retains its original virtual path and exact uncompressed size. Resources are optionally gzip
  compressed, then combined into packs up to 4 MiB. The manifest maps each file to a pack, offset, length and
  encoding. The browser fetches/caches packs and uses vendored fflate 0.8.2 to inflate individual resources for
  the existing synchronous file API. Its MIT license is included beside the module.
- Three boot packs preload asynchronously, in recorded boot-access order (`tools/resource-order.json`), avoiding
  most synchronous network waits during initialization. Pack and decompressed-file caches are bounded to
  12 MiB and 96 MiB respectively. Startup resource traffic measured 13.9 MiB versus 53.6 MiB for alphabetical packs.
- WebAssembly is also distributed losslessly compressed. Its manifest records the original SHA-256 and size;
  code and pack filenames contain content hashes. No Content-Encoding configuration, shared memory, worker
  execution service or server process is needed. All URLs are relative to the release directory.
- `tools/verify_site.py` compares every reconstructed resource and the wasm against the loose build, not merely
  against metadata produced by the packer. Browser tests exercise decoding and real original gameplay.
- Revisit pack sizing or use a worker if measured network stalls or long decompression tasks impair play.

## D19. Display pixels without changing the guest device
- The player measures the aspect-fitted game rectangle in CSS pixels and multiplies by DPR and the selected
  resolution scale. Native is 100%; fixed presets are 85%, 67% and 50%. GPU renderbuffer/viewport limits cap it.
- Only the EAGL drawable color and attached depth/stencil buffers scale. Guest viewport/scissor rectangles map
  to those physical pixels, but guest GL queries return virtual coordinates. Other framebuffer targets retain
  their own dimensions. Changing the emulated UIScreen scale would also change asset selection and layout.
- Reallocation happens between guest frames; visible canvas backing dimensions change at the completed-frame
  blit. ResizeObserver/resize/DPR changes feed this same path. Input remains in 667×375 points.
- Auto uses presented rate with hysteresis and cooldowns. It starts at roughly 1080p or below and drops scale
  after three low-rate samples. Eight high-rate samples can raise it. It does not claim to measure GPU time.
- The shell and module imports share a content-derived query version in packaged releases, avoiding an older
  cached GL adapter being loaded alongside a new player. Loose development files retain simple module URLs.

## D20. Device shake through CoreMotion
- The recovered `iPhoneAccelerometer` uses CMMotionManager's queue/block API, not UIKit motionBegan/motionEnded.
- Implement that API subset and CMAccelerometerData's three-double struct return. Copy/release the handler via
  the existing 32-bit Blocks runtime; deliver at the requested interval on the guest run loop without catch-up
  bursts. Backgrounding cancels a pending synthetic shake.
- A plumbob click injects a short acceleration waveform. The recompiled game decides whether it is in Gardening
  Tips and awards its original §500. Idle samples represent a stationary device; gyro/device-motion APIs remain
  unavailable. No browser hardware-sensor permission or direct SimData/money access is required.
