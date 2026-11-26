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

static AnyCell sp0;
static AnyCell sp10;
static AnyCell sp14;
static AnyCell sp20;
static AnyCell sp30;
static AnyCell sp40;
static AnyCell sp44;
static AnyCell sp50;
static AnyCell sp60;
static AnyCell unksp4;
// m2c raw+unkfix output for 0x001424c0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001424C0 {
    /* 0x00 */ s128 sp0;                            /* inferred */
    /* 0x10 */ s128 sp10;                           /* inferred */
    /* 0x14 */ f32 sp14;                            /* overlap; inferred */
    /* 0x20 */ s128 sp20;                           /* inferred */
    /* 0x30 */ s128 sp30;                           /* inferred */
    /* 0x40 */ s128 sp40;                           /* inferred */
    /* 0x44 */ f32 sp44;                            /* overlap; inferred */
    /* 0x50 */ u16 sp50;                            /* inferred */
    /* 0x52 */ char pad52[0xE];                     /* maybe part of sp50[8]s32 */
    /* 0x60 */ s128 sp60;                           /* inferred */
    /* 0x70 */ char pad70[0x30];
};                                                  /* size = 0xA0 */

s32 func_001419F8(s32 = 0, u16 = 0, void * = 0, s128 * = 0) asm("func_001419F8");
s32 func_00141C18(s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_00141C18");
s32 func_00141FF0(s32 = 0, s128 * = 0, s128 * = 0, u16 * = 0) asm("func_00141FF0");
f32 func_002F8870(f32 = 0) asm("func_002F8870");
extern f32 D_FLT_0036AEE0 asm("D_0036AEE0");
extern f32 D_FLT_0036AEE4 asm("D_0036AEE4");
extern f32 D_FLT_0036AEE8 asm("D_0036AEE8");
s32 func_001424C0(s32 arg0 = 0, void *arg1 = 0, ...) asm("func_001424c0");
s32 func_001424c0_impl(s32 arg0, void *arg1) asm("func_001424c0");
s32 func_001424c0_impl(s32 arg0, void *arg1) {
    s128 sp0;
    s128 sp10;
    f32 sp14;
    s128 sp20;
    s128 sp30;
    s128 sp40;
    u16 sp50;
    s128 sp60;
    f32 temp_fv1;
    f32 var_fv0;
    f32 var_fv1f;
    s32 var_v0;

    sp0 = (*(s32*)((s8*)arg1 + 0x30));
    sp10 = (*(s32*)((s8*)arg1 + 0x30));
    var_fv1f = func_002F8870((*(s32*)((s8*)arg1 + 0x14)));
    if (!((*(s32*)((s8*)arg1 + 0x70)) & 0x78)) {
        var_fv0 = 0.0f;
        if (!(var_fv1f < 0.0f)) {
            var_fv0 = D_FLT_0036AEE0;
            if (!(var_fv0 < var_fv1f)) {
                var_fv0 = var_fv1f;
            }
        }
        var_fv1f = var_fv0;
    }
    temp_fv1 = (*(s32*)((s8*)arg1 + 0x6C));
    unksp4 = (unksp4 - temp_fv1) - var_fv1f;
    sp14 += temp_fv1 * D_FLT_0036AEE4;
    if (&sp20 != sp) {
        sp20 = sp0;
    }
    if (&sp30 != &sp10) {
        sp30 = sp10;
    }
    sp50 = -1U;
    func_00141C18(arg0, 0xF, 4, 1);
    if (func_00141FF0(arg0, &sp20, &sp40, &sp50) != 0) {
        (*(s32*)((s8*)arg1 + 0x68)) = sp44;
        (*(s32*)((s8*)arg1 + 0x70)) = (s64) ((*(s32*)((s8*)arg1 + 0x70)) & ~(1 << 0x21));
        sp60 = sp40;
        func_001419F8(arg0, sp50, arg1, &sp60);
        var_v0 = 1;
    } else {
        (*(s32*)((s8*)arg1 + 0x70)) = (s64) ((*(s32*)((s8*)arg1 + 0x70)) | (1 << 0x21));
        (*(s32*)((s8*)arg1 + 0x68)) = (f32) D_FLT_0036AEE8;
        sp60 = (*(s32*)((s8*)arg1 + 0x30));
        func_001419F8(arg0, sp50, arg1, &sp60);
        var_v0 = 0;
    }
    return var_v0;
}
