"""Constant-propagation data xrefs: which functions reference which data addresses (selrefs, classrefs, cfstrings, globals)."""
import sys, os, json, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import thumb2c
from thumb2c import A, arm
import capstone
ctx = thumb2c.Ctx()
img = ctx.img
def track(fn):
    regs = {}; found = set()
    for a in fn.order:
        i = fn.insns[a]
        if a in fn.labels: regs = {}
        m = i.id; ops = i.operands
        try:
            if m in (A.ARM_INS_MOVW, A.ARM_INS_MOV, A.ARM_INS_MOVS) and len(ops) == 2 and ops[1].type == arm.ARM_OP_IMM: regs[ops[0].reg] = ops[1].imm & 0xffffffff
            elif m == A.ARM_INS_MOVT and ops[0].reg in regs: regs[ops[0].reg] = (regs[ops[0].reg] & 0xffff) | ((ops[1].imm & 0xffff) << 16)
            elif m == A.ARM_INS_LDR and len(ops) == 2 and ops[1].type == arm.ARM_OP_MEM and ops[1].mem.base == A.ARM_REG_PC:
                la = ((a + 4) & ~3) + ops[1].mem.disp * (-1 if ops[1].subtracted else 1); regs[ops[0].reg] = img.u32(la); found.add(regs[ops[0].reg])
            elif m == A.ARM_INS_ADD and len(ops) == 2 and ops[1].type == arm.ARM_OP_REG and ops[1].reg == A.ARM_REG_PC and ops[0].reg in regs:
                regs[ops[0].reg] = (regs[ops[0].reg] + a + 4) & 0xffffffff; found.add(regs[ops[0].reg])
            elif m == A.ARM_INS_ADR: regs[ops[0].reg] = ((a + 4) & ~3) + ops[1].imm; found.add(regs[ops[0].reg])
            else:
                for o in ops:
                    if o.type == arm.ARM_OP_REG and (o.access & capstone.CS_AC_WRITE): regs.pop(o.reg, None)
        except Exception:
            regs = {}
    return found
out = {}
for f in ctx.funcs:
    fn = thumb2c.Fn(ctx, f)
    try: fn.analyze()
    except Exception: continue
    out['%x' % f['addr']] = sorted(track(fn))
json.dump(out, open(thumb2c.ROOT + '/analysis/xrefs.json', 'w'))
print(len(out))
