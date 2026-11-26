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

static AnyCell unksp18;
static AnyCell unksp30;
// m2c valid-syntax output for 0x00251a70, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00251A70 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

M2C_UNK func_00288018() asm("func_00288018");
M2C_UNK func_0028CF28(M2C_UNK, s32) asm("func_0028CF28");
s32 func_00139D78(void ** = 0) asm("func_00139D78");
M2C_UNK func_0023F070(void ** = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_0023F070");
s32 func_0023F0C0(void ** = 0) asm("func_0023F0C0");
M2C_UNK func_002519B0() asm("func_002519B0");
s32 func_00251E90(s32 = 0) asm("func_00251E90");
M2C_UNK func_00251EC8(s32 = 0) asm("func_00251EC8");
M2C_UNK func_00251FE0() asm("func_00251FE0");
s32 func_00252000() asm("func_00252000");
M2C_UNK func_00252020() asm("func_00252020");
s32 func_00252110(s32 = 0) asm("func_00252110");
M2C_UNK func_00252540() asm("func_00252540");
M2C_UNK func_00252660(s32 = 0) asm("func_00252660");
s32 func_00287BC0() asm("func_00287BC0");
s32 func_00287C50() asm("func_00287C50");
s32 func_00287CD0() asm("func_00287CD0");
s32 func_00287DB0() asm("func_00287DB0");
M2C_UNK func_00289038(s32 = 0, s32 = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_00289038");
M2C_UNK func_002890E0(s32 = 0, M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_002890E0");
s32 func_002891D0(s32 = 0) asm("func_002891D0");
s32 func_002891E8(s32 = 0) asm("func_002891E8");
s32 func_00289310(s32 = 0, s32 = 0, s32 = 0) asm("func_00289310");
M2C_UNK func_0028AA40(s32 = 0) asm("func_0028AA40");
s32 func_0028ACB8(s32 = 0) asm("func_0028ACB8");
s32 func_0028ACC8(s32 = 0) asm("func_0028ACC8");
M2C_UNK func_0028CC78(s32 = 0, M2C_UNK = 0, M2C_UNK = 0, void ** = 0) asm("func_0028CC78");
M2C_UNK func_0028CDB8(s32 = 0) asm("func_0028CDB8");
M2C_UNK func_0028CE38() asm("func_0028CE38");
M2C_UNK func_0028CE98(M2C_UNK = 0, s32 = 0) asm("func_0028CE98");
M2C_UNK func_0028CF28(s32 = 0, s32 = 0) asm("func_0028CF28");
M2C_UNK func_0028CF98(s32 = 0, s32 = 0) asm("func_0028CF98");
s32 func_0028D008(s32 = 0) asm("func_0028D008");
void func_00251A70(...) asm("_ZN2Tz4CANA4DrawEv");
void func_00251a70_impl(void) asm("_ZN2Tz4CANA4DrawEv");
void func_00251a70_impl(void) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s5;
    s32 var_s4;
    void **temp_a0;
    void **temp_a0_2;
    void **temp_a0_3;
    void **temp_a0_4;

    temp_s1 = func_00287BC0();
    temp_s2 = func_00287CD0();
    if (func_00287DB0() != 0) {
        if ((func_00139D78(*(void ***)0x35EE60) != 0) && (func_0023F0C0(*(void ***)0x35EE60) != 2)) {
            if ((func_00139D78(*(void ***)0x35EE60) != 0) && (func_0023F0C0(*(void ***)0x35EE60) != 2)) {
                func_0023F070(*(void ***)0x35EE60, 2, -1);
            }
            if ((func_0028ACC8(*(s32 *)0x35EE58) != 0) && (func_0028ACB8(*(s32 *)0x35EE58) == 0)) {
                func_0028AA40(*(s32 *)0x35EE58);
            }
            if ((func_0028ACC8(*(s32 *)0x35EE5C) != 0) && (func_0028ACB8(*(s32 *)0x35EE5C) == 0)) {
                func_0028AA40(*(s32 *)0x35EE5C);
            }
            temp_a0 = *(void ***)0x35EE64;
            if (temp_a0 != NULL) {
                temp_a0_2 = *(void ***)0x35EE64;
                if (func_00139D78(temp_a0) != 0) {
                    M2C_FIELD(*temp_a0_2, M2C_UNK (**)(void **), 0x14)(temp_a0_2);
                }
            }
            temp_a0_3 = *(void ***)0x35EE68;
            if (temp_a0_3 != NULL) {
                temp_a0_4 = *(void ***)0x35EE68;
                if (func_00139D78(temp_a0_3) != 0) {
                    M2C_FIELD(*temp_a0_4, M2C_UNK (**)(void **), 0x14)(temp_a0_4);
                }
            }
            func_00251FE0();
            func_002519B0();
            func_0028CE38();
            func_00288018();
            return;
        }
        return;
    }
    func_00252020();
    temp_s5 = func_00252110(func_002891E8(*(s32 *)0x35EE58));
    if (temp_s1 == 0) {
        var_s4 = *(s32 *)0x35EE58;
    } else {
        var_s4 = *(s32 *)0x35EE5C;
    }
    temp_s3 = temp_s1 != 0;
    if ((func_00139D78(*(s32 *)0x35EE60) != 0) && (func_0023F0C0(*(s32 *)0x35EE60) == 1)) {
        if (temp_s3 == 0) {
            if (func_0028D008(temp_s3) == 0) {
                func_0028CC78(temp_s3, 2, 2, *(s32 *)0x35EE60);
                func_0028CF98(temp_s3, func_00251E90(temp_s5));
            }
        } else if (func_0028D008(temp_s3) == 0) {
            func_0028CC78(temp_s3, 2, 2, *(s32 *)0x35EE60);
            func_0028CF28(temp_s3, func_002891D0(var_s4));
        }
    } else if ((temp_s2 == 2) && (func_0028D008(temp_s3) != 0)) {
        func_0028CDB8(temp_s3);
    }
    if (func_00287C50() != 0) {
        if (func_0028D008(0) != 0) {
            func_0028CE98(0, temp_s3);
        }
    }
    unksp18 = unksp30;
    if (func_00289310(var_s4, temp_s1, temp_s5) == 0) {

    } else {
        if (temp_s1 == 0) {
            if (func_0028D008(0) != 0) {
                func_0028CF98(0, func_00251E90(temp_s5));
                func_00251EC8(temp_s5);
                func_00252660(temp_s5);
            }
            func_00252540();
            if (func_00252000() != 0) {
                func_00251FE0();
                return;
            }
            return;
        }
        func_002890E0(var_s4, 1, 2, 0);
        func_00289038(var_s4, func_002891E8(var_s4), 1, 1);
        func_0028CF28(1, func_002891D0(var_s4));
    }
}
