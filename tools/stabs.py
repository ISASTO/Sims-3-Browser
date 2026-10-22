"""Walk STABS debug map: produce per-object-file function lists with addr/size."""
import sys, json
from macho import *
img = Image(sys.argv[1])
objs = []; cur = None; srcdir = ''; pending = None
for s in img.symbols:
    if not s.is_stab: continue
    t = s.stab_name
    if t == 'N_SO':
        if s.name == '':
            cur = None
        elif s.name.endswith('/'):
            srcdir = s.name
        else:
            cur = {'src': srcdir + s.name, 'oso': None, 'funcs': [], 'gsyms': [], 'stsyms': [], 'sol': []}
            objs.append(cur)
    elif t == 'N_OSO' and cur is not None:
        cur['oso'] = s.name
    elif t == 'N_SOL' and cur is not None:
        cur['sol'].append(s.name)
    elif t == 'N_FUN':
        if s.name:
            pending = [s.name, s.value, s.sect]
        else:
            pending.append(s.value); cur['funcs'].append(pending); pending = None
    elif t == 'N_GSYM' and cur is not None:
        cur['gsyms'].append(s.name)
    elif t == 'N_STSYM' and cur is not None:
        cur['stsyms'].append([s.name, s.value])
json.dump(objs, open(sys.argv[2], 'w'), indent=0)
print(len(objs), 'compile units;', sum(len(o['funcs']) for o in objs), 'functions')
