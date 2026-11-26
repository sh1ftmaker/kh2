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

// m2c raw+unkfix output for 0x00156e48, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00156E48 {
    /* 0x00 */ char pad0[0x50];
};                                                  /* size = 0x50 */

s32 func_001575C0(void *) asm("func_001575C0");
s32 func_001386E0(void * = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_001386E0");
s32 func_00138C10(void * = 0, s32 = 0) asm("func_00138C10");
s32 func_00139570(void * = 0) asm("func_00139570");
s32 func_001396B0(void * = 0) asm("func_001396B0");
s32 func_001396C0(void * = 0) asm("func_001396C0");
s32 func_00139C18(void * = 0) asm("func_00139C18");
s32 func_0013A7E8(s32 = 0) asm("func_0013A7E8");
s32 func_0013D7E0() asm("func_0013D7E0");
s32 func_0013DDA0(s32 = 0) asm("func_0013DDA0");
s32 func_001542C8(void * = 0, s32 = 0, s32 = 0) asm("func_001542C8");
s32 func_00155EE8(void * = 0) asm("func_00155EE8");
s32 func_00155F40(void * = 0) asm("func_00155F40");
s32 func_00155FC0(void * = 0) asm("func_00155FC0");
s32 func_00156030(void * = 0) asm("func_00156030");
s32 func_00156058(void * = 0) asm("func_00156058");
s32 func_00156080(void * = 0) asm("func_00156080");
s32 func_00156408(void * = 0) asm("func_00156408");
s32 func_00156D20(void * = 0) asm("func_00156D20");
s32 func_001581F8(void * = 0) asm("func_001581F8");
s32 func_00158290(void * = 0) asm("func_00158290");
s32 func_0031A260(void * = 0, s32 = 0) asm("func_0031A260");
void func_00156E48(void *arg0 = 0, ...) asm("_ZN2dk12GAUGE_PLAYER6reloadEv");
void func_00156e48_impl(void *arg0) asm("_ZN2dk12GAUGE_PLAYER6reloadEv");
void func_00156e48_impl(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    void *temp_s0_3;
    void *temp_s6;
    void *temp_s7;

    temp_s5 = func_0013DDA0(0);
    temp_s4 = func_00158290(arg0);
    temp_s2 = func_0013A7E8(1);
    temp_s3 = func_0013D7E0();
    temp_s6 = arg0 + 0x2D80;
    if (func_00156030(arg0) == 0) {
        temp_s0 = (*(s32*)((s8*)temp_s6 + 0x184));
        if (temp_s0 != func_00155F40(arg0)) {
            temp_s0_2 = (*(s32*)((s8*)temp_s6 + 0x184));
            if (temp_s0_2 != func_00155EE8(arg0)) {
                if ((*(s32*)((s8*)arg0 + 0x3CFB)) == 1) {
                    temp_s7 = arg0 + 0x1A30;
                    temp_v0 = func_00139C18(arg0 + 0xD24);
                    temp_s0_3 = arg0 + (temp_v0 * 0x198) + 0xD24;
                    func_001386E0(temp_s0_3, 0x1B58, temp_s2, temp_s3);
                    (*(s32*)((s8*)temp_s0_3 + 0x18C)) = temp_s7;
                    func_001396B0(temp_s0_3);
                    if ((*(s32*)((s8*)temp_s0_3 + 0x18C)) != NULL) {
                        (*(s32*)((s8*)temp_s0_3 + 0x190)) = 0;
                        func_001396B0(temp_s0_3);
                        if ((*(s32*)((s8*)temp_s0_3 + 0x190)) != 0) {
                            func_0031A260(temp_s0_3, 0);
                        }
                    }
                    if (func_001396C0(temp_s7) != 0) {
                        func_00139570(arg0 + (temp_v0 * 0x198) + 0xD24);
                    }
                }
                if ((func_00156058(arg0) != 0) || (func_00156080(arg0) != 0)) {
                    func_00138C10(temp_s6, func_00155F40(arg0));
                    func_00138C10(arg0 + 0x2F1C, func_00155FC0(arg0));
                    (*(s32*)((s8*)arg0 + 0x3CF7)) = 1;
                } else {
                    func_00156D20(arg0);
                }
            }
        }
    }
    func_00156408(arg0);
    (*(s32*)((s8*)arg0 + 0x34)) = temp_s5;
    func_001581F8(arg0);
    func_001542C8(arg0 + 0x40, temp_s5, (*(s32*)((s8*)arg0 + 0x18)));
    if ((*(s32*)((s8*)arg0 + 0x34)) != 0) {
        func_001575C0(arg0);
    }
}
