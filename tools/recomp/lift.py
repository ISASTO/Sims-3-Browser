"""Whole-program static recompilation of the original ARMv4T game to C.

The output is ordinary C that is compiled ahead of time to WebAssembly.  No
ARM instruction is interpreted at run time.  Each discovered original function
becomes one C function.  Guest registers live in C locals inside a function and
in the global CPU context (`CPU`) across calls; guest memory is a fixed region
of WebAssembly linear memory at a constant offset from the original addresses.

Control-flow model
  * BL to a known function: direct C call; afterwards the caller checks that
    the callee returned to the expected address.  Tail calls are performed by
    the caller's run-time loop (`rt_after`) so they never grow the C stack.
  * Returns, indirect jumps and indirect tail calls leave the function with
    `CPU.pc` set to the target.  Recognised jump tables are dispatched locally.
  * Any host-service import (an original external relocation slot) becomes a
    call to the JavaScript host by its slot index.
  * Suspension (for a browser frame or asset fetch) unwinds the C stack while
    recording call-site ids; resumption re-enters the same call sites.  All
    guest state lives in `CPU` and guest memory, so this needs no saved locals.
"""
import collections
import json
import struct
import sys
from pathlib import Path

from decode import (ADC, ADD, AND, BIC, CMN, CMP, EOR, LOGICAL, MOV, MVN, NO_RESULT, ORR, RSB, RSC, SBC, SUB, TEQ,
                    TST, DecodeError, decode_at)

FLAGS = ("n", "z", "c", "v")
COND_EXPR = {
    0: "z", 1: "!z", 2: "c", 3: "!c", 4: "n", 5: "!n", 6: "v", 7: "!v",
    8: "(c & !z)", 9: "(!c | z)", 10: "(n == v)", 11: "(n != v)", 12: "(!z & (n == v))", 13: "(z | (n != v))",
}
COND_READS = {0: "z", 1: "z", 2: "c", 3: "c", 4: "n", 5: "n", 6: "v", 7: "v", 8: "cz", 9: "cz", 10: "nv", 11: "nv",
              12: "znv", 13: "znv", 14: ""}

SWITCH8_HELPER_BYTES = bytes.fromhex("01c05ee50c0053e1")  # ldrb ip,[lr,#-1]; cmp r3,ip


def key(addr, thumb):
    return addr | (1 if thumb else 0)


def fname(k):
    return "F_%08x_%s" % (k & ~1, "T" if k & 1 else "A")


class Function:
    def __init__(self, k):
        self.key = k
        self.entry = k & ~1
        self.thumb = bool(k & 1)
        self.insns = {}
        self.order = []
        self.calls = {}          # call insn addr -> callee key (static BL)
        self.host_calls = {}     # call insn addr -> import index
        self.switch8 = {}        # BL addr -> (table addr, [targets])
        self.jump_tables = {}    # insn addr -> [target keys]
        self.indirect_calls = {}     # indirect branch addr -> return key (LR set from PC just before)
        self.tail_calls = {}     # insn addr -> callee key for static B/BX to a true entry
        self.static_bx = {}      # BX insn addr -> constant target key
        self.errors = {}         # addr -> message (decode failures on reachable paths)
        self.labels = set()
        self.local_targets = set()  # keys reachable through local computed jumps
        self.consumer = set()    # flags live at entry
        self.writes_flags = False


class Program:
    def __init__(self, image, roots, true_entries):
        self.im = image
        self.functions = {}
        self.true_entries = set(true_entries)
        self.pending = list(roots)
        self.producers = collections.defaultdict(set)  # callee key -> flags that callers need after return
        self.producer_reasons = collections.defaultdict(set)
        self.warnings = []
        self.switch8_helper = None
        helper = 0x4a1652fc
        if image.in_image(helper, 8) and image.code[helper - image.base:helper - image.base + 8] == SWITCH8_HELPER_BYTES:
            self.switch8_helper = helper

    # ------------------------------------------------------------ discovery
    def resolve_veneer(self, k):
        """Follow Thumb `bx pc` veneers and ARM `b` stubs to the effective target."""
        im = self.im
        for _ in range(4):
            addr, thumb = k & ~1, bool(k & 1)
            if thumb:
                if im.in_image(addr, 4) and im.u16(addr) == 0x4778 and (addr + 4) % 4 == 0:
                    k = addr + 4
                    continue
                return k
            if im.in_image(addr, 4):
                w = im.u32(addr)
                if (w >> 24) == 0xEA:  # unconditional ARM B
                    off = w & 0xFFFFFF
                    if off & 0x800000:
                        off -= 1 << 24
                    t = (addr + 8 + off * 4) & 0xFFFFFFFF
                    if t == addr:
                        return k
                    k = t
                    continue
            return k
        return k

    def import_index(self, k):
        addr = k & ~1
        idx = self.im.import_at.get(addr)
        if idx is None:
            return None
        imp = self.im.imports[idx]
        if k & 1 and imp["thumb"] == addr:
            return idx
        if not k & 1 and imp["arm"] == addr:
            return idx
        return None

    def explore(self, k):
        f = Function(k)
        im = self.im
        work = [k]
        seen = set()
        while work:
            ck = work.pop()
            if ck in seen:
                continue
            seen.add(ck)
            addr, thumb = ck & ~1, bool(ck & 1)
            if addr in f.insns:
                if f.insns[addr].thumb != thumb:
                    f.errors[addr] = "mode conflict"
                continue
            try:
                ins = decode_at(im, addr, thumb)
            except DecodeError as e:
                f.errors[addr] = str(e)
                continue
            f.insns[addr] = ins
            for succ in self.successors(f, ins):
                work.append(succ)
        f.order = sorted(f.insns)
        return f

    def local_or_tail(self, f, ins, tk):
        """Branch to key tk: local block or tail call to a true function entry."""
        if tk != f.key and tk in self.true_entries:
            f.tail_calls[ins.addr] = tk
            return []
        if self.import_index(tk) is not None:
            f.tail_calls[ins.addr] = tk
            return []
        if not self.im.in_image(tk & ~1, 2):
            f.errors[ins.addr] = "branch outside image %08x" % tk
            return []
        f.labels.add(tk & ~1)
        return [tk]

    def prev_insn(self, f, ins):
        im = self.im
        step = 2 if ins.thumb else 4
        p = ins.addr - step
        try:
            return decode_at(im, p, ins.thumb)
        except DecodeError:
            return None

    def is_mov_lr_pc(self, p, cond=14):
        return (p is not None and not p.thumb and p.kind == "dp" and p.op == MOV and p.rd == 14 and not p.s
                and p.cond in (14, cond) and p.sh["t"] == "rsi" and p.sh["rm"][0] == "k" and p.sh["amount"] == 0
                and p.sh["shift"] == 0)

    def successors(self, f, ins):
        thumb = ins.thumb
        nxt = key(ins.next, thumb)
        conditional = ins.cond != 14
        kind = ins.kind
        out = []
        if kind == "b":
            tk = key(ins.target, ins.tthumb)
            if ins.link:
                callee = tk
                res = self.resolve_veneer(callee)
                if self.switch8_helper is not None and res == self.switch8_helper:
                    return self.switch8_successors(f, ins)
                imp = self.import_index(callee)
                if imp is None:
                    imp2 = self.import_index(res)
                    if imp2 is not None:
                        imp = imp2
                if imp is not None:
                    f.host_calls[ins.addr] = imp
                else:
                    f.calls[ins.addr] = callee
                    if callee not in self.functions and callee not in self.true_entries:
                        self.true_entries.add(callee)
                    self.pending.append(callee)
                f.labels.add(ins.next)
                return [nxt]
            out += self.local_or_tail(f, ins, tk)
            if conditional:
                f.labels.add(ins.next)
                out.append(nxt)
            return out
        if kind == "bx":
            const = ins.rm[1] if ins.rm[0] == "k" else self.static_reg_value(f, ins, ins.rm[1])
            if const is not None:
                v = const
                tk = key(v & ~1, True) if v & 1 else key(v & ~3, False)
                f.static_bx[ins.addr] = tk
                out += self.local_or_tail(f, ins, tk)
            else:
                ret = self.link_value(f, ins)
                if ret is not None:
                    f.indirect_calls[ins.addr] = ret
                    f.labels.add(ret & ~1)
                    out.append(ret)
            if conditional:
                f.labels.add(ins.next)
                out.append(nxt)
            return out
        writes_pc = False
        if kind == "dp" and ins.rd == 15:
            writes_pc = True
        elif kind == "mem" and ins.load and ins.rd == 15:
            writes_pc = True
            tbl = self.arm_ldr_table(f, ins)
            if tbl is not None:
                f.jump_tables[ins.addr] = tbl
                for tk in tbl:
                    f.labels.add(tk & ~1)
                    f.local_targets.add(tk)
                out += tbl
        elif kind == "block" and ins.load and 15 in ins.regs:
            writes_pc = True
        if writes_pc:
            ret = self.link_value(f, ins)
            if ret is not None:
                f.indirect_calls[ins.addr] = ret
                f.labels.add(ret & ~1)
                out.append(ret)
            if kind == "dp" and ins.rn is not None and ins.rn[0] == "k" and ins.op == ADD and not thumb:
                tbl = self.arm_add_table(f, ins)
                if tbl:
                    f.jump_tables[ins.addr] = tbl
                    for tk in tbl:
                        f.labels.add(tk & ~1)
                        f.local_targets.add(tk)
                    out += tbl
            if thumb and kind == "dp" and ins.rn is not None and ins.rn[0] == "k" and ins.sh["t"] == "imm":
                pass
            if conditional:
                f.labels.add(ins.next)
                out.append(nxt)
            return out
        if kind == "undef" or kind == "cop":
            return []
        return [nxt]

    def link_value(self, f, ins):
        """Return key if LR was just set from PC (MOV LR, PC / ADD LR, PC, #k)
        in the straight-line ARM code before this indirect branch."""
        if ins.thumb:
            return None
        a = ins.addr
        for _ in range(64):
            a -= 4
            try:
                p = decode_at(self.im, a, False)
            except DecodeError:
                return None
            if a in f.labels and a != ins.addr:
                # another path could enter here; stop unless LR is set at a
                pass
            if p.cond not in (14, ins.cond):
                if p.kind == "dp" and p.rd == 14:
                    return None
                if p.kind in ("b", "bx") or (p.kind == "dp" and p.rd == 15):
                    return None
                continue
            if p.kind == "dp" and p.rd == 14:
                if p.op == MOV and self.is_mov_lr_pc(p, ins.cond):
                    return p.sh["rm"][1]
                if p.op in (ADD, SUB) and p.rn is not None and p.rn[0] == "k" and p.sh["t"] == "imm" and not p.s:
                    v = (p.rn[1] + p.sh["v"]) if p.op == ADD else (p.rn[1] - p.sh["v"])
                    return v & 0xFFFFFFFF
                return None
            if p.kind in ("b", "bx", "swi", "undef", "cop"):
                return None
            if p.kind == "dp" and p.rd == 15:
                return None
            if p.kind == "mem" and p.load and p.rd in (14, 15):
                return None
            if p.kind == "block" and p.load and (14 in p.regs or 15 in p.regs):
                return None
            if p.kind in ("mul", "mull") and 14 in (p.f.get("rd"), p.f.get("rdlo"), p.f.get("rdhi")):
                return None
        return None

    def static_reg_value(self, f, ins, reg):
        """Constant written to `reg` by the immediately preceding instruction."""
        p = self.prev_insn(f, ins)
        if p is None or p.cond != 14:
            return None
        if p.kind == "dp" and p.rd == reg and p.rn is not None and p.rn[0] == "k" and p.sh["t"] == "imm" and not p.s:
            if p.op == ADD:
                return (p.rn[1] + p.sh["v"]) & 0xFFFFFFFF
            if p.op == SUB:
                return (p.rn[1] - p.sh["v"]) & 0xFFFFFFFF
        if p.kind == "mem" and p.load and p.rd == reg and p.width == 4 and p.rn[0] == "k" and p.off[0] == "k" and not p.wb:
            a = (p.rn[1] + (p.off[1] if p.up else -p.off[1])) & 0xFFFFFFFF
            if self.im.in_image(a, 4) and a < 0x4a172a10:
                return self.im.u32(a)
        return None

    def switch8_successors(self, f, ins):
        im = self.im
        table = ins.next  # return address; lr = table | 1
        if not im.in_image(table, 1):
            f.errors[ins.addr] = "switch table outside image"
            return []
        count = im.u8(table)
        targets = []
        for i in range(count + 1):
            off = im.u8(table + 1 + i)
            targets.append(key((table + 2 * off) & ~1, True))
        f.switch8[ins.addr] = (table, targets)
        for tk in targets:
            f.labels.add(tk & ~1)
            f.local_targets.add(tk)
        return list(dict.fromkeys(targets))

    def arm_ldr_table(self, f, ins):
        # LDRcc PC, [PC, Rm, LSL #2] followed by B default and an address table
        if ins.thumb or ins.rn[0] != "k" or ins.off[0] != "r" or ins.shift != (0, 2) or not ins.pre or not ins.up:
            return None
        base = ins.addr + 8
        count = self.find_cmp_bound(f, ins, ins.off[1])
        im = self.im
        targets = []
        if count is None:
            # Fall back to consecutive relocated words pointing near this code.
            a = base
            while a in im.reloc_set and len(targets) < 512:
                v = im.u32(a)
                if not (abs(v - ins.addr) < 0x10000):
                    break
                targets.append(v)
                a += 4
            if not targets:
                self.warnings.append("unbounded ldr pc table at %08x" % ins.addr)
                return None
        else:
            for i in range(count):
                targets.append(im.u32(base + 4 * i))
        keys = []
        for v in targets:
            keys.append(key(v & ~1, True) if v & 1 else key(v & ~3, False))
        return list(dict.fromkeys(keys))

    def find_cmp_bound(self, f, ins, reg):
        """Search backwards in straight-line code for CMP reg, #imm."""
        a = ins.addr
        for _ in range(12):
            a -= 4
            try:
                p = decode_at(self.im, a, False)
            except DecodeError:
                return None
            if p.kind == "dp" and p.op == CMP and p.rn == ("r", reg) and p.sh["t"] == "imm" and p.cond == 14:
                if ins.cond == 3:  # LO/CC
                    return p.sh["v"]
                if ins.cond == 9:  # LS
                    return p.sh["v"] + 1
                return None
            if p.kind == "b" or p.kind == "bx":
                return None
            if p.kind == "dp" and p.rd == reg:
                return None
            if p.kind == "mem" and p.load and p.rd == reg:
                return None
        return None

    def arm_add_table(self, f, ins):
        # ADDcc PC, PC, Rm, LSL #k  (branch table of k-sized entries)
        sh = ins.sh
        if sh["t"] != "rsi" or sh["shift"] != 0 or sh["rm"][0] != "r":
            return None
        reg = sh["rm"][1]
        step = 1 << sh["amount"]
        base = ins.addr + 8
        count = self.find_cmp_bound(f, ins, reg)
        if count is not None:
            return [key(base + i * step, False) for i in range(count)]
        values = self.masked_values(ins, reg)
        if values is None:
            self.warnings.append("unbounded add pc table at %08x" % ins.addr)
            return None
        return list(dict.fromkeys(key(base + v * step, False) for v in values))

    def masked_values(self, ins, reg):
        """Enumerate values of `reg` produced by AND reg, rX, #mask followed by
        straight-line arithmetic on reg with constants (unrolled-loop entry)."""
        chain = []
        a = ins.addr
        for _ in range(10):
            a -= 4
            try:
                p = decode_at(self.im, a, False)
            except DecodeError:
                return None
            if p.kind != "dp" or p.cond != 14:
                if p.kind in ("b", "bx") or (p.kind == "mem" and p.load and p.rd == reg):
                    return None
                continue
            if p.rd != reg:
                continue
            if p.op == AND and p.sh["t"] == "imm" and ((p.sh["v"] + 1) & p.sh["v"]) == 0 and p.sh["v"] < 256:
                vals = []
                for v0 in range(p.sh["v"] + 1):
                    v = v0
                    for q in reversed(chain):
                        v = self.eval_self_op(q, reg, v)
                        if v is None:
                            return None
                    vals.append(v)
                return vals
            chain.append(p)
        return None

    @staticmethod
    def eval_self_op(q, reg, v):
        sh = q.sh
        if q.rn is not None and q.rn != ("r", reg):
            return None
        if sh["t"] == "imm":
            b = sh["v"]
        elif sh["t"] == "rsi" and sh["rm"] == ("r", reg) and sh["shift"] == 0:
            b = (v << sh["amount"]) & 0xFFFFFFFF
        else:
            return None
        ops = {EOR: lambda x, y: x ^ y, ADD: lambda x, y: x + y, SUB: lambda x, y: x - y,
               RSB: lambda x, y: y - x, ORR: lambda x, y: x | y, AND: lambda x, y: x & y,
               MOV: lambda x, y: y}
        if q.op not in ops:
            return None
        return ops[q.op](v, b) & 0xFFFFFFFF

    def run(self):
        while self.pending:
            k = self.pending.pop()
            if k in self.functions:
                continue
            if self.import_index(k) is not None:
                continue
            addr = k & ~1
            if not self.im.in_image(addr, 2) or (not k & 1 and addr & 3):
                self.warnings.append("bad entry %08x" % k)
                continue
            self.functions[k] = self.explore(k)
        self.analyse_flags()

    # -------------------------------------------------------- flag liveness
    @staticmethod
    def insn_flags(ins):
        """Return (reads, writes) flag sets for an instruction (excluding calls)."""
        reads = set(COND_READS[ins.cond])
        writes = set()
        k = ins.kind
        if k == "dp":
            op = ins.op
            sh = ins.sh
            if sh["t"] == "rsi" and sh["shift"] == 3 and sh["amount"] == 0:
                reads.add("c")  # RRX
            if op in (ADC, SBC, RSC):
                reads.add("c")
            if ins.s:
                if op in LOGICAL:
                    writes |= {"n", "z"}
                    if sh["t"] == "imm":
                        if sh["carry"] is not None:
                            writes.add("c")
                    elif sh["t"] == "rsi":
                        if sh["shift"] == 0 and sh["amount"] == 0:
                            pass
                        else:
                            writes.add("c")
                    else:
                        reads.add("c")  # may be unchanged when shift amount is zero
                else:
                    writes |= {"n", "z", "c", "v"}
        elif k == "mul" or k == "mull":
            if ins.s:
                writes |= {"n", "z"}
        elif k == "mrs":
            reads |= set(FLAGS)
        elif k == "msr":
            if ins.mask & 8:
                writes |= set(FLAGS)
        elif k == "mem":
            if ins.shift is not None and ins.shift[0] == 3 and ins.shift[1] == 0:
                reads.add("c")
        if ins.cond != 14:
            # conditional writes do not kill
            return reads, set(), writes
        return reads, writes, writes

    def analyse_flags(self):
        """Determine flag-returning (producer) and flag-consuming functions.

        AAPCS leaves the flags undefined across calls; a few runtime helpers
        (soft-float compares) return their result in the flags.  A callee is a
        producer only when a caller reads a flag in the straight-line code after
        the call before writing it, or when a producer's own exit flags come
        straight from a call or tail call.  Consumers read flags at entry before
        writing them (hand-written helpers only).
        """
        scans = {}
        for f in self.functions.values():
            for a in list(f.calls) + list(f.tail_calls):
                scans[(f.key, a)] = self.scan_after(f, a)
        changed = True
        rounds = 0
        while changed and rounds < 100:
            changed = False
            rounds += 1
            for f in self.functions.values():
                fprod = self.producers.get(f.key, set())
                for a, callee in f.calls.items():
                    direct, reaches_exit, written = scans[(f.key, a)]
                    need = set(direct)
                    if reaches_exit:
                        need |= (fprod - written)
                    if need and not need <= self.producers[callee]:
                        self.producers[callee] |= need
                        self.producer_reasons[callee].add(("call", a, "".join(sorted(need))))
                        changed = True
                for a, callee in f.tail_calls.items():
                    if fprod and not fprod <= self.producers[callee]:
                        self.producers[callee] |= fprod
                        self.producer_reasons[callee].add(("tail", a, "".join(sorted(fprod))))
                        changed = True
        changed = True
        rounds = 0
        while changed and rounds < 50:
            changed = False
            rounds += 1
            for f in self.functions.values():
                if self.flag_liveness(f):
                    changed = True

    def scan_after(self, f, a):
        """Flags read after the call at `a` in straight-line code before being written."""
        ins = f.insns[a]
        if a in f.tail_calls:
            return set(), False, set()
        direct = set()
        written = set()
        cur = ins.next
        for _ in range(64):
            nx = f.insns.get(cur)
            if nx is None:
                return direct, False, written
            reads, kills, writes = self.insn_flags(nx)
            direct |= (reads - written)
            written |= kills
            k = nx.kind
            if k == "b" and nx.link:
                return direct, False, written
            pc_write = (k == "bx" or (k == "dp" and nx.rd == 15) or (k == "mem" and nx.load and nx.rd == 15)
                        or (k == "block" and nx.load and 15 in nx.regs))
            if pc_write:
                if nx.addr in f.static_bx and nx.addr not in f.tail_calls and nx.cond == 14:
                    cur = f.static_bx[nx.addr] & ~1
                    continue
                if nx.addr in f.indirect_calls or nx.addr in f.jump_tables:
                    return direct, False, written
                return direct, True, written
            if k == "b":
                if nx.cond != 14:
                    return direct, False, written
                if nx.addr in f.tail_calls:
                    return direct, False, written
                cur = nx.target
                continue
            if k in ("undef", "cop", "swi"):
                return direct, False, written
            cur = nx.next
        return direct, False, written

    def flag_liveness(self, f):
        """Backward liveness from entry to find flags a function consumes."""
        info = {}
        for a in f.order:
            ins = f.insns[a]
            reads, kills, writes = self.insn_flags(ins)
            if writes:
                f.writes_flags = True
            succ = []
            call = None
            tail = None
            k = ins.kind
            if a in f.switch8:
                succ = [t & ~1 for t in f.switch8[a][1]]
                kills = {"n", "z", "c", "v"}
                f.writes_flags = True
            elif k == "b" and ins.link:
                succ = [ins.next]
                call = f.calls.get(a, -1)
            elif k == "b":
                if a in f.tail_calls:
                    tail = f.tail_calls[a]
                else:
                    succ = [ins.target]
                if ins.cond != 14:
                    succ.append(ins.next)
            else:
                pc_write = (k == "bx" or (k == "dp" and ins.rd == 15) or (k == "mem" and ins.load and ins.rd == 15)
                            or (k == "block" and ins.load and 15 in ins.regs))
                if pc_write:
                    if a in f.tail_calls:
                        tail = f.tail_calls[a]
                    elif a in f.static_bx:
                        succ = [f.static_bx[a] & ~1]
                    elif a in f.jump_tables:
                        succ = [t & ~1 for t in f.jump_tables[a]]
                    elif a in f.indirect_calls:
                        succ = [f.indirect_calls[a] & ~1]
                        call = -1
                    if ins.cond != 14 and ins.next not in succ:
                        succ.append(ins.next)
                elif k in ("undef", "cop"):
                    succ = []
                else:
                    succ = [ins.next]
            succ = [x for x in succ if x in f.insns]
            info[a] = (reads, kills, succ, call, tail, ins.cond != 14)
        live_in = {a: set() for a in f.order}
        changed_local = True
        it = 0
        while changed_local and it < 500:
            changed_local = False
            it += 1
            for a in reversed(f.order):
                reads, kills, succ, call, tail, conditional = info[a]
                out = set()
                for x in succ:
                    out |= live_in[x]
                if call is not None or tail is not None:
                    callee = self.functions.get(call if call is not None else tail)
                    gen = set(callee.consumer) if callee else set()
                    if tail is not None:
                        new = gen | reads | (out if conditional else set())
                    else:
                        # flags are not preserved across a call
                        new = gen | reads | (out if conditional else set())
                else:
                    new = (out - kills) | reads
                if new != live_in[a]:
                    live_in[a] = new
                    changed_local = True
        entry_live = live_in.get(f.entry, set())
        if not entry_live <= f.consumer:
            f.consumer |= entry_live
            return True
        return False


# ================================================================ emission

def op_expr(op):
    if op[0] == "k":
        return "0x%xu" % op[1]
    return "r%d" % op[1]


class Emitter:
    def __init__(self, prog, f, literal_ok):
        self.prog = prog
        self.f = f
        self.lines = []
        self.used = set()
        self.written = set()
        self.sites = []  # call-site labels for rewinding
        self.literal_ok = literal_ok
        self.need_dyn = False
        self.need_prop = False
        self.literals = 0

    def reg(self, n, write=False):
        if n == 15:
            raise ValueError("pc as register")
        self.used.add(n)
        if write:
            self.written.add(n)
        return "r%d" % n

    def opnd(self, op):
        if op[0] == "k":
            return "0x%xu" % op[1]
        return self.reg(op[1])

    def emit(self, s):
        self.lines.append(s)

    def goto(self, addr, thumb):
        if addr in self.f.insns or addr in self.f.labels:
            return "goto L_%08x;" % addr
        return "{ STORE_W(); rt_trap(0x%xu); return; }" % key(addr, thumb)

    # -- helpers for exits
    def exit_to(self, expr):
        self.emit("{ tgt = %s; goto DYN; }" % expr)
        self.need_dyn = True

    def static_exit(self, k):
        self.emit("{ tgt = 0x%xu; goto EXIT; }" % k)

    def flag_stores_for(self, callee_key):
        callee = self.prog.functions.get(callee_key)
        if callee is None:
            return ""
        return "".join("CPU.%s = %s; " % (fl, fl) for fl in FLAGS if fl in callee.consumer)

    def flag_loads_for(self, callee_key):
        need = self.prog.producers.get(callee_key, set())
        return "".join("%s = CPU.%s; " % (fl, fl) for fl in FLAGS if fl in need)

    def call_site(self, call_expr, ret_key, callee_key=None, host=False):
        k = len(self.sites)
        self.sites.append((k, not host))
        pre = self.flag_stores_for(callee_key) if callee_key is not None else ""
        post = self.flag_loads_for(callee_key) if callee_key is not None else ""
        self.emit("STORE_W(); %s" % pre)
        self.emit("CS%d: %s;" % (k, call_expr))
        self.emit("if (UNWINDING) { rw_push(%d); return; }" % (2 * k))
        if not host:
            self.emit("if (CPU.pc != 0x%xu) { CSL%d: rt_after(0x%xu); if (UNWINDING) { rw_push(%d); return; }"
                      " if (CPU.pc != 0x%xu) { LOAD_U(); tgt = CPU.pc; goto PROP; } }" % (ret_key, k, ret_key, 2 * k + 1, ret_key))
            self.need_prop = True
        self.emit("LOAD_U(); %s" % post)

    def indirect_call_site(self, tgt_expr, ret_key):
        k = len(self.sites)
        self.sites.append((k, True))
        self.emit("CPU.pc = %s; STORE_W();" % tgt_expr)
        self.emit("CS%d: CSL%d: rt_after(0x%xu); if (UNWINDING) { rw_push(%d); return; }" % (k, k, ret_key, 2 * k + 1))
        self.emit("if (CPU.pc != 0x%xu) { LOAD_U(); tgt = CPU.pc; goto PROP; }" % ret_key)
        self.emit("LOAD_U();")
        self.need_prop = True

    # -- operand helpers
    def shifter(self, sh, need_carry):
        """Return (prelude lines, value expr, carry expr or None meaning unchanged)."""
        t = sh["t"]
        if t == "imm":
            v = sh["v"]
            carry = None if sh["carry"] is None else str(sh["carry"])
            return [], "0x%xu" % v, carry
        if t == "rsi":
            rm = self.opnd(sh["rm"])
            st, amt = sh["shift"], sh["amount"]
            if st == 0:
                if amt == 0:
                    return [], rm, None
                return [], "(%s << %d)" % (rm, amt), "((%s >> %d) & 1)" % (rm, 32 - amt)
            if st == 1:
                if amt == 0:
                    return [], "0u", "(%s >> 31)" % rm
                return [], "(%s >> %d)" % (rm, amt), "((%s >> %d) & 1)" % (rm, amt - 1)
            if st == 2:
                if amt == 0:
                    return [], "(uint32_t)((int32_t)%s >> 31)" % rm, "(%s >> 31)" % rm
                return [], "(uint32_t)((int32_t)%s >> %d)" % (rm, amt), "((%s >> %d) & 1)" % (rm, amt - 1)
            if amt == 0:  # RRX
                return [], "((c << 31) | (%s >> 1))" % rm, "(%s & 1)" % rm
            return [], "ROR32(%s, %d)" % (rm, amt), "((%s >> %d) & 1)" % (rm, amt - 1)
        rm = self.opnd(sh["rm"])
        rs = self.opnd(sh["rs"])
        name = ["LSL", "LSR", "ASR", "ROR"][sh["shift"]]
        if need_carry:
            return [], "%s_C(%s, %s, &sc)" % (name, rm, rs), "sc"
        return [], "%sR(%s, %s)" % (name, rm, rs), None

    # -- instruction emitters
    def emit_insn(self, ins):
        cond = ins.cond
        body_start = len(self.lines)
        if cond != 14:
            self.emit("if (%s) {" % COND_EXPR[cond])
        getattr(self, "i_" + ins.kind)(ins)
        if cond != 14:
            self.emit("}")

    def i_dp(self, ins):
        op = ins.op
        s = ins.s
        logical = op in LOGICAL
        need_carry = bool(s and logical)
        _, b, carry = self.shifter(ins.sh, need_carry)
        a = self.opnd(ins.rn) if ins.rn is not None else None
        rd = ins.rd
        pc_dest = rd == 15
        dst = "tgt" if pc_dest else (self.reg(rd, True) if rd is not None else None)
        A, B = "a", "b"
        forms = {
            AND: "(a & b)", EOR: "(a ^ b)", ORR: "(a | b)", BIC: "(a & ~b)", MOV: "b", MVN: "(~b)",
            TST: "(a & b)", TEQ: "(a ^ b)", ADD: "(a + b)", CMN: "(a + b)", SUB: "(a - b)", CMP: "(a - b)",
            RSB: "(b - a)", ADC: "(a + b + oc)", SBC: "(a - b - (oc ^ 1u))", RSC: "(b - a - (oc ^ 1u))",
        }
        res = forms[op]
        if not s:
            if dst is None:
                return
            pre = []
            if a is not None:
                pre.append("uint32_t a = %s;" % a)
            pre.append("uint32_t b = %s;" % b)
            if op in (ADC, SBC, RSC):
                pre.append("uint32_t oc = c;")
            self.emit("{ %s %s = %s; }" % (" ".join(pre), dst, res))
        else:
            pre = []
            if "&sc" in b:
                pre.append("uint32_t sc = c;")
            if a is not None:
                pre.append("uint32_t a = %s;" % a)
            pre.append("uint32_t b = %s;" % b)
            pre.append("uint32_t oc = c; (void)oc;")
            if logical and carry is not None and carry != "sc":
                pre.append("uint32_t scr = %s;" % carry)
            body = "uint32_t res = %s;" % res
            fl = "n = res >> 31; z = (res == 0);"
            if logical:
                if carry == "sc":
                    fl += " c = sc;"
                elif carry is not None:
                    fl += " c = scr;"
            elif op in (ADD, CMN):
                fl += " c = (res < a); v = ((~(a ^ b) & (a ^ res)) >> 31);"
            elif op in (SUB, CMP):
                fl += " c = (a >= b); v = (((a ^ b) & (a ^ res)) >> 31);"
            elif op == RSB:
                fl += " c = (b >= a); v = (((b ^ a) & (b ^ res)) >> 31);"
            elif op == ADC:
                fl += " c = (uint32_t)(((uint64_t)a + b + oc) >> 32); v = ((~(a ^ b) & (a ^ res)) >> 31);"
            elif op == SBC:
                fl += " c = ((uint64_t)a >= (uint64_t)b + (oc ^ 1u)); v = (((a ^ b) & (a ^ res)) >> 31);"
            elif op == RSC:
                fl += " c = ((uint64_t)b >= (uint64_t)a + (oc ^ 1u)); v = (((b ^ a) & (b ^ res)) >> 31);"
            assign = ""
            if dst is not None:
                assign = " %s = res;" % dst
            self.emit("{ %s %s %s%s }" % (" ".join(pre), body, fl, assign))
        if pc_dest:
            if ins.thumb:
                self.emit("tgt |= 1u;")
            self.pc_write(ins)

    def pc_write(self, ins):
        """Dynamic transfer: tgt holds the target (bit0 selects Thumb)."""
        f = self.f
        if ins.addr in f.indirect_calls:
            ret = f.indirect_calls[ins.addr]
            self.indirect_call_site("tgt", ret)
            self.emit(self.goto(ret & ~1, bool(ret & 1)))
            return
        if ins.addr in f.jump_tables:
            cases = " ".join("case 0x%xu: goto L_%08x;" % (tk, tk & ~1) for tk in f.jump_tables[ins.addr])
            self.emit("switch (tgt) { %s default: break; }" % cases)
        self.emit("goto DYN;")
        self.need_dyn = True

    def i_mul(self, ins):
        rm, rs = self.reg(ins.rm), self.reg(ins.rs)
        acc = " + %s" % self.reg(ins.rn) if ins.rn is not None else ""
        rd = self.reg(ins.rd, True)
        if ins.s:
            self.emit("{ uint32_t res = %s * %s%s; n = res >> 31; z = (res == 0); %s = res; }" % (rm, rs, acc, rd))
        else:
            self.emit("%s = %s * %s%s;" % (rd, rm, rs, acc))

    def i_mull(self, ins):
        rm, rs = self.reg(ins.rm), self.reg(ins.rs)
        lo, hi = self.reg(ins.rdlo), self.reg(ins.rdhi)
        if ins.signed:
            prod = "(uint64_t)((int64_t)(int32_t)%s * (int64_t)(int32_t)%s)" % (rm, rs)
        else:
            prod = "((uint64_t)%s * (uint64_t)%s)" % (rm, rs)
        acc = " + (((uint64_t)%s << 32) | %s)" % (hi, lo) if ins.acc else ""
        self.reg(ins.rdlo, True)
        self.reg(ins.rdhi, True)
        fl = "n = (uint32_t)(t >> 63); z = (t == 0); " if ins.s else ""
        self.emit("{ uint64_t t = %s%s; %s%s = (uint32_t)t; %s = (uint32_t)(t >> 32); }" % (prod, acc, fl, lo, hi))

    def address_expr(self, ins):
        """Return (effective address expr, writeback expr or None)."""
        base = self.opnd(ins.rn)
        off = ins.off
        if off[0] == "k":
            ov = off[1]
            if ov == 0:
                offexpr = None
            else:
                offexpr = "0x%xu" % ov
        else:
            rm = self.opnd(off)
            if ins.shift is None:
                offexpr = rm
            else:
                st, amt = ins.shift
                if st == 0:
                    offexpr = rm if amt == 0 else "(%s << %d)" % (rm, amt)
                elif st == 1:
                    offexpr = "0u" if amt == 0 else "(%s >> %d)" % (rm, amt)
                elif st == 2:
                    offexpr = "(uint32_t)((int32_t)%s >> %d)" % (rm, 31 if amt == 0 else amt)
                else:
                    offexpr = "((c << 31) | (%s >> 1))" % rm if amt == 0 else "ROR32(%s, %d)" % (rm, amt)
        if offexpr is None:
            addr = base
        else:
            addr = "(%s %s %s)" % (base, "+" if ins.up else "-", offexpr)
        if ins.pre:
            ea = addr
            wb = addr if ins.wb else None
        else:
            ea = base
            wb = addr
        return ea, wb

    def i_mem(self, ins):
        im = self.prog.im
        # PC-relative literal load: inline the original constant.
        if ins.load and ins.rn[0] == "k" and ins.off[0] == "k" and not ins.wb:
            a = (ins.rn[1] + (ins.off[1] if ins.up else -ins.off[1])) & 0xFFFFFFFF
            if self.literal_ok(a, ins.width):
                if ins.width == 4:
                    val = im.u32(a)
                elif ins.width == 2:
                    val = im.u16(a)
                    if ins.signed and val & 0x8000:
                        val |= 0xFFFF0000
                else:
                    val = im.u8(a)
                    if ins.signed and val & 0x80:
                        val |= 0xFFFFFF00
                self.literals += 1
                if ins.rd == 15:
                    self.emit("tgt = 0x%xu;" % val)
                    self.pc_write(ins)
                else:
                    self.emit("%s = 0x%xu;" % (self.reg(ins.rd, True), val))
                return
        ea, wb = self.address_expr(ins)
        size = ins.width
        if ins.load:
            fn = {(4, 0): "LD32", (2, 0): "LD16", (1, 0): "LD8", (2, 1): "LDS16", (1, 1): "LDS8"}[(size, ins.signed)]
            parts = ["uint32_t ea = %s;" % ea, "uint32_t val = %s(ea);" % fn]
            if wb is not None and ins.rn[0] == "r":
                parts.append("%s = %s;" % (self.reg(ins.rn[1], True), wb))
            if ins.rd == 15:
                parts.append("tgt = val;")
                self.emit("{ %s }" % " ".join(parts))
                self.pc_write(ins)
            else:
                parts.append("%s = val;" % self.reg(ins.rd, True))
                self.emit("{ %s }" % " ".join(parts))
        else:
            fn = {4: "ST32", 2: "ST16", 1: "ST8"}[size]
            if ins.rd == 15:
                val = "0x%xu" % ((ins.addr + 12) & 0xFFFFFFFF)
            else:
                val = self.reg(ins.rd)
            parts = ["uint32_t ea = %s;" % ea, "uint32_t val = %s;" % val, "%s(ea, val);" % fn]
            if wb is not None and ins.rn[0] == "r":
                parts.append("%s = %s;" % (self.reg(ins.rn[1], True), wb))
            self.emit("{ %s }" % " ".join(parts))

    def i_block(self, ins):
        rn = self.reg(ins.rn)
        regs = ins.regs
        n = len(regs)
        mode = ins.mode
        start = {"ia": rn, "ib": "(%s + 4u)" % rn, "da": "(%s - %du)" % (rn, 4 * n - 4), "db": "(%s - %du)" % (rn, 4 * n)}[mode]
        wbv = "(%s + %du)" % (rn, 4 * n) if mode[0] == "i" else "(%s - %du)" % (rn, 4 * n)
        parts = ["uint32_t ea = %s;" % start]
        if ins.load:
            for i, r in enumerate(regs):
                parts.append("uint32_t v%d = LD32(ea + %du);" % (r, 4 * i))
            if ins.wb and ins.rn not in regs:
                parts.append("%s = %s;" % (self.reg(ins.rn, True), wbv))
            for r in regs:
                if r == 15:
                    parts.append("tgt = v15;")
                else:
                    parts.append("%s = v%d;" % (self.reg(r, True), r))
            self.emit("{ %s }" % " ".join(parts))
            if 15 in regs:
                self.pc_write(ins)
        else:
            for i, r in enumerate(regs):
                if r == 15:
                    v = "0x%xu" % ((ins.addr + 12) & 0xFFFFFFFF)
                else:
                    v = self.reg(r)
                parts.append("ST32(ea + %du, %s);" % (4 * i, v))
            if ins.wb:
                parts.append("%s = %s;" % (self.reg(ins.rn, True), wbv))
            self.emit("{ %s }" % " ".join(parts))

    def i_swp(self, ins):
        rn, rm = self.reg(ins.rn), self.reg(ins.rm)
        rd = self.reg(ins.rd, True)
        if ins.byte:
            self.emit("{ uint32_t a = %s, t = LD8(a); ST8(a, %s); %s = t; }" % (rn, rm, rd))
        else:
            self.emit("{ uint32_t a = %s, t = LD32(a); ST32(a, %s); %s = t; }" % (rn, rm, rd))

    def i_mrs(self, ins):
        self.emit("%s = (n << 31) | (z << 30) | (c << 29) | (v << 28) | 0x10u;" % self.reg(ins.rd, True))

    def i_msr(self, ins):
        if ins.mask & 8:
            src = self.opnd(ins.src)
            self.emit("{ uint32_t t = %s; n = t >> 31; z = (t >> 30) & 1; c = (t >> 29) & 1; v = (t >> 28) & 1; }" % src)

    def i_swi(self, ins):
        self.emit("STORE_W(); rt_swi(0x%xu, 0x%xu); LOAD_U();" % (ins.addr | (1 if ins.thumb else 0), ins.imm))

    def i_undef(self, ins):
        self.emit("STORE_W(); rt_undefined(0x%xu); return;" % (ins.addr | (1 if ins.thumb else 0)))

    def i_cop(self, ins):
        self.i_undef(ins)

    def i_bx(self, ins):
        f = self.f
        if ins.addr in f.tail_calls:
            self.emit_tail(f.tail_calls[ins.addr])
            return
        if ins.addr in f.static_bx:
            tk = f.static_bx[ins.addr]
            self.emit(self.goto(tk & ~1, bool(tk & 1)))
            return
        self.emit("tgt = %s;" % self.opnd(ins.rm))
        self.pc_write(ins)

    def emit_tail(self, tk):
        callee = self.prog.functions.get(tk)
        pre = ""
        if callee is not None:
            pre = "".join("CPU.%s = %s; " % (fl, fl) for fl in FLAGS if fl in callee.consumer)
        self.emit("{ %stgt = 0x%xu; goto EXIT; }" % (pre, tk))

    def i_b(self, ins):
        f = self.f
        a = ins.addr
        if ins.link:
            ret = key(ins.next, ins.thumb)
            lr = self.reg(14, True)
            if a in f.switch8:
                table, targets = f.switch8[a]
                self.emit("%s = 0x%xu;" % (lr, (table | 1)))
                r3, r12 = self.reg(3, True), self.reg(12, True)
                cases = " ".join("case %du: goto L_%08x;" % (i, t & ~1) for i, t in enumerate(targets))
                self.emit("{ uint32_t idx = %s, cnt = 0x%xu, res = idx - cnt; n = res >> 31; z = (res == 0); c = (idx >= cnt);"
                          " v = (((idx ^ cnt) & (idx ^ res)) >> 31); uint32_t sel = idx < cnt ? idx : cnt;"
                          " uint32_t off = LD8(0x%xu + sel); %s = off; %s = 0x%xu + off * 2u;"
                          " switch (sel) { %s default: break; } }"
                          % (r3, self.prog.im.u8(table), table + 1, r3, r12, table | 1, cases))
                self.emit("STORE_W(); rt_trap(0x%xu); return;" % a)
                return
            self.emit("%s = 0x%xu;" % (lr, ret))
            if a in f.host_calls:
                self.call_site("host_call(%d)" % f.host_calls[a], ret, host=True)
            else:
                callee = f.calls[a]
                if callee in self.prog.functions:
                    self.call_site("%s()" % fname(callee), ret, callee_key=callee)
                else:
                    self.emit("CPU.pc = 0x%xu;" % callee)
                    self.indirect_call_site("0x%xu" % callee, ret)
            return
        if a in f.tail_calls:
            self.emit_tail(f.tail_calls[a])
            return
        self.emit(self.goto(ins.target, ins.thumb))


class Generator:
    def __init__(self, prog, outdir):
        self.prog = prog
        self.outdir = Path(outdir)
        im = prog.im
        self.code_end = im.base + im.code_size

    def literal_ok(self, a, size):
        im = self.prog.im
        return im.in_image(a, size)

    def function_c(self, f):
        e = Emitter(self.prog, f, self.literal_ok)
        body = []
        order = f.order
        insns = f.insns
        labels = set(f.labels)
        labels.add(f.entry)
        # The entry is always first.
        seq = sorted(order)
        emitted = []
        for i, a in enumerate(seq):
            ins = insns[a]
            start = len(e.lines)
            e.emit("L_%08x:" % a if a in labels or True else "")
            if a in f.errors and f.errors[a]:
                pass
            e.emit_insn(ins)
            # fallthrough handling
            if self.falls_through(f, ins):
                nxt = ins.next
                following = seq[i + 1] if i + 1 < len(seq) else None
                if nxt not in insns:
                    e.emit("STORE_W(); rt_trap(0x%xu); return;" % (nxt | (1 if ins.thumb else 0)))
                elif following != nxt:
                    e.emit("goto L_%08x;" % nxt)
        # Error blocks for reachable targets that failed to decode
        missing = set()
        for a in labels:
            if a not in insns:
                missing.add(a)
        for a in sorted(missing):
            e.emit("L_%08x: STORE_W(); rt_trap(0x%xu); return;" % (a, a | (1 if f.thumb else 0)))
        out = []
        regs = sorted(e.used)
        written = sorted(e.written)
        out.append("void %s(void) {" % fname(f.key))
        decl = ", ".join("r%d" % r for r in regs)
        if decl:
            out.append("  uint32_t %s;" % decl)
        out.append("  uint32_t n = 0, z = 0, c = 0, v = 0, tgt = 0;")
        out.append("  (void)n; (void)z; (void)c; (void)v; (void)tgt;")
        load = " ".join("r%d = CPU.r[%d];" % (r, r) for r in regs)
        store = " ".join("CPU.r[%d] = r%d;" % (r, r) for r in written)
        out.append("#define LOAD_U() do { %s } while (0)" % load)
        out.append("#define STORE_W() do { %s } while (0)" % store)
        out.append("  LOAD_U();")
        if f.consumer:
            out.append("  " + " ".join("%s = CPU.%s;" % (fl, fl) for fl in FLAGS if fl in f.consumer))
        if e.sites:
            cases = " ".join(("case %d: goto CS%d; case %d: goto CSL%d;" % (2 * k, k, 2 * k + 1, k)) if csl
                             else ("case %d: goto CS%d;" % (2 * k, k)) for k, csl in e.sites)
            out.append("  if (__builtin_expect(REWINDING, 0)) { switch (rw_pop()) { %s default: rt_bad_rewind(0x%xu); return; } }"
                       % (cases, f.key))
        out.append("  RT_TRACE_ENTER(0x%xu);" % f.key)
        out.append("  goto L_%08x;" % f.entry)
        out.extend("  " + l for l in e.lines)
        # DYN: dynamic transfer with local jump-table targets, else exit
        produce = self.prog.producers.get(f.key, set())
        fstore = " ".join("CPU.%s = %s;" % (fl, fl) for fl in FLAGS if fl in produce)
        out.append("DYN:")
        if f.local_targets:
            cases = " ".join("case 0x%xu: goto L_%08x;" % (tk, tk & ~1) for tk in sorted(f.local_targets) if (tk & ~1) in insns)
            out.append("  switch (tgt) { %s default: break; }" % cases)
        out.append("EXIT:")
        out.append("  STORE_W(); %s CPU.pc = tgt; return;" % fstore)
        out.append("PROP:")
        ret_cases = []
        for a in f.order:
            ins = insns[a]
            if ins.kind == "b" and ins.link:
                if ins.next in insns:
                    ret_cases.append("case 0x%xu: goto L_%08x;" % (key(ins.next, ins.thumb), ins.next))
            elif a in f.indirect_calls:
                r = f.indirect_calls[a]
                if (r & ~1) in insns:
                    ret_cases.append("case 0x%xu: goto L_%08x;" % (r, r & ~1))
        if ret_cases:
            out.append("  switch (tgt) { %s default: break; }" % " ".join(ret_cases))
        out.append("  goto EXIT;")
        out.append("#undef LOAD_U")
        out.append("#undef STORE_W")
        out.append("}")
        return "\n".join(out), e

    def falls_through(self, f, ins):
        k = ins.kind
        a = ins.addr
        if k == "b":
            if ins.link:
                return a not in f.switch8
            return ins.cond != 14
        if k in ("undef", "cop"):
            return False
        pc_write = (k == "bx" or (k == "dp" and ins.rd == 15) or (k == "mem" and ins.load and ins.rd == 15)
                    or (k == "block" and ins.load and 15 in ins.regs))
        if pc_write:
            return ins.cond != 14
        return True

    def write(self, per_file=150):
        prog = self.prog
        self.outdir.mkdir(parents=True, exist_ok=True)
        keys = sorted(prog.functions)
        protos = ["void %s(void);" % fname(k) for k in keys]
        (self.outdir / "funcs.h").write_text("#pragma once\n" + "\n".join(protos) + "\n")
        stats = {"functions": len(keys), "instructions": 0, "literals": 0, "errors": 0, "files": 0}
        files = []
        buckets = collections.OrderedDict()
        for k in keys:
            buckets.setdefault(((k & ~1) - prog.im.base) // 0x8000, []).append(k)
        for bucket, chunk in buckets.items():
            parts = ['#include "../runtime/rt.h"', '#include "funcs.h"', ""]
            for k in chunk:
                f = prog.functions[k]
                text, e = self.function_c(f)
                stats["instructions"] += len(f.insns)
                stats["literals"] += e.literals
                stats["errors"] += sum(1 for v in f.errors.values() if v)
                parts.append(text)
                parts.append("")
            name = "gen_%03d.c" % bucket
            (self.outdir / name).write_text("\n".join(parts))
            files.append(name)
        for old in self.outdir.glob("gen_*.c"):
            if old.name not in files:
                old.unlink()
        stats["files"] = len(files)
        # dispatch table
        entries = []
        for k in keys:
            entries.append((k, fname(k)))
        for imp in prog.im.imports:
            entries.append((imp["arm"], "H_%d" % imp["index"]))
            if imp["thumb"] is not None:
                entries.append((imp["thumb"] | 1, "H_%d" % imp["index"]))
        entries.sort()
        d = ['#include "../runtime/rt.h"', '#include "funcs.h"', ""]
        for imp in prog.im.imports:
            d.append("static void H_%d(void) { host_call(%d); CPU.pc = CPU.r[14]; }" % (imp["index"], imp["index"]))
        d.append("const uint32_t rt_table_keys[%d] = {" % len(entries))
        d.append(",".join("0x%xu" % k for k, _ in entries))
        d.append("};")
        d.append("void (*const rt_table_fns[%d])(void) = {" % len(entries))
        d.append(",".join(n for _, n in entries))
        d.append("};")
        d.append("const uint32_t rt_table_size = %d;" % len(entries))
        (self.outdir / "dispatch.c").write_text("\n".join(d) + "\n")
        files.append("dispatch.c")
        return stats, files
