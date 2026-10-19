/* Runtime support for the statically recompiled game.
 *
 * Guest (original ARM) addresses are mapped into WebAssembly linear memory at
 * a constant offset: guest 0x4a000000 is linear address GUEST_LINEAR.  All
 * guest registers and flags live in CPU between functions.
 */
#pragma once
#include <stdint.h>

#define GUEST_BASE 0x4a000000u
#define GUEST_LINEAR 0x01000000u
#define GUEST_DELTA ((uint32_t)(GUEST_LINEAR - GUEST_BASE))
#define RW_MAX 16384u

typedef struct Cpu {
  uint32_t r[16];
  uint32_t n, z, c, v;
  uint32_t pc;
  uint32_t unwinding;
  uint32_t rewinding;
  uint32_t rwp;
  uint32_t depth;
  uint32_t reserved[7];
  uint32_t rw[RW_MAX];
} Cpu;

extern Cpu CPU;

#define UNWINDING (CPU.unwinding)
#define REWINDING (CPU.rewinding)

typedef uint32_t u32_una __attribute__((aligned(1)));
typedef uint16_t u16_una __attribute__((aligned(1)));
typedef int16_t s16_una __attribute__((aligned(1)));

static inline uint8_t *GP(uint32_t a) { return (uint8_t *)(uintptr_t)(uint32_t)(a + GUEST_DELTA); }
static inline uint32_t LD32(uint32_t a) { return *(const u32_una *)GP(a); }
static inline uint32_t LD16(uint32_t a) { return *(const u16_una *)GP(a); }
static inline uint32_t LDS16(uint32_t a) { return (uint32_t)(int32_t)*(const s16_una *)GP(a); }
static inline uint32_t LD8(uint32_t a) { return *GP(a); }
static inline uint32_t LDS8(uint32_t a) { return (uint32_t)(int32_t)*(const int8_t *)GP(a); }
static inline void ST32(uint32_t a, uint32_t v) { *(u32_una *)GP(a) = v; }
static inline void ST16(uint32_t a, uint32_t v) { *(u16_una *)GP(a) = (uint16_t)v; }
static inline void ST8(uint32_t a, uint32_t v) { *GP(a) = (uint8_t)v; }

static inline uint32_t ROR32(uint32_t v, uint32_t s) { s &= 31; return s ? (v >> s) | (v << (32 - s)) : v; }

/* Register-specified shifts (ARM semantics, low byte of the amount). */
static inline uint32_t LSLR(uint32_t v, uint32_t s) { s &= 0xff; return s < 32 ? v << s : 0; }
static inline uint32_t LSRR(uint32_t v, uint32_t s) { s &= 0xff; return s < 32 ? v >> s : 0; }
static inline uint32_t ASRR(uint32_t v, uint32_t s) { s &= 0xff; return (uint32_t)((int32_t)v >> (s < 32 ? s : 31)); }
static inline uint32_t RORR(uint32_t v, uint32_t s) { return ROR32(v, s & 31); }
static inline uint32_t LSL_C(uint32_t v, uint32_t s, uint32_t *c) {
  s &= 0xff;
  if (s == 0) return v;
  if (s < 32) { *c = (v >> (32 - s)) & 1; return v << s; }
  *c = s == 32 ? (v & 1) : 0;
  return 0;
}
static inline uint32_t LSR_C(uint32_t v, uint32_t s, uint32_t *c) {
  s &= 0xff;
  if (s == 0) return v;
  if (s < 32) { *c = (v >> (s - 1)) & 1; return v >> s; }
  *c = s == 32 ? (v >> 31) : 0;
  return 0;
}
static inline uint32_t ASR_C(uint32_t v, uint32_t s, uint32_t *c) {
  s &= 0xff;
  if (s == 0) return v;
  if (s < 32) { *c = (v >> (s - 1)) & 1; return (uint32_t)((int32_t)v >> s); }
  *c = v >> 31;
  return (uint32_t)((int32_t)v >> 31);
}
static inline uint32_t ROR_C(uint32_t v, uint32_t s, uint32_t *c) {
  s &= 0xff;
  if (s == 0) return v;
  s &= 31;
  if (s == 0) { *c = v >> 31; return v; }
  v = (v >> s) | (v << (32 - s));
  *c = v >> 31;
  return v;
}

static inline void rw_push(uint32_t v) {
  if (CPU.rwp >= RW_MAX) __builtin_trap();
  CPU.rw[CPU.rwp++] = v;
}
static inline uint32_t rw_pop(void) {
  if (CPU.rwp == 0) __builtin_trap();
  return CPU.rw[--CPU.rwp];
}

void rt_after(uint32_t ret);
void rt_dispatch(uint32_t target);

#ifdef RT_TRACE
__attribute__((import_module("env"), import_name("rt_trace"))) void rt_trace(uint32_t key);
#define RT_TRACE_ENTER(k) rt_trace(k)
#else
#define RT_TRACE_ENTER(k) ((void)0)
#endif

/* Host (JavaScript) services. */
__attribute__((import_module("env"), import_name("host_call"))) void host_call(uint32_t slot);
__attribute__((import_module("env"), import_name("rt_trap"))) void rt_trap(uint32_t addr);
__attribute__((import_module("env"), import_name("rt_undefined"))) void rt_undefined(uint32_t addr);
__attribute__((import_module("env"), import_name("rt_swi"))) void rt_swi(uint32_t addr, uint32_t imm);
__attribute__((import_module("env"), import_name("rt_bad_rewind"))) void rt_bad_rewind(uint32_t fn);
__attribute__((import_module("env"), import_name("rt_missing"))) void rt_missing(uint32_t target);
