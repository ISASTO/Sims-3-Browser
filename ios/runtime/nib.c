/* nib.c — NIBArchive loader for the bundle's compiled nibs (LaunchScreen.nib). Instantiates UIView,
 * UIImageView, UIColor, strings and arrays; applies centre-X/centre-Y layout constraints. Unknown classes are
 * reported and left out (the only nib in the bundle uses the classes handled here). */
#include "rt.h"

const char *vfs_resolve(const char *in, char *out, size_t outlen);
gptr rt_retain(CPU *c, gptr obj);
void uikit_add_center_constraint(gptr item, gptr to, int attr);
void uikit_view_set_geometry(gptr view, float cx, float cy, float w, float h);
void uikit_view_set_image(gptr view, gptr image);

typedef struct { int key; int type; double num; const uint8_t *data; uint32_t len; uint32_t ref; } NVal;
typedef struct { int cls; uint32_t vi, vc; } NObj;
static uint32_t vint(const uint8_t *d, uint32_t *p) { uint32_t r = 0; int s = 0; for (;;) { uint8_t b = d[(*p)++]; r |= (uint32_t)(b & 0x7f) << s; s += 7; if (b & 0x80) return r; } }

static gptr nib_load(CPU *c, const char *name) {
    char path[512], hp[1024];
    snprintf(path, sizeof path, "%s/%s.nib", VFS_BUNDLE, name);
    vfs_resolve(path, hp, sizeof hp);
    int n = host_file_size(hp);
    if (n < 50) { rt_log("loadNibNamed: %s not found", hp); return 0; }
    uint8_t *d = malloc((size_t)n); host_file_read(hp, d, 0, (uint32_t)n);
    if (memcmp(d, "NIBArchive", 10)) { free(d); return 0; }
    uint32_t h[10]; memcpy(h, d + 10, 40);
    uint32_t nobj = h[2], oobj = h[3], nkey = h[4], okey = h[5], nval = h[6], oval = h[7], ncls = h[8], ocls = h[9];
    char **keys = calloc(nkey, sizeof(char *)), **cls = calloc(ncls, sizeof(char *));
    uint32_t p = okey;
    for (uint32_t i = 0; i < nkey; i++) { uint32_t l = vint(d, &p); keys[i] = strndup((char *)d + p, l); p += l; }
    p = ocls;
    for (uint32_t i = 0; i < ncls; i++) { uint32_t l = vint(d, &p); uint32_t ex = vint(d, &p); p += 4 * ex; cls[i] = strndup((char *)d + p, l); p += l; }
    NVal *vals = calloc(nval, sizeof(NVal));
    p = oval;
    for (uint32_t i = 0; i < nval; i++) {
        NVal *v = &vals[i]; v->key = (int)vint(d, &p); v->type = d[p++];
        switch (v->type) {
        case 0: v->num = d[p]; p += 1; break;
        case 1: { int16_t x; memcpy(&x, d + p, 2); v->num = x; p += 2; break; }
        case 2: { int32_t x; memcpy(&x, d + p, 4); v->num = x; p += 4; break; }
        case 3: { int64_t x; memcpy(&x, d + p, 8); v->num = (double)x; p += 8; break; }
        case 4: v->num = 1; break;
        case 5: v->num = 0; break;
        case 6: { float x; memcpy(&x, d + p, 4); v->num = x; p += 4; break; }
        case 7: { double x; memcpy(&x, d + p, 8); v->num = x; p += 8; break; }
        case 8: v->len = vint(d, &p); v->data = d + p; p += v->len; break;
        case 9: break;
        case 10: memcpy(&v->ref, d + p, 4); p += 4; break;
        }
    }
    NObj *objs = calloc(nobj, sizeof(NObj));
    p = oobj;
    for (uint32_t i = 0; i < nobj; i++) { objs[i].cls = (int)vint(d, &p); objs[i].vi = vint(d, &p); objs[i].vc = vint(d, &p); }
    gptr *inst = calloc(nobj, sizeof(gptr));
    #define FIND(o, k) ({ NVal *_r = NULL; for (uint32_t _i = 0; _i < objs[o].vc; _i++) { NVal *_v = &vals[objs[o].vi + _i]; if (!strcmp(keys[_v->key], k)) { _r = _v; break; } } _r; })
    /* pass 1: create */
    for (uint32_t i = 0; i < nobj; i++) {
        const char *cn = cls[objs[i].cls];
        if (!strcmp(cn, "NSString")) { NVal *b = FIND(i, "NS.bytes"); char *t = b ? strndup((const char *)b->data, b->len) : strdup(""); inst[i] = nsstr_retained(t); free(t); }
        else if (!strcmp(cn, "NSArray") || !strcmp(cn, "NSMutableArray")) inst[i] = nsarray_new(NULL, 0, true, true);
        else if (!strcmp(cn, "UIColor")) {
            NVal *r = FIND(i, "UIRed"), *g = FIND(i, "UIGreen"), *b = FIND(i, "UIBlue"), *a = FIND(i, "UIAlpha"), *w = FIND(i, "UIWhite");
            float R = r ? (float)r->num : w ? (float)w->num : 0, G = g ? (float)g->num : w ? (float)w->num : 0, B = b ? (float)b->num : w ? (float)w->num : 0;
            inst[i] = rt_retain(c, msg(c, objc_class_named("UIColor"), "colorWithRed:green:blue:alpha:", 4, F2U(R), F2U(G), F2U(B), F2U(a ? (float)a->num : 1)));
        } else if (!strcmp(cn, "UIView") || !strcmp(cn, "UIImageView")) {
            inst[i] = msg(c, objc_alloc_instance(objc_class_named(cn), 0), "init", 0);
        } else if (!strcmp(cn, "UIImageNibPlaceholder")) {
            NVal *rn = FIND(i, "UIResourceName");
            const char *nm = rn && rn->type == 10 ? NULL : NULL; UNUSED(nm);
            inst[i] = 0;   /* resolved in pass 2 once the name string exists */
        }
    }
    /* pass 2: wire properties */
    for (uint32_t i = 0; i < nobj; i++) {
        const char *cn = cls[objs[i].cls];
        if (!strcmp(cn, "UIImageNibPlaceholder")) {
            NVal *rn = FIND(i, "UIResourceName");
            if (rn && rn->type == 10 && inst[rn->ref]) inst[i] = rt_retain(c, msg(c, objc_class_named("UIImage"), "imageNamed:", 1, inst[rn->ref]));
        }
    }
    for (uint32_t i = 0; i < nobj; i++) {
        const char *cn = cls[objs[i].cls];
        if (!strcmp(cn, "NSArray") || !strcmp(cn, "NSMutableArray")) {
            for (uint32_t k = 0; k < objs[i].vc; k++) { NVal *v = &vals[objs[i].vi + k]; if (!strcmp(keys[v->key], "UINibEncoderEmptyKey") && v->type == 10 && inst[v->ref]) nsarray_add(inst[i], inst[v->ref]); }
        } else if (!strcmp(cn, "UIView") || !strcmp(cn, "UIImageView")) {
            NVal *b = FIND(i, "UIBounds"), *ce = FIND(i, "UICenter");
            double bb[4] = {0}, cc[2] = {0};
            if (b && b->len >= 33) memcpy(bb, b->data + 1, 32);
            if (ce && ce->len >= 17) memcpy(cc, ce->data + 1, 16);
            uikit_view_set_geometry(inst[i], (float)cc[0], (float)cc[1], (float)bb[2], (float)bb[3]);
            NVal *bg = FIND(i, "UIBackgroundColor"); if (bg && bg->type == 10 && inst[bg->ref]) msg(c, inst[i], "setBackgroundColor:", 1, inst[bg->ref]);
            NVal *im = FIND(i, "UIImage"); if (im && im->type == 10 && inst[im->ref]) uikit_view_set_image(inst[i], inst[im->ref]);
        }
    }
    for (uint32_t i = 0; i < nobj; i++) {
        const char *cn = cls[objs[i].cls];
        if (!strcmp(cn, "UIView") || !strcmp(cn, "UIImageView")) {
            NVal *s = FIND(i, "UISubviews");
            if (s && s->type == 10 && inst[s->ref]) { gptr arr = inst[s->ref]; for (uint32_t k = 0; k < nsarray_count(arr); k++) msg(c, inst[i], "addSubview:", 1, nsarray_get(arr, k)); }
        } else if (!strcmp(cn, "NSLayoutConstraint")) {
            NVal *f = FIND(i, "NSFirstItem"), *s = FIND(i, "NSSecondItem"), *a = FIND(i, "NSFirstAttribute"), *a2 = FIND(i, "NSSecondAttribute");
            if (f && s && a && a2 && a->num == a2->num && (a->num == 9 || a->num == 10) && inst[f->ref] && inst[s->ref]) uikit_add_center_constraint(inst[f->ref], inst[s->ref], (int)a->num);
            else rt_log("nib %s: unsupported layout constraint (object %u)", name, i);
        } else if (!inst[i] && strcmp(cn, "NSObject") && strcmp(cn, "UIProxyObject") && strcmp(cn, "UIImageNibPlaceholder"))
            rt_log("nib %s: class %s not instantiated", name, cn);
    }
    /* top-level objects (proxies excluded) */
    gptr out = nsarray_new(NULL, 0, true, false);
    NVal *tl = FIND(0, "UINibTopLevelObjectsKey");
    if (tl && tl->type == 10) {
        uint32_t ai = tl->ref;
        for (uint32_t k = 0; k < objs[ai].vc; k++) { NVal *v = &vals[objs[ai].vi + k]; if (v->type == 10 && inst[v->ref] && strcmp(cls[objs[v->ref].cls], "UIProxyObject")) nsarray_add(out, inst[v->ref]); }
    }
    #undef FIND
    free(objs); free(vals); for (uint32_t i = 0; i < nkey; i++) free(keys[i]); for (uint32_t i = 0; i < ncls; i++) free(cls[i]); free(keys); free(cls); free(inst); free(d);
    return out;
}
static void bu_loadNibNamed(CPU *c) { RET(nib_load(c, nsstr_cstr(ARG(2)))); }
void nib_init(void) { host_method(objc_class_named("NSBundle"), "loadNibNamed:owner:options:", "", bu_loadNibNamed); }
