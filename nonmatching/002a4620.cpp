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

static AnyCell sp0;
static AnyCell sp4;
// m2c valid-syntax output for 0x002a4620, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002A4620 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ char pad8[0x58];
};                                                  /* size = 0x60 */

M2C_UNK func_00138C10(void * = 0, M2C_UNK = 0) asm("func_00138C10");
M2C_UNK func_00138C68(void * = 0, s32 = 0, s32 = 0) asm("func_00138C68");
M2C_UNK func_00138C78(s32 = 0, void * = 0, s32 * = 0) asm("func_00138C78");
M2C_UNK func_00242618(M2C_UNK = 0, M2C_UNK = 0) asm("func_00242618");
M2C_UNK func_002A3AA8() asm("func_002A3AA8");
s32 func_002A4990(s32 = 0) asm("func_002A4990");
s32 func_002A4A00(s32 = 0) asm("func_002A4A00");
void func_002A4620(void *arg0 = 0, ...) asm("_ZN2Tz10JmTreasure10MoveCurcorEPN2YS3PADE");
void func_002a4620_impl(void *arg0) asm("_ZN2Tz10JmTreasure10MoveCurcorEPN2YS3PADE");
void func_002a4620_impl(void *arg0) {
    s32 sp4;
    M2C_UNK var_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s7;
    s32 temp_t5_2;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s64 temp_t4;
    void *temp_s1_2;
    void *temp_t5;
    void *temp_t5_3;

    temp_t5 = *(void **)0x35F5E4;
    temp_s2 = M2C_FIELD(temp_t5, s32 *, 0x1088);
    var_s4 = M2C_FIELD(temp_t5, s32 *, 0x1084);
    temp_s0 = M2C_FIELD(temp_t5, s32 *, 0x1080);
    temp_s7 = temp_s0;
    temp_s1 = (s32) ((temp_s2 >= 0) ? temp_s2 : (temp_s2 + 7)) >> 3;
    var_s5 = temp_s1 + var_s4;
    var_s3 = temp_s1;
    var_s1 = temp_s2 - (temp_s1 * 8);
    var_v0 = func_002A4A00(var_s5);
    temp_t4 = M2C_FIELD(arg0, s64 *, 0x18);
    temp_s0_2 = (temp_s0 >= 0xA) ? 9 : temp_s0;
    if (temp_t4 & 0x10) {
        if (var_s3 != 0) {
            var_s3 -= 1;
            goto block_3;
        }
        if (var_s4 == 0) {
            if (M2C_FIELD(arg0, s64 *, 8) & 0x10) {
                var_s4 = temp_s7 - temp_s0_2;
                var_s3 = temp_s0_2 - 1;
                goto block_3;
            }
        } else {
            var_s4 -= 1;
            var_s5 = var_s4;
        }
        goto block_4;
    }
    if (temp_t4 & 0x20) {
        if (var_s3 < (temp_s0_2 - 1)) {
            var_s3 += 1;
            goto block_3;
        }
        if ((var_s4 + 9) >= temp_s7) {
            if (M2C_FIELD(arg0, s64 *, 8) & 0x20) {
                goto block_37;
            }
        } else {
            var_s4 += 1;
            goto block_3;
        }
        goto block_4;
    }
    if (temp_t4 & 0x8000) {
        if (temp_s0_2 < var_s4) {
            var_s4 -= temp_s0_2;
block_3:
            var_s5 = var_s3 + var_s4;
        } else if (var_s4 == 0) {
            if (var_s1 == 0) {
                if (M2C_FIELD(arg0, s64 *, 8) & 0x8000) {
                    var_s4 = temp_s7 - temp_s0_2;
                    var_s3 = temp_s0_2 - 1;
                    var_s5 = var_s3 + var_s4;
                    var_s1 = func_002A4A00(var_s5) - 1;
                }
            } else {
                var_s1 = 0;
            }
        } else {
block_37:
            var_s4 = 0;
            var_s3 = 0;
            var_s5 = 0;
        }
block_4:
        var_v0 = func_002A4A00(var_s5);
        if (var_s1 >= var_v0) {
            var_s1 = var_v0 - 1;
        }
    } else {
        temp_t5_2 = temp_s7 - temp_s0_2;
        if (temp_t4 & 0x4000) {
            temp_t6 = var_s4 + temp_s0_2;
            if (temp_t6 < temp_t5_2) {
                var_s4 = temp_t6;
                goto block_51;
            }
            if (var_s4 >= temp_t5_2) {
                temp_v0 = var_v0 - 1;
                if (var_s1 >= temp_v0) {
                    if (M2C_FIELD(arg0, s64 *, 8) & 0x4000) {
                        var_s4 = 0;
                        var_s3 = 0;
                        var_s1 = 0;
                        var_s5 = 0;
                    }
                } else {
                    var_s4 = temp_t5_2;
                    var_s1 = temp_v0;
                    goto block_51;
                }
            } else {
                var_s4 = temp_t5_2;
                var_s3 = temp_s0_2 - 1;
block_51:
                var_s5 = var_s3 + var_s4;
            }
            var_v0 = func_002A4A00(var_s5);
            var_s1 = (var_s1 >= var_v0) ? (var_v0 - 1) : var_s1;
        }
    }
    if (M2C_FIELD(arg0, s64 *, 0x18) & 0x40) {
        var_s1 = (var_s1 != 0) ? (var_s1 - 1) : (var_v0 - 1);
    } else if (M2C_FIELD(arg0, s64 *, 0x18) & 0x80) {
        var_s1 = (var_s1 < (var_v0 - 1)) ? (var_s1 + 1) : 0;
    }
    temp_t5_3 = *(s32 *)0x35F5E4;
    temp_s2_2 = (var_s3 * 8) + var_s1;
    if ((var_s4 != M2C_FIELD(temp_t5_3, s32 *, 0x1084)) || (temp_s2_2 != M2C_FIELD(temp_t5_3, s32 *, 0x1088))) {
        func_00242618(1, 1);
        func_00138C78((var_s3 * 0xCC0) + (var_s1 * 0x198) + *(s32 *)0x35F5E8, sp, &sp4);
        temp_s1_2 = *(s32 *)0x35F5E8 + 0x72C0;
        func_00138C68(temp_s1_2, sp0, sp4);
        temp_v0_2 = func_002A4990(var_s5) * 8;
        if (M2C_FIELD((temp_v0_2 + *(s32 *)0x35F5E4), u8 *, 0x1000) == 0) {
            if (M2C_FIELD(temp_s1_2, s32 *, 0x184) != 0x42) {
                var_a1 = 0x42;
                goto block_13;
            }
            goto block_18;
        }
block_18:
        if (M2C_FIELD((temp_v0_2 + *(s32 *)0x35F5E4), u8 *, 0x1000) != 0) {
            if (M2C_FIELD(temp_s1_2, s32 *, 0x184) == 0x42) {
                var_a1 = 0x41;
block_13:
                func_00138C10(temp_s1_2, var_a1);
            }
        }
        M2C_FIELD(*(s32 *)0x35F5E4, s32 *, 0x1084) = var_s4;
        M2C_FIELD(*(s32 *)0x35F5E4, s32 *, 0x1088) = temp_s2_2;
        func_002A3AA8();
    }
}
