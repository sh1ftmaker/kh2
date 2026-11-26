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

// m2c valid-syntax output for 0x00142940, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00142940 {};                 /* size 0x0 */

extern f32 D_FLT_0036AEF4 asm("D_0036AEF4");
void func_00142940(void *arg0 = 0, void *arg1 = 0, ...) asm("func_00142940");
void func_00142940_impl(void *arg0, void *arg1) asm("func_00142940");
void func_00142940_impl(void *arg0, void *arg1) {
    void *temp_a0;
    void *var_t7;

    M2C_FIELD(arg0, s8 *, 0xD1) = 0;
    if ((M2C_FIELD(arg1, f32 *, 0) == D_FLT_0036AEF4) && (M2C_FIELD(arg1, f32 *, 4) == 0.0f) && (M2C_FIELD(arg1, f32 *, 8) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0xC) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0x10) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0x14) == D_FLT_0036AEF4) && (M2C_FIELD(arg1, f32 *, 0x18) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0x1C) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0x20) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0x24) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0x28) == D_FLT_0036AEF4) && (M2C_FIELD(arg1, f32 *, 0x2C) == 0.0f)) {
        var_t7 = arg0 + 0x50;
        if ((M2C_FIELD(arg1, f32 *, 0x30) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0x34) == 0.0f) && (M2C_FIELD(arg1, f32 *, 0x38) == 0.0f)) {
            if (M2C_FIELD(arg1, f32 *, 0x3C) == D_FLT_0036AEF4) {
                M2C_FIELD(arg0, s8 *, 0xD1) = 1;
            }
            goto block_17;
        }
    } else {
block_17:
        var_t7 = arg0 + 0x50;
    }
    if (var_t7 != arg1) {
        M2C_FIELD(var_t7, s128 *, 0) = M2C_BITWISE(s128, M2C_FIELD(arg1, f32 *, 0));
        M2C_FIELD(var_t7, s128 *, 0x10) = M2C_BITWISE(s128, M2C_FIELD(arg1, f32 *, 0x10));
        M2C_FIELD(var_t7, s128 *, 0x20) = M2C_BITWISE(s128, M2C_FIELD(arg1, f32 *, 0x20));
        M2C_FIELD(var_t7, s128 *, 0x30) = M2C_BITWISE(s128, M2C_FIELD(arg1, f32 *, 0x30));
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a1) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz $acc, $vf2, $vf3 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf5, $vf3, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz $acc, $vf3, $vf1 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf6, $vf1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz $acc, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf7, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vmul.xyz $vf8, $vf1, $vf5 */);
    M2C_ERROR(/* unknown instruction: vmul.xyz $vf1, $vf4, $vf5 */);
    M2C_ERROR(/* unknown instruction: vmul.xyz $vf2, $vf4, $vf6 */);
    M2C_ERROR(/* unknown instruction: vmul.xyz $vf3, $vf4, $vf7 */);
    M2C_ERROR(/* unknown instruction: vaddy.x $vf8, $vf8, $vf8y */);
    M2C_ERROR(/* unknown instruction: vaddy.x $vf1, $vf1, $vf1y */);
    M2C_ERROR(/* unknown instruction: vaddx.y $vf2, $vf2, $vf2x */);
    M2C_ERROR(/* unknown instruction: vaddx.z $vf3, $vf3, $vf3x */);
    M2C_ERROR(/* unknown instruction: vaddz.x $vf8, $vf8, $vf8z */);
    M2C_ERROR(/* unknown instruction: vaddz.x $vf4, $vf1, $vf1z */);
    M2C_ERROR(/* unknown instruction: vaddz.y $vf4, $vf2, $vf2z */);
    M2C_ERROR(/* unknown instruction: vaddy.z $vf4, $vf3, $vf3y */);
    M2C_ERROR(/* unknown instruction: vdiv $q, $vf0w, $vf8x */);
    M2C_ERROR(/* unknown instruction: qmfc2.ni $t0, $vf5 */);
    M2C_ERROR(/* unknown instruction: qmfc2.ni $t1, $vf6 */);
    M2C_ERROR(/* unknown instruction: qmfc2.ni $t2, $vf7 */);
    M2C_ERROR(/* unknown instruction: qmfc2.ni $t3, $vf0 */);
    M2C_ERROR(/* unknown instruction: pextlw $t4, $t1, $t0 */);
    M2C_ERROR(/* unknown instruction: pextuw $t5, $t1, $t0 */);
    M2C_ERROR(/* unknown instruction: pextlw $t6, $t3, $t2 */);
    M2C_ERROR(/* unknown instruction: pextuw $t7, $t3, $t2 */);
    M2C_ERROR(/* unknown instruction: pcpyld $t0, $t6, $t4 */);
    M2C_ERROR(/* unknown instruction: pcpyud $t1, $t4, $t6 */);
    M2C_ERROR(/* unknown instruction: pcpyld $t2, $t7, $t5 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $t1, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $t2, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf4, $vf0, $vf4 */);
    M2C_ERROR(/* unknown instruction: vwaitq */);
    M2C_ERROR(/* unknown instruction: vmulq.xyzw $vf1, $vf1, $q */);
    M2C_ERROR(/* unknown instruction: vmulq.xyzw $vf2, $vf2, $q */);
    M2C_ERROR(/* unknown instruction: vmulq.xyzw $vf3, $vf3, $q */);
    M2C_ERROR(/* unknown instruction: vmulq.xyz $vf4, $vf4, $q */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a1) */);
    temp_a0 = arg0 + 0x90;
    if (temp_a0 != arg1) {
        M2C_FIELD(arg0, s128 *, 0x90) = M2C_BITWISE(s128, M2C_FIELD(arg1, f32 *, 0));
        M2C_FIELD(temp_a0, s128 *, 0x10) = M2C_BITWISE(s128, M2C_FIELD(arg1, f32 *, 0x10));
        M2C_FIELD(temp_a0, s128 *, 0x20) = M2C_BITWISE(s128, M2C_FIELD(arg1, f32 *, 0x20));
        M2C_FIELD(temp_a0, s128 *, 0x30) = M2C_BITWISE(s128, M2C_FIELD(arg1, f32 *, 0x30));
    }
}
