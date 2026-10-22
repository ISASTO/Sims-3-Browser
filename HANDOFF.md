# HANDOFF

How to rebuild, run and continue the private browser port of *The Sims 3* (iOS 1.4.16). Read `PROJECT_STATUS.md`
for what works and `DECISIONS.md` for why it is built this way.

## Privacy
- The IPA, extracted assets, analysis output and builds are private and git-ignored. Do not push or deploy them.
- The user's GitHub repository `ISASTO/Sims-3-Browser` is public, so nothing from this work has been pushed there.
  That repository already holds game files from an earlier Android-based attempt; that is outside this work.
- `tools/serve.py` binds to 127.0.0.1 only.

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

## From a clean private checkout
```sh
# prerequisites: clang/lld 18, wasi-libc (apt: wasi-libc), python3 + capstone 5 + unicorn 2 (difftest),
#                node 22 + playwright (tests), ffmpeg (AAC oracle only)
mkdir -p original extract && cp /path/to/com_ea_sims3inc-iOS8_0.ipa original/
sha256sum original/com_ea_sims3inc-iOS8_0.ipa      # must be 8820bd6221c288d3d2d413ccd013b2300276a22c55cdaa14399af18b745c55aa
(cd extract && unzip -q ../original/com_ea_sims3inc-iOS8_0.ipa)
cp extract/Payload/sims3_iphone.app/sims3_iphone original/ && chmod a-w original/*
mkdir -p analysis build/gen
python3 tools/stabs.py original/sims3_iphone analysis/stabs.json                       # debug-map STABS per compile unit
python3 tools/symmap.py original/sims3_iphone analysis/stabs.json analysis/functions.json   # function list
python3 tools/objc.py original/sims3_iphone analysis/objc.json                         # ObjC classes/categories
python3 tools/callgraph.py         # -> analysis/callgraph.json (needed for the resumable-thread set)
python3 tools/xrefs.py             # -> analysis/xrefs.json (used by strrefs.py / missing_sels.py)
python3 tools/manifest.py          # -> build/gen/image_manifest.c/.h (segments, binds, ObjC sections, init funcs)
python3 tools/thumb2c.py build/gen    # -> recomp_*.c (about 30 s; prints problem counts)
make -j"$(nproc)" native           # headless build (about 5 min on 2 cores)
make -j"$(nproc)" wasm             # browser build (about 10 min on 2 cores) -> build/web/
python3 tools/serve.py             # http://127.0.0.1:8333/
```
- The tools use the absolute root `/home/claude/sims3` (the `ROOT` constant). To build elsewhere, adjust it.
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
1. Re-verify the background → foreground → reload → load-saved-game sequence after the NSEnumerator and NSDate
   fixes. Then add it to `tools/tests/`.
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
