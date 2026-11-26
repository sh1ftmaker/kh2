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
static AnyCell sp14;
static AnyCell sp18;
static AnyCell sp1C;
static AnyCell sp20;
static AnyCell sp30;
static AnyCell sp4;
static AnyCell sp8;
static AnyCell spC;
// m2c valid-syntax output for 0x001b65e0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001B65E0 {
    /* 0x00 */ f32 sp0;                             /* inferred */
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ f32 sp8;                             /* inferred */
    /* 0x0C */ f32 spC;                             /* inferred */
    /* 0x10 */ f32 sp10;                            /* inferred */
    /* 0x14 */ f32 sp14;                            /* inferred */
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0xC];                     /* maybe part of sp20[4]? */
    /* 0x30 */ s128 sp30;                           /* inferred */
    /* 0x40 */ char pad40[0x40];
};                                                  /* size = 0x80 */

M2C_UNK func_00102448(s32 = 0, M2C_UNK = 0) asm("func_00102448");
M2C_UNK func_00102470(s32 = 0, f32 = 0) asm("func_00102470");
void *func_001050D8(M2C_UNK = 0) asm("func_001050D8");
M2C_UNK func_00111E50() asm("func_00111E50");
M2C_UNK func_0016C028(void ** = 0) asm("func_0016C028");
s32 func_0016E920(s32 = 0) asm("func_0016E920");
M2C_UNK func_0016EF28(s32 = 0) asm("func_0016EF28");
M2C_UNK func_00170320(M2C_UNK = 0) asm("func_00170320");
M2C_UNK func_00170888(s32 = 0) asm("func_00170888");
M2C_UNK func_00170DD0(s32 = 0) asm("func_00170DD0");
M2C_UNK func_0017F488(void ** = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_0017F488");
s32 func_00180618(void ** = 0) asm("func_00180618");
M2C_UNK func_0018EF98(void ** = 0, void * = 0) asm("func_0018EF98");
M2C_UNK func_00190570(void ** = 0, void * = 0) asm("func_00190570");
M2C_UNK func_00197E08(void ** = 0, void * = 0) asm("func_00197E08");
M2C_UNK func_001995B8(void ** = 0, void * = 0) asm("func_001995B8");
s32 func_0019BA60(void ** = 0) asm("func_0019BA60");
M2C_UNK func_0019CA20(s32 = 0) asm("func_0019CA20");
M2C_UNK func_0019EC88(M2C_UNK * = 0) asm("func_0019EC88");
M2C_UNK func_0019ECB0(M2C_UNK * = 0, M2C_UNK = 0) asm("func_0019ECB0");
M2C_UNK func_0019ED78(M2C_UNK * = 0, f32 = 0) asm("func_0019ED78");
M2C_UNK func_001B1360(void ** = 0, void * = 0) asm("func_001B1360");
void *func_001B1928(M2C_UNK = 0) asm("func_001B1928");
M2C_UNK func_001B1BB8(void * = 0, M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0, f32 = 0) asm("func_001B1BB8");
M2C_UNK func_001B1C10(void * = 0, f32 = 0) asm("func_001B1C10");
M2C_UNK func_001B6AB8(void * = 0) asm("func_001B6AB8");
s32 func_001BA028(void ** = 0) asm("func_001BA028");
M2C_UNK func_001C8D80(M2C_UNK * = 0, M2C_UNK = 0) asm("func_001C8D80");
s32 func_001C8DB8(M2C_UNK * = 0, M2C_UNK = 0) asm("func_001C8DB8");
s32 func_001C9DF8(s32 = 0) asm("func_001C9DF8");
M2C_UNK func_001C9E50(s32 = 0) asm("func_001C9E50");
M2C_UNK func_001D0980(void * = 0, s32 = 0, s32 = 0, s32 = 0, f32 = 0) asm("func_001D0980");
M2C_UNK func_001E0230(void ** = 0, void * = 0) asm("func_001E0230");
M2C_UNK func_002EDCA0(void ** = 0, void * = 0) asm("func_002EDCA0");
extern M2C_UNK D_00350448 asm("D_00350448");
extern M2C_UNK D_00351EB8 asm("D_00351EB8");
extern f32 D_FLT_0036DAB4 asm("D_0036DAB4");
extern f32 D_FLT_0036DAB8 asm("D_0036DAB8");
extern f32 D_FLT_0036DABC asm("D_0036DABC");
extern f32 D_FLT_0036DAC0 asm("D_0036DAC0");
void func_001B65E0(void *arg0 = 0, s32 arg1 = 0, ...) asm("_ZN2YS10CHANGEFORM4execEP4TASK");
void func_001b65e0_impl(void *arg0, s32 arg1) asm("_ZN2YS10CHANGEFORM4execEP4TASK");
void func_001b65e0_impl(void *arg0, s32 arg1) {
    f32 sp0;                                        /* compiler-managed */
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    s128 sp30;
    s32 temp_s0;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t7_3;
    s32 var_t7;
    void **temp_a0;
    void **temp_a0_2;
    void **temp_a0_3;
    void **temp_t7_2;
    void **temp_t7_4;
    void *temp_s1;
    void *temp_t7_5;
    void *temp_v0;

    temp_t7 = M2C_FIELD(arg0, s32 *, 4);
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp8 = 0.0f;
    spC = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    sp1C = 0.0f;
    sp20 = 0.0f;
    if ((((temp_t7 ^ 0) == 0) ? 0 : (temp_t7 < 7)) & 0xFF) {
        if ((func_001C8DB8(&D_00351EB8, 0) ^ 1) & 0xFF) {
            func_001C8D80(&D_00351EB8, 0);
        }
        temp_v0 = func_001B1928(0);
        M2C_FIELD(arg0, void **, 0x10) = temp_v0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x10) | 2);
        func_001B1BB8(M2C_FIELD(arg0, void **, 0x10), 0x30, 0x30, 0x30, D_FLT_0036DAB4);
        func_00102470(arg1, D_FLT_0036DAB8);
        func_0019EC88(&D_00350448);
        M2C_FIELD(&D_00350448, s32 *, 0x10) = 2;
        M2C_FIELD(&D_00350448, s32 *, 0xC) = 2;
        func_0019ECB0(&D_00350448, 0);
        func_00170DD0(arg1);
        func_00170320(0x1388);
        func_0016EF28(M2C_FIELD(arg0, s32 *, 4));
        func_00170888(arg1);
loop_4:
        if (func_0019BA60(M2C_FIELD(arg0, void ***, 0)) != 0) {
            if (func_00180618(M2C_FIELD(arg0, void ***, 0) + 0x140) == 0) {
                if (func_001C9DF8(arg1) == 0) {

                } else {
                    func_00102448(arg1, 0);
                    goto loop_4;
                }
            }
        }
        func_00102448(arg1, 2);
        func_001B1C10(M2C_FIELD(arg0, void **, 0x10), D_FLT_0036DABC);
        M2C_FIELD(arg0, void **, 0x10) = NULL;
        func_0019ED78(&D_00350448, D_FLT_0036DAC0);
    }
    if (func_0019BA60(M2C_FIELD(arg0, void ***, 0)) != 0) {
        temp_a0 = M2C_FIELD(arg0, void ***, 0);
        temp_t7_2 = temp_a0 + 0xC0;
        if (sp != temp_t7_2) {
            sp0 = M2C_FIELD(temp_a0, s128 *, 0xC0);
        }
        sp10 = M2C_FIELD(temp_t7_2, f32 *, 0x10);
        sp14 = M2C_FIELD(temp_t7_2, f32 *, 0x14);
        sp18 = M2C_FIELD(temp_t7_2, f32 *, 0x18);
        sp1C = M2C_FIELD(temp_t7_2, f32 *, 0x1C);
        sp20 = M2C_FIELD(temp_t7_2, f32 *, 0x20);
        if (&sp30 != (M2C_FIELD(arg0, void ***, 0) + 0x20)) {
            sp30 = M2C_FIELD(M2C_FIELD(arg0, void ***, 0), s128 *, 0x20);
        }
        temp_t7_3 = M2C_FIELD(M2C_FIELD(arg0, void ***, 0), s32 *, 0xB40);
        if (temp_t7_3 != 0) {
            func_0019CA20(temp_t7_3);
            M2C_FIELD(M2C_FIELD(arg0, void ***, 0), s32 *, 0xB40) = 0;
        }
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void ***, 0), void **, 0), M2C_UNK (**)(void **), 0x20)(M2C_FIELD(arg0, void ***, 0));
        temp_s1 = func_001050D8(0xB80);
        temp_s0 = func_0016E920(M2C_FIELD(arg0, s32 *, 8));
        func_0016C028(M2C_FIELD(arg0, void ***, 0));
        temp_t7_4 = M2C_FIELD(arg0, void ***, 0);
        func_001D0980(temp_s1, temp_s0, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(temp_t7_4, s32 *, 0xB38), M2C_FIELD(temp_t7_4, f32 *, 0x55C));
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 8);
        M2C_FIELD(temp_s1, s32 *, 0xAC8) = (s32) M2C_FIELD(M2C_FIELD(arg0, void ***, 0), s32 *, 0xAC8);
        M2C_FIELD(M2C_FIELD(arg0, void ***, 0), s32 *, 0xAC8) = 0;
        M2C_FIELD(temp_s1, s32 *, 0xACC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void ***, 0), s32 *, 0xACC);
        M2C_FIELD(M2C_FIELD(arg0, void ***, 0), s32 *, 0xACC) = 0;
        temp_a0_2 = M2C_FIELD(arg0, void ***, 0);
        if (M2C_FIELD(temp_a0_2, s32 *, 0x7F8) & 4) {
            func_0017F488(temp_a0_2 + 0x140, 0, 0);
            var_t7 = 3;
            goto block_18;
        }
        temp_t6 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_t6 < 7) {
            var_t7 = 1;
            if (M2C_FIELD(arg0, s32 *, 0xC) & 1) {
                var_t7 = 2;
                if (temp_t6 == 0) {
                    temp_a0_3 = M2C_FIELD(temp_s1, void ***, 0xC);
                    M2C_FIELD(*temp_a0_3, M2C_UNK (**)(void **, void *, M2C_UNK), 0xC)(temp_a0_3, temp_s1, 0);
                    temp_t7_5 = temp_s1 + 0xC0;
                    if (M2C_FIELD(arg0, s32 *, 0xC) & 2) {
                        if (temp_t7_5 != sp) {
                            M2C_FIELD(temp_s1, s128 *, 0xC0) = sp0;
                        }
                        M2C_FIELD(temp_t7_5, f32 *, 0x10) = sp10;
                        M2C_FIELD(temp_t7_5, f32 *, 0x20) = sp20;
                        M2C_FIELD(temp_t7_5, f32 *, 0x14) = sp14;
                        M2C_FIELD(temp_t7_5, f32 *, 0x18) = sp18;
                        M2C_FIELD(temp_t7_5, f32 *, 0x1C) = sp1C;
                    }
                    if ((temp_s1 + 0x20) != &sp30) {
                        M2C_FIELD(temp_s1, s128 *, 0x20) = (s128) sp30;
                    }
                    M2C_FIELD(temp_s1, s32 *, 0x24) = 0;
                    var_t7 = 2;
                }
            }
block_18:
            M2C_FIELD(temp_s1, s32 *, 0xB6C) = var_t7;
        }
        func_001B6AB8(arg0);
        func_00190570(M2C_FIELD(arg0, void ***, 0), temp_s1);
        func_001995B8(M2C_FIELD(arg0, void ***, 0), temp_s1);
        func_001E0230(M2C_FIELD(arg0, void ***, 0), temp_s1);
        func_0018EF98(M2C_FIELD(arg0, void ***, 0), temp_s1);
        func_00197E08(M2C_FIELD(arg0, void ***, 0), temp_s1);
        func_001B1360(M2C_FIELD(arg0, void ***, 0), temp_s1);
        func_002EDCA0(M2C_FIELD(arg0, void ***, 0), temp_s1);
        func_00111E50();
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 4);
loop_20:
        if (func_001BA028(M2C_FIELD(arg0, void ***, 0)) != 0) {
            func_00102448(arg1, 0);
            goto loop_20;
        }
        func_00102448(arg1, 2);
        if (M2C_FIELD(arg0, u8 *, 0x1C) != 0) {
            func_00170888(arg1);
            func_001C9E50(arg1);
        }
    }
}
