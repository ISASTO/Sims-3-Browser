# The Sims 3 mobile: reverse engineering and browser prototype

**Status: unfinished. This is not yet a fully playable browser port.**

This project recovers the uploaded Android game's files and runs its original ARM
game executable under WebAssembly. It does not replace the gameplay with a new
Sims-like simulation. The Android launcher is decompiled separately. The native
game's original C++ source has not been reconstructed.

The original executable boots and reaches the language/menu loop. Its splash
screen, menu panels, and font atlases can be rendered through the graphics
bridge. Menu composition and text rendering remain incorrect in the graphics
test environment. Character creation, entering the town, sustained gameplay,
audio, and saving/reloading a playable session have not been validated.

## Run the prototype

Requires a current desktop Chrome or Firefox browser with WebGL and
OffscreenCanvas, and Python 3 to serve the files. Browser behavior has not been
tested in this environment; the rendering checks used a surfaceless OpenGL ES
context, not a browser.

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

## Contents

- `web/`: browser runtime, original game executable, manifest, and game data.
- `web/data/`: original assets plus the 678 recovered DTRZ members, split into
  small resources for fetching as needed. `manifest.json` maps each original
  filename to its bytes and SHA-256 checksum.
- `recovered/java/`: all 1,007 Java classes reconstructed by Androguard's DAD
  decompiler. This is approximate source and is not a buildable Android project.
- `recovered/AndroidManifest.xml`: decoded Android manifest.
- `recovered/game.s3e`: decompressed, unmodified XE3U game executable.
- `recovered/game-arm-for-ghidra.elf`: an analysis wrapper around the ARM code,
  with entry point and imported host symbols. It is not a native runnable port.
- `recovered/arm-disassembly.txt`: a raw ARM decoding for reference. This includes
  data and Thumb regions, so it is not a reliable function-by-function listing.
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
LAZY=1 node tools/smoke.cjs 60
```

On Windows, use `set LAZY=1` before the second command. The smoke test executes the
original code with instrumented graphics responses; it does not prove rendering
or gameplay compatibility.

## Third-party software

Unicorn.js 1.0.3 is bundled under GPL-2.0; see `web/vendor/UNICORN-LICENSE.txt`
and `THIRD-PARTY.md`. fflate 0.8.2 is bundled under MIT. The game executable,
data, branding, and decompiled game files remain their owners' material supplied
in the uploaded APK. No EA game source code or SDK source was obtained.
