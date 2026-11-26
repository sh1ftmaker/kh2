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
static AnyCell sp8;
static AnyCell spC;
// m2c valid-syntax output for 0x00291510, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00291510 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ void *sp4;                           /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x54];
};                                                  /* size = 0x70 */

M2C_UNK func_00138C10(void * = 0, s32 = 0) asm("func_00138C10");
M2C_UNK func_00138C68(void * = 0, s32 = 0, s32 = 0) asm("func_00138C68");
void *func_00192048(u16 = 0) asm("func_00192048");
M2C_UNK func_00192CC0(void * = 0, M2C_UNK * = 0, u16 = 0) asm("func_00192CC0");
void *func_001A80C8(u16 = 0) asm("func_001A80C8");
s32 func_0023AA18(void * = 0) asm("func_0023AA18");
s32 func_0023AA38(void * = 0) asm("func_0023AA38");
s32 func_0023AA78(void * = 0) asm("func_0023AA78");
M2C_UNK func_0028DCC0(void * = 0, void * = 0) asm("func_0028DCC0");
s32 func_00291370(void * = 0, M2C_UNK = 0) asm("func_00291370");
void *func_002924D0(s32 = 0) asm("func_002924D0");
extern M2C_UNK D_00374498 asm("D_00374498");
extern M2C_UNK D_003744A0 asm("D_003744A0");
extern M2C_UNK D_00374548 asm("D_00374548");
extern M2C_UNK D_00374560 asm("D_00374560");
void func_00291510(void *arg0 = 0, u32 arg1 = 0, s32 arg2 = 0, s32 arg3 = 0, ...) asm("_ZN2Tz8ItemStat6UpdateEiii");
void func_00291510_impl(void *arg0, u32 arg1, s32 arg2, s32 arg3) asm("_ZN2Tz8ItemStat6UpdateEiii");
void func_00291510_impl(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    void *sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    M2C_UNK *var_a1_3;
    M2C_UNK *var_t7_2;
    M2C_UNK var_a1_2;
    s16 var_s0_2;
    s16 var_t6;
    s16 var_t7;
    s32 temp_fp;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s7;
    s32 var_t6_2;
    u16 var_a2;
    u16 var_s0;
    u32 var_s5;
    u8 var_s0_4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_v0;
    void *var_a0;
    void *var_a1;

    sp0 = arg3;
    sp4 = func_002924D0(arg2);
    switch (arg1) {                                 /* switch 1 */
    case 0:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
        var_t6 = M2C_FIELD(arg0, s16 *, 0x2B2E);
block_3:
        sp8 = (s32) var_t6;
        break;
    case 1:                                         /* switch 1 */
        var_t7 = M2C_FIELD(arg0, s16 *, 0x2B30);
block_51:
        sp8 = (s32) var_t7;
        break;
    case 2:                                         /* switch 1 */
        var_t6 = M2C_FIELD(arg0, s16 *, 0x2B34);
        goto block_3;
    default:                                        /* switch 1 */
        var_t7 = M2C_FIELD(arg0, s16 *, 0x2B38);
        goto block_51;
    }
    var_s7 = 0;
    var_s5 = 0;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x190) + 0x18;
    sp14 = func_0023AA18(temp_s0);
    sp18 = func_0023AA38(temp_s0);
    do {
        if (!(((sp0 >> var_s5) ^ 1) & 1 & 0xFF)) {
            temp_s1 = arg0 + (var_s7 * 0x1B4) + 4;
            if (arg1 == 1) {
                if (var_s5 == 8) {
                    sp8 = (s32) M2C_FIELD(arg0, s16 *, 0x2B32);
                }
            }
            temp_s0_2 = temp_s1 + 0x18;
            func_00138C10(temp_s1, sp8);
            temp_fp = func_0023AA78(temp_s0_2);
            spC = func_0023AA18(temp_s0_2);
            sp10 = func_0023AA38(temp_s0_2);
            temp_s2 = sp18 + (temp_fp * var_s7);
            func_00138C68(temp_s1, sp14, temp_s2);
            if (arg1 != 0) {
                var_t6_2 = var_s5 * 2;
                var_t7_2 = &D_00374560;
            } else {
                var_t6_2 = var_s5 * 2;
                var_t7_2 = &D_00374548;
            }
            var_s0 = *(var_t6_2 + var_t7_2);
            if (var_s0 == 0) {
                var_s0 = *(var_t6_2 + &D_00374548);
            }
            M2C_FIELD(temp_s1, void **, 0x198) = func_00192048(var_s0);
            if ((u32) (arg1 - 2) < 2U) {
                temp_s1_2 = arg0 + (var_s7 * 0x1B4) + 0x888;
                if (arg1 == 2) {
                    var_s0_2 = M2C_FIELD(arg0, s16 *, 0x2B36);
                } else {
                    var_s0_2 = M2C_FIELD(arg0, s16 *, 0x2B3A);
                }
                func_00138C10(temp_s1_2, (s32) var_s0_2);
                func_00138C68(temp_s1_2, sp14, temp_s2);
            }
            var_s3 = spC;
            var_s2 = sp10;
            temp_s1_3 = arg0 + (var_s7 * 0x1B4) + 0x110C;
            if ((arg1 == 0) || (arg1 == 4)) {
                var_s2 = ((var_s5 ^ 8) == 0) ? (var_s2 + temp_fp) : var_s2;
            }
            if (arg1 == 3) {
                var_s3 = 0;
                var_s0_3 = func_00291370(arg0, 0);
                var_s2 = 0;
                var_a1 = arg0 + (var_s7 * 0x1B4) + 0x888;
            } else {
                if (var_s5 == 8) {
                    var_a1_2 = 2;
                } else {
                    var_a1_2 = 0;
                }
                var_s0_3 = func_00291370(arg0, var_a1_2);
                var_a1 = arg0 + (var_s7 * 0x1B4) + 4;
            }
            func_0028DCC0(temp_s1_3, var_a1);
            func_00138C68(temp_s1_3, var_s3, var_s2);
            func_00138C10(temp_s1_3, var_s0_3);
            var_s0_4 = -1U;
            switch (var_s5) {                       /* switch 2 */
            case 0:                                 /* switch 2 */
                var_s0_4 = M2C_FIELD(sp4, u8 *, 7);
                break;
            case 1:                                 /* switch 2 */
                var_s0_4 = M2C_FIELD(sp4, u8 *, 4);
                break;
            case 2:                                 /* switch 2 */
                var_s0_4 = M2C_FIELD(sp4, u8 *, 5);
                break;
            case 3:                                 /* switch 2 */
                var_s0_4 = M2C_FIELD(sp4, u8 *, 6);
                break;
            case 4:                                 /* switch 2 */
                var_s0_4 = M2C_FIELD(sp4, u8 *, 9);
                break;
            case 5:                                 /* switch 2 */
                var_s0_4 = M2C_FIELD(sp4, u8 *, 0xA);
                break;
            case 6:                                 /* switch 2 */
                var_s0_4 = M2C_FIELD(sp4, u8 *, 0xB);
                break;
            case 7:                                 /* switch 2 */
                var_s0_4 = M2C_FIELD(sp4, u8 *, 0xC);
                break;
            case 8:                                 /* switch 2 */
                var_s0_4 = (u8) M2C_FIELD(sp4, u16 *, 2);
                break;
            }
            M2C_FIELD(temp_s1_3, s32 *, 0x1B0) = 1;
            if (var_s5 == 8) {
                temp_v0 = func_001A80C8((u16) var_s0_4);
                if (arg1 == 1) {
                    M2C_FIELD(temp_s1_3, s32 *, 0x1B0) = 2;
                }
                M2C_FIELD(temp_s1_3, void **, 0x198) = func_00192048(M2C_FIELD(temp_v0, u16 *, 8));
                var_s7 += 1;
            } else {
                temp_s2_2 = var_s7 * 8;
                if ((u32) (var_s5 - 4) < 4U) {
                    var_a2 = 0x64 - var_s0_4;
                    var_a0 = arg0 + temp_s2_2 + 0x2A98;
                    var_a1_3 = &D_00374498;
                } else {
                    var_a1_3 = &D_003744A0;
                    var_a0 = arg0 + temp_s2_2 + 0x2A98;
                    var_a2 = (u16) var_s0_4;
                }
                var_s7 += 1;
                func_00192CC0(var_a0, var_a1_3, var_a2);
                M2C_FIELD(temp_s1_3, void **, 0x198) = (void *) (arg0 + temp_s2_2 + 0x2A98);
            }
        }
        var_s5 += 1;
    } while ((s32) var_s5 < 9);
}
