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
| `recovered/native/core-analysis/` | Recovered ABI storage, 43 annotated functions, and 128 re-exported callers |
| `native/core/` | Connected native components, browser loader, ARM-derived fixtures, and validation reports |
| `native/serialization/` | Fifteen more original serializer functions, browser file/callback adapter, fixtures, and original-resource roundtrip |
| `recovered/native/serialization-analysis/` | Combined 58-contract ABI recovery, observed file host signatures, and 128 caller diagnostics |
| `native/verified-functions.*` | The original 22-function scalar subset, retained as an independent baseline |

`prepare_native.py` changes only the 273 external branch placeholders in a
separate analysis image. The original `recovered/game.s3e` and `web/game.s3e`
remain identical. No analysis patch is used as a gameplay fix.

187 OpenGL ES/EGL signatures are backed by Khronos headers, with source URLs
and hashes recorded. The other 83 declarations come from an experimental host
replacement, not the original Marmalade SDK. They are retained as reference
and deliberately excluded from automatic ABI annotation.

## Actually compiled code

There are now **80 distinct recovered original entry points** across the core
and serialization components. Their validation scopes differ: the core has no
host imports, while the serializer uses three explicit browser file/callback
imports and compares original ARM behavior under a controlled host model.

### Native binary serialization and resource transfer

`native/serialization/sims3-serialization.wasm` adds fifteen reviewed original
routines for unsigned division, strided I/O, byte/integer/boolean fields,
NUL strings, progress callbacks, and a resource header. It reuses the core's
string-length function without counting that dependency again. The 2,952-byte
MVP binary has nine defined functions after compiler inlining/merging and three
exactly declared host imports. These binary counts are not gameplay coverage.

A 204-byte global context is explicitly relocated. Recovery models a fifth
stack argument for strided I/O and the unsigned division's two-register return.
Comparisons include context/canary bytes, file contents/cursors, and ordered
file/callback traces. Original callbacks may change the counter before it is
reloaded; requested bytes still advance progress on failed/short transfers.
Original boolean-write progress and field-width/stride quirks are preserved.
All fifteen routines passed 25,811 controlled-host ARM/Wasm comparisons and
159,404 matching file/callback events. The shared browser loader passed 105
ARM-derived fixtures in Node; live-browser status is recorded separately.
Exact input domains and test scope are in the component's reports.

The browser adapter uses the earlier native path resolver, verifies original
asset hashes, and loads resource bytes into synchronous memory files. The actual
`fonts/fonts.group.bin` yields version 3.6.6 and a six-byte header. Native header
and payload read/write routines reproduce all 63,953 bytes with the original
SHA-256. This validates stream integration, not complete font/resource parsing
or rendering. Native open/seek/close, callback bodies, general runtime/global
initialization, persistent saves, and the full game remain unported.

The Ghidra pass applies 43 existing plus fifteen new contracts and two observed
file host signatures, then exports those 58 functions plus 128 callers. The
186 diagnostics overlap existing inventory and are not additional compiled
functions. No executable bytes changed. The call-site host signatures and
controlled adapter do not establish complete original SDK behavior.

See [native/serialization/README.md](native/serialization/README.md) for the
function mapping, reproduction commands, source/host contracts, and limitations.

### Import-free native core

`native/core/sims3-core.wasm` now contains **65 recovered functions**: 30
arithmetic, copy/move/fill, byte-string and UTF-16 routines, 13 connected
pathname/default-locale functions, and the original 22 scalar functions.
The functions call one another natively. For example,
signed 64-bit division uses unsigned division, the copy/move wrappers call
their underlying helpers, and the string copy-and-pad function uses zero-fill for padding.
The build does not execute ARM instructions or import a CPU emulator.

The target is `wasm32-unknown-unknown`, using the **WebAssembly MVP** instruction
set. WASI SDK supplies the compiler; this output has no WASI or other host
imports. The binary feature audit checks the actual instructions and sections.
It uses ordinary unshared memory and needs no threads, SIMD, multi-value
results, or custom response headers. Its JavaScript boundary uses 32-bit words,
including quotient/remainder pairs, so it does not require JavaScript BigInt
integration. The loader fetches an ArrayBuffer, avoiding reliance on the
server's Wasm streaming MIME configuration.

380,258 ARM/Wasm comparisons passed for these functions. Checks include every
declared result register and all bytes of each test arena, including canaries.
The corpus covers alignment, overlapping moves, identical pointers, short
tails, zero padding, UTF-16 code units, all single-byte comparison pairs, ARM
register-shift counts, signed overflow boundaries, and random arguments.
The pathname addition contributes 22,161 comparisons, including all 736
resource-manifest paths and changes to a relocated global directory prefix.
The compared memory total includes repeated test buffers; it is not a measure
of game coverage. The original machine code remains the development oracle.

Three ABI corrections were particularly important:

- 64-bit division returns its quotient in `r0:r1` and remainder in `r2:r3`.
  Ghidra now models a 16-byte result in the corresponding register join.
- Copy-preserving wrappers and several string functions return the original
  destination even when the first decompilation inferred `void`.
- The backwards move helper's final byte has no pointer writeback. Its return
  pointers can retain a one-byte residual; the recovered C preserves this
  behavior. The browser fixtures include the identical-pointer regression.

The Ghidra annotation pass corrected 43 contracts and identified 216 calling
functions outside this set, including references through thunks. It re-exported
128 callers plus the 43 core functions. These 171 diagnostic exports overlap the original
function inventory; they are not additional discovered functions. Ghidra's
diagnostic C remains approximate, while the compiled core uses the reviewed
implementations and explicit return corrections recorded in `contracts.json`.
The current 171 exports contain four untyped extra-return markers, six
implicit-register markers, and 34 warning comments. These source
diagnostics identify further recovery work and do not establish correctness.

The [browser component check](https://isasto.github.io/Sims-3-Browser/native/core/check.html)
replays 267 fixtures recorded from original ARM execution across all 65
functions. It compares exact result words and memory hashes. This page has no
dependency on the emulator or WebGL and does not run the complete game.
All 267 checks passed through the shared browser loader in Node and on the live
GitHub Pages component page in the Chrome cloud browser. The observed result,
source commit, and exact Wasm hash are recorded separately in
`native/core/browser-verification.json`. Other browsers and whole-game
rendering remain unverified.

### Connected pathname and initialized-data recovery

The new `native/core/src/path.c` recovers bounded copy/append, parent and
extension extraction, filename handling, scheme detection, joining,
normalization, and resource-path resolution. It calls the compiled string and
memory functions directly. It preserves original behaviors such as leftmost-dot
filename stripping, body-relative URI truncation, and absolute-path copying
versus relative-path normalization.

`path-data.h` is generated from two hash-pinned original data ranges: a 257-byte
default C-locale table and the mutable 128-byte directory prefix initially `/`.
The prefix is explicitly relocated into Wasm memory. Loader checks cover
changing it, updates that alias its buffer, memory growth, arena-reset
persistence, and a connected resource-path call. The original runtime's locale
initializer is executed to establish the reference table pointer; original
files remain unchanged.

This is a bounded recovery of two data objects and their consumers, not a
general solution for all globals, runtime initialization, or filesystem calls.
Other locale initialization is unported. Filename components above 126 bytes
can expose original uninitialized stack data and are outside the validated
contract. Other input domains and the exact function/address mapping are in
[native/core/PATH_RECOVERY.md](native/core/PATH_RECOVERY.md) and `contracts.json`.
The module remains unconnected to the game loop, renderer, audio, and saves.

The original division-by-zero exception path has **not** been ported. Core
equivalence tests require nonzero divisors; the JS wrapper rejects zero and
the underlying native helper traps. Forward-copy and aligned-zero helpers
also retain their documented input-domain requirements. These contracts must
be respected before integrating more game code.

### Original scalar baseline

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
The full generated C files are not a buildable game project. The connected core
above extends this baseline without establishing whole-game compatibility.

## Reproduce

Use Python 3, Node.js, Ghidra, a compatible JDK, and WASI SDK clang. Exact Linux
tool versions, official download URLs, and verified archive SHA-256 values are
recorded in `tools/native-toolchain.json`. These large tools are not bundled.
No additional Python packages are required for the native recovery scripts.

From the repository root, with the tools already downloaded and extracted:

```sh
python tools/recover_native_core.py --ghidra /path/to/ghidra_12.1.4_PUBLIC --jdk /path/to/jdk-25
python tools/build_native_core.py --clang /path/to/wasi-sdk/bin/clang
python tools/check_wasm_mvp.py
node tools/verify-native-core.cjs
node tools/verify-core-loader.mjs
```

The recovery command imports the preserved Ghidra archive, checks that the
analysis bytes match, applies the core ABI contracts, and exports the affected
code. It checks a per-run completion token because headless Ghidra can exit
successfully after a script error. Use `--name` for a new project or `--resume`
for an existing one. No new whole-image analysis is required for this pass.
The native build uses the pinned original decompiler bodies where suitable,
plus reviewed arithmetic and memory recovery. Source hashes and correction
notes distinguish these cases in the manifest.

The original full recovery/scalar baseline commands remain available:

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
node tools/verify-native-core.cjs
node tools/verify-core-loader.mjs
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
