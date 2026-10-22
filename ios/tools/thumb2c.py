#!/usr/bin/env python3
"""thumb2c.py — static recompiler for the Sims 3 iOS (armv7, Thumb-2, softfp) executable.

Translates every function in __TEXT,__text into a C function operating on an explicit
guest CPU model.  Execution model (see DECISIONS.md D3):
  * Guest registers live in C locals inside a translated function; r0-r3, r12, sp, lr are
    exchanged through CPU struct `c` at call/return boundaries (AAPCS/iOS softfp ABI).
  * Guest memory is addressed through G2H(addr) (identity in the wasm build).
  * Direct BL → direct C call; BLX to import stubs → HLE function H_<symbol>; indirect
    calls → call_indirect(c, addr).
  * SjLj exception resume points are discovered by constant tracking and dispatched
    through the `unwind` epilogue (return-propagation unwinding, no setjmp).

Usage: thumb2c.py <out_dir> [--only name,...] [--units N]
"""
import sys, os, json, struct, bisect, re, collections, hashlib
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from macho import Image
import capstone
from capstone import arm_const as A
from capstone import arm

from project import ROOT
CC = {A.ARM_CC_EQ: 'z', A.ARM_CC_NE: '!z', A.ARM_CC_HS: 'cf', A.ARM_CC_LO: '!cf', A.ARM_CC_MI: 'n',
      A.ARM_CC_PL: '!n', A.ARM_CC_VS: 'v', A.ARM_CC_VC: '!v', A.ARM_CC_HI: '(cf && !z)',
      A.ARM_CC_LS: '(!cf || z)', A.ARM_CC_GE: '(n == v)', A.ARM_CC_LT: '(n != v)',
      A.ARM_CC_GT: '(!z && n == v)', A.ARM_CC_LE: '(z || n != v)'}
REGMAP = {'sb': 'r9', 'sl': 'r10', 'fp': 'r11', 'ip': 'r12'}

SFT = {A.ARM_SFT_ASR: 'asr', A.ARM_SFT_LSL: 'lsl', A.ARM_SFT_LSR: 'lsr', A.ARM_SFT_ROR: 'ror', A.ARM_SFT_RRX: 'rrx',
       A.ARM_SFT_ASR_REG: 'asr_r', A.ARM_SFT_LSL_REG: 'lsl_r', A.ARM_SFT_LSR_REG: 'lsr_r', A.ARM_SFT_ROR_REG: 'ror_r'}


class Unsupported(Exception):
    pass


FLAGSET = {'adds', 'adcs', 'subs', 'sbcs', 'rsbs', 'rscs', 'ands', 'orrs', 'eors', 'bics', 'orns', 'movs', 'mvns', 'lsls',
           'lsrs', 'asrs', 'rors', 'rrxs', 'muls', 'mlas', 'umulls', 'smulls', 'umlals', 'smlals', 'negs'}
CONDS = ('eq', 'ne', 'hs', 'lo', 'mi', 'pl', 'vs', 'vc', 'hi', 'ls', 'ge', 'lt', 'gt', 'le', 'cs', 'cc', 'al')


def mn_base(i):
    """Mnemonic without width qualifier and without condition suffix (capstone's update_flags is unreliable)."""
    b = i.mnemonic.split('.')[0]
    if i.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID) and b[-2:] in CONDS:
        b = b[:-2]
    return b


def sets_flags(i):
    return mn_base(i) in FLAGSET


def hexa(a):
    return '%06x' % a


class Ctx:
    """Whole-image context shared by all function translations."""

    def __init__(self):
        self.img = Image(ROOT + '/original/sims3_iphone')
        self.funcs = json.load(open(ROOT + '/analysis/functions.json'))
        self.fstart = {f['addr']: f for f in self.funcs}
        self.addrs = [f['addr'] for f in self.funcs]
        self.stubs = self.img.stub_targets()
        self.dic = {}
        for a, l, k in self.img.data_in_code():
            self.dic[a] = (l, k)
        self.dic_sorted = sorted(self.dic)
        self.md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
        self.md.detail = True
        text = self.img.section('__TEXT', '__text')
        self.text_lo, self.text_hi = text.addr, text.addr + text.size
        self.ro_lo = self.img.segments[1].vmaddr
        self.ro_hi = self.img.segments[1].vmaddr + self.img.segments[1].vmsize
        self.import_names = set()
        self.async_names = async_set(self.funcs)

    def func_at(self, a):
        i = bisect.bisect_right(self.addrs, a) - 1
        if i >= 0 and self.funcs[i]['addr'] <= a < self.funcs[i]['end']:
            return self.funcs[i]
        return None

    def in_data(self, a):
        i = bisect.bisect_right(self.dic_sorted, a) - 1
        if i >= 0:
            s = self.dic_sorted[i]
            if s <= a < s + self.dic[s][0]:
                return True
        return False


# Imports that may suspend the calling guest thread (cooperative scheduler, DECISIONS.md D7).
YIELD_IMPORTS = {'_usleep', '_sleep', '_nanosleep', '_sched_yield', '_pthread_yield_np'}
# Functions that sleep/yield (directly or through the usleep branch island).
YIELD_LEAVES = {'__ZN4midp6Thread5sleepEl', '__ZN4midp6Thread5yieldEv', '_usleep$shim', '__ZN4midp6Thread4joinEv'}


def async_set(funcs):
    """Functions that get a resumable variant: thread entry points and every Runnable/TimerTask run() (reached by
    virtual call), plus every function reachable from them by direct call that can itself reach a sleep/yield."""
    cg = json.load(open(ROOT + '/analysis/callgraph.json'))
    names = set(f['name'] for f in funcs)
    roots = {'__ZN4midp15Thread_posixRunEPv'} | {n for n in names if re.fullmatch(r'__ZN.*3runEv', n)}
    rev = collections.defaultdict(set)
    for f, cs in cg.items():
        for t in cs:
            rev[t].add(f)
    reach = set(YIELD_LEAVES)
    st = list(reach)
    while st:
        for p in rev.get(st.pop(), ()):
            if p not in reach:
                reach.add(p)
                st.append(p)
    fwd = set(roots)
    st = list(roots)
    while st:
        for t in cg.get(st.pop(), []):
            if t not in fwd:
                fwd.add(t)
                st.append(t)
    return ((fwd & reach) | roots) & names


def hname(sym):
    s = re.sub(r'[^A-Za-z0-9_]', '_', sym)
    if s != sym:
        s += '_' + hashlib.md5(sym.encode()).hexdigest()[:6]
    return 'H' + s


class Fn:
    def __init__(self, ctx, f):
        self.ctx, self.f = ctx, f
        self.lo, self.hi = f['addr'], f['end']
        self.insns = {}          # addr -> capstone insn
        self.labels = set()      # branch targets needing labels
        self.extra_entries = set()
        self.tables = {}         # addr of tbb/tbh -> list of targets (or None for invalid entries)
        self.problems = []
        self.calls = set()
        self.resume = set()
        self.it_blocks = {}
        self.async_mode = False  # emit the resumable variant (A_*) used on cooperative guest threads
        self.sites = []

    # ------------------------------------------------------------------ discovery
    def decode(self, a):
        if a in self.insns:
            return self.insns[a]
        b = self.ctx.img.read(a, 4)
        l = list(self.ctx.md.disasm(b, a, 1))
        if not l:
            return None
        i = l[0]
        if i.id == A.ARM_INS_IT:
            # capstone tracks IT state only within one disasm() call: decode the IT block together
            n = len(i.mnemonic) - 1  # 'it'=1, 'itt'=2, 'ite'=2, ... up to 4 instructions
            blk = list(self.ctx.md.disasm(self.ctx.img.read(a, 2 + 4 * n), a, 1 + n))
            for j in blk:
                self.insns[j.address] = j
            self.it_blocks[a] = [j.address for j in blk[1:]]
            return blk[0]
        self.insns[a] = i
        return i

    def discover(self):
        work = [self.lo] + sorted(self.extra_entries)
        seen = set()
        while work:
            a = work.pop()
            while True:
                if a in seen or not (self.lo <= a < self.hi):
                    break
                if self.ctx.in_data(a):
                    self.problems.append('flow into data at %x' % a)
                    break
                seen.add(a)
                i = self.decode(a)
                if i is None:
                    self.problems.append('undecodable at %x' % a)
                    break
                succ, fall = self.successors(i)
                for t in succ:
                    if self.lo <= t < self.hi:
                        self.labels.add(t)
                        work.append(t)
                if not fall:
                    break
                a = a + i.size
        self.order = sorted(self.insns)

    def successors(self, i):
        m = i.id
        cond = i.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID)
        ops = i.operands
        if m == A.ARM_INS_B:
            t = ops[0].imm
            if self.lo <= t < self.hi:
                return [t], cond
            return [], cond  # tail call
        if m in (A.ARM_INS_CBZ, A.ARM_INS_CBNZ):
            return [ops[1].imm], True
            return [ops[1].imm], True
        if m in (A.ARM_INS_TBB, A.ARM_INS_TBH):
            tgts = self.jump_table(i)
            return [t for t in tgts if t is not None], False
        if m == A.ARM_INS_BX:
            return [], cond
        if m in (A.ARM_INS_POP, A.ARM_INS_LDM) and any(o.type == arm.ARM_OP_REG and o.reg == A.ARM_REG_PC for o in ops):
            return [], cond
        if m == A.ARM_INS_LDR and ops[0].reg == A.ARM_REG_PC:
            return [], cond
        if m == A.ARM_INS_MOV and ops[0].reg == A.ARM_REG_PC:
            return [], cond
        if m in (A.ARM_INS_UDF, A.ARM_INS_TRAP, A.ARM_INS_BKPT):
            return [], False
        return [], True

    def jump_table(self, i):
        tb = i.address + 4
        esz = 1 if i.id == A.ARM_INS_TBB else 2
        n = None
        if tb in self.ctx.dic:
            l, k = self.ctx.dic[tb]
            n = l // esz
        else:
            self.problems.append('jump table at %x without data-in-code entry' % tb)
            n = 0
        out = []
        for k in range(n):
            e = self.ctx.img.read(tb + k * esz, esz)
            v = e[0] if esz == 1 else struct.unpack('<H', e)[0]
            t = tb + 2 * v
            if self.lo <= t < self.hi and not self.ctx.in_data(t):
                out.append(t)
            else:
                out.append(None)
        self.tables[i.address] = out
        return out

    def find_code_constants(self):
        """Constant-propagate movw/movt/ldr-literal/add-pc/orr/adr in address order and collect
        values that point (with thumb bit) into this function: SjLj resume points / computed labels."""
        regs = {}
        found = set()
        for a in self.order:
            i = self.insns[a]
            if a in self.labels:
                regs = {}
            m = i.id
            ops = i.operands
            try:
                if m in (A.ARM_INS_MOVW, A.ARM_INS_MOV, A.ARM_INS_MOVS) and len(ops) == 2 and ops[1].type == arm.ARM_OP_IMM:
                    regs[ops[0].reg] = ops[1].imm & 0xffffffff
                elif m == A.ARM_INS_MOVT and ops[0].reg in regs:
                    regs[ops[0].reg] = (regs[ops[0].reg] & 0xffff) | ((ops[1].imm & 0xffff) << 16)
                elif m == A.ARM_INS_LDR and len(ops) == 2 and ops[1].type == arm.ARM_OP_MEM and ops[1].mem.base == A.ARM_REG_PC:
                    la = ((a + 4) & ~3) + ops[1].mem.disp * (-1 if ops[1].subtracted else 1)
                    regs[ops[0].reg] = self.ctx.img.u32(la)
                elif m == A.ARM_INS_ADD and len(ops) == 2 and ops[1].type == arm.ARM_OP_REG and ops[1].reg == A.ARM_REG_PC and ops[0].reg in regs:
                    regs[ops[0].reg] = (regs[ops[0].reg] + a + 4) & 0xffffffff
                elif m == A.ARM_INS_ORR and len(ops) == 3 and ops[2].type == arm.ARM_OP_IMM and ops[1].reg in regs:
                    regs[ops[0].reg] = regs[ops[1].reg] | ops[2].imm
                elif m == A.ARM_INS_ADR:
                    regs[ops[0].reg] = ((a + 4) & ~3) + ops[1].imm
                else:
                    for o in ops:
                        if o.type == arm.ARM_OP_REG and (o.access & capstone.CS_AC_WRITE):
                            regs.pop(o.reg, None)
                    if m in (A.ARM_INS_BL, A.ARM_INS_BLX):
                        for r in (A.ARM_REG_R0, A.ARM_REG_R1, A.ARM_REG_R2, A.ARM_REG_R3, A.ARM_REG_R12):
                            regs.pop(r, None)
                for r, v in regs.items():
                    if (v & 1) and self.lo <= (v & ~1) < self.hi:
                        found.add(v & ~1)
            except Exception:
                regs = {}
        return found

    def analyze(self):
        self.discover()
        for _ in range(4):
            extra = self.find_code_constants() - set(self.insns)
            new = set(e for e in extra if not self.ctx.in_data(e))
            if not new:
                break
            self.extra_entries |= new
            self.discover()
        self.resume = set(e for e in self.find_code_constants() if e in self.insns)
        self.labels |= self.resume

    # ------------------------------------------------------------------ emission helpers
    def reg(self, r):
        n = self.cur.reg_name(r)
        n = REGMAP.get(n, n)
        return n

    def is_core(self, n):
        return n in ('sp', 'lr', 'pc') or (n[0] == 'r' and n[1:].isdigit())

    def rd_reg(self, r):
        n = self.reg(r)
        if n == 'pc':
            return '0x%xu' % (self.cur.address + 4)
        if n[0] == 's' and n[1:].isdigit():
            k = int(n[1:])
            return 'GETS(d%d,%d)' % (k // 2, k % 2)
        return n

    def wr_reg(self, r, expr):
        n = self.reg(r)
        if n[0] == 's' and n[1:].isdigit():
            k = int(n[1:])
            return 'SETS(d%d,%d,%s);' % (k // 2, k % 2, expr)
        if n == 'pc':
            raise Unsupported('write pc')
        return '%s = %s;' % (n, expr)

    def shifted(self, o, carry_needed=False):
        """Value of a register operand with optional immediate/register shift. Returns (expr, carry_expr)."""
        v = self.rd_reg(o.reg)
        st, sv = o.shift.type, o.shift.value
        if st == 0 or (st == A.ARM_SFT_LSL and sv == 0):
            return v, None
        if st == A.ARM_SFT_LSL:
            return '((%s) << %d)' % (v, sv), '(((%s) >> %d) & 1)' % (v, 32 - sv)
        if st == A.ARM_SFT_LSR:
            if sv == 32:
                return '0u', '((%s) >> 31)' % v
            return '((%s) >> %d)' % (v, sv), '(((%s) >> %d) & 1)' % (v, sv - 1)
        if st == A.ARM_SFT_ASR:
            if sv == 32:
                return '(uint32_t)((int32_t)(%s) >> 31)' % v, '((%s) >> 31)' % v
            return '(uint32_t)((int32_t)(%s) >> %d)' % (v, sv), '(((%s) >> %d) & 1)' % (v, sv - 1)
        if st == A.ARM_SFT_ROR:
            return 'ROR32(%s,%d)' % (v, sv), '(((%s) >> %d) & 1)' % (v, sv - 1)
        if st == A.ARM_SFT_RRX:
            return '(((%s) >> 1) | (cf << 31))' % v, '((%s) & 1)' % v
        if st in (A.ARM_SFT_LSL_REG, A.ARM_SFT_LSR_REG, A.ARM_SFT_ASR_REG, A.ARM_SFT_ROR_REG):
            amt = self.rd_reg(sv)
            fn = {A.ARM_SFT_LSL_REG: 'LSLR', A.ARM_SFT_LSR_REG: 'LSRR', A.ARM_SFT_ASR_REG: 'ASRR', A.ARM_SFT_ROR_REG: 'RORR'}[st]
            return '%s(%s,%s)' % (fn, v, amt), '%s_C(%s,%s,cf)' % (fn, v, amt)
        raise Unsupported('shift %d' % st)

    def op2(self, o, carry_needed=False):
        if o.type == arm.ARM_OP_IMM:
            return '0x%xu' % (o.imm & 0xffffffff), self.imm_carry()
        if o.type == arm.ARM_OP_REG:
            return self.shifted(o, carry_needed)
        raise Unsupported('op2 type %d' % o.type)

    def imm_carry(self):
        """Carry-out of a Thumb-2 modified immediate (ThumbExpandImm_C)."""
        i = self.cur
        if i.size != 4:
            return None
        hw1, hw2 = struct.unpack('<HH', bytes(i.bytes))
        if (hw1 & 0xf800) != 0xf000 or (hw2 & 0x8000):
            return None
        if (hw1 & 0x0200):  # plain binary immediate (addw/movw etc.)
            return None
        imm12 = ((hw1 >> 10) & 1) << 11 | ((hw2 >> 12) & 7) << 8 | (hw2 & 0xff)
        if (imm12 >> 10) == 0:
            return None
        unrot = 0x80 | (imm12 & 0x7f)
        rot = (imm12 >> 7) & 0x1f
        val = ((unrot >> rot) | (unrot << (32 - rot))) & 0xffffffff
        return '%du' % (val >> 31)

    def mem_addr(self, o):
        """Address expression for a memory operand (pre-index part only)."""
        m = o.mem
        base = self.reg(m.base)
        if base == 'pc':
            b = '0x%xu' % ((self.cur.address + 4) & ~3)
        else:
            b = base
        parts = b
        if m.index:
            idx = self.rd_reg(m.index)
            st, sv = o.shift.type, o.shift.value
            if st == A.ARM_SFT_LSL and sv:
                idx = '(%s << %d)' % (idx, sv)
            elif st not in (0,) and not (st == A.ARM_SFT_LSL and sv == 0):
                raise Unsupported('mem index shift')
            parts = '(%s %s %s)' % (b, '-' if o.subtracted else '+', idx)
        elif m.disp:
            d = m.disp
            if o.subtracted:
                d = -d
            parts = '(%s + (uint32_t)%d)' % (b, d)
        return parts, base

    def const_load(self, addr, size, signed=False):
        """Fold loads from read-only __TEXT literals."""
        if self.ctx.ro_lo <= addr < self.ctx.ro_hi - size and self.ctx.img.sect_for(addr) and self.ctx.img.sect_for(addr).segname == '__TEXT':
            b = self.ctx.img.read(addr, size)
            fmt = {1: 'b', 2: 'h', 4: 'i', 8: 'q'}[size]
            if not signed:
                fmt = fmt.upper()
            return struct.unpack('<' + fmt, b)[0]
        return None

    # ------------------------------------------------------------------ main emit
    def emit(self, async_mode=False):
        out = []
        self.out = out
        self.uses_unwind = False
        self.async_mode = async_mode
        self.sites = []
        fname = ('A_' if async_mode else 'F_') + hexa(self.lo)
        body = []
        prev_fall = None
        for idx, a in enumerate(self.order):
            i = self.insns[a]
            self.cur = i
            if prev_fall is not None and prev_fall != a:
                if prev_fall in self.insns:
                    body.append('  goto L_%s;' % hexa(prev_fall))
                else:
                    body.append('  TRAP_FALLOFF(c, 0x%xu);' % prev_fall)
            if a in self.labels:
                body.append('L_%s:' % hexa(a))
            try:
                code, fall = self.translate(i)
            except Unsupported as e:
                code, fall = 'TRAP_UNIMPL(c, 0x%xu, "%s %s: %s");' % (a, i.mnemonic, i.op_str, e), False
                self.problems.append('unsupported %x %s %s (%s)' % (a, i.mnemonic, i.op_str, e))
            cond = i.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID) and i.id not in (A.ARM_INS_B, A.ARM_INS_IT)
            if cond:
                code = 'if (%s) { %s }' % (CC[i.cc], code)
                fall = True
            body.append('  /* %x: %s %s */ %s' % (a, i.mnemonic, i.op_str, code))
            prev_fall = a + i.size if fall else None
        if prev_fall is not None:
            if prev_fall in self.insns:
                body.append('  goto L_%s;' % hexa(prev_fall))
            else:
                body.append('  TRAP_FALLOFF(c, 0x%xu);' % prev_fall)
        out.append('void %s(CPU *c) { /* %s */' % (fname, self.f['name']))
        if async_mode:
            out.append('  ENTRY_REGS_A;')
            if self.sites:
                out.append('  uint32_t _site = 0;')
                out.append('  if (__builtin_expect(c->resuming != 0, 0)) {')
                out.append('    AF_RESTORE(_site);')
                out.append('    switch (_site) {')
                for k in self.sites:
                    out.append('      case %d: sched_resume_inner(c); goto AR_%d;' % (k, k))
                out.append('    }')
                out.append('    TRAP_BADRESUME(c, _site);')
                out.append('  }')
        else:
            out.append('  ENTRY_REGS;')
        out.append('  FN_ENTRY(0x%xu);' % self.lo)
        out.extend(body)
        if self.uses_unwind:
            out.append('unwind:')
            if async_mode and self.sites:
                out.append('  if (c->unwinding == UNWIND_SUSPEND) { AF_SAVE(_site, %s); return; }' % fname)
            if self.resume:
                out.append('  if (c->unwind_target >= sp && c->unwind_target < entry_sp) {')
                out.append('    uint32_t _ctx = c->unwind_target; c->unwinding = 0;')
                out.append('    r7 = LD32(_ctx + 0x20); sp = LD32(_ctx + 0x28);')
                out.append('    switch (LD32(_ctx + 0x24) | 1u) {')
                for r in sorted(self.resume):
                    out.append('      case 0x%xu: goto L_%s;' % (r | 1, hexa(r)))
                out.append('    }')
                out.append('    TRAP_BADRESUME(c, LD32(_ctx + 0x24));')
                out.append('  }')
            out.append('  return;')
        out.append('}')
        return '\n'.join(out)

    def call_direct(self, t, arm_mode=False):
        """Code for BL (Thumb target) / BLX imm (ARM target) to immediate target t."""
        if (t & ~3) in self.ctx.stubs and arm_mode:
            sect, name, idx = self.ctx.stubs[t & ~3]
            if sect == '__picsymbolstub4' and name:
                self.ctx.import_names.add(name)
                self.calls.add(name)
                self.uses_unwind = True
                if self.async_mode:
                    return self.asite('ACALL' if name in YIELD_IMPORTS else 'ACALLN', hname(name), self.cur.address + self.cur.size | 1)
                return 'CALLH(%s, 0x%xu);' % (hname(name), self.cur.address + self.cur.size | 1)
        f = self.ctx.fstart.get(t & ~1)
        if f is None:
            raise Unsupported('call to non-function %x' % t)
        if arm_mode:
            raise Unsupported('blx to ARM-mode function %x' % t)
        self.calls.add(f['name'])
        self.uses_unwind = True
        if self.async_mode:
            if f['name'] in self.ctx.async_names:
                return self.asite('ACALL', 'A_' + hexa(t & ~1), self.cur.address + self.cur.size | 1)
            return self.asite('ACALLN', 'F_' + hexa(t & ~1), self.cur.address + self.cur.size | 1)
        return 'CALL(F_%s, 0x%xu);' % (hexa(t & ~1), self.cur.address + self.cur.size | 1)

    def asite(self, mac, f, ret):
        self.sites.append(len(self.sites) + 1)
        return '%s(%s, 0x%xu, %d);' % (mac, f, ret, len(self.sites))

    def calli(self, t, ret):
        if self.async_mode:
            return self.asite('ACALLI', t, ret)
        return 'CALLI(%s, 0x%xu);' % (t, ret)

    def taili(self, t):
        return ('ATAILI(%s);' if self.async_mode else 'TAILI(%s);') % t

    def tail_call(self, t):
        if (t & ~3) in self.ctx.stubs:
            sect, name, idx = self.ctx.stubs[t & ~3]
            if name:
                self.ctx.import_names.add(name)
                if self.async_mode:
                    return ('ATAIL(%s);' if name in YIELD_IMPORTS else 'ATAILN(%s);') % hname(name)
                return 'TAILH(%s);' % hname(name)
        f = self.ctx.fstart.get(t & ~1)
        if f is None:
            raise Unsupported('branch to non-function %x' % t)
        if self.async_mode:
            if f['name'] in self.ctx.async_names:
                return 'ATAIL(A_%s);' % hexa(t & ~1)
            return 'ATAILN(F_%s);' % hexa(t & ~1)
        return 'TAIL(F_%s);' % hexa(t & ~1)

    def ret(self):
        return 'RETURN;'

    # ------------------------------------------------------------------ instruction translation
    def translate(self, i):
        m = i.id
        ops = i.operands
        uf = sets_flags(i)
        a = i.address
        nxt = a + i.size
        R = self.rd_reg

        if m == A.ARM_INS_IT or m == A.ARM_INS_NOP or m == A.ARM_INS_HINT or m == A.ARM_INS_PLD or m == A.ARM_INS_PLI or m == A.ARM_INS_DMB or m == A.ARM_INS_DSB or m == A.ARM_INS_ISB:
            return '', True
        if m in (A.ARM_INS_UDF, A.ARM_INS_TRAP, A.ARM_INS_BKPT):
            return 'TRAP_INSN(c, 0x%xu);' % a, False

        # ---------------- branches
        if m == A.ARM_INS_B:
            t = ops[0].imm
            cond = i.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID)
            if self.lo <= t < self.hi:
                s = 'goto L_%s;' % hexa(t)
            else:
                s = self.tail_call(t)
            if cond:
                return 'if (%s) { %s }' % (CC[i.cc], s), True
            return s, False
        if m in (A.ARM_INS_CBZ, A.ARM_INS_CBNZ):
            return 'if (%s %s 0) goto L_%s;' % (R(ops[0].reg), '==' if m == A.ARM_INS_CBZ else '!=', hexa(ops[1].imm)), True
            return 'if (%s%s == 0) goto L_%s;' % ('' if m == A.ARM_INS_CBZ else '!', '(' + R(ops[0].reg) + ')', hexa(ops[1].imm)) if m == A.ARM_INS_CBZ else 'if (%s != 0) goto L_%s;' % (R(ops[0].reg), hexa(ops[1].imm)), True
        if m in (A.ARM_INS_BL, A.ARM_INS_BLX):
            if ops[0].type == arm.ARM_OP_IMM:
                return self.call_direct(ops[0].imm, m == A.ARM_INS_BLX), True
            self.uses_unwind = True
            return self.calli(R(ops[0].reg), nxt | 1), True
        if m == A.ARM_INS_BX:
            r = self.reg(ops[0].reg)
            if r == 'lr':
                return self.ret(), False
            return self.taili(r), False
        if m in (A.ARM_INS_TBB, A.ARM_INS_TBH):
            tb = self.tables.get(a) or self.jump_table(i)
            idx = R(ops[0].mem.index)
            cases = ' '.join('case %d: goto L_%s;' % (k, hexa(t)) for k, t in enumerate(tb) if t is not None)
            return 'switch (%s) { %s default: TRAP_JT(c, 0x%xu, %s); }' % (idx, cases, a, idx), False

        # ---------------- moves
        if m in (A.ARM_INS_MOV, A.ARM_INS_MOVS) and ops[0].type == arm.ARM_OP_REG and self.reg(ops[0].reg) == 'pc':
            return self.taili(R(ops[1].reg)), False
        if m in (A.ARM_INS_MOV, A.ARM_INS_MOVS, A.ARM_INS_MVN):
            v, cy = self.op2(ops[1], uf)
            if m == A.ARM_INS_MVN:
                v = '(~(%s))' % v
            s = self.wr_reg(ops[0].reg, v)
            if uf:
                d = self.reg(ops[0].reg)
                s = '{ uint32_t _t = %s; %s n = _t >> 31; z = _t == 0; %s }' % (v, self.wr_reg(ops[0].reg, '_t'), ('cf = %s;' % cy) if cy else '')
            return s, True
        if m == A.ARM_INS_MOVW:
            return self.wr_reg(ops[0].reg, '0x%xu' % (ops[1].imm & 0xffff)), True
        if m == A.ARM_INS_MOVT:
            d = self.reg(ops[0].reg)
            return '%s = (%s & 0xffffu) | 0x%xu;' % (d, d, (ops[1].imm & 0xffff) << 16), True
        if m == A.ARM_INS_ADR:
            return self.wr_reg(ops[0].reg, '0x%xu' % ((((a + 4) & ~3) + ops[1].imm) & 0xffffffff)), True

        # ---------------- ALU
        if m in (A.ARM_INS_ADD, A.ARM_INS_ADDW, A.ARM_INS_SUB, A.ARM_INS_SUBW, A.ARM_INS_RSB, A.ARM_INS_ADC, A.ARM_INS_SBC, A.ARM_INS_RSC, A.ARM_INS_CMP, A.ARM_INS_CMN, A.ARM_INS_SUBS):
            if m in (A.ARM_INS_CMP, A.ARM_INS_CMN):
                dst = None; rn = R(ops[0].reg); o2 = ops[1]
            elif len(ops) == 2:
                dst = ops[0].reg; rn = R(ops[0].reg); o2 = ops[1]
            else:
                dst = ops[0].reg; rn = R(ops[1].reg); o2 = ops[2]
            if dst is not None and self.reg(dst) == 'pc':
                raise Unsupported('alu write pc')
            # pc-relative constant folding: add rX, pc
            if m in (A.ARM_INS_ADD, A.ARM_INS_ADDW) and o2.type == arm.ARM_OP_REG and self.reg(o2.reg) == 'pc' and o2.shift.type == 0 and not uf:
                return self.wr_reg(dst, '%s + 0x%xu' % (rn, a + 4)), True
            if len(ops) == 3 and ops[1].type == arm.ARM_OP_REG and self.reg(ops[1].reg) == 'pc' and o2.type == arm.ARM_OP_IMM and not uf:
                base = (a + 4) & ~3
                val = base + o2.imm if m in (A.ARM_INS_ADDW, A.ARM_INS_ADD) else base - o2.imm
                return self.wr_reg(dst, '0x%xu' % (val & 0xffffffff)), True
            b, _ = self.op2(o2)
            kind = {A.ARM_INS_ADD: 'add', A.ARM_INS_ADDW: 'add', A.ARM_INS_SUB: 'sub', A.ARM_INS_SUBW: 'sub', A.ARM_INS_SUBS: 'sub',
                    A.ARM_INS_RSB: 'rsb', A.ARM_INS_ADC: 'adc', A.ARM_INS_SBC: 'sbc', A.ARM_INS_RSC: 'rsc',
                    A.ARM_INS_CMP: 'sub', A.ARM_INS_CMN: 'add'}[m]
            if kind == 'rsb':
                x, y, cin, op = b, rn, '1u', 'sub'
            elif kind == 'rsc':
                x, y, cin, op = b, rn, 'cf', 'sub'
            elif kind == 'add':
                x, y, cin, op = rn, b, '0u', 'add'
            elif kind == 'adc':
                x, y, cin, op = rn, b, 'cf', 'add'
            elif kind == 'sub':
                x, y, cin, op = rn, b, '1u', 'sub'
            else:
                x, y, cin, op = rn, b, 'cf', 'sub'
            setf = uf or m in (A.ARM_INS_CMP, A.ARM_INS_CMN, A.ARM_INS_SUBS)
            if not setf:
                if op == 'add':
                    e = '%s + %s' % (x, y) if cin == '0u' else '%s + %s + %s' % (x, y, cin)
                else:
                    e = '%s - %s' % (x, y) if cin == '1u' else '%s - %s - (1u - %s)' % (x, y, cin)
                return self.wr_reg(dst, e), True
            fn = 'ADDC' if op == 'add' else 'SUBC'
            s = '{ uint32_t _r; %s(_r, %s, %s, %s); ' % (fn, x, y, cin)
            if dst is not None:
                s += self.wr_reg(dst, '_r') + ' '
            s += '}'
            return s, True
        if m in (A.ARM_INS_AND, A.ARM_INS_ORR, A.ARM_INS_EOR, A.ARM_INS_BIC, A.ARM_INS_ORN, A.ARM_INS_TST, A.ARM_INS_TEQ):
            if m in (A.ARM_INS_TST, A.ARM_INS_TEQ):
                dst = None; rn = R(ops[0].reg); o2 = ops[1]
            elif len(ops) == 2:
                dst = ops[0].reg; rn = R(ops[0].reg); o2 = ops[1]
            else:
                dst = ops[0].reg; rn = R(ops[1].reg); o2 = ops[2]
            b, cy = self.op2(o2, True)
            e = {A.ARM_INS_AND: '%s & %s', A.ARM_INS_ORR: '%s | %s', A.ARM_INS_EOR: '%s ^ %s', A.ARM_INS_BIC: '%s & ~(%s)',
                 A.ARM_INS_ORN: '%s | ~(%s)', A.ARM_INS_TST: '%s & %s', A.ARM_INS_TEQ: '%s ^ %s'}[m] % (rn, b)
            setf = uf or m in (A.ARM_INS_TST, A.ARM_INS_TEQ)
            if not setf:
                return self.wr_reg(dst, e), True
            s = '{ uint32_t _r = %s; n = _r >> 31; z = _r == 0; %s' % (e, ('cf = %s; ' % cy) if cy else '')
            if dst is not None:
                s += self.wr_reg(dst, '_r') + ' '
            return s + '}', True
        if m in (A.ARM_INS_LSL, A.ARM_INS_LSR, A.ARM_INS_ASR, A.ARM_INS_ROR, A.ARM_INS_RRX):
            dst = ops[0].reg
            if m == A.ARM_INS_RRX:
                src = R(ops[1].reg)
                e, cy = '((%s >> 1) | (cf << 31))' % src, '(%s & 1)' % src
            else:
                if len(ops) == 2:
                    src = R(ops[0].reg); amt = ops[1]
                else:
                    src = R(ops[1].reg); amt = ops[2]
                if amt.type == arm.ARM_OP_IMM:
                    sh = amt.imm
                    if m == A.ARM_INS_LSL:
                        if sh == 0:
                            e, cy = src, None
                        else:
                            e, cy = '(%s << %d)' % (src, sh), '((%s >> %d) & 1)' % (src, 32 - sh)
                    elif m == A.ARM_INS_LSR:
                        e, cy = ('0u', '(%s >> 31)' % src) if sh == 32 else ('(%s >> %d)' % (src, sh), '((%s >> %d) & 1)' % (src, sh - 1))
                    elif m == A.ARM_INS_ASR:
                        sh = min(sh, 32)
                        e, cy = ('(uint32_t)((int32_t)%s >> 31)' % src, '(%s >> 31)' % src) if sh == 32 else ('(uint32_t)((int32_t)%s >> %d)' % (src, sh), '((%s >> %d) & 1)' % (src, sh - 1))
                    else:
                        e, cy = 'ROR32(%s,%d)' % (src, sh), '((%s >> %d) & 1)' % (src, sh - 1)
                else:
                    r2 = R(amt.reg)
                    fn = {A.ARM_INS_LSL: 'LSLR', A.ARM_INS_LSR: 'LSRR', A.ARM_INS_ASR: 'ASRR', A.ARM_INS_ROR: 'RORR'}[m]
                    e, cy = '%s(%s,%s)' % (fn, src, r2), '%s_C(%s,%s,cf)' % (fn, src, r2)
            if not uf:
                return self.wr_reg(dst, e), True
            return '{ uint32_t _r = %s; %s n = _r >> 31; z = _r == 0; %s }' % (e, ('cf = %s;' % cy) if cy else '', self.wr_reg(dst, '_r')), True
        if m in (A.ARM_INS_MUL, A.ARM_INS_MLA, A.ARM_INS_MLS):
            if m == A.ARM_INS_MUL:
                if len(ops) == 2:
                    e = '%s * %s' % (R(ops[0].reg), R(ops[1].reg))
                else:
                    e = '%s * %s' % (R(ops[1].reg), R(ops[2].reg))
            elif m == A.ARM_INS_MLA:
                e = '%s * %s + %s' % (R(ops[1].reg), R(ops[2].reg), R(ops[3].reg))
            else:
                e = '%s - %s * %s' % (R(ops[3].reg), R(ops[1].reg), R(ops[2].reg))
            if uf:
                return '{ uint32_t _r = %s; n = _r >> 31; z = _r == 0; %s }' % (e, self.wr_reg(ops[0].reg, '_r')), True
            return self.wr_reg(ops[0].reg, e), True
        if m in (A.ARM_INS_UMULL, A.ARM_INS_SMULL, A.ARM_INS_UMLAL, A.ARM_INS_SMLAL):
            lo, hi, x, y = [self.reg(o.reg) for o in ops]
            if m in (A.ARM_INS_UMULL, A.ARM_INS_UMLAL):
                p = '(uint64_t)%s * (uint64_t)%s' % (x, y)
            else:
                p = '(uint64_t)((int64_t)(int32_t)%s * (int64_t)(int32_t)%s)' % (x, y)
            if m in (A.ARM_INS_UMLAL, A.ARM_INS_SMLAL):
                p = '(%s + (((uint64_t)%s << 32) | %s))' % (p, hi, lo)
            s = '{ uint64_t _p = %s; %s = (uint32_t)_p; %s = (uint32_t)(_p >> 32); ' % (p, lo, hi)
            if uf:
                s += 'n = %s >> 31; z = _p == 0; ' % hi
            return s + '}', True
        if m in (A.ARM_INS_SMMUL, A.ARM_INS_SMMULR, A.ARM_INS_SMMLA, A.ARM_INS_SMMLAR, A.ARM_INS_SMMLS, A.ARM_INS_SMMLSR):
            d = self.reg(ops[0].reg); x = R(ops[1].reg); y = R(ops[2].reg)
            p = '((int64_t)(int32_t)%s * (int64_t)(int32_t)%s)' % (x, y)
            rnd = m in (A.ARM_INS_SMMULR, A.ARM_INS_SMMLAR, A.ARM_INS_SMMLSR)
            if m in (A.ARM_INS_SMMLA, A.ARM_INS_SMMLAR):
                p = '(((int64_t)(int32_t)%s << 32) + %s)' % (R(ops[3].reg), p)
            elif m in (A.ARM_INS_SMMLS, A.ARM_INS_SMMLSR):
                p = '(((int64_t)(int32_t)%s << 32) - %s)' % (R(ops[3].reg), p)
            if rnd:
                p = '(%s + 0x80000000ll)' % p
            return '%s = (uint32_t)((uint64_t)%s >> 32);' % (d, p), True
        if m in (A.ARM_INS_SMULBB, A.ARM_INS_SMULBT, A.ARM_INS_SMULTB, A.ARM_INS_SMULTT, A.ARM_INS_SMLABB, A.ARM_INS_SMLABT, A.ARM_INS_SMLATB, A.ARM_INS_SMLATT):
            d = self.reg(ops[0].reg); x = R(ops[1].reg); y = R(ops[2].reg)
            nm = i.mnemonic[4:6] if i.mnemonic.startswith('smla') else i.mnemonic[4:6]
            hx = '(int32_t)(int16_t)(%s >> 16)' % x if nm[0] == 't' else '(int32_t)(int16_t)%s' % x
            hy = '(int32_t)(int16_t)(%s >> 16)' % y if nm[1] == 't' else '(int32_t)(int16_t)%s' % y
            e = '(uint32_t)(%s * %s)' % (hx, hy)
            if i.mnemonic.startswith('smla'):
                e = '(%s + %s)' % (e, R(ops[3].reg))  # Q flag not modelled
            return '%s = %s;' % (d, e), True
        if m == A.ARM_INS_SMLSD:
            d = self.reg(ops[0].reg); x = R(ops[1].reg); y = R(ops[2].reg); acc = R(ops[3].reg)
            return '%s = (uint32_t)((int32_t)(int16_t)%s * (int32_t)(int16_t)%s - (int32_t)(int16_t)(%s>>16) * (int32_t)(int16_t)(%s>>16) + (int32_t)%s);' % (d, x, y, x, y, acc), True
        if m in (A.ARM_INS_SDIV, A.ARM_INS_UDIV):
            d = self.reg(ops[0].reg); x = R(ops[1].reg); y = R(ops[2].reg)
            return '%s = %s(%s, %s);' % (d, 'SDIV' if m == A.ARM_INS_SDIV else 'UDIV', x, y), True
        if m == A.ARM_INS_CLZ:
            return self.wr_reg(ops[0].reg, 'CLZ32(%s)' % R(ops[1].reg)), True
        if m == A.ARM_INS_RBIT:
            return self.wr_reg(ops[0].reg, 'RBIT32(%s)' % R(ops[1].reg)), True
        if m == A.ARM_INS_REV:
            return self.wr_reg(ops[0].reg, '__builtin_bswap32(%s)' % R(ops[1].reg)), True
        if m == A.ARM_INS_REV16:
            x = R(ops[1].reg)
            return self.wr_reg(ops[0].reg, '(((%s >> 8) & 0x00ff00ffu) | ((%s << 8) & 0xff00ff00u))' % (x, x)), True
        if m == A.ARM_INS_REVSH:
            x = R(ops[1].reg)
            return self.wr_reg(ops[0].reg, '(uint32_t)(int32_t)(int16_t)(((%s >> 8) & 0xff) | ((%s & 0xff) << 8))' % (x, x)), True
        if m in (A.ARM_INS_UXTB, A.ARM_INS_UXTH, A.ARM_INS_SXTB, A.ARM_INS_SXTH, A.ARM_INS_UXTAB, A.ARM_INS_UXTAH, A.ARM_INS_SXTAB, A.ARM_INS_SXTAH, A.ARM_INS_UXTB16):
            add = m in (A.ARM_INS_UXTAB, A.ARM_INS_UXTAH, A.ARM_INS_SXTAB, A.ARM_INS_SXTAH)
            src = ops[2] if add else ops[1]
            x = R(src.reg)
            if src.shift.type == A.ARM_SFT_ROR and src.shift.value:
                x = 'ROR32(%s,%d)' % (x, src.shift.value)
            if m == A.ARM_INS_UXTB16:
                return self.wr_reg(ops[0].reg, '((%s) & 0x00ff00ffu)' % x), True
            cast = {A.ARM_INS_UXTB: '(uint32_t)(uint8_t)', A.ARM_INS_UXTAB: '(uint32_t)(uint8_t)', A.ARM_INS_UXTH: '(uint32_t)(uint16_t)',
                    A.ARM_INS_UXTAH: '(uint32_t)(uint16_t)', A.ARM_INS_SXTB: '(uint32_t)(int32_t)(int8_t)', A.ARM_INS_SXTAB: '(uint32_t)(int32_t)(int8_t)',
                    A.ARM_INS_SXTH: '(uint32_t)(int32_t)(int16_t)', A.ARM_INS_SXTAH: '(uint32_t)(int32_t)(int16_t)'}[m]
            e = '%s(%s)' % (cast, x)
            if add:
                e = '%s + %s' % (R(ops[1].reg), e)
            return self.wr_reg(ops[0].reg, e), True
        if m in (A.ARM_INS_UBFX, A.ARM_INS_SBFX):
            d = ops[0].reg; x = R(ops[1].reg); lsb = ops[2].imm; w = ops[3].imm
            if m == A.ARM_INS_UBFX:
                e = '((%s >> %d) & 0x%xu)' % (x, lsb, (1 << w) - 1) if w < 32 else x
            else:
                e = '(uint32_t)(((int32_t)(%s << %d)) >> %d)' % (x, 32 - lsb - w, 32 - w)
            return self.wr_reg(d, e), True
        if m == A.ARM_INS_BFC:
            d = self.reg(ops[0].reg); lsb = ops[1].imm; w = ops[2].imm
            mask = (((1 << w) - 1) << lsb) & 0xffffffff
            return '%s &= 0x%xu;' % (d, (~mask) & 0xffffffff), True
        if m == A.ARM_INS_BFI:
            d = self.reg(ops[0].reg); x = R(ops[1].reg); lsb = ops[2].imm; w = ops[3].imm
            mask = (((1 << w) - 1) << lsb) & 0xffffffff
            return '%s = (%s & 0x%xu) | ((%s << %d) & 0x%xu);' % (d, d, (~mask) & 0xffffffff, x, lsb, mask), True
        if m in (A.ARM_INS_USAT, A.ARM_INS_SSAT):
            d = self.reg(ops[0].reg); sat = ops[1].imm
            x, _ = self.shifted(ops[2]) if ops[2].type == arm.ARM_OP_REG else (None, None)
            if m == A.ARM_INS_USAT:
                return '%s = USAT(%s, %d);' % (d, x, sat), True
            return '%s = SSAT(%s, %d);' % (d, x, sat), True
        if m == A.ARM_INS_PKHBT:
            d = self.reg(ops[0].reg); x = R(ops[1].reg)
            y, _ = self.shifted(ops[2])
            return '%s = (%s & 0xffffu) | ((%s) & 0xffff0000u);' % (d, x, y), True

        # ---------------- loads / stores
        if m in (A.ARM_INS_LDR, A.ARM_INS_LDRB, A.ARM_INS_LDRH, A.ARM_INS_LDRSB, A.ARM_INS_LDRSH, A.ARM_INS_LDRT, A.ARM_INS_LDRBT, A.ARM_INS_LDRHT,
                 A.ARM_INS_STR, A.ARM_INS_STRB, A.ARM_INS_STRH, A.ARM_INS_STRT, A.ARM_INS_STRBT, A.ARM_INS_STRHT, A.ARM_INS_LDREX, A.ARM_INS_STREX,
                 A.ARM_INS_LDREXB, A.ARM_INS_LDREXH, A.ARM_INS_STREXB, A.ARM_INS_STREXH):
            return self.ldst(i)
        if m in (A.ARM_INS_LDRD, A.ARM_INS_STRD):
            return self.ldstd(i)
        if m in (A.ARM_INS_PUSH, A.ARM_INS_POP, A.ARM_INS_LDM, A.ARM_INS_STM, A.ARM_INS_LDMDB, A.ARM_INS_STMDB):
            return self.ldstm(i)

        # ---------------- VFP / NEON
        mn = i.mnemonic
        if mn.startswith('v'):
            return self.vfp(i)
        if m in (A.ARM_INS_MRS, A.ARM_INS_MSR):
            raise Unsupported('mrs/msr')
        raise Unsupported('insn')

    def ldst(self, i):
        m = i.id
        ops = i.operands
        R = self.rd_reg
        load = m in (A.ARM_INS_LDR, A.ARM_INS_LDRB, A.ARM_INS_LDRH, A.ARM_INS_LDRSB, A.ARM_INS_LDRSH, A.ARM_INS_LDRT, A.ARM_INS_LDRBT, A.ARM_INS_LDRHT, A.ARM_INS_LDREX, A.ARM_INS_LDREXB, A.ARM_INS_LDREXH)
        size = {A.ARM_INS_LDR: 4, A.ARM_INS_LDRT: 4, A.ARM_INS_STR: 4, A.ARM_INS_STRT: 4, A.ARM_INS_LDREX: 4, A.ARM_INS_STREX: 4,
                A.ARM_INS_LDRB: 1, A.ARM_INS_LDRBT: 1, A.ARM_INS_STRB: 1, A.ARM_INS_STRBT: 1, A.ARM_INS_LDRSB: 1, A.ARM_INS_LDREXB: 1, A.ARM_INS_STREXB: 1,
                A.ARM_INS_LDRH: 2, A.ARM_INS_LDRHT: 2, A.ARM_INS_STRH: 2, A.ARM_INS_STRHT: 2, A.ARM_INS_LDRSH: 2, A.ARM_INS_LDREXH: 2, A.ARM_INS_STREXH: 2}[m]
        signed = m in (A.ARM_INS_LDRSB, A.ARM_INS_LDRSH)
        if m in (A.ARM_INS_STREX, A.ARM_INS_STREXB, A.ARM_INS_STREXH):
            st, rt, mo = ops[0].reg, ops[1].reg, ops[2]
            addr, base = self.mem_addr(mo)
            return '{ uint32_t _a = %s; ST%d(_a, %s); %s = 0; }' % (addr, size * 8, R(rt), self.reg(st)), True
        rt = ops[0].reg
        mo = ops[1]
        post = i.post_index if hasattr(i, 'post_index') else False
        wb = i.writeback
        if mo.type != arm.ARM_OP_MEM:
            raise Unsupported('ldst operand')
        addr, base = self.mem_addr(mo)
        if post:
            if len(ops) < 3:
                raise Unsupported('post-index without offset')
            off = ops[2]
            if off.type == arm.ARM_OP_IMM:
                inc = '(uint32_t)%d' % (-off.imm if off.subtracted else off.imm)
            else:
                rv, _ = self.shifted(off)
                inc = ('-(%s)' if off.subtracted else '%s') % rv
            ea = base
            upd = '%s = %s + %s;' % (base, base, inc)
        else:
            ea = addr
            upd = ('%s = _a;' % base) if wb else ''
        rtn = self.reg(rt)
        if load:
            # literal pool constant folding
            if base == 'pc' and not post and not wb:
                la = ((i.address + 4) & ~3) + (-mo.mem.disp if mo.subtracted else mo.mem.disp)
                if not mo.mem.index:
                    v = self.const_load(la, size, signed)
                    if v is not None and rtn != 'pc':
                        return self.wr_reg(rt, '0x%xu' % (v & 0xffffffff)), True
            ld = {1: 'LD8', 2: 'LD16', 4: 'LD32'}[size]
            val = '%s(_a)' % ld
            if signed:
                val = '(uint32_t)(int32_t)(int%d_t)%s' % (size * 8, val)
            if rtn == 'pc':
                # load into pc: return (pop-like) or indirect jump
                if base == 'sp' and post:
                    return '{ uint32_t _a = %s; %s RETURN; }' % (ea, upd), False
                return '{ uint32_t _a = %s; uint32_t _t = %s; %s %s }' % (ea, val, upd, self.taili('_t')), False
            if m in (A.ARM_INS_LDREX, A.ARM_INS_LDREXB, A.ARM_INS_LDREXH):
                return '{ uint32_t _a = %s; %s }' % (ea, self.wr_reg(rt, val)), True
            return '{ uint32_t _a = %s; uint32_t _v = %s; %s %s }' % (ea, val, upd, self.wr_reg(rt, '_v')), True
        else:
            st = {1: 'ST8', 2: 'ST16', 4: 'ST32'}[size]
            return '{ uint32_t _a = %s; %s(_a, %s); %s }' % (ea, st, R(rt), upd), True

    def ldstd(self, i):
        ops = i.operands
        load = i.id == A.ARM_INS_LDRD
        r1, r2, mo = ops[0].reg, ops[1].reg, ops[2]
        post = getattr(i, 'post_index', False)
        addr, base = self.mem_addr(mo)
        if post:
            off = ops[3]
            inc = '(uint32_t)%d' % (-off.imm if off.subtracted else off.imm)
            ea, upd = base, '%s = %s + %s;' % (base, base, inc)
        else:
            ea, upd = addr, ('%s = _a;' % base) if i.writeback else ''
        if load:
            if base == 'pc':
                la = ((i.address + 4) & ~3) + (-mo.mem.disp if mo.subtracted else mo.mem.disp)
                v1 = self.const_load(la, 4); v2 = self.const_load(la + 4, 4)
                if v1 is not None and v2 is not None:
                    return '%s %s' % (self.wr_reg(r1, '0x%xu' % v1), self.wr_reg(r2, '0x%xu' % v2)), True
            return '{ uint32_t _a = %s; uint32_t _v1 = LD32(_a), _v2 = LD32(_a + 4); %s %s %s }' % (ea, upd, self.wr_reg(r1, '_v1'), self.wr_reg(r2, '_v2')), True
        return '{ uint32_t _a = %s; ST32(_a, %s); ST32(_a + 4, %s); %s }' % (ea, self.rd_reg(r1), self.rd_reg(r2), upd), True

    def ldstm(self, i):
        m = i.id
        ops = i.operands
        if m in (A.ARM_INS_PUSH, A.ARM_INS_POP):
            base = 'sp'; regs = [o.reg for o in ops]; wb = True
            mode = 'db' if m == A.ARM_INS_PUSH else 'ia'
            load = m == A.ARM_INS_POP
        else:
            base = self.reg(ops[0].reg); regs = [o.reg for o in ops[1:]]; wb = i.writeback
            load = m in (A.ARM_INS_LDM, A.ARM_INS_LDMDB)
            mode = 'db' if m in (A.ARM_INS_LDMDB, A.ARM_INS_STMDB) else 'ia'
        names = [self.reg(r) for r in regs]
        n = len(names)
        s = '{ uint32_t _b = %s; ' % base
        start = '_b' if mode == 'ia' else '(_b - %d)' % (4 * n)
        s += 'uint32_t _a = %s; ' % start
        ret = False
        for k, nm in enumerate(names):
            if load:
                if nm == 'pc':
                    ret = True
                    continue
                if nm == base and wb:
                    continue
                s += '%s = LD32(_a + %d); ' % (nm, 4 * k)
            else:
                s += 'ST32(_a + %d, %s); ' % (4 * k, self.rd_reg(regs[k]) if nm != base else '_b')
        if wb:
            s += '%s = %s; ' % (base, '_b + %d' % (4 * n) if mode == 'ia' else '_b - %d' % (4 * n))
        if ret:
            s += 'RETURN; '
        s += '}'
        return s, not ret

    # ------------------------------------------------------------------ VFP / NEON
    def vreg(self, r):
        n = self.reg(r)
        return n

    def vfp(self, i):
        mn = i.mnemonic
        base = re.sub(r'(eq|ne|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le)(?=\.|$)', '', mn.split('.')[0]) if i.cc != A.ARM_CC_AL else mn.split('.')[0]
        dts = mn.split('.')[1:]
        ops = i.operands
        names = [self.reg(o.reg) if o.type == arm.ARM_OP_REG else None for o in ops]
        kinds = [(n[0] if n else None) for n in names]
        m = i.id

        def S(n):  # read s reg as float bits
            k = int(n[1:]); return 'GETS(d%d,%d)' % (k // 2, k % 2)

        def setS(n, e):
            k = int(n[1:]); return 'SETS(d%d,%d,%s);' % (k // 2, k % 2, e)

        def F(n):  # float value of s reg
            return 'U2F(%s)' % S(n)

        def D(n):
            return 'U2D(%s)' % n

        def qpair(n):
            k = int(n[1:]); return ('d%d' % (2 * k), 'd%d' % (2 * k + 1))

        def dregs(n):
            if n[0] == 'q':
                return list(qpair(n))
            return [n]

        if m in (A.ARM_INS_VLD1, A.ARM_INS_VST1, A.ARM_INS_VLD2, A.ARM_INS_VST2, A.ARM_INS_VLD3, A.ARM_INS_VST3, A.ARM_INS_VLD4, A.ARM_INS_VST4):
            return self.neon_ldst(i)
        if m in (A.ARM_INS_VLDR, A.ARM_INS_VSTR):
            mo = ops[1]
            addr, b = self.mem_addr(mo)
            n = names[0]
            if m == A.ARM_INS_VLDR:
                if b == 'pc':
                    la = ((i.address + 4) & ~3) + (-mo.mem.disp if mo.subtracted else mo.mem.disp)
                    if n[0] == 's':
                        v = self.const_load(la, 4)
                        if v is not None:
                            return setS(n, '0x%xu' % v), True
                    else:
                        v = self.const_load(la, 8)
                        if v is not None:
                            return '%s = 0x%xull;' % (n, v), True
                if n[0] == 's':
                    return setS(n, 'LD32(%s)' % addr), True
                return '%s = LD64(%s);' % (n, addr), True
            if n[0] == 's':
                return 'ST32(%s, %s);' % (addr, S(n)), True
            return 'ST64(%s, %s);' % (addr, n), True
        if m in (A.ARM_INS_VPUSH, A.ARM_INS_VPOP, A.ARM_INS_VLDMIA, A.ARM_INS_VSTMIA, A.ARM_INS_VLDMDB, A.ARM_INS_VSTMDB):
            if m in (A.ARM_INS_VPUSH, A.ARM_INS_VPOP):
                base = 'sp'; regs = names; wb = True; mode = 'db' if m == A.ARM_INS_VPUSH else 'ia'
                load = m == A.ARM_INS_VPOP
            else:
                base = names[0]; regs = names[1:]; wb = i.writeback
                mode = 'db' if m in (A.ARM_INS_VLDMDB, A.ARM_INS_VSTMDB) else 'ia'
                load = m in (A.ARM_INS_VLDMIA, A.ARM_INS_VLDMDB)
            sz = 4 if regs[0][0] == 's' else 8
            tot = sz * len(regs)
            s = '{ uint32_t _b = %s; uint32_t _a = %s; ' % (base, '_b' if mode == 'ia' else '_b - %d' % tot)
            for k, r in enumerate(regs):
                if sz == 4:
                    s += (setS(r, 'LD32(_a + %d)' % (4 * k)) + ' ') if load else 'ST32(_a + %d, %s); ' % (4 * k, S(r))
                else:
                    s += ('%s = LD64(_a + %d); ' % (r, 8 * k)) if load else 'ST64(_a + %d, %s); ' % (8 * k, r)
            if wb:
                s += '%s = _b %s %d; ' % (base, '+' if mode == 'ia' else '-', tot)
            return s + '}', True
        if base == 'vmrs':
            if names[0] == 'apsr_nzcv':
                return 'n = fn; z = fz; cf = fc; v = fv;', True
            if names[0] and names[0] in ('fpscr',):
                raise Unsupported('vmrs fpscr->?')
            return self.wr_reg(ops[0].reg, '((fn<<31)|(fz<<30)|(fc<<29)|(fv<<28)|fpscr_rest)'), True
        if base == 'vmsr':
            v = self.rd_reg(ops[1].reg)
            return '{ uint32_t _f = %s; fn = _f >> 31; fz = (_f >> 30) & 1; fc = (_f >> 29) & 1; fv = (_f >> 28) & 1; fpscr_rest = _f & 0x0fffffffu; }' % v, True
        if base == 'vmov':
            return self.vmov(i, names, kinds, dts)
        dt = dts[-1] if dts else ''
        scalar_f32 = all(k in ('s', None) for k in kinds) and ('s' in kinds)
        scalar_f64 = (dt == 'f64' or (len(dts) >= 1 and 'f64' in dts)) and 'q' not in kinds
        if base in ('vcmp', 'vcmpe'):
            if kinds[0] == 's':
                a = F(names[0]); b = F(names[1]) if len(ops) > 1 and names[1] else '0.0f'
            else:
                a = D(names[0]); b = D(names[1]) if len(ops) > 1 and names[1] else '0.0'
            return 'FCMP(%s, %s);' % (a, b), True
        if base == 'vcvt' or base == 'vcvtr':
            return self.vcvt(i, names, kinds, dts, base == 'vcvtr')
        if scalar_f32 or scalar_f64:
            if scalar_f32:
                rd = lambda n: F(n)
                wr = lambda n, e: setS(n, 'F2U(%s)' % e)
                fl = 'float'
            else:
                rd = lambda n: D(n)
                wr = lambda n, e: '%s = D2U(%s);' % (n, e)
                fl = 'double'
            nm = names
            if base in ('vadd', 'vsub', 'vmul', 'vdiv'):
                op = {'vadd': '+', 'vsub': '-', 'vmul': '*', 'vdiv': '/'}[base]
                if len(nm) == 2:
                    return wr(nm[0], '(%s %s %s)' % (rd(nm[0]), op, rd(nm[1]))), True
                return wr(nm[0], '(%s %s %s)' % (rd(nm[1]), op, rd(nm[2]))), True
            if base == 'vnmul':
                return wr(nm[0], '(-(%s * %s))' % (rd(nm[1]), rd(nm[2]))), True
            if base in ('vmla', 'vmls', 'vnmla', 'vnmls', 'vfma', 'vfms', 'vfnma', 'vfnms'):
                p = '(%s * %s)' % (rd(nm[1]), rd(nm[2]))
                d = rd(nm[0])
                e = {'vmla': '(%s + %s)' % (d, p), 'vmls': '(%s - %s)' % (d, p), 'vnmla': '(-%s - %s)' % (d, p),
                     'vnmls': '(-%s + %s)' % (d, p)}.get(base)
                if base in ('vfma', 'vfms', 'vfnma', 'vfnms'):
                    fma = 'fmaf' if scalar_f32 else 'fma'
                    a1, a2 = rd(nm[1]), rd(nm[2])
                    e = {'vfma': '%s(%s, %s, %s)' % (fma, a1, a2, d), 'vfms': '%s(-%s, %s, %s)' % (fma, a1, a2, d),
                         'vfnma': '%s(-%s, %s, -%s)' % (fma, a1, a2, d), 'vfnms': '%s(%s, %s, -%s)' % (fma, a1, a2, d)}[base]
                return wr(nm[0], e), True
            if base == 'vneg':
                return wr(nm[0], '(-%s)' % rd(nm[1])), True
            if base == 'vabs':
                return wr(nm[0], '%s(%s)' % ('fabsf' if scalar_f32 else 'fabs', rd(nm[1]))), True
            if base == 'vsqrt':
                return wr(nm[0], '%s(%s)' % ('sqrtf' if scalar_f32 else 'sqrt', rd(nm[1]))), True
            raise Unsupported('vfp scalar op')
        return self.neon(i, base, dts, names, kinds)

    def vmov(self, i, names, kinds, dts):
        ops = i.operands
        S = lambda n: 'GETS(d%d,%d)' % (int(n[1:]) // 2, int(n[1:]) % 2)
        setS = lambda n, e: 'SETS(d%d,%d,%s);' % (int(n[1:]) // 2, int(n[1:]) % 2, e)
        core = lambda n: n and (n[0] == 'r' or n in ('sp', 'lr'))
        n = len(ops)
        # vmov.32 rX, dY[k] / vmov.32 dY[k], rX  (capstone reports lane in vector_index)
        if n == 2 and ops[1].type == arm.ARM_OP_REG and ops[0].type == arm.ARM_OP_REG:
            a, b = names
            vi0 = getattr(ops[0], 'vector_index', -1); vi1 = getattr(ops[1], 'vector_index', -1)
            if core(a) and b[0] == 'd':
                lane = self.vmov_lane(i)
                return '%s = (uint32_t)(%s >> %d);' % (a, b, 32 * lane), True
            if a[0] == 'd' and core(b):
                lane = self.vmov_lane(i)
                return '%s = (%s & ~(0xffffffffull << %d)) | ((uint64_t)%s << %d);' % (a, a, 32 * lane, b, 32 * lane), True
            if core(a) and b[0] == 's':
                return '%s = %s;' % (a, S(b)), True
            if a[0] == 's' and core(b):
                return setS(a, b), True
            if a[0] == 's' and b[0] == 's':
                return setS(a, S(b)), True
            if a[0] == 'd' and b[0] == 'd':
                return '%s = %s;' % (a, b), True
            if a[0] == 'q' and b[0] == 'q':
                ka, kb = int(a[1:]), int(b[1:])
                return 'd%d = d%d; d%d = d%d;' % (2 * ka, 2 * kb, 2 * ka + 1, 2 * kb + 1), True
        if n == 3:
            a, b, c3 = names
            if core(a) and core(b) and c3[0] == 'd':
                return '%s = (uint32_t)%s; %s = (uint32_t)(%s >> 32);' % (a, c3, b, c3), True
            if a[0] == 'd' and core(b) and core(c3):
                return '%s = ((uint64_t)%s << 32) | %s;' % (a, c3, b), True
        if n == 4:
            a, b, c3, d4 = names
            if core(a) and core(b):
                return '%s = %s; %s = %s;' % (a, S(c3), b, S(d4)), True
            if core(c3) and core(d4):
                return '%s %s' % (setS(a, c3), setS(b, d4)), True
        if n == 2 and ops[1].type in (arm.ARM_OP_IMM, arm.ARM_OP_FP):
            a = names[0]
            dt = dts[-1] if dts else ''
            if ops[1].type == arm.ARM_OP_FP:
                fv = ops[1].fp
                if a[0] == 's':
                    return setS(a, '0x%xu' % struct.unpack('<I', struct.pack('<f', fv))[0]), True
                if dt == 'f64':
                    return '%s = 0x%xull;' % (a, struct.unpack('<Q', struct.pack('<d', fv))[0]), True
                bits = struct.unpack('<I', struct.pack('<f', fv))[0]
                rep = bits | (bits << 32)
            else:
                imm = self.neon_modimm(i)
                rep = imm
            regs = [a] if a[0] == 'd' else ['d%d' % (2 * int(a[1:])), 'd%d' % (2 * int(a[1:]) + 1)]
            if i.mnemonic.startswith('vmvn'):
                rep = (~rep) & 0xffffffffffffffff
            return ' '.join('%s = 0x%xull;' % (r, rep) for r in regs), True
        raise Unsupported('vmov form')

    def vmov_lane(self, i):
        """Decode lane index for VMOV between core reg and 32-bit scalar (A8.8.341/342)."""
        hw1, hw2 = struct.unpack('<HH', bytes(i.bytes))
        # encoding: 1110 1110 0 op1(2) 0 Vd | Rt 1011 D op2(2) 1 0000  (to scalar) / with bit20=1 from scalar
        opc1 = (hw1 >> 5) & 3
        opc2 = (hw2 >> 5) & 3
        if (opc1 & 2) == 0 and opc2 == 0:
            return (hw1 >> 5) & 1  # 32-bit: index = opc1<0>
        raise Unsupported('vmov lane size')

    def neon_modimm(self, i):
        """AdvSIMDExpandImm from raw encoding (VMOV/VMVN/VORR/VBIC immediate)."""
        hw1, hw2 = struct.unpack('<HH', bytes(i.bytes))
        a = (hw1 >> 12) & 1  # 'i' bit is bit 28 of the 32-bit word => hw1 bit 12
        imm3 = hw1 & 7
        imm4 = hw2 & 0xf
        imm8 = (a << 7) | (imm3 << 4) | imm4
        cmode = (hw2 >> 8) & 0xf
        op = (hw2 >> 5) & 1
        def rep32(x):
            return x | (x << 32)
        if cmode in (0, 1):
            return rep32(imm8)
        if cmode in (2, 3):
            return rep32(imm8 << 8)
        if cmode in (4, 5):
            return rep32(imm8 << 16)
        if cmode in (6, 7):
            return rep32(imm8 << 24)
        if cmode in (8, 9):
            v = imm8 | (imm8 << 16); return rep32(v)
        if cmode in (10, 11):
            v = (imm8 << 8) | (imm8 << 24); return rep32(v)
        if cmode == 12:
            return rep32((imm8 << 8) | 0xff)
        if cmode == 13:
            return rep32((imm8 << 16) | 0xffff)
        if cmode == 14:
            if op == 0:
                v = 0
                for k in range(8):
                    v |= imm8 << (8 * k)
                return v
            v = 0
            for k in range(8):
                if imm8 & (1 << k):
                    v |= 0xff << (8 * k)
            return v
        if cmode == 15 and op == 0:
            b = (imm8 >> 6) & 1
            f = ((imm8 >> 7) << 31) | ((1 - b) << 30) | ((0x1f if b else 0) << 25) | ((imm8 & 0x3f) << 19)
            return rep32(f)
        raise Unsupported('modimm')

    def vcvt(self, i, names, kinds, dts, rnd):
        ops = i.operands
        to, frm = dts[0], dts[1]
        fixed = len(ops) == 3 and ops[2].type == arm.ARM_OP_IMM
        S = lambda n: 'GETS(d%d,%d)' % (int(n[1:]) // 2, int(n[1:]) % 2)
        setS = lambda n, e: 'SETS(d%d,%d,%s);' % (int(n[1:]) // 2, int(n[1:]) % 2, e)
        d, s = names[0], names[1]
        if kinds[0] in ('d', 'q') and kinds[1] in ('d', 'q') and to in ('f32', 's32', 'u32') and frm in ('f32', 's32', 'u32'):
            # NEON vector conversion
            regs_d = [d] if d[0] == 'd' else ['d%d' % (2 * int(d[1:])), 'd%d' % (2 * int(d[1:]) + 1)]
            regs_s = [s] if s[0] == 'd' else ['d%d' % (2 * int(s[1:])), 'd%d' % (2 * int(s[1:]) + 1)]
            fb = ops[2].imm if fixed else 0
            fn = 'VCVT_%s_%s' % (to.upper(), frm.upper())
            tmp = ' '.join('uint64_t _t%d = %s(%s, %d);' % (k, fn, rs, fb) for k, rs in enumerate(regs_s))
            asg = ' '.join('%s = _t%d;' % (rd, k) for k, rd in enumerate(regs_d))
            return '{ %s %s }' % (tmp, asg), True
        def src_val():
            if frm == 'f32': return 'U2F(%s)' % S(s)
            if frm == 'f64': return 'U2D(%s)' % s
            if frm == 's32': return '(int32_t)%s' % S(s)
            if frm == 'u32': return '(uint32_t)%s' % S(s)
            if frm == 's16': return '(int16_t)%s' % S(s)
            if frm == 'u16': return '(uint16_t)%s' % S(s)
            raise Unsupported('vcvt from ' + frm)
        v = src_val()
        if fixed:
            fb = ops[2].imm
            if to in ('f32', 'f64'):
                v = '((%s)%s / %s)' % ('float' if to == 'f32' else 'double', '(int32_t)' + S(d) if frm in ('s32', 's16') else '(uint32_t)' + S(d), float(1 << fb))
                # fixed-point source is the destination register itself (vcvt.f32.s32 s0, s0, #fb)
            else:
                v = '(%s * %s)' % ('U2F(%s)' % S(d) if frm == 'f32' else 'U2D(%s)' % d, float(1 << fb))
        if to == 'f32':
            return setS(d, 'F2U((float)(%s))' % v), True
        if to == 'f64':
            return '%s = D2U((double)(%s));' % (d, v), True
        if to in ('s32', 'u32', 's16', 'u16'):
            fn = {'s32': 'CVT_S32', 'u32': 'CVT_U32', 's16': 'CVT_S16', 'u16': 'CVT_U16'}[to]
            if rnd:
                fn += '_RN'
            return setS(d, '(uint32_t)%s(%s)' % (fn, v)), True
        raise Unsupported('vcvt to ' + to)

    def neon(self, i, base, dts, names, kinds):
        """Advanced SIMD data processing on d/q registers (2x32-bit lane model)."""
        ops = i.operands
        dt = dts[-1] if dts else ''
        def regs(n):
            if n is None: return None
            if n[0] == 'q':
                k = int(n[1:]); return ['d%d' % (2 * k), 'd%d' % (2 * k + 1)]
            return [n]
        def bin_op(fn, extra=''):
            d = regs(names[0])
            if len(ops) == 2:
                a, b = regs(names[0]), regs(names[1])
            else:
                a, b = regs(names[1]), regs(names[2])
            tmp = ' '.join('uint64_t _t%d = %s(%s, %s%s);' % (k, fn, a[k], b[k], extra) for k in range(len(d)))
            return '{ %s %s }' % (tmp, ' '.join('%s = _t%d;' % (d[k], k) for k in range(len(d)))), True
        def un_op(fn, extra=''):
            d = regs(names[0]); a = regs(names[1])
            tmp = ' '.join('uint64_t _t%d = %s(%s%s);' % (k, fn, a[k], extra) for k in range(len(d)))
            return '{ %s %s }' % (tmp, ' '.join('%s = _t%d;' % (d[k], k) for k in range(len(d)))), True
        if base in ('vorr', 'vand', 'veor', 'vbic', 'vorn') and len(ops) == 3 and ops[2].type == arm.ARM_OP_REG:
            op = {'vorr': 'V_ORR', 'vand': 'V_AND', 'veor': 'V_EOR', 'vbic': 'V_BIC', 'vorn': 'V_ORN'}[base]
            return bin_op(op)
        if base in ('vorr', 'vbic') and ops[-1].type == arm.ARM_OP_IMM:
            imm = self.neon_modimm(i)
            d = regs(names[0])
            if base == 'vorr':
                return ' '.join('%s |= 0x%xull;' % (r, imm) for r in d), True
            return ' '.join('%s &= ~0x%xull;' % (r, imm) for r in d), True
        if base == 'vmvn':
            if ops[-1].type == arm.ARM_OP_REG:
                return un_op('V_MVN')
            imm = (~self.neon_modimm(i)) & 0xffffffffffffffff
            return ' '.join('%s = 0x%xull;' % (r, imm) for r in regs(names[0])), True
        if base in ('vbsl', 'vbit', 'vbif'):
            d = regs(names[0]); a = regs(names[1]); b = regs(names[2])
            fn = {'vbsl': 'V_BSL', 'vbit': 'V_BIT', 'vbif': 'V_BIF'}[base]
            return ' '.join('%s = %s(%s, %s, %s);' % (d[k], fn, d[k], a[k], b[k]) for k in range(len(d))), True
        if base in ('vmul', 'vmla', 'vmls') and dt == 'f32' and self.neon_scalar_index(i) is not None:
            d = regs(names[0]); a = regs(names[1]); mreg, lane = self.neon_scalar_index(i)
            if base == 'vmul':
                return '{ %s %s }' % (' '.join('uint64_t _t%d = V_MUL_F32S(%s, %s, %d);' % (k, a[k], mreg, lane) for k in range(len(d))),
                                      ' '.join('%s = _t%d;' % (d[k], k) for k in range(len(d)))), True
            fn = 'V_MLA_F32S' if base == 'vmla' else 'V_MLS_F32S'
            return '{ %s %s }' % (' '.join('uint64_t _t%d = %s(%s, %s, %s, %d);' % (k, fn, d[k], a[k], mreg, lane) for k in range(len(d))),
                                  ' '.join('%s = _t%d;' % (d[k], k) for k in range(len(d)))), True
        simple = {('vadd', 'f32'): 'V_ADD_F32', ('vsub', 'f32'): 'V_SUB_F32', ('vmul', 'f32'): 'V_MUL_F32',
                  ('vmax', 'f32'): 'V_MAX_F32', ('vmin', 'f32'): 'V_MIN_F32',
                  ('vadd', 'i32'): 'V_ADD_I32', ('vsub', 'i32'): 'V_SUB_I32', ('vadd', 'i64'): 'V_ADD_I64', ('vsub', 'i64'): 'V_SUB_I64',
                  ('vadd', 'i16'): 'V_ADD_I16', ('vsub', 'i16'): 'V_SUB_I16', ('vadd', 'i8'): 'V_ADD_I8', ('vsub', 'i8'): 'V_SUB_I8',
                  ('vmul', 'i32'): 'V_MUL_I32', ('vmul', 'i16'): 'V_MUL_I16',
                  ('vmax', 's32'): 'V_MAX_S32', ('vmin', 's32'): 'V_MIN_S32', ('vmax', 'u32'): 'V_MAX_U32', ('vmin', 'u32'): 'V_MIN_U32',
                  ('vceq', 'i32'): 'V_CEQ_I32', ('vceq', 'i16'): 'V_CEQ_I16', ('vceq', 'i8'): 'V_CEQ_I8', ('vceq', 'f32'): 'V_CEQ_F32',
                  ('vcgt', 's32'): 'V_CGT_S32', ('vcgt', 's16'): 'V_CGT_S16', ('vcgt', 'f32'): 'V_CGT_F32', ('vcge', 'f32'): 'V_CGE_F32',
                  ('vcgt', 'u32'): 'V_CGT_U32', ('vcge', 's32'): 'V_CGE_S32', ('vcge', 'u32'): 'V_CGE_U32',
                  ('vtst', '32'): 'V_TST_32', ('vtst', 'i32'): 'V_TST_32',
                  ('vpadd', 'f32'): 'V_PADD_F32', ('vpadd', 'i32'): 'V_PADD_I32',
                  ('vabd', 'f32'): 'V_ABD_F32', ('vrecps', 'f32'): 'V_RECPS_F32', ('vrsqrts', 'f32'): 'V_RSQRTS_F32'}
        if (base, dt) in simple and len([o for o in ops if o.type == arm.ARM_OP_REG]) >= 2 and all(o.type == arm.ARM_OP_REG for o in ops):
            if base == 'vpadd':
                d = regs(names[0]); a = regs(names[1]); b = regs(names[2])
                if len(d) != 1:
                    raise Unsupported('vpadd q')
                return '%s = %s(%s, %s);' % (d[0], simple[(base, dt)], a[0], b[0]), True
            return bin_op(simple[(base, dt)])
        if base in ('vmla', 'vmls') and dt == 'f32' and all(o.type == arm.ARM_OP_REG for o in ops):
            d = regs(names[0]); a = regs(names[1])
            vi = self.neon_scalar_index(i)
            if vi is not None:
                # vmla.f32 qd, qn, dm[x]
                mreg, lane = vi
                fn = 'V_MLA_F32S' if base == 'vmla' else 'V_MLS_F32S'
                return ' '.join('%s = %s(%s, %s, %s, %d);' % (d[k], fn, d[k], a[k], mreg, lane) for k in range(len(d))), True
            b = regs(names[2])
            fn = 'V_MLA_F32' if base == 'vmla' else 'V_MLS_F32'
            return ' '.join('%s = %s(%s, %s, %s);' % (d[k], fn, d[k], a[k], b[k]) for k in range(len(d))), True
        if base == 'vmul' and dt == 'f32':
            vi = self.neon_scalar_index(i)
            if vi is not None:
                d = regs(names[0]); a = regs(names[1]); mreg, lane = vi
                return '{ %s %s }' % (' '.join('uint64_t _t%d = V_MUL_F32S(%s, %s, %d);' % (k, a[k], mreg, lane) for k in range(len(d))),
                                      ' '.join('%s = _t%d;' % (d[k], k) for k in range(len(d)))), True
        if base in ('vneg', 'vabs') and dt in ('f32', 's32'):
            return un_op({'vneg': 'V_NEG_', 'vabs': 'V_ABS_'}[base] + dt.upper())
        if base in ('vrecpe', 'vrsqrte') and dt == 'f32':
            return un_op({'vrecpe': 'V_RECPE_F32', 'vrsqrte': 'V_RSQRTE_F32'}[base])
        if base == 'vdup':
            d = regs(names[0])
            src = ops[1]
            esz = int(dt) if dt.isdigit() else 32
            if names[1][0] == 'r':
                return ' '.join('%s = V_DUP%d(%s);' % (r, esz, names[1]) for r in d), True
            lane = self.neon_dup_lane(i, esz)
            return '{ uint64_t _s = %s; %s }' % (names[1], ' '.join('%s = V_DUP%d((uint32_t)(_s >> %d));' % (r, esz, esz * lane) for r in d)), True
        if base in ('vshl', 'vshr', 'vsra') and ops[-1].type == arm.ARM_OP_IMM:
            sh = ops[-1].imm
            d = regs(names[0]); a = regs(names[1]) if len(ops) == 3 else regs(names[0])
            esz = int(re.sub(r'\D', '', dt) or 32)
            kind = dt[0] if dt[0] in 'su' else 'i'
            fn = {'vshl': 'V_SHL', 'vshr': 'V_SHR_' + kind.upper(), 'vsra': 'V_SRA_' + kind.upper()}[base]
            if base == 'vsra':
                return ' '.join('%s = %s%d(%s, %s, %d);' % (d[k], fn, esz, d[k], a[k], sh) for k in range(len(d))), True
            return ' '.join('%s = %s%d(%s, %d);' % (d[k], fn, esz, a[k], sh) for k in range(len(d))), True
        if base == 'vshl' and all(o.type == arm.ARM_OP_REG for o in ops):
            esz = int(re.sub(r'\D', '', dt) or 32)
            fn = 'V_SHLR_%s%d' % (dt[0].upper(), esz)
            return bin_op(fn)
        if base == 'vmovl':
            d = regs(names[0]); s = names[1]
            esz = int(re.sub(r'\D', '', dt))
            return '{ uint64_t _s = %s; %s = V_MOVL_%s%d(_s, 0); %s = V_MOVL_%s%d(_s, 1); }' % (s, d[0], dt[0].upper(), esz, d[1], dt[0].upper(), esz), True
        if base == 'vmovn':
            d = names[0]; s = regs(names[1])
            esz = int(re.sub(r'\D', '', dt))
            return '%s = V_MOVN%d(%s, %s);' % (d, esz, s[0], s[1]), True
        if base == 'vshrn':
            d = names[0]; s = regs(names[1]); sh = ops[2].imm
            esz = int(re.sub(r'\D', '', dt))
            return '%s = V_SHRN%d(%s, %s, %d);' % (d, esz, s[0], s[1], sh), True
        if base == 'vext':
            d = regs(names[0]); a = regs(names[1]); b = regs(names[2]); imm = ops[3].imm
            esz = int(re.sub(r'\D', '', dt) or 8)
            nbytes = imm * esz // 8
            if len(d) == 1:
                return '%s = V_EXT64(%s, %s, %d);' % (d[0], a[0], b[0], nbytes), True
            return '{ uint64_t _b[4] = {%s, %s, %s, %s}; uint8_t *_p = (uint8_t*)_b + %d; uint64_t _x, _y; memcpy(&_x, _p, 8); memcpy(&_y, _p + 8, 8); %s = _x; %s = _y; }' % (a[0], a[1], b[0], b[1], nbytes, d[0], d[1]), True
        if base == 'vrev64' or base == 'vrev32' or base == 'vrev16':
            esz = int(re.sub(r'\D', '', dt))
            return un_op('V_%s_%d' % (base.upper(), esz))
        if base == 'vswp':
            a = regs(names[0]); b = regs(names[1])
            return ' '.join('{ uint64_t _t = %s; %s = %s; %s = _t; }' % (a[k], a[k], b[k], b[k]) for k in range(len(a))), True
        if base in ('vzip', 'vuzp', 'vtrn'):
            a = regs(names[0]); b = regs(names[1])
            esz = int(re.sub(r'\D', '', dt))
            if len(a) != 1:
                raise Unsupported(base + ' q')
            return '{ uint64_t _a = %s, _b = %s; V_%s%d(&_a, &_b); %s = _a; %s = _b; }' % (a[0], b[0], base.upper(), esz, a[0], b[0]), True
        if base in ('vaddw', 'vaddl', 'vmull', 'vsubl', 'vmlal'):
            esz = int(re.sub(r'\D', '', dt))
            d = regs(names[0])
            if base == 'vaddw':
                a = regs(names[1]); b = names[2]
                return '{ uint64_t _w0 = V_MOVL_%s%d(%s, 0), _w1 = V_MOVL_%s%d(%s, 1); %s = V_ADD_I%d(%s, _w0); %s = V_ADD_I%d(%s, _w1); }' % (
                    dt[0].upper(), esz, b, dt[0].upper(), esz, b, d[0], esz * 2, a[0], d[1], esz * 2, a[1]), True
            if base == 'vmull' and esz == 32:
                a = names[1]; b = names[2]
                m = 'uint64_t' if dt[0] == 'u' else 'int64_t'
                c = 'uint32_t' if dt[0] == 'u' else 'int32_t'
                return '{ uint64_t _a = %s, _b = %s; %s = (uint64_t)((%s)(%s)(uint32_t)_a * (%s)(%s)(uint32_t)_b); %s = (uint64_t)((%s)(%s)(uint32_t)(_a>>32) * (%s)(%s)(uint32_t)(_b>>32)); }' % (
                    a, b, d[0], m, c, m, c, d[1], m, c, m, c), True
            raise Unsupported(base)
        if base in ('vcgt', 'vcge', 'vceq', 'vclt', 'vcle') and ops[-1].type == arm.ARM_OP_IMM:
            fn = 'V_%s0_%s' % (base[1:].upper(), dt.upper())
            return un_op(fn)
        raise Unsupported('neon %s.%s' % (base, dt))

    def neon_scalar_index(self, i):
        """For Advanced SIMD 'by scalar' forms return (dreg, lane) or None."""
        hw1, hw2 = struct.unpack('<HH', bytes(i.bytes))
        if (hw1 & 0xef80) == 0xef80 and (hw2 & 0x0050) == 0x0040:
            # two registers and a scalar: Vm = hw2[3:0] with M; size 32: index = M, Vm = hw2[3:0]
            size = (hw1 >> 4) & 3
            if size == 2:
                vm = hw2 & 0xf
                lane = (hw2 >> 5) & 1
                return ('d%d' % vm, lane)
        return None

    def neon_dup_lane(self, i, esz):
        hw1, hw2 = struct.unpack('<HH', bytes(i.bytes))
        imm4 = hw1 & 0xf
        if esz == 32:
            return (imm4 >> 3) & 1
        if esz == 16:
            return (imm4 >> 2) & 3
        return (imm4 >> 1) & 7

    def neon_ldst(self, i):
        """VLDn/VSTn decoded from raw bits (capstone reports alignment as displacement)."""
        hw1, hw2 = struct.unpack('<HH', bytes(i.bytes))
        if (hw1 & 0xff10) != 0xf900:
            raise Unsupported('neon ldst enc')
        A_ = (hw1 >> 7) & 1
        D = (hw1 >> 6) & 1
        L = (hw1 >> 5) & 1
        rn = hw1 & 0xf
        vd = ((hw2 >> 12) & 0xf) | (D << 4)
        rm = hw2 & 0xf
        rnn = ['r%d' % k for k in range(13)] + ['sp', 'lr', 'pc'][0:3]
        rnn = rnn[:13] + ['sp', 'lr', 'pc']
        base = rnn[rn]
        s = '{ uint32_t _a = %s; ' % base
        if A_ == 0:
            typ = (hw2 >> 8) & 0xf
            size = (hw2 >> 6) & 3
            esz = 8 << size
            layout = {0x7: (1, 1, 1), 0xA: (1, 2, 1), 0x6: (1, 3, 1), 0x2: (1, 4, 1),
                      0x8: (2, 1, 1), 0x9: (2, 1, 2), 0x3: (2, 2, 2),
                      0x4: (3, 1, 1), 0x5: (3, 1, 2), 0x0: (4, 1, 1), 0x1: (4, 1, 2)}
            if typ not in layout:
                raise Unsupported('vldN type')
            nstruct, regs_per, inc = layout[typ]
            if nstruct == 1:
                total = 8 * regs_per
                for k in range(regs_per):
                    r = 'd%d' % (vd + k)
                    s += ('%s = LD64(_a + %d); ' % (r, 8 * k)) if L else 'ST64(_a + %d, %s); ' % (8 * k, r)
            else:
                # interleaved structures (ARM ARM VLDn/VSTn multiple): for each of regs_per register groups r,
                # registers d+r, d+r+inc, ... hold element streams interleaved in memory (VLD2 type 0011: regs=2, inc=2)
                elems = 64 // esz
                total = 8 * nstruct * regs_per
                fn = 'V_LDN' if L else 'V_STN'
                for r in range(regs_per):
                    rl = ['d%d' % (vd + r + inc * j) for j in range(nstruct)]
                    s += '{ uint64_t *_r[%d] = {%s}; %s(_a + %d, _r, %d, %d); } ' % (nstruct, ', '.join('&' + x for x in rl), fn, 8 * nstruct * r, nstruct, esz)
        else:
            sz = (hw2 >> 10) & 3
            n = (hw2 >> 8) & 3  # 0: VLD1, 1: VLD2, ...
            if sz == 3:
                # all lanes
                size = (hw2 >> 6) & 3
                T = (hw2 >> 5) & 1
                esz = 8 << size
                if n != 0 or not L:
                    raise Unsupported('vldN all lanes')
                regs = ['d%d' % (vd + k) for k in range(T + 1)]
                total = esz // 8
                ld = {8: 'LD8', 16: 'LD16', 32: 'LD32'}[esz]
                s += 'uint32_t _v = %s(_a); %s ' % (ld, ' '.join('%s = V_DUP%d(_v);' % (r, esz) for r in regs))
            else:
                esz = 8 << sz
                ia = (hw2 >> 4) & 0xf
                if sz == 0:
                    idx, inc = ia >> 1, 1
                elif sz == 1:
                    idx, inc = ia >> 2, 1 + ((ia >> 1) & 1)
                else:
                    idx, inc = ia >> 3, 1 + ((ia >> 2) & 1)
                nreg = n + 1
                total = nreg * esz // 8
                ld = {8: 'LD8', 16: 'LD16', 32: 'LD32'}[esz]
                st = {8: 'ST8', 16: 'ST16', 32: 'ST32'}[esz]
                mask = (1 << esz) - 1
                for j in range(nreg):
                    r = 'd%d' % (vd + inc * j)
                    off = j * esz // 8
                    if L:
                        s += '%s = (%s & ~(0x%xull << %d)) | ((uint64_t)%s(_a + %d) << %d); ' % (r, r, mask, esz * idx, ld, off, esz * idx)
                    else:
                        s += '%s(_a + %d, (uint32_t)(%s >> %d)); ' % (st, off, r, esz * idx)
        if rm == 13:
            s += '%s = _a + %d; ' % (base, total)
        elif rm != 15:
            s += '%s = _a + %s; ' % (base, rnn[rm])
        return s + '}', True


HEADER = '#include "cpu.h"\n'


def write_if_changed(path, text):
    """Keep the mtime of unchanged generated units so incremental builds only recompile what changed."""
    try:
        if open(path).read() == text:
            return
    except OSError:
        pass
    with open(path, 'w') as fo:
        fo.write(text)


def main():
    out_dir = sys.argv[1]
    only = None
    nunits = 64
    args = sys.argv[2:]
    if '--only' in args:
        only = set(args[args.index('--only') + 1].split(','))
    if '--units' in args:
        nunits = int(args[args.index('--units') + 1])
    ctx = Ctx()
    os.makedirs(out_dir, exist_ok=True)
    funcs = ctx.funcs
    if only:
        funcs = [f for f in funcs if f['name'] in only or ('%x' % f['addr']) in only]
    report = {}
    units = collections.defaultdict(list)
    for k, f in enumerate(funcs):
        fn = Fn(ctx, f)
        try:
            fn.analyze()
            code = fn.emit()
            if f['name'] in ctx.async_names:
                code += '\n\n' + fn.emit(async_mode=True)
        except Exception as e:
            import traceback
            code = 'void F_%s(CPU *c) { TRAP_UNIMPL(c, 0x%xu, "recompiler failure"); } /* %s */' % (hexa(f['addr']), f['addr'], repr(e).replace('*/', ''))
            fn.problems.append('EXC ' + repr(e) + traceback.format_exc()[-300:])
        report['%x' % f['addr']] = {'name': f['name'], 'addr': f['addr'], 'problems': fn.problems, 'calls': sorted(fn.calls), 'resume': sorted(fn.resume), 'ninsn': len(fn.insns)}
        units[k * nunits // len(funcs)].append(code)
        if k % 1000 == 0:
            print('..', k, file=sys.stderr)
    for u, codes in units.items():
        write_if_changed(os.path.join(out_dir, 'recomp_%03d.c' % u), HEADER + '\n\n'.join(codes) + '\n')
    # declarations, dispatch table, import stubs
    with open(os.path.join(out_dir, 'recomp_decls.h'), 'w') as fo:
        for f in ctx.funcs:
            fo.write('void F_%s(CPU *c);\n' % hexa(f['addr']))
            if f['name'] in ctx.async_names:
                fo.write('void A_%s(CPU *c);\n' % hexa(f['addr']))
    with open(os.path.join(out_dir, 'recomp_table.c'), 'w') as fo:
        fo.write(HEADER)
        fo.write('const struct FuncEntry recomp_funcs[] = {\n')
        for f in ctx.funcs:
            fo.write('  {0x%xu, 0x%xu, F_%s, "%s"},\n' % (f['addr'], f['end'], hexa(f['addr']), f['name']))
        fo.write('};\nconst unsigned recomp_nfuncs = %d;\n' % len(ctx.funcs))
        af = [f for f in ctx.funcs if f['name'] in ctx.async_names]
        fo.write('const struct AsyncEntry async_funcs[] = {\n')
        for f in af:
            fo.write('  {0x%xu, A_%s},\n' % (f['addr'], hexa(f['addr'])))
        fo.write('};\nconst unsigned async_nfuncs = %d;\n' % len(af))
    all_imports = sorted(set(sy.name for sy in ctx.img.symbols if not sy.is_stab and (sy.type & 0x0e) == 0 and (sy.type & 1) and sy.name))
    with open(os.path.join(out_dir, 'imports.h'), 'w') as fo:
        for n in all_imports:
            fo.write('void %s(CPU *c); /* %s */\n' % (hname(n), n))
    with open(os.path.join(out_dir, 'imports_weak.c'), 'w') as fo:
        fo.write(HEADER)
        for n in all_imports:
            fo.write('__attribute__((weak)) void %s(CPU *c) { hle_unimplemented(c, "%s"); }\n' % (hname(n), n))
        fo.write('const struct ImportEntry import_funcs[] = {\n')
        for n in all_imports:
            fo.write('  {"%s", %s},\n' % (n, hname(n)))
        fo.write('};\nconst unsigned import_nfuncs = %d;\n' % len(all_imports))
        stubl = sorted((a, n) for a, (sec, n, ix) in ctx.stubs.items() if sec == '__picsymbolstub4' and n)
        fo.write('const struct StubEntry stub_funcs[] = {\n')
        for a, n in stubl:
            fo.write('  {0x%xu, %s},\n' % (a, hname(n)))
        fo.write('};\nconst unsigned stub_nfuncs = %d;\n' % len(stubl))
        yl = sorted(n for n in all_imports if n in YIELD_IMPORTS)
        fo.write('const GuestFn async_imports[] = {%s};\nconst unsigned async_nimports = %d;\n' % (', '.join(hname(n) for n in yl) or '0', len(yl)))
    json.dump(report, open(os.path.join(out_dir, 'report.json'), 'w'), indent=0)
    nprob = sum(1 for v in report.values() if v['problems'])
    print('functions', len(report), 'with problems', nprob)
    c = collections.Counter()
    for v in report.values():
        for p in v['problems']:
            c[re.sub(r'[0-9a-f]{4,}', 'X', p.split('(')[0])[:60]] += 1
    for k, v in c.most_common(40):
        print(v, k)


if __name__ == '__main__':
    main()
