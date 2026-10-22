#!/usr/bin/env python3
"""Annotate a function's disassembly with the selector, class and string each PC-relative literal load resolves to.

Usage: python3 tools/selrefs.py <function name> [more names...]
Resolves `movw/movt rX, #imm; add rX, pc; ldr rY, [rX]` sequences: the loaded address is looked up in
__objc_selrefs (selector name), __objc_classrefs / binds (class name), or read as a C string.
"""
import os, re, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from macho import Image

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
img = Image(os.path.join(ROOT, 'original/sims3_iphone'))
binds = {b[0]: b[1] for b in img.binds() + img.lazy_binds()}
selrefs = img.section('__DATA', '__objc_selrefs')
classrefs = img.section('__DATA', '__objc_classrefs')


def describe(addr):
    for sec, kind in ((selrefs, 'sel'), (classrefs, 'class')):
        if sec and sec.addr <= addr < sec.addr + sec.size:
            if kind == 'sel':
                return 'sel ' + img.cstr(img.u32(addr))
            v = img.u32(addr)
            if addr in binds:
                return 'class ' + binds[addr]
            return 'class@%x' % v
    s = img.sect_for(addr)
    if s and s.sectname in ('__cstring', '__objc_methname', '__objc_classname'):
        return 'str "%s"' % img.cstr(addr)[:60]
    if s and s.sectname == '__cfstring':
        return 'cfstr "%s"' % img.cstr(img.u32(addr + 8))[:60]
    if addr in binds:
        return 'import ' + binds[addr]
    return None


for name in sys.argv[1:]:
    out = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/tdis.py'), name], capture_output=True, text=True).stdout
    regs = {}
    for line in out.splitlines():
        m = re.match(r'\s+0x([0-9a-f]+): (\S+)\s+(.*)', line)
        note = ''
        if m:
            pc, op, args = int(m.group(1), 16), m.group(2), m.group(3)
            a = [x.strip() for x in args.split(',')]
            if op == 'movw' and a[1].startswith('#'):
                regs[a[0]] = int(a[1][1:], 0)
            elif op == 'movt' and a[0] in regs:
                regs[a[0]] = (regs[a[0]] & 0xffff) | (int(a[1][1:], 0) << 16)
            elif op == 'add' and len(a) == 2 and a[1] == 'pc' and a[0] in regs:
                regs[a[0]] = (regs[a[0]] + pc + 4) & 0xffffffff
                d = describe(regs[a[0]])
                if d:
                    note = '    ; ' + d
            elif op.startswith('ldr') and len(a) == 2 and a[1].startswith('[') and a[1][1:-1] in regs:
                pass
        print(line + note)
