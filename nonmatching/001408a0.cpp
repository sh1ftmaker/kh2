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
static AnyCell sp20;
static AnyCell sp30;
static AnyCell sp9C;
static AnyCell unksp94;
// m2c valid-syntax output for 0x001408a0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001408A0 {
    /* 0x00 */ s128 sp0;                            /* inferred */
    /* 0x10 */ s128 sp10;                           /* inferred */
    /* 0x20 */ s128 sp20;                           /* inferred */
    /* 0x30 */ s128 sp30;                           /* inferred */
    /* 0x40 */ char pad40[0x5C];                    /* maybe part of sp30[6]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
};                                                  /* size = 0xA0 */

s32 func_00106A18(M2C_UNK = 0) asm("func_00106A18");
s32 func_00106A60(M2C_UNK = 0) asm("func_00106A60");
M2C_UNK func_00106DE8(s32 = 0, M2C_UNK = 0, f32 = 0) asm("func_00106DE8");
M2C_UNK func_00107300(s32 = 0, s128 * = 0, void * = 0, f32 = 0) asm("func_00107300");
M2C_UNK func_0013F6E8(void * = 0, s128 * = 0, s128 * = 0, s128 * = 0, f32 = 0, f32 = 0) asm("func_0013F6E8");
s32 func_0013F9E0(void * = 0, void * = 0, s128 * = 0, M2C_UNK = 0) asm("func_0013F9E0");
M2C_UNK func_00140480(void * = 0) asm("func_00140480");
M2C_UNK func_0015A4E0(void * = 0) asm("func_0015A4E0");
extern f32 D_FLT_0036AE00 asm("D_0036AE00");
extern f32 D_FLT_0036AE04 asm("D_0036AE04");
extern f32 D_FLT_0036AE08 asm("D_0036AE08");
extern f32 D_FLT_0036AE0C asm("D_0036AE0C");
extern f32 D_FLT_0036AE10 asm("D_0036AE10");
extern f32 D_FLT_0036AE14 asm("D_0036AE14");
extern f32 D_FLT_0036AE18 asm("D_0036AE18");
void func_001408A0(void *arg0 = 0, s32 arg1 = 0, ...) asm("_ZN2dk9ObjCamera9setCameraEb");
void func_001408a0_impl(void *arg0, s32 arg1) asm("_ZN2dk9ObjCamera9setCameraEb");
void func_001408a0_impl(void *arg0, s32 arg1) {
    s128 sp10;
    s128 sp20;
    s128 sp30;
    f32 sp9C;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 var_fs1f;
    s128 *var_s0;
    s128 *var_s5;
    s32 temp_fp;
    u32 temp_t6;
    void *temp_t7;

    temp_fp = arg1 & 0xFF;
    sp9C = M2C_ERROR(/* Read from unset register $fs1f */);
    unksp94 = M2C_ERROR(/* Read from unset register $fs0f */);
    var_fs1f = D_FLT_0036AE00;
    if (temp_fp == 0) {
        temp_t7 = M2C_FIELD(arg0, void **, 0x44);
        if (temp_t7 != NULL) {
            var_fs1f += (M2C_FIELD(temp_t7, f32 *, 0x114) - D_FLT_0036AE04) * D_FLT_0036AE08;
        }
    }
    sp10 = M2C_FIELD(arg0, s128 *, 0);
    sp20 = M2C_FIELD(arg0, s128 *, 0x80);
    sp30 = M2C_FIELD(arg0, s128 *, 0x90);
    temp_fs0f = D_FLT_0036AE0C;
    temp_fs0 = D_FLT_0036AE14;
    temp_fs1 = D_FLT_0036AE18;
    func_0013F6E8(sp, &sp10, &sp20, &sp30, var_fs1f + D_FLT_0036AE10, temp_fs0);
    var_s5 = arg0 + 0x10;
    if (arg0 != sp) {
        M2C_FIELD(arg0, s128 *, 0) = sp0;
        var_s5 = arg0 + 0x10;
    }
    sp10 = *var_s5;
    sp20 = M2C_FIELD(arg0, s128 *, 0x60);
    sp30 = M2C_FIELD(arg0, s128 *, 0x70);
    func_0013F6E8(sp, &sp10, &sp20, &sp30, var_fs1f, temp_fs0);
    var_s0 = arg0 + 0x20;
    if (var_s5 != sp) {
        *var_s5 = sp0;
        var_s0 = arg0 + 0x20;
    }
    sp10 = *var_s0;
    sp20 = M2C_FIELD(arg0, s128 *, 0xA0);
    sp30 = M2C_FIELD(arg0, s128 *, 0xB0);
    func_0013F6E8(sp, &sp10, &sp20, &sp30, var_fs1f, temp_fs0);
    if (var_s0 != sp) {
        *var_s0 = sp0;
    }
    if (temp_fp == 0) {
        temp_t6 = M2C_FIELD(arg0, u32 *, 0x40);
        switch (temp_t6) {
        case 0:
        case 3:
        case 6:
        case 8:
            if ((func_0013F9E0(arg0 + 0x70, arg0, var_s5, 1) != 0) && ((arg0 + 0x60) != var_s5)) {
                M2C_FIELD(arg0, s128 *, 0x60) = (s128) *var_s5;
            }
            break;
        case 2:
            func_0015A4E0(arg0);
            break;
        case 1:
        case 7:
        case 9:
        case 10:
            func_00140480(arg0);
            break;
        }
        func_00106DE8(func_00106A18(1), 0, M2C_FIELD(arg0, f32 *, 0x20));
        func_00107300(func_00106A60(1), var_s5, arg0, M2C_FIELD(arg0, f32 *, 0x24));
    }
}
