import sys, collections
sys.path.insert(0, '/home/claude/sims3/tools')
from macho import *
img = Image(sys.argv[1])
print('slice_off', img.slice_off, 'slice size', len(img.data), 'cpusub', img.cpusubtype)
print('entry vm', hex(img.entry_vm))
print('crypt', img.cryptoff, img.cryptsize, img.cryptid)
print('nsyms', img.nsyms, 'strsize', img.strsize)
c = collections.Counter()
for s in img.symbols:
    if s.is_stab: c['stab:' + s.stab_name] += 1
    else: c[{0:'undef',2:'abs',0xe:'sect',0xa:'indr'}.get(s.kind,'?') + (':ext' if s.type & 1 else ':local')] += 1
for k,v in sorted(c.items()): print(k, v)
stab = sum(1 for s in img.symbols if s.is_stab); print('stab total', stab)
sect = [s for s in img.symbols if not s.is_stab and s.kind == N_SECT]
print('defined sect', len(sect))
print('C++ mangled', sum(1 for s in sect if s.name.startswith('__Z')))
print('objc methods', sum(1 for s in sect if s.name.startswith(('-[','+['))))
print('objc class', sum(1 for s in sect if s.name.startswith('_OBJC_CLASS_$')))
fs = img.function_starts(); print('function starts', len(fs), 'thumb', sum(1 for a in fs if a & 1))
dic = img.data_in_code(); print('data in code', len(dic), collections.Counter(k for _,_,k in dic))
print('rebases', len(img.rebases()), 'binds', len(img.binds()), 'lazy', len(img.lazy_binds()), 'weak', len(img.weak_binds()))
