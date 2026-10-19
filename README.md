# The Sims 3 mobile: native recovery and browser prototype

**Status: unfinished. This is not yet a fully playable browser port.**

This project recovers the uploaded Android game's files and runs its original ARM
game executable under WebAssembly. It does not replace the gameplay with a new
Sims-like simulation. The Android launcher is decompiled separately. The native
game's original C++ source has not been reconstructed.

Native ARM decompilation is now available under `recovered/native/`, together
with a portable Ghidra database and reproducible scripts. The connected native
core now compiles **65 recovered functions** to WebAssembly MVP: arithmetic,
memory operations, strings, connected path/resource-name handling, default-locale
character operations, and the original scalar subset. It passed 380,258
comparisons with the ARM executable, including result registers and memory.
The path subsystem includes a relocated directory prefix and checks using all
736 resource-manifest paths. ABI annotations were recovered for 43 functions
and 128 of their callers were
re-exported. The whole game does not compile natively yet. See
[NATIVE_PORT.md](NATIVE_PORT.md) for the measured results and remaining work.
The main GitHub Pages game still uses the emulator prototype and retains its
performance/rendering problems.

The earlier stream component adds **15 original binary serialization functions**
and a complete native byte roundtrip of the original 63,953-byte font resource.
Its controlled memory-file/callback host and validation scope are documented in
[native/serialization/README.md](native/serialization/README.md).

The latest **linked native resource build** adds six original hash/chunk/close
routines, for **86 distinct recovered original entry points in one Wasm instance
and one linear memory**. It passes **412,722 full ARM/native comparisons** against that linked binary,
including 6,653 new resource cases, and 502 selected linked fixtures in Node
and on the deployed GitHub Pages check in Chrome. The original resource loop traverses and
closes the font group; native field reads recover its `fonts` name and flags.
The original resource factories and full font parsing/rendering remain unported.
See [native/resources/README.md](native/resources/README.md).

The [linked native resource check](https://isasto.github.io/Sims-3-Browser/native/resources/check.html)
passed all 502 combined fixtures and real-resource checks in the Chrome cloud
browser. Live browser validation is recorded separately from Node.

The separate [native component check](https://isasto.github.io/Sims-3-Browser/native/core/check.html)
runs the rebuilt code directly in your browser and checks ARM-derived fixtures.
It is a component validation page, not a playable game.

The original executable boots and reaches the language/menu loop. Its splash
screen, menu panels, and font atlases can be rendered through the graphics
bridge. Menu composition and text rendering remain incorrect in the graphics
test environment. Character creation, entering the town, sustained gameplay,
audio, and saving/reloading a playable session have not been validated.

## GitHub Pages

Publish this repository from **main / (root)** in **Settings → Pages**, using
**Deploy from a branch**. The root entry page opens the browser build in `web/`;
`.nojekyll` keeps the existing static files intact. Future updates to `main` are
published automatically once Pages is enabled.

Site address: <https://isasto.github.io/Sims-3-Browser/>.
The hosted version needs no Python installation or local server. It has the
same unfinished gameplay and rendering limitations described above.

## Run the prototype locally

Requires a current desktop Chrome or Firefox browser with WebGL and
OffscreenCanvas, and Python 3 to serve the files. Prototype gameplay has not been
validated in this environment; its rendering checks used a surfaceless OpenGL
ES context. The separate native component page's exact build/browser validation
is recorded in `native/core/browser-verification.json`.

Clone this repository or download and extract the entire project first.
On Windows, run `Start-Windows.bat`.

Alternatively, from this folder:

```sh
python tools/serve.py
```

Open `http://127.0.0.1:8000/` if the browser does not open automatically.
Do not double-click `web/index.html`; workers and fetch need an HTTP origin.
First startup can take 1–2 minutes. Click or tap to send pointer input. The
interface includes pause, fullscreen, sound, and save import/export controls;
these are scaffolding for continued compatibility work, not verified gameplay
features. Saves are intended to stay in this browser's IndexedDB.

If an older build stopped with an `importScripts` error, update the entire
project, stop the previous Python server with Ctrl+C, and run the launcher again.
Use Ctrl+F5 to reload the page. The worker now includes its JavaScript
dependencies in `web/worker.bundle.js`, which is already included in the download.
The launcher checks for missing startup files and game data before opening the
browser. You can run those checks separately with `python tools/serve.py --check`.

## Contents

- `web/`: browser runtime, original game executable, manifest, and game data.
- `web/worker.bundle.js`: generated worker containing the emulator, compression
  library, graphics bridge, and runtime. No runtime script imports are needed.
- `web/data/`: original assets plus the 678 recovered DTRZ members, split into
  small resources for fetching as needed. `manifest.json` maps each original
  filename to its bytes and SHA-256 checksum.
- `recovered/java/`: all 1,007 Java classes reconstructed by Androguard's DAD
  decompiler. This is approximate source and is not a buildable Android project.
- `recovered/AndroidManifest.xml`: decoded Android manifest.
- `recovered/game.s3e`: decompressed, unmodified XE3U game executable.
- `recovered/game-arm-for-ghidra.elf`: an analysis wrapper around the ARM code,
  with entry point and imported host symbols. It is not a native runnable port.
- `recovered/arm-disassembly.txt.gz`: a gzip-compressed raw ARM decoding for
  reference. Decompress it to read the listing. It includes data and Thumb
  regions, so it is not a reliable function-by-function listing.
- `recovered/*inventory.json`: extracted-file sizes, hashes, and original APK
  member inventory.
- `tools/`: reproducible extraction, Java decompilation, serving, and smoke tests.
- `FINDINGS.md`: architecture, verification, and outstanding work.

## Reproduce extraction and analysis

The original APK is not included in this repository. From this folder:

```sh
python tools/extract.py /path/to/The-Sims-3_1.5.21.apk
python -m pip install -r requirements-analysis.txt
python tools/decompile_java.py --all-classes
```

The extractor also creates a combined `web/assets.pack` for the optional Node
smoke test. The browser uses individual resources and does not need that file.

```sh
node tools/verify.cjs
node tools/verify-worker.cjs
python tools/test_startup.py
LAZY=1 node tools/smoke.cjs 60
```

On Windows, use `set LAZY=1` before the smoke test. The smoke test executes the
original code with instrumented graphics responses; it does not prove rendering
or gameplay compatibility.

After editing worker code, graphics, runtime, or bundled vendor JavaScript, run
`python tools/build_worker.py` and commit the regenerated `web/worker.bundle.js`.
Use `python tools/build_worker.py --check` to check that it matches its sources.
The worker loader test uses a browser-style JavaScript scope and the real Wasm
engine; it does not replace testing in an actual browser.

## Third-party software

Unicorn.js 1.0.3 is bundled under GPL-2.0; see `web/vendor/UNICORN-LICENSE.txt`
and `THIRD-PARTY.md`. fflate 0.8.2 is bundled under MIT. The game executable,
data, branding, and decompiled game files remain their owners' material supplied
in the uploaded APK. No EA game source code or SDK source was obtained.
