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
static AnyCell sp1C;
static AnyCell sp20;
static AnyCell sp30;
static AnyCell sp40;
static AnyCell sp50;
static AnyCell sp60;
static AnyCell spB4;
static AnyCell unksp4;
// m2c valid-syntax output for 0x0010e810, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0010E810 {
    /* 0x00 */ s128 sp0;                            /* inferred */
    /* 0x10 */ s128 sp10;                           /* inferred */
    /* 0x1C */ f32 sp1C;                            /* overlap; inferred */
    /* 0x20 */ s128 sp20;                           /* inferred */
    /* 0x30 */ s128 sp30;                           /* inferred */
    /* 0x40 */ s128 sp40;                           /* inferred */
    /* 0x50 */ M2C_UNK sp50;                        /* inferred */
    /* 0x50 */ char pad50[0x10];
    /* 0x60 */ s128 sp60;                           /* inferred */
    /* 0x70 */ char pad70[0x44];                    /* maybe part of sp60[5]? */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char padB8[8];
};                                                  /* size = 0xC0 */

M2C_UNK func_0010CAC8(void * = 0, M2C_UNK = 0, f32 = 0) asm("func_0010CAC8");
s32 func_0010E368() asm("func_0010E368");
s32 func_0010E6E0(void * = 0, s128 * = 0, f32 = 0, f32 = 0) asm("func_0010E6E0");
f32 func_0010E7E0(void * = 0, s32 = 0) asm("func_0010E7E0");
f32 func_001142E0(s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_001142E0");
f32 func_00114328(s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_00114328");
s32 func_00143AE0(s128 * = 0, s128 * = 0, M2C_UNK * = 0, s32 = 0) asm("func_00143AE0");
s32 func_00143F28(u16 = 0, M2C_UNK = 0) asm("func_00143F28");
s128 *func_0016C028(void * = 0) asm("func_0016C028");
s32 func_001917C0() asm("func_001917C0");
extern f32 D_FLT_0036A510 asm("D_0036A510");
extern f32 D_FLT_0036A514 asm("D_0036A514");
extern f32 D_FLT_0036A518 asm("D_0036A518");
extern f32 D_FLT_0036A51C asm("D_0036A51C");
extern f32 D_FLT_0036A520 asm("D_0036A520");
extern f32 D_FLT_0036A524 asm("D_0036A524");
extern f32 D_FLT_0036A528 asm("D_0036A528");
void func_0010E810(void *arg0 = 0, s32 arg1 = 0, ...) asm("_ZN2kn6Friend10followMoveEPKNS_6VecSetE");
void func_0010e810_impl(void *arg0, s32 arg1) asm("_ZN2kn6Friend10followMoveEPKNS_6VecSetE");
void func_0010e810_impl(void *arg0, s32 arg1) {
    s128 sp0;
    s128 sp10;
    f32 sp1C;
    s128 sp20;
    s128 sp30;
    s128 sp40;
    M2C_UNK sp50;
    s128 sp60;
    f32 spB4;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 var_fa1;
    f32 var_fs0;
    f32 var_fs0f;
    s128 *temp_v0_2;
    s128 *temp_v0_3;
    s128 *var_s4;
    s32 temp_a1;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0;
    s32 var_t5;
    s32 var_t7;
    s32 var_t7_2;
    s32 var_t7_3;
    u16 temp_a0;
    void *temp_t7_2;
    void *var_s6;

    spB4 = M2C_ERROR(/* Read from unset register $fs0f */);
    if (!(M2C_FIELD(arg0, s32 *, 0xB7C) & 0x10000000) && (func_0010E368() == 0)) {
        temp_s5 = arg1 == (s32) (arg0 + 0xB80);
        temp_s3 = func_001917C0();
        if (temp_s5 != 0) {
            var_s4 = arg0 + 0xC00;
            if (!(M2C_FIELD(arg0, s32 *, 0xB7C) & 0x10)) {
                func_0016C028(arg0);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($sp) */);
                if (var_s4 != sp) {
                    M2C_FIELD(arg0, s128 *, 0xC00) = sp0;
                }
                M2C_FIELD(arg0, s32 *, 0xC04) = 0;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf2, $vf1, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf2, $vf2, $vf2y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf2, $vf2, $vf2z */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
                M2C_ERROR(/* unknown instruction: vaddq.x $vf2, $vf0, $q */);
                M2C_ERROR(/* unknown instruction: vnop */);
                M2C_ERROR(/* unknown instruction: vdiv $q, $vf0w, $vf2x */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: vmulq.xyz $vf1, $vf1, $q */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s4) */);
                var_s6 = arg1 + 0x20;
            } else {
                goto block_76;
            }
        } else {
            var_s4 = arg0 + 0xC00;
block_76:
            var_s6 = arg1 + 0x20;
            if (var_s4 != var_s6) {
                *var_s4 = M2C_FIELD(arg1, s128 *, 0x20);
            }
        }
        temp_a1 = M2C_FIELD(arg0, s32 *, 0xB78);
        if (temp_a1 != 3) {
            var_fs0 = func_00114328(M2C_FIELD(arg0, s32 *, 0xB60), temp_a1, temp_s3, temp_s5);
            var_fs0f = func_001142E0(M2C_FIELD(arg0, s32 *, 0xB60), M2C_FIELD(arg0, s32 *, 0xB78), temp_s3, temp_s5);
            if ((temp_s3 != 0) && (temp_s5 != 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x98)(arg0) == 3)) {
                var_fs0 *= 2.0f;
                var_fs0f *= 2.0f;
            }
            temp_fv0 = M2C_FIELD(var_s6, f32 *, 0xC);
            if (!(var_fs0 < temp_fv0)) {
                if (temp_fv0 < var_fs0f) {
                    temp_t7 = M2C_FIELD(arg0, s32 *, 0xB78);
                    var_t7 = temp_t7 - 1;
                    if (temp_t7 > 0) {
                        goto block_16;
                    }
                }
            } else {
                temp_t6 = M2C_FIELD(arg0, s32 *, 0xB78);
                var_t7 = temp_t6 + 1;
                if (temp_t6 < 2) {
block_16:
                    M2C_FIELD(arg0, s32 *, 0xB78) = var_t7;
                }
            }
        }
        temp_fv0_2 = func_0010E7E0(arg0, M2C_FIELD(arg0, s32 *, 0xB78));
        M2C_FIELD(arg0, f32 *, 0xC0C) = temp_fv0_2;
        if ((temp_s5 != 0) && (temp_fv0_2 == 0.0f)) {
            var_t5 = M2C_FIELD(arg0, s32 *, 0xB7C);
            if (var_t5 & 0x10) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf2 */);
                M2C_ERROR(/* unknown instruction: vmulx.xyzw $vf1, $vf1, $vf2x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($sp) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($sp) */);
                M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s4) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf2, $vf1, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf2, $vf2, $vf2y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf2, $vf2, $vf2z */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
                M2C_ERROR(/* unknown instruction: vaddq.x $vf2, $vf0, $q */);
                M2C_ERROR(/* unknown instruction: vnop */);
                M2C_ERROR(/* unknown instruction: vdiv $q, $vf0w, $vf2x */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: vmulq.xyz $vf1, $vf1, $q */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s4) */);
                M2C_FIELD(arg0, f32 *, 0xC0C) = func_0010E7E0(arg0, 1);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s6) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
                if (D_FLT_0036A514 < M2C_ERROR(/* unknown instruction: qmfc2.ni $t0, $vf1 */)) {
                    var_t7_2 = M2C_FIELD(arg0, s32 *, 0xB7C) & ~0x10;
                    goto block_22;
                }
                var_t5 = M2C_FIELD(arg0, s32 *, 0xB7C);
            } else if (*(u8 *)0x3A9040 != 0) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t7) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s6) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf1, $vf1, $vf1z */);
                var_t7_2 = var_t5 | 0x10;
                if (M2C_ERROR(/* unknown instruction: qmfc2.ni $t0, $vf1 */) < D_FLT_0036A518) {
block_22:
                    M2C_FIELD(arg0, s32 *, 0xB7C) = var_t7_2;
                    var_t5 = var_t7_2;
                }
            }
            var_t7_3 = var_t5 & ~0x40;
        } else {
            var_t7_3 = M2C_FIELD(arg0, s32 *, 0xB7C) & ~0x10;
        }
        temp_fs0 = M2C_FIELD(arg0, f32 *, 0x118);
        M2C_FIELD(arg0, s32 *, 0xB7C) = var_t7_3;
        var_fa1 = temp_fs0;
        if (temp_s5 != 0) {
            temp_fv0f = M2C_FIELD(arg1, f32 *, 0);
            if (temp_fv0f > 0.0f) {
                var_fa1 = temp_fs0 + temp_fv0f;
            }
        }
        temp_v0 = func_0010E6E0(arg0, var_s4, M2C_FIELD(arg0, f32 *, 0xC0C), var_fa1);
        switch (temp_v0) {                          /* irregular */
        case 0:
            break;
        default:
            M2C_FIELD(arg0, f32 *, 0xC0C) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0xCD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xCD8) + 1);
            /* fallthrough */
        case 2:
            break;
        case 1:
            if ((M2C_FIELD(arg0, s32 *, 0x608) != 0) || (temp_a0 = M2C_FIELD(arg0, u16 *, 0x5F0), (temp_a0 == 0xFFFF)) || (func_00143F28(temp_a0, 0) != 4)) {
                temp_v0_2 = func_0016C028(arg0);
                if (sp != temp_v0_2) {
                    sp0 = *temp_v0_2;
                }
                unksp4 -= M2C_FIELD(arg0, f32 *, 0x5FC) * D_FLT_0036A510;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf2 */);
                M2C_ERROR(/* unknown instruction: vmulx.xyzw $vf1, $vf1, $vf2x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t6) */);
                if (&sp10 != &sp60) {
                    sp10 = sp60;
                }
                sp1C = D_FLT_0036A51C;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf2, $vf1, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf2, $vf2, $vf2y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf2, $vf2, $vf2z */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
                M2C_ERROR(/* unknown instruction: vaddq.x $vf2, $vf0, $q */);
                M2C_ERROR(/* unknown instruction: vnop */);
                M2C_ERROR(/* unknown instruction: vdiv $q, $vf0w, $vf2x */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: vmulq.xyz $vf1, $vf1, $q */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t7) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t5) */);
                M2C_ERROR(/* unknown instruction: vsub.xyzw $vf3, $vf0, $vf0 */);
                M2C_ERROR(/* unknown instruction: vopmula.xyz $acc, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf3, $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf3, ($t6) */);
                if (&sp20 != &sp60) {
                    sp20 = sp60;
                }
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf2, $vf1, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf2, $vf2, $vf2y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf2, $vf2, $vf2z */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
                M2C_ERROR(/* unknown instruction: vaddq.x $vf2, $vf0, $q */);
                M2C_ERROR(/* unknown instruction: vnop */);
                M2C_ERROR(/* unknown instruction: vdiv $q, $vf0w, $vf2x */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: vmulq.xyz $vf1, $vf1, $q */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t7) */);
                M2C_ERROR(/* unknown instruction: vsub.xyzw $vf3, $vf0, $vf0 */);
                M2C_ERROR(/* unknown instruction: vopmula.xyz $acc, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf3, $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf3, ($t6) */);
                if (&sp10 != &sp60) {
                    sp10 = sp60;
                }
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: vmul.xyz $vf2, $vf1, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddy.x $vf2, $vf2, $vf2y */);
                M2C_ERROR(/* unknown instruction: vaddz.x $vf2, $vf2, $vf2z */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: cfc2.ni $t0, $vi22 */);
                M2C_ERROR(/* unknown instruction: vaddq.x $vf2, $vf0, $q */);
                M2C_ERROR(/* unknown instruction: vnop */);
                M2C_ERROR(/* unknown instruction: vdiv $q, $vf0w, $vf2x */);
                M2C_ERROR(/* unknown instruction: vwaitq */);
                M2C_ERROR(/* unknown instruction: vmulq.xyz $vf1, $vf1, $q */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf2 */);
                M2C_ERROR(/* unknown instruction: vmulx.xyzw $vf1, $vf1, $vf2x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($sp) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t5) */);
                M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t6) */);
                if (&sp10 != &sp60) {
                    sp10 = sp60;
                }
                sp1C = D_FLT_0036A51C;
                if (&sp30 != sp) {
                    sp30 = sp0;
                }
                if (&sp40 != &sp10) {
                    sp40 = sp10;
                }
                if (func_00143AE0(&sp30, &sp20, &sp50, ((s64) (M2C_FIELD(arg0, s64 *, 0x600) << 0x1D) >> 0x20) & 0xF) != 0) {
                    temp_v0_3 = func_0016C028(arg0);
                    if (sp != temp_v0_3) {
                        sp0 = *temp_v0_3;
                    }
                    func_0010CAC8(arg0, 3, temp_fs0);
                }
            }
            break;
        }
        if ((M2C_FIELD(var_s6, f32 *, 0xC) < D_FLT_0036A520) && (M2C_FIELD(arg1, f32 *, 0) < D_FLT_0036A524)) {
            M2C_FIELD(arg0, f32 *, 0xC0C) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0xCD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xCD8) + 1);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0xB7C) & 0x20000) && (M2C_FIELD(arg0, s32 *, 0x810) != 0)) {
            temp_t7_2 = *(void **)0x341708;
            if ((temp_t7_2 != NULL) && (M2C_FIELD(temp_t7_2, s32 *, 0x810) == 0) && (D_FLT_0036A528 < M2C_FIELD(arg0, f32 *, 0xB80))) {
                func_0010CAC8(arg0, 3, temp_fs0);
            }
        }
    }
}
