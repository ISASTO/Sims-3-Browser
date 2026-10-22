"""Selectors referenced by the binary that neither the game's own classes nor the HLE host classes implement.
Used to find Foundation/UIKit API gaps before they are hit at run time."""
import json, re, glob, sys
from project import ROOT
from macho import *
img = Image(ROOT + '/original/sims3_iphone')
sr = img.section('__DATA', '__objc_selrefs')
sels = set(img.cstr(img.u32(a)) for a in range(sr.addr, sr.addr + sr.size, 4))
objc = json.load(open(ROOT + '/analysis/objc.json'))
guest = set()
def walk(o):
    if isinstance(o, dict):
        if 'sel' in o and 'imp' in o: guest.add(o['sel'])
        for v in o.values(): walk(v)
    elif isinstance(o, list):
        for x in o: walk(x)
walk(objc)
host = set()
for f in glob.glob(ROOT + '/runtime/*.c'):
    for m in re.finditer(r'"([A-Za-z_][A-Za-z0-9_:]*)"', open(f).read()):
        host.add(m.group(1))
rem = sorted(sels - guest - host)
print('\n'.join(rem))
print(len(sels), 'selrefs;', len(rem), 'unimplemented', file=sys.stderr)
