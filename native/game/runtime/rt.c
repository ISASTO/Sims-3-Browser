/* Run-time dispatch for the statically recompiled game.  This is not an
 * instruction interpreter: it maps original code addresses to compiled C
 * functions for indirect calls, returns and tail calls. */
#include "rt.h"

Cpu CPU;

extern const uint32_t rt_table_keys[];
extern void (*const rt_table_fns[])(void);
extern const uint32_t rt_table_size;

#define CACHE_BITS 12
static uint32_t cache_key[1u << CACHE_BITS];
static void (*cache_fn[1u << CACHE_BITS])(void);

static void (*lookup(uint32_t k))(void) {
  uint32_t h = (k ^ (k >> 13)) & ((1u << CACHE_BITS) - 1);
  if (cache_key[h] == k && cache_fn[h]) return cache_fn[h];
  uint32_t lo = 0, hi = rt_table_size;
  while (lo < hi) {
    uint32_t mid = (lo + hi) >> 1;
    uint32_t v = rt_table_keys[mid];
    if (v == k) {
      cache_key[h] = k;
      cache_fn[h] = rt_table_fns[mid];
      return rt_table_fns[mid];
    }
    if (v < k) lo = mid + 1; else hi = mid;
  }
  return 0;
}

void rt_dispatch(uint32_t target) {
  if (CPU.rewinding) target = rw_pop();
  void (*f)(void) = lookup(target);
  if (!f) {
    rt_missing(target);
    __builtin_trap();
  }
  CPU.depth++;
  f();
  CPU.depth--;
  if (CPU.unwinding) rw_push(target);
}

void rt_after(uint32_t ret) {
  if (CPU.rewinding) goto resume;
  while (CPU.pc != ret) {
    if (!lookup(CPU.pc)) return;
  resume:
    rt_dispatch(CPU.pc);
    if (CPU.unwinding) return;
  }
}

/* ---- exports for the JavaScript host ---- */
__attribute__((export_name("cpu"))) uint32_t cpu_address(void) { return (uint32_t)(uintptr_t)&CPU; }
__attribute__((export_name("guest_linear"))) uint32_t guest_linear(void) { return GUEST_LINEAR; }
__attribute__((export_name("is_entry"))) uint32_t is_entry(uint32_t k) { return lookup(k) != 0; }

/* Run guest code starting at `fn` until it returns to `sentinel`.  When
 * resuming after an unwind, registers are left untouched and execution
 * continues inside the recorded call chain. */
__attribute__((export_name("run"))) void run(uint32_t fn, uint32_t sentinel) {
  if (!CPU.rewinding) {
    CPU.pc = fn;
    CPU.r[14] = sentinel;
  }
  rt_after(sentinel);
}
