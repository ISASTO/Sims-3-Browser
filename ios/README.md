# The Sims 3 iOS browser port

[Play on GitHub Pages](https://isasto.github.io/Sims-3-Browser/ios/play/).

The iOS 1.4.16 armv7 executable is statically translated to C, compiled to WebAssembly, and connected to a browser
implementation of the iOS services it uses. There is no ARM interpreter in this execution path. Original C++
source has not been recovered by hand.

The tested journey covers the original menus, Create-A-Sim, entering the house, a fridge interaction, spending
money on a snack, saving, and loading that progress after a reload. Other systems and browser engines need more
testing. GPU-backed performance has not been measured in the development environment.

Click or tap to interact. Drag to pan; right-drag or Ctrl+drag for two-finger camera controls. Save through the
game's menu, then confirm the green tick. Saves stay in IndexedDB for this browser origin.

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
