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

// m2c raw+unkfix output for 0x002b05f8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002B05F8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

s32 func_00288018() asm("func_00288018");
s32 func_002AECF0(s32) asm("func_002AECF0");
s32 func_002AED60() asm("func_002AED60");
s32 func_002AFAF0() asm("func_002AFAF0");
s32 func_00242848(s32 = 0) asm("func_00242848");
s32 func_00275B60() asm("func_00275B60");
s32 func_00276220(s32 = 0, s32 = 0) asm("func_00276220");
s32 func_00276358() asm("func_00276358");
s32 func_00276368() asm("func_00276368");
s32 func_00276398() asm("func_00276398");
s32 func_002765E8(s32 = 0, s32 = 0, s32 = 0) asm("func_002765E8");
s32 func_00276608(s32 = 0) asm("func_00276608");
s32 func_00276690(s32 = 0) asm("func_00276690");
s32 func_00276888() asm("func_00276888");
s32 func_00276DC0() asm("func_00276DC0");
s32 func_00287BC0() asm("func_00287BC0");
s32 func_00287C00(s32 = 0) asm("func_00287C00");
s32 func_00287C10() asm("func_00287C10");
s32 func_00287C30() asm("func_00287C30");
s32 func_00287C90(s32 = 0) asm("func_00287C90");
s32 func_00287CC0(s32 = 0) asm("func_00287CC0");
s32 func_00287CD0() asm("func_00287CD0");
s32 func_00287DA0() asm("func_00287DA0");
s32 func_00287DF0(s32 = 0, s32 = 0, s32 = 0, s32 * = 0) asm("func_00287DF0");
s32 func_00287F90(s32 = 0) asm("func_00287F90");
s32 func_00288040() asm("func_00288040");
s32 func_002891E8(s32 = 0) asm("func_002891E8");
s32 func_00289310(s32 = 0) asm("func_00289310");
s32 func_00289380(s32 = 0) asm("func_00289380");
s32 func_0028ACC8(s32 = 0) asm("func_0028ACC8");
s32 func_0028AF18(s32 = 0, s32 = 0) asm("func_0028AF18");
s32 func_0028B038(s32 = 0) asm("func_0028B038");
s32 func_0028BE78(s32 = 0, s32 = 0) asm("func_0028BE78");
void *func_002A9D68() asm("func_002A9D68");
s32 func_002AECE8() asm("func_002AECE8");
s32 func_002AECF0(s32 = 0) asm("func_002AECF0");
s32 func_002B2338(s32 = 0) asm("func_002B2338");
s32 func_002B2428(s32 = 0) asm("func_002B2428");
extern s32 D_002B3B78 asm("D_002B3B78");
void func_002B05F8(...) asm("_ZN2Tz8JmPuzzle12CtrlTutorialEv");
void func_002b05f8_impl(void) asm("_ZN2Tz8JmPuzzle12CtrlTutorialEv");
void func_002b05f8_impl(void) {
    s32 var_s0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 var_a0;
    u16 temp_t6;
    u16 temp_t6_2;
    void *temp_s3;

    temp_s0 = func_00289380(*(s32 *)0x35F200);
    temp_s1 = func_00287CD0();
    temp_s4 = func_00287BC0();
    temp_s3 = func_002A9D68();
    if (temp_s1 == 2) {
        temp_s1_2 = func_00287C10();
        if ((func_00276368() != 0) || (func_0028ACC8(*(s32 *)0x35F200) != 0) || (func_00276888() != 0)) {
            if (temp_s0 != -1) {
                func_00287F90(0);
                func_002AECF0(temp_s1_2 != 0x1D);
            }
        } else {
            func_002AECF0(temp_s1_2 != 0x1D);
            func_00287C30();
            temp_s4_2 = func_00287BC0();
            func_0028AF18(*(s32 *)0x35F200, 0x73);
            func_00276690(0);
            func_00276220(func_00276358(), 0);
            switch (temp_s4_2) {                    /* switch 1; irregular */
            case 29:                                /* switch 1 */
                func_002AFAF0();
                return;
            case 27:                                /* switch 1 */
                func_002AED60();
                return;
            }
        }
    } else {
        if (((temp_s0 != -1) || (func_00289310(*(s32 *)0x35F200) != 0)) && (func_00276398() == 0)) {
            func_00276220(0, 2);
            func_00275B60();
        }
        if ((temp_s1 == 0) && (func_00276398() != 0)) {
            func_00287C90(1);
        }
        if (func_00242848(func_00287DF0(temp_s0, func_00289310(*(s32 *)0x35F200), 1, &D_002B3B78)) == 0) {
            if (func_00289310(*(s32 *)0x35F200) != 0) {
                func_0028BE78(*(s32 *)0x35F214, func_0028B038(*(s32 *)0x35F200));
            }
            switch (temp_s0) {                      /* switch 2; irregular */
            case -1:                                /* switch 2 */
                break;
            case -4:                                /* switch 2 */
                temp_t6 = (*(s32*)((s8*)temp_s3 + 0x1E6));
                if (!(temp_t6 & 0xFFFF & 1)) {
                    (*(s32*)((s8*)temp_s3 + 0x1E6)) = (u16) (temp_t6 | 1);
                }
                temp_s1_3 = func_00287BC0();
                temp_s0_2 = func_002891E8(*(s32 *)0x35F200);
                func_002765E8(temp_s1_3, temp_s0_2, func_0028B038(*(s32 *)0x35F200));
                func_00287DA0();
                break;
            default:                                /* switch 2 */
            case -2:                                /* switch 2 */
                func_002AECE8();
                func_00276DC0();
                temp_t6_2 = (*(s32*)((s8*)temp_s3 + 0x1E6));
                var_a0 = 1;
                if (!(temp_t6_2 & 0xFFFF & 1)) {
                    (*(s32*)((s8*)temp_s3 + 0x1E6)) = (u16) (temp_t6_2 | 1);
                    var_a0 = temp_s4 != 0x1E;
                }
                func_00276220(var_a0, 1);
                var_s0 = 0x1B;
                if (temp_s4 == 0x1E) {
                    var_s0 = 0x1D;
                    func_002B2428(func_002B2338(func_00276608(0x1C)));
                }
                func_00287C00(var_s0);
                func_00287CC0(2);
                break;
            }
        }
        if (func_00288040() != 0) {
            func_00288018();
        }
    }
}
