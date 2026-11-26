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

static AnyCell sp20;
// m2c raw+unkfix output for 0x0026d208, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0026D208 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                              /* inferred */
    /* 0x20 */ char pad20[0x60];
};                                                  /* size = 0x80 */

s32 func_00192B30(s32 = 0) asm("func_00192B30");
s32 func_00192CC0(s32 * = 0, s32 * = 0) asm("func_00192CC0");
s32 func_001A8C10(s32 = 0, s32 = 0) asm("func_001A8C10");
s32 func_001A8C78(s32 = 0, s32 = 0) asm("func_001A8C78");
s32 func_001B77A8(s32 = 0) asm("func_001B77A8");
s32 func_002595B8(s32 = 0, s32 = 0, s32 = 0) asm("func_002595B8");
s32 func_002595E0() asm("func_002595E0");
s32 func_002595E8(s32 = 0, s32 = 0) asm("func_002595E8");
s32 func_00293BC0() asm("func_00293BC0");
s32 func_002FDE18(s32 = 0, s32 = 0, s32 = 0) asm("func_002FDE18");
extern s32 D_00373828 asm("D_00373828");
void func_0026D208(...) asm("_ZN2Tz7CmParty19MakeInOutMemberNameEv");
void func_0026d208_impl(void) asm("_ZN2Tz7CmParty19MakeInOutMemberNameEv");
void func_0026d208_impl(void) {
    s32 sp20;
    s32 *var_s2_2;
    s32 *var_s2_4;
    s32 *var_s3_2;
    s32 *var_s7;
    s32 *var_t7;
    s32 temp_a1;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_3;
    s32 var_s3;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_t6;

    temp_s6 = func_00293BC0();
    var_t7 = sp;
    var_t6 = 3;
    do {
        (*(s32*)((s8*)var_t7 + 0x10)) = 0;
        var_t6 -= 1;
        (*(s32*)((s8*)var_t7 + 0x0)) = 0;
        var_t7 += 4;
    } while (var_t6 >= 0);
    var_s5 = 0;
    var_s2 = 0;
    var_s7 = sp;
    do {
        temp_v0 = func_001A8C10(temp_s6, var_s2);
        var_s4 = 0;
        if (temp_v0 != 0) {
            var_s0 = 0;
loop_5:
            temp_a1 = var_s0;
            var_s0 += 1;
            if (func_001A8C10(*(s32 *)0x35F0F8, temp_a1) == temp_v0) {
                var_s4 = 1;
            } else if (var_s0 >= 4) {

            } else {
                goto loop_5;
            }
            if (var_s4 == 0) {
                *var_s7 = temp_v0;
                if (func_001A8C78(temp_s6, var_s2) != 0) {
                    *var_s7 |= 0x80000000;
                }
                var_s7 += 4;
                var_s5 += 1;
            }
        }
        var_s2 += 1;
    } while (var_s2 < 4);
    func_002FDE18(*(s32 *)0x35F0F4 + 0x176C, 0, 0x80);
    temp_s7 = func_00192CC0(&sp20, &D_00373828);
    var_s1 = *(s32 *)0x35F0F4 + 0x176C;
    if (var_s5 > 0) {
        var_s3 = 0;
        var_s2_2 = sp;
        do {
            if (var_s3 != 0) {
                func_002595E8(var_s1, temp_s7);
                var_s1 += func_00192B30(temp_s7);
            }
            if (*var_s2_2 & 0x80000000) {
                func_002595B8(0xA, var_s1, 1);
                var_s1 += func_002595E0();
            }
            var_s3 += 1;
            temp_v0_2 = func_001B77A8(*var_s2_2 & 0x7FFFFFFF);
            var_s2_2 += 4;
            func_002595E8(var_s1, temp_v0_2);
            var_s1 += func_00192B30(temp_v0_2);
        } while (var_s3 < var_s5);
    }
    var_s5_2 = 0;
    var_s2_3 = 0;
    var_s3_2 = sp;
    do {
        var_s4_2 = 0;
        temp_v0_3 = func_001A8C10(*(s32 *)0x35F0F8, var_s2_3);
        if (temp_v0_3 != 0) {
            var_s0_2 = 0;
            var_a1 = 0;
loop_22:
            var_s0_2 += 1;
            if (func_001A8C10(temp_s6, var_a1) == temp_v0_3) {
                var_s4_2 = 1;
            } else {
                var_a1 = var_s0_2;
                if (var_s0_2 >= 4) {

                } else {
                    goto loop_22;
                }
            }
            if (var_s4_2 == 0) {
                (*(s32*)((s8*)var_s3_2 + 0x10)) = temp_v0_3;
                if (func_001A8C78(*(s32 *)0x35F0F8, var_s2_3) != 0) {
                    (*(s32*)((s8*)var_s3_2 + 0x10)) = (s32) ((*(s32*)((s8*)var_s3_2 + 0x10)) | 0x80000000);
                }
                var_s3_2 += 4;
                var_s5_2 += 1;
            }
        }
        var_s2_3 += 1;
    } while (var_s2_3 < 4);
    func_002FDE18(*(s32 *)0x35F0F4 + 0x17EC, 0, 0x80);
    var_s1_2 = *(s32 *)0x35F0F4 + 0x17EC;
    if (var_s5_2 > 0) {
        var_s3_3 = 0;
        var_s2_4 = sp;
        do {
            if (var_s3_3 != 0) {
                func_002595E8(var_s1_2, temp_s7);
                var_s1_2 += func_00192B30(temp_s7);
            }
            if ((*(s32*)((s8*)var_s2_4 + 0x10)) & 0x80000000) {
                func_002595B8(0xA, var_s1_2, 1);
                var_s1_2 += func_002595E0();
            }
            var_s3_3 += 1;
            temp_v0_4 = func_001B77A8((*(s32*)((s8*)var_s2_4 + 0x10)) & 0x7FFFFFFF);
            var_s2_4 += 4;
            func_002595E8(var_s1_2, temp_v0_4);
            var_s1_2 += func_00192B30(temp_v0_4);
        } while (var_s3_3 < var_s5_2);
    }
}
