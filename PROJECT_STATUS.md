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
  C. 376 functions contain `TRAP_FALLOFF` sites (flow into data after calls that do not return, as expected).
  0 instructions are unsupported.
- **Resumable variants.** 171 functions also get resumable variants for cooperative guest threads (D7).
- **Runtime.** `runtime/` reimplements, against Apple's documented behavior and libc++ ABI layouts:
  - the ObjC runtime, Foundation, CoreFoundation, UIKit and QuartzCore;
  - OpenGL ES 1.1/2.0, OpenAL, AudioToolbox (AudioFile, AudioQueue with an AAC-LC decoder) and CoreGraphics;
  - MediaPlayer (music library picker, system music player), Security, CommonCrypto, pthreads;
  - libc and the libc++ pieces the binary imports (including iostream locale facets).
- **Browser host.** `web/` holds:
  - `sims3.js`: files, IndexedDB saves, input, lifecycle, WebAudio output, Canvas2D text and host panels;
  - `gl.js`: ES1 fixed function and ES2 on WebGL2. Frames present by blitting the game's framebuffer.
- **Code provenance.**

  | Code | Provenance |
  | --- | --- |
  | Game and SDK logic (`build/gen/*.c`) | statically translated from the original machine code |
  | Platform behavior (`runtime/`, `web/`) | host implementations written for this port |
  | Hand-recovered C/C++ | none |
  | ARM interpreter or emulator | none |

## What works in the browser
Evidence: deterministic headless-Chromium runs of `tools/tests/*.json` (frame-exact and pixel-identical run to run),
frame captures, and native scripted runs.

1. **Boot.** All of the following run:
   - image load and 4,931 binds (0 unresolved);
   - ObjC realization and `+load`, C++ static initializers, `main`, `UIApplicationMain` and the app delegate;
   - the EAGL context and the Nimble and Facebook SDK initialization (offline).

   Boot takes about 1 s.
2. **Front end.**
   - The EA privacy dialog appears over the 3D town fly-over and ACCEPT works.
   - The DLC notice appears and closes.
   - The main menu works, as does Select Game (empty and saved slots).
3. **Create-A-Sim.**
   - A textured, skinned and animated Sim with a mirror reflection (PVRTC textures are decoded).
   - Persona, Traits (list scrolling by drag; five traits) and naming through a real text input.
   - The "start a new game with this Sim?" confirmation.
4. **The world** (`SceneGame` and its loader thread).
   - The house and the Sim render. The HUD shows money, needs and the clock, and the clock advances.
   - The tutorial prompt and hint dialogs work, as do the camera pan and the zoom slider.
5. **Gameplay.**
   - Tapping the fridge opens its menu. Choosing "Quick snack" makes the Sim walk over and eat, which costs §10.
   - A "New Wish" dialog follows, and the wish can be locked in.
6. **Pause menu.**
   - Options (sound, music and tutorial toggles) and Help & About work.
   - Music Library opens the music library picker, which takes the user's own audio files. The picked songs play
     on the system music player (see Audio).
7. **Saving.**
   - "Save and Continue" and "Save and Quit to menu" both work, and the saved slot then appears in Select Game.
   - `/home` (21 files including `Documents/sim3dat0`) persists in IndexedDB across page reloads.
8. **Audio.**
   - Sound effects play through OpenAL.
   - Music (AudioQueue with AAC packets) is decoded by the runtime. All 12 music files match FFmpeg's decoder to
     within 1 LSB, and the game's streamed PCM is identical to the reference decode. Output reaches the speakers in
     real-time runs (RMS 0.10–0.24 at the menu); there were 0 underruns in a 150 s run.
   - Songs from the music library play on a separate host player, and the game's own music yields while they play.
9. **Input and lifecycle.**
   - Mouse, touch and pen pointer events map to UITouch, including drags. Right-drag or Ctrl+drag gives the
     two-finger camera gestures (D17). Keyboard input reaches UITextField.
   - A hidden tab means background and a blurred window means inactive.
10. **No flashing.** The canvas changes only at present time. In 24 consecutive frames each at the menu, in CAS and
    in the world there were no black frames, and luminance was stable (frame-to-frame mean change ≤ 0.72/255).

## Performance
| Measurement | Value |
| --- | --- |
| wasm + GL submission CPU per frame (headless Chromium, this machine) | menu 1.4–3 ms, CAS 3–6 ms, world 4.7 ms (11.8 ms before the GL-layer optimizations) |
| Presented frame rate (headless Chromium with SwiftShader software rendering) | 7–15 fps, bound by software rasterization in the GPU process; the main thread is idle 93–95 % of the time |
| GPU-backed browser | not measured (no GPU here); the 60 fps target and 30 fps minimum are unverified |

## Known failures and open items
- **Background and reload (fix in progress).**
  - Background, which also runs on page unload, ran Nimble's shutdown path. That path hit two runtime gaps:
    fast enumeration over `reverseObjectEnumerator`, and `-[NSDate copyWithZone:]`. Both are now implemented.
  - The background → foreground → reload → load-save sequence is being re-verified.
- **In-world music.** After the home cue, the game restarts its track at volume 0 (`BGMusic::update`, flags 0). This
  comes from the translated code, but has not been compared against a device.
- **Native harness divergence.** Text metrics differ, so native scripted taps desynchronize before the naming
  screen. The browser deterministic mode is the reference for regression runs.
- **Not implemented, reported when reached.**
  - `MPMoviePlayerController` (the midp video player; no trigger seen yet).
  - `UIAlertController`, `UIActionSheet`, `UILabel` and `UIButton` (placeholder classes; none reached so far).
- **Rendering.** WebGL logs `INVALID_ENUM` for two ES1-only `glGetParameter` queries (harmless).
- **Browser matrix.** Only Chromium 141 (headless, Playwright) has been tested. Firefox and Safari are untested.
- **Unsupported by design (D11).** Network services report "offline" (More Games, Facebook, Nimble telemetry).
  StoreKit purchases are unavailable.

## Evidence locations
- **Test scripts.** These are in `tools/tests/`; outputs (frame captures) are written to a chosen directory and are
  not committed, because they contain game imagery.
- **Audio oracle.** `build/aac_test` compares against FFmpeg (see HANDOFF.md).
- **Native scripted runs.** `SIMS3_VIRTUAL_CLOCK=1 SIMS3_INPUT=… ./build/sims3_native N`, plus `SIMS3_AUDIO_DUMP`.
