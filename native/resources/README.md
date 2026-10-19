# Native resource chunk loading

This build links the recovered pathname core, binary serializer, and original
resource chunk control flow in **one Wasm instance with one linear memory**.
It adds six recovered original entry points, for **86 distinct original entry
points** in the linked program. The earlier standalone modules remain available.
There is no CPU interpreter in this execution path. This is not a playable game.

## Recovered original behavior

| Address | Entry | Behavior |
| --- | --- | --- |
| `4a02b1e8` | `resource_type_hash` | ASCII case-insensitive hash, seed `0x1505`, wrapping multiply by 33 |
| `4a04d928` | `resource_dispatch` | Registry lookup, unknown-chunk skip, native callback and write-length patching |
| `4a04d7bc` | `resource_next_chunk` | Zero-initialized type word, dispatch and original type result |
| `4a0399a0` | `resource_close` | Optional pending-byte flush, file close and open-count decrement |
| `4a03989e` | `resource_close_wrapper` | Original wrapper around close |
| `4a046724` | `resource_read_file` | Header, repeated chunks through the zero terminator, then close |

The dispatcher takes a type hash in `r0`; an older approximate export omitted
this argument at one call site. A chunk length includes **its own four-byte
length word**, so the unknown reader seeks from the length-word position by
that length. Adding the length after reading it would skip four extra bytes.
The native type result remains the original type even after a handler executes.

The first matching registry pair wins, including duplicate hashes. An unknown
write type emits nothing. A registered writer emits type and `0xcdcdcdcd`
placeholder length, calls its handler, computes the length, seeks back to patch
it, and restores the final cursor. A registered reader does not automatically
seek to the declared end after its handler returns. Preserve these rules.

Close flushes exactly one byte at context `+0xb4` only in write mode with a
nonzero `+0xbc` flag. That flush does not advance the serializer's progress
counter. The separate open count is decremented even when close fails or a
handle was already closed; arithmetic wraps at 32 bits.

## Memory and callback integration

`sims3-resources.wasm` is **15,326 bytes**, SHA-256:

`81bc78791bf7e0e681c707f8f0539860f3ae6d5d4fd82c0256547ef44d368796`

It links the actual existing C implementations, including all 65 core and 15
serializer interfaces. Their gateways, pathname state, stream context and new
resource state use the same memory and temporary allocation cursor. The loader
never fetches or instantiates the two older Wasm binaries. It verifies their
manifest and fixture hashes to identify the exact source/expectation baselines.
The old modules' own binaries and full differential reports remain unchanged.

Explicit relocated state includes the existing 204-byte serializer context at
original `4a19b6a8`, the 16-byte registry descriptor at `4a19fa98`, the four-byte
open count at `4a192814`, and the core's previously recovered pathname data.
This resolves the earlier component memory boundary. It does **not** recover
the whole original heap, initialized-data graph, function tables, vtables or
runtime initialization. `allocate`/`resetArena` remain development integration,
not the original game allocator. Reset clears the registry before arena reuse.

Registry installation is also an adapter: the owner supplies stable
`(typeHash, originalCallbackToken)` pairs. Original registration/growth and
registry ownership remain unported. Only these exact no-argument Thumb tokens
are mapped to already recovered native bodies:

| Original token | Native target |
| --- | --- |
| `4a04e90d` | Original resource header |
| `4a04d7bd` | Original next-chunk reader, including nested dispatch |
| `4a0399a1` | Original close |
| `4a03989f` | Original close wrapper |
| `4a046725` | Original complete resource loop |

The ARM oracle executes the actual original bodies through the `bx r0` veneer
at `4a1652c4`; these game callbacks are not replaced by JavaScript or test stubs.
The native build uses a small explicit token map, without an ARM interpreter.
The loader rejects other tokens, and the native map traps unknown tokens.
This is not a general solution for the game's indirect calls. The older
progress bridge remains a controlled host boundary with its bodies unported.

The MVP binary has six imports: `s3e.read`, `s3e.write`, `s3e.tell`, `s3e.seek`,
`s3e.close`, and `bridge.progress`. The binary audit checks exact names and
signatures. It uses ordinary **unshared** memory, no threads, SIMD, WASI, Android
runtime or special HTTP response headers. “One memory” here does not mean
`SharedArrayBuffer` or Wasm shared memory.

`host.js` extends the existing controlled memory-file model. Closed/invalid
handles fail, tell returns the current position, seek supports signed offsets
and origins 0/1/2, and close retains bytes for inspection while marking the
handle closed. Seek permits bounded positions beyond EOF. These are explicit
browser adapter contracts. Observed call-site arguments and used return words
are recorded in `contracts.json`; ignored seek/close return values and complete
original SDK semantics are not independently established by these tests.
Opening and binding an existing memory file is browser integration, not the
original native open path or its startup bookkeeping.

## Original resource integration

The check uses the original **63,953-byte `fonts/fonts.group.bin`**, SHA-256
`2f8380864dd9f0a2b51ae73129cfb2c3fb02bd5b9deb4b54037933a9ac9d4138`.
Original native pathname resolution finds it, fetched parts are integrity
checked, and the original complete header/chunk/close loop traverses it.

| Native chunk type | Hash | Offset | Length including length word | Payload bytes | Next offset |
| --- | --- | --- | --- | --- | --- |
| `ResGroupMembers` | `8081e087` | 6 | 14 | 10 | 24 |
| `ResGroupResources` | `dc3c2177` | 24 | 63,921 | 63,917 | 63,949 |

The final zero terminator ends at byte 63,953; native close marks the file
closed and takes the supplied open count from one to zero. Chunk names are
matched using the original native type hash. The integration installs an empty
handler registry, so the original dispatcher skips both unported payload
handlers. It does not construct or render the fonts.

A separate field inspection binds the member payload and uses recovered native
string/u32 serialization to obtain group name **`fonts`** and flags **0**, then
native close. Three connected original-ARM calls independently verified those
fields, their memory, SDK trace, cursor and closed state. Browser orchestration
locates the fields; the original `ResGroupMembers` handler and object factory
remain unported. `member-verification.json` records this exact scope.

The earlier complete native resource-byte roundtrip also passes in this linked
module. It reproduces the entire original font file and its SHA-256. Byte
transfer and chunk traversal are not complete font parsing or glyph rendering.

## Verification and reproduction

- **412,722** full original ARM/native comparisons pass against this exact linked
  binary: 380,258 core, 25,811 serializer, and **6,653** across the six new entries.
  `verification-summary.json` and the two `linked-*-verification.json` reports
  record the full reruns, separately from the preserved standalone reports.
- **11,643** ordered SDK/progress events match; **540** actual original native
  callback invocations execute across all five supported targets.
- **164,994,400** arena/state bytes were compared across repeated buffers; this
  is a test measurement, not unique game bytes or gameplay coverage.
- **502** selected ARM-derived fixtures pass in Node through the linked browser
  loader: 267 core, 105 serializer, and 130 new resource fixtures.
- The real font's complete native file loop, member fields and byte roundtrip
  pass. There is one suitable `.group.bin` in the committed resource manifest;
  no broader asset/parser coverage is implied.

The oracle randomizes incoming and external-call caller-saved registers/flags,
checks original callee-saved registers and stack preservation, declared return
words, all arena/table/canary/context/registry bytes, the separate open counter,
ordered host events and file bytes/cursors/closed states. It runs unmodified
original game instructions. File/progress services bind the **same controlled
host model** to both executions; this proves game behavior under that model,
not independent equivalence of every original SDK service.

The shared loader checks include memory growth/fresh views, shared allocation,
registry clearing, invalid arguments/callbacks, bounded asset traversal, and
rejection of changed linked manifests/fixture bytes. Actual browser results
are recorded separately in `browser-verification.json`; Node is not a browser
pass. The new public check page is `native/resources/check.html` once Pages has
deployed the current commit.

```sh
python tools/build_native_resources.py --clang /path/to/wasi-sdk/bin/clang
node tools/verify-native-resources.mjs
node tools/verify-resource-loader.mjs
node tools/verify-native-core.cjs --linked-resources
node tools/verify-native-serialization.mjs --linked-resources
```

Repeated builds reproduce the module, manifest and MVP audit byte for byte.
The new C passes `-Wall -Wextra -Werror` syntax checking. Partial `--only`
diagnostics write under `analysis-work/`, preserving the full report/fixtures.

Fresh Ghidra annotations apply **64 contracts**: 43 core, 15 serializer and six
resource routines. Five controlled file-service signatures are annotated;
269 outside callers are identified, with 128 re-exported alongside the 64
annotated routines, yielding **192 diagnostic exports**. These overlap existing
inventory and are not 192 new compiled functions. Executable bytes are unchanged.
The contract source chain is recursive, hash-checked and rejects cycles and
duplicate addresses; each function retains its actual contract-file provenance.

```sh
python tools/recover_native_core.py --ghidra /path/to/ghidra_12.1.4_PUBLIC --jdk /path/to/jdk-25 --contracts native/resources/contracts.json --output recovered/native/resource-analysis --database analysis-work/resource-ghidra --name Sims3Resources
```

## Remaining work

The original length local is undefined on an incomplete four-byte length read;
such reads are outside the recovered contract. Full-file calls require a
bounded terminating stream and valid stable registry. The public asset inspector
validates lengths, bounds and termination before entering the native loop;
this guard is integration code, not a recovered original validation routine.

Next recover the actual registry lifecycle, file opening, resource manager and
group-member/object construction paths. Use the shared memory to connect real
class factories and the resource/font payload parsers. General allocation,
startup, full indirect-call coverage, graphics, simulation, input, audio and
persistent saves remain unfinished. The main Pages game still uses the earlier
emulator. This component does not fix its FPS or flashing.
