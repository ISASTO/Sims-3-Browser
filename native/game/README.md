# Native recompiled game

This directory runs the **original Android game executable** (`recovered/game.s3e`,
SHA-256 `9b75f558…`) in the browser as WebAssembly that was produced **ahead of
time** from the original ARMv4T/Thumb machine code. There is no ARM instruction
interpreter, no Unicorn, and no Android image anywhere in this path.

Play page: `native/game/index.html` (served at `/native/game/` on GitHub Pages).

## How it is built

```sh
python tools/build_native_game.py            # regenerate C, compile, link
python tools/build_native_game.py --trace    # debug build with per-function trace hooks
```

1. `tools/recomp/` (Python) loads the original image at its original address,
   discovers functions and lifts every reachable instruction to C:
   * seeds: the program entry, the 5,974 Ghidra functions, 1,200 pointer seeds,
     relocated words that point into code (vtables and callback tables, jump-table
     targets excluded), PC-relative Thumb code addresses, and
     `extra-entries.json` (the RVCT C++ `init_array`, which stores relative offsets);
   * ARM and Thumb decoding is implemented in `decode.py` (ARMv4T only, with
     ARMv5+ interworking for loads to PC, as on the Android devices the game shipped for);
   * control flow: direct calls are C calls; returns, indirect jumps and tail
     calls leave the function with `CPU.pc` set and are dispatched by the caller
     through a sorted address table (`rt.c`), so tail calls never grow the C stack;
     indirect calls are recognised from `MOV LR, PC` / `ADD LR, PC, #k` sequences;
     jump tables (`LDRLO PC, [PC, Rn, LSL #2]`, `ADD PC, PC, Rn, LSL #k` with a
     CMP or AND bound, and the Thumb `__ARM_common_switch8` helper at
     `4a1652fc` with its inline byte table) are resolved statically;
   * flags: N/Z/C/V live in C locals; a cross-function analysis finds the few
     helpers that return results in the flags (soft-float compares) or read them
     at entry, and only those exchange flags through `CPU`;
   * PC-relative literal-pool loads from the code region are folded to constants.
2. `clang --target=wasm32 -mcpu=mvp` compiles the generated C plus `runtime/rt.c`
   (no libc, no WASI). The module is WebAssembly MVP with unshared memory and six
   function imports (`host_call` plus diagnostics).
3. Guest memory is a fixed region of linear memory: guest `0x4a000000` is linear
   `0x01000000`. Pointers keep their original values.

Current output: 6,784 functions, 369,462 instructions, `sims3-game.wasm`
(see `build.json` for size and hash; `gen/report.json` for analysis statistics).
The generated C (`gen/*.c`, ~45 MB) is reproducible and not committed.

## Suspension without an interpreter

The game blocks inside its own loop (`eglSwapBuffers`, `s3eDeviceYield`, file
opens of assets not yet downloaded). The browser cannot block, so the host
*unwinds*: every generated call site checks `CPU.unwinding` after a call,
records its call-site id and returns; resuming re-enters each function at the
recorded call site (`CPU.rewinding`). All guest state lives in `CPU` and guest
memory, so no locals need saving. A browser frame therefore always ends exactly
at `eglSwapBuffers`, and rendering goes to an off-screen framebuffer that is
copied to the canvas only then — partial frames are never shown (the cause of
the legacy emulator's strobing).

## Host services (`host.js`, `gles1.js`, `audio.js`, `app.js`)

* `host.js` — Marmalade s3e services: memory, configuration (`app.icf`,
  `s3e.icf`), files (verified downloads, writable files persisted to IndexedDB),
  timers, pointer/keyboard/device callbacks (delivered while the game is inside
  `s3eDeviceYield`/`eglSwapBuffers`, as on the original platform), music and PCM
  sound, compression.
* `gles1.js` — OpenGL ES 1.1 fixed function on WebGL 1: matrix stacks, up to 8
  lights, materials and colour material, fog, alpha test, user clip planes, both
  texture units with all texture-environment modes including COMBINE, paletted
  compressed textures, client arrays and buffer objects (FIXED converted to float).
* `app.js` — loading, `requestAnimationFrame` loop, pointer coordinate mapping
  through the letterbox, Esc/Backspace as the phone Back key, pause on tab hide,
  save export/import.

Input is queued and delivered one press or release per game frame, as a phone
touch screen would deliver it; a mouse click whose press and release land in the
same slow frame is therefore never lost. Mouse movement without a pressed button
is not forwarded (a touch screen has no hover).

The game renders at its original 480×320 logical size, but `gles1.js` scales the
off-screen framebuffer, viewport, scissor and line widths to the canvas's real
device-pixel size (recomputed on resize and fullscreen; capped at 3840×2160
pixels and the GPU's renderbuffer limit), so the 3D scene and the UI are drawn
at native resolution. `?scale=N` forces a fixed factor.

The accelerometer (`s3eAccelerometer*`) reports the real device sensor where the
browser offers one (DeviceMotion; iOS asks for permission on Play), otherwise a
level device. The green diamond in the page header, or <kbd>S</kbd>, injects a
shake; <kbd>A</kbd>/<kbd>D</kbd> tilt. In this Android build only the cooking
minigame (shake to cool the pots) and the fishing minigame (tilt) read the
accelerometer.

`ranged.json` (written by the build) lets the page fetch `res.dz` (32 MB, of
which the game reads only its table of contents) in SHA-256-verified 64 KiB
chunks with HTTP range requests.

## Verification

`tools/lockstep.mjs` runs the original ARM code in the legacy Unicorn.js oracle
and the trace build side by side with identical memory layout, allocator and a
deterministic clock, comparing every recompiled-function entry (all general
registers) and every host call. The boot sequence matched for 476,523 records
(through the first rendered frames and asset loading) before the oracle's own
block-hook gaps make the comparison ambiguous; `tools/lockstep-bisect.mjs`
bisects the first memory difference. One apparent divergence was traced to a
missing block-hook event in Unicorn.js 1.0.3, confirmed with Python Unicorn 2
from the same state. The recompiled build's heap after boot is identical in size
to the emulator's (14,653,392 bytes).

Browser checks (headless Chromium with SwiftShader software GL): language menu,
main menu, save-slot selection and Create-a-Sim render correctly and respond to
pointer input.

## Known limitations

* Not all code reachable only through computed addresses may have been found.
  Unrecovered targets stop the game with an explicit address
  ("no recompiled function"); add them to `extra-entries.json` with provenance.
* `s3eFileAddUserFileSys` is accepted, but the extracted resource files are served
  directly instead of through the game's own archive reader.
* Audio and saving are implemented but not yet verified in an extended session.
* The generated C is machine-level (registers and flags as variables), not a
  readable decompilation. Reviewed hand-written functions (native/core,
  native/serialization, native/resources) can replace generated ones.
