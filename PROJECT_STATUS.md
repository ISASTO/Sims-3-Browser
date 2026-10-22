# PROJECT STATUS

This is the private browser port of *The Sims 3* for iOS (bundle `com.ea.sims3inc`, version 1.4.16). The original
armv7 code is statically recompiled to C and compiled to WebAssembly. It runs on a compatibility runtime that
reimplements the iOS frameworks it uses.

## Inputs (verified)
| Item | Value |
| --- | --- |
| IPA | `com_ea_sims3inc-iOS8_0.ipa`, 131,779,929 bytes, SHA-256 `8820bd6221c288d3d2d413ccd013b2300276a22c55cdaa14399af18b745c55aa` |
| Executable | `Payload/sims3_iphone.app/sims3_iphone`, 5,012,448 bytes, SHA-256 `2fe8b7be460abc5da42afa478e4b9773727320fe5a9c2aad2df01f12eda164e1` |
| Slice | fat Mach-O, one armv7 slice (CPU subtype 9) at file offset 16,384, 4,996,064 bytes; `LC_ENCRYPTION_INFO cryptid=0`, and the code disassembles to valid Thumb-2 |
| Debug info | Apple debug-map STABS for 397 compile units and 8,795 functions with sizes; no DWARF, types or line tables (the referenced `.o` files are absent) |
| Bundle | 1,265 files, 407 MiB: 465 `.m3g`, 533 `.png`, 160 `.bin`, 81 `.wav`, 12 `.caf`; one compiled nib (LaunchScreen) |

## Architecture (details in DECISIONS.md)
- **Translated code.** `tools/thumb2c.py` translates all 10,423 functions (728,641 Thumb-2/VFP/NEON instructions) to
  C. Coverage of the generator's output: 376 functions contain `TRAP_FALLOFF` sites, which are flow into data
  after calls that do not return, as expected. 0 instructions are unsupported.
- **Resumable variants.** 171 functions also get resumable variants for cooperative guest threads.
- **Runtime.** `runtime/` reimplements, against Apple's documented behavior and libc++ ABI layouts:
  - the ObjC runtime, Foundation, CoreFoundation, UIKit and QuartzCore;
  - OpenGL ES 1.1/2.0 entry points, OpenAL, AudioToolbox and CoreGraphics;
  - libc, the libc++ pieces the binary imports, Security, CommonCrypto and pthreads.
- **Browser host.** `web/` contains `sims3.js` (files, IndexedDB saves, input, lifecycle, WebAudio, Canvas2D text)
  and `gl.js` (ES1 fixed function and ES2 on WebGL2; frames present by blitting the game's framebuffer).
- **Code provenance.**

  | Code | Provenance |
  | --- | --- |
  | Game and SDK logic (`build/gen/*.c`) | statically translated from the original machine code |
  | Platform behavior (`runtime/`, `web/`) | host implementations written for this port |
  | Hand-recovered C/C++ | none yet |
  | ARM interpreter | none |

## Connected behavior that works (evidence: headless Chromium 141 frame captures and native scripted runs)
1. **Boot.** Image load and binds (4,931 binds, 0 unresolved), ObjC realization and `+load`, C++ static
   initializers, `main`, `UIApplicationMain`, and the app delegate all run. So do the EAGL context (ES1) and the
   Nimble and Facebook SDK init (offline). Boot takes about 1.0 s in the browser.
2. **Menu background loading.** The menu's loader thread (`SceneMenu::run`) runs to completion on the cooperative
   scheduler.
3. **Original EA privacy dialog.** Rendered over the live 3D town backdrop. Tapping ACCEPT works.
4. **DLC notice.** The "We just unlocked…" dialog appears and is dismissed with the close button.
5. **Main menu.** Goals Checklist, More Games, Music Library, Options, Help & About, Start Game and Sims Store are
   shown.
6. **Select Game.** Three empty slots; New Game opens Create-A-Sim.
7. **Create-A-Sim.**
   - A textured, skinned, animated Sim with a mirror reflection. PVRTC eye textures are decoded.
   - Persona, then Traits: list scrolling by drag, selecting five traits, confirm.
   - Naming through a real text input, then the "start a new game with this Sim?" confirmation.
8. **Input.** Mouse and touch pointer events map to UITouch, including drags. Keyboard input reaches UITextField.

## Known failures and open items
- **Next blocker (being fixed).** Confirming CAS calls EA telemetry `toString(int)`. That uses libc++
  `std::ostringstream` (`ios_base::init`, locale facets). `runtime/cxx_iostream.c` now implements these with libc++
  layouts. It has not yet been verified at that call site.
- **Not yet reached.** The world (`SceneGame` and its loading thread), gameplay systems, save/load round trip.
- **Rendering.**
  - On the menu backdrop the top of the sky shows a jagged band where the dome geometry ends. Cause not yet
    identified.
  - `glGetParameter` for two ES1-only parameters logs `INVALID_ENUM` in WebGL (harmless so far).
- **Audio.** Implemented but not verified by listening. Headless runs have no audio output check.
- **Performance.**
  - Measured only in headless Chromium with SwiftShader (software GL): 7–15 presented fps, dominated by software
    rasterization.
  - wasm CPU time per frame: 1.4–3 ms on the menu and 3–6 ms in CAS (sims3Perf.cpuMs).
  - No GPU-backed measurement yet, so the 60/30 FPS targets are unverified.
- **Browser matrix.** Only Chromium (headless, Playwright) has been tested. Firefox and Safari are untested.
- **Unsupported by design (D11).** Network services report "offline". StoreKit purchases are unavailable.

## Evidence locations
- **Frame captures** are produced by `tools/browser_test.js` into a chosen output directory; they are not committed
  because they contain game imagery.
- **Native scripted run:** `SIMS3_VIRTUAL_CLOCK=1 SIMS3_INPUT=… ./build/sims3_native N`. See HANDOFF.md.
