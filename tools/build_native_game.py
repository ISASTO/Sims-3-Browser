"""Build the statically recompiled game to WebAssembly.

    python tools/build_native_game.py [--clang clang] [--jobs N] [--no-generate]

1. Regenerates native/game/gen/*.c from recovered/game.s3e with tools/recomp.
2. Compiles the generated C and native/game/runtime/*.c with clang for
   wasm32 (WebAssembly MVP feature set, no libc, no WASI).
3. Links native/game/sims3-game.wasm and writes native/game/build.json.

No ARM instruction is interpreted at run time; see native/game/README.md.
"""
import argparse
import concurrent.futures
import hashlib
import json
import os
import shutil
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
GAME = ROOT / "native/game"
OBJ = ROOT / "analysis-work/native-game-obj"

CFLAGS = ["--target=wasm32", "-mcpu=mvp", "-O2", "-ffreestanding", "-fno-builtin", "-nostdlib",
          "-fno-strict-aliasing", "-fwrapv", "-w"]
LDFLAGS = ["-Wl,--no-entry", "-Wl,--stack-first", "-Wl,-z,stack-size=8388608",
           "-Wl,--initial-memory=67108864", "-Wl,--max-memory=1073741824", "-Wl,--strip-debug"]


def sha256(p):
    return hashlib.sha256(Path(p).read_bytes()).hexdigest()


def compile_one(clang, src, extra):
    suffix = "-trace" if extra else ""
    out = OBJ / (src.stem + suffix + ".o")
    stamp = OBJ / (src.stem + suffix + ".hash")
    digest = hashlib.sha256(src.read_bytes() + (GAME / "runtime/rt.h").read_bytes() + " ".join(CFLAGS + extra).encode()).hexdigest()
    if out.exists() and stamp.exists() and stamp.read_text() == digest:
        return src.name, 0.0, True
    t = time.time()
    cmd = [clang] + CFLAGS + extra + ["-c", str(src), "-o", str(out)]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode:
        raise SystemExit("compile failed: %s\n%s" % (src, r.stderr[-4000:]))
    stamp.write_text(digest)
    return src.name, time.time() - t, False


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--clang", default=shutil.which("clang") or "clang")
    ap.add_argument("--jobs", type=int, default=os.cpu_count() or 2)
    ap.add_argument("--no-generate", action="store_true")
    ap.add_argument("--trace", action="store_true", help="debug build with block tracing")
    args = ap.parse_args()
    t0 = time.time()
    if not args.no_generate:
        subprocess.run([sys.executable, str(ROOT / "tools/recomp/main.py"), "--out", str(GAME / "gen")], check=True)
    OBJ.mkdir(parents=True, exist_ok=True)
    sources = sorted((GAME / "gen").glob("*.c")) + sorted((GAME / "runtime").glob("*.c"))
    extra = ["-DRT_TRACE=1"] if args.trace else []
    with concurrent.futures.ThreadPoolExecutor(args.jobs) as ex:
        for name, secs, cached in ex.map(lambda s: compile_one(args.clang, s, extra), sources):
            if not cached:
                print("compiled %-16s %6.1fs" % (name, secs), flush=True)
    objs = [str(OBJ / (s.stem + ("-trace" if args.trace else "") + ".o")) for s in sources]
    out = GAME / ("sims3-game-trace.wasm" if args.trace else "sims3-game.wasm")
    cmd = [args.clang, "--target=wasm32", "-nostdlib"] + LDFLAGS + objs + ["-o", str(out)]
    subprocess.run(cmd, check=True)
    report = json.loads((GAME / "gen/report.json").read_text())
    analysis = json.loads((ROOT / "recovered/native/analysis-input.json").read_text())
    imports = {"names": [i["name"] for i in analysis["imports"]],
               "address": {i["name"]: i["arm"] for i in analysis["imports"]}}
    (GAME / "imports.json").write_text(json.dumps(imports, separators=(",", ":")) + "\n")
    build = {
        "wasm": out.name,
        "bytes": out.stat().st_size,
        "sha256": sha256(out),
        "executableSha256": report["executableSha256"],
        "functions": report["stats"]["functions"],
        "instructions": report["stats"]["instructions"],
        "clang": subprocess.run([args.clang, "--version"], capture_output=True, text=True).stdout.splitlines()[0],
        "cflags": CFLAGS + extra,
        "ldflags": LDFLAGS,
        "guestLinear": 0x01000000,
        "guestBase": 0x4a000000,
        "seconds": round(time.time() - t0, 1),
    }
    if not args.trace:
        (GAME / "build.json").write_text(json.dumps(build, indent=1) + "\n")
    print(json.dumps(build, indent=1))


if __name__ == "__main__":
    main()
