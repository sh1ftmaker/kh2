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

static AnyCell sp70;
static AnyCell sp71;
static AnyCell sp72;
static AnyCell sp73;
static AnyCell sp80;
static AnyCell sp81;
static AnyCell sp82;
static AnyCell sp83;
static AnyCell sp90;
static AnyCell sp91;
static AnyCell sp92;
static AnyCell sp93;
// m2c valid-syntax output for 0x00193038, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00193038 {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ u8 sp70;                             /* inferred */
    /* 0x71 */ u8 sp71;                             /* inferred */
    /* 0x72 */ u8 sp72;                             /* inferred */
    /* 0x73 */ u8 sp73;                             /* inferred */
    /* 0x74 */ char pad74[0xC];                     /* maybe part of sp73[0xD]? */
    /* 0x80 */ s8 sp80;                             /* inferred */
    /* 0x81 */ s8 sp81;                             /* inferred */
    /* 0x82 */ s8 sp82;                             /* inferred */
    /* 0x83 */ s8 sp83;                             /* inferred */
    /* 0x84 */ char pad84[0xC];                     /* maybe part of sp83[0xD]? */
    /* 0x90 */ u8 sp90;                             /* inferred */
    /* 0x91 */ u8 sp91;                             /* inferred */
    /* 0x92 */ u8 sp92;                             /* inferred */
    /* 0x93 */ u8 sp93;                             /* inferred */
    /* 0x94 */ char pad94[0x2C];
};                                                  /* size = 0xC0 */

M2C_UNK func_00143398(void * = 0) asm("func_00143398");
M2C_UNK func_0016A070(void * = 0) asm("func_0016A070");
f32 func_00184A90(void * = 0) asm("func_00184A90");
M2C_UNK func_00193330() asm("func_00193330");
s32 func_001943E8(void * = 0) asm("func_001943E8");
f32 func_00194690(void * = 0) asm("func_00194690");
s32 func_0019BAD8(void * = 0) asm("func_0019BAD8");
s32 func_0019C5D0(void * = 0) asm("func_0019C5D0");
s32 func_0019C650(void * = 0) asm("func_0019C650");
s32 func_001BFDA0(void * = 0, void * = 0) asm("func_001BFDA0");
s32 func_001C0CD8(void * = 0) asm("func_001C0CD8");
extern f32 D_FLT_0036CEC0 asm("D_0036CEC0");
extern f32 D_FLT_0036CEC4 asm("D_0036CEC4");
void func_00193038(void *arg0 = 0, ...) asm("_ZN2YS3OBJ4drawEv");
void func_00193038_impl(void *arg0) asm("_ZN2YS3OBJ4drawEv");
void func_00193038_impl(void *arg0) {
    u8 sp70;
    u8 sp73;
    s8 sp80;
    s8 sp81;
    s8 sp82;
    s8 sp83;
    u8 sp90;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    f32 var_fv0f;
    s32 temp_t7;
    s32 var_t7;
    s32 var_t7_2;
    s32 var_t7_3;
    void *temp_t6;

    func_00193330();
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 8), u16 *, 0x48) & 4) || (M2C_FIELD(arg0, s32 *, 0x588) & 0x20000000)) {
        sp70 = M2C_UNALIGNED32(M2C_FIELD(arg0, u8 *, 0x3AC));
        sp73 = (u8) ((s32) (M2C_FIELD(arg0, u8 *, 0x3AF) * M2C_FIELD(arg0, u8 *, 0x8BF)) >> 7);
    } else {
        sp90 = M2C_UNALIGNED32(M2C_FIELD(arg0, M2C_UNK *, 0x8BC));
        temp_t6 = arg0 + 0x3AC;
        sp80 = (s8) ((s32) (M2C_FIELD(arg0, u8 *, 0x3AC) * sp90) >> 7);
        sp81 = (s8) ((s32) (M2C_FIELD(temp_t6, u8 *, 1) * sp91) >> 7);
        sp82 = (s8) ((s32) (M2C_FIELD(temp_t6, u8 *, 2) * sp92) >> 7);
        sp83 = (s8) ((s32) (M2C_FIELD(temp_t6, u8 *, 3) * sp93) >> 7);
        sp70 = M2C_UNALIGNED32(sp80);
    }
    temp_fs0 = func_00194690(arg0);
    M2C_FIELD(arg0, u8 *, 0x758) = sp70;
    M2C_FIELD(arg0, u8 *, 0x759) = sp71;
    M2C_FIELD(arg0, u8 *, 0x75A) = sp72;
    M2C_FIELD(arg0, s8 *, 0x75B) = (s8) M2C_ERROR(/* Read from unset register $fv0f */);
    func_0016A070(arg0);
    if (func_0019BAD8(arg0) != 0) {
        M2C_FIELD(arg0, s8 *, 0x77C) = 0;
        if ((((u64) M2C_FIELD(arg0, u64 *, 0x600) >> 0x21) ^ 1) & 1 & 0xFF) {
            temp_fv1f = M2C_FIELD(arg0, f32 *, 0x774);
            temp_fv0 = func_00184A90(arg0) - M2C_FIELD(arg0, f32 *, 0x544);
            if (temp_fv0 < temp_fv1f) {
                var_fv0f = D_FLT_0036CEC4 - (temp_fv0 / temp_fv1f);
                goto block_7;
            }
        }
    } else {
        var_fv0f = (f32) sp73 * D_FLT_0036CEC0;
block_7:
        M2C_FIELD(arg0, s8 *, 0x77C) = M2C_BITWISE(s8, var_fv0f);
    }
    temp_fv0f = M2C_FIELD(arg0, f32 *, 0x8C0);
    if (temp_fv0f < D_FLT_0036CEC4) {
        M2C_FIELD(arg0, s32 *, 0x678) = (s32) (M2C_FIELD(arg0, s32 *, 0x678) | 2);
        M2C_FIELD(arg0, s8 *, 0x683) = M2C_BITWISE(s8, temp_fv0f);
    } else {
        M2C_FIELD(arg0, s32 *, 0x678) = (s32) (M2C_FIELD(arg0, s32 *, 0x678) & ~2);
    }
    M2C_FIELD(arg0, s32 *, 0x6A4) = func_001BFDA0(arg0 + 0x8E0, arg0 + 0x758);
    temp_t7 = M2C_FIELD(arg0, s32 *, 0x678);
    if (func_001943E8(arg0) != 0) {
        var_t7 = temp_t7 | 8;
    } else {
        var_t7 = temp_t7 & ~8;
    }
    M2C_FIELD(arg0, s32 *, 0x678) = var_t7;
    if (func_0019C5D0(arg0) != 0) {
        var_t7_2 = M2C_FIELD(arg0, s32 *, 0x768) & ~4;
    } else {
        var_t7_2 = M2C_FIELD(arg0, s32 *, 0x768) | 4;
    }
    M2C_FIELD(arg0, s32 *, 0x768) = var_t7_2;
    if (func_0019C650(arg0) != 0) {
        var_t7_3 = M2C_FIELD(arg0, s32 *, 0x768) & ~8;
    } else {
        var_t7_3 = M2C_FIELD(arg0, s32 *, 0x768) | 8;
    }
    M2C_FIELD(arg0, s32 *, 0x768) = var_t7_3;
    if (func_001C0CD8(arg0) == 0) {
        func_00143398(arg0 + 0x670);
    }
}
