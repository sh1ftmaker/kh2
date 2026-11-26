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
static AnyCell sp40;
static AnyCell sp50;
static AnyCell sp60;
static AnyCell sp6C;
static AnyCell sp70;
static AnyCell sp7C;
static AnyCell sp80;
static AnyCell sp90;
static AnyCell sp94;
static AnyCell sp98;
static AnyCell spA0;
static AnyCell spB0;
// m2c valid-syntax+u8ptr output for 0x00162c28, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00162C28 {
    /* 0x000 */ s128 sp0;                           /* inferred */
    /* 0x010 */ char pad10[0x30];                   /* maybe part of sp0[4]? */
    /* 0x040 */ s128 sp40;                          /* inferred */
    /* 0x050 */ s128 sp50;                          /* inferred */
    /* 0x060 */ s128 sp60;                          /* inferred */
    /* 0x06C */ f32 sp6C;                           /* overlap; inferred */
    /* 0x070 */ s128 sp70;                          /* inferred */
    /* 0x07C */ f32 sp7C;                           /* overlap; inferred */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ char pad84[0xC];                    /* maybe part of sp80[4]? */
    /* 0x090 */ f32 sp90;                           /* inferred */
    /* 0x094 */ f32 sp94;                           /* inferred */
    /* 0x098 */ f32 sp98;                           /* inferred */
    /* 0x09C */ char pad9C[4];
    /* 0x0A0 */ M2C_UNK spA0;                       /* inferred */
    /* 0x0A0 */ char padA0[0x10];
    /* 0x0B0 */ M2C_UNK *spB0;                      /* inferred */
    /* 0x0B4 */ char padB4[0x5C];
};                                                  /* size = 0x110 */

M2C_UNK func_002FD188(M2C_UNK * = 0) asm("func_002FD188");
extern AnyCell D_00163520 asm("D_00163520");
extern AnyCell D_0034C780 asm("D_0034C780");
extern AnyCell D_0034C790 asm("D_0034C790");
extern f32 D_FLT_0036B4A0 asm("D_0036B4A0");
extern f32 D_FLT_0036B4A4 asm("D_0036B4A4");
extern f32 D_FLT_0036B4A8 asm("D_0036B4A8");
s32 func_00162C28(u8 *arg0 = 0, u8 *arg1 = 0, u8 *arg2 = 0, ...) asm("func_00162c28");
s32 func_00162c28_impl(u8 *arg0, u8 *arg1, u8 *arg2) asm("func_00162c28");
s32 func_00162c28_impl(u8 *arg0, u8 *arg1, u8 *arg2) {
    s128 sp40;
    s128 sp50;
    s128 sp60;
    f32 sp6C;
    s128 sp70;
    f32 sp7C;
    f32 sp80;
    f32 sp90;
    M2C_UNK spA0;
    M2C_UNK *spB0;
    M2C_UNK *var_t7;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1f;
    f32 temp_v0;
    f32 temp_v0_2;
    f32 var_fv0;
    f32 var_fv0f;
    s128 *temp_a1;
    s128 *temp_t6;
    s128 *temp_t7_2;
    s128 *temp_t7_3;
    s128 *temp_t7_4;
    s128 *var_t7_6;
    s128 *var_t7_7;
    s128 *var_t7_8;
    s128 *var_t7_9;
    s32 temp_t1;
    s32 temp_t7;
    s32 var_s3;
    s32 var_t2;
    s32 var_t4;
    s32 var_t4_2;
    s32 var_t5;
    s32 var_t5_2;
    s32 var_t6;
    s32 var_t7_2;
    s32 var_t7_3;
    s32 var_t7_4;
    s32 var_t7_5;
    s32 var_v0;

    if (*(s8 *)0x4F4180 == 0) {
        *(f32 *)0x4F4190 = D_FLT_0036B4A0;
        *(f32 *)0x4F000C = D_FLT_0036B4A4;
        *(s8 *)0x4F4180 = 1;
        *(f32 *)0x4F0008 = D_FLT_0036B4A0;
        *(f32 *)0x4F0004 = D_FLT_0036B4A0;
        func_002FD188(&D_00163520);
    }
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x10);
    var_s3 = 0;
    temp_t1 = M2C_FIELD(arg1, s32 *, 0x10);
    temp_fv1f = temp_fv0 * temp_fv0;
    if (temp_t1 == 3) {
        var_t7 = &D_0034C780;
    } else {
        var_t7 = &D_0034C790;
    }
    spB0 = var_t7;
    var_t2 = 0;
    if (temp_t1 > 0) {
        do {
            temp_t7 = var_t2 * 4;
            temp_t7_2 = *(temp_t7 + arg1);
            temp_t6 = *((*(temp_t7 + spB0) * 4) + arg1);
            if (&sp40 != temp_t7_2) {
                sp40 = *temp_t7_2;
            }
            if (&sp50 != temp_t6) {
                sp50 = *temp_t6;
            }
            if (&sp60 != &sp40) {
                sp60 = sp40;
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t8) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t5) */);
            M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
            if (&sp70 != &sp80) {
                sp70 = M2C_FIELD(&sp80, s128 *, 0);
            }
            sp7C = D_FLT_0036B4A4;
            sp6C = D_FLT_0036B4A4;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t6) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t9) */);
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
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t7) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf2 */);
            M2C_ERROR(/* unknown instruction: vmulx.xyzw $vf1, $vf1, $vf2x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($fp) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s7) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s5) */);
            M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s4) */);
            if (arg2 != &sp80) {
                M2C_FIELD(arg2, s128 *, 0) = (s128) M2C_FIELD(&sp80, s128 *, 0);
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf6, ($s1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($s0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyzw $vf5, $vf6, $vf4 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf5 */);
            M2C_ERROR(/* unknown instruction: vmul.xyz $vf5, $vf4, $vf5 */);
            M2C_ERROR(/* unknown instruction: vaddy.x $vf5, $vf5, $vf5y */);
            M2C_ERROR(/* unknown instruction: vaddz.x $vf5, $vf5, $vf5z */);
            if (M2C_ERROR(/* unknown instruction: qmfc2.ni $v0, $vf5 */) <= temp_fv1f) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t6) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s6) */);
                M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t6) */);
                M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
                temp_fv0f = M2C_BITWISE(f32, M2C_FIELD(arg2, s128 *, 0));
                var_t7_2 = 1;
                if (!(temp_fv0f < sp80)) {
                    var_t7_2 = 0;
                }
                if (sp90 < temp_fv0f) {
                    if ((var_t7_2 ^ 1) != 0) {
                        goto block_59;
                    }
                    goto block_23;
                }
                var_t7_3 = 1;
                if (var_t7_2 != 0) {
block_59:
                    var_t7_4 = 1;
                    if (!(M2C_FIELD(arg2, f32 *, 4) < M2C_FIELD(&sp80, f32 *, 4))) {
                        var_t7_4 = 0;
                    }
                    if (sp94 < M2C_FIELD(arg2, f32 *, 4)) {
                        var_t7_3 = 1;
                        if ((var_t7_4 ^ 1) != 0) {
                            goto block_63;
                        }
                    } else {
                        var_t7_3 = 1;
                        if (var_t7_4 != 0) {
block_63:
                            temp_fv0f_2 = M2C_FIELD(arg2, f32 *, 8);
                            var_t7_5 = 1;
                            if (!(temp_fv0f_2 < M2C_FIELD(&sp80, f32 *, 8))) {
                                var_t7_5 = 0;
                            }
                            if (sp98 < temp_fv0f_2) {
                                var_t7_3 = 0;
                                if ((var_t7_5 ^ 1) != 0) {

                                } else {
                                    goto block_23;
                                }
                            } else {
                                var_t7_3 = 0;
                                if (var_t7_5 != 0) {

                                } else {
block_23:
                                    var_t7_3 = 1;
                                }
                            }
                        }
                    }
                }
                if (var_t7_3 & 0xFF) {
                    temp_t7_3 = sp + (var_s3 * 0x10);
                    var_s3 += 1;
                    if (temp_t7_3 != arg2) {
                        *temp_t7_3 = M2C_FIELD(arg2, s128 *, 0);
                    }
                }
            }
            var_t2 += 1;
        } while (var_t2 < temp_t1);
    }
    if (var_s3 != 0) {
        if (var_s3 == 1) {
            var_t7_6 = &sp40;
            if (arg2 != sp) {
                M2C_FIELD(arg2, s128 *, 0) = sp0;
                var_t7_6 = &sp40;
            }
loop_32:
            var_v0 = 1;
            if (sp != var_t7_6) {
                var_t7_6 -= 0x10;
                goto loop_32;
            }
        } else {
            var_t5 = 0;
            var_t4 = 0;
            var_fv0f = D_FLT_0036B4A8;
            if (var_s3 > 0) {
                do {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf6, ($s1) */);
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
                } while (var_t5 < var_s3);
            }
            temp_t7_4 = sp + (var_t4 * 0x10);
            if (arg2 != temp_t7_4) {
                M2C_FIELD(arg2, s128 *, 0) = (s128) *temp_t7_4;
            }
            var_t7_7 = &sp40;
loop_43:
            var_v0 = 1;
            if (sp != var_t7_7) {
                var_t7_7 -= 0x10;
                goto loop_43;
            }
        }
    } else {
        var_fv0 = temp_fv1f;
        var_t6 = 4;
        var_t5_2 = 0;
        if (temp_t1 > 0) {
            var_t4_2 = 4;
            do {
                M2C_ERROR(/* unknown instruction: lqc2 $vf6, ($s1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($t7) */);
                M2C_ERROR(/* unknown instruction: vsub.xyzw $vf5, $vf6, $vf4 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf5 */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf5, $vf4, $vf5 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf5, $vf5, $vf5y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf5, $vf5, $vf5z */);
                temp_v0_2 = M2C_ERROR(/* unknown instruction: qmfc2.ni $v0, $vf5 */);
                if (temp_v0_2 <= var_fv0) {
                    var_fv0 = temp_v0_2;
                    var_t4_2 = var_t5_2;
                }
                var_t5_2 += 1;
            } while (var_t5_2 < temp_t1);
            var_t6 = var_t4_2;
        }
        if (var_t6 != 4) {
            temp_a1 = *((var_t6 * 4) + arg1);
            var_t7_8 = &sp40;
            if (arg2 != temp_a1) {
                M2C_FIELD(arg2, s128 *, 0) = (s128) *temp_a1;
                var_t7_8 = &sp40;
            }
loop_54:
            var_v0 = 1;
            if (sp != var_t7_8) {
                var_t7_8 -= 0x10;
                goto loop_54;
            }
        } else {
            var_t7_9 = &sp40;
loop_57:
            var_v0 = 0;
            if (sp != var_t7_9) {
                var_t7_9 -= 0x10;
                goto loop_57;
            }
        }
    }
    return var_v0;
}
