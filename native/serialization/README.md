# Native binary serialization recovery

This component recompiles fifteen more original game routines: binary field and
string serialization, strided file I/O, progress accounting/callback dispatch,
and a resource-header reader. Together with the unchanged 65-function core,
the repository now has 80 distinct recovered original function entry points
available through native component interfaces. This is not a complete game.

The module links the core's already recovered `4a0013e0` string-length routine;
that dependency is not counted again. Compiler inlining and merging leave nine
defined Wasm functions in this build, rather than one Wasm function per original
entry point. All fifteen logical interfaces are checked against original ARM.

## Connected code

| Address | Recovered operation |
| --- | --- |
| `4a0066d8` | Unsigned division with quotient in `r0`, remainder in `r1` |
| `4a0515e4` | Progress counter, modulo threshold, and indirect callback boundary |
| `4a056f30`, `4a056f94` | Strided read/write with a fifth stack argument for the context |
| `4a0365d4` | Boolean serialization/coercion |
| `4a036638`, `4a03669c`, `4a039b90` | Byte-field transfer variants |
| `4a03c0b8`, `4a03c12c`, `4a0399e0` | Unsigned/encoded integer-field variants |
| `4a039a4c`, `4a039aec` | Signed 16-/32-bit fields with original sign-extension rules |
| `4a03c064` | NUL-terminated string serialization |
| `4a04e90c` | Resource version header and optional extra field |

The original 204-byte serialization context at `4a19b6a8` is explicitly
relocated into Wasm memory. Recovered fields include read/write mode at `+0`,
the file handle at `+8`, the byte counter at `+0xac`, callback period at `+0xb0`,
the fast-path flag at `+0xbc`, version/header fields at `+0xc0`/`+0xc4`, and
the callback token at `+0xc8`. This is a specific context recovery, not a
general implementation of all original globals or relocations.

Preserved details matter:

- The two strided helpers take their context from the fifth argument on the
  original ARM stack. It may select a different handle from the global context.
- Requested bytes advance progress even when the host reports a short transfer
  or failure. The original serializer ignores these host return values.
- Boolean reads advance progress per byte; boolean writes do not advance it.
- Fast versus slow field paths can change transfer width, not only batching.
  The encoded 32-bit slow path can transfer five bytes at a bit count of 32.
- Signed-field transfers use the original stride, then sign-extension steps by
  `stride & ~1` or `stride & ~3`. Partial reads preserve untouched destination
  bytes before that postprocessing.
- Progress uses wrapping 32-bit arithmetic and unsigned division remainder.
  A callback can mutate the global counter; original code reloads it before
  adding the current amount. The bridge preserves the observed `r0`/`r1`
  payload at the original `bx r5` callback boundary. Callback bodies themselves
  are not recovered here.
- The string reader ignores the apparent capacity argument and reads until a
  NUL byte. The resource header returns one without validating a complete file.

## Browser host and actual asset integration

`sims3-serialization.wasm` targets WebAssembly MVP and has exactly three
declared function imports:

| Import | Contract |
| --- | --- |
| `s3e.read` | `(buffer, elementSize, elementCount, handle) -> u32` |
| `s3e.write` | `(buffer, elementSize, elementCount, handle) -> u32` |
| `bridge.progress` | `(callbackToken, combinedAmount, remainder) -> void` |

`host.js` supplies synchronous memory-file services and ordered call tracing.
Reads copy available bytes, including a partial last element, and return the
number of complete elements. Writes may extend writable memory files. Invalid
handles/read-only writes return `0xffffffff`; controlled limits exercise short
and zero transfers. These semantics are explicit adapter contracts. Comparing
both builds under this host verifies recovered game control flow, not every
behavior of the original Marmalade SDK implementation.

The JavaScript host is a browser platform adapter. It contains no ARM CPU
interpreter. There are no WASI, OS, thread, shared-memory, SIMD, or special
HTTP-header requirements. The binary audit checks the exact import names and
signatures; its default mode continues to reject all imports for the earlier
core. A wrong signature is rejected as well.

`runtime.js` loads the existing native core for original path resolution,
fetches original asset parts from `web/manifest.json`, verifies size and SHA-256,
and opens the verified bytes as a read-only memory file. Asset loading is async
before native execution; the serializer's subsequent file calls are synchronous.
This is not a complete native file-open/seek/close layer or asynchronous stream
continuation implementation. Writes remain in memory, without save persistence.

The integration check uses the actual committed `fonts/fonts.group.bin`:

- 63,953 bytes; SHA-256
  `2f8380864dd9f0a2b51ae73129cfb2c3fb02bd5b9deb4b54037933a9ac9d4138`.
- Native header recovery yields version 3.6.6, an extra field of zero, and a
  six-byte header position.
- Recovered native read/write routines transfer the remaining payload, and the
  native header writer reconstructs the header. The entire output file matches
  the original SHA-256.

This proves a resource-byte roundtrip through the recovered stream code. Full
font parsing, glyph rendering, asset object construction, simulation, audio,
and gameplay remain unported.

## Validation and reproduction

All fifteen recovered routines passed 25,811 ARM/native comparisons and
159,404 matching host/callback events; the shared loader passed 105 fixtures
in Node. `verification.json` records exact counts and scope. The
development oracle executes unmodified original ARM/Thumb functions. At the
external file/callback boundaries it binds the controlled host, randomizes
caller-saved registers/flags, and resumes original instructions. Comparisons
cover declared return words, SP and callee-saved registers, every arena/canary
and context byte, ordered host/callback events, file contents, and cursors.
The actual font file is also an original-ARM input in the corpus.

`browser-fixtures.json` records selected original outputs. The shared fixture
runner verifies them in Node and a real browser, including native resource-path
resolution and integrity checks. `loader-verification.json` records Node;
`browser-verification.json` records the live browser separately.

```sh
python tools/build_native_serialization.py --clang /path/to/wasi-sdk/bin/clang
node tools/verify-native-serialization.mjs
node tools/verify-serialization-loader.mjs
```

`--only` with comma-separated original addresses writes a separate partial
diagnostic report and does not replace the full report or browser fixtures.

The fresh Ghidra annotation/export is reproducible with the existing runner:

```sh
python tools/recover_native_core.py --ghidra /path/to/ghidra_12.1.4_PUBLIC --jdk /path/to/jdk-25 --contracts native/serialization/contracts.json --output recovered/native/serialization-analysis --database analysis-work/serialization-ghidra --name Sims3Serialization
```

The pass applies the existing 43 core contracts plus fifteen new contracts,
and two explicitly marked call-site host signatures. It re-exports 58 annotated
functions and 128 callers. These 186 diagnostics overlap existing inventory;
they are not 186 newly recovered or compiled functions. The checked source
image is unchanged. Five-argument stack storage and the unsigned division's
two-register return are explicit in `abi-changes.json`.

Important limits: only bounded nonnegative counts/bit widths and valid buffers,
strides, and contexts are supported. Division and an enabled callback's period
must be nonzero; the original divide-by-zero exception is unported. Boolean
reads require sufficient source data because an original first short read can
expose an uninitialized temporary. String reads require a reachable NUL and a
sufficient destination. Complete SDK behavior, original callback bodies,
resource parsing, the full game, and gameplay performance are not validated.

The next useful work is to connect file-handle/resource lifecycle, allocation,
object layouts and factories, initialization, and remaining asset parsers to
this verified serializer. The main Pages game still uses the slow emulator;
this checkpoint does not fix its flashing or FPS.
