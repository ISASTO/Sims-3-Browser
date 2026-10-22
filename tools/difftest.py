#!/usr/bin/env python3
"""Instruction-level differential test: original ARM bytes executed by Unicorn vs. the
recompiler's C translation compiled natively.  Independent of HLE (no calls involved).

usage: difftest.py [--per-key N] [--trials T] [--filter substr]
"""
import sys, os, json, struct, random, ctypes, subprocess, collections, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import thumb2c
from thumb2c import A, arm, Unsupported
import unicorn
from unicorn import arm_const as U

from project import ROOT
OUT = ROOT + '/build/difftest'
SCRATCH = 0x10000000
SCRATCH_SIZE = 0x20000
CODEPAGE = 0x0f000000

SKIP = {A.ARM_INS_B, A.ARM_INS_BL, A.ARM_INS_BLX, A.ARM_INS_BX, A.ARM_INS_CBZ, A.ARM_INS_CBNZ, A.ARM_INS_TBB, A.ARM_INS_TBH,
        A.ARM_INS_IT, A.ARM_INS_NOP, A.ARM_INS_UDF, A.ARM_INS_TRAP, A.ARM_INS_BKPT, A.ARM_INS_DMB, A.ARM_INS_DSB, A.ARM_INS_ISB,
        A.ARM_INS_LDREX, A.ARM_INS_STREX, A.ARM_INS_LDREXB, A.ARM_INS_STREXB, A.ARM_INS_LDREXH, A.ARM_INS_STREXH, A.ARM_INS_HINT,
        A.ARM_INS_PLD, A.ARM_INS_PLI, A.ARM_INS_MRS, A.ARM_INS_MSR, A.ARM_INS_SVC, A.ARM_INS_CDP, A.ARM_INS_CDP2, A.ARM_INS_MCR,
        A.ARM_INS_MRC, A.ARM_INS_STC, A.ARM_INS_LDC, A.ARM_INS_STC2, A.ARM_INS_MCR2, A.ARM_INS_MRC2, A.ARM_INS_LDCL, A.ARM_INS_STCL}


def key_of(i):
    ops = []
    for o in i.operands:
        if o.type == arm.ARM_OP_REG:
            n = i.reg_name(o.reg)
            ops.append(('R', n[0] if n not in ('sp', 'pc', 'lr') else n, o.shift.type))
        elif o.type == arm.ARM_OP_MEM:
            ops.append(('M', i.reg_name(o.mem.base) == 'pc', bool(o.mem.index), o.shift.type, o.subtracted))
        else:
            ops.append((o.type,))
    mn = i.mnemonic
    return (i.id, re.sub(r'(eq|ne|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le)(?=\.|$)', '', mn) if i.cc != A.ARM_CC_AL else mn,
            tuple(ops), i.cc != A.ARM_CC_AL, i.size, thumb2c.sets_flags(i), i.writeback, getattr(i, 'post_index', False))


def mem_regs(i):
    out = set()
    for o in i.operands:
        if o.type == arm.ARM_OP_MEM:
            out.add(thumb2c.REGMAP.get(i.reg_name(o.mem.base), i.reg_name(o.mem.base)))
            if o.mem.index:
                out.add('IDX:' + thumb2c.REGMAP.get(i.reg_name(o.mem.index), i.reg_name(o.mem.index)))
    if i.id in (A.ARM_INS_LDM, A.ARM_INS_STM, A.ARM_INS_LDMDB, A.ARM_INS_STMDB, A.ARM_INS_VLDMIA, A.ARM_INS_VSTMIA, A.ARM_INS_VLDMDB, A.ARM_INS_VSTMDB):
        out.add(thumb2c.REGMAP.get(i.reg_name(i.operands[0].reg), i.reg_name(i.operands[0].reg)))
    if i.id in (A.ARM_INS_VLD1, A.ARM_INS_VST1, A.ARM_INS_VLD2, A.ARM_INS_VST2, A.ARM_INS_VLD3, A.ARM_INS_VST3, A.ARM_INS_VLD4, A.ARM_INS_VST4):
        hw1, hw2 = struct.unpack('<HH', bytes(i.bytes))
        rn = hw1 & 0xf
        out.add(['r%d' % k for k in range(13)][rn] if rn < 13 else ['sp', 'lr', 'pc'][rn - 13])
        rm = hw2 & 0xf
        if rm not in (13, 15):
            out.add('IDX:r%d' % rm)
    if i.id in (A.ARM_INS_PUSH, A.ARM_INS_POP, A.ARM_INS_VPUSH, A.ARM_INS_VPOP):
        out.add('sp')
    return out


def collect(ctx, per_key, flt):
    groups = collections.defaultdict(list)
    for f in ctx.funcs:
        fn = thumb2c.Fn(ctx, f)
        try:
            fn.analyze()
        except Exception:
            continue
        for a in fn.order:
            i = fn.insns[a]
            if i.id in SKIP:
                continue
            if i.id in (A.ARM_INS_POP, A.ARM_INS_LDM) and any(o.type == arm.ARM_OP_REG and o.reg == A.ARM_REG_PC for o in i.operands):
                continue
            if i.id == A.ARM_INS_LDR and i.operands[0].reg == A.ARM_REG_PC:
                continue
            if any(o.type == arm.ARM_OP_REG and o.reg == A.ARM_REG_PC and o.access & 2 for o in i.operands):
                continue
            if flt and flt not in i.mnemonic:
                continue
            k = key_of(i)
            if len(groups[k]) < per_key:
                groups[k].append((fn, i))
    return groups


def gen_c(cases):
    lines = ['#define NO_RECOMP_DECLS', '#include "cpu.h"', 'uint8_t *guest_base;',
             'typedef struct { uint32_t r[16]; uint32_t n, z, c, v, fn, fz, fc, fv; uint64_t d[32]; } TS;',
             'void trap_unimpl(CPU *c, uint32_t a, const char *w) { __builtin_trap(); }',
             'void trap_insn(CPU *c, uint32_t a) { __builtin_trap(); }']
    load = ('uint32_t r0=s->r[0],r1=s->r[1],r2=s->r[2],r3=s->r[3],r4=s->r[4],r5=s->r[5],r6=s->r[6],r7=s->r[7],r8=s->r[8],r9=s->r[9],'
            'r10=s->r[10],r11=s->r[11],r12=s->r[12],sp=s->r[13],lr=s->r[14]; uint32_t n=s->n,z=s->z,cf=s->c,v=s->v,fn=s->fn,fz=s->fz,fc=s->fc,fv=s->fv,fpscr_rest=0;'
            + ' '.join('uint64_t d%d=s->d[%d];' % (k, k) for k in range(32)))
    store = ('s->r[0]=r0;s->r[1]=r1;s->r[2]=r2;s->r[3]=r3;s->r[4]=r4;s->r[5]=r5;s->r[6]=r6;s->r[7]=r7;s->r[8]=r8;s->r[9]=r9;s->r[10]=r10;'
             's->r[11]=r11;s->r[12]=r12;s->r[13]=sp;s->r[14]=lr;s->n=n;s->z=z;s->c=cf;s->v=v;s->fn=fn;s->fz=fz;s->fc=fc;s->fv=fv;'
             + ''.join('s->d[%d]=d%d;' % (k, k) for k in range(32)))
    for idx, (fn, i, code) in enumerate(cases):
        lines.append('void T_%d(TS *s) { CPU *c = 0; (void)c; %s %s %s } /* %x %s %s */' % (idx, load, code, store, i.address, i.mnemonic, i.op_str))
    open(OUT + '/tests.c', 'w').write('\n'.join(lines) + '\n')
    r = subprocess.run(['clang', '-shared', '-fPIC', '-O1', '-w', '-ffp-contract=off', '-fno-strict-aliasing', '-I' + ROOT + '/runtime',
                        OUT + '/tests.c', '-o', OUT + '/tests.so', '-lm'], capture_output=True, text=True)
    if r.returncode:
        print(r.stderr[:3000])
        raise SystemExit(1)


class TS(ctypes.Structure):
    _fields_ = [('r', ctypes.c_uint32 * 16), ('n', ctypes.c_uint32), ('z', ctypes.c_uint32), ('c', ctypes.c_uint32), ('v', ctypes.c_uint32),
                ('fn', ctypes.c_uint32), ('fz', ctypes.c_uint32), ('fc', ctypes.c_uint32), ('fv', ctypes.c_uint32), ('d', ctypes.c_uint64 * 32)]


RNAMES = ['r0', 'r1', 'r2', 'r3', 'r4', 'r5', 'r6', 'r7', 'r8', 'r9', 'r10', 'r11', 'r12', 'sp', 'lr']
UREG = [U.UC_ARM_REG_R0 + k for k in range(13)] + [U.UC_ARM_REG_SP, U.UC_ARM_REG_LR]


def rand_word(rng):
    k = rng.random()
    if k < 0.15:
        return rng.choice([0, 1, 2, 0xffffffff, 0x80000000, 0x7fffffff, 31, 32, 33, 0xff, 0x100, 0xffff, 0x10000])
    if k < 0.3:
        return rng.randrange(0, 64)
    if k < 0.45:
        f = rng.choice([0.0, -0.0, 1.0, -1.0, 0.5, 3.14159, -2.5e10, 1e-3, 1e30, -7.25, 1e-39, float('inf')]) * (rng.random() + 0.5)
        return struct.unpack('<I', struct.pack('<f', f))[0]
    return rng.getrandbits(32)


def rand_d(rng):
    k = rng.random()
    if k < 0.3:
        a, b = rand_word(rng), rand_word(rng)
        return a | (b << 32)
    if k < 0.5:
        f = rng.choice([0.0, 1.0, -1.0, 0.5, 2.0, 1e100, -3.25, 1e-310, 123456.789]) * (rng.random() + 0.5)
        return struct.unpack('<Q', struct.pack('<d', f))[0]
    return rng.getrandbits(64)


def main():
    per_key = 3
    trials = 12
    flt = None
    args = sys.argv[1:]
    if '--per-key' in args: per_key = int(args[args.index('--per-key') + 1])
    if '--trials' in args: trials = int(args[args.index('--trials') + 1])
    if '--filter' in args: flt = args[args.index('--filter') + 1]
    os.makedirs(OUT, exist_ok=True)
    ctx = thumb2c.Ctx()
    groups = collect(ctx, per_key, flt)
    cases = []
    for k, lst in groups.items():
        for fn, i in lst:
            fn.cur = i
            try:
                code, fall = fn.translate(i)
            except Unsupported as e:
                continue
            except Exception as e:
                print('translate exception', hex(i.address), i.mnemonic, i.op_str, e)
                continue
            if 'goto' in code or 'RETURN' in code or 'CALL' in code or 'TAIL' in code or 'TRAP' in code:
                continue
            if i.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID):
                code = 'if (%s) { %s }' % (thumb2c.CC[i.cc], code)
            cases.append((fn, i, code))
    print('cases', len(cases), 'keys', len(groups))
    gen_c(cases)
    lib = ctypes.CDLL(OUT + '/tests.so')
    # guest memory for the C side
    libc = ctypes.CDLL(None)
    libc.mmap.restype = ctypes.c_void_p
    libc.mmap.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_int, ctypes.c_int, ctypes.c_int, ctypes.c_long]
    gb = libc.mmap(None, 1 << 32, 3, 0x22 | 0x4000, -1, 0)
    ctypes.c_void_p.in_dll(lib, 'guest_base').value = gb
    img = ctx.img
    segs = [(s.vmaddr, img.data[s.fileoff:s.fileoff + s.filesize], s.vmsize) for s in img.segments if s.name in ('__TEXT', '__DATA')]
    for va, data, vs in segs:
        ctypes.memmove(gb + va, data, len(data))
    rng = random.Random(1234)
    fails = collections.defaultdict(list)
    npass = 0
    for idx, (fn, i, code) in enumerate(cases):
        T = getattr(lib, 'T_%d' % idx)
        T.argtypes = [ctypes.POINTER(TS)]
        mregs = mem_regs(i)
        inplace = any(o.type == arm.ARM_OP_MEM and o.mem.base == A.ARM_REG_PC for o in i.operands) or 'pc' in i.op_str or i.id == A.ARM_INS_ADR
        for t in range(trials):
            st = TS()
            regs = {}
            for k, nme in enumerate(RNAMES):
                w = rand_word(rng)
                if nme in mregs or nme == 'sp':
                    w = SCRATCH + 0x8000 + 4 * rng.randrange(-256, 256)
                if ('IDX:' + nme) in mregs:
                    w = 4 * rng.randrange(-16, 64) & 0xffffffff
                regs[nme] = w
                st.r[k] = w
            flags = [rng.randrange(2) for _ in range(4)]
            fflags = [rng.randrange(2) for _ in range(4)]
            st.n, st.z, st.c, st.v = flags
            st.fn, st.fz, st.fc, st.fv = fflags
            ds = [rand_d(rng) for _ in range(32)]
            for k in range(32):
                st.d[k] = ds[k]
            scratch = bytes(rng.getrandbits(8) for _ in range(SCRATCH_SIZE))
            ctypes.memmove(gb + SCRATCH, scratch, SCRATCH_SIZE)
            # --- unicorn
            uc = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_THUMB)
            for va, data, vs in segs:
                uc.mem_map(va, (vs + 0xfff) & ~0xfff)
                uc.mem_write(va, data)
            uc.mem_map(SCRATCH, SCRATCH_SIZE)
            uc.mem_write(SCRATCH, scratch)
            uc.mem_map(CODEPAGE, 0x1000)
            for k, nme in enumerate(RNAMES):
                uc.reg_write(UREG[k], regs[nme])
            uc.reg_write(U.UC_ARM_REG_FPEXC, 0x40000000)
            cpsr = uc.reg_read(U.UC_ARM_REG_CPSR) & 0x0fffffff
            cpsr |= (flags[0] << 31) | (flags[1] << 30) | (flags[2] << 29) | (flags[3] << 28)
            uc.reg_write(U.UC_ARM_REG_CPSR, cpsr)
            uc.reg_write(U.UC_ARM_REG_FPSCR, (fflags[0] << 31) | (fflags[1] << 30) | (fflags[2] << 29) | (fflags[3] << 28))
            for k in range(32):
                uc.reg_write(U.UC_ARM_REG_D0 + k, ds[k])
            raw = bytes(i.bytes)
            cond = i.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID)
            try:
                if inplace and not cond:
                    uc.emu_start(i.address | 1, i.address + i.size, count=1)
                elif inplace:
                    continue
                else:
                    pre = b''
                    if cond:
                        firstcond = {A.ARM_CC_EQ: 0, A.ARM_CC_NE: 1, A.ARM_CC_HS: 2, A.ARM_CC_LO: 3, A.ARM_CC_MI: 4, A.ARM_CC_PL: 5, A.ARM_CC_VS: 6,
                                     A.ARM_CC_VC: 7, A.ARM_CC_HI: 8, A.ARM_CC_LS: 9, A.ARM_CC_GE: 10, A.ARM_CC_LT: 11, A.ARM_CC_GT: 12, A.ARM_CC_LE: 13}[i.cc]
                        pre = struct.pack('<H', 0xbf00 | (firstcond << 4) | 0x8)
                    uc.mem_write(CODEPAGE, pre + raw)
                    uc.emu_start(CODEPAGE | 1, CODEPAGE + len(pre) + len(raw), count=2 if pre else 1)
            except unicorn.UcError as e:
                fails[(i.mnemonic, i.op_str)].append('unicorn error %s' % e)
                continue
            # --- C
            T(ctypes.byref(st))
            # --- compare
            diffs = []
            for k, nme in enumerate(RNAMES):
                u = uc.reg_read(UREG[k])
                if u != st.r[k]:
                    diffs.append('%s u=%x c=%x' % (nme, u, st.r[k]))
            cps = uc.reg_read(U.UC_ARM_REG_CPSR)
            uf = [(cps >> 31) & 1, (cps >> 30) & 1, (cps >> 29) & 1, (cps >> 28) & 1]
            if uf != [st.n, st.z, st.c, st.v]:
                diffs.append('flags u=%s c=%s' % (uf, [st.n, st.z, st.c, st.v]))
            fp = uc.reg_read(U.UC_ARM_REG_FPSCR)
            uff = [(fp >> 31) & 1, (fp >> 30) & 1, (fp >> 29) & 1, (fp >> 28) & 1]
            if uff != [st.fn, st.fz, st.fc, st.fv]:
                diffs.append('fpflags u=%s c=%s' % (uff, [st.fn, st.fz, st.fc, st.fv]))
            for k in range(32):
                u = uc.reg_read(U.UC_ARM_REG_D0 + k)
                cv = st.d[k]
                if u != cv:
                    # treat NaN payload differences as equal (both NaN in each 32-bit lane or 64-bit)
                    def isnan32(x): return (x & 0x7f800000) == 0x7f800000 and (x & 0x7fffff)
                    def isnan64(x): return (x & 0x7ff0000000000000) == 0x7ff0000000000000 and (x & 0xfffffffffffff)
                    if isnan64(u) and isnan64(cv):
                        continue
                    lo_ok = (u & 0xffffffff) == (cv & 0xffffffff) or (isnan32(u & 0xffffffff) and isnan32(cv & 0xffffffff))
                    hi_ok = (u >> 32) == (cv >> 32) or (isnan32(u >> 32) and isnan32(cv >> 32))
                    if lo_ok and hi_ok:
                        continue
                    diffs.append('d%d u=%016x c=%016x' % (k, u, cv))
            um = uc.mem_read(SCRATCH, SCRATCH_SIZE)
            cm = ctypes.string_at(gb + SCRATCH, SCRATCH_SIZE)
            if um != cm:
                off = next(k for k in range(SCRATCH_SIZE) if um[k] != cm[k])
                diffs.append('mem @%x u=%s c=%s' % (SCRATCH + off, bytes(um[off:off + 8]).hex(), cm[off:off + 8].hex()))
            if diffs:
                fails[(i.mnemonic, i.op_str, hex(i.address))].append('; '.join(diffs[:4]) + ' | in r=%s' % ({k: hex(v) for k, v in regs.items() if k in i.op_str or True and k in ('r0', 'r1', 'r2', 'r3')}))
            else:
                npass += 1
    print('passed trials', npass, 'failing instructions', len(fails))
    for k, v in sorted(fails.items())[:80]:
        print(k, len(v), v[0][:400])
    json.dump({'cases': len(cases), 'passed': npass, 'fail': {str(k): v[:3] for k, v in fails.items()}}, open(OUT + '/result.json', 'w'), indent=1)


if __name__ == '__main__':
    main()
