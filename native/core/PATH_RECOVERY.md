# Recovered native pathname subsystem

This checkpoint adds the original game's connected pathname code to the
import-free native core. It does not integrate the complete game or fix the
legacy emulator's frame rate or flashing.

## Source and ABI

`src/path.c` is reviewed source recovery from the preserved ARM/Thumb code and
Ghidra diagnostics. Function symbols retain their original addresses. Calls to
the existing string, copy, and overlap-move functions execute compiled C/Wasm;
there is no instruction interpreter in the native module.

| Original address | Recovered operation | Important behavior |
| --- | --- | --- |
| `4a000c5c` | Character classification | Returns the original `0x98` mask, rather than a boolean |
| `4a000c72` | Whitespace classification | Uses bit zero of the original table |
| `4a000c88` | Lowercase conversion | Uses the original byte table |
| `4a000ca8` | Uppercase conversion | Preserves the explicit `0xdf` exception |
| `4a16303e` | Bounded string copy | Returns the full source length, including on truncation |
| `4a163010` | Bounded string append | Returns initial destination length plus source length |
| `4a00b998` | Parent path | Accepts both slash kinds, including repeated separators |
| `4a00b9ea` | Extension extraction | Preserves the original backwards scan and final-dot case |
| `4a00ba22` | Filename extraction | Optional extension stripping uses the filename's leftmost dot |
| `4a00ba7c` | Scheme detection | Searches for `://` anywhere in the string |
| `4a00ba94` | Path joining | Preserves separator and capacity behavior |
| `4a00bb00` | In-place normalization | Case option, separators, dot/parent segments, URI/drive rules, trimming, truncation |
| `4a00d6a8` | Resource-path resolution | Reads a relocated global prefix and calls native join/normalize helpers |

The contracts, argument/result registers, provenance, and input domains are in
`contracts.json`. All thirteen entries return their meaningful result in `r0`.
The compiled source deliberately keeps behavior that differs from a browser
URL parser or a host operating system's path library.

## Recovered initialized data and state

`tools/build_native_core.py` creates `src/path-data.h` from two hash-pinned
original image ranges. It does not invent a replacement ASCII classification
table or assume that the initial directory prefix is empty.

| Original range | Native representation |
| --- | --- |
| `4a183d48`, 257 bytes | Constant default C-locale classification table, including the entry preceding character zero |
| `4a1921dc`, 128 bytes | Mutable directory-prefix buffer, initially `/` followed by zeroes |

The original runtime initializes its locale-table pointer at `4a1aa490` to
`FUN_4a005b98(0,0) + 1`. The comparison harness executes that initializer from
the original image, checks its returned address, and initializes this runtime
BSS field. It does not patch the original file or replace the original path
functions with JavaScript responses.

The native source relocates these particular data objects into normal Wasm
linear memory. `core_path_root` exposes the native prefix address; the browser
loader provides `pathRootAddress` and `setPathRoot(value)`. The setter accepts
a UTF-8 string or exact `Uint8Array` bytes, rejects embedded NULs and more than
127 bytes, and handles a source view that aliases the prefix buffer. Prefix
state survives test-arena reset and memory growth. Direct callers must use
fresh memory views after growth.

This is an explicit relocation for two recovered objects. It is not a complete
implementation of original program globals, general relocations, or runtime
locale initialization. Only the default C locale is supported here.

## Validation and limits

`tools/native-path-cases.cjs` generates inputs only. Expected return words and
memory come from executing the unmodified original functions with Unicorn as
a development oracle. The release component does not import Unicorn.

The corpus covers all 256 byte values and EOF for classification/conversion;
zero and short capacities where valid; truncation; byte alignments; in-place
filename/parent extraction; URI and drive prefixes; slash/backslash mixtures;
dot and parent segments; trailing whitespace; case options; long inputs; seeded
nested paths; changing global prefixes; and every one of the 736 resource
manifest paths. Each memory case compares the whole arena including canaries,
and resolver cases also compare the relocated prefix bytes. Return-register,
callee-saved-register, and original stack contracts are checked.

The full results and exact function/case counts are in `verification.json`.
`browser-fixtures.json` records selected original outputs for the shared Node
and browser fixture runner. `loader-verification.json` also covers persistent
prefix state, aliased prefix updates, growth/reset, and a connected native
resolution of `Mesh/../Chair.M3G` under `Data/Objects`.

Important domain limits are deliberate and documented:

- Character helpers accept byte values or EOF, using the default C locale.
- Append/join capacities must be positive. Copy allows zero capacity.
- Extension extraction requires nonempty input and one readable preceding
  byte, matching the original scan.
- Filename components must be at most 126 bytes: the original copies 127 bytes
  into a stack buffer and relies on a terminator. Longer components can expose
  original uninitialized stack data; those inputs are not claimed equivalent.
- String/copy regions must satisfy the documented overlap contracts. Inputs
  and destination buffers must be large enough for the recovered operations
  and any lookahead. Resolver output and prefix capacity are 128 bytes.
- The original normalizer's final limit is relative to the body after a URI
  prefix, rather than a newly imposed total-length policy. Preserve that
  distinction if the source is refactored.

These finite comparisons do not establish exhaustive equivalence, a complete
filesystem, asset loading, saved-game persistence, or playable game behavior.

## Next connected work

Use these functions while recovering the game's resource and file services,
including actual file handles, seeking, reads, error returns, writable paths,
and asset locale/group selection. Recover the remaining runtime/global state
and host ABIs before treating this component as the complete filesystem. Main
entry, object layouts, allocation, simulation, rendering, audio, and saves
remain unported.
