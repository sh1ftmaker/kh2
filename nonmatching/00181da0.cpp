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

// m2c valid-syntax output for 0x00181da0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00181DA0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

void *func_00168B38(s32 = 0, M2C_UNK = 0, u32 = 0) asm("func_00168B38");
M2C_UNK func_00170518(M2C_UNK * = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_00170518");
M2C_UNK func_00181178(s32 = 0) asm("func_00181178");
s32 func_00181500(s32 = 0) asm("func_00181500");
M2C_UNK func_00181D30(void * = 0, void * = 0) asm("func_00181D30");
M2C_UNK func_00182280() asm("func_00182280");
M2C_UNK func_001829B0(u32 = 0, M2C_UNK = 0) asm("func_001829B0");
M2C_UNK func_00182A78(s32 = 0) asm("func_00182A78");
s32 func_001A8BD0(M2C_UNK = 0) asm("func_001A8BD0");
M2C_UNK func_001A8D40(s32 = 0, u32 = 0) asm("func_001A8D40");
M2C_UNK func_001A9110(void * = 0) asm("func_001A9110");
M2C_UNK func_001ADA38(s32 = 0) asm("func_001ADA38");
M2C_UNK func_001BB288(u32 = 0, void * = 0) asm("func_001BB288");
s32 func_001D9B40(M2C_UNK * = 0) asm("func_001D9B40");
M2C_UNK func_002FEE78(M2C_UNK * = 0, void * = 0, s32 = 0) asm("func_002FEE78");
s32 func_002FF3FC(s32 = 0) asm("func_002FF3FC");
s32 func_002FF538(void * = 0, s32 = 0, s32 = 0) asm("func_002FF538");
u64 func_00312DB8(u64 = 0, u64 = 0) asm("func_00312DB8");
extern M2C_UNK D_0032BAE0 asm("D_0032BAE0");
extern M2C_UNK D_01C60560 asm("D_01C60560");
s32 func_00181DA0(void *arg1 = 0, ...) asm("_ZNK2YS8AREADATA8SETINDEX10parse_codeEPKNS0_4CODEE");
s32 func_00181da0_impl(void *arg1) asm("_ZNK2YS8AREADATA8SETINDEX10parse_codeEPKNS0_4CODEE");
s32 func_00181da0_impl(void *arg1) {
    M2C_UNK var_a1;
    f32 var_fv0;
    s16 temp_a1;
    s32 *var_s0_2;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_t7;
    s32 var_a2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_t7;
    s32 var_v0;
    u16 temp_t6;
    u32 *var_s0;
    u32 temp_a0;
    u32 var_a0;
    u32 var_a0_2;
    void *temp_s1;
    void *temp_v0;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;

    temp_t6 = M2C_FIELD(arg1, u16 *, 0);
    switch (temp_t6) {
    case 0:
        var_s2 = 0;
        if (M2C_FIELD(arg1, s16 *, 2) > 0) {
            var_s0 = arg1 + 4;
            do {
                var_s2 += 1;
                func_001829B0(*var_s0, 0);
                var_s0 += 4;
            } while (var_s2 < M2C_FIELD(arg1, s16 *, 2));
        }
        /* fallthrough */
    default:
block_5:
        var_v0 = 1;
        break;
    case 1:
        *(s64 *)0x34ECC0 = M2C_FIELD(arg1, u32 *, 4) | ((s64) M2C_FIELD(arg1, u32 *, 8) << 0x20);
        goto block_5;
    case 2:
        temp_a1 = M2C_FIELD(arg1, s16 *, 2);
        temp_s0 = *(s32 *)0x3638D0 * 0x10DCD;
        *(s32 *)0x3638D0 = temp_s0;
        var_a1 = 0;
        var_a0 = M2C_FIELD(((((s64) (func_00312DB8((u64) ((s64) temp_s0 << 0x20) >> 0x20, func_00312DB8(((u64) ((temp_a1 - 1) << 0x20) >> 0x20) + (1 << 0x20), (u64) ((s64) temp_a1 << 0x20) >> 0x20)) << 0x20) >> 0x20) * 4) + arg1), u32 *, 4);
block_9:
        func_001829B0(var_a0, var_a1);
        goto block_5;
    case 3:
        temp_t7 = *(s32 *)0x3638D0;
        *(s32 *)0x3638D0 = (s32) (temp_t7 * 0x10DCD);
        if ((u32) ((s64) (func_00312DB8((u64) (temp_t7 * 0x10DCD00000000) >> 0x20, 0x028F5C29U) << 0x20) >> 0x20) < (u32) M2C_FIELD(arg1, u32 *, 4)) {
            var_a0_2 = M2C_FIELD(arg1, u32 *, 8);
block_12:
            func_001829B0(var_a0_2, 0);
            var_v0 = 0;
        } else {
            goto block_5;
        }
        break;
    case 4:
        temp_a0 = M2C_FIELD(arg1, u32 *, 4);
        if ((s32) temp_a0 >= 0) {
            var_fv0 = (f32) temp_a0;
        } else {
            var_fv0 = 2.0f * (f32) ((temp_a0 & 1) | (temp_a0 >> 1));
        }
        *(f32 *)0x01C6053C = var_fv0;
        goto block_5;
    case 5:
        *(u32 *)0x34ECD0 = M2C_FIELD(arg1, u32 *, 4);
        goto block_5;
    case 6:
        *(u32 *)0x34ECD8 = M2C_FIELD(arg1, u32 *, 4);
        goto block_5;
    case 7:
        *(u32 *)0x34ECDC = M2C_FIELD(arg1, u32 *, 4);
        goto block_5;
    case 9:
        var_a0 = M2C_FIELD(arg1, u32 *, 4);
        var_a1 = 1;
        goto block_9;
    case 10:
        temp_v0 = func_00168B38(*(s32 *)0x34ECF4, -1, M2C_FIELD(arg1, u32 *, 4));
        if (temp_v0 != NULL) {
            temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 8);
            if (temp_a0_2 != 0) {
                func_00182A78(temp_a0_2);
            }
        }
        goto block_5;
    case 11:
        *(s64 *)0x34ECC8 = M2C_FIELD(arg1, u32 *, 4) | ((s64) M2C_FIELD(arg1, u32 *, 8) << 0x20);
        goto block_5;
    case 12:
        func_00182280();
        goto block_5;
    case 14:
        *(u32 *)0x34ECE0 = M2C_FIELD(arg1, u32 *, 4);
        goto block_5;
    case 15:
        func_001A8D40(func_001A8BD0(-1), M2C_FIELD(arg1, u32 *, 4));
        goto block_5;
    case 16:
        func_001A9110(arg1 + 4);
        goto block_5;
    case 17:
        *(u32 *)0x34ECE4 = M2C_FIELD(arg1, u32 *, 4);
        goto block_5;
    case 18:
        *(u32 *)0x34ECD4 = M2C_FIELD(arg1, u32 *, 4);
        goto block_5;
    case 19:
        *(u32 *)0x34ECE8 = M2C_FIELD(arg1, u32 *, 4);
        goto block_5;
    case 20:
        var_t7 = *(s32 *)0x34F240 | 4;
block_33:
        *(s32 *)0x34F240 = var_t7;
        goto block_5;
    case 21:
        func_001BB288(M2C_FIELD(arg1, u32 *, 4), arg1 + 8);
        goto block_5;
    case 22:
        temp_s1 = arg1 + 4;
        if (func_002FF538(temp_s1, *(s32 *)0x34ECF8, func_002FF3FC(*(s32 *)0x34ECF8)) == 0) {
            var_a2 = *(s32 *)0x33CAF0;
        } else {
            var_a2 = *(s32 *)0x33CAF4;
        }
        func_002FEE78(&D_01C60560, temp_s1, var_a2);
        func_00170518(&D_01C60560, 0x3B6, 0);
        goto block_5;
    case 23:
        var_t7 = *(s32 *)0x34F240 | 0x10;
        goto block_33;
    case 24:
        *(u32 *)0x34ECEC = M2C_FIELD(arg1, u32 *, 4);
        *(u32 *)0x34ECF0 = M2C_FIELD(arg1, u32 *, 8);
        goto block_5;
    case 25:
        var_s2_2 = 0;
        if (M2C_FIELD(arg1, s16 *, 2) > 0) {
            var_s1 = arg1 + 4;
            do {
                if (func_00181500(M2C_FIELD(var_s1, s32 *, 0)) == 0) {
                    func_00181178(M2C_FIELD(var_s1, s32 *, 0));
                }
                var_s2_2 += 1;
                var_s1 += 4;
            } while (var_s2_2 < M2C_FIELD(var_s1, s16 *, 2));
        }
        goto block_5;
    case 26:
        var_s2_3 = 0;
        if (M2C_FIELD(arg1, s16 *, 2) > 0) {
            var_s1_2 = arg1 + 4;
            do {
                var_s2_3 += 1;
                *(s64 *)0x01C60548 |= 1 << (s64) M2C_FIELD(var_s1_2, s32 *, 0);
                var_s1_2 += 4;
            } while (var_s2_3 < M2C_FIELD(var_s1_2, s16 *, 2));
        }
        goto block_5;
    case 27:
        var_s2_4 = 0;
        if (M2C_FIELD(arg1, s16 *, 2) > 0) {
            var_s1_3 = arg1 + 4;
            do {
                var_s2_4 += 1;
                *(s64 *)0x01C60550 |= 1 << (s64) M2C_FIELD(var_s1_3, s32 *, 0);
                var_s1_3 += 4;
            } while (var_s2_4 < M2C_FIELD(var_s1_3, s16 *, 2));
        }
        goto block_5;
    case 28:
        if (M2C_FIELD(arg1, u32 *, 4) == *(u8 *)0x32BAE2) {
            func_00181D30(arg1 + 8, arg1 + (M2C_FIELD(arg1, s16 *, 2) * 4) + 4);
        }
        goto block_5;
    case 29:
        var_s2_5 = 0;
        if (M2C_FIELD(arg1, s16 *, 2) > 0) {
            var_s0_2 = arg1 + 4;
            do {
                var_s2_5 += 1;
                func_001ADA38(*var_s0_2);
                var_s0_2 += 4;
            } while (var_s2_5 < M2C_FIELD(arg1, s16 *, 2));
        }
        goto block_5;
    case 30:
        *(u32 *)0x01C60558 = M2C_FIELD(arg1, u32 *, 4);
        goto block_5;
    case 31:
        if (func_001D9B40(&D_0032BAE0) != 0) {
            var_a0_2 = M2C_FIELD(arg1, u32 *, 4);
            goto block_12;
        }
        goto block_5;
    }
    return var_v0;
}
