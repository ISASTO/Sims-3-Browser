# PROJECT STATUS

This is the browser port of *The Sims 3* for iOS (bundle `com.ea.sims3inc`, version 1.4.16). The original
armv7 code is statically recompiled to C and compiled to WebAssembly. It runs on a compatibility runtime that
reimplements the iOS frameworks it uses.

## 2026-10-22 Pages integration
- Continued Claude's `ios-recompiled-port` at `e12d028823675b8d70fc64a55cbc2be30b945409` using the supplied IPA
  with the same verified hash. Recovery tools now derive their root from the checkout and `tools/prepare.py`
  regenerates the translation. All 10,423 functions rebuilt; there were no unsupported instructions.
- Added `make site` and `tools/verify_site.py`. The static release contains 1,265 resources in 36 lossless packs,
  eight direct help documents and the host. Total release size: 129.9 MiB. Its compressed WebAssembly code is
  3,039,786 bytes (13,697,886 bytes uncompressed). The complete build needs no application server or custom headers.
- Recorded resource-access order through the first privacy screen and grouped the boot files together. The first
  three packs preload asynchronously; boot resource transfers fell from 53.6 MiB to 13.9 MiB on the tested paths.
- Byte-for-byte verification passed for every packaged resource and the WebAssembly module. Content hashes name
  packs and code so revisions cannot silently share stale resource URLs.
- Replayed new game → character creation → world → fridge → snack, then explicitly saved and confirmed,
  backgrounded/resumed, reloaded, and loaded Alex. The loaded world retained the §690 balance and the locked wish.
  The full sequence ran through the static package at a `/Sims-3-Browser/ios/play/` prefix.
- Re-verified Claude's NSEnumerator/NSDate fixes on that path. Fixed host lifecycle calls in deterministic mode
  to use the virtual clock consistently. The test driver now fails on page/game errors and supports assertions
  and script includes.
- Public release belongs under `ios/play/` on `main`; the source branch retains its root layout. See HANDOFF.md.
- This is a connected playable build with the tested paths above. Many other gameplay systems, hardware frame
  rates and browser engines remain unverified; static recompilation is not hand recovery of original C++ source.

## 2026-10-22 player and performance pass
- Added a player border, Auto/Native/85%/67%/50% quality choices, optional detailed metrics, fit-to-tab and native
  fullscreen. Preferences persist. Native follows the displayed game area and device pixel ratio dynamically,
  retaining the original aspect ratio. Both drawable color and depth buffers resize; reflections keep their own
  target sizes. The game layout, original textures and input coordinates remain those of the virtual iPhone.
- Auto adjusts resolution under sustained load. Palette uniform allocation/caching and buffer upload copies were
  tightened. Hidden tabs stop recurring guest frame work, while lifecycle/save flushing is retained.
- Implemented synthetic CoreMotion accelerometer samples through the game's original callback. The small header
  diamond triggers a shake. The Gardening Tips easter egg awarded §500 in the test, taking the balance from §690
  to §1,190; an outside-tip shake did not award money. Reward animation must finish before dismissing the tip.
- The extended regression covers new game/CAS/world/snack/save/reload, quality controls, dynamic render/depth
  dimensions, fullscreen/fit, DPR changes, 4K and portrait viewports and consecutive-frame probes. See HANDOFF.md
  for the exact automated assertions versus visually inspected outcomes.
- Same-resolution SwiftShader performance is broadly unchanged: mean 27.2 → 28.0 FPS at 1334×750. At 667×375 the
  new Performance preset averaged 49.4 FPS (44.3–52.1), against 25.6–29.0 before at the larger resolution. CPU time
  averaged 4.62 → 4.37 ms at the same resolution. Hardware-GPU measurements remain outstanding. Raw samples are
  in `verification/performance.json`.
- Pages deployed gameplay commit `efd96f9827cb009e5991fc7aeb9b5152d8276786` successfully (run `39780557567`). All
  53 public release files matched the tested package by Git blob hash; resource/wasm reconstruction verification
  passed. The final fresh-profile regression passed all render/depth/DPR/fullscreen assertions and 24 frame
  probes. Auto's final four-sample software-renderer smoke was 49–58 FPS; selected quality survived reload.

## 2026-10-22 mouse and content controls
- Added original-camera scroll-wheel zoom with the original 200–750 house limits; it also uses the recovered
  map slider range. Pixel/line/page inputs, bounds, release cleanup, DPR/resize and menu suppression are tested.
- Double-click and hold the second press to orbit with two virtual fingers. Existing right/Ctrl-drag remains.
  A first-click object popup is dismissed through the original Back action before a double-press orbit begins.
- A long press on the header diamond reveals the optional content unlock. It loads all 15 bundled packs and the
  original bonus reward, enables all furniture tiers and house-upgrade eligibility, and retains normal prices.
  It does not forge completed goals, achievements, skills or money. The access preference and original content
  settings survive reload. A normal diamond click still sends a device shake.
- The fresh-profile mouse regression includes the entire player/save/reload/shake/resolution regression. Actual
  camera angle/distance and synthetic contact cleanup are asserted; all 15 pack IDs, bonus state, unchanged goal
  and achievement fields, idempotence, saved §1,190 balance and unlock persistence are checked after reload.
- The packaged inventory is now 1,263 original resources in 35 packs, 52 files / 134,287,801 bytes. File-sync
  staging artifacts are excluded, and verification checks the complete inventory as well as every resource byte.
  Historical release counts above include the former artifacts. See HANDOFF.md for current runtime hashes.
- Pages deployed gameplay commit `11a7e4c0366f20a97e78f270cc626fbae7a4e08e` (run `39820638134`). All 52 public
  files matched the tested package; complete resource/wasm reconstruction passed. The final exact-release run
  passed 40 assertions and 24 complete-frame probes. See `verification/mouse-controls.json`.
- Hardware-GPU and Firefox/Safari measurements remain outstanding; every individual pack item has not been
  purchased/rendered during this pass.

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
The first three rows below are Claude's earlier measurements. The final rows are the 2026-10-22 rebuild's
short real-time checks; these use Chrome Headless Shell with in-process SwiftShader on this machine and are
not GPU-backed hardware results or a sustained performance guarantee.

| Measurement | Value |
| --- | --- |
| wasm + GL submission CPU per frame (headless Chromium, this machine) | menu 1.4–3 ms, CAS 3–6 ms, world 4.7 ms (11.8 ms before the GL-layer optimizations) |
| Presented frame rate (headless Chromium with SwiftShader software rendering) | 7–15 fps, bound by software rasterization in the GPU process; the main thread is idle 93–95 % of the time |
| GPU-backed browser | not measured (no GPU here); the 60 fps target and 30 fps minimum are unverified |
| 2026-10-22 packed release, real-time menu flyover | about 48–51 fps, 0.9–1.1 ms wasm + GL submission CPU per frame |
| 2026-10-22 packed release, real-time loaded house | about 20–28 fps, 4.4–5.9 ms wasm + GL submission CPU per frame; about 20–25 fps after background/resume |

## Known failures and open items
- **Background and reload.** The NSEnumerator and NSDate runtime fixes passed the new browser regression.
  Backgrounding flushes files the game has written; use the in-game Save and Continue command and its green-tick
  confirmation to preserve recent world progress. The confirmed-save/reload regression retained the §690 balance.
- **In-world music.** After the home cue, the game restarts its track at volume 0 (`BGMusic::update`, flags 0). This
  comes from the translated code, but has not been compared against a device.
- **Native harness divergence.** Text metrics differ, so native scripted taps desynchronize before the naming
  screen. The browser deterministic mode is the reference for regression runs.
- **Not implemented, reported when reached.**
  - `MPMoviePlayerController` (the midp video player; no trigger seen yet).
  - `UIAlertController`, `UIActionSheet`, `UILabel` and `UIButton` (placeholder classes; none reached so far).
- **Rendering.** The two known ES1-only GL state queries now use emulated state without WebGL warnings. Original-device comparison and broader reflection/shadow coverage remain outstanding.
- **Browser matrix.** Only Chromium 141 (headless, Playwright) has been tested. Firefox and Safari are untested.
- **Unsupported by design (D11).** Network services report "offline" (More Games, Facebook, Nimble telemetry).
  StoreKit purchases are unavailable.

## Evidence locations
- **Test scripts.** These are in `tools/tests/`; outputs (frame captures) are written to a chosen directory and are
  not committed, because they contain game imagery.
- **Audio oracle.** `build/aac_test` compares against FFmpeg (see HANDOFF.md).
- **Native scripted runs.** `SIMS3_VIRTUAL_CLOCK=1 SIMS3_INPUT=… ./build/sims3_native N`, plus `SIMS3_AUDIO_DUMP`.
