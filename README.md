# The Sims 3 browser port

**[Play on GitHub Pages](https://isasto.github.io/Sims-3-Browser/)**

The current entry opens the iOS 1.4.16 recompilation in [ios/play/](ios/play/). The original ARM/Thumb-2 game
code is statically translated to C and compiled to WebAssembly, with a browser compatibility runtime.

The tested path includes the original menus, Create-A-Sim, entering the house, a fridge/snack interaction,
and saving and loading that progress after a page reload. The saved character, locked wish, and §690 balance
were retained. This is an experimental playable build; many other systems and browser engines still need testing.
GPU-backed frame rates have not yet been measured.

Click or tap to interact. Drag to pan and scroll to zoom. Double-click, hold the second press and drag to
orbit; right-drag and Ctrl+drag also work. To save progress,
choose **Save and Continue** in the game menu and confirm the green tick. Saves remain in this browser's IndexedDB.

The player has **Fit to tab**, **Fullscreen**, selectable quality and optional frame-time, CPU, draw-call,
resolution and memory metrics. **Auto** adjusts resolution for smoother play. **Native** renders at the game
area's physical display resolution and follows resizing, pixel density and monitor changes, preserving aspect
ratio. The small header diamond sends a device shake. Hold it to reveal **Unlock all content**: all 15 bundled
packs, bonus rewards, furniture tiers and house-upgrade eligibility. Items retain their prices, and the option
persists in this browser without completing goals or changing skills or money. In software-renderer house tests, the 50% preset averaged
49 FPS versus 27 FPS at the previous fixed resolution; hardware-GPU frame rates remain unmeasured.

The build uses ordinary static hosting. It needs WebAssembly and WebGL2, with no application server or special
cross-origin headers. The complete release is about 128 MiB, fetched as needed; the code and initial resource
packs download before play begins.

## Run locally

On Windows, run `Start-Windows.bat`. Alternatively:

```sh
python3 ios/tools/serve_site.py
```

To serve the whole repository without opening a browser automatically:

```sh
python3 -m http.server 8333 --bind 127.0.0.1
```

Then open `http://127.0.0.1:8333/ios/play/`.

## Source, rebuild and handoff

The original `ios-recompiled-port` branch keeps the iOS source at its root. On `main`, that project is under
[ios/](ios/). Read [ios/HANDOFF.md](ios/HANDOFF.md) for exact rebuild/test commands and the next targets,
[ios/PROJECT_STATUS.md](ios/PROJECT_STATUS.md) for verified behavior and limitations, and
[ios/DECISIONS.md](ios/DECISIONS.md) for the runtime design.

GitHub Pages remains configured for **main / (root)**. The root entry redirects to `ios/play/`; `.nojekyll`
keeps the static release intact.

## Earlier Android work

The Android prototype remains at [web/](web/), and its analysis, recovered components, and validation pages
remain in their existing directories. [ANDROID_PROTOTYPE.md](ANDROID_PROTOTYPE.md) preserves its previous
README, including the component-recovery history and test counts. Those counts describe a different executable
and are not coverage measurements for this iOS build.

See [THIRD-PARTY.md](THIRD-PARTY.md) for notices. Game content is separate from the compatibility code's licensing.
