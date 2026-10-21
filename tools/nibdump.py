import sys, struct
d = open(sys.argv[1], 'rb').read()
assert d[:10] == b'NIBArchive'
hdr = struct.unpack('<10I', d[10:50])
_, _, nobj, oobj, nkey, okey, nval, oval, ncls, ocls = hdr
def vint(p):
    r = 0; s = 0
    while True:
        b = d[p]; p += 1; r |= (b & 0x7f) << s; s += 7
        if b & 0x80: return r, p
keys = []; p = okey
for _ in range(nkey):
    l, p = vint(p); keys.append(d[p:p+l].decode()); p += l
cls = []; p = ocls
for _ in range(ncls):
    l, p = vint(p); ex, p = vint(p); p += 4 * ex; cls.append(d[p:p+l].rstrip(b'\0').decode()); p += l
vals = []; p = oval
for _ in range(nval):
    k, p = vint(p); t = d[p]; p += 1
    if t == 0: v = d[p]; p += 1
    elif t == 1: v = struct.unpack('<h', d[p:p+2])[0]; p += 2
    elif t == 2: v = struct.unpack('<i', d[p:p+4])[0]; p += 4
    elif t == 3: v = struct.unpack('<q', d[p:p+8])[0]; p += 8
    elif t == 4: v = True
    elif t == 5: v = False
    elif t == 6: v = struct.unpack('<f', d[p:p+4])[0]; p += 4
    elif t == 7: v = struct.unpack('<d', d[p:p+8])[0]; p += 8
    elif t == 8: l, p = vint(p); v = d[p:p+l]; p += l
    elif t == 9: v = None
    elif t == 10: v = ('obj', struct.unpack('<I', d[p:p+4])[0]); p += 4
    else: raise ValueError(t)
    vals.append((keys[k], v))
p = oobj
for i in range(nobj):
    c, p = vint(p); vi, p = vint(p); vc, p = vint(p)
    print(i, cls[c], [(k, v if not isinstance(v, bytes) or len(v) > 40 else v) for k, v in vals[vi:vi+vc]])
