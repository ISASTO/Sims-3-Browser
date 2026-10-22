"""Annotated Thumb-2 disassembly: dis.py <name-substring|0xaddr> [max]"""
import sys, json, bisect, struct, subprocess
from project import ROOT
from macho import *
import capstone
from capstone import arm
img = Image(ROOT + '/original/sims3_iphone')
funcs = json.load(open(ROOT + '/analysis/functions.json'))
addrs = [f['addr'] for f in funcs]
stubs = img.stub_targets()
def demangle(n):
    try:
        return subprocess.run(['llvm-cxxfilt', '-_'], input=n, capture_output=True, text=True).stdout.strip()
    except Exception:
        return n
def name_at(a):
    a &= ~1
    if a in stubs: return 'IMPORT:' + str(stubs[a][1])
    i = bisect.bisect_right(addrs, a) - 1
    if i >= 0 and funcs[i]['addr'] <= a < funcs[i]['end']:
        f = funcs[i]
        return f['name'] + ('' if a == f['addr'] else f'+{a - f["addr"]:#x}')
    return None
md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
md.detail = True
dic = {a: (l, k) for a, l, k in img.data_in_code()}
def dis(f, out=print):
    a = f['addr']; end = f['end']
    out(f"; {f['name']}  [{demangle(f['name'])}]  {a:#x}-{end:#x} unit={f['unit']}")
    code = img.read(a, end - a)
    off = 0
    while a + off < end:
        cur = a + off
        if cur in dic:
            l, k = dic[cur]
            out(f'  {cur:#x}: .data kind={k} len={l} ' + img.read(cur, l).hex())
            off += l; continue
        insns = list(md.disasm(code[off:off + 4], cur, 1))
        if not insns:
            out(f'  {cur:#x}: .short {struct.unpack("<H", code[off:off+2])[0]:#06x}'); off += 2; continue
        i = insns[0]
        note = ''
        if i.mnemonic in ('bl', 'blx', 'b', 'b.w', 'cbz', 'cbnz') or i.mnemonic.startswith('b'):
            for op in i.operands:
                if op.type == arm.ARM_OP_IMM:
                    n = name_at(op.imm)
                    if n: note = '  ; ' + n
        if i.mnemonic.startswith('ldr') and len(i.operands) > 1 and i.operands[1].type == arm.ARM_OP_MEM and i.operands[1].mem.base == arm.ARM_REG_PC:
            la = ((cur + 4) & ~3) + i.operands[1].mem.disp
            v = img.u32(la)
            note = f'  ; [{la:#x}]={v:#x}'
        out(f'  {cur:#x}: {i.mnemonic:8s} {i.op_str}{note}')
        off += i.size
if __name__ == '__main__':
    q = sys.argv[1]
    if q.startswith('0x'):
        a = int(q, 16)
        fl = [f for f in funcs if f['addr'] <= a < f['end']]
    else:
        fl = [f for f in funcs if q in f['name']]
    for f in fl[:int(sys.argv[2]) if len(sys.argv) > 2 else 3]:
        dis(f)
