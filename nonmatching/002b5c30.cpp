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
static AnyCell sp24;
static AnyCell sp4;
static AnyCell sp8;
static AnyCell spC;
// m2c valid-syntax output for 0x002b5c30, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002B5C30 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ M2C_UNK sp8;                         /* inferred */
    /* 0x08 */ char pad8[4];
    /* 0x0C */ M2C_UNK spC;                         /* inferred */
    /* 0x0C */ char padC[4];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ M2C_UNK *sp20;                       /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x58];
};                                                  /* size = 0x80 */

s32 func_00105C30() asm("func_00105C30");
M2C_UNK func_00138C10(s32 = 0, s16 = 0) asm("func_00138C10");
M2C_UNK func_0014CA80(s32 = 0, void * = 0, s32 * = 0, M2C_UNK * = 0) asm("func_0014CA80");
s32 func_00192048(s32 = 0) asm("func_00192048");
s32 func_00192B30(s32 = 0) asm("func_00192B30");
s32 func_00192C40(s32 = 0, s32 = 0) asm("func_00192C40");
s32 func_00192CC0(s32 = 0, M2C_UNK * = 0, s8 = 0, s32 = 0) asm("func_00192CC0");
s32 func_00241F10() asm("func_00241F10");
M2C_UNK func_002595E8(s32 = 0, s32 = 0) asm("func_002595E8");
void *func_002891B8(s32 = 0, s32 = 0) asm("func_002891B8");
s32 func_002892F8(s32 = 0) asm("func_002892F8");
s32 func_0028AFA8(s32 = 0) asm("func_0028AFA8");
s32 func_0028B038(s32 = 0, s32 = 0) asm("func_0028B038");
M2C_UNK func_0028BE78(s32 = 0, s32 = 0) asm("func_0028BE78");
s16 func_002B5B10(s8 = 0, s8 = 0) asm("func_002B5B10");
M2C_UNK func_002B60E8(s32 = 0, s32 = 0, M2C_UNK = 0, s32 = 0) asm("func_002B60E8");
extern M2C_UNK D_0035F690 asm("D_0035F690");
extern M2C_UNK D_00374CF0 asm("D_00374CF0");
extern M2C_UNK D_00374CF8 asm("D_00374CF8");
extern M2C_UNK D_00374D00 asm("D_00374D00");
extern M2C_UNK D_00374D08 asm("D_00374D08");
extern M2C_UNK D_00374DA8 asm("D_00374DA8");
extern M2C_UNK D_00374DB8 asm("D_00374DB8");
void func_002B5C30(s32 arg0 = 0, ...) asm("_ZN2Tz8CmSLBase14UpdateListMessEi");
void func_002b5c30_impl(s32 arg0) asm("_ZN2Tz8CmSLBase14UpdateListMessEi");
void func_002b5c30_impl(s32 arg0) {
    s32 sp4;
    M2C_UNK sp8;
    M2C_UNK spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    M2C_UNK *sp20;
    s32 sp24;
    M2C_UNK var_a2;
    s16 var_v0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_fp;
    s32 temp_hi;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_t6;
    s8 temp_t6_3;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1_2;
    void *temp_s2;
    void *temp_s7;

    sp10 = arg0;
    sp18 = func_00241F10();
    var_s0 = 0;
    do {
        var_s2 = 0;
        var_a1 = 0;
loop_2:
        func_002B60E8(var_s0, var_a1, -1, 0);
        var_s2 += 1;
        var_a1 = var_s2;
        if (var_s2 < 5) {
            goto loop_2;
        }
        temp_s4 = var_s0 + 1;
        var_s0 = temp_s4;
    } while (temp_s4 < 4);
    var_s4 = 0;
    sp24 = 0;
    sp14 = func_0028B038(*(s32 *)0x35F64C, var_a1);
    temp_fp = func_0028AFA8(*(s32 *)0x35F64C);
    func_0028BE78(*(s32 *)0x35F678, sp14);
    sp20 = &D_0035F690;
loop_5:
    if (var_s4 < func_002892F8(*(s32 *)0x35F64C)) {
        temp_hi = (s32) (sp14 + var_s4) % temp_fp;
        temp_s0 = *(s32 *)0x35F65C;
        temp_s3 = var_s4 * 0x38;
        temp_s6 = temp_hi << 5;
        temp_s2 = func_002891B8(*(s32 *)0x35F64C, var_s4);
        M2C_FIELD(temp_s2, s32 *, 0x198) = func_00192CC0(temp_s0 + temp_s3, &D_00374CF0, temp_hi + 1);
        temp_s0_2 = sp18 + temp_s6;
        temp_t6 = M2C_FIELD(temp_s0_2, s32 *, 8);
        temp_s7 = temp_s0_2 + 8;
        if (temp_t6 == 0) {
            var_a0 = (sp10 != 0) ? 0x8A9F : 0x8A9D;
            goto block_9;
        }
        if (temp_t6 & 0x10) {
            var_s2_2 = 2;
            temp_a0 = func_00192048(0xCD96);
            sp1C = 0;
            func_00192CC0(*(s32 *)0x35F65C + temp_s3 + func_00192C40(temp_a0, *(s32 *)0x35F65C + temp_s3 + 8) + 8, &D_00374CF8, M2C_FIELD(temp_s0_2, s8 *, 0x19));
            func_002B60E8(var_s4, 0, 0, *(s32 *)0x35F65C + temp_s3 + 8);
            temp_s1 = func_00192B30(func_00192CC0(*(s32 *)0x35F65C + temp_s3 + 0x18, &D_00374D00, (s8) M2C_FIELD(temp_s0_2, s32 *, 0x14)));
            func_002595E8(*(s32 *)0x35F65C + temp_s3 + temp_s1 + 0x18, func_00192048(0xB7DB));
            func_002B60E8(var_s4, 1, 1, *(s32 *)0x35F65C + temp_s3 + 0x18);
            if (func_00105C30() != 1) {
                if (func_00105C30() == 8) {
                    goto block_22;
                }
            } else {
block_22:
                sp1C = 1;
            }
            if (sp1C & 0xFF) {
                temp_t6_2 = *((M2C_FIELD((temp_s6 + sp18), s8 *, 0x18) * 4) + &D_00374DB8);
                if (temp_t6_2 > 0) {
                    var_s2_2 = 3;
                    func_002B60E8(var_s4, 2, 2, func_00192048(temp_t6_2));
                }
            }
            temp_s1_2 = temp_s6 + sp18;
            temp_a3 = M2C_FIELD(temp_s1_2, s32 *, 0xC);
            temp_a1 = var_s2_2;
            if (temp_a3 != 0) {
                var_s2_2 += 1;
                func_002B60E8(var_s4, temp_a1, 3, temp_a3);
            }
            var_s1 = 0;
            func_0014CA80(M2C_FIELD(temp_s1_2, s32 *, 0x10), sp, &sp4, &sp8);
            if ((func_00105C30() == 1) || (func_00105C30() == 8)) {
                var_s1 = 1;
            }
            var_a3 = func_00192CC0(*(s32 *)0x35F65C + (var_s4 * 0x38) + 0x10, &D_00374D08, (s8) sp0, sp4);
            var_a1_2 = var_s2_2;
            var_a2 = (var_s1 == 0) ? 2 : 4;
        } else {
            if (temp_t6 & 0x40) {
                var_a0 = (sp10 != 0) ? 0x8A9F : 0x8A9E;
            } else {
                var_a0 = 0x8A9A;
            }
block_9:
            var_a3 = func_00192048(var_a0);
            var_a1_2 = 0;
            var_a2 = 5;
        }
        func_002B60E8(var_s4, var_a1_2, var_a2, var_a3);
        if (M2C_FIELD(temp_s0_2, s32 *, 8) & 0x10) {
            temp_t6_3 = M2C_FIELD(temp_s7, s8 *, 0x12);
            var_v0 = 0;
            if (temp_t6_3 >= 0) {
                var_v0 = func_002B5B10(temp_t6_3, M2C_FIELD(temp_s7, s8 *, 0x14));
            }
            temp_s0_3 = sp24 + &D_0035F690;
            func_00138C10(M2C_FIELD(temp_s0_3, s32 *, 0), var_v0);
            func_00138C10(M2C_FIELD(temp_s0_3, s32 *, 0x10), *((M2C_FIELD(temp_s7, s8 *, 0x13) * 2) + &D_00374DA8));
            var_t6 = 0x14;
            if (!(M2C_FIELD(temp_s0_2, s32 *, 8) & 0x10000000)) {
                var_t6 = *(s32 *)0x35F648;
            }
            var_a1_3 = var_t6;
            var_a0_2 = M2C_FIELD((sp24 + &D_0035F690), s32 *, 0x20);
        } else {
            func_00138C10(M2C_FIELD(sp20, s32 *, 0), 0);
            func_00138C10(M2C_FIELD(sp20, s32 *, 0x10), 0);
            var_a1_3 = *(s32 *)0x35F648;
            var_a0_2 = M2C_FIELD(sp20, s32 *, 0x20);
        }
        var_s4 += 1;
        func_00138C10(var_a0_2, (s16) var_a1_3);
        sp20 += 4;
        sp24 += 4;
        goto loop_5;
    }
}
