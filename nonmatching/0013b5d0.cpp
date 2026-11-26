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
static AnyCell sp4;
static AnyCell sp74;
static AnyCell sp8;
static AnyCell spC;
// m2c valid-syntax output for 0x0013b5d0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0013B5D0 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x58];                    /* maybe part of sp18[0x17]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad78[8];
};                                                  /* size = 0x80 */

M2C_UNK func_00138C10(void * = 0, s32 = 0) asm("func_00138C10");
M2C_UNK func_00138C40(void * = 0, s32 = 0, s32 = 0) asm("func_00138C40");
M2C_UNK func_00138D48(void * = 0, f32 = 0, f32 = 0) asm("func_00138D48");
M2C_UNK func_001395D0(void * = 0) asm("func_001395D0");
M2C_UNK func_001395E8(void * = 0) asm("func_001395E8");
M2C_UNK func_0013AC60(void * = 0, u8 = 0, s32 = 0) asm("func_0013AC60");
void *func_0013ACA0(s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_0013ACA0");
f32 func_0013B298(s32 = 0) asm("func_0013B298");
s32 func_0013CB30() asm("func_0013CB30");
s32 func_0013CB80() asm("func_0013CB80");
s32 func_0013CB90() asm("func_0013CB90");
s32 func_00313BC0(f32 = 0) asm("func_00313BC0");
extern M2C_UNK D_004573C0 asm("D_004573C0");
extern f32 D_FLT_0036AD14 asm("D_0036AD14");
extern f32 D_FLT_0036AD18 asm("D_0036AD18");
void * func_0013B5D0(s32 arg0 = 0, s32 arg1 = 0, s32 arg2 = 0, void *arg3 = 0, f32 fparg0 = 0, s32 arg_sp0 = 0, s32 arg_sp8 = 0, ...) asm("_ZN2dk12COMMAND_DRAW4openEiiPN2YS12COMMAND_SLOTEbiiPKNS1_7MESSAGEEiif");
void * func_0013b5d0_impl(s32 arg0, s32 arg1, s32 arg2, void *arg3, f32 fparg0, s32 arg_sp0, s32 arg_sp8) asm("_ZN2dk12COMMAND_DRAW4openEiiPN2YS12COMMAND_SLOTEbiiPKNS1_7MESSAGEEiif");
void * func_0013b5d0_impl(s32 arg0, s32 arg1, s32 arg2, void *arg3, f32 fparg0, s32 arg_sp0, s32 arg_sp8) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    f32 sp74;
    f32 temp_fv0;
    s32 *temp_t5;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t7;
    u8 var_s7;
    void *temp_s3;
    void *temp_v0;
    void *var_s0;

    sp74 = M2C_ERROR(/* Read from unset register $fs0f */);
    sp0 = arg2;
    temp_s1 = arg_sp0;
    sp4 = M2C_ERROR(/* Read from unset register $t1 */);
    sp8 = M2C_ERROR(/* Read from unset register $t2 */);
    spC = M2C_ERROR(/* Read from unset register $t3 */);
    if (arg3 == NULL) {
        sp10 = 0;
        var_s7 = 0;
    } else {
        var_s7 = M2C_FIELD(arg3, u8 *, 4);
        sp10 = M2C_FIELD(arg3, u16 *, 0) & 1 & 0xFF;
    }
    sp18 = arg1 * 4;
    temp_t7 = *(sp18 + &D_004573C0);
    sp14 = temp_t7;
    temp_s3 = (((arg1 * 9) + temp_t7) * 4) + arg0;
    var_s0 = M2C_FIELD(temp_s3, void **, 0x18);
    temp_s2 = func_0013CB90();
    if (var_s0 == NULL) {
        temp_s0 = func_0013CB30();
        temp_v0 = func_0013ACA0(sp0, temp_s0, func_0013CB80(), temp_s2);
        M2C_FIELD(temp_s3, void **, 0x18) = temp_v0;
        var_s0 = temp_v0;
    } else {
        if ((M2C_ERROR(/* Read from unset register $t0 */) & 0xFF) == 1) {
            func_00138C10(var_s0, sp0);
        }
        func_0013AC60(var_s0, var_s7, temp_s2);
    }
    M2C_FIELD(var_s0, s32 *, 0x198) = spC;
    func_00138C40(var_s0, sp4, sp8);
    temp_fv0 = func_0013B298(arg0);
    if (temp_fv0 < D_FLT_0036AD14) {
        func_001395D0(var_s0);
    } else {
        func_001395E8(var_s0);
    }
    M2C_FIELD(var_s0, s32 *, 0x1A4) = (s32) ((temp_s1 & 0xFFFFFF) | (func_00313BC0(temp_fv0 * D_FLT_0036AD18) << 0x18));
    func_00138D48(var_s0, fparg0, fparg0);
    temp_t5 = sp18 + &D_004573C0;
    M2C_FIELD(((arg1 * 9) + arg0 + sp14 + 0xA0), s8 *, 8) = (s8) sp10;
    *temp_t5 += 1;
    return var_s0;
}
