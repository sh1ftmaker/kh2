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
static AnyCell sp4;
static AnyCell sp8;
static AnyCell spC;
// m2c valid-syntax output for 0x002f20d0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002F20D0 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ char pad10[0x80];
};                                                  /* size = 0x90 */

void *func_002F1FA8(s32 = 0, s32 = 0, s32 = 0) asm("func_002F1FA8");
s32 func_002F2020(u16 = 0) asm("func_002F2020");
M2C_UNK func_002F20C0(s16 = 0, void * = 0, s32 * = 0, s32 * = 0) asm("func_002F20C0");
M2C_UNK func_003080D0(M2C_UNK * = 0, s16 = 0, u16 = 0) asm("func_003080D0");
extern M2C_UNK D_003762D8 asm("D_003762D8");
void func_002F20D0(void *arg0 = 0, s16 arg1 = 0, s16 arg2 = 0, s16 arg3 = 0, ...) asm("func_002f20d0");
void func_002f20d0_impl(void *arg0, s16 arg1, s16 arg2, s16 arg3) asm("func_002f20d0");
void func_002f20d0_impl(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s16 temp_s4;
    s16 temp_s5;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_lo;
    s32 var_v1_2;
    s32 var_v1_3;
    s64 var_a3;
    s64 var_a3_2;
    s64 var_t2;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v1;
    u16 temp_a0;
    u16 temp_a2;
    u32 temp_v0_2;
    void *temp_v0;

    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s4 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_v0 = func_002F1FA8(arg1 << 0x10, arg2 << 0x10, arg3 << 0x10);
    temp_a0 = M2C_FIELD(temp_v0, u16 *, 2);
    if ((u32) (temp_a0 - 2) >= 2U) {
        if (func_002F2020(temp_a0) != 0) {
            func_002F20C0((s16) M2C_FIELD(temp_v0, u16 *, 2), sp, &sp4, &sp8);
        } else {
            goto block_4;
        }
    } else {
block_4:
        spC = 0;
        sp8 = 0;
        sp4 = 0;
        sp0 = 0;
    }
    temp_a2 = M2C_FIELD(temp_v0, u16 *, 0);
    M2C_FIELD(arg0, s64 *, 0) = 0x66;
    var_v0 = 2;
    if ((s16) M2C_FIELD(temp_v0, u16 *, 0) != 0) {
        var_v0 = 3;
        if (M2C_FIELD(temp_v0, s16 *, 4) == 0) {
            var_v0 = 1;
        }
    }
    M2C_FIELD(arg0, s64 *, 8) = var_v0;
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) (((arg1 & 0xF) << 0xF) | ((((s32) (arg2 + 0x3F) >> 6) & 0x3F) << 9));
    switch ((s16) M2C_FIELD(temp_v0, u16 *, 2)) {   /* irregular */
    case 0x2:
        if ((s16) temp_a2 == 1) {
            temp_lo = (s32) (arg2 + 0x9FF) / arg2;
            var_a3 = ((temp_s4 + sp4 + 0x32) & 0xFFF) << 0xC;
            var_t2 = (temp_lo - 1) << 0x17;
            var_v1 = ((temp_lo * arg2) - 1) << 0x20;
            var_a1 = ((temp_s5 * temp_lo) + (sp0 + 0x27C)) & 0xFFF;
            if (M2C_FIELD(temp_v0, s16 *, 4) != 0) {
                var_v1_2 = var_t2 | var_v1;
                var_v0_2 = (arg3 * 2) - 1;
            } else {
block_17:
                var_v0_2 = arg3 - 1;
                var_v1_2 = var_t2 | var_v1;
            }
block_18:
            M2C_FIELD(arg0, s64 *, 0x18) = (s64) (var_v1_2 | (var_a1 | (var_v0_2 << 0x2C)) | var_a3);
        } else {
            var_lo = (s32) (arg2 + 0x9FF) / arg2;
            var_a3_2 = (arg3 - 1) << 0x2C;
            var_a1_2 = sp0 + 0x27C;
            var_v1_3 = temp_s4 + sp4 + 0x19;
block_20:
            M2C_FIELD(arg0, s64 *, 0x18) = (s64) (((var_lo - 1) << 0x17) | (((var_lo * arg2) - 1) << 0x20) | ((((temp_s5 * var_lo) + var_a1_2) & 0xFFF) | var_a3_2) | ((var_v1_3 & 0xFFF) << 0xC));
        }
        break;
    case 0x3:
        if ((s16) temp_a2 == 1) {
            temp_lo_2 = (s32) (arg2 + 0x9FF) / arg2;
            var_a3 = ((temp_s4 + sp4 + 0x48) & 0xFFF) << 0xC;
            var_t2 = (temp_lo_2 - 1) << 0x17;
            var_v1 = ((temp_lo_2 * arg2) - 1) << 0x20;
            var_a1 = ((temp_s5 * temp_lo_2) + (sp0 + 0x290)) & 0xFFF;
            if (M2C_FIELD(temp_v0, s16 *, 4) != 0) {
                var_v1_2 = var_t2 | var_v1;
                var_v0_2 = (arg3 * 2) - 1;
            } else {
                goto block_17;
            }
            goto block_18;
        }
        var_lo = (s32) (arg2 + 0x9FF) / arg2;
        var_a3_2 = (arg3 - 1) << 0x2C;
        var_a1_2 = sp0 + 0x290;
        var_v1_3 = temp_s4 + sp4 + 0x24;
        goto block_20;
    case 0x50:
        temp_v0_2 = 0x2D0 - arg2;
        M2C_FIELD(arg0, s64 *, 0x18) = (s64) (((arg3 - 1) << 0x2C) | (((arg2 * 2) - 1) << 0x20) | ((((((s32) (temp_v0_2 + (temp_v0_2 >> 0x1F)) >> 1) * 2) + sp0 + ((temp_s5 * 2) + 0xE8)) & 0xFFF) | 0x800000) | (((temp_s4 + sp4 + 0x23) & 0xFFF) << 0xC));
        break;
    default:
        func_003080D0(&D_003762D8, (s16) M2C_FIELD(temp_v0, u16 *, 2), temp_a2);
        break;
    }
    M2C_FIELD(arg0, s64 *, 0x20) = 0;
}
