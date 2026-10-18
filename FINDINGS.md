# Technical findings

## Input

- Uploaded file: `The-Sims-3_1.5.21.apk`
- SHA-256: `3eae096a90b9f61d4b52abcbea416c5df0dbf2116554f6b6fbf056d8b2f23cae`
- Size: 72,044,988 bytes; 69 ZIP members.
- Package: `com.ea.thesims3`; manifest version 1.5.21.
- Embedded game configuration reports 1.5.18. These are different version fields
  in this APK, not an assumed match to other releases.
- Minimum Android SDK 4; target SDK 18. Native loader ABI: `armeabi`.

## Architecture

The Java/Dalvik classes contain the Android shell, Marmalade services, and other
bundled libraries. The game logic is not a Java application that can simply be
translated to JavaScript. Its main executable is `assets/The Sims 3.s3e`, an
LZMA-alone stream containing a Marmalade XE3U executable.

Measured XE3U fields:

| Field | Value |
| --- | --- |
| Uncompressed executable | 1,717,460 bytes |
| SDK version | 4.34.0 (`0x42200`) |
| Architecture | ARMv4T, no VFP |
| Compiler flag | RVCT |
| Original load address | `0x4a000000` |
| Entry point | `0x4a165364` |
| Code/data file size | `0x19486c` |
| Code/data memory size | `0x1aa550` |
| Named host imports | 270 |
| External relocations | 273 |
| Internal relocations | 13,526 |

The Android `.so` is the platform host. The `.s3e` is the game. WebAssembly cannot
execute its ARM instructions directly; CPU emulation or a substantially larger
native-code reconstruction is required. This prototype uses CPU emulation.

## Resource recovery

`assets/res.dz` is a DTRZ archive with 678 records and 17 group entries. All 678
members decoded successfully as LZMA-alone streams and matched their advertised
uncompressed lengths. The recovered files comprise 287 JSR-184/M3G files, 288
PNG files, 81 raw sound files, and 22 binary data files.

Archive group strings include repeated locale paths. Preserve each record's
group index; matching only a basename can silently select the wrong language.
The filename records contain uncompressed lengths, not the physical compressed
member lengths. Compressed spans are determined from adjacent record offsets.

## Implemented prototype

- Maps the original game at its expected address and supplies its stack/heap.
- Redirects its imported host calls into a JavaScript compatibility layer.
- Supplies a virtual filesystem from verified recovered resources.
- Suspends the CPU while an asset is fetched and resumes the same call.
- Translates a subset of OpenGL ES 1 fixed-function graphics into WebGL shaders.
- Provides pointer callback delivery and scheduled guest callbacks, with manual
  general-register/CPSR preservation and support for suspending a callback.
- Adds browser-side audio and IndexedDB save plumbing, plus save import/export.

Some host services remain unsupported or approximate. Optional extensions are
reported unavailable. Fixed-function lighting is approximate; fog, clip planes,
and some texture-environment operations are incomplete. This is not a complete
Marmalade implementation.

## Verification and limitations

- All 678 DTRZ members passed stream and size checks.
- All 736 browser resource entries passed their stored length and SHA-256 checks.
- Synthetic ARM callbacks passed execution, lazy-asset suspension/resumption,
  and complete general-register restoration checks.
- DAD exported all 1,007 DEX classes with no failed classes.
- `readelf` recognizes the analysis ELF as a 32-bit little-endian ARM image at
  the expected entry point.
- Unicorn.js 2.1.4 reproducibly faults during initialization, first around
  `0x4a00dda4`. Its 1.0.3 build gets past that failure and is used instead.
- Unicorn.js 1.0.3's context methods are unimplemented; the wrapper explicitly
  preserves the ARMv4T general registers and CPSR for callbacks.
- A 150-second CPU smoke run reached the menu loop and issued 423 frame swaps.
  This used instrumented graphics responses, not a real browser renderer.
- The graphics bridge's GLSL shaders compiled and linked in a Mesa ES2 context.
  The original splash renders recognizably. Menu panels and font atlases load;
  text/composition remain incorrect in the renderer tests.
- Live instrumentation observed text draw calls using valid font textures.
  Asset recovery alone is therefore not the remaining rendering problem.
- A real browser session was not available for verification. Browser worker,
  OffscreenCanvas presentation, audio, and persistent saves remain unverified.
- No successful character-creation, town entry, or playable save/reload has been
  demonstrated. A frame counter is not evidence of a playable game.

## Next engineering work

1. Verify the current build in a real browser and compare the WebGL output with
   the native ES2 test output. Separate bridge defects from test-backend defects.
2. Trace one complete menu frame, including font vertex/index data, per-unit
   texture matrices, texture binding, color masks, blending, and draw order.
3. Repair menu composition and validate press/release coordinates in the game's
   orientation transform.
4. Reach character creation and the town without changing gameplay logic. Add
   the host services actually used along that route and test them explicitly.
5. Verify music, PCM effects, and a real save/reload cycle. Test performance over
   a sustained game session before calling the port playable.

## Primary project references

- [Marmalade-Modding](https://github.com/knot126/Marmalade-Modding), inspected at
  `ddad72228b8f30d9e1e80e3dd16c2cd3b9775296`: format research used to understand
  XE3U and DTRZ. The extractor in this project was written for this APK.
- [The Sims 3 Android Linux port](https://github.com/OlhaGatito/The-Sims-3-Android-port),
  inspected at `3bda6300b1facb294c45f3c80c4becf949010c27`: experimental ARM-native
  host implementation used as a reference for service signatures and ABI details.
  Its README does not claim conclusively verified full-game compatibility.
- [Unicorn.js](https://github.com/AlexAltea/unicorn.js): browser CPU emulation.
- [Androguard](https://github.com/androguard/androguard): DEX/manifest analysis
  and approximate Java reconstruction.
