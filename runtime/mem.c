/* mem.c — guest address space and guest heap.
 * Native build: a 4 GiB reservation; guest address = offset into it.
 * Wasm build (GUEST_IDENTITY): guest address == linear-memory address; the image occupies
 * [0x4000, 0x4E8000) which the linker keeps free (--global-base above it).
 * The guest heap is a dlmalloc mspace over a fixed region; guest code never sees host malloc. */
#include "rt.h"
#ifndef GUEST_IDENTITY
#include <sys/mman.h>
uint8_t *guest_base;
#endif

typedef void *mspace;
mspace create_mspace_with_base(void *base, size_t capacity, int locked);
void *mspace_malloc(mspace msp, size_t bytes);
void mspace_free(mspace msp, void *mem);
void *mspace_realloc(mspace msp, void *mem, size_t newsize);
void *mspace_calloc(mspace msp, size_t n, size_t elem_size);
void *mspace_memalign(mspace msp, size_t alignment, size_t bytes);
size_t mspace_usable_size(const void *mem);

static mspace heap;
static gptr heap_lo, heap_hi;
#define GUEST_HEAP_SIZE (448u << 20)

#ifdef GUEST_IDENTITY
static uint8_t *heap_block;
#endif

void mem_init(void) {
#ifndef GUEST_IDENTITY
    guest_base = mmap(NULL, 1ull << 32, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (guest_base == MAP_FAILED) { perror("mmap guest"); abort(); }
    heap_lo = 0x10000000u;
    /* make the host-thunk range unreadable so data reads through mis-bound imports fault visibly */
    mprotect(guest_base + THUNK_BASE, 0x2000000u, PROT_NONE);
#else
    heap_block = (uint8_t *)malloc(GUEST_HEAP_SIZE + 4096);
    if (!heap_block) { rt_log("cannot allocate guest heap"); abort(); }
    heap_lo = ALIGN(H2G(heap_block), 4096);
#endif
    heap_hi = heap_lo + GUEST_HEAP_SIZE;
    heap = create_mspace_with_base(G2H(heap_lo), GUEST_HEAP_SIZE, 0);
    if (!heap) { rt_log("create_mspace failed"); abort(); }
}

static uint64_t heap_bytes_live;
gptr gmalloc(uint32_t size) {
    void *p = mspace_memalign(heap, 16, size ? size : 1);
    if (!p) { rt_log("guest heap exhausted (request %u)", size); return 0; }
    return H2G(p);
}
gptr gcalloc(uint32_t n, uint32_t size) {
    uint64_t t = (uint64_t)n * size;
    if (t > 0xffffffffu) return 0;
    gptr p = gmalloc((uint32_t)t);
    if (p) memset(G2H(p), 0, (size_t)t);
    return p;
}
gptr grealloc(gptr p, uint32_t size) {
    if (!p) return gmalloc(size);
    if (!size) { gfree(p); return 0; }
    uint32_t old = gmalloc_size(p);
    if (size <= old) return p;
    gptr n = gmalloc(size);
    if (!n) return 0;
    memcpy(G2H(n), G2H(p), old);
    gfree(p);
    return n;
}
void gfree(gptr p) {
    if (!p) return;
    if (p < heap_lo || p >= heap_hi) { rt_log("gfree: pointer %08x outside guest heap (ignored)", p); return; }
    mspace_free(heap, G2H(p));
}
uint32_t gmalloc_size(gptr p) { return p ? (uint32_t)mspace_usable_size(G2H(p)) : 0; }
gptr gstrdup(const char *s) { uint32_t n = (uint32_t)strlen(s) + 1; gptr p = gmalloc(n); memcpy(G2H(p), s, n); return p; }
gptr gmemdup(const void *s, uint32_t n) { gptr p = gmalloc(n ? n : 1); memcpy(G2H(p), s, n); return p; }
gptr gstatic_alloc(uint32_t size) { return gcalloc(1, size); }

/* interned immortal strings */
#define NINTERN 4096
static struct { const char *k; gptr v; } intern_tab[NINTERN];
static uint32_t hstr(const char *s) { uint32_t h = 2166136261u; while (*s) h = (h ^ (uint8_t)*s++) * 16777619u; return h; }
gptr gstatic_str(const char *s) {
    uint32_t h = hstr(s) & (NINTERN - 1);
    for (;;) {
        if (!intern_tab[h].k) { intern_tab[h].k = strdup(s); intern_tab[h].v = gstrdup(s); return intern_tab[h].v; }
        if (!strcmp(intern_tab[h].k, s)) return intern_tab[h].v;
        h = (h + 1) & (NINTERN - 1);
    }
}
