# The Sims 3 iOS browser port

[Play on GitHub Pages](https://isasto.github.io/Sims-3-Browser/ios/play/).

The iOS 1.4.16 armv7 executable is statically translated to C, compiled to WebAssembly, and connected to a browser
implementation of the iOS services it uses. There is no ARM interpreter in this execution path. Original C++
source has not been recovered by hand.

The tested journey covers the original menus, Create-A-Sim, entering the house, a fridge interaction, spending
money on a snack, saving, and loading that progress after a reload. Other systems and browser engines need more
testing. GPU-backed performance has not been measured in the development environment.

Click or tap to interact. Drag to pan and scroll to zoom. Double-click, hold the second press and drag for
two-finger camera controls; right-drag and Ctrl+drag also work. Save through the
game's menu, then confirm the green tick. Saves stay in IndexedDB for this browser origin.

The player includes **Fit to tab**, **Fullscreen**, quality selection and optional performance metrics. **Auto**
adjusts resolution for smoother play; **Native** follows the game area's size and the display's pixel density,
including window and monitor changes. The original aspect ratio is preserved. The small header diamond sends
a device shake. Hold it to reveal **Unlock all content**: all 15 bundled packs, bonus rewards, furniture tiers
and house-upgrade eligibility. Items still cost Simoleons; goals, skills and money remain unchanged. Unlocks
persist in this browser. Software-renderer tests averaged about 28 FPS at 1334×750 and 49 FPS at 667×375; these are not
hardware-GPU measurements.

The **Speed** selector adds **Fast-forward 2×** and **Superspeed 4×/8×**. It accelerates the original simulation,
including its game clock. Menus and held mouse/touch controls stay at normal speed. Game audio mutes during
acceleration and resumes at 1×; selected music files play normally. Metrics show the achieved simulation rate,
which depends on available CPU time. Reloading always starts at normal speed.

The source branch keeps these files at its root. On `main`, they live in `ios/`, and the published build lives
in `ios/play/`. The earlier Android prototype and analysis remain elsewhere in the repository.

To rebuild, install clang/lld 18, wasi-libc, the wasm32 compiler builtins, and Python 3.11+:

```sh
python3 -m pip install -r requirements-analysis.txt
python3 tools/prepare.py /path/to/com.ea.sims3inc-iOS8.0.ipa
make -j4 site
python3 tools/verify_site.py
python3 -m http.server 8333 --bind 127.0.0.1 --directory build/site
```

Open `http://127.0.0.1:8333/`. The build script requires the exact IPA hash in PROJECT_STATUS.md.

Read [HANDOFF.md](HANDOFF.md) for setup, tests, measured limitations and next implementation targets;
[PROJECT_STATUS.md](PROJECT_STATUS.md) for current evidence; and [DECISIONS.md](DECISIONS.md) for the execution model.

The browser resource inflater is fflate 0.8.2, MIT licensed; its license is in
`web/vendor/fflate-LICENSE.txt` and included in the static release. Existing runtime third-party notices remain
in their respective source headers. The Sims 3 game content is separate from the compatibility code's licensing.
