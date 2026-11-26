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

// m2c raw output for 0x0025dbd8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0025DBD8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

s32 func_00288018() asm("func_00288018");
s32 func_0028ABE0(s32) asm("func_0028ABE0");
s32 func_002B4C10() asm("func_002B4C10");
s32 func_00240B90(s32 = 0) asm("func_00240B90");
s32 func_00240BE0() asm("func_00240BE0");
s32 func_00242848(s32 = 0) asm("func_00242848");
s32 func_0025F588() asm("func_0025F588");
s32 func_00263C60() asm("func_00263C60");
s32 func_00287BC0() asm("func_00287BC0");
s32 func_00287C00(s32 = 0) asm("func_00287C00");
s32 func_00287C30() asm("func_00287C30");
s32 func_00287C90(s32 = 0) asm("func_00287C90");
s32 func_00287CD0() asm("func_00287CD0");
s32 func_00287DA0() asm("func_00287DA0");
s32 func_00287DF0(s32 = 0, s32 = 0, s32 = 0, s32 * = 0) asm("func_00287DF0");
s32 func_00287F90(s32 = 0) asm("func_00287F90");
s32 func_00288040() asm("func_00288040");
s32 func_00289310(s32 = 0) asm("func_00289310");
s32 func_00289380(s32 = 0) asm("func_00289380");
s32 func_0028AA40(s32 = 0) asm("func_0028AA40");
s32 func_0028AB20(s32 = 0) asm("func_0028AB20");
s32 func_0028ACC8(s32 = 0) asm("func_0028ACC8");
s32 func_0028AE28(s32 = 0, s32 = 0) asm("func_0028AE28");
s32 func_0028F6F0(s32 = 0) asm("func_0028F6F0");
s32 func_0028F7E8(s32 = 0) asm("func_0028F7E8");
s32 func_002B5AF0() asm("func_002B5AF0");
extern s32 D_0025F610 asm("D_0025F610");
void func_0025DBD8(...) asm("_ZN2Tz6CmLoad8CtrlSlotEv");
void func_0025dbd8_impl(void) asm("_ZN2Tz6CmLoad8CtrlSlotEv");
void func_0025dbd8_impl(void) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = func_00289380(*(s32 *)0x35F64C);
    temp_v0 = func_00287CD0();
    if (temp_v0 == 2) {
        if (func_0028ACC8(*(s32 *)0x35F64C) != 0) {
            if ((temp_s2 != -1) || (func_00289310(*(s32 *)0x35F64C) != 0)) {
                func_00287F90(0);
                func_0028ABE0(*(s32 *)0x35F64C);
            }
        } else {
            func_00287C30();
            if (func_00287BC0() == temp_v0) {
                func_002B5AF0();
                func_0028F7E8(1);
                func_00240BE0();
                func_002B4C10();
            }
        }
    } else {
        if (temp_s2 == -1) {
            if (func_00289310(*(s32 *)0x35F64C) != 0) {
                goto block_13;
            }
        } else {
block_13:
            if (func_0028AE28(*(s32 *)0x35F64C, 0) == 0) {
                func_0028AB20(*(s32 *)0x35F64C);
            }
        }
        if ((temp_v0 == 0) && (func_0028AE28(*(s32 *)0x35F64C, 0) != 0)) {
            func_00287C90(1);
            func_0025F588();
        }
        if (func_00242848(func_00287DF0(temp_s2, func_00289310(*(s32 *)0x35F64C), 1, &D_0025F610)) == 0) {
            switch (temp_s2) {
            case -3:
            case -1:
                break;
            case -4:
            case -2:
                func_0028F6F0(0);
                func_00263C60();
                func_00287DA0();
                break;
            case 0:
            case 1:
                func_00240B90(temp_s2);
                func_00287C00(2);
                func_0028AA40(*(s32 *)0x35F64C);
                func_00287C90(1);
                func_00263C60();
                break;
            }
        }
        if (func_00288040() != 0) {
            func_00288018();
        }
    }
}
