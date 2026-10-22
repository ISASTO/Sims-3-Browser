/* image.c — map the original executable's segments at their preferred addresses (slide 0)
 * and resolve dyld binds against HLE implementations. */
#include "rt.h"
#include "image_manifest.h"

extern const struct ImportEntry import_funcs[];
extern const unsigned import_nfuncs;
gptr objc_class_for_import(const char *name);

typedef struct { char *name; gptr addr; } DImp;
static DImp *dimps; static unsigned ndimps, capdimps;
void data_import_register(const char *name, gptr addr) {
    for (unsigned i = 0; i < ndimps; i++) if (!strcmp(dimps[i].name, name)) { dimps[i].addr = addr; return; }
    if (ndimps == capdimps) { capdimps = capdimps ? capdimps * 2 : 256; dimps = realloc(dimps, capdimps * sizeof *dimps); }
    dimps[ndimps].name = strdup(name); dimps[ndimps].addr = addr; ndimps++;
}
gptr data_import_lookup(const char *name) {
    for (unsigned i = 0; i < ndimps; i++) if (!strcmp(dimps[i].name, name)) return dimps[i].addr;
    return 0;
}
gptr data_import_alloc(const char *name, uint32_t size) {
    gptr p = gstatic_alloc(size < 4 ? 4 : size);
    data_import_register(name, p);
    return p;
}

static GuestFn import_fn(const char *name) {
    for (unsigned i = 0; i < import_nfuncs; i++) if (!strcmp(import_funcs[i].name, name)) return import_funcs[i].fn;
    return NULL;
}

unsigned image_unresolved;
static gptr resolve(const char *name) {
    gptr a = data_import_lookup(name);
    if (a) return a;
    if (!strncmp(name, "_OBJC_CLASS_$_", 14)) return objc_class_for_import(name + 14);
    if (!strncmp(name, "_OBJC_METACLASS_$_", 18)) return LD32(objc_class_for_import(name + 18));
    GuestFn f = import_fn(name);
    if (f) return thunk_for(f, name);
    rt_log("image: unresolved import %s", name);
    image_unresolved++;
    return 0;
}

static const char *exe_path = "/app/sims3_iphone.app/sims3_iphone";
void image_load(void) {
    int sz = host_file_size(exe_path);
    if (sz <= 0) { rt_log("image: executable %s not found", exe_path); abort(); }
    for (unsigned i = 0; i < img_nsegments; i++) {
        const struct ImgSegment *s = &img_segments[i];
        memset(G2H(s->vmaddr), 0, s->vmsize);
        if (s->filesize && host_file_read(exe_path, G2H(s->vmaddr), s->fileoff, s->filesize) != (int)s->filesize) {
            rt_log("image: short read of %s", s->name); abort();
        }
        rt_log("image: %-10s %08x-%08x (file %u bytes)", s->name, s->vmaddr, s->vmaddr + s->vmsize, s->filesize);
    }
}

void image_bind(void) {
    gptr *cache = calloc(img_nbind_names, sizeof(gptr));
    bool *done = calloc(img_nbind_names, 1);
    for (unsigned i = 0; i < img_nbinds; i++) {
        const struct ImgBind *b = &img_binds[i];
        if (!done[b->name]) { cache[b->name] = resolve(img_bind_names[b->name]); done[b->name] = true; }
        ST32(b->addr, cache[b->name] + b->addend);
    }
    free(cache); free(done);
    rt_log("image: %u binds applied, %u unresolved symbols", img_nbinds, image_unresolved);
}
