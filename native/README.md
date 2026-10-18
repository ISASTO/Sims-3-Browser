# Compiled recovery subset

**This directory does not contain a playable game.**

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
