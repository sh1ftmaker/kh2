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
static AnyCell sp100;
static AnyCell sp110;
static AnyCell sp114;
static AnyCell sp118;
static AnyCell sp120;
static AnyCell sp130;
static AnyCell sp134;
static AnyCell sp138;
static AnyCell sp13C;
static AnyCell sp40;
static AnyCell sp80;
static AnyCell spC0;
static AnyCell spD0;
static AnyCell spE0;
static AnyCell spEC;
static AnyCell spF0;
static AnyCell spFC;
// m2c valid-syntax+u8ptr output for 0x00164d60, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00164D60 {
    /* 0x000 */ s128 sp0;                           /* inferred */
    /* 0x010 */ char pad10[0x30];                   /* maybe part of sp0[4]? */
    /* 0x040 */ s128 sp40;                          /* inferred */
    /* 0x050 */ char pad50[0x30];                   /* maybe part of sp40[4]? */
    /* 0x080 */ s128 sp80;                          /* inferred */
    /* 0x090 */ char pad90[0x30];                   /* maybe part of sp80[4]? */
    /* 0x0C0 */ s128 spC0;                          /* inferred */
    /* 0x0D0 */ s128 spD0;                          /* inferred */
    /* 0x0E0 */ s128 spE0;                          /* inferred */
    /* 0x0EC */ f32 spEC;                           /* overlap; inferred */
    /* 0x0F0 */ s128 spF0;                          /* inferred */
    /* 0x0FC */ f32 spFC;                           /* overlap; inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ char pad104[0xC];                   /* maybe part of sp100[4]? */
    /* 0x110 */ f32 sp110;                          /* inferred */
    /* 0x114 */ f32 sp114;                          /* inferred */
    /* 0x118 */ f32 sp118;                          /* inferred */
    /* 0x11C */ char pad11C[4];
    /* 0x120 */ M2C_UNK sp120;                      /* inferred */
    /* 0x120 */ char pad120[0x10];
    /* 0x130 */ s32 sp130;                          /* inferred */
    /* 0x134 */ s128 *sp134;                        /* inferred */
    /* 0x138 */ s128 *sp138;                        /* inferred */
    /* 0x13C */ M2C_UNK *sp13C;                     /* inferred */
    /* 0x140 */ char pad140[0x50];
};                                                  /* size = 0x190 */

M2C_UNK func_002FD188(M2C_UNK * = 0) asm("func_002FD188");
extern AnyCell D_001656B8 asm("D_001656B8");
extern AnyCell D_0034C780 asm("D_0034C780");
extern AnyCell D_0034C790 asm("D_0034C790");
extern f32 D_FLT_0036B4D8 asm("D_0036B4D8");
extern f32 D_FLT_0036B4DC asm("D_0036B4DC");
extern f32 D_FLT_0036B4E0 asm("D_0036B4E0");
s32 func_00164D60(u8 *arg1 = 0, s32 arg2 = 0, u8 *arg3 = 0, ...) asm("func_00164d60");
s32 func_00164d60_impl(u8 *arg1, s32 arg2, u8 *arg3) asm("func_00164d60");
s32 func_00164d60_impl(u8 *arg1, s32 arg2, u8 *arg3) {
    s128 sp40;
    s128 sp80;
    s128 spC0;
    s128 spD0;
    s128 spE0;
    f32 spEC;
    s128 spF0;
    f32 spFC;
    f32 sp100;
    f32 sp110;
    M2C_UNK sp120;
    s32 sp130;
    s128 *sp134;
    s128 *sp138;
    M2C_UNK *sp13C;
    M2C_UNK *var_t7;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_v0;
    f32 var_fv0f;
    s128 *temp_t6;
    s128 *temp_t7_2;
    s128 *temp_t7_3;
    s128 *temp_t7_4;
    s128 *temp_t7_5;
    s128 *temp_t7_6;
    s128 *temp_t7_7;
    s128 *temp_t7_8;
    s128 *var_t6;
    s128 *var_t6_2;
    s128 *var_t6_3;
    s128 *var_t6_4;
    s128 *var_t6_5;
    s128 *var_t6_6;
    s128 *var_t7_6;
    s128 *var_t7_7;
    s128 *var_t7_8;
    s32 temp_a0;
    s32 temp_t6_2;
    s32 temp_t7;
    s32 var_a1;
    s32 var_a3;
    s32 var_t4;
    s32 var_t5;
    s32 var_t7_2;
    s32 var_t7_3;
    s32 var_t7_4;
    s32 var_t7_5;
    s32 var_v0;

    sp130 = arg2;
    sp134 = M2C_ERROR(/* Read from unset register $t0 */);
    sp138 = M2C_ERROR(/* Read from unset register $t1 */);
    if (*(s8 *)0x4F41A0 == 0) {
        *(f32 *)0x4F41B0 = D_FLT_0036B4D8;
        *(f32 *)0x4F000C = D_FLT_0036B4DC;
        *(s8 *)0x4F41A0 = 1;
        *(f32 *)0x4F0008 = D_FLT_0036B4D8;
        *(f32 *)0x4F0004 = D_FLT_0036B4D8;
        func_002FD188(&D_001656B8);
    }
    temp_a0 = M2C_FIELD(arg1, s32 *, 0x10);
    var_a1 = 0;
    if (temp_a0 == 3) {
        var_t7 = &D_0034C780;
    } else {
        var_t7 = &D_0034C790;
    }
    sp13C = var_t7;
    var_a3 = 0;
    if (temp_a0 > 0) {
        do {
            temp_t7 = var_a3 * 4;
            temp_t7_2 = *(temp_t7 + arg1);
            temp_t6 = *((*(temp_t7 + sp13C) * 4) + arg1);
            if (&spC0 != temp_t7_2) {
                spC0 = *temp_t7_2;
            }
            if (&spD0 != temp_t6) {
                spD0 = *temp_t6;
            }
            if (&spE0 != &spC0) {
                spE0 = spC0;
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t6) */);
            M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
            if (&spF0 != &sp100) {
                spF0 = M2C_FIELD(&sp100, s128 *, 0);
            }
            spFC = D_FLT_0036B4DC;
            spEC = D_FLT_0036B4DC;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t8) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t4) */);
            M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
            M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
            M2C_ERROR(/* unknown instruction: qmfc2.ni $t0, $vf1 */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t4) */);
            M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
            M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
            M2C_ERROR(/* unknown instruction: qmfc2.ni $t0, $vf1 */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t6) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf2 */);
            M2C_ERROR(/* unknown instruction: vmulx.xyzw $vf1, $vf1, $vf2x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t6) */);
            M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
            if (arg3 != &sp100) {
                M2C_FIELD(arg3, s128 *, 0) = (s128) M2C_FIELD(&sp100, s128 *, 0);
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($fp) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t9) */);
            M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s7) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s6) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s4) */);
            M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s5) */);
            temp_fv0f = M2C_BITWISE(f32, M2C_FIELD(arg3, s128 *, 0));
            var_t7_2 = 1;
            if (!(temp_fv0f < sp100)) {
                var_t7_2 = 0;
            }
            if (sp110 < temp_fv0f) {
                if ((var_t7_2 ^ 1) != 0) {
                    goto block_72;
                }
                goto block_22;
            }
            var_t7_3 = 1;
            if (var_t7_2 != 0) {
block_72:
                var_t7_4 = 1;
                if (!(M2C_FIELD(arg3, f32 *, 4) < M2C_FIELD(&sp100, f32 *, 4))) {
                    var_t7_4 = 0;
                }
                if (sp114 < M2C_FIELD(arg3, f32 *, 4)) {
                    var_t7_3 = 1;
                    if ((var_t7_4 ^ 1) != 0) {
                        goto block_76;
                    }
                } else {
                    var_t7_3 = 1;
                    if (var_t7_4 != 0) {
block_76:
                        temp_fv0f_2 = M2C_FIELD(arg3, f32 *, 8);
                        var_t7_5 = 1;
                        if (!(temp_fv0f_2 < M2C_FIELD(&sp100, f32 *, 8))) {
                            var_t7_5 = 0;
                        }
                        if (sp118 < temp_fv0f_2) {
                            var_t7_3 = 0;
                            if ((var_t7_5 ^ 1) != 0) {

                            } else {
                                goto block_22;
                            }
                        } else {
                            var_t7_3 = 0;
                            if (var_t7_5 != 0) {

                            } else {
block_22:
                                var_t7_3 = 1;
                            }
                        }
                    }
                }
            }
            if (var_t7_3 & 0xFF) {
                temp_t7_3 = &(&sp40)[var_a1];
                if (temp_t7_3 != &spC0) {
                    *temp_t7_3 = spC0;
                }
                temp_t7_4 = &(&sp80)[var_a1];
                if (temp_t7_4 != &spD0) {
                    *temp_t7_4 = spD0;
                }
                temp_t7_5 = sp + (var_a1 * 0x10);
                var_a1 += 1;
                if (temp_t7_5 != arg3) {
                    *temp_t7_5 = M2C_FIELD(arg3, s128 *, 0);
                }
            }
            var_a3 += 1;
        } while (var_a3 < temp_a0);
    }
    var_t6 = &spC0;
    switch (var_a1) {                               /* irregular */
    case 1:
        if (arg3 != sp) {
            M2C_FIELD(arg3, s128 *, 0) = sp0;
        }
        if (sp134 != &sp40) {
            *sp134 = sp40;
        }
        var_t6_2 = &spC0;
        if (sp138 != &sp80) {
            *sp138 = sp80;
            var_t6_2 = &spC0;
        }
loop_41:
        var_t7_6 = &sp80;
        if (&sp80 != var_t6_2) {
            var_t6_2 -= 0x10;
            goto loop_41;
        }
loop_43:
        var_t6_3 = &sp40;
        if (&sp40 != var_t7_6) {
            var_t7_6 -= 0x10;
            goto loop_43;
        }
loop_45:
        var_v0 = 1;
        if (sp != var_t6_3) {
            var_t6_3 -= 0x10;
            goto loop_45;
        }
        break;
    default:
        var_t5 = 0;
        var_t4 = 0;
        var_fv0f = D_FLT_0036B4E0;
        if (var_a1 > 0) {
            do {
                M2C_ERROR(/* unknown instruction: lqc2 $vf6, ($a2) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($t6) */);
                M2C_ERROR(/* unknown instruction: vsub.xyzw $vf5, $vf6, $vf4 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf5 */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf5, $vf4, $vf5 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf5, $vf5, $vf5y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf5, $vf5, $vf5z */);
                temp_v0 = M2C_ERROR(/* unknown instruction: qmfc2.ni $v0, $vf5 */);
                if (temp_v0 < var_fv0f) {
                    var_fv0f = temp_v0;
                    var_t4 = var_t5;
                }
                var_t5 += 1;
            } while (var_t5 < var_a1);
        }
        temp_t6_2 = var_t4 * 0x10;
        temp_t7_6 = sp + temp_t6_2;
        if (arg3 != temp_t7_6) {
            M2C_FIELD(arg3, s128 *, 0) = (s128) *temp_t7_6;
        }
        temp_t7_7 = &sp40 + temp_t6_2;
        if (sp134 != temp_t7_7) {
            *sp134 = *temp_t7_7;
        }
        temp_t7_8 = &sp80 + temp_t6_2;
        if (sp138 != temp_t7_8) {
            *sp138 = *temp_t7_8;
        }
        var_t6_4 = &spC0;
loop_60:
        var_t7_7 = &sp80;
        if (&sp80 != var_t6_4) {
            var_t6_4 -= 0x10;
            goto loop_60;
        }
loop_62:
        var_t6_5 = &sp40;
        if (&sp40 != var_t7_7) {
            var_t7_7 -= 0x10;
            goto loop_62;
        }
loop_64:
        var_v0 = 1;
        if (sp != var_t6_5) {
            var_t6_5 -= 0x10;
            goto loop_64;
        }
        break;
    case 0:
loop_66:
        var_t7_8 = &sp80;
        if (&sp80 != var_t6) {
            var_t6 -= 0x10;
            goto loop_66;
        }
loop_68:
        var_t6_6 = &sp40;
        if (&sp40 != var_t7_8) {
            var_t7_8 -= 0x10;
            goto loop_68;
        }
loop_70:
        var_v0 = 0;
        if (sp != var_t6_6) {
            var_t6_6 -= 0x10;
            goto loop_70;
        }
        break;
    }
    return var_v0;
}
