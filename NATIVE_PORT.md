# Native decompilation and browser port

The goal is a complete game rebuilt as WebAssembly, hosted on GitHub Pages.
**That goal has not been achieved.** There is no complete native game build or
claim of flawless gameplay in this checkpoint. The deployed Pages site still
runs the earlier emulator prototype.

The APK is 72,044,988 bytes, but its decompressed game executable is 1,717,460
bytes. Assets account for much of the package. Executable size does not preserve
the original C++ types, classes, local names, build configuration, or source.

## Recovered material

The analysis handles ARM/Thumb interworking at the original load address
`0x4a000000`. It uses 13,526 relocation locations, 1,200 strong function-pointer
seeds, and 270 named host services. There are 273 import relocation slots:
225 have both Thumb and ARM entry points, and 48 are ARM-only. All 498 import
entry points in the analysis model passed real CPU return checks.

The current export contains 5,129 decompiled function bodies and 845 thunk
functions, with 3,468 defined strings. These are discovered functions, not a
proof of exhaustive function discovery. The C-like output has 4,334 warning
comments, including 690 jump-table recovery warnings. Many other warnings
describe normal optimization; totals are not a count of distinct defects.
There are also 6,351 indirect call sites. Neither function counts nor code-byte
counts represent a percentage of completed gameplay.

| Path | Purpose |
| --- | --- |
| `recovered/native/decompiled/part-*.c` | Approximate C-like output for discovered non-thunk functions |
| `recovered/native/functions.json` | Addresses, ARM/Thumb modes, inferred declarations, callees, warnings |
| `recovered/native/analysis-map.json` | Memory blocks, function ranges, thunk targets, analysis symbols |
| `recovered/native/strings.json` | Strings recognized in the native image |
| `recovered/native/game-analysis.gzf` | Portable Ghidra database; import into Ghidra to continue analysis |
| `recovered/native/game-analysis.elf` | Analysis-only ARM image with explicit returning import models |
| `recovered/native/analysis-input.json` | Input hashes, modeled imports, relocation locations, heuristic seeds |
| `recovered/native/host-prototypes.json` | 187 Khronos signatures and 83 clearly marked unverified reference declarations |
| `recovered/native/recovery-audit.json` | Counts, concrete review markers, and current build status |
| `native/` | The limited compiled scalar subset and its differential test report |

`prepare_native.py` changes only the 273 external branch placeholders in a
separate analysis image. The original `recovered/game.s3e` and `web/game.s3e`
remain identical. No analysis patch is used as a gameplay fix.

187 OpenGL ES/EGL signatures are backed by Khronos headers, with source URLs
and hashes recorded. The other 83 declarations come from an experimental host
replacement, not the original Marmalade SDK. They are retained as reference
and deliberately excluded from automatic ABI annotation.

## Actually compiled code

`native/verified-functions.c` contains 22 recovered scalar leaf functions.
The function bodies are copied directly from the pinned decompiler output;
the build adds basic typedefs and integer carry helpers. The resulting
`native/verified-functions.wasm` has **no imported functions** and invokes no
CPU emulator. It can be instantiated through the browser's WebAssembly API.

The validation tool executes the original ARM instructions as a development
oracle, then compares the 32-bit results with the compiled Wasm exports.
28,410 comparisons passed, covering boundary values, small enums/bytes,
pairwise boundaries, and deterministic random arguments. Incoming flags and
non-argument registers are randomized. Source and binary hashes are checked.

This selection excludes memory accesses, globals, host calls, indirect calls,
implicit registers, and decompiler warnings. It is a small and unusually simple
part of the executable. Passing this finite corpus does not establish complete
equivalence or validate a native game, graphics, audio, simulation, or saves.
The full generated C files are not a buildable game project.

## Reproduce

Use Python 3, Node.js, Ghidra, a compatible JDK, and WASI SDK clang. Exact Linux
tool versions, official download URLs, and verified archive SHA-256 values are
recorded in `tools/native-toolchain.json`. These large tools are not bundled.
No additional Python packages are required for the native recovery scripts.

From the repository root, with the tools already downloaded and extracted:

```sh
python tools/decompile_native.py --ghidra /path/to/ghidra_12.1.4_PUBLIC --jdk /path/to/jdk-25
node tools/verify-native.cjs
python tools/build_native_subset.py --clang /path/to/wasi-sdk/bin/clang
node tools/verify-native-subset.cjs
python tools/audit_native.py
```

The first command creates `analysis-work/Sims3Native.gpr`. Choose a new `--name`
for a fresh analysis, or pass `--resume` to reuse that seeded database. The
runner checks completion reports because Ghidra can return a successful process
exit code even when an individual script fails. Discovery and inferred types
may vary with analysis order; committed outputs preserve the inspected result.

To inspect the already recovered functions, import `game-analysis.gzf` in Ghidra;
a new decompilation run is not required. To check the existing native subset,
only Node.js is needed:

```sh
node tools/verify-native.cjs
node tools/verify-native-subset.cjs
```

## Work required before a native game build

1. Repair and validate function boundaries, ARM/Thumb mode transitions,
   jump-table recovery, and calling conventions. Several emitted functions
   refer to implicit registers or untyped additional return values; a few
   contain bad-instruction markers. These cannot be treated as correct C.
2. Reconstruct initialized data, BSS, object layouts, vtables, relocated
   pointers, and function-pointer types. Make ARM integer, shift, alignment,
   and aliasing behavior explicit when compiling to WebAssembly.
3. Implement and validate the required Marmalade services and graphics
   behavior for the rebuilt code. The existing JavaScript host can inform this
   work, but its rendering and service implementations are incomplete.
4. Adapt the main loop and blocking operations to browser scheduling, input,
   resource loading, audio, and storage. Compile the connected program and
   compare its behavior with the original executable.
5. Validate language selection, character creation, town entry, simulation,
   interactions, audio, save/reload, rendering stability, and frame time across
   supported browsers. The scalar tests do not cover these behaviors.

GitHub Pages remains a suitable target for the eventual static HTML/JS/Wasm
build. Changing hosting cannot resolve native-code or graphics correctness.
