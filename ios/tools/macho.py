"""Minimal Mach-O (32-bit ARM, fat container) parser for the Sims 3 iOS recompilation project.

All addresses returned are *virtual addresses* (VM) unless named *_off.  File offsets
named *_off are slice-relative; the fat-container offset is kept in Image.slice_off.
"""
import struct

LC_SEGMENT = 0x1
LC_SYMTAB = 0x2
LC_DYSYMTAB = 0xB
LC_LOAD_DYLIB = 0xC
LC_LOAD_WEAK_DYLIB = 0x80000018
LC_DYLD_INFO_ONLY = 0x80000022
LC_FUNCTION_STARTS = 0x26
LC_DATA_IN_CODE = 0x29
LC_MAIN = 0x80000028
LC_ENCRYPTION_INFO = 0x21

N_STAB = 0xE0
N_PEXT = 0x10
N_TYPE = 0x0E
N_EXT = 0x01
N_UNDF, N_ABS, N_SECT, N_INDR = 0x0, 0x2, 0xE, 0xA
N_ARM_THUMB_DEF = 0x0008
INDIRECT_SYMBOL_LOCAL = 0x80000000
INDIRECT_SYMBOL_ABS = 0x40000000

STAB_NAMES = {0x20: 'N_GSYM', 0x22: 'N_FNAME', 0x24: 'N_FUN', 0x26: 'N_STSYM', 0x28: 'N_LCSYM',
              0x2e: 'N_BNSYM', 0x3c: 'N_OPT', 0x40: 'N_RSYM', 0x44: 'N_SLINE', 0x4e: 'N_ENSYM',
              0x60: 'N_SSYM', 0x64: 'N_SO', 0x66: 'N_OSO', 0x80: 'N_LSYM', 0x82: 'N_BINCL',
              0x84: 'N_SOL', 0x86: 'N_PARAMS', 0x88: 'N_VERSION', 0x8A: 'N_OLEVEL', 0xa0: 'N_PSYM',
              0xa2: 'N_EINCL', 0xa4: 'N_ENTRY', 0xc0: 'N_LBRAC', 0xc2: 'N_EXCL', 0xe0: 'N_RBRAC',
              0xe2: 'N_BCOMM', 0xe4: 'N_ECOMM', 0xe8: 'N_ECOML', 0xfe: 'N_LENG'}


def uleb(b, i):
    r = s = 0
    while True:
        x = b[i]; i += 1
        r |= (x & 0x7f) << s; s += 7
        if not x & 0x80:
            return r, i


def sleb(b, i):
    r = s = 0
    while True:
        x = b[i]; i += 1
        r |= (x & 0x7f) << s; s += 7
        if not x & 0x80:
            if x & 0x40:
                r -= 1 << s
            return r, i


class Section:
    def __init__(self, sectname, segname, addr, size, offset, flags, reserved1, reserved2):
        self.sectname, self.segname = sectname, segname
        self.addr, self.size, self.offset = addr, size, offset
        self.flags, self.reserved1, self.reserved2 = flags, reserved1, reserved2
        self.type = flags & 0xff

    def __repr__(self):
        return f'{self.segname},{self.sectname} @{self.addr:#x}+{self.size:#x}'


class Segment:
    def __init__(self, name, vmaddr, vmsize, fileoff, filesize, maxprot, initprot):
        self.name, self.vmaddr, self.vmsize = name, vmaddr, vmsize
        self.fileoff, self.filesize = fileoff, filesize
        self.maxprot, self.initprot = maxprot, initprot
        self.sections = []


class Symbol:
    __slots__ = ('index', 'name', 'type', 'sect', 'desc', 'value')

    def __init__(self, index, name, type, sect, desc, value):
        self.index, self.name, self.type, self.sect, self.desc, self.value = index, name, type, sect, desc, value

    @property
    def is_stab(self):
        return bool(self.type & N_STAB)

    @property
    def stab_name(self):
        return STAB_NAMES.get(self.type, hex(self.type))

    @property
    def kind(self):
        return self.type & N_TYPE

    @property
    def is_thumb(self):
        return bool(self.desc & N_ARM_THUMB_DEF)


class Image:
    def __init__(self, path):
        data = open(path, 'rb').read()
        self.file = data
        magic = struct.unpack_from('>I', data, 0)[0]
        if magic == 0xCAFEBABE:
            n = struct.unpack_from('>I', data, 4)[0]
            arches = [struct.unpack_from('>iiIII', data, 8 + 20 * i) for i in range(n)]
            self.fat_arches = arches
            cpu, sub, off, size, align = arches[0]
            self.slice_off = off
            self.data = data[off:off + size]
        else:
            self.fat_arches = []
            self.slice_off = 0
            self.data = data
        d = self.data
        magic, cputype, cpusub, ftype, ncmds, sizeofcmds, flags = struct.unpack_from('<7I', d, 0)
        assert magic == 0xFEEDFACE, hex(magic)
        self.cputype, self.cpusubtype, self.filetype, self.flags = cputype, cpusub, ftype, flags
        self.segments, self.sections, self.dylibs = [], [], []
        self.entryoff = None
        off = 28
        for _ in range(ncmds):
            cmd, size = struct.unpack_from('<II', d, off)
            if cmd == LC_SEGMENT:
                segname = d[off + 8:off + 24].rstrip(b'\0').decode()
                vmaddr, vmsize, fileoff, filesize, maxprot, initprot, nsects, sflags = struct.unpack_from('<8I', d, off + 24)
                seg = Segment(segname, vmaddr, vmsize, fileoff, filesize, maxprot, initprot)
                so = off + 56
                for _ in range(nsects):
                    sn = d[so:so + 16].rstrip(b'\0').decode()
                    sg = d[so + 16:so + 32].rstrip(b'\0').decode()
                    addr, size_, offset, align, reloff, nreloc, fl, r1, r2 = struct.unpack_from('<9I', d, so + 32)
                    s = Section(sn, sg, addr, size_, offset, fl, r1, r2)
                    seg.sections.append(s); self.sections.append(s)
                    so += 68
                self.segments.append(seg)
            elif cmd == LC_SYMTAB:
                self.symoff, self.nsyms, self.stroff, self.strsize = struct.unpack_from('<4I', d, off + 8)
            elif cmd == LC_DYSYMTAB:
                v = struct.unpack_from('<18I', d, off + 8)
                self.ilocalsym, self.nlocalsym, self.iextdefsym, self.nextdefsym, self.iundefsym, self.nundefsym = v[:6]
                self.indirectsymoff, self.nindirectsyms = v[12], v[13]
            elif cmd in (LC_LOAD_DYLIB, LC_LOAD_WEAK_DYLIB):
                noff = struct.unpack_from('<I', d, off + 8)[0]
                self.dylibs.append(d[off + noff:off + size].split(b'\0')[0].decode())
            elif cmd == LC_DYLD_INFO_ONLY:
                (self.rebase_off, self.rebase_size, self.bind_off, self.bind_size, self.weak_bind_off,
                 self.weak_bind_size, self.lazy_bind_off, self.lazy_bind_size, self.export_off,
                 self.export_size) = struct.unpack_from('<10I', d, off + 8)
            elif cmd == LC_FUNCTION_STARTS:
                self.fstarts_off, self.fstarts_size = struct.unpack_from('<II', d, off + 8)
            elif cmd == LC_DATA_IN_CODE:
                self.dic_off, self.dic_size = struct.unpack_from('<II', d, off + 8)
            elif cmd == LC_MAIN:
                self.entryoff, self.stacksize = struct.unpack_from('<QQ', d, off + 8)
            elif cmd == LC_ENCRYPTION_INFO:
                self.cryptoff, self.cryptsize, self.cryptid = struct.unpack_from('<3I', d, off + 8)
            off += size
        self._load_symbols()

    # ---------------------------------------------------------------- address helpers
    def seg_for(self, addr):
        for s in self.segments:
            if s.vmaddr <= addr < s.vmaddr + s.vmsize:
                return s
        return None

    def sect_for(self, addr):
        for s in self.sections:
            if s.addr <= addr < s.addr + s.size:
                return s
        return None

    def off_for(self, addr):
        s = self.seg_for(addr)
        if s is None or addr - s.vmaddr >= s.filesize:
            return None
        return s.fileoff + (addr - s.vmaddr)

    def read(self, addr, n):
        o = self.off_for(addr)
        if o is None:
            return b'\0' * n
        return self.data[o:o + n]

    def u32(self, addr):
        return struct.unpack('<I', self.read(addr, 4))[0]

    def u16(self, addr):
        return struct.unpack('<H', self.read(addr, 2))[0]

    def cstr(self, addr, maxlen=4096):
        b = self.read(addr, maxlen)
        return b.split(b'\0')[0].decode('latin-1')

    def section(self, segname, sectname):
        for s in self.sections:
            if s.segname == segname and s.sectname == sectname:
                return s
        return None

    @property
    def entry_vm(self):
        text = [s for s in self.segments if s.name == '__TEXT'][0]
        return text.vmaddr + self.entryoff - text.fileoff

    # ---------------------------------------------------------------- symbols
    def _load_symbols(self):
        d = self.data
        strtab = d[self.stroff:self.stroff + self.strsize]
        self.symbols = []
        for i in range(self.nsyms):
            strx, ntype, nsect, ndesc, nvalue = struct.unpack_from('<IBBHI', d, self.symoff + 12 * i)
            name = strtab[strx:strtab.index(b'\0', strx)].decode('latin-1') if strx else ''
            self.symbols.append(Symbol(i, name, ntype, nsect, ndesc, nvalue))
        self.indirect = list(struct.unpack_from(f'<{self.nindirectsyms}I', d, self.indirectsymoff))

    def stub_targets(self):
        """Map stub/pointer addresses -> imported symbol name (via indirect symbol table)."""
        out = {}
        for s in self.sections:
            if s.type in (0x6, 0x7):  # S_NON_LAZY_SYMBOL_POINTERS, S_LAZY_SYMBOL_POINTERS
                stride = 4
            elif s.type == 0x8:  # S_SYMBOL_STUBS
                stride = s.reserved2
            else:
                continue
            for k in range(s.size // stride):
                idx = self.indirect[s.reserved1 + k]
                if idx & (INDIRECT_SYMBOL_LOCAL | INDIRECT_SYMBOL_ABS):
                    name = None
                else:
                    name = self.symbols[idx].name
                out[s.addr + k * stride] = (s.sectname, name, idx)
        return out

    def function_starts(self):
        b = self.data[self.fstarts_off:self.fstarts_off + self.fstarts_size]
        text = [s for s in self.segments if s.name == '__TEXT'][0]
        addr = text.vmaddr
        i = 0
        out = []
        while i < len(b):
            v, i = uleb(b, i)
            if v == 0:
                break
            addr += v
            out.append(addr)  # low bit set => thumb
        return out

    def data_in_code(self):
        b = self.data[self.dic_off:self.dic_off + self.dic_size]
        text = [s for s in self.segments if s.name == '__TEXT'][0]
        out = []
        for i in range(0, len(b), 8):
            off, length, kind = struct.unpack_from('<IHH', b, i)
            out.append((text.vmaddr + off - text.fileoff, length, kind))
        return out

    # ---------------------------------------------------------------- dyld info
    def rebases(self):
        b = self.data[self.rebase_off:self.rebase_off + self.rebase_size]
        out = []
        i = 0
        seg = 0; off = 0; typ = 0
        while i < len(b):
            op = b[i] & 0xF0; imm = b[i] & 0x0F; i += 1
            if op == 0x00:
                break
            elif op == 0x10: typ = imm
            elif op == 0x20:
                seg = imm; off, i = uleb(b, i)
            elif op == 0x30:
                v, i = uleb(b, i); off = (off + v) & 0xffffffff
            elif op == 0x40: off += imm * 4
            elif op == 0x50:
                for _ in range(imm):
                    out.append(self.segments[seg].vmaddr + off); off += 4
            elif op == 0x60:
                n, i = uleb(b, i)
                for _ in range(n):
                    out.append(self.segments[seg].vmaddr + off); off += 4
            elif op == 0x70:
                out.append(self.segments[seg].vmaddr + off)
                v, i = uleb(b, i); off += v + 4
            elif op == 0x80:
                n, i = uleb(b, i); skip, i = uleb(b, i)
                for _ in range(n):
                    out.append(self.segments[seg].vmaddr + off); off += skip + 4
            else:
                raise ValueError(hex(op))
        return out

    def _binds(self, off_, size_, lazy=False):
        b = self.data[off_:off_ + size_]
        out = []
        i = 0
        seg = 0; off = 0; typ = 1; lib = 0; name = None; addend = 0; flags = 0
        while i < len(b):
            op = b[i] & 0xF0; imm = b[i] & 0x0F; i += 1
            if op == 0x00:
                if lazy:
                    continue
                break
            elif op == 0x10: lib = imm
            elif op == 0x20: lib, i = uleb(b, i)
            elif op == 0x30: lib = -imm if imm else 0
            elif op == 0x40:
                flags = imm
                e = b.index(b'\0', i); name = b[i:e].decode('latin-1'); i = e + 1
            elif op == 0x50: typ = imm
            elif op == 0x60: addend, i = sleb(b, i)
            elif op == 0x70:
                seg = imm; off, i = uleb(b, i)
            elif op == 0x80:
                v, i = uleb(b, i); off = (off + v) & 0xffffffff
            elif op == 0x90:
                out.append((self.segments[seg].vmaddr + off, name, lib, addend, typ)); off += 4
            elif op == 0xA0:
                out.append((self.segments[seg].vmaddr + off, name, lib, addend, typ))
                v, i = uleb(b, i); off = (off + v + 4) & 0xffffffff
            elif op == 0xB0:
                out.append((self.segments[seg].vmaddr + off, name, lib, addend, typ)); off += imm * 4 + 4
            elif op == 0xC0:
                n, i = uleb(b, i); skip, i = uleb(b, i)
                for _ in range(n):
                    out.append((self.segments[seg].vmaddr + off, name, lib, addend, typ)); off += skip + 4
            else:
                raise ValueError(hex(op))
        return out

    def binds(self):
        return self._binds(self.bind_off, self.bind_size)

    def lazy_binds(self):
        return self._binds(self.lazy_bind_off, self.lazy_bind_size, lazy=True)

    def weak_binds(self):
        return self._binds(self.weak_bind_off, self.weak_bind_size)
