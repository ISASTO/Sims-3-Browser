"""Generate the statically recompiled C program from the original executable.

Usage: python tools/recomp/main.py [--out native/game/gen]
"""
import argparse
import hashlib
import json
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from image import ROOT, Image  # noqa: E402
from lift import Generator, Program, key  # noqa: E402


def load_seeds(im):
    roots = [key(im.entry, False)]
    fs = json.loads((ROOT / "recovered/native/functions.json").read_text())
    for f in fs:
        addr = int(f["address"], 16)
        roots.append(key(addr, f["thumb"]))
    for s in im.analysis["functionPointerSeeds"]:
        roots.append(key(s["address"], s["thumb"]))
    extra = ROOT / "native/game/extra-entries.json"
    if extra.exists():
        for e in json.loads(extra.read_text())["entries"]:
            roots.append(int(e["key"], 16))
    out = []
    seen = set()
    for r in roots:
        if r in seen:
            continue
        seen.add(r)
        out.append(r)
    return out


CODE_END = 0x4a172a10


def relocation_roots(im, prog):
    """Relocated words that point at code not covered by any discovered
    function: vtable and callback-table entries.  Jump-table targets (local
    labels) are excluded."""
    from decode import decode_at, DecodeError
    labels = set()
    inside = set()
    for f in prog.functions.values():
        inside.update(f.insns)
        for tks in f.jump_tables.values():
            labels.update(t & ~1 for t in tks)
        for _, tks in f.switch8.values():
            labels.update(t & ~1 for t in tks)
    roots = []
    rejected = []
    seen = set()
    for r in im.internal_relocations:
        v = im.u32(r)
        if not (im.import_end <= v < CODE_END) or v in prog.functions or v in seen:
            continue
        seen.add(v)
        a = v & ~1
        if a in labels:
            continue
        if not v & 1 and v & 3:
            rejected.append(v)
            continue
        try:
            decode_at(im, a, bool(v & 1))
        except DecodeError:
            rejected.append(v)
            continue
        roots.append(v)
    return roots, rejected


def pic_thumb_roots(im, prog):
    """Thumb code addresses computed position-independently
    (LDR rX, =offset; ADD rX, PC or ADR), e.g. callbacks stored in structs."""
    from decode import ADD
    out = set()
    for f in prog.functions.values():
        for a in f.order:
            ins = f.insns[a]
            if ins.kind != "dp" or ins.op != ADD or ins.rd is None or ins.rd == 15 or ins.cond != 14:
                continue
            d = ins.rd
            sh = ins.sh
            val = None
            if sh["t"] == "rsi" and sh["rm"][0] == "k" and ins.rn == ("r", d) and sh["amount"] == 0:
                pcv, other = sh["rm"][1], d
            elif ins.rn is not None and ins.rn[0] == "k" and sh["t"] == "rsi" and sh["rm"][0] == "r" and sh["amount"] == 0:
                pcv, other = ins.rn[1], sh["rm"][1]
            elif ins.rn is not None and ins.rn[0] == "k" and sh["t"] == "imm":
                val, other = (ins.rn[1] + sh["v"]) & 0xFFFFFFFF, None
            else:
                continue
            if val is None:
                b = a
                for _ in range(10):
                    b -= 2 if ins.thumb else 4
                    p = f.insns.get(b)
                    if p is None:
                        break
                    if p.kind == "mem" and p.load and p.rd == other and p.rn[0] == "k" and p.off[0] == "k" and p.width == 4:
                        val = (im.u32((p.rn[1] + p.off[1]) & 0xFFFFFFFF) + pcv) & 0xFFFFFFFF
                        break
                    if (p.kind == "dp" and p.rd == other) or (p.kind == "mem" and p.load and p.rd == other) or p.kind in ("b", "bx", "block"):
                        break
            if val is not None and val & 1 and im.import_end <= val < CODE_END and val not in prog.functions:
                out.add(val)
    return sorted(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=str(ROOT / "native/game/gen"))
    args = ap.parse_args()
    t0 = time.time()
    im = Image()
    roots = load_seeds(im)
    prog = Program(im, roots, roots)
    prog.run()
    reloc_roots, rejected = relocation_roots(im, prog)
    prog.pending.extend(reloc_roots)
    prog.true_entries.update(reloc_roots)
    prog.run()
    pic_roots = pic_thumb_roots(im, prog)
    prog.pending.extend(pic_roots)
    prog.true_entries.update(pic_roots)
    prog.run()
    gen = Generator(prog, args.out)
    stats, files = gen.write()
    errors = {}
    for k, f in sorted(prog.functions.items()):
        errs = {"%08x" % a: m for a, m in f.errors.items() if m}
        if errs:
            errors["%08x" % k] = errs
    report = {
        "generator": "tools/recomp (static ARMv4T/Thumb to C)",
        "executableSha256": im.sha256,
        "roots": len(roots),
        "relocationRoots": len(reloc_roots),
        "relocationRejected": len(rejected),
        "picThumbRoots": len(pic_roots),
        "stats": stats,
        "flagConsumers": sorted("%08x" % k for k, f in prog.functions.items() if f.consumer),
        "flagProducers": {"%08x" % k: "".join(sorted(v)) for k, v in sorted(prog.producers.items()) if v},
        "switch8Sites": sum(len(f.switch8) for f in prog.functions.values()),
        "jumpTables": sum(len(f.jump_tables) for f in prog.functions.values()),
        "indirectCallSites": sum(len(f.indirect_calls) for f in prog.functions.values()),
        "hostCallSites": sum(len(f.host_calls) for f in prog.functions.values()),
        "warnings": prog.warnings,
        "functionsWithUnreachableDecodeFailures": len(errors),
        "decodeFailures": errors,
        "seconds": round(time.time() - t0, 1),
    }
    Path(args.out, "report.json").write_text(json.dumps(report, indent=1) + "\n")
    print(json.dumps({k: v for k, v in report.items() if k not in ("decodeFailures", "flagConsumers", "flagProducers", "warnings")}, indent=1))
    print("warnings:", len(prog.warnings), prog.warnings[:10])
    print("consumers:", report["flagConsumers"][:20], "producers:", list(report["flagProducers"].items())[:20])


if __name__ == "__main__":
    main()
