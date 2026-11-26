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
static AnyCell sp20;
static AnyCell sp24;
static AnyCell sp30;
static AnyCell sp40;
static AnyCell sp4C;
static AnyCell sp50;
static AnyCell sp60;
static AnyCell unkspBC;
// m2c valid-syntax output for 0x001a45b8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001A45B8 {
    /* 0x00 */ s128 sp0;                            /* inferred */
    /* 0x10 */ s128 sp10;                           /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[8];                       /* maybe part of sp24[3]? */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad34[0xC];                     /* maybe part of sp30[4]? */
    /* 0x40 */ M2C_UNK sp40;                        /* inferred */
    /* 0x40 */ char pad40[0xC];
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ s128 sp50;                           /* inferred */
    /* 0x60 */ s128 sp60;                           /* inferred */
    /* 0x70 */ char pad70[0x60];
};                                                  /* size = 0xD0 */

M2C_UNK func_0018A958(M2C_UNK * = 0, M2C_UNK = 0, f32 = 0) asm("func_0018A958");
M2C_UNK func_0018DC28(void * = 0, void * = 0, void * = 0) asm("func_0018DC28");
s32 func_0018EAF8(s32 = 0, void ** = 0) asm("func_0018EAF8");
M2C_UNK func_0018F028(void * = 0) asm("func_0018F028");
M2C_UNK func_001A48C0(void * = 0, s32 = 0) asm("func_001A48C0");
s32 func_001DC5F8(s32 = 0) asm("func_001DC5F8");
s32 func_001DC9D0(s32 = 0) asm("func_001DC9D0");
M2C_UNK func_002F8960(f32 = 0) asm("func_002F8960");
extern f32 D_FLT_0036D494 asm("D_0036D494");
extern f32 D_FLT_0036D498 asm("D_0036D498");
void func_001A45B8(void *arg0 = 0, s32 arg1 = 0, ...) asm("_ZN2YS12ATTACK_MAGIC9make_workEPNS_19ATTACK_WORK_MANAGERE");
void func_001a45b8_impl(void *arg0, s32 arg1) asm("_ZN2YS12ATTACK_MAGIC9make_workEPNS_19ATTACK_WORK_MANAGERE");
void func_001a45b8_impl(void *arg0, s32 arg1) {
    s128 sp0;
    s128 sp10;
    f32 sp20;
    void *sp30;
    M2C_UNK sp40;
    s32 sp4C;
    s128 sp50;
    s128 sp60;
    M2C_UNK var_s6;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fs0;
    f32 var_fs0f;
    s32 temp_a0;
    s32 temp_t6;
    void *temp_s3;

    unkspBC = M2C_ERROR(/* Read from unset register $fs0f */);
    sp4C = 0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC4);
    if (temp_a0 != 0) {
        if (func_001DC9D0(temp_a0) != 0) {
            func_001A48C0(arg0, func_001DC5F8(M2C_FIELD(arg0, s32 *, 0xC4)));
            goto block_3;
        }
        goto block_6;
    }
block_3:
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0xCC);
    if (temp_fv1 > 0.0f) {
        if (!(*(s32 *)0x34F240 & 0x20) && (temp_fv0 = M2C_FIELD(arg0, f32 *, 0xC8) + *(f32 *)0x349E10, M2C_FIELD(arg0, f32 *, 0xC8) = temp_fv0, (temp_fv1 < temp_fv0))) {
block_6:
            func_0018F028(arg0);
        } else {
            func_002F8960((M2C_FIELD(arg0, f32 *, 0xC8) / temp_fv1) * D_FLT_0036D494 * D_FLT_0036D498);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vaddw.x $vf4, $vf0, $vf0w */);
            M2C_ERROR(/* unknown instruction: vsub.x $vf4, $vf4, $vf3 */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw $acc, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf1, $vf1, $vf4x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
            if (&sp20 != &sp60) {
                sp20 = (s128) sp60;
            }
            goto block_12;
        }
    } else {
        if (&sp20 != (arg0 + 0x100)) {
            sp20 = (s128) M2C_FIELD(arg0, s128 *, 0x100);
        }
block_12:
        var_fs0f = sp20;
        if (!(var_fs0f < sp24)) {
            var_fs0f = sp24;
        }
        if (!(var_fs0f <= 0.0f)) {
            temp_s3 = arg0 + 0xE0;
            if (sp != temp_s3) {
                sp0 = M2C_FIELD(arg0, s128 *, 0xE0);
            }
            temp_t6 = M2C_FIELD(arg0, s32 *, 4);
            if ((temp_t6 & 0x20) || (var_fs0 = 0.0f, ((temp_t6 & 4) != 0))) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t7) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s3) */);
                M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t6) */);
                if (&sp10 != &sp60) {
                    sp10 = sp60;
                }
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf2, $vf1, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf2, $vf2, $vf2y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf2, $vf2, $vf2z */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: vaddq.x $vf2, $vf0, $q */);
                var_fs0 = M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
                M2C_ERROR(/* unknown instruction: vnop */);
                M2C_ERROR(/* unknown instruction: vdiv $q, $vf0w, $vf2x */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: vmulq.xyz $vf1, $vf1, $q */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf2 */);
                M2C_ERROR(/* unknown instruction: vmulx.xyzw $vf1, $vf1, $vf2x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
            }
            var_s6 = 3;
            sp30 = arg0;
            if (sp20 != sp24) {
                var_s6 = 0;
            }
            temp_fs1 = D_FLT_0036D498;
loop_25:
            func_0018A958(&sp40, var_s6, sp20);
            if (&sp50 != sp) {
                sp50 = sp0;
            }
            if (func_0018EAF8(arg1, &sp30) != 0) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($sp) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
                M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($sp) */);
                var_fs0 -= var_fs0f;
                if ((var_fs0f * temp_fs1) < var_fs0) {
                    goto loop_25;
                }
            }
            if (M2C_FIELD(arg0, s32 *, 4) & 4) {
                func_0018DC28(arg0, arg0 + 0xF0, temp_s3);
            }
        }
    }
}
