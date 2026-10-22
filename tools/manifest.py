#!/usr/bin/env python3
"""Emit build/gen/image_manifest.c: segment layout, binds, ObjC section addresses, initializers.
The segment *bytes* are read at runtime from the user's executable; only layout/link data is emitted."""
import sys, os, json
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from macho import Image, N_SECT

from project import ROOT
img = Image(ROOT + '/original/sims3_iphone')
out = ['#include "rt.h"', '#include "image_manifest.h"']

out.append('const struct ImgSegment img_segments[] = {')
for s in img.segments:
    if s.vmsize:
        out.append('  {"%s", 0x%xu, 0x%xu, 0x%xu, 0x%xu},' % (s.name, s.vmaddr, s.vmsize, s.fileoff + img.slice_off, s.filesize))
out.append('};\nconst unsigned img_nsegments = %d;' % sum(1 for s in img.segments if s.vmsize))

def cstr(x):
    return '"' + x.replace('\\', '\\\\').replace('"', '\\"') + '"'

binds = [(a, n, lib, add, t, 0) for a, n, lib, add, t in img.binds()] + [(a, n, lib, add, t, 1) for a, n, lib, add, t in img.lazy_binds()]
names = sorted(set(b[1] for b in binds))
nidx = {n: k for k, n in enumerate(names)}
out.append('const char *const img_bind_names[] = {')
for n in names:
    out.append('  %s,' % cstr(n))
out.append('};\nconst unsigned img_nbind_names = %d;' % len(names))
out.append('const struct ImgBind img_binds[] = {')
for a, n, lib, add, t, lazy in binds:
    out.append('  {0x%xu, %d, %d, %d},' % (a, nidx[n], add, lazy))
out.append('};\nconst unsigned img_nbinds = %d;' % len(binds))

def sect(seg, name):
    s = img.section(seg, name)
    return (s.addr, s.size) if s else (0, 0)

secs = {'classlist': sect('__DATA', '__objc_classlist'), 'nlclslist': sect('__DATA', '__objc_nlclslist'),
        'catlist': sect('__DATA', '__objc_catlist'), 'selrefs': sect('__DATA', '__objc_selrefs'),
        'classrefs': sect('__DATA', '__objc_classrefs'), 'superrefs': sect('__DATA', '__objc_superrefs'),
        'protolist': sect('__DATA', '__objc_protolist'), 'protorefs': sect('__DATA', '__objc_protorefs'),
        'cfstring': sect('__DATA', '__cfstring'), 'mod_init': sect('__DATA', '__mod_init_func'),
        'methname': sect('__TEXT', '__objc_methname'), 'text': sect('__TEXT', '__text'),
        'nl_symbol_ptr': sect('__DATA', '__nl_symbol_ptr'), 'la_symbol_ptr': sect('__DATA', '__la_symbol_ptr'),
        'bss': sect('__DATA', '__bss'), 'common': sect('__DATA', '__common')}
for k, (a, s) in secs.items():
    out.append('const uint32_t img_sec_%s = 0x%xu, img_sec_%s_size = 0x%xu;' % (k, a, k, s))
out.append('const uint32_t img_entry = 0x%xu;' % img.entry_vm)

# defined symbols (for name lookup of data in the image)
defs = sorted(set((s.value, s.name) for s in img.symbols if not s.is_stab and (s.type & 0x0e) == N_SECT and s.name))
out.append('const struct ImgSym img_syms[] = {')
for v, n in defs:
    out.append('  {0x%xu, %s},' % (v, cstr(n)))
out.append('};\nconst unsigned img_nsyms = %d;' % len(defs))
open(ROOT + '/build/gen/image_manifest.c', 'w').write('\n'.join(out) + '\n')
open(ROOT + '/build/gen/image_manifest.h', 'w').write('''#pragma once
struct ImgSegment { const char *name; uint32_t vmaddr, vmsize, fileoff, filesize; };
struct ImgBind { uint32_t addr; uint16_t name; int16_t addend; uint8_t lazy; };
struct ImgSym { uint32_t addr; const char *name; };
extern const struct ImgSegment img_segments[]; extern const unsigned img_nsegments;
extern const char *const img_bind_names[]; extern const unsigned img_nbind_names;
extern const struct ImgBind img_binds[]; extern const unsigned img_nbinds;
extern const struct ImgSym img_syms[]; extern const unsigned img_nsyms;
extern const uint32_t img_entry;
''' + ''.join('extern const uint32_t img_sec_%s, img_sec_%s_size;\n' % (k, k) for k in secs))
print('segments', len(img.segments), 'binds', len(binds), 'names', len(names), 'syms', len(defs))
