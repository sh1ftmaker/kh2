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
static AnyCell sp4;
// m2c raw output for 0x00299e70, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00299E70 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ char pad8[0x38];
};                                                  /* size = 0x40 */

s32 func_00242848(s32 = 0) asm("func_00242848");
s32 func_00274CF0(u32 = 0) asm("func_00274CF0");
s32 func_00275B60() asm("func_00275B60");
s32 func_00275DD0() asm("func_00275DD0");
s32 func_00276150(u32 = 0, void * = 0, s32 * = 0) asm("func_00276150");
s32 func_00276220(s32 = 0, s32 = 0) asm("func_00276220");
s32 func_00276358() asm("func_00276358");
s32 func_00276368() asm("func_00276368");
s32 func_00276398() asm("func_00276398");
s32 func_002765E8(u32 = 0, s32 = 0, s32 = 0) asm("func_002765E8");
s32 func_00276888() asm("func_00276888");
s32 func_00276DC0() asm("func_00276DC0");
u32 func_00287BC0() asm("func_00287BC0");
s32 func_00287C00(s32 = 0) asm("func_00287C00");
s32 func_00287C30() asm("func_00287C30");
s32 func_00287C90(s32 = 0) asm("func_00287C90");
s32 func_00287CC0(s32 = 0) asm("func_00287CC0");
s32 func_00287CD0() asm("func_00287CD0");
s32 func_00287DA0() asm("func_00287DA0");
s32 func_00287DF0(s32 = 0, s32 = 0, s32 = 0, s32 * = 0) asm("func_00287DF0");
s32 func_00287F90(s32 = 0) asm("func_00287F90");
s32 func_00288018() asm("func_00288018");
s32 func_00288040() asm("func_00288040");
s32 func_00289310(s32 = 0) asm("func_00289310");
s32 func_00289380(s32 = 0) asm("func_00289380");
s32 func_0028ACC8(s32 = 0) asm("func_0028ACC8");
s32 func_0028AF18(s32 = 0, s32 = 0) asm("func_0028AF18");
s32 func_0028FB28(s32 = 0, u16 = 0) asm("func_0028FB28");
s32 func_002925C0() asm("func_002925C0");
s32 func_00292630() asm("func_00292630");
s32 func_002945E8() asm("func_002945E8");
s32 func_002958B0() asm("func_002958B0");
s32 func_002995A8() asm("func_002995A8");
s32 func_0029A368() asm("func_0029A368");
u32 func_0029A5F0(s32 = 0) asm("func_0029A5F0");
s32 func_0029AE40() asm("func_0029AE40");
s32 func_0029EE68() asm("func_0029EE68");
s32 func_002A0908(s32 = 0) asm("func_002A0908");
s32 func_002A21B0() asm("func_002A21B0");
s32 func_002A4E38() asm("func_002A4E38");
s32 func_002A6A50() asm("func_002A6A50");
s32 func_002A77A0() asm("func_002A77A0");
s32 func_002A8AC8() asm("func_002A8AC8");
s32 func_002AED60() asm("func_002AED60");
extern s32 D_0029A780 asm("D_0029A780");
extern s32 D_00374910 asm("D_00374910");
void func_00299E70(...) asm("_ZN2Tz12JmCollection7ControlEv");
void func_00299e70_impl(void) asm("_ZN2Tz12JmCollection7ControlEv");
void func_00299e70_impl(void) {
    s32 sp4;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u32 temp_s3;
    u32 temp_s3_2;
    u32 temp_v0;

    temp_s1 = func_00289380(*(s32 *)0x35F200);
    temp_s0 = func_00287CD0();
    temp_s3 = func_00287BC0();
    if (temp_s0 == 2) {
        if ((func_00276368() != 0) || (func_0028ACC8(*(s32 *)0x35F200) != 0) || (func_00276888() != 0)) {
            if (temp_s1 != -1) {
                func_00287F90(0);
                func_002995A8();
            }
        } else if (func_00292630() == 0) {
            func_002995A8();
            func_00287C30();
            temp_s3_2 = func_00287BC0();
            func_0028AF18(*(s32 *)0x35F200, 0x73);
            func_00274CF0(temp_s3_2);
            func_002925C0();
            func_00276220(func_00276358(), 0);
            switch (temp_s3_2) {                    /* switch 1 */
            case 0:                                 /* switch 1 */
                func_002945E8();
                break;
            case 2:                                 /* switch 1 */
                func_002958B0();
                break;
            case 14:                                /* switch 1 */
            case 18:                                /* switch 1 */
            case 21:                                /* switch 1 */
                func_0029AE40();
                break;
            case 24:                                /* switch 1 */
                func_0029EE68();
                break;
            case 27:                                /* switch 1 */
                func_002AED60();
                break;
            case 26:                                /* switch 1 */
            case 34:                                /* switch 1 */
                func_002A21B0();
                break;
            case 35:                                /* switch 1 */
                func_002A8AC8();
                break;
            case 36:                                /* switch 1 */
                func_002A77A0();
                break;
            case 37:                                /* switch 1 */
                func_002A4E38();
                break;
            case 39:                                /* switch 1 */
                func_002A6A50();
                break;
            case 40:                                /* switch 1 */
                func_002A0908(-1);
                break;
            }
        }
    } else {
        func_0029A368();
        if (((temp_s1 != -1) || (func_00289310(*(s32 *)0x35F200) != 0)) && (func_00276398() == 0)) {
            func_00276220(0, 2);
            func_00275B60();
        }
        if ((temp_s0 == 0) && (func_00276398() != 0)) {
            func_00287C90(1);
        }
        if (func_00242848(func_00287DF0(temp_s1, func_00289310(*(s32 *)0x35F200), 1, &D_0029A780)) == 0) {
            switch (temp_s1) {                      /* switch 2 */
            case -4:                                /* switch 2 */
                func_00287DA0();
                break;
            case -9:                                /* switch 2 */
            case -8:                                /* switch 2 */
                func_00276150(temp_s3, sp, &sp4);
                var_s0 = sp0;
                if (temp_s1 == -8) {
                    var_s0 = sp4;
                    var_s1 = 0;
                } else {
                    var_s1 = 1;
                }
                func_00276DC0();
                func_00276220(var_s1, 1);
                var_a0 = var_s0;
block_39:
                func_00287C00(var_a0);
                func_00287CC0(2);
                break;
            default:                                /* switch 2 */
                var_s2 = -1;
                temp_v0 = func_0029A5F0(temp_s1);
                switch (temp_v0) {                  /* switch 3 */
                case 0:                             /* switch 3 */
                    var_s2 = 0x18;
                    break;
                case 1:                             /* switch 3 */
                    var_s2 = 0xE;
                    break;
                case 2:                             /* switch 3 */
                    var_s2 = 0x12;
                    break;
                case 3:                             /* switch 3 */
                    var_s2 = 0x15;
                    break;
                case 4:                             /* switch 3 */
                    var_s2 = 0x1A;
                    break;
                case 5:                             /* switch 3 */
                    var_s2 = 0x1B;
                    break;
                case 6:                             /* switch 3 */
                    var_s2 = 0x22;
                    break;
                case 7:                             /* switch 3 */
                    var_s2 = 0x23;
                    break;
                case 8:                             /* switch 3 */
                    var_s2 = 0x24;
                    break;
                case 9:                             /* switch 3 */
                    var_s2 = 0x25;
                    break;
                case 10:                            /* switch 3 */
                    var_s2 = 0x27;
                    break;
                case 11:                            /* switch 3 */
                    var_s2 = 0x28;
                    break;
                }
                func_00276220(0, 1);
                func_0028FB28(0, *((func_0029A5F0(temp_s1) * 2) + &D_00374910));
                func_00287C00(var_s2);
                func_00276DC0();
                func_00275DD0();
                func_00287CC0(2);
                func_002765E8(temp_s3, temp_s1, 0);
                break;
            case -2:                                /* switch 2 */
                func_00276220(1, 1);
                func_00276DC0();
                var_a0 = 0;
                goto block_39;
            }
        }
        if (func_00288040() != 0) {
            func_00288018();
        }
    }
}
