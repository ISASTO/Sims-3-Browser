"""List string/selector/class references in a function (constant propagation)."""
import sys, json
from project import ROOT
from macho import *
img = Image(ROOT + '/original/sims3_iphone')
x = json.load(open(ROOT + '/analysis/xrefs.json'))
fn = {f['name']: '%x' % f['addr'] for f in json.load(open(ROOT + '/analysis/functions.json'))}
cs = img.section('__DATA', '__cfstring'); sr = img.section('__DATA', '__objc_selrefs'); cr = img.section('__DATA', '__objc_classrefs')
syms = {s.value: s.name for s in img.symbols if not s.is_stab and s.name}
binds = {a: n for a, n, *_ in img.binds()}
def desc(a):
    if cs.addr <= a < cs.addr + cs.size:
        b = a - (a - cs.addr) % 16
        fl = img.u32(b + 4); p = img.u32(b + 8); n = img.u32(b + 12)
        return 'CFSTR ' + (repr(img.cstr(p)) if not fl & 0x10 else repr(img.read(p, 2 * n).decode('utf-16le', 'replace')))
    if sr.addr <= a < sr.addr + sr.size: return 'SEL ' + img.cstr(img.u32(a))
    if cr.addr <= a < cr.addr + cr.size: return 'CLASS ' + str(binds.get(a, syms.get(img.u32(a), hex(img.u32(a)))))
    if a in binds: return 'IMPORTPTR ' + binds[a]
    s = img.sect_for(a)
    if s and s.sectname == '__cstring': return 'CSTR ' + repr(img.cstr(a))
    if a in syms: return 'SYM ' + syms[a]
    return None
for q in sys.argv[1:]:
    k = fn.get(q) or q
    for a in x.get(k, []):
        d = desc(a)
        if d: print(hex(a), d)
