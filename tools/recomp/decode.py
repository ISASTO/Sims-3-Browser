"""ARMv4T ARM and Thumb instruction decoder for static recompilation.

Thumb instructions are normalised into the same semantic records as ARM
instructions where the semantics are identical.  Reads of PC are resolved at
decode time to constants: ARM reads PC as address+8 (+12 for a register-shift
operand), Thumb reads address+4 (word-aligned for PC-relative loads and ADR).

Each decoded instruction is an `Insn` with a `kind`:
  dp     data processing         (op, s, rd, rn, sh)
  mul    MUL/MLA                 (s, rd, rm, rs, rn or None)
  mull   UMULL/UMLAL/SMULL/SMLAL (s, signed, acc, rdlo, rdhi, rm, rs)
  mem    single load/store       (load, size, signed, rd, rn, offset, pre, up, wb)
  block  LDM/STM                 (load, rn, regs, mode, wb)
  swp    SWP/SWPB                (byte, rd, rm, rn)
  b      branch / call           (link, target, target_thumb)
  bx     branch and exchange     (rm)
  mrs, msr, swi, undef, cop
Operands are ('r', n) or ('k', constant).
"""

COND_NAMES = ["eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc", "hi", "ls", "ge", "lt", "gt", "le", "al", "nv"]
DP_NAMES = ["and", "eor", "sub", "rsb", "add", "adc", "sbc", "rsc", "tst", "teq", "cmp", "cmn", "orr", "mov", "bic", "mvn"]
SHIFTS = ["lsl", "lsr", "asr", "ror"]

AND, EOR, SUB, RSB, ADD, ADC, SBC, RSC, TST, TEQ, CMP, CMN, ORR, MOV, BIC, MVN = range(16)
LOGICAL = {AND, EOR, TST, TEQ, ORR, MOV, BIC, MVN}
NO_RESULT = {TST, TEQ, CMP, CMN}
NO_RN = {MOV, MVN}


class DecodeError(Exception):
    pass


def ror32(v, n):
    n &= 31
    return ((v >> n) | (v << (32 - n))) & 0xFFFFFFFF if n else v


def R(n):
    return ("r", n)


def K(v):
    return ("k", v & 0xFFFFFFFF)


class Insn:
    __slots__ = ("addr", "size", "thumb", "raw", "cond", "kind", "f", "text")

    def __init__(self, addr, size, thumb, raw, cond, kind, text="", **fields):
        self.addr = addr
        self.size = size
        self.thumb = thumb
        self.raw = raw
        self.cond = cond
        self.kind = kind
        self.f = fields
        self.text = text

    def __getattr__(self, name):
        try:
            return self.f[name]
        except KeyError:
            raise AttributeError(name)

    @property
    def next(self):
        return self.addr + self.size

    def __repr__(self):
        return "<%s %08x %s %s>" % ("T" if self.thumb else "A", self.addr, self.kind, self.text)


# ---------------------------------------------------------------- ARM state

def _arm_shifter(w, addr):
    """Return the shifter-operand record for a data-processing instruction."""
    if w & (1 << 25):
        imm = w & 0xFF
        rot = ((w >> 8) & 0xF) * 2
        value = ror32(imm, rot)
        return {"t": "imm", "v": value, "carry": None if rot == 0 else (value >> 31) & 1}
    rm = w & 0xF
    stype = (w >> 5) & 3
    if w & (1 << 4):
        if w & (1 << 7):
            raise DecodeError("not a shifter operand")
        rs = (w >> 8) & 0xF
        if rs == 15:
            raise DecodeError("register shift by PC")
        rm_op = K(addr + 12) if rm == 15 else R(rm)
        return {"t": "rsr", "rm": rm_op, "shift": stype, "rs": R(rs)}
    amount = (w >> 7) & 0x1F
    rm_op = K(addr + 8) if rm == 15 else R(rm)
    return {"t": "rsi", "rm": rm_op, "shift": stype, "amount": amount}


def _reglist(mask):
    return [i for i in range(16) if mask & (1 << i)]


def decode_arm(w, addr):
    cond = w >> 28
    op = (w >> 25) & 7
    if cond == 15:
        return Insn(addr, 4, False, w, 14, "undef", "nv-space %08x" % w)

    if op == 0 and (w & 0x90) == 0x90:
        # multiplies, swaps, halfword/signed transfers
        sh = (w >> 5) & 3
        if sh == 0:
            if (w >> 23) & 0x1F == 0 and (w >> 22) & 1 == 0:
                # MUL / MLA: cond 000000AS Rd Rn Rs 1001 Rm
                acc = (w >> 21) & 1
                s = (w >> 20) & 1
                rd = (w >> 16) & 0xF
                rn = (w >> 12) & 0xF
                rs = (w >> 8) & 0xF
                rm = w & 0xF
                if 15 in (rd, rs, rm) or (acc and rn == 15):
                    raise DecodeError("multiply with PC")
                return Insn(addr, 4, False, w, cond, "mul", "mla" if acc else "mul",
                            s=s, rd=rd, rm=rm, rs=rs, rn=rn if acc else None)
            if (w >> 23) & 0x1F == 1:
                signed = (w >> 22) & 1
                acc = (w >> 21) & 1
                s = (w >> 20) & 1
                rdhi = (w >> 16) & 0xF
                rdlo = (w >> 12) & 0xF
                rs = (w >> 8) & 0xF
                rm = w & 0xF
                if 15 in (rdhi, rdlo, rs, rm) or rdhi == rdlo:
                    raise DecodeError("long multiply with PC/same regs")
                return Insn(addr, 4, False, w, cond, "mull", ("s" if signed else "u") + ("mlal" if acc else "mull"),
                            s=s, signed=signed, acc=acc, rdlo=rdlo, rdhi=rdhi, rm=rm, rs=rs)
            if (w & 0x0FB00FF0) == 0x01000090:
                byte = (w >> 22) & 1
                rn = (w >> 16) & 0xF
                rd = (w >> 12) & 0xF
                rm = w & 0xF
                if 15 in (rn, rd, rm):
                    raise DecodeError("swp with pc")
                return Insn(addr, 4, False, w, cond, "swp", "swpb" if byte else "swp", byte=byte, rd=rd, rm=rm, rn=rn)
            raise DecodeError("undefined multiply-space %08x" % w)
        # halfword / signed byte transfers
        pre = (w >> 24) & 1
        up = (w >> 23) & 1
        immf = (w >> 22) & 1
        wb = (w >> 21) & 1
        load = (w >> 20) & 1
        rn = (w >> 16) & 0xF
        rd = (w >> 12) & 0xF
        if not load and sh != 1:
            raise DecodeError("ldrd/strd (v5TE) %08x" % w)
        if not pre and wb:
            raise DecodeError("halfword post-index with W")
        if immf:
            off = K(((w >> 4) & 0xF0) | (w & 0xF))
        else:
            if (w >> 8) & 0xF:
                raise DecodeError("sbz bits set")
            rm = w & 0xF
            if rm == 15:
                raise DecodeError("pc offset")
            off = R(rm)
        size, signed = {1: (2, 0), 2: (1, 1), 3: (2, 1)}[sh]
        if rd == 15:
            raise DecodeError("halfword transfer of PC")
        if (wb or not pre) and rn == 15:
            raise DecodeError("pc writeback")
        base = K(addr + 8) if rn == 15 else R(rn)
        return Insn(addr, 4, False, w, cond, "mem", ("ldr" if load else "str") + {(2, 0): "h", (1, 1): "sb", (2, 1): "sh"}[(size, signed)],
                    load=load, width=size, signed=signed, rd=rd, rn=base, off=off, shift=None,
                    pre=pre, up=up, wb=wb or not pre)

    if op in (0, 1):
        opcode = (w >> 21) & 0xF
        s = (w >> 20) & 1
        if opcode in (TST, TEQ, CMP, CMN) and not s:
            # MRS / MSR / BX and other misc instructions
            if (w & 0x0FFFFFF0) == 0x012FFF10:
                rm = w & 0xF
                return Insn(addr, 4, False, w, cond, "bx", "bx r%d" % rm, rm=R(rm) if rm != 15 else K(addr + 8))
            if (w & 0x0FBF0FFF) == 0x010F0000:
                if w & (1 << 22):
                    raise DecodeError("mrs spsr")
                rd = (w >> 12) & 0xF
                return Insn(addr, 4, False, w, cond, "mrs", "mrs r%d, cpsr" % rd, rd=rd)
            if (w & 0x0DB0F000) == 0x0120F000:
                if w & (1 << 22):
                    raise DecodeError("msr spsr")
                mask = (w >> 16) & 0xF
                if w & (1 << 25):
                    src = K(ror32(w & 0xFF, ((w >> 8) & 0xF) * 2))
                else:
                    if (w >> 4) & 0xFF:
                        raise DecodeError("msr reg sbz")
                    src = R(w & 0xF)
                return Insn(addr, 4, False, w, cond, "msr", "msr cpsr", mask=mask, src=src)
            raise DecodeError("undefined misc %08x" % w)
        rn = (w >> 16) & 0xF
        rd = (w >> 12) & 0xF
        sh = _arm_shifter(w, addr)
        if opcode in NO_RN:
            rn_op = None
        elif rn == 15:
            rn_op = K(addr + (12 if sh["t"] == "rsr" else 8))
        else:
            rn_op = R(rn)
        if opcode in NO_RESULT:
            rd = None
        if rd == 15 and s:
            raise DecodeError("dp to pc with S (exception return)")
        return Insn(addr, 4, False, w, cond, "dp", DP_NAMES[opcode] + ("s" if s else ""),
                    op=opcode, s=s, rd=rd, rn=rn_op, sh=sh)

    if op in (2, 3):
        if op == 3 and (w & 0x10):
            return Insn(addr, 4, False, w, cond, "undef", "undefined %08x" % w)
        pre = (w >> 24) & 1
        up = (w >> 23) & 1
        byte = (w >> 22) & 1
        wb = (w >> 21) & 1
        load = (w >> 20) & 1
        rn = (w >> 16) & 0xF
        rd = (w >> 12) & 0xF
        if op == 2:
            off = K(w & 0xFFF)
            shift = None
        else:
            rm = w & 0xF
            if rm == 15:
                raise DecodeError("pc register offset")
            off = R(rm)
            amount = (w >> 7) & 0x1F
            stype = (w >> 5) & 3
            shift = (stype, amount)
        if (wb or not pre) and rn == 15:
            raise DecodeError("pc writeback")
        if byte and rd == 15:
            raise DecodeError("byte transfer of pc")
        base = K(addr + 8) if rn == 15 else R(rn)
        return Insn(addr, 4, False, w, cond, "mem", ("ldr" if load else "str") + ("b" if byte else ""),
                    load=load, width=1 if byte else 4, signed=0, rd=rd, rn=base, off=off, shift=shift,
                    pre=pre, up=up, wb=wb or not pre)

    if op == 4:
        pre = (w >> 24) & 1
        up = (w >> 23) & 1
        sbit = (w >> 22) & 1
        wb = (w >> 21) & 1
        load = (w >> 20) & 1
        rn = (w >> 16) & 0xF
        regs = _reglist(w & 0xFFFF)
        if sbit:
            raise DecodeError("ldm/stm with S bit")
        if rn == 15 or not regs:
            raise DecodeError("bad ldm/stm")
        mode = ("i" if up else "d") + ("b" if pre else "a")
        return Insn(addr, 4, False, w, cond, "block", ("ldm" if load else "stm") + mode,
                    load=load, rn=rn, regs=regs, mode=mode, wb=wb)

    if op == 5:
        link = (w >> 24) & 1
        off = w & 0xFFFFFF
        if off & 0x800000:
            off -= 1 << 24
        target = (addr + 8 + off * 4) & 0xFFFFFFFF
        return Insn(addr, 4, False, w, cond, "b", ("bl" if link else "b") + " %08x" % target,
                    link=link, target=target, tthumb=False)

    if op == 6:
        return Insn(addr, 4, False, w, cond, "cop", "coprocessor transfer %08x" % w)
    # op == 7
    if w & (1 << 24):
        return Insn(addr, 4, False, w, cond, "swi", "swi %06x" % (w & 0xFFFFFF), imm=w & 0xFFFFFF)
    return Insn(addr, 4, False, w, cond, "cop", "coprocessor %08x" % w)


# -------------------------------------------------------------- Thumb state

def _imm_sh(rm, stype, amount):
    return {"t": "rsi", "rm": rm, "shift": stype, "amount": amount}


def _reg_sh(rm):
    return {"t": "rsi", "rm": rm, "shift": 0, "amount": 0}


def _imm(v):
    return {"t": "imm", "v": v & 0xFFFFFFFF, "carry": None}


def decode_thumb(h, addr, h2=None):
    """Decode a Thumb instruction.  `h2` is the following halfword (for BL)."""
    top = h >> 13
    pc = addr + 4
    if top == 0:
        op = (h >> 11) & 3
        if op < 3:  # shift by immediate
            amount = (h >> 6) & 0x1F
            rs = (h >> 3) & 7
            rd = h & 7
            return Insn(addr, 2, True, h, 14, "dp", ["lsls", "lsrs", "asrs"][op],
                        op=MOV, s=1, rd=rd, rn=None, sh=_imm_sh(R(rs), op, amount))
        # add/subtract
        immf = (h >> 10) & 1
        sub = (h >> 9) & 1
        rn = (h >> 6) & 7
        rs = (h >> 3) & 7
        rd = h & 7
        sh = _imm(rn) if immf else _reg_sh(R(rn))
        return Insn(addr, 2, True, h, 14, "dp", "subs" if sub else "adds",
                    op=SUB if sub else ADD, s=1, rd=rd, rn=R(rs), sh=sh)
    if top == 1:
        op = (h >> 11) & 3
        rd = (h >> 8) & 7
        imm = h & 0xFF
        opcode = [MOV, CMP, ADD, SUB][op]
        return Insn(addr, 2, True, h, 14, "dp", ["movs", "cmp", "adds", "subs"][op] + " #%d" % imm,
                    op=opcode, s=1, rd=None if opcode == CMP else rd, rn=None if opcode == MOV else R(rd), sh=_imm(imm))
    if top == 2:
        if (h >> 10) == 0x10:  # ALU operations
            op = (h >> 6) & 0xF
            rs = (h >> 3) & 7
            rd = h & 7
            name = ["ands", "eors", "lsls", "lsrs", "asrs", "adcs", "sbcs", "rors", "tst", "negs", "cmp", "cmn", "orrs", "muls", "bics", "mvns"][op]
            if op in (2, 3, 4, 7):
                stype = {2: 0, 3: 1, 4: 2, 7: 3}[op]
                return Insn(addr, 2, True, h, 14, "dp", name, op=MOV, s=1, rd=rd, rn=None,
                            sh={"t": "rsr", "rm": R(rd), "shift": stype, "rs": R(rs)})
            if op == 13:
                return Insn(addr, 2, True, h, 14, "mul", name, s=1, rd=rd, rm=rs, rs=rd, rn=None)
            if op == 9:
                return Insn(addr, 2, True, h, 14, "dp", name, op=RSB, s=1, rd=rd, rn=R(rs), sh=_imm(0))
            opcode = {0: AND, 1: EOR, 5: ADC, 6: SBC, 8: TST, 10: CMP, 11: CMN, 12: ORR, 14: BIC, 15: MVN}[op]
            return Insn(addr, 2, True, h, 14, "dp", name, op=opcode, s=1,
                        rd=None if opcode in NO_RESULT else rd,
                        rn=None if opcode in NO_RN else R(rd), sh=_reg_sh(R(rs)))
        if (h >> 10) == 0x11:  # hi register operations / BX
            op = (h >> 8) & 3
            h1 = (h >> 7) & 1
            h2b = (h >> 6) & 1
            rs = ((h >> 3) & 7) | (h2b << 3)
            rd = (h & 7) | (h1 << 3)
            src = K(pc) if rs == 15 else R(rs)
            if op == 3:
                if h1:
                    raise DecodeError("blx (v5)")
                return Insn(addr, 2, True, h, 14, "bx", "bx r%d" % rs, rm=src)
            if op == 0:
                rn = K(pc) if rd == 15 else R(rd)
                return Insn(addr, 2, True, h, 14, "dp", "add hi", op=ADD, s=0, rd=rd, rn=rn, sh=_reg_sh(src))
            if op == 1:
                rn = K(pc) if rd == 15 else R(rd)
                return Insn(addr, 2, True, h, 14, "dp", "cmp hi", op=CMP, s=1, rd=None, rn=rn, sh=_reg_sh(src))
            return Insn(addr, 2, True, h, 14, "dp", "mov hi", op=MOV, s=0, rd=rd, rn=None, sh=_reg_sh(src))
        if (h >> 11) == 9:  # PC-relative load
            rd = (h >> 8) & 7
            target = (pc & ~3) + (h & 0xFF) * 4
            return Insn(addr, 2, True, h, 14, "mem", "ldr pc-rel %08x" % target, load=1, width=4, signed=0,
                        rd=rd, rn=K(pc & ~3), off=K((h & 0xFF) * 4), shift=None, pre=1, up=1, wb=0)
        # load/store with register offset
        ro = (h >> 6) & 7
        rb = (h >> 3) & 7
        rd = h & 7
        if (h >> 9) & 1 == 0:
            lb = (h >> 10) & 3
            load = lb >> 1
            byte = lb & 1
            return Insn(addr, 2, True, h, 14, "mem", ("ldr" if load else "str") + ("b" if byte else ""),
                        load=load, width=1 if byte else 4, signed=0, rd=rd, rn=R(rb), off=R(ro), shift=None, pre=1, up=1, wb=0)
        hs = (h >> 10) & 3
        load, size, signed = [(0, 2, 0), (1, 1, 1), (1, 2, 0), (1, 2, 1)][hs]
        return Insn(addr, 2, True, h, 14, "mem", ["strh", "ldsb", "ldrh", "ldsh"][hs],
                    load=load, width=size, signed=signed, rd=rd, rn=R(rb), off=R(ro), shift=None, pre=1, up=1, wb=0)
    if top == 3:  # load/store with immediate offset
        byte = (h >> 12) & 1
        load = (h >> 11) & 1
        off = (h >> 6) & 0x1F
        rb = (h >> 3) & 7
        rd = h & 7
        return Insn(addr, 2, True, h, 14, "mem", ("ldr" if load else "str") + ("b" if byte else ""),
                    load=load, width=1 if byte else 4, signed=0, rd=rd, rn=R(rb), off=K(off if byte else off * 4),
                    shift=None, pre=1, up=1, wb=0)
    if top == 4:
        if (h >> 12) & 1 == 0:  # halfword immediate
            load = (h >> 11) & 1
            off = ((h >> 6) & 0x1F) * 2
            rb = (h >> 3) & 7
            rd = h & 7
            return Insn(addr, 2, True, h, 14, "mem", "ldrh" if load else "strh", load=load, width=2, signed=0,
                        rd=rd, rn=R(rb), off=K(off), shift=None, pre=1, up=1, wb=0)
        load = (h >> 11) & 1
        rd = (h >> 8) & 7
        return Insn(addr, 2, True, h, 14, "mem", ("ldr" if load else "str") + " sp", load=load, width=4, signed=0,
                    rd=rd, rn=R(13), off=K((h & 0xFF) * 4), shift=None, pre=1, up=1, wb=0)
    if top == 5:
        if (h >> 12) & 1 == 0:  # load address
            sp = (h >> 11) & 1
            rd = (h >> 8) & 7
            imm = (h & 0xFF) * 4
            return Insn(addr, 2, True, h, 14, "dp", "add sp" if sp else "adr", op=ADD, s=0, rd=rd,
                        rn=R(13) if sp else K(pc & ~3), sh=_imm(imm))
        if (h >> 8) & 0xF == 0:  # adjust stack pointer
            imm = (h & 0x7F) * 4
            neg = (h >> 7) & 1
            return Insn(addr, 2, True, h, 14, "dp", "sub sp" if neg else "add sp", op=SUB if neg else ADD, s=0,
                        rd=13, rn=R(13), sh=_imm(imm))
        if (h >> 9) & 3 == 2:  # push/pop
            load = (h >> 11) & 1
            extra = (h >> 8) & 1
            regs = _reglist(h & 0xFF)
            if extra:
                regs.append(15 if load else 14)
            if not regs:
                raise DecodeError("empty push/pop")
            return Insn(addr, 2, True, h, 14, "block", "pop" if load else "push", load=load, rn=13,
                        regs=regs, mode="ia" if load else "db", wb=1)
        raise DecodeError("undefined thumb misc %04x" % h)
    if top == 6:
        if (h >> 12) & 1 == 0:  # ldmia/stmia
            load = (h >> 11) & 1
            rb = (h >> 8) & 7
            regs = _reglist(h & 0xFF)
            if not regs:
                raise DecodeError("empty thumb ldm/stm")
            return Insn(addr, 2, True, h, 14, "block", "ldmia" if load else "stmia", load=load, rn=rb, regs=regs, mode="ia", wb=1)
        cond = (h >> 8) & 0xF
        if cond == 15:
            return Insn(addr, 2, True, h, 14, "swi", "swi %d" % (h & 0xFF), imm=h & 0xFF)
        if cond == 14:
            return Insn(addr, 2, True, h, 14, "undef", "undefined %04x" % h)
        off = h & 0xFF
        if off & 0x80:
            off -= 0x100
        target = pc + off * 2
        return Insn(addr, 2, True, h, cond, "b", "b%s %08x" % (COND_NAMES[cond], target), link=0, target=target, tthumb=True)
    # top == 7
    op = (h >> 11) & 3
    if op == 0:
        off = h & 0x7FF
        if off & 0x400:
            off -= 0x800
        target = pc + off * 2
        return Insn(addr, 2, True, h, 14, "b", "b %08x" % target, link=0, target=target, tthumb=True)
    if op == 2:
        if h2 is not None and (h2 >> 11) == 0x1F:
            off = ((h & 0x7FF) << 12) | ((h2 & 0x7FF) << 1)
            if off & (1 << 22):
                off -= 1 << 23
            target = (pc + off) & 0xFFFFFFFF
            return Insn(addr, 4, True, h | (h2 << 16), 14, "b", "bl %08x" % target, link=1, target=target, tthumb=True)
        raise DecodeError("lone BL prefix")
    if op == 3:
        raise DecodeError("lone BL suffix")
    raise DecodeError("blx suffix (v5)")


def decode_at(image, addr, thumb):
    """Decode the instruction at `addr` in the given mode or raise DecodeError."""
    if thumb:
        if addr & 1 or not image.in_image(addr, 2):
            raise DecodeError("thumb address out of image")
        h = image.u16(addr)
        h2 = image.u16(addr + 2) if image.in_image(addr + 2, 2) else None
        return decode_thumb(h, addr, h2)
    if addr & 3 or not image.in_image(addr, 4):
        raise DecodeError("arm address out of image/unaligned")
    return decode_arm(image.u32(addr), addr)
