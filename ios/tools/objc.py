"""Parse ObjC2 metadata (32-bit) from the image: classes, metaclasses, methods, ivars, categories, protocols."""
import sys, json, struct
from macho import *

def parse(img):
    binds = {a: n for a, n, *_ in img.binds()}
    def ptr_or_bind(a):
        if a in binds: return ('import', binds[a])
        return ('local', img.u32(a))
    def methods(ml):
        out = []
        if not ml: return out
        entsize, count = struct.unpack('<II', img.read(ml, 8))
        entsize &= ~3
        for k in range(count):
            n, t, imp = struct.unpack('<III', img.read(ml + 8 + k * entsize, 12))
            out.append({'sel': img.cstr(n), 'types': img.cstr(t), 'imp': imp})
        return out
    def ivars(il):
        out = []
        if not il: return out
        entsize, count = struct.unpack('<II', img.read(il, 8))
        for k in range(count):
            offp, n, t, align, size = struct.unpack('<IIIII', img.read(il + 8 + k * entsize, 20))
            out.append({'name': img.cstr(n), 'type': img.cstr(t), 'offset_ptr': offp, 'offset': img.u32(offp) if offp else None, 'size': size})
        return out
    def ro(cls):
        isa, sup, cache, vt, data = struct.unpack('<5I', img.read(cls, 20))
        flags, istart, isize, ivl, name, bml, bpl, ivars_, wil, props = struct.unpack('<10I', img.read(data & ~3, 40))
        return {'addr': cls, 'isa': ptr_or_bind(cls), 'super': ptr_or_bind(cls + 4), 'flags': flags,
                'instanceStart': istart, 'instanceSize': isize, 'name': img.cstr(name),
                'methods': methods(bml), 'ivars': ivars(ivars_), 'protocols': bpl, 'props': props}
    cl = img.section('__DATA', '__objc_classlist')
    classes = []
    for k in range(cl.size // 4):
        c = img.u32(cl.addr + 4 * k)
        r = ro(c)
        kind, isa = r['isa']
        r['meta'] = ro(isa) if kind == 'local' else None
        classes.append(r)
    cats = []
    cs = img.section('__DATA', '__objc_catlist')
    for k in range(cs.size // 4):
        c = img.u32(cs.addr + 4 * k)
        name, cls, im, cm, pr, props = struct.unpack('<6I', img.read(c, 24))
        cats.append({'addr': c, 'name': img.cstr(name), 'cls': ptr_or_bind(c + 4), 'imethods': methods(im), 'cmethods': methods(cm)})
    return classes, cats

if __name__ == '__main__':
    img = Image(sys.argv[1])
    classes, cats = parse(img)
    json.dump({'classes': classes, 'categories': cats}, open(sys.argv[2], 'w'), indent=1)
    for c in classes:
        sup = c['super']
        print(c['name'], 'super=', sup[1] if sup[0] == 'import' else hex(sup[1]), 'size=', c['instanceSize'], 'm=', len(c['methods']), 'cm=', len(c['meta']['methods']) if c['meta'] else '-')
    for c in cats: print('category', c['name'], c['cls'])
