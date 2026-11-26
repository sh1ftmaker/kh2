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
static AnyCell sp10;
static AnyCell sp14;
static AnyCell sp20;
static AnyCell sp30;
static AnyCell sp40;
static AnyCell sp44;
static AnyCell spAC;
static AnyCell unkspA4;
// m2c valid-syntax output for 0x002cbf70, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002CBF70 {
    /* 0x00 */ s128 sp0;                            /* inferred */
    /* 0x10 */ s128 sp10;                           /* inferred */
    /* 0x14 */ s32 sp14;                            /* overlap; inferred */
    /* 0x20 */ M2C_UNK sp20;                        /* inferred */
    /* 0x20 */ char pad20[0x10];
    /* 0x30 */ M2C_UNK sp30;                        /* inferred */
    /* 0x30 */ char pad30[0x10];
    /* 0x40 */ s128 *sp40;                          /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x64];                    /* maybe part of sp44[0x1A]? */
    /* 0xAC */ f32 spAC;                            /* inferred */
};                                                  /* size = 0xB0 */

M2C_UNK func_002CB800(void * = 0, s128 * = 0) asm("func_002CB800");
void *func_002CB890(void * = 0, f32 = 0) asm("func_002CB890");
s32 func_002CB918(void * = 0) asm("func_002CB918");
s32 func_002CB920(void * = 0) asm("func_002CB920");
M2C_UNK func_002CB938(void * = 0, void * = 0, f32 = 0) asm("func_002CB938");
M2C_UNK func_002CD910(void * = 0, void * = 0, f32 = 0) asm("func_002CD910");
M2C_UNK func_002CE598(void * = 0, s128 * = 0) asm("func_002CE598");
M2C_UNK func_002CE6B8(void * = 0, s128 * = 0, f32 = 0) asm("func_002CE6B8");
f32 func_002F8870(f32 = 0) asm("func_002F8870");
extern f32 D_FLT_003758B4 asm("D_003758B4");
extern f32 D_FLT_003758B8 asm("D_003758B8");
extern f32 D_FLT_003758BC asm("D_003758BC");
extern f32 D_FLT_003758C0 asm("D_003758C0");
extern f32 D_FLT_003758C4 asm("D_003758C4");
s32 func_002CBF70(void *arg0 = 0, s128 *arg1 = 0, s128 *arg2 = 0, f32 fparg0 = 0, ...) asm("_ZN2Ti4Path12get_next_posERN2kn7FVectorES3_f");
s32 func_002cbf70_impl(void *arg0, s128 *arg1, s128 *arg2, f32 fparg0) asm("_ZN2Ti4Path12get_next_posERN2kn7FVectorES3_f");
s32 func_002cbf70_impl(void *arg0, s128 *arg1, s128 *arg2, f32 fparg0) {
    s128 sp10;
    s32 sp14;
    M2C_UNK sp20;
    M2C_UNK sp30;
    s128 *sp40;
    s32 sp44;
    f32 spAC;
    f32 temp_fs1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_s0;
    f32 temp_t0;
    f32 temp_t0_2;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_s4;
    s128 *var_t7;
    s128 *var_t7_2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_t6;
    s32 var_fp;
    s32 var_s4_2;
    s32 var_s7;
    s32 var_v0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    spAC = M2C_ERROR(/* Read from unset register $fs1f */);
    unkspA4 = M2C_ERROR(/* Read from unset register $fs0f */);
    sp40 = arg1;
    if (M2C_FIELD(arg0, u8 *, 0x87) != 0) {
        var_v0 = 0;
        if (M2C_FIELD(arg0, s32 *, 8) >= 2) {
            var_fv1 = M2C_FIELD(arg0, f32 *, 0x1C);
            var_v0 = 0;
            if (!(((f32) func_002CB920() - D_FLT_003758B4) < var_fv1)) {
                goto block_4;
            }
        }
    } else {
        temp_fs1f = M2C_FIELD(arg0, f32 *, 0x18);
        func_002CD910(sp, arg0, temp_fs1f);
        sp10 = *arg2;
        func_002CE6B8(arg0, arg2, fparg0 * D_FLT_003758B8);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($sp) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s6) */);
        M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t6) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s5) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s6) */);
        M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t6) */);
        M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
        M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
        M2C_ERROR(/* unknown instruction: vwaitq */);
        temp_t0 = M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t7) */);
        M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
        M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
        M2C_ERROR(/* unknown instruction: vwaitq */);
        temp_t0_2 = M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
        if (func_002F8870(temp_t0_2 - temp_t0) < ((temp_t0 + temp_t0_2) * D_FLT_003758BC)) {
            M2C_FIELD(arg0, f32 *, 0x18) = temp_fs1f;
            if (arg2 != sp) {
                *arg2 = sp0;
            }
        }
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x18);
        temp_t6 = M2C_FIELD(arg0, s32 *, 0x8C);
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_fv0;
        if (temp_t6 >= 0) {
            var_fv1 = temp_fv0;
            if (M2C_FIELD(arg0, u8 *, 0x86) == 0) {
                if (M2C_BITWISE(s32, D_FLT_003758BC) < temp_t6) {
                    M2C_FIELD(arg0, u8 *, 0x84) = 1U;
                } else {
                    M2C_FIELD(arg0, u8 *, 0x84) = 0U;
                }
            }
        } else {
            var_fv1 = temp_fv0;
        }
block_4:
        if (var_fv1 < D_FLT_003758C0) {
            func_002CE598(arg0, arg2);
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        }
        if (M2C_FIELD(arg0, u8 *, 0x87) != 0) {
            temp_s0 = D_FLT_003758B4;
            var_t7 = arg0 + 0x70;
            if (M2C_BITWISE(s32, temp_s0) >= func_002CB918(arg0)) {
                temp_v0 = func_002CB890(arg0, temp_s0);
                if ((arg0 + 0x50) != temp_v0) {
                    M2C_FIELD(arg0, s128 *, 0x50) = (s128) M2C_FIELD(temp_v0, s128 *, 0);
                }
                if ((arg0 + 0x60) != (temp_v0 + 0x10)) {
                    M2C_FIELD(arg0, s128 *, 0x60) = (s128) M2C_FIELD(temp_v0, s128 *, 0x10);
                }
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t6) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t7) */);
                M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($sp) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($sp) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
                goto block_13;
            }
        } else {
block_13:
            var_t7 = arg0 + 0x70;
        }
        var_fp = 0;
        if (var_t7 != arg2) {
            *var_t7 = *arg2;
            var_fp = 0;
        }
loop_17:
        var_s7 = 0;
        sp44 = 1;
loop_18:
        func_002CB938(sp, arg0, M2C_FIELD(arg0, f32 *, 0x1C));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($sp) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s5) */);
        M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s6) */);
        sp14 = 0;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s6) */);
        M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
        M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
        M2C_ERROR(/* unknown instruction: vwaitq */);
        if (fparg0 < M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */)) {
            var_v0 = 1;
            if (sp40 != sp) {
                *sp40 = sp0;
                goto block_21;
            }
        } else {
            temp_fv1 = (fparg0 / M2C_FIELD(arg0, f32 *, 0x28)) * D_FLT_003758C4;
            if (M2C_FIELD(arg0, u8 *, 0x84) != 0) {
                temp_fv0f = M2C_FIELD(arg0, f32 *, 0x1C) + temp_fv1;
                M2C_FIELD(arg0, f32 *, 0x1C) = temp_fv0f;
                if ((M2C_FIELD(arg0, f32 *, 0x4C) + D_FLT_003758B4) <= temp_fv0f) {
                    var_s4 = temp_fv0f;
                    if (M2C_FIELD(arg0, u8 *, 0x87) != 0) {
                        if (M2C_BITWISE(s32, var_s4) >= func_002CB920(arg0)) {
                            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
                            if ((arg0 + 0x30) != (arg0 + 0x50)) {
                                M2C_FIELD(arg0, s128 *, 0x30) = (s128) M2C_FIELD(arg0, s128 *, 0x50);
                            }
                            if ((arg0 + 0x40) == (arg0 + 0x60)) {
                                var_v0 = 0;
                            } else {
                                M2C_FIELD(arg0, s128 *, 0x40) = (s128) M2C_FIELD(arg0, s128 *, 0x60);
                                goto block_33;
                            }
                        } else {
                            if (M2C_BITWISE(s32, var_s4) < func_002CB918(arg0)) {
                                func_002CE598(arg0, arg2);
                                sp44 = 0;
                                M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
                                goto block_36;
                            }
                            goto block_41;
                        }
                    } else {
                        if (func_002CB920(arg0) < M2C_BITWISE(s32, var_s4)) {
                            if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
                                goto block_58;
                            }
                            temp_s4 = (M2C_BITWISE(s32, var_s4) - func_002CB920(arg0)) - 1;
                            var_s4 = M2C_BITWISE(f32, (temp_s4 + func_002CB918(arg0)));
                            goto block_41;
                        }
block_41:
                        temp_s0_2 = arg0 + 0x50;
                        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
                        if ((arg0 + 0x30) != temp_s0_2) {
                            M2C_FIELD(arg0, s128 *, 0x30) = (s128) M2C_FIELD(arg0, s128 *, 0x50);
                        }
                        temp_s1 = arg0 + 0x60;
                        if ((arg0 + 0x40) != temp_s1) {
                            M2C_FIELD(arg0, s128 *, 0x40) = (s128) M2C_FIELD(arg0, s128 *, 0x60);
                        }
                        temp_v0_2 = func_002CB890(arg0, var_s4);
                        if (temp_s0_2 != temp_v0_2) {
                            M2C_FIELD(arg0, s128 *, 0x50) = (s128) M2C_FIELD(temp_v0_2, s128 *, 0);
                        }
                        if (temp_s1 != (temp_v0_2 + 0x10)) {
                            M2C_FIELD(arg0, s128 *, 0x60) = (s128) M2C_FIELD(temp_v0_2, s128 *, 0x10);
                        }
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s3) */);
                        M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s6) */);
                        goto block_50;
                    }
                } else {
                    goto block_51;
                }
            } else {
                temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 0x4C);
                temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x1C) - temp_fv1;
                M2C_FIELD(arg0, f32 *, 0x1C) = temp_fv0_2;
                if (temp_fv0_2 <= temp_fv0f_2) {
                    var_s4_2 = M2C_BITWISE(s32, temp_fv0f_2) - 1;
                    if (var_s4_2 < func_002CB918(arg0)) {
                        temp_s4_2 = var_s4_2 - func_002CB918(arg0);
                        var_s4_2 = temp_s4_2 + func_002CB920(arg0) + 1;
                    }
                    if (M2C_FIELD(arg0, u8 *, 0x87) != 0) {
                        var_v0 = 0;
                        if (!(M2C_FIELD(arg0, f32 *, 0x1C) < (f32) func_002CB918(arg0))) {
                            goto block_65;
                        }
                    } else {
                        if (!(M2C_FIELD(arg0, f32 *, 0x1C) <= (f32) func_002CB918(arg0))) {
                            var_fv0 = M2C_FIELD(arg0, f32 *, 0x4C);
                            goto block_81;
                        }
                        if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
block_58:
                            if (M2C_FIELD(arg0, u8 *, 0x85) != 0) {
                                func_002CB800(arg0, arg2);
                                sp44 = 0;
                                goto block_36;
                            }
block_33:
                            var_v0 = 0;
                        } else {
                            var_fv0 = (f32) (func_002CB920(arg0) + 1);
block_81:
                            M2C_FIELD(arg0, f32 *, 0x1C) = var_fv0;
block_65:
                            temp_s0_3 = arg0 + 0x30;
                            var_t7_2 = arg0 + 0x60;
                            if ((arg0 + 0x50) != temp_s0_3) {
                                M2C_FIELD(arg0, s128 *, 0x50) = (s128) M2C_FIELD(arg0, s128 *, 0x30);
                                var_t7_2 = arg0 + 0x60;
                            }
                            temp_s1_2 = arg0 + 0x40;
                            if (var_t7_2 != temp_s1_2) {
                                *var_t7_2 = M2C_FIELD(arg0, s128 *, 0x40);
                            }
                            temp_v0_3 = func_002CB890(arg0, M2C_BITWISE(f32, var_s4_2));
                            if (temp_s0_3 != temp_v0_3) {
                                M2C_FIELD(arg0, s128 *, 0x30) = (s128) M2C_FIELD(temp_v0_3, s128 *, 0);
                            }
                            if (temp_s1_2 != (temp_v0_3 + 0x10)) {
                                M2C_FIELD(arg0, s128 *, 0x40) = (s128) M2C_FIELD(temp_v0_3, s128 *, 0x10);
                            }
                            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
                            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
                            M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
                            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s6) */);
block_50:
                            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s6) */);
                            M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf1 */);
                            M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
                            M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
                            M2C_ERROR(/* unknown instruction: vwaitq */);
                            M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
                            goto block_51;
                        }
                    }
                } else {
block_51:
                    var_s7 += 1;
                    if (var_s7 >= 0x14) {
block_36:
                        var_fp += 1;
                        if ((var_fp >= 2) || (sp44 != 0)) {
                            if (sp40 != arg2) {
                                *sp40 = *arg2;
                            }
block_21:
                            var_v0 = 1;
                        } else {
                            goto loop_17;
                        }
                    } else {
                        goto loop_18;
                    }
                }
            }
        }
    }
    return var_v0;
}
