# Compiled recovery subset

**This directory does not contain a playable game.**

`core/` contains the connected 52-function native build, using WebAssembly MVP
with no imports. It includes 64-bit arithmetic with complete quotient/remainder
register contracts, copy/move/fill, byte strings, UTF-16, and the original
scalar functions. Its corpus passed 358,097 ARM/Wasm comparisons.

The [browser check](https://isasto.github.io/Sims-3-Browser/native/core/check.html)
replays original-game fixtures across all 52 functions. To rebuild and validate:

```sh
python tools/build_native_core.py --clang /path/to/wasi-sdk/bin/clang
python tools/check_wasm_mvp.py
node tools/verify-native-core.cjs
node tools/verify-core-loader.mjs
```

The original scalar-only build below remains an independent baseline.

`verified-functions.c` contains 22 scalar leaf functions recovered from the
original ARM executable and selected by `tools/build_native_subset.py`.
`verified-functions.wasm` compiles those bodies directly to WebAssembly, with
no imports. `manifest.json` records the original addresses, instruction modes,
source provenance, tool version, and hashes.

`verification.json` records 28,410 matching ARM/Wasm comparisons. These finite
tests cover only the selected 32-bit scalar return values. See
[`NATIVE_PORT.md`](../NATIVE_PORT.md) for the complete scope and limitations.

Run the existing comparisons with:

```sh
node tools/verify-native-subset.cjs
```

Rebuild with WASI SDK clang:

```sh
python tools/build_native_subset.py --clang /path/to/wasi-sdk/bin/clang
```
