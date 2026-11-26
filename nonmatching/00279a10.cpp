// FIXME(lane): not matching; origin: m2c (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

#define NULL 0
// mechanical stack-frame stand-in for m2c's bare `sp` symbol
static u8 _m2c_stack[0x2000];
#define sp ((void*)_m2c_stack)
#define _GHIDRA_BYTES(NAME, N, AL) struct __attribute__((aligned(AL))) NAME {     u8 b[N];     NAME() {}     template <class T> NAME(const T &v) { *(T*)b = v; }     template <class T> NAME &operator=(const T &v) { *(T*)b = v; return *this; }     template <class T> bool operator==(const T &o) const { return (s64)*this == (s64)o; }     template <class T> bool operator!=(const T &o) const { return (s64)*this != (s64)o; }     template <class T> operator T*() const { return (T*)b; }     operator s64() const { return *(s64*)b; }     u8 &operator[](int i) { return b[i]; }     u8 *operator+(int o) const { return (u8*)b + o; } };
_GHIDRA_BYTES(Q16, 16, 16)
_GHIDRA_BYTES(B12, 12, 4)
_GHIDRA_BYTES(B8, 8, 8)
_GHIDRA_BYTES(B4, 4, 4)
// Untyped global cell (used for DAT_ tokens on the second attempt): Ghidra types each DAT_
// by its use site (uint*, char, float, ...); AnyCell reads/writes as whatever that is, and
// arithmetic / deref / index / address-of on it yield further untyped values.
struct AnyCell;
struct AnyPtr {
    void *p;
    template <class T> operator T*() const { return (T*)p; }
    AnyCell &operator*() const { return *(AnyCell*)p; }
    AnyCell &operator[](int i) const;
    operator s64() const { return (s64)(u32)(unsigned long)p; }
    AnyPtr operator+(s64 o) const { AnyPtr r; r.p = (u8*)p + o; return r; }
    AnyPtr operator-(s64 o) const { AnyPtr r; r.p = (u8*)p - o; return r; }
    template <class T> bool operator==(T *q) const { return p == (void*)q; }
    template <class T> bool operator!=(T *q) const { return p != (void*)q; }
    bool operator==(s64 v) const { return (s64)*this == v; }
    bool operator!=(s64 v) const { return (s64)*this != v; }
};
struct AnyCell {
    u32 w;
    template <class T> operator T() const { return *(const T*)this; }
    operator s64() const { return *(const s32*)this; }
    operator Q16() const { return *(const Q16*)this; }
    operator B12() const { return *(const B12*)this; }
    operator B8() const { return *(const B8*)this; }
    operator B4() const { return *(const B4*)this; }
    template <class T> AnyCell &operator=(const T &v) { *(T*)this = v; return *this; }
    AnyCell &operator=(const AnyCell &v) { w = v.w; return *this; }
    template <class T> bool operator==(T *p) const { return *(T* const*)this == p; }
    template <class T> bool operator!=(T *p) const { return *(T* const*)this != p; }
    bool operator==(s64 v) const { return *(const s32*)this == v; }
    bool operator!=(s64 v) const { return *(const s32*)this != v; }
    bool operator==(const AnyCell &o) const { return w == o.w; }
    bool operator!=(const AnyCell &o) const { return w != o.w; }
    bool operator==(const AnyPtr &o) const { return (s64)*this == (s64)o; }
    bool operator!=(const AnyPtr &o) const { return (s64)*this != (s64)o; }
    bool operator<(const AnyCell &o) const { return (s32)w < (s32)o.w; }
    bool operator>(const AnyCell &o) const { return (s32)w > (s32)o.w; }
    bool operator<=(const AnyCell &o) const { return (s32)w <= (s32)o.w; }
    bool operator>=(const AnyCell &o) const { return (s32)w >= (s32)o.w; }
    AnyCell &operator*() const { return **(AnyCell* const*)this; }
    AnyCell &operator[](int i) const { return (*(AnyCell* const*)this)[i]; }
    AnyPtr operator&() const { AnyPtr r; r.p = (void*)this; return r; }
    AnyCell operator+(s64 v) const { AnyCell r; r.w = w + (u32)v; return r; }
    AnyCell operator-(s64 v) const { AnyCell r; r.w = w - (u32)v; return r; }
    AnyCell operator*(s64 v) const { AnyCell r; r.w = w * (u32)v; return r; }
    AnyCell operator&(s64 v) const { AnyCell r; r.w = w & (u32)v; return r; }
    AnyCell operator|(s64 v) const { AnyCell r; r.w = w | (u32)v; return r; }
    AnyCell operator^(s64 v) const { AnyCell r; r.w = w ^ (u32)v; return r; }
    AnyCell operator<<(s64 v) const { AnyCell r; r.w = w << (u32)v; return r; }
    AnyCell operator>>(s64 v) const { AnyCell r; r.w = w >> (u32)v; return r; }
    template <class T> AnyCell &operator+=(const T &v) { w += (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator-=(const T &v) { w -= (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator|=(const T &v) { w |= (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator&=(const T &v) { w &= (u32)(s64)v; return *this; }
    AnyCell &operator++() { ++w; return *this; }
    AnyCell &operator--() { --w; return *this; }
    AnyCell operator++(int) { AnyCell r = *this; ++w; return r; }
    AnyCell operator--(int) { AnyCell r = *this; --w; return r; }
    AnyCell operator()() const { return *this; }
    template <class A> AnyCell operator()(const A &) const { return *this; }
    template <class A, class B> AnyCell operator()(const A &, const B &) const { return *this; }
    template <class A, class B, class C> AnyCell operator()(const A &, const B &, const C &) const { return *this; }
    template <class A, class B, class C, class D> AnyCell operator()(const A &, const B &, const C &, const D &) const { return *this; }
    template <class A, class B, class C, class D, class E> AnyCell operator()(const A &, const B &, const C &, const D &, const E &) const { return *this; }
    template <class A, class B, class C, class D, class E, class F> AnyCell operator()(const A &, const B &, const C &, const D &, const E &, const F &) const { return *this; }
};
inline AnyCell &AnyPtr::operator[](int i) const { return ((AnyCell*)p)[i]; }
template <class T> inline bool operator==(T *p, const AnyCell &c) { return c == p; }
template <class T> inline bool operator!=(T *p, const AnyCell &c) { return c != p; }
template <class T> inline bool operator==(T *p, const AnyPtr &c) { return c == p; }
template <class T> inline bool operator!=(T *p, const AnyPtr &c) { return c != p; }
inline bool operator==(s64 v, const AnyCell &c) { return c == v; }
inline AnyPtr operator+(s64 v, const AnyPtr &p) { return p + v; }
inline AnyCell operator+(s64 v, const AnyCell &c) { return c + v; }
inline AnyCell operator-(s64 v, const AnyCell &c) { AnyCell r; r.w = (u32)v - c.w; return r; }
inline AnyCell operator*(s64 v, const AnyCell &c) { return c * v; }
inline AnyCell operator&(s64 v, const AnyCell &c) { return c & v; }
inline AnyCell operator|(s64 v, const AnyCell &c) { return c | v; }
inline bool operator!=(s64 v, const AnyCell &c) { return c != v; }
inline bool operator<(const AnyCell &c, s64 v) { return (s64)c < v; }
inline bool operator>(const AnyCell &c, s64 v) { return (s64)c > v; }
inline bool operator<=(const AnyCell &c, s64 v) { return (s64)c <= v; }
inline bool operator>=(const AnyCell &c, s64 v) { return (s64)c >= v; }
inline bool operator<(s64 v, const AnyCell &c) { return v < (s64)c; }
inline bool operator>(s64 v, const AnyCell &c) { return v > (s64)c; }
inline bool operator<=(s64 v, const AnyCell &c) { return v <= (s64)c; }
inline bool operator>=(s64 v, const AnyCell &c) { return v >= (s64)c; }
typedef u8 BADSPACEBASE;
// 128-bit lq/sq values (m2c s128/u128): 16-byte blocks (gcc 3.2 cannot convert to TImode)
typedef Q16 s128;
typedef Q16 u128;
// names m2c reads without declaring (spilled/saved registers, $fp frames, extra args)
static AnyCell saved_reg_ra, saved_reg_fp, saved_reg_gp, saved_reg_s0, saved_reg_s1, saved_reg_s2,
    saved_reg_s3, saved_reg_s4, saved_reg_s5, saved_reg_s6, saved_reg_s7, temp_fp, arg0, arg1, arg2,
    arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11;

/* m2c_macros.h (valid-syntax mode), inlined; M2C_ERROR/M2C_UNK become untyped cells */
typedef s32 M2C_UNK;
typedef s8  M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_LWL(expr) (expr)
#define M2C_FIRST3BYTES(expr) (expr)
#define M2C_UNALIGNED32(expr) (expr)
static AnyCell M2C_ERRV;
#define M2C_ERROR(desc) M2C_ERRV
#define M2C_TRAP_IF(cond) (0)
#define M2C_BREAK() (0)
#define M2C_SYNC() (0)
#define GLUE_F64(a, b) (0.0)
#define MULT_HI(a, b) (0)
#define MULTU_HI(a, b) (0)
#define DMULT_HI(a, b) (0)
#define DMULTU_HI(a, b) (0)
#define CLZ(x) (0)
#define REVERSE_BITS(x) (0)
#define ROTATE_RIGHT(x, shift) (0)
#define BSWAP32(x) (0)
#define BSWAP16(x) (0)
#define BSWAP16X2(x) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#define M2C_MEMCPY_ALIGNED memcpy
#define M2C_MEMCPY_UNALIGNED memcpy
#define M2C_STRUCT_COPY memcpy
static inline void *memcpy(void *d, const void *s, u32 n) { return d; }

// m2c valid-syntax output for 0x00279a10, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00279A10 {
    /* 0x00 */ char pad0[0xD0];
};                                                  /* size = 0xD0 */

void *func_001A8110(void * = 0) asm("func_001A8110");
void func_00279A10(...) asm("_ZN2Tz9CmAbility15SortAbilityInfoEv");
void func_00279a10_impl(void) asm("_ZN2Tz9CmAbility15SortAbilityInfoEv");
void func_00279a10_impl(void) {
    s16 *temp_t3;
    s16 *var_t1;
    s16 *var_t3;
    s16 *var_t6;
    s16 temp_t7_3;
    s16 var_s0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_t7_2;
    s32 var_a2;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t2_3;
    s32 var_t4;
    s32 var_t4_2;
    s32 var_t4_3;
    s8 temp_t7;
    u8 var_t5;
    u8 var_t6_2;
    void *temp_t4;
    void *temp_t5;
    void *temp_t5_2;
    void *temp_t6;
    void *var_a1;
    void *var_t0;
    void *var_v0;

    temp_t6 = *(void **)0x35F230;
    temp_t7 = M2C_FIELD(temp_t6, s8 *, 7);
    var_v0 = NULL;
    if (temp_t7 != 0) {
        var_t4 = 0;
        if (temp_t7 > 0) {
            var_t6 = sp;
            do {
                *var_t6 = -1;
                var_t4 += 1;
                var_t6 += 2;
            } while (var_t4 < M2C_FIELD(temp_t6, s8 *, 7));
        }
        var_t6_2 = (u8) M2C_FIELD(*(s32 *)0x35F230, s8 *, 7);
        var_t4_2 = 0;
        if ((s8) var_t6_2 > 0) {
            do {
                temp_a2 = var_t4_2 + 1;
                var_t0 = (void *)0x360000;
                var_t2 = temp_a2;
                if (temp_a2 < (s8) var_t6_2) {
                    do {
                        temp_t5 = M2C_FIELD(var_t0, void **, -0xDD0);
                        temp_t1 = var_t2 * 8;
                        var_t2 += 1;
                        if (M2C_FIELD((temp_t1 + temp_t5), s8 *, 0x10) < M2C_FIELD(((var_t4_2 * 8) + temp_t5), s8 *, 0x10)) {
                            M2C_ERROR(/* unknown instruction: ldl $a1, 0x13($t4) */);
                            M2C_ERROR(/* unknown instruction: ldr $a1, 0xc($t4) */);
                            M2C_ERROR(/* unknown instruction: sdl $a1, 0xa7($sp) */);
                            M2C_ERROR(/* unknown instruction: sdr $a1, 0xa0($sp) */);
                            M2C_ERROR(/* unknown instruction: ldl $s0, 0x13($t3) */);
                            M2C_ERROR(/* unknown instruction: ldr $s0, 0xc($t3) */);
                            M2C_ERROR(/* unknown instruction: sdl $s0, 0x13($t4) */);
                            M2C_ERROR(/* unknown instruction: sdr $s0, 0xc($t4) */);
                            M2C_ERROR(/* unknown instruction: ldl $s0, 0xa7($sp) */);
                            M2C_ERROR(/* unknown instruction: ldr $s0, 0xa0($sp) */);
                            M2C_ERROR(/* unknown instruction: sdl $s0, 0x13($t7) */);
                            M2C_ERROR(/* unknown instruction: sdr $s0, 0xc($t7) */);
                        }
                        var_t0 = (void *)0x360000;
                    } while (var_t2 < M2C_FIELD(M2C_FIELD(var_t0, void **, -0xDD0), s8 *, 7));
                }
                var_t6_2 = (u8) M2C_FIELD(*(s32 *)0x35F230, s8 *, 7);
                var_t4_2 = temp_a2;
            } while (temp_a2 < (s8) var_t6_2);
        }
        var_s0 = 0;
loop_12:
        var_v0 = func_001A8110(var_v0);
        if (var_v0 != NULL) {
            if (M2C_FIELD(var_v0, u8 *, 2) != 0x13) {
                var_s0 += 1;
            } else {
                if (M2C_FIELD(*(s32 *)0x35F230, s8 *, 7) > 0) {
                    var_t2_2 = 0;
                    var_t3 = sp;
                    do {
                        temp_t4 = *(s32 *)0x35F230;
                        temp_t7_2 = var_t2_2 * 8;
                        var_t2_2 += 1;
                        if (M2C_FIELD((temp_t7_2 + temp_t4), u16 *, 0xC) == M2C_FIELD(var_v0, u16 *, 0)) {
                            *var_t3 = var_s0;
                        }
                        var_t3 += 2;
                    } while (var_t2_2 < M2C_FIELD(temp_t4, s8 *, 7));
                }
                var_s0 += 1;
            }
            goto loop_12;
        }
        var_t5 = (u8) M2C_FIELD(*(s32 *)0x35F230, s8 *, 7);
        var_t4_3 = 0;
        if ((s8) var_t5 > 0) {
            do {
                temp_a0 = var_t4_3 * 8;
                var_a1 = (void *)0x360000;
                if (M2C_FIELD((temp_a0 + *(s32 *)0x35F230), s8 *, 0x10) != 3) {
                    var_a2 = var_t4_3 + 1;
                    var_t2_3 = var_a2;
                    if (var_a2 < (s8) var_t5) {
                        var_t1 = (var_a2 * 2) + sp;
loop_27:
                        temp_t5_2 = M2C_FIELD(var_a1, void **, -0xDD0);
                        temp_a3 = var_t2_3 * 8;
                        var_t2_3 += 1;
                        if (M2C_FIELD((temp_a0 + temp_t5_2), s8 *, 0x10) == M2C_FIELD((temp_a3 + temp_t5_2), s8 *, 0x10)) {
                            temp_t3 = (var_t4_3 * 2) + sp;
                            if (*var_t1 < *temp_t3) {
                                M2C_ERROR(/* unknown instruction: ldl $t5, 0x13($t4) */);
                                M2C_ERROR(/* unknown instruction: ldr $t5, 0xc($t4) */);
                                M2C_ERROR(/* unknown instruction: sdl $t5, 0xa7($sp) */);
                                M2C_ERROR(/* unknown instruction: sdr $t5, 0xa0($sp) */);
                                M2C_ERROR(/* unknown instruction: ldl $t5, 0x13($t0) */);
                                M2C_ERROR(/* unknown instruction: ldr $t5, 0xc($t0) */);
                                M2C_ERROR(/* unknown instruction: sdl $t5, 0x13($t4) */);
                                M2C_ERROR(/* unknown instruction: sdr $t5, 0xc($t4) */);
                                M2C_ERROR(/* unknown instruction: ldl $t0, 0xa7($sp) */);
                                M2C_ERROR(/* unknown instruction: ldr $t0, 0xa0($sp) */);
                                M2C_ERROR(/* unknown instruction: sdl $t0, 0x13($t7) */);
                                M2C_ERROR(/* unknown instruction: sdr $t0, 0xc($t7) */);
                                temp_t7_3 = *temp_t3;
                                *temp_t3 = (s16) (u16) *var_t1;
                                *var_t1 = temp_t7_3;
                            }
                            var_t1 += 2;
                            var_a1 = (void *)0x360000;
                            if (var_t2_3 < M2C_FIELD(M2C_FIELD(var_a1, void **, -0xDD0), s8 *, 7)) {
                                goto loop_27;
                            }
                        }
                    }
                } else {
                    var_a2 = var_t4_3 + 1;
                }
                var_t5 = (u8) M2C_FIELD(*(s32 *)0x35F230, s8 *, 7);
                var_t4_3 = var_a2;
            } while (var_a2 < (s8) var_t5);
        }
    }
}
