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

// m2c raw+unkfix output for 0x00166da8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00166DA8 {
    /* 0x00 */ char pad0[0x10];
};                                                  /* size = 0x10 */

s32 func_0014D8D0(s32 *) asm("func_0014D8D0");
s32 func_0014D8D0(s32 * = 0) asm("func_0014D8D0");
extern s32 D_0034C990 asm("D_0034C990");
extern s32 D_0034CAF0 asm("D_0034CAF0");
extern s32 D_0034CCE0 asm("D_0034CCE0");
extern s32 D_0034D150 asm("D_0034D150");
extern s32 D_0034D180 asm("D_0034D180");
void func_00166DA8(void *arg0 = 0, ...) asm("func_00166da8");
void func_00166da8_impl(void *arg0) asm("func_00166da8");
void func_00166da8_impl(void *arg0) {
    s32 *var_a0;
    s32 temp_t1;
    s64 temp_t3;
    s64 temp_t3_2;
    s64 temp_t4;
    s64 temp_t4_2;

    if ((*(s32*)((s8*)arg0 + 0x0)) != 0) {
        if ((*(s32*)((s8*)arg0 + 0x1)) == 0) {
            (*(s32*)((s8*)&D_0034C990 + 0x20)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x73007000);
            temp_t1 = (0x8D << 0x18) | 0x9000;
            (*(s32*)((s8*)&D_0034CAF0 + 0x18)) = (s64) ((0x301 << 0x17) | 0x8080);
            (*(s32*)((s8*)&D_0034C990 + 0x28)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | temp_t1);
            temp_t3 = (0x281 << 0x17) | 0x8080;
            (*(s32*)((s8*)&D_0034CAF0 + 0x28)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72E06FE0);
            temp_t4 = (0x241 << 0x17) | 0x8080;
            (*(s32*)((s8*)&D_0034CAF0 + 0x48)) = temp_t3;
            var_a0 = &D_0034CCE0;
            (*(s32*)((s8*)&D_0034CAF0 + 0x38)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x467 << 0x15) | 0x8FE0));
            (*(s32*)((s8*)&D_0034CAF0 + 0x58)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72C06FC0);
            (*(s32*)((s8*)&D_0034CAF0 + 0x78)) = temp_t3;
            (*(s32*)((s8*)&D_0034CAF0 + 0x68)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x233 << 0x16) | 0x8FC0));
            (*(s32*)((s8*)&D_0034CAF0 + 0x88)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x73007000);
            (*(s32*)((s8*)&D_0034CAF0 + 0xA8)) = temp_t3;
            (*(s32*)((s8*)&D_0034CAF0 + 0x98)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | temp_t1);
            (*(s32*)((s8*)&D_0034CAF0 + 0xB8)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x73006FC0);
            (*(s32*)((s8*)&D_0034CAF0 + 0xD8)) = temp_t3;
            (*(s32*)((s8*)&D_0034CAF0 + 0xC8)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x8D << 0x18) | 0x8FC0));
            (*(s32*)((s8*)&D_0034CAF0 + 0xE8)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72C07000);
            (*(s32*)((s8*)&D_0034CAF0 + 0x108)) = temp_t4;
            (*(s32*)((s8*)&D_0034CAF0 + 0xF8)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x233 << 0x16) | 0x9000));
            (*(s32*)((s8*)&D_0034CAF0 + 0x118)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72C06FE0);
            (*(s32*)((s8*)&D_0034CAF0 + 0x128)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x233 << 0x16) | 0x8FE0));
            (*(s32*)((s8*)&D_0034CAF0 + 0x138)) = temp_t4;
            (*(s32*)((s8*)&D_0034CAF0 + 0x148)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72E06FC0);
            (*(s32*)((s8*)&D_0034CAF0 + 0x168)) = temp_t4;
            (*(s32*)((s8*)&D_0034CAF0 + 0x158)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x467 << 0x15) | 0x8FC0));
            (*(s32*)((s8*)&D_0034CAF0 + 0x178)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x73006FE0);
            (*(s32*)((s8*)&D_0034CAF0 + 0x198)) = temp_t4;
            (*(s32*)((s8*)&D_0034CAF0 + 0x188)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x8D << 0x18) | 0x8FE0));
            (*(s32*)((s8*)&D_0034CAF0 + 0x1A8)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72E07000);
            (*(s32*)((s8*)&D_0034CAF0 + 0x1B8)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x467 << 0x15) | 0x9000));
        } else {
            temp_t4_2 = (0x241 << 0x17) | 0x8080;
            (*(s32*)((s8*)&D_0034CAF0 + 0x18)) = temp_t4_2;
            temp_t3_2 = (0x281 << 0x17) | 0x8080;
            (*(s32*)((s8*)&D_0034CAF0 + 0x28)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72D06FE0);
            (*(s32*)((s8*)&D_0034CAF0 + 0x48)) = temp_t4_2;
            (*(s32*)((s8*)&D_0034CAF0 + 0x38)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x8CD << 0x14) | 0x8FE0));
            (*(s32*)((s8*)&D_0034CAF0 + 0x58)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72E06FD0);
            (*(s32*)((s8*)&D_0034CAF0 + 0x78)) = temp_t4_2;
            var_a0 = &D_0034D150;
            (*(s32*)((s8*)&D_0034CAF0 + 0x68)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x467 << 0x15) | 0x8FD0));
            (*(s32*)((s8*)&D_0034CAF0 + 0x88)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72F06FE0);
            (*(s32*)((s8*)&D_0034CAF0 + 0xA8)) = temp_t4_2;
            (*(s32*)((s8*)&D_0034CAF0 + 0x98)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x8CF << 0x14) | 0x8FE0));
            (*(s32*)((s8*)&D_0034CAF0 + 0xB8)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | 0x72E06FF0);
            (*(s32*)((s8*)&D_0034CAF0 + 0x108)) = temp_t3_2;
            (*(s32*)((s8*)&D_0034CAF0 + 0xD8)) = (s64) ((0x301 << 0x17) | 0x8080);
            (*(s32*)((s8*)&D_0034CAF0 + 0x138)) = temp_t3_2;
            (*(s32*)((s8*)&D_0034CAF0 + 0xC8)) = (s64) (((s64) (*(s32*)((s8*)arg0 + 0x4)) << 0x20) | ((0x467 << 0x15) | 0x8FF0));
            (*(s32*)((s8*)&D_0034CAF0 + 0xE8)) = (s64) *(s64 *)0x36B518;
            (*(s32*)((s8*)&D_0034CAF0 + 0xF8)) = (s64) *(s64 *)0x36B520;
            (*(s32*)((s8*)&D_0034CAF0 + 0x118)) = (s64) *(s64 *)0x36B528;
            (*(s32*)((s8*)&D_0034CAF0 + 0x128)) = (s64) *(s64 *)0x36B530;
            (*(s32*)((s8*)&D_0034CAF0 + 0x148)) = (s64) *(s64 *)0x36B538;
            (*(s32*)((s8*)&D_0034CAF0 + 0x158)) = (s64) *(s64 *)0x36B540;
            (*(s32*)((s8*)&D_0034CAF0 + 0x198)) = temp_t3_2;
            (*(s32*)((s8*)&D_0034CAF0 + 0x178)) = (s64) *(s64 *)0x36B548;
            (*(s32*)((s8*)&D_0034CAF0 + 0x168)) = temp_t3_2;
            (*(s32*)((s8*)&D_0034CAF0 + 0x1B8)) = (s64) *(s64 *)0x36B560;
            (*(s32*)((s8*)&D_0034CAF0 + 0x188)) = (s64) *(s64 *)0x36B550;
            (*(s32*)((s8*)&D_0034CAF0 + 0x1A8)) = (s64) *(s64 *)0x36B558;
        }
        func_0014D8D0(var_a0);
        func_0014D8D0(&D_0034D180);
    }
}
