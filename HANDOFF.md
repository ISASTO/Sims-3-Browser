# HANDOFF

How to rebuild, run and continue the private browser port of *The Sims 3* (iOS 1.4.16). Read `PROJECT_STATUS.md`
for what works and `DECISIONS.md` for why it is built this way.

## Privacy
- The IPA, extracted assets, analysis output and builds are private and git-ignored. Do not push or deploy them.
- The user's GitHub repository `ISASTO/Sims-3-Browser` is public, so nothing from this work has been pushed there.
- `tools/serve.py` binds to 127.0.0.1 only.

## Layout
| Path | Contents |
| --- | --- |
| `original/` | the IPA and the extracted executable, read-only (hashes in PROJECT_STATUS.md) |
| `extract/Payload/sims3_iphone.app/` | the unzipped bundle (resources served to the browser) |
| `analysis/` | reconnaissance output: functions.json, callgraph.json, xrefs.json, stabs.json, objc.json, … |
| `tools/` | Mach-O parser, recompiler, analysis scripts, difftest, browser test driver, server |
| `runtime/` | the compatibility runtime (HLE of iOS frameworks) and the CPU model (`cpu.h`) |
| `web/` | browser host: `index.html`, `sims3.js` (imports and IO), `gl.js` (ES1/ES2 on WebGL2) |
| `build/gen/` | generated C from the recompiler (`recomp_*.c`, `recomp_table.c`, `imports_weak.c`, …) |
| `build/native/`, `build/sims3_native` | headless native build used for fast scripted testing |
| `build/wasm/`, `build/web/` | the browser build (`sims3.wasm` plus copied web files and `bundle-manifest.json`) |

## From a clean private checkout
```sh
# prerequisites: clang/lld 18, wasi-libc (apt: wasi-libc), python3 + capstone 5 + unicorn 2 (difftest), node 22 + playwright (tests)
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
The tools use the absolute root `/home/claude/sims3` (the `ROOT` constant). To build elsewhere, adjust it.

## Testing
- **Headless native run.**
  - `./build/sims3_native <frames>` boots and runs N frames at 60 Hz.
  - Environment variables:
    - `SIMS3_VIRTUAL_CLOCK=1`: the clock advances exactly one frame period per frame, which makes scripted runs
      deterministic.
    - `SIMS3_INPUT="frame:x:y[:hold],frame:d:x0:y0:x1:y1:frames,…"`: taps and drags in game points (667×375).
    - `SIMS3_TEXT="frame:text"`: types into the last shown UITextField and presses Return.
    - `SIMS3_VERBOSE=1`: thread, UI and touch tracing.
    - `SIMS3_TRACE=name,~substring`: logs function entries with r0–r3 and the caller.
    - `SIMS3_PROFILE=1`: call counts per function, printed at exit.
    - `SIMS3_DUMP_PVRTC=dir`: dumps raw and decoded PVRTC textures.
- **Browser.** With the server running:

  ```sh
  NODE_PATH=/opt/npm-tools/node_modules node tools/browser_test.js http://127.0.0.1:8333/ OUTDIR \
      [--script steps.json] [--profile PROFILE_DIR]
  ```

  - Steps: `wait`, `tap`, `drag`, `type`, `key`, `shot`, `perf`, `reload`, `eval`.
  - `--profile` keeps IndexedDB, and so the saves, between runs.
  - The script used for the CAS walkthrough is in PROJECT_STATUS.md.
- **Instruction oracle.** `python3 tools/difftest.py --per-key 3` (Unicorn vs translation).
- **Headless Chromium limits.** It renders with SwiftShader (CPU), so its frame rate measures software rasterization
  more than the port. Per-frame CPU time of the wasm code is reported separately (`window.sims3Perf`). A
  GPU-backed browser is needed for real FPS numbers.

## Where things are implemented
- **Recompiler** (`tools/thumb2c.py`):
  - `Fn.translate` covers instruction semantics.
  - `Fn.emit` produces the function body: normal `F_*` and resumable `A_*` variants.
  - `async_set` is the thread set (D7). `neon_ldst` and `vfp`/`neon` handle SIMD.
- **CPU model and call macros**: `runtime/cpu.h`.
- **ObjC runtime**: `runtime/objc.c`, `objc_api.c`.
- **Foundation and CF**: `foundation*.c`, `cf.c`, `plist.c`, `runloop.c` (NSTimer, GCD, NSDate, blocks).
- **UIKit**: `uikit.c` (views, windows, root view controllers, touches, UITextField, UIView animations,
  lifecycle), `nib.c`.
- **Graphics**: `gles.c` (GL entry points to `hgl_*`), `pvrtc.c`, `web/gl.js`.
- **Audio**: `audio.c` (OpenAL, AudioFile, AudioQueue), `web/sims3.js` (`audio` imports).
- **libc and libc++**: `libc.c`, `fmt.c`, `cxx.c`, `cxx_iostream.c` (ios_base/locale/facets).
- **Threads**: `threads.c` (scheduler, pthread). **Crypto**: `crypto.c`. **Misc platform services**: `misc.c`.
- **Hosts**: `host_wasm.c` and `web/sims3.js` for the browser; `host_native*.c` and `native_main.c` for the native
  test host.

## Unresolved contracts and known gaps
See PROJECT_STATUS.md, "Known failures and open items".

## Next concrete targets
1. Confirm "start a new game" in the browser and reach the world (`SceneGame` loading thread). Fix the next HLE
   gaps on that path. `std::ostringstream` support (`cxx_iostream.c`) was just added for EA telemetry's
   `toString`.
2. Validate save/load round trips across a reload using `--profile`.
3. Fix the sky artifact on the menu backdrop (likely depth range or clear, or an ES1 state difference) and audit
   ES1 emulation fidelity against the reference behavior (texenv combine, fog, alpha test).
4. Measure real frame rate on a GPU-backed browser, then profile the wasm (`SIMS3_PROFILE`) and the GL submission
   path.
