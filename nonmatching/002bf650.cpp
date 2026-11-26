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

// m2c valid-syntax output for 0x002bf650, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002BF650 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

s32 func_0016ABF8(void * = 0, M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_0016ABF8");
s32 func_0016AC38(void * = 0, M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_0016AC38");
M2C_UNK func_0017F540(void * = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_0017F540");
s32 func_00181500(M2C_UNK = 0) asm("func_00181500");
M2C_UNK func_001DC920(s32 = 0) asm("func_001DC920");
M2C_UNK func_002C2228(u8 = 0) asm("func_002C2228");
M2C_UNK func_002C2248(u8 = 0) asm("func_002C2248");
M2C_UNK func_002F1900(void * = 0, M2C_UNK = 0, void * = 0) asm("func_002F1900");
M2C_UNK func_002F1990(void * = 0) asm("func_002F1990");
extern M2C_UNK D_00375480 asm("D_00375480");
void func_002BF650(void *arg0 = 0, void *arg1 = 0, ...) asm("_ZN8worldmap6Symbol8setStateEPKN2YS10WORLDSTATEE");
void func_002bf650_impl(void *arg0, void *arg1) asm("_ZN8worldmap6Symbol8setStateEPKN2YS10WORLDSTATEE");
void func_002bf650_impl(void *arg0, void *arg1) {
    M2C_UNK var_a1;
    M2C_UNK var_s2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_t6;
    s32 var_t6_2;
    s32 var_t7;
    u32 temp_t5;
    u8 temp_t6;
    u8 temp_t6_2;
    u8 var_a0;
    void *temp_t4;

    temp_t6 = M2C_FIELD(arg1, u8 *, 0);
    var_s2 = 0x97;
    if (temp_t6 != 0) {
        if (temp_t6 != 1) {
            M2C_FIELD(arg0, s32 *, 0x108) = (s32) (M2C_FIELD(arg0, s32 *, 0x108) & ~2 & ~0x20);
            func_002C2228(M2C_FIELD(M2C_FIELD(arg0, void **, 0xAF8), u8 *, 5));
        } else {
            var_s2 = 0xA1;
            M2C_FIELD(arg0, s32 *, 0x108) = (s32) ((M2C_FIELD(arg0, s32 *, 0x108) & ~2) | 0x20);
            var_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xAF8), u8 *, 5);
            goto block_32;
        }
    } else {
        var_s2 = 0xA1;
        M2C_FIELD(arg0, s32 *, 0x108) = (s32) (M2C_FIELD(arg0, s32 *, 0x108) | 0x22);
        var_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xAF8), u8 *, 5);
block_32:
        func_002C2248(var_a0);
    }
    func_0017F540(arg0 + 0x140, var_s2, 0);
    var_t6 = 0;
    if ((u8) M2C_FIELD(arg1, u8 *, 0) >= 2U) {
        var_t6 = (M2C_FIELD(arg1, u8 *, 3) & 2) == 0;
    }
    if (var_t6 & 0xFF) {
        var_t7 = M2C_FIELD(arg0, s32 *, 0x108) & ~0x40;
    } else {
        var_t7 = M2C_FIELD(arg0, s32 *, 0x108) | 0x40;
    }
    M2C_FIELD(arg0, s32 *, 0x108) = var_t7;
    if (!(M2C_FIELD(arg1, u8 *, 3) & 1 & 0xFF)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xAFC);
        if (temp_a0 != 0) {
            func_001DC920(temp_a0);
            M2C_FIELD(arg0, s32 *, 0xAFC) = 0;
        }
    } else if (M2C_FIELD(arg0, s32 *, 0xAFC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xAFC) = func_0016ABF8(arg0, 3, 1, 0);
    }
    temp_t6_2 = M2C_FIELD(arg1, u8 *, 0);
    if ((u32) (temp_t6_2 & 0xFF) < 3U) {
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xB00);
        var_t6_2 = temp_t6_2 & 0xFF;
        if (temp_a0_2 != 0) {
            func_001DC920(temp_a0_2);
            M2C_FIELD(arg0, s32 *, 0xB00) = 0;
            goto block_17;
        }
    } else {
        var_t6_2 = temp_t6_2 & 0xFF;
        if (M2C_FIELD(arg0, s32 *, 0xB00) == 0) {
            M2C_FIELD(arg0, s32 *, 0xB00) = func_0016AC38(arg0, 5, 1, 0);
block_17:
            var_t6_2 = M2C_FIELD(arg1, u8 *, 0) & 0xFF;
        }
    }
    temp_t4 = arg0 + 0x3AC;
    temp_t5 = *((var_t6_2 * 4) + &D_00375480);
    M2C_FIELD(arg0, s8 *, 0x3AC) = (s8) temp_t5;
    M2C_FIELD(temp_t4, s8 *, 3) = (s8) (temp_t5 >> 0x18);
    M2C_FIELD(temp_t4, s8 *, 1) = (s8) (temp_t5 >> 8);
    M2C_FIELD(temp_t4, s8 *, 2) = (s8) (temp_t5 >> 0x10);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xAF8), u8 *, 4) == 0x12) {
        if ((u8) M2C_FIELD(arg1, u8 *, 0) < 2U) {
            func_002F1990(arg0 + 0xB08);
        } else {
            if (func_00181500(0x481C) != 0) {
                var_a1 = 8;
            } else {
                var_a1 = 6;
            }
            func_002F1900(arg0 + 0xB08, var_a1, arg0);
        }
    }
    M2C_FIELD(arg0, M2C_UNK *, 0xAE4) = M2C_UNALIGNED32(M2C_FIELD(arg1, u8 *, 0));
}
