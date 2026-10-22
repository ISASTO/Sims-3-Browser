"""Build analysis/functions.json: every function start with best name, size, source unit."""
import sys, json, bisect
from macho import *
img = Image(sys.argv[1])
stabs = json.load(open(sys.argv[2]))
names = {}
for s in img.symbols:
    if not s.is_stab and s.kind == N_SECT and s.sect == 1:
        names.setdefault(s.value & ~1, s.name)
unit = {}; size = {}
for u in stabs:
    for n, a, sect, sz in u['funcs']:
        unit[a & ~1] = u['src'].split('/')[-1]; size[a & ~1] = sz
        names.setdefault(a & ~1, n)
text = img.section('__TEXT', '__text')
starts = sorted(a for a in (set(a & ~1 for a in img.function_starts()) | set(names.keys())) if text.addr <= a < text.addr + text.size)
text = img.section('__TEXT', '__text')
end = text.addr + text.size
out = []
for i, a in enumerate(starts):
    nxt = starts[i + 1] if i + 1 < len(starts) else end
    out.append({'addr': a, 'end': nxt, 'name': names.get(a, f'sub_{a:x}'), 'stab_size': size.get(a), 'unit': unit.get(a)})
json.dump(out, open(sys.argv[3], 'w'))
print(len(out), 'functions; named', sum(1 for f in out if not f['name'].startswith('sub_')))
mism = [f for f in out if f['stab_size'] and f['stab_size'] != f['end'] - f['addr']]
print('stab size != gap', len(mism))
for f in mism[:10]: print(hex(f['addr']), f['name'], f['stab_size'], f['end'] - f['addr'])
