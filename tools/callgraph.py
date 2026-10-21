"""Linear-ish sweep per function to collect direct call edges (bl/blx imm, b.w to other function)."""
import sys, json, bisect, pickle
sys.path.insert(0, '/home/claude/sims3/tools')
from macho import *
import capstone
from capstone import arm
img = Image('/home/claude/sims3/original/sims3_iphone')
funcs = json.load(open('/home/claude/sims3/analysis/functions.json'))
addrs = [f['addr'] for f in funcs]
stubs = img.stub_targets()
dic = {a: l for a, l, k in img.data_in_code()}
md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
md.detail = True
md.skipdata = True
edges = {}
mnem = {}
for f in funcs:
    a, end = f['addr'], f['end']
    code = img.read(a, end - a)
    calls = set()
    for i in md.disasm(code, a):
        if i.id == 0: continue
        m = i.mnemonic
        mnem[m] = mnem.get(m, 0) + 1
        if m in ('bl', 'blx', 'b.w', 'b') and i.operands and i.operands[0].type == arm.ARM_OP_IMM:
            t = i.operands[0].imm
            if m in ('b', 'b.w') and a <= t < end: continue
            if t in stubs: calls.add('IMPORT:' + str(stubs[t][1]))
            else:
                k = bisect.bisect_right(addrs, t & ~1) - 1
                if k >= 0: calls.add(funcs[k]['name'] + ('' if funcs[k]['addr'] == t & ~1 else '+%x' % ((t & ~1) - funcs[k]['addr'])))
    edges[f['name']] = sorted(calls)
json.dump(edges, open('/home/claude/sims3/analysis/callgraph.json', 'w'))
json.dump(sorted(mnem.items(), key=lambda x: -x[1]), open('/home/claude/sims3/analysis/mnemonics.json', 'w'))
print(len(edges), 'functions;', sum(len(v) for v in edges.values()), 'edges;', len(mnem), 'mnemonics')
