# HANDOFF

How to rebuild, run and continue the browser port of *The Sims 3* (iOS 1.4.16). Read `PROJECT_STATUS.md`
for what works and `DECISIONS.md` for why it is built this way.

## Current release and checkout layout (2026-10-22)
- The user explicitly requested continuing Claude's `ios-recompiled-port` branch and publishing a working build
  on the existing GitHub Pages site. This supersedes the earlier private-only project brief.
- The source branch keeps this project at its root. On `main`, the same project is under `ios/`, with the static
  release in `ios/play/`. The repository root entry page opens that release. The previous Android prototype
  remains under `web/` and its recovery work is preserved.
- Public release URL: https://isasto.github.io/Sims-3-Browser/ios/play/
- The original IPA, extraction, generated C, analysis output, full test-capture directories, and users' saves are
  excluded from source commits. A selected test screenshot is in `verification/gameplay.png`. The published
  release contains the compiled runtime and the resources needed to play.
- Local development servers bind to 127.0.0.1 by default.

### Current published speed verification
- Gameplay commit `8020f528932936c55d58e04fe56f5354e7c8b8b6`, source commit
  `3c950ccd344ea2577ce7beeadb841b38e6dc24fb`, Pages run `39852839506`: deployment succeeded.
- Downloaded all **53 public release files / 134,292,962 bytes** using normal TLS certificate validation. Every
  Git blob hash matched the tested package. Reconstructed all 1,263 original resources and the WebAssembly module
  byte for byte against the original input/local build.
- The final exact-release fresh-profile run passed **56 assertions and 48 complete-frame probes** (9/9 lit sample
  locations each). Seven clock unit cases and eight ordinary real-time assertions also passed. Original game-clock
  progression, paused menus, input timing, audio recovery and confirmed saved §1,190/content records were checked.
- Visually reviewed the ordinary-play 1×/8× clock captures, metrics view, deterministic 8× world and reloaded
  household. Hardware GPU and Firefox/Safari limitations remain unchanged. Evidence: `verification/speed-controls.json`.

### Fast-forward and superspeed (2026-10-22)
- The player **Speed** selector offers Normal 1×, Fast-forward 2× and Superspeed 4×/8×. Reload starts at 1×.
  The selected boost applies to a loaded, active world. Loading, pause/context/hint menus, the content dialog,
  inactive/background app states and held mouse/touch/wheel gestures use 1×; returning to play resumes the selection.
- `web/simulation.js` advances the original run loop in at most 16.67 ms accelerated steps. Additional steps have
  a 12 ms CPU budget and a 16-step limit per display callback; excess work is discarded without catch-up debt.
  Normal speed retains one run-loop call per display callback. Visibility changes reset the physical timestamp,
  so reopening a tab does not replay time spent away. Physical input timing stays independent of game time.
- Both monotonic and epoch clocks follow this simulation timeline. Original `midp::System::currentTimeMillis`
  (0xd0a00) calls `gettimeofday`; accelerating only `js_now` makes host metrics fast while ordinary gameplay stays
  at 1×. `js_wall` is therefore a real boot epoch plus elapsed simulation time in normal play too. The deterministic
  mode uses the same clock relationship, with its existing fixed epoch. No game-clock or action-state fields are patched.
- `sims3_speed_available` reads the original scene/world/modal flags. It permits sleep and action cameras, rather
  than requiring the manual camera. Intermediate draws are suppressed. If a native paint happened before the last
  substep, `sims3_redraw` calls the original `EAGLView.draw` once to present current state without another update.
  That method binds, calls `DisplayIPhone::refresh` and flushes; the original paint path is separate from update.
  Visible FPS counts actual blits, not skipped presentations. Dropping that earlier paint without a redraw reduced
  visible FPS in the first real-time test, even when the simulation had spare CPU.
- Accelerated gameplay mutes game audio. Stream queues still consume in simulation time; mode changes stop and
  discard old scheduled sound before re-anchoring, so there is no sound backlog or accumulating PCM buffers.
  Normal/menu audio resumes at 1×. User-selected music files remain on their independent media timeline.
- Metrics show measured simulation speed and the selected rate. CPU limits can reduce the achieved rate, especially
  at 8×. Lowering render quality can help when graphics submission consumes the available budget.
- Current package: **53 files / 134,292,962 bytes**, 1,263 original resources in 35 packs. Runtime
  `game-code-da0c477701c0a1bf.bin`, 13,703,647 uncompressed bytes, SHA-256
  `da0c477701c0a1bf33956555d4b08026ed3c54df5d174ec43eb74e250e826b83`; host version `d19471246feccb68`.
- `tools/tests/speed_controls.json` includes the complete mouse/player/save regression and checks the original
  SimData minute counter, exact requested clock ratios, pause/menu/input suppression, 8× complete frames,
  bounded audio queues, background/resume, reload default and the saved §1,190 household/content records.
  `tools/test_simulation_clock.mjs` checks rate invariance at 60/144 Hz, CPU limiting, bounded stalls and clock resets.
- Final local validation: seven clock unit cases, 56 browser assertions and 48 complete-frame probes. The original
  clock advances 2/4/8/16 game minutes over two deterministic display seconds at the four rates. A separate
  ordinary real-time run passed eight assertions and advanced 3/6/12/23 game minutes in three seconds; sampled
  achieved rates were 1×/2×/3.90×/7.51×, with visible FPS 60/43/52/58 at Performance 50% (566×318) on SwiftShader.
  These short samples are not hardware-GPU benchmarks. Audio queues remained bounded and normal sound returned.
  `verification/speed-controls.json` records samples and limits; `verification/superspeed.png` shows the 8× player.
- `tools/tests/speed_realtime.json` uses ordinary play, an existing saved Alex profile, and the harness option
  `--inspect-wasm` to read original memory. This option instruments module instantiation in the test browser only;
  it does not enable deterministic time or add a memory accessor to the public player. Each rate compares original
  elapsed game minutes against elapsed simulation seconds. Review its clock captures as well as FPS samples.

### Previous published mouse controls verification
- Gameplay commit `11a7e4c0366f20a97e78f270cc626fbae7a4e08e`, source commit
  `2e173464bb275d5ca388a97d8128febe735b1a82`, Pages run `39820638134`: deployment succeeded.
- Downloaded all 52 public release files (134,287,801 bytes) with normal TLS certificate validation. Every Git
  blob hash matched the tested package. Reconstructed all 1,263 original resources and the wasm byte for byte.
- The final exact-release fresh-profile replay passed **40 assertions**, including all 24 complete-frame probes,
  actual wheel zoom limits, double/right/Ctrl camera rotation, cancellation, persistent content records and the
  confirmed saved §1,190 household. Reviewed the camera, content-dialog, saved-household and original §1,000
  house-upgrade captures. A separate ordinary real-time run passed wheel, double-hold and dialog checks.
- `verification/mouse-controls.json` and `RELEASE_CHECKS.json` record the input/build identity and delivery.
  Hardware GPU and additional-browser limitations below remain applicable.

### Mouse controls and content easter egg (2026-10-22)
- Scroll over the game to zoom: up moves closer, down moves farther away. `runtime/browser_controls.c` reads
  the original live zoom-bar geometry and distance, and the host sends a single virtual finger down/move/up
  on that slider. This changes the original camera, with its own limits, rather than scaling the canvas. The
  recovered functions are `renderHUDZoomBar` (0x46aac) and `processInputCameraNavigation` (0x47038); the normal
  house range is 200–750, and the map range is 800–1800. Wheel events are ignored in menus, during held contacts,
  and when the original camera control is unavailable. Ctrl/Meta-wheel retains browser zoom. Pixel, line and
  page deltas normalize into a bounded queue consumed before game frames; resizing/DPR does not change input points.
- Double-click and keep the second press held, then drag, for the same two-finger gesture as right-drag or
  Ctrl+drag. Detection uses 400 ms and a 6 CSS-pixel radius, ignores completed drags, and leaves ordinary clicks
  immediate. If the first camera-area click opened an object menu, a narrowly scoped input hook calls the
  original `processContextMenuBack` before the original two-finger begin. This prevents the orbit from being
  swallowed by that first click's menu. The hint expires after 500 ms. Touch and pen still map directly.
- Pointer cancellation, lost capture, window blur, backgrounding and page exit release all synthetic contacts.
  Releases use touchesEnded because this original EAGLView does not implement touchesCancelled. No wheel work
  runs when idle. Input traces and read-only camera/memory diagnostics exist only behind `?test`.
- Hold the small header diamond for 850 ms to reveal **Unlock all content**. Shift-click (including keyboard
  Shift+Enter) or right-click also opens the same native modal dialog. A normal diamond click still sends the
  existing device shake. Unlocking requires a loaded household; a queued request executes between game frames.
- Unlocking loads all **15 bundled packs**, IDs 1–14 and 16, through the original `DLCManager::unlockDLC`, then
  calls `AppEngine::unlockBonus`, including its original settings writer. No missing pack 15 or server download
  is invented. Two opt-in recompiler entry hooks make furniture available and expose the original house-upgrade
  prices (§1,000 then §2,500; no upgrade beyond level 2). They match both symbol and verified address. All normal
  execution paths remain the recovered code until the user enables this option. Items still cost Simoleons.
- The cheat does not mark goals complete, alter skills, grant money, change achievement flags or remodel the
  house. Its access preference is `sims3-content-unlocked-v1` in localStorage; the original pack and bonus records
  persist through the existing game settings files in IndexedDB. Reopen an existing shop/wardrobe list to refresh
  its contents. Save household progress through **Save and Continue** and its green confirmation as usual.
- `tools/tests/mouse_controls.json` includes the entire player regression, then verifies actual camera distance
  and angle, wheel bounds and delta units, browser modifier-wheel preservation, resizing/DPR, double/right/Ctrl
  two-finger traces, blur cleanup, no wheel activation in pause/main menus, the real long press, idempotent unlock,
  original goal/achievement/balance preservation, confirmed save and unlock persistence after a page reload.
  The original shake reward reaches §1,190 before the cheat, and the reloaded household retains §1,190 afterward.
  A normal real-time saved-household smoke also passed wheel, double-hold and long-press dialog checks.
  Review the captures as well as assertions. `fdrag` supports `double`/`control`; `wheel`, `pointer` and `hold`
  steps support real browser input. Fullscreen, quality, DPR and all 24 complete-frame probes still pass.
- Packaging now excludes file-sync staging artifacts. The release inventory contains **1,263 original resources
  in 35 packs, 52 files / 134,287,801 bytes**. `verify_site.py` also checks that the complete resource inventory
  matches the input bundle. Current wasm: `game-code-f71cbc6d842f1374.bin`, 13,703,075 uncompressed bytes,
  SHA-256 `f71cbc6d842f1374b02f4e97bc61263e9d73b89f8abb937abedd3d37c0067b5e`; host version `82aa5b93427b90f8`.
- Remaining validation: hardware-backed Chrome, Firefox/Safari input and frame rate, purchasing/rendering every
  individual pack item, town travel, careers and minigames. Do not treat successful static translation or these
  browser regressions as proof of complete gameplay coverage.

### Player, resolution and performance pass (2026-10-22)
- `web/player.js` supplies a restrained player frame, persistent quality selection, optional metrics, fit-to-tab
  and Fullscreen API controls. The small header plumbob sends a device shake; the site does not advertise a money
  button. Native fullscreen retains the controls. Unsupported fullscreen browsers still have fit-to-tab.
- **Native** renders at the displayed game rectangle's CSS size × `devicePixelRatio`, within GPU limits. A
  `ResizeObserver`, window/visual-viewport resize and DPR checks handle window resizing, zoom and monitor changes.
  The original 667:375 aspect ratio is retained, so wider/taller displays have letterboxing. Original texture and
  UI asset detail is unchanged; the 3D scene rasterizes at the selected resolution.
- `gl.js` reallocates the actual drawable color, depth and stencil renderbuffers and remaps viewport/scissor
  rectangles. Guest GL queries, 667×375 input points and the @2x asset selection stay consistent. Texture-backed
  reflection/shadow targets keep their own sizes. The canvas backing size changes only at a complete presentation,
  preserving the existing protection against partial/black frames. Avoid simply changing canvas width/height or
  the virtual device scale: neither implements this contract correctly.
- **Auto** starts at no more than roughly 1080p, reduces resolution after sustained rates below 45 FPS, and
  cautiously increases it after sustained rates above 57 FPS. It uses cooldowns, a 50%/667-pixel-wide floor where
  appropriate, and resets its initial budget on a large display-size increase. Manual Native/85%/67%/50% presets
  stay fixed relative to display pixels. Defaults/preferences use localStorage key `sims3-player-v1`.
- Metrics update once per second: presented FPS, actual resolution, frame time/p95, game+GL submission CPU/peak,
  draw calls, buffer-upload rate, DPR/render scale and WebAssembly memory. CPU is not GPU execution time; memory
  is the wasm allocation, not the browser's entire footprint. Hidden pages stop recurring game frames after the
  existing lifecycle/IndexedDB flush. Resuming clears timing samples.
- Low-risk graphics changes reuse palette uniform storage/revisions and avoid an unnecessary vertex-buffer
  upload copy. ES1 client-active-texture/matrix-mode queries now use the emulated state instead of issuing invalid
  WebGL queries. Static packaging versions the shell's module imports together to prevent mixed cached adapters.
- **Motion:** `runtime/misc.c` now implements the accelerometer subset of CMMotionManager/CMAccelerometerData.
  It copies the original callback block and dispatches three-double `CMAcceleration` samples on the guest run
  loop. `sims3_shake` queues a 650 ms waveform in g; an 800 ms cooldown and background cancellation bound it.
  The original game owns reward eligibility and amount. There are no writes to money or other game state.
  Gardening Tips → plumbob was verified from §690 to §1,190. Let the original reward animation finish before
  closing the tip; the regression waits 600 virtual frames. A shake outside the tip left the balance at §690.
- `tools/tests/player_controls.json` includes the complete new-game/snack/confirmed-save/reload regression, then
  exercises the secret, all presets, drawable **and depth** sizes, fit/fullscreen, DPR 1→2→1, a 4K viewport, portrait
  input and 24 consecutive frame probes. Captures require visual review for balance and menu transitions; the
  framebuffer sizes/completeness and frame probes are asserted automatically. `?test` starts Native and disables
  automatic quality adaptation so captures remain deterministic. Harness `resize`, `dpr`, `select` and `profile`
  steps support display tests and Chromium CPU sampling; `SIMS3_VIEWPORT`/`SIMS3_DPR` set the initial display.
- Fixed-resolution comparison on Chrome Headless Shell 141/SwiftShader, saved house, eight one-second samples:

  | Condition | Presented FPS range | Mean FPS | Mean game + GL submission CPU |
  | --- | --- | --- | --- |
  | Before, 1334×750 | 25.6–29.0 | 27.2 | 4.62 ms |
  | After, 1334×750 | 25.6–29.5 | 28.0 | 4.37 ms |
  | After, Performance 667×375 | 44.3–52.1 | 49.4 | 4.05 ms |

  Resolution control supplies the material gain in this software renderer. The small same-resolution change is
  within run-to-run variation. See `verification/performance.json` for samples. These are not hardware-GPU FPS
  guarantees. Hardware-backed Chrome, Firefox and Safari still need a measured pass.

### Previous published player verification
- Gameplay commit `efd96f9827cb009e5991fc7aeb9b5152d8276786`, source commit
  `e9c6361277f23205fa79f504de48391e7f49e198`, Pages run `39780557567`: deployment succeeded.
- Downloaded all 53 public release files (136,207,293 bytes) with normal TLS verification. Every Git blob hash
  matched the tested package. Reconstructed all 1,265 resources and compared the wasm against the local build;
  all passed. Host module version: `935157e8d0099e54`.
- The final fresh-profile `player_controls.json` replay passed, including all 24 consecutive frame probes
  (9/9 lit locations each). Visually checked the restored world, §500 reward and portrait pause-menu input.
  A separate DPR-2 CAS capture showed the character and mirror correctly.
- A final real-time Auto smoke test on the static project prefix sampled 49–58 FPS at an adaptive 688×387
  render size with metrics open. Background/resume and a selected Balanced preference surviving reload passed.
  This four-sample smoke is separate from the fixed-resolution comparison above.

### Initial published delivery verification
- Pages successfully deployed gameplay commit `a3c47f42e2cb7cd91c707d0ec41fc50e789f10f7` in Actions run
  `39773079079` (2026-10-22).
- Downloaded all 52 static release files from the public HTTPS URL using normal TLS verification: 136,190,201
  bytes. Every Git blob hash matched the tested release, then `verify_site.py` confirmed all 1,265 resources and
  the wasm against the extracted input/local build.
- Browser gameplay validation used WebGL2-enabled Chrome Headless Shell, including normal real-time loading of
  the saved house. The screenshot under `verification/` comes from that local test.
- This chat's separate cloud browser reached the deployed host but could not create a WebGL2 context. It stopped
  at the explicit graphics requirement, so a live UI gameplay pass in that browser is unverified. Hardware-backed
  browser tests remain the next target. The public-delivery hash check and local gameplay checks are distinct.

## Run the prebuilt release
From `main`, run `python3 -m http.server 8333 --bind 127.0.0.1` in the repository root, then open
`http://127.0.0.1:8333/ios/play/`. On the source branch, serve `play/` instead.

Click/tap for ordinary input, drag to pan, scroll to zoom, and double-click-hold, right-drag or Ctrl+drag for
two-finger camera gestures. Use **Speed** for 2× fast-forward or 4×/8× superspeed; game audio mutes during a boost.
Hold the header diamond for the optional content unlock. Use the
game's **Save and Continue**, then confirm the green tick, before reloading. Saves are stored in IndexedDB on
the current browser origin; the former Android build's saves are separate and are not imported.

## Layout
| Path | Contents |
| --- | --- |
| `original/` | the IPA and the extracted executable, read-only (hashes in PROJECT_STATUS.md) |
| `extract/Payload/sims3_iphone.app/` | the unzipped bundle (resources served to the browser) |
| `analysis/` | reconnaissance output: functions.json, callgraph.json, xrefs.json, stabs.json, objc.json, … |
| `tools/` | Mach-O parser, recompiler, analysis scripts, difftest, AAC oracle, browser test driver, server |
| `tools/tests/` | deterministic browser test scripts (see Testing) |
| `runtime/` | the compatibility runtime (HLE of iOS frameworks) and the CPU model (`cpu.h`) |
| `web/` | browser host: `index.html`, `sims3.js` (imports and IO), `gl.js` (ES1/ES2 on WebGL2) |
| `build/gen/` | generated C from the recompiler (`recomp_*.c`, `recomp_table.c`, `imports_weak.c`, …) |
| `build/native/`, `build/sims3_native` | headless native build used for fast scripted testing |
| `build/wasm/`, `build/web/` | the browser build (`sims3.wasm` plus copied web files and `bundle-manifest.json`) |
| `build/site/` | generated static release: compressed code, lossless resource packs, browser host and manifest |
| `play/` | checked-in Pages release; copy only files listed by the generated manifest and the known host files |

## From a clean private checkout
```sh
# On main, first: cd ios
# prerequisites: clang/lld 18, wasi-libc, libclang-rt-dev-wasm32, Python 3.11+
python3 -m pip install -r requirements-analysis.txt
python3 tools/prepare.py /path/to/com.ea.sims3inc-iOS8.0.ipa
make -j4 wasm
make site
python3 tools/verify_site.py       # every resource + wasm must match, byte for byte
python3 -m http.server 8333 --bind 127.0.0.1 --directory build/site
# To develop against loose bundle files instead:
python3 tools/serve.py             # http://127.0.0.1:8333/
```
- Tools derive the checkout root from `tools/project.py`; no `/home/claude` symlink or path edits are needed.
- For a custom compiler/sysroot, pass `CC=/path/to/clang-18 WASI_SYSROOT=/path/to/usr` to make. Use
  `WASM_LDFLAGS=-fuse-ld=/path/to/wasm-ld` if the linker is not discoverable.
- `make native` remains available. Its default paths are relative to the checkout; from another working directory
  set `SIMS3_BUNDLE` and `SIMS3_HOME` to absolute paths.
- `python3 tools/xrefs.py` is optional for a build, and generates xrefs used by the disassembly analysis helpers.
- `runtime/aac_tables.h` is generated data and is committed. To regenerate it, see `tools/gen_aac_tables.py`.

## Testing
- **Deterministic browser runs (the regression reference).**
  - `?test` replaces the clock with a virtual one and fixes the wall-clock origin and the random source. Frames
    advance only when the script says so, so runs are pixel-identical (D16).
  - Command:

    ```sh
    NODE_PATH=/opt/npm-tools/node_modules node tools/browser_test.js "http://127.0.0.1:8333/?test" OUTDIR \
        --script tools/tests/newgame.json --profile FRESH_PROFILE_DIR
    ```

  - Scripts:

    | Script | What it does | Checkpoints |
    | --- | --- | --- |
    | `tools/tests/newgame.json` | fresh profile, then privacy, DLC notice, menu, CAS, persona, traits, name "Alex", confirm, world | 21 `b_*` captures and `w0`–`w5` (tutorial prompt) |
    | `tools/tests/world_snack.json` | continues from the world: declines the tutorial, closes the hint, opens the fridge, Quick snack | `z1`–`z4` (§690, then "New Wish: Cook minestrone") |
    | `tools/tests/save_reload.json` | includes `world_snack`, locks the wish, dismisses its hint, explicitly saves and confirms, backgrounds/resumes, reloads, selects Alex and reloads the world | `after_save`, `saved_slot`, `loaded_world`, `loaded_world_resumed`; saved balance §690 |
    | `tools/tests/speed_controls.json` | includes all mouse/player regressions, then 1×/2×/4×/8×, original clock, input/pause, audio, background and save/reload | 56 assertions, 48 complete-frame probes; `speed_1` through `speed_8`, `speed_saved_household` |

  - The save/reload path was re-verified on the packed static release under a `/Sims-3-Browser/ios/play/` prefix.
    Check the screenshots as well as assertions: finding `sim3dat0` alone does not prove recent progress was saved.
    The original game asks for a second confirmation after "Save and Continue".
  - `assert` steps fail the process on false; fatal game errors and page exceptions now also return nonzero.
    `include` composes scripts relative to their containing JSON file.
  - Install Playwright 1.56.0 in `build/test-tools/`, then set
    `NODE_PATH="$PWD/build/test-tools/node_modules"`. `SIMS3_BROWSER_PATH` can select an existing browser binary;
    `SIMS3_BROWSER_ARGS` accepts a JSON array of extra test-only flags.
  - The 2026-10-22 validation used Chrome Headless Shell 141.0.7390.37 with SwiftShader, Playwright 1.56.0, Node
    24.19.0 and Python 3.12.14. Restricted CI required `--single-process`, `--no-zygote`, `--in-process-gpu`.
    These flags are for the test machine, not requirements for players.

  - Steps:
    - `frames`, `ftap`, `fdrag` advance the virtual clock;
    - `shot`, `eval`, `wait`, `tap`, `drag`, `rdrag`, `type`, `key`, `reload`, `waitBoot`;
    - `files` / `click` operate host panels (the music library picker);
    - `background` simulates a hidden tab.
  - `?verbose` turns on runtime logging in the browser.
  - `window.sims3Audio`, `sims3AudioLevel()`, `sims3Home()` and `sims3GL` (draw capture: `capture`, `capturePos`,
    `debugSolid`) are diagnostics.
- **Real-time browser runs.** Leave out `?test`. `perf` steps report `sims3Perf` (presented fps, wasm + GL CPU per
  frame).
  `--script tools/tests/speed_realtime.json --profile SAVED_ALEX_PROFILE --inspect-wasm` checks the native clock
  under real-time acceleration. Use a copy of a saved profile produced by the complete regression.
- **Simulation-clock unit checks.** `node tools/test_simulation_clock.mjs` runs seven dependency-free cases.
- **Headless native run.**
  - `./build/sims3_native <frames>` boots and runs N frames at 60 Hz.
  - Environment variables:
    - `SIMS3_VIRTUAL_CLOCK=1`: deterministic frame clock.
    - `SIMS3_INPUT="frame:x:y[:hold],frame:d:x0:y0:x1:y1:frames,…"`: taps and drags in game points (667×375).
    - `SIMS3_TEXT="frame:text"`: types into the last UITextField and presses Return.
    - `SIMS3_VERBOSE=1`: UI, touch and audio tracing.
    - `SIMS3_TRACE=name,~substring`: logs function entries with r0–r3 and the caller.
    - `SIMS3_PROFILE=1`: call counts per function, printed at exit.
    - `SIMS3_DUMP_PVRTC=dir`: dumps raw and decoded PVRTC textures.
    - `SIMS3_AUDIO_DUMP=dir`: writes each AudioQueue stream's PCM.
    - `SIMS3_MEDIA=pick`: makes the music library picker return two stand-in songs (anything else cancels).
  - Native text metrics differ from the browser's, so native taps desynchronize before naming. Use native runs for
    boot, menu and audio work.
- **AAC oracle.**

  ```sh
  cc -O2 -Iruntime tools/aac_test.c -lm -o build/aac_test
  build/aac_test extract/Payload/sims3_iphone.app/res/bgm_menu_1.caf /tmp/ours.raw
  ffmpeg -i extract/Payload/sims3_iphone.app/res/bgm_menu_1.caf -f s16le -acodec pcm_s16le /tmp/ref.raw
  ```

  Then compare the two files sample by sample. Expect a maximum difference of 1 and an SNR of at least 104 dB.
- **Instruction oracle.** `python3 tools/difftest.py --per-key 3` (Unicorn vs translation).
- **Disassembly with names.** `python3 tools/selrefs.py '<function>'` resolves selectors, classes and strings.
- **Headless Chromium limits.**
  - It renders with SwiftShader (CPU), so its frame rate measures software rasterization.
  - Playwright's Chromium has no AAC codec. This no longer matters, because the runtime decodes AAC itself.

## Where things are implemented
- **Recompiler** (`tools/thumb2c.py`):
  - `Fn.translate` covers instruction semantics.
  - `Fn.emit` produces the normal `F_*` and resumable `A_*` variants.
  - `async_set` is the thread set (D7).
- **CPU model and call macros**: `runtime/cpu.h`.
- **ObjC runtime**: `runtime/objc.c`, `objc_api.c`.
- **Foundation and CF**: `foundation*.c`, `cf.c`, `plist.c`, `runloop.c` (NSTimer, GCD, NSDate, blocks).
- **UIKit**:
  - `uikit.c`: views, windows, root view controllers, touches, UITextField, UIWebView, navigation bars, modal
    presentation, UIView animations, lifecycle.
  - `nib.c`.
- **Graphics**: `gles.c` (GL entry points to `hgl_*`), `pvrtc.c`, `web/gl.js`.
- **Audio**:
  - `audio.c`: OpenAL, AudioFile, and AudioQueue (decodes at enqueue; buffers complete on the host output clock).
  - `aac.c`: the AAC-LC decoder.
  - `web/sims3.js`: the WebAudio output streams.
- **MediaPlayer**: `mediaplayer.c` (library authorization, the picker controller and panel, the system music player).
  `web/sims3.js` holds the picker panel, the player element and the now-playing control.
- **libc and libc++**: `libc.c`, `fmt.c`, `cxx.c`, `cxx_iostream.c`.
- **Threads**: `threads.c`. **Crypto**: `crypto.c`. **Misc platform services**: `misc.c`.
- **Hosts**: `host_wasm.c` and `web/sims3.js` for the browser; `host_native*.c` and `native_main.c` for the native
  test host.

## Unresolved contracts and known gaps
See PROJECT_STATUS.md, "Known failures and open items".

## Next concrete targets
1. Run the Pages release on GPU-backed desktop browsers, record real frame times, and test Firefox and Safari.
   The background → foreground → confirmed save → reload → load-save sequence has passed and is now in `tools/tests/`.
2. Explore the remaining systems for runtime gaps:
   - build/buy mode;
   - leaving the lot (town map, Corsican Bistro, other lots);
   - the cooking and fishing minigames;
   - careers, the phone, the Goals Checklist, the Sims Store (offline);
   - an overnight soak.
3. Measure frame rate on a GPU-backed browser (Chrome/Edge/Safari/Firefox on real hardware). Profile again if
   below 60 fps.
4. Implement `MPMoviePlayerController` if any path reaches it. Implement UIAlertController/UIActionSheet when they
   are reached.
