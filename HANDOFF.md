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

### Published delivery verification
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

Click/tap for ordinary input, drag to pan, and right-drag or Ctrl+drag for two-finger camera gestures. Use the
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
