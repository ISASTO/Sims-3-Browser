The Sims 3 (iOS 1.4.16) - private browser build
================================================

This folder runs your own copy of The Sims 3 for iPhone in a desktop web browser. The game's code was recompiled
from the iPhone app to WebAssembly. The game's art, sound and text come from your IPA and are extracted by
setup.py. This folder does not contain them.

Keep this private. Do not upload this folder, the extracted bundle or the build to a public website or repository.

You need
- Python 3 (python.org, or the one that comes with macOS or Linux).
- Your copy of the game: com_ea_sims3inc-iOS8_0.ipa
  (SHA-256 8820bd6221c288d3d2d413ccd013b2300276a22c55cdaa14399af18b745c55aa).
- A desktop browser with WebGL 2: Chrome, Edge, Firefox or Safari.

Set up (once)
  python3 setup.py /path/to/com_ea_sims3inc-iOS8_0.ipa

Play
  python3 serve.py
  Then open http://127.0.0.1:8333/  (the server only answers on this computer).

Controls
- Tap: left click.
- Drag (scroll lists, pan the camera): left button drag.
- Two-finger gestures (rotating the camera): right-button drag, or Ctrl + left drag. This places two fingers either
  side of the pointer. Moving sideways turns them around it; moving up or down moves both fingers together.
  Zoom with the game's zoom slider.
- Text fields: type normally; Enter confirms.
- Touch screens work directly, including two-finger gestures.

Saving
Saves live in your browser's storage for http://127.0.0.1:8333 (IndexedDB). Use the same browser and address to
keep your saves. Clearing site data deletes them.

Music Library
The pause menu's Music Library lets you choose audio files from your computer. They play in place of the game's
music, the way your iPhone's music library did. The small bar at the top controls them (pause, next, stop).

Not available in this build
Online features (More Games, Facebook, EA accounts, the Sims Store purchases) report that the network is offline.
