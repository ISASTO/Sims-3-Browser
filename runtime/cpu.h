/* cpu.h — guest CPU model shared by recompiled code and the HLE runtime.
 *
 * Guest: iOS armv7 (32-bit, little-endian, Thumb-2, VFPv3/NEON, softfp calling convention).
 * Guest pointers are always uint32_t.  G2H() converts a guest address to a host pointer.
 * In the wasm build (GUEST_IDENTITY) guest address == wasm linear-memory address.
 */
#ifndef SIMS3_CPU_H
#define SIMS3_CPU_H
#include <stdint.h>
#include <string.h>
#include <math.h>

typedef struct CPU {
    uint32_t r[16];          /* r[13]=sp r[14]=lr; only r0-r3,r7,r12,sp,lr are meaningful across calls */
    uint32_t unwinding;      /* nonzero while an SjLj exception propagates */
    uint32_t unwind_target;  /* guest address of the target _Unwind_FunctionContext */
    uint32_t sjlj_head;      /* guest: top of SjLj function-context stack */
    uint32_t thread_id;
    uint32_t stack_lo, stack_hi;
    uint32_t depth;
} CPU;

typedef void (*GuestFn)(CPU *c);
struct FuncEntry { uint32_t addr, end; GuestFn fn; const char *name; };
struct ImportEntry { const char *name; GuestFn fn; };

#ifdef GUEST_IDENTITY
#define G2H(a) ((uint8_t *)(uintptr_t)(uint32_t)(a))
#define H2G(p) ((uint32_t)(uintptr_t)(p))
#else
extern uint8_t *guest_base;
#define G2H(a) (guest_base + (uint32_t)(a))
#define H2G(p) ((uint32_t)((uint8_t *)(p) - guest_base))
#endif

typedef uint16_t u16u __attribute__((aligned(1), may_alias));
typedef uint32_t u32u __attribute__((aligned(1), may_alias));
typedef uint64_t u64u __attribute__((aligned(1), may_alias));

#define LD8(a)  (*(uint8_t *)G2H(a))
#define LD16(a) (*(u16u *)G2H(a))
#define LD32(a) (*(u32u *)G2H(a))
#define LD64(a) (*(u64u *)G2H(a))
#define ST8(a, x)  (*(uint8_t *)G2H(a) = (uint8_t)(x))
#define ST16(a, x) (*(u16u *)G2H(a) = (uint16_t)(x))
#define ST32(a, x) (*(u32u *)G2H(a) = (uint32_t)(x))
#define ST64(a, x) (*(u64u *)G2H(a) = (uint64_t)(x))

/* runtime services used by generated code */
void call_indirect(CPU *c, uint32_t target);
void hle_unimplemented(CPU *c, const char *name);
void trap_unimpl(CPU *c, uint32_t addr, const char *what) __attribute__((noreturn));
void trap_insn(CPU *c, uint32_t addr) __attribute__((noreturn));
void trap_jt(CPU *c, uint32_t addr, uint32_t idx) __attribute__((noreturn));
void trap_falloff(CPU *c, uint32_t addr) __attribute__((noreturn));
void trap_badresume(CPU *c, uint32_t pc) __attribute__((noreturn));
#define TRAP_UNIMPL(c, a, s) trap_unimpl(c, a, s)
#define TRAP_INSN(c, a) trap_insn(c, a)
#define TRAP_JT(c, a, i) trap_jt(c, a, i)
#define TRAP_FALLOFF(c, a) trap_falloff(c, a)
#define TRAP_BADRESUME(c, pc) trap_badresume(c, pc)

#define ENTRY_REGS \
    uint32_t r0 = c->r[0], r1 = c->r[1], r2 = c->r[2], r3 = c->r[3], r4 = 0, r5 = 0, r6 = 0, r7 = c->r[7], \
             r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = c->r[12], sp = c->r[13], lr = c->r[14]; \
    uint32_t n = 0, z = 0, cf = 0, v = 0, fn = 0, fz = 0, fc = 0, fv = 0, fpscr_rest = 0; \
    uint64_t d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0, d11 = 0, \
             d12 = 0, d13 = 0, d14 = 0, d15 = 0, d16 = 0, d17 = 0, d18 = 0, d19 = 0, d20 = 0, d21 = 0, d22 = 0, \
             d23 = 0, d24 = 0, d25 = 0, d26 = 0, d27 = 0, d28 = 0, d29 = 0, d30 = 0, d31 = 0; \
    const uint32_t entry_sp = sp; (void)entry_sp; (void)lr; (void)fpscr_rest

#define SPILL() (c->r[0] = r0, c->r[1] = r1, c->r[2] = r2, c->r[3] = r3, c->r[7] = r7, c->r[12] = r12, c->r[13] = sp)
#define RELOAD() (r0 = c->r[0], r1 = c->r[1], r2 = c->r[2], r3 = c->r[3], r12 = c->r[12])
#define UNWIND_CHECK() if (__builtin_expect(c->unwinding != 0, 0)) goto unwind
#define CALL(f, ret)  do { SPILL(); c->r[14] = lr = (ret); f(c); RELOAD(); UNWIND_CHECK(); } while (0)
#define CALLH(f, ret) do { SPILL(); c->r[14] = lr = (ret); f(c); RELOAD(); UNWIND_CHECK(); } while (0)
#define CALLI(t, ret) do { uint32_t _t = (t); SPILL(); c->r[14] = lr = (ret); call_indirect(c, _t); RELOAD(); UNWIND_CHECK(); } while (0)
#define TAIL(f)  do { SPILL(); c->r[14] = lr; f(c); return; } while (0)
#define TAILH(f) do { SPILL(); c->r[14] = lr; f(c); return; } while (0)
#define TAILI(t) do { uint32_t _t = (t); SPILL(); c->r[14] = lr; call_indirect(c, _t); return; } while (0)
#ifdef CHECK_SP
void trap_sp(CPU *c, uint32_t entry, uint32_t now);
#define RETURN do { if (sp != entry_sp) trap_sp(c, entry_sp, sp); c->r[0] = r0; c->r[1] = r1; c->r[2] = r2; c->r[3] = r3; return; } while (0)
#else
#define RETURN do { c->r[0] = r0; c->r[1] = r1; c->r[2] = r2; c->r[3] = r3; return; } while (0)
#endif

/* ---------------------------------------------------------------- integer helpers */
#define ROR32(x, s) ((uint32_t)(((uint32_t)(x) >> (s)) | ((uint32_t)(x) << (32 - (s)))))
static inline uint32_t LSLR(uint32_t x, uint32_t s) { s &= 0xff; return s >= 32 ? 0 : x << s; }
static inline uint32_t LSRR(uint32_t x, uint32_t s) { s &= 0xff; return s >= 32 ? 0 : x >> s; }
static inline uint32_t ASRR(uint32_t x, uint32_t s) { s &= 0xff; return (uint32_t)((int32_t)x >> (s >= 32 ? 31 : s)); }
static inline uint32_t RORR(uint32_t x, uint32_t s) { s &= 31; return s ? ROR32(x, s) : x; }
static inline uint32_t LSLR_C(uint32_t x, uint32_t s, uint32_t c) { s &= 0xff; if (!s) return c; if (s < 32) return (x >> (32 - s)) & 1; if (s == 32) return x & 1; return 0; }
static inline uint32_t LSRR_C(uint32_t x, uint32_t s, uint32_t c) { s &= 0xff; if (!s) return c; if (s < 32) return (x >> (s - 1)) & 1; if (s == 32) return x >> 31; return 0; }
static inline uint32_t ASRR_C(uint32_t x, uint32_t s, uint32_t c) { s &= 0xff; if (!s) return c; if (s < 32) return (x >> (s - 1)) & 1; return x >> 31; }
static inline uint32_t RORR_C(uint32_t x, uint32_t s, uint32_t c) { s &= 0xff; if (!s) return c; s &= 31; return s ? (x >> (s - 1)) & 1 : x >> 31; }
static inline uint32_t CLZ32(uint32_t x) { return x ? (uint32_t)__builtin_clz(x) : 32; }
static inline uint32_t RBIT32(uint32_t x) { uint32_t r = 0; for (int i = 0; i < 32; i++) if (x & (1u << i)) r |= 1u << (31 - i); return r; }
static inline uint32_t USAT(uint32_t x, int b) { int32_t v = (int32_t)x; int32_t m = (int32_t)((1u << b) - 1); return (uint32_t)(v < 0 ? 0 : v > m ? m : v); }
static inline uint32_t SSAT(uint32_t x, int b) { int32_t v = (int32_t)x; int32_t m = (1 << (b - 1)) - 1; return (uint32_t)(v < -m - 1 ? -m - 1 : v > m ? m : v); }
static inline uint32_t SDIV(uint32_t a, uint32_t b) { if (!b) return 0; if (a == 0x80000000u && b == 0xffffffffu) return a; return (uint32_t)((int32_t)a / (int32_t)b); }
static inline uint32_t UDIV(uint32_t a, uint32_t b) { return b ? a / b : 0; }

#define ADDC(res, x, y, cin) do { uint32_t _x = (x), _y = (y); uint64_t _s = (uint64_t)_x + _y + (cin); \
    res = (uint32_t)_s; cf = (uint32_t)(_s >> 32); v = ((~(_x ^ _y)) & (_x ^ res)) >> 31; n = res >> 31; z = (res == 0); } while (0)
#define SUBC(res, x, y, cin) ADDC(res, x, ~(uint32_t)(y), cin)

/* ---------------------------------------------------------------- VFP helpers */
static inline float U2F(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static inline uint32_t F2U(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline double U2D(uint64_t u) { double f; memcpy(&f, &u, 8); return f; }
static inline uint64_t D2U(double f) { uint64_t u; memcpy(&u, &f, 8); return u; }
#define GETS(dk, hi) ((uint32_t)((dk) >> ((hi) * 32)))
#define SETS(dk, hi, val) ((dk) = (hi) ? (((dk) & 0xffffffffull) | ((uint64_t)(uint32_t)(val) << 32)) \
                                        : (((dk) & 0xffffffff00000000ull) | (uint32_t)(val)))
#define FCMP(a, b) do { double _a = (a), _b = (b); \
    if (_a != _a || _b != _b) { fn = 0; fz = 0; fc = 1; fv = 1; } \
    else if (_a == _b) { fn = 0; fz = 1; fc = 1; fv = 0; } \
    else if (_a < _b) { fn = 1; fz = 0; fc = 0; fv = 0; } \
    else { fn = 0; fz = 0; fc = 1; fv = 0; } } while (0)
/* VCVT float->int: round toward zero, saturate, NaN -> 0 (ARM semantics) */
static inline int32_t CVT_S32(double x) { if (x != x) return 0; if (x >= 2147483647.0) return 2147483647; if (x <= -2147483648.0) return (int32_t)0x80000000; return (int32_t)x; }
static inline uint32_t CVT_U32(double x) { if (x != x || x <= 0.0) return 0; if (x >= 4294967295.0) return 0xffffffffu; return (uint32_t)x; }
static inline int32_t CVT_S16(double x) { int32_t v = CVT_S32(x); return v > 32767 ? 32767 : v < -32768 ? -32768 : v; }
static inline uint32_t CVT_U16(double x) { uint32_t v = CVT_U32(x); return v > 65535 ? 65535 : v; }
static inline int32_t CVT_S32_RN(double x) { return CVT_S32(nearbyint(x)); }
static inline uint32_t CVT_U32_RN(double x) { return CVT_U32(nearbyint(x)); }

/* ---------------------------------------------------------------- NEON helpers (d register = uint64_t) */
static inline float L0F(uint64_t d) { return U2F((uint32_t)d); }
static inline float L1F(uint64_t d) { return U2F((uint32_t)(d >> 32)); }
static inline uint64_t PKF(float a, float b) { return (uint64_t)F2U(a) | ((uint64_t)F2U(b) << 32); }
static inline uint64_t PK32(uint32_t a, uint32_t b) { return (uint64_t)a | ((uint64_t)b << 32); }
/* NEON float arithmetic flushes denormals to zero (ARM ARM A2.7.4 'Standard FPSCR value') */
static inline float FTZ(float f) { return (fabsf(f) < 1.17549435e-38f) ? copysignf(0.0f, f) : f; }
static inline float NEONQ(float f) { return f != f ? U2F(0x7fc00000u) : FTZ(f); }
static inline uint64_t V_ADD_F32(uint64_t a, uint64_t b) { return PKF(NEONQ(FTZ(L0F(a)) + FTZ(L0F(b))), NEONQ(FTZ(L1F(a)) + FTZ(L1F(b)))); }
static inline uint64_t V_SUB_F32(uint64_t a, uint64_t b) { return PKF(NEONQ(FTZ(L0F(a)) - FTZ(L0F(b))), NEONQ(FTZ(L1F(a)) - FTZ(L1F(b)))); }
static inline uint64_t V_MUL_F32(uint64_t a, uint64_t b) { return PKF(NEONQ(FTZ(L0F(a)) * FTZ(L0F(b))), NEONQ(FTZ(L1F(a)) * FTZ(L1F(b)))); }
static inline uint64_t V_MUL_F32S(uint64_t a, uint64_t m, int lane) { float s = lane ? L1F(m) : L0F(m); return V_MUL_F32(a, PKF(s, s)); }
static inline uint64_t V_MLA_F32(uint64_t d, uint64_t a, uint64_t b) { return V_ADD_F32(d, V_MUL_F32(a, b)); }
static inline uint64_t V_MLS_F32(uint64_t d, uint64_t a, uint64_t b) { return V_SUB_F32(d, V_MUL_F32(a, b)); }
static inline uint64_t V_MLA_F32S(uint64_t d, uint64_t a, uint64_t m, int lane) { return V_ADD_F32(d, V_MUL_F32S(a, m, lane)); }
static inline uint64_t V_MLS_F32S(uint64_t d, uint64_t a, uint64_t m, int lane) { return V_SUB_F32(d, V_MUL_F32S(a, m, lane)); }
static inline float fmaxN(float a, float b) { if (a != a || b != b) return U2F(0x7fc00000u); a = FTZ(a); b = FTZ(b); if (a == 0 && b == 0) return (signbit(a) && signbit(b)) ? -0.0f : 0.0f; return a > b ? a : b; }
static inline float fminN(float a, float b) { if (a != a || b != b) return U2F(0x7fc00000u); a = FTZ(a); b = FTZ(b); if (a == 0 && b == 0) return (signbit(a) || signbit(b)) ? -0.0f : 0.0f; return a < b ? a : b; }
static inline uint64_t V_MAX_F32(uint64_t a, uint64_t b) { return PKF(fmaxN(L0F(a), L0F(b)), fmaxN(L1F(a), L1F(b))); }
static inline uint64_t V_MIN_F32(uint64_t a, uint64_t b) { return PKF(fminN(L0F(a), L0F(b)), fminN(L1F(a), L1F(b))); }
static inline uint64_t V_ABD_F32(uint64_t a, uint64_t b) { return PKF(NEONQ(fabsf(FTZ(L0F(a)) - FTZ(L0F(b)))), NEONQ(fabsf(FTZ(L1F(a)) - FTZ(L1F(b))))); }
static inline uint64_t V_PADD_F32(uint64_t a, uint64_t b) { return PKF(NEONQ(FTZ(L0F(a)) + FTZ(L1F(a))), NEONQ(FTZ(L0F(b)) + FTZ(L1F(b)))); }
static inline uint64_t V_PADD_I32(uint64_t a, uint64_t b) { return PK32((uint32_t)a + (uint32_t)(a >> 32), (uint32_t)b + (uint32_t)(b >> 32)); }
static inline uint64_t V_NEG_F32(uint64_t a) { return a ^ 0x8000000080000000ull; }
static inline uint64_t V_ABS_F32(uint64_t a) { return a & 0x7fffffff7fffffffull; }
static inline uint64_t V_NEG_S32(uint64_t a) { return PK32(-(uint32_t)a, -(uint32_t)(a >> 32)); }
static inline uint64_t V_ABS_S32(uint64_t a) { int32_t x = (int32_t)a, y = (int32_t)(a >> 32); return PK32((uint32_t)(x < 0 ? -x : x), (uint32_t)(y < 0 ? -y : y)); }
static inline uint64_t V_ORR(uint64_t a, uint64_t b) { return a | b; }
static inline uint64_t V_AND(uint64_t a, uint64_t b) { return a & b; }
static inline uint64_t V_EOR(uint64_t a, uint64_t b) { return a ^ b; }
static inline uint64_t V_BIC(uint64_t a, uint64_t b) { return a & ~b; }
static inline uint64_t V_ORN(uint64_t a, uint64_t b) { return a | ~b; }
static inline uint64_t V_MVN(uint64_t a) { return ~a; }
static inline uint64_t V_BSL(uint64_t d, uint64_t a, uint64_t b) { return (a & d) | (b & ~d); }
static inline uint64_t V_BIT(uint64_t d, uint64_t a, uint64_t b) { return (a & b) | (d & ~b); }
static inline uint64_t V_BIF(uint64_t d, uint64_t a, uint64_t b) { return (d & b) | (a & ~b); }
#define LANEOP(name, T, bits, expr) static inline uint64_t name(uint64_t a, uint64_t b) { uint64_t r = 0; \
    for (int i = 0; i < 64 / bits; i++) { T x = (T)(a >> (i * bits)), y = (T)(b >> (i * bits)); T o = (T)(expr); \
    r |= ((uint64_t)o & ((bits == 64) ? ~0ull : ((1ull << bits) - 1))) << (i * bits); } return r; }
LANEOP(V_ADD_I8, uint8_t, 8, x + y)
LANEOP(V_ADD_I16, uint16_t, 16, x + y)
LANEOP(V_ADD_I32, uint32_t, 32, x + y)
LANEOP(V_SUB_I8, uint8_t, 8, x - y)
LANEOP(V_SUB_I16, uint16_t, 16, x - y)
LANEOP(V_SUB_I32, uint32_t, 32, x - y)
LANEOP(V_MUL_I32, uint32_t, 32, x * y)
LANEOP(V_MUL_I16, uint16_t, 16, x * y)
LANEOP(V_MAX_S32, int32_t, 32, x > y ? x : y)
LANEOP(V_MIN_S32, int32_t, 32, x < y ? x : y)
LANEOP(V_MAX_U32, uint32_t, 32, x > y ? x : y)
LANEOP(V_MIN_U32, uint32_t, 32, x < y ? x : y)
LANEOP(V_CEQ_I8, uint8_t, 8, x == y ? 0xff : 0)
LANEOP(V_CEQ_I16, uint16_t, 16, x == y ? 0xffff : 0)
LANEOP(V_CEQ_I32, uint32_t, 32, x == y ? 0xffffffffu : 0)
LANEOP(V_CGT_S32, int32_t, 32, x > y ? -1 : 0)
LANEOP(V_CGE_S32, int32_t, 32, x >= y ? -1 : 0)
LANEOP(V_CGT_S16, int16_t, 16, x > y ? -1 : 0)
LANEOP(V_CGT_U32, uint32_t, 32, x > y ? 0xffffffffu : 0)
LANEOP(V_CGE_U32, uint32_t, 32, x >= y ? 0xffffffffu : 0)
LANEOP(V_TST_32, uint32_t, 32, (x & y) ? 0xffffffffu : 0)
static inline uint64_t V_CEQ0_I16(uint64_t a) { return V_CEQ_I16(a, 0); }
static inline uint64_t V_CGT0_S16(uint64_t a) { return V_CGT_S16(a, 0); }
static inline uint64_t V_CEQ0_I8(uint64_t a) { return V_CEQ_I8(a, 0); }
static inline uint64_t V_ADD_I64(uint64_t a, uint64_t b) { return a + b; }
static inline uint64_t V_SUB_I64(uint64_t a, uint64_t b) { return a - b; }
static inline uint32_t fcmpmask(int t) { return t ? 0xffffffffu : 0; }
static inline uint64_t V_CEQ_F32(uint64_t a, uint64_t b) { return PK32(fcmpmask(FTZ(L0F(a)) == FTZ(L0F(b))), fcmpmask(FTZ(L1F(a)) == FTZ(L1F(b)))); }
static inline uint64_t V_CGT_F32(uint64_t a, uint64_t b) { return PK32(fcmpmask(FTZ(L0F(a)) > FTZ(L0F(b))), fcmpmask(FTZ(L1F(a)) > FTZ(L1F(b)))); }
static inline uint64_t V_CGE_F32(uint64_t a, uint64_t b) { return PK32(fcmpmask(FTZ(L0F(a)) >= FTZ(L0F(b))), fcmpmask(FTZ(L1F(a)) >= FTZ(L1F(b)))); }
static inline uint64_t V_CGT0_F32(uint64_t a) { return V_CGT_F32(a, 0); }
static inline uint64_t V_CGE0_F32(uint64_t a) { return V_CGE_F32(a, 0); }
static inline uint64_t V_CEQ0_F32(uint64_t a) { return V_CEQ_F32(a, 0); }
static inline uint64_t V_CLT0_F32(uint64_t a) { return PK32(fcmpmask(FTZ(L0F(a)) < 0), fcmpmask(FTZ(L1F(a)) < 0)); }
static inline uint64_t V_CLE0_F32(uint64_t a) { return PK32(fcmpmask(FTZ(L0F(a)) <= 0), fcmpmask(FTZ(L1F(a)) <= 0)); }
static inline uint64_t V_CEQ0_I32(uint64_t a) { return V_CEQ_I32(a, 0); }
static inline uint64_t V_CGT0_S32(uint64_t a) { return V_CGT_S32(a, 0); }
static inline uint64_t V_CGE0_S32(uint64_t a) { return V_CGE_S32(a, 0); }
static inline uint64_t V_CLT0_S32(uint64_t a) { return V_CGT_S32(0, a); }
static inline uint64_t V_CLE0_S32(uint64_t a) { return V_CGE_S32(0, a); }
static inline float recpe(float x) { return 1.0f / x; } /* NOTE: ARM VRECPE is an 8-bit estimate; see DECISIONS.md */
static inline float rsqrte(float x) { return 1.0f / sqrtf(x); }
static inline uint64_t V_RECPE_F32(uint64_t a) { return PKF(recpe(L0F(a)), recpe(L1F(a))); }
static inline uint64_t V_RSQRTE_F32(uint64_t a) { return PKF(rsqrte(L0F(a)), rsqrte(L1F(a))); }
static inline uint64_t V_RECPS_F32(uint64_t a, uint64_t b) { return PKF(2.0f - L0F(a) * L0F(b), 2.0f - L1F(a) * L1F(b)); }
static inline uint64_t V_RSQRTS_F32(uint64_t a, uint64_t b) { return PKF((3.0f - L0F(a) * L0F(b)) / 2.0f, (3.0f - L1F(a) * L1F(b)) / 2.0f); }
static inline uint64_t V_DUP32(uint32_t x) { return PK32(x, x); }
static inline uint64_t V_DUP16(uint32_t x) { uint64_t v = x & 0xffff; return v | (v << 16) | (v << 32) | (v << 48); }
static inline uint64_t V_DUP8(uint32_t x) { uint64_t v = x & 0xff; v |= v << 8; v |= v << 16; return v | (v << 32); }
#define SHIFTOP(name, T, bits, expr) static inline uint64_t name(uint64_t a, int s) { uint64_t r = 0; \
    for (int i = 0; i < 64 / bits; i++) { T x = (T)(a >> (i * bits)); T o = (T)(expr); \
    r |= ((uint64_t)o & ((bits == 64) ? ~0ull : ((1ull << bits) - 1))) << (i * bits); } return r; }
SHIFTOP(V_SHL8, uint8_t, 8, s >= 8 ? 0 : x << s)
SHIFTOP(V_SHL16, uint16_t, 16, s >= 16 ? 0 : x << s)
SHIFTOP(V_SHL32, uint32_t, 32, s >= 32 ? 0 : x << s)
static inline uint64_t V_SHL64(uint64_t a, int s) { return s >= 64 ? 0 : a << s; }
SHIFTOP(V_SHR_U8, uint8_t, 8, s >= 8 ? 0 : x >> s)
SHIFTOP(V_SHR_U16, uint16_t, 16, s >= 16 ? 0 : x >> s)
SHIFTOP(V_SHR_U32, uint32_t, 32, s >= 32 ? 0 : x >> s)
static inline uint64_t V_SHR_U64(uint64_t a, int s) { return s >= 64 ? 0 : a >> s; }
SHIFTOP(V_SHR_S8, int8_t, 8, x >> (s >= 8 ? 7 : s))
SHIFTOP(V_SHR_S16, int16_t, 16, x >> (s >= 16 ? 15 : s))
SHIFTOP(V_SHR_S32, int32_t, 32, x >> (s >= 32 ? 31 : s))
static inline uint64_t V_SHR_S64(uint64_t a, int s) { return (uint64_t)((int64_t)a >> (s >= 64 ? 63 : s)); }
static inline uint64_t V_SRA_U32(uint64_t d, uint64_t a, int s) { return V_ADD_I32(d, V_SHR_U32(a, s)); }
static inline uint64_t V_SRA_S32(uint64_t d, uint64_t a, int s) { return V_ADD_I32(d, V_SHR_S32(a, s)); }
static inline uint64_t V_SRA_U64(uint64_t d, uint64_t a, int s) { return d + V_SHR_U64(a, s); }
static inline uint64_t V_SRA_S64(uint64_t d, uint64_t a, int s) { return d + V_SHR_S64(a, s); }
static inline uint64_t V_SHLR_S32(uint64_t a, uint64_t b) { uint64_t r = 0; for (int i = 0; i < 2; i++) { int32_t x = (int32_t)(a >> 32 * i); int8_t s = (int8_t)(b >> 32 * i); int32_t o = s >= 0 ? (s >= 32 ? 0 : (int32_t)((uint32_t)x << s)) : (s <= -32 ? (x >> 31) : (x >> -s)); r |= (uint64_t)(uint32_t)o << 32 * i; } return r; }
static inline uint64_t V_SHLR_U32(uint64_t a, uint64_t b) { uint64_t r = 0; for (int i = 0; i < 2; i++) { uint32_t x = (uint32_t)(a >> 32 * i); int8_t s = (int8_t)(b >> 32 * i); uint32_t o = s >= 0 ? (s >= 32 ? 0 : x << s) : (s <= -32 ? 0 : x >> -s); r |= (uint64_t)o << 32 * i; } return r; }
static inline uint64_t V_SHLR_U64(uint64_t a, uint64_t b) { int8_t s = (int8_t)b; return s >= 0 ? (s >= 64 ? 0 : a << s) : (s <= -64 ? 0 : a >> -s); }
static inline uint64_t V_SHLR_S64(uint64_t a, uint64_t b) { int8_t s = (int8_t)b; return s >= 0 ? (s >= 64 ? 0 : a << s) : (uint64_t)((int64_t)a >> (s <= -64 ? 63 : -s)); }
static inline uint64_t V_MOVL_U32(uint64_t s, int hi) { return hi ? (s >> 32) : (uint32_t)s; }
static inline uint64_t V_MOVL_S32(uint64_t s, int hi) { return (uint64_t)(int64_t)(int32_t)(hi ? (s >> 32) : s); }
static inline uint64_t V_MOVL_U16(uint64_t s, int hi) { uint32_t w = (uint32_t)(hi ? s >> 32 : s); return PK32(w & 0xffff, w >> 16); }
static inline uint64_t V_MOVL_S16(uint64_t s, int hi) { uint32_t w = (uint32_t)(hi ? s >> 32 : s); return PK32((uint32_t)(int32_t)(int16_t)w, (uint32_t)(int32_t)(int16_t)(w >> 16)); }
static inline uint64_t V_MOVL_U8(uint64_t s, int hi) { uint32_t w = (uint32_t)(hi ? s >> 32 : s); uint64_t r = 0; for (int i = 0; i < 4; i++) r |= (uint64_t)((w >> 8 * i) & 0xff) << 16 * i; return r; }
static inline uint64_t V_MOVL_S8(uint64_t s, int hi) { uint32_t w = (uint32_t)(hi ? s >> 32 : s); uint64_t r = 0; for (int i = 0; i < 4; i++) r |= (uint64_t)(uint16_t)(int16_t)(int8_t)(w >> 8 * i) << 16 * i; return r; }
static inline uint64_t V_MOVN64(uint64_t a, uint64_t b) { return PK32((uint32_t)a, (uint32_t)b); }
static inline uint64_t V_MOVN32(uint64_t a, uint64_t b) { return (uint64_t)(a & 0xffff) | ((a >> 16) & 0xffff0000ull) | ((b & 0xffff) << 32) | (((b >> 32) & 0xffff) << 48); }
static inline uint64_t V_MOVN16(uint64_t a, uint64_t b) { uint64_t r = 0; for (int i = 0; i < 4; i++) { r |= ((a >> 16 * i) & 0xff) << 8 * i; r |= ((b >> 16 * i) & 0xff) << (32 + 8 * i); } return r; }
static inline uint64_t V_SHRN64(uint64_t a, uint64_t b, int s) { return PK32((uint32_t)(a >> s), (uint32_t)(b >> s)); }
static inline uint64_t V_SHRN32(uint64_t a, uint64_t b, int s) { return V_MOVN32(V_SHR_U32(a, s), V_SHR_U32(b, s)); }
static inline uint64_t V_EXT64(uint64_t a, uint64_t b, int nbytes) { if (!nbytes) return a; return (a >> (8 * nbytes)) | (b << (64 - 8 * nbytes)); }
static inline uint64_t V_VREV64_8(uint64_t a) { return __builtin_bswap64(a); }
static inline uint64_t V_VREV64_16(uint64_t a) { uint64_t r = 0; for (int i = 0; i < 4; i++) r |= ((a >> 16 * i) & 0xffff) << 16 * (3 - i); return r; }
static inline uint64_t V_VREV64_32(uint64_t a) { return (a >> 32) | (a << 32); }
static inline uint64_t V_VREV32_8(uint64_t a) { return PK32(__builtin_bswap32((uint32_t)a), __builtin_bswap32((uint32_t)(a >> 32))); }
static inline uint64_t V_VREV32_16(uint64_t a) { return PK32(ROR32((uint32_t)a, 16), ROR32((uint32_t)(a >> 32), 16)); }
static inline uint64_t V_VREV16_8(uint64_t a) { return ((a >> 8) & 0x00ff00ff00ff00ffull) | ((a << 8) & 0xff00ff00ff00ff00ull); }
static inline void V_VZIP32(uint64_t *a, uint64_t *b) { uint64_t x = *a, y = *b; *a = PK32((uint32_t)x, (uint32_t)y); *b = PK32((uint32_t)(x >> 32), (uint32_t)(y >> 32)); }
static inline void V_VUZP32(uint64_t *a, uint64_t *b) { V_VZIP32(a, b); }
static inline void V_VTRN32(uint64_t *a, uint64_t *b) { uint64_t x = *a, y = *b; *a = PK32((uint32_t)x, (uint32_t)y); *b = PK32((uint32_t)(x >> 32), (uint32_t)(y >> 32)); }
static inline void V_VZIP16(uint64_t *a, uint64_t *b) { uint16_t x[4], y[4], o[8]; memcpy(x, a, 8); memcpy(y, b, 8); for (int i = 0; i < 4; i++) { o[2 * i] = x[i]; o[2 * i + 1] = y[i]; } memcpy(a, o, 8); memcpy(b, o + 4, 8); }
static inline void V_VZIP8(uint64_t *a, uint64_t *b) { uint8_t x[8], y[8], o[16]; memcpy(x, a, 8); memcpy(y, b, 8); for (int i = 0; i < 8; i++) { o[2 * i] = x[i]; o[2 * i + 1] = y[i]; } memcpy(a, o, 8); memcpy(b, o + 8, 8); }
static inline void V_VUZP16(uint64_t *a, uint64_t *b) { uint16_t x[8], o[8]; memcpy(x, a, 8); memcpy(x + 4, b, 8); for (int i = 0; i < 4; i++) { o[i] = x[2 * i]; o[4 + i] = x[2 * i + 1]; } memcpy(a, o, 8); memcpy(b, o + 4, 8); }
static inline void V_VUZP8(uint64_t *a, uint64_t *b) { uint8_t x[16], o[16]; memcpy(x, a, 8); memcpy(x + 8, b, 8); for (int i = 0; i < 8; i++) { o[i] = x[2 * i]; o[8 + i] = x[2 * i + 1]; } memcpy(a, o, 8); memcpy(b, o + 8, 8); }
static inline void V_VTRN16(uint64_t *a, uint64_t *b) { uint16_t x[4], y[4]; memcpy(x, a, 8); memcpy(y, b, 8); for (int i = 0; i < 4; i += 2) { uint16_t t = x[i + 1]; x[i + 1] = y[i]; y[i] = t; } memcpy(a, x, 8); memcpy(b, y, 8); }
static inline void V_VTRN8(uint64_t *a, uint64_t *b) { uint8_t x[8], y[8]; memcpy(x, a, 8); memcpy(y, b, 8); for (int i = 0; i < 8; i += 2) { uint8_t t = x[i + 1]; x[i + 1] = y[i]; y[i] = t; } memcpy(a, x, 8); memcpy(b, y, 8); }
/* VCVT vector (2 lanes), fixed-point fraction bits fb */
static inline uint64_t VCVT_F32_S32(uint64_t a, int fb) { float k = (float)(1u << fb); return PKF((float)(int32_t)a / k, (float)(int32_t)(a >> 32) / k); }
static inline uint64_t VCVT_F32_U32(uint64_t a, int fb) { float k = (float)(1u << fb); return PKF((float)(uint32_t)a / k, (float)(uint32_t)(a >> 32) / k); }
static inline uint64_t VCVT_S32_F32(uint64_t a, int fb) { double k = (double)(1u << fb); return PK32((uint32_t)CVT_S32(FTZ(L0F(a)) * k), (uint32_t)CVT_S32(FTZ(L1F(a)) * k)); }
static inline uint64_t VCVT_U32_F32(uint64_t a, int fb) { double k = (double)(1u << fb); return PK32(CVT_U32(FTZ(L0F(a)) * k), CVT_U32(FTZ(L1F(a)) * k)); }
/* VLDn/VSTn interleaved (multiple structures, one register per structure element) */
static inline void V_LDN(uint32_t a, uint64_t **r, int n, int esz) {
    int eb = esz / 8, per = 8 / eb;
    for (int e = 0; e < per; e++) for (int j = 0; j < n; j++) {
        uint64_t v = 0; memcpy(&v, G2H(a + (e * n + j) * eb), eb);
        *r[j] = (*r[j] & ~(((esz == 64) ? ~0ull : ((1ull << esz) - 1)) << (e * esz))) | (v << (e * esz));
    }
}
static inline void V_STN(uint32_t a, uint64_t **r, int n, int esz) {
    int eb = esz / 8, per = 8 / eb;
    for (int e = 0; e < per; e++) for (int j = 0; j < n; j++) { uint64_t v = *r[j] >> (e * esz); memcpy(G2H(a + (e * n + j) * eb), &v, eb); }
}

#ifndef NO_RECOMP_DECLS
#include "recomp_decls.h"
#include "imports.h"
#endif
#endif
