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
static AnyCell sp28;
static AnyCell sp2C;
static AnyCell sp30;
static AnyCell sp34;
static AnyCell sp38;
static AnyCell sp3C;
static AnyCell sp4;
static AnyCell sp40;
static AnyCell sp44;
static AnyCell sp48;
static AnyCell sp4C;
static AnyCell sp50;
static AnyCell sp54;
static AnyCell sp58;
static AnyCell sp8;
static AnyCell spC;
// m2c valid-syntax output for 0x00301938, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00301938 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ u32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 *sp10;                           /* inferred */
    /* 0x14 */ s8 **sp14;                           /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ u32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ s8 *sp48;                            /* inferred */
    /* 0x4C */ s8 *sp4C;                            /* inferred */
    /* 0x50 */ s8 *sp50;                            /* inferred */
    /* 0x54 */ s8 *sp54;                            /* inferred */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad5C[0x54];
};                                                  /* size = 0xB0 */

M2C_UNK func_002FDD68(s32 = 0, s8 * = 0, s32 = 0) asm("func_002FDD68");
s32 func_00301708(s8 * = 0, s8 * = 0) asm("func_00301708");
s8 *func_00303B70(s8 * = 0, s32 = 0) asm("func_00303B70");
M2C_UNK func_00303C18(s8 * = 0, s8 * = 0) asm("func_00303C18");
s8 *func_00303C48(s8 * = 0, s8 * = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_00303C48");
s32 func_00303E80(s32 = 0) asm("func_00303E80");
s8 *func_00303FC0(s8 * = 0, M2C_UNK = 0) asm("func_00303FC0");
s8 *func_00303FF8(s8 * = 0, s8 * = 0, s8 * = 0) asm("func_00303FF8");
s8 *func_00304200(s8 * = 0, s8 * = 0, s32 = 0) asm("func_00304200");
s8 *func_00304308(s8 * = 0, s8 * = 0, s32 = 0) asm("func_00304308");
s32 func_00304468(s8 * = 0, s8 * = 0) asm("func_00304468");
s8 *func_003044D0(s8 * = 0, s8 * = 0, s8 * = 0) asm("func_003044D0");
s8 *func_003048B8(s8 * = 0, s64 = 0, void * = 0, s32 * = 0) asm("func_003048B8");
s64 func_00313E80(s64 = 0, s64 = 0) asm("func_00313E80");
s64 func_00313ED8(s64 = 0, s64 = 0) asm("func_00313ED8");
s64 func_00313F40(s64 = 0, s64 = 0) asm("func_00313F40");
s64 func_00314190(s64 = 0, s64 = 0) asm("func_00314190");
s32 func_003142E0(s64 = 0, s64 = 0) asm("func_003142E0");
s64 func_00314330(u32 = 0) asm("func_00314330");
u32 func_003143E0(s64 = 0) asm("func_003143E0");
extern s8 D_00377C68 asm("D_00377C68");
extern s8 D_00377C78 asm("D_00377C78");
extern s8 D_00377C80 asm("D_00377C80");
extern M2C_UNK D_00377D10 asm("D_00377D10");
extern s64 D_00377DD8 asm("D_00377DD8");
s8 * func_00301938(s8 *arg0 = 0, u64 arg1 = 0, u32 arg2 = 0, s32 arg3 = 0, ...) asm("func_00301938");
s8 * func_00301938_impl(s8 *arg0, u64 arg1, u32 arg2, s32 arg3) asm("func_00301938");
s8 * func_00301938_impl(s8 *arg0, u64 arg1, u32 arg2, s32 arg3) {
    s32 sp4;
    u32 sp8;
    s32 spC;                                        /* compiler-managed */
    s32 *sp10;
    s8 **sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;                                       /* compiler-managed */
    s32 sp24;
    s32 sp28;                                       /* compiler-managed */
    u32 sp2C;
    u32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    u32 sp40;
    s32 sp44;
    s8 *sp48;
    s8 *sp4C;
    s8 *sp50;
    s8 *sp54;
    s32 sp58;
    s32 *temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_s7_3;
    s32 temp_s7_4;
    s32 temp_t5_4;
    s32 temp_t7_2;
    s32 temp_v0_16;
    s32 temp_v0_19;
    s32 var_a2;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_6;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_s3_10;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_s3_7;
    s32 var_s3_8;
    s32 var_s3_9;
    s32 var_t5;
    s64 *var_s0_4;
    s64 *var_s0_5;
    s64 temp_s0_2;
    s64 temp_s0_3;
    s64 temp_s0_6;
    s64 temp_s1;
    s64 temp_s1_2;
    s64 temp_s1_3;
    s64 temp_s2_2;
    s64 temp_s2_3;
    s64 temp_s7;
    s64 temp_t5_2;
    s64 temp_v0;
    s64 temp_v0_10;
    s64 temp_v0_11;
    s64 temp_v0_3;
    s64 temp_v0_4;
    s64 temp_v0_6;
    s64 temp_v0_8;
    s64 var_s1_2;
    s64 var_s2_3;
    s64 var_s7;
    s64 var_v0_2;
    s8 *temp_a1;
    s8 *temp_t5;
    s8 *temp_v0_13;
    s8 *temp_v0_14;
    s8 *temp_v0_15;
    s8 *temp_v0_17;
    s8 *temp_v0_18;
    s8 *temp_v0_2;
    s8 *var_a1;
    s8 *var_fp;
    s8 *var_s6;
    s8 *var_s6_2;
    s8 *var_s6_3;
    s8 *var_v0;
    s8 var_s4_2;
    s8 var_t7;
    s8 var_t7_2;
    u32 temp_t7;
    u32 temp_v0_5;
    u32 temp_v0_7;
    u32 temp_v0_9;
    u32 var_s0;
    u32 var_s3;
    u32 var_s3_2;
    u64 temp_s7_2;
    u64 temp_t5_3;
    u64 temp_v0_12;
    u64 var_s4;
    u64 var_t6;
    u8 temp_t5_5;
    u8 temp_t5_6;
    u8 temp_t5_7;
    u8 var_t5_2;

    temp_s0 = M2C_ERROR(/* Read from unset register $t1 */);
    var_s4 = arg1;
    sp8 = arg2;
    temp_t5 = M2C_FIELD(arg0, s8 **, 0x40);
    spC = arg3;
    sp10 = M2C_ERROR(/* Read from unset register $t0 */);
    sp14 = M2C_ERROR(/* Read from unset register $t2 */);
    sp48 = NULL;
    if (temp_t5 != NULL) {
        M2C_FIELD(temp_t5, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        M2C_FIELD(temp_t5, s32 *, 8) = (s32) (1 << M2C_FIELD(arg0, s32 *, 0x44));
        func_00303C18(temp_t5);
        M2C_FIELD(arg0, s8 **, 0x40) = NULL;
    }
    var_t6 = var_s4 >> 0x20;
    temp_t5_2 = (s64) (var_t6 << 0x20) >> 0x20;
    if (temp_t5_2 >= 0) {
        *temp_s0 = 0;
    } else {
        *temp_s0 = 1;
        var_s4 = ((u64) (var_s4 << 0x20) >> 0x20) | (((u64) ((temp_t5_2 & 0x7FFFFFFF) << 0x20) >> 0x20) << 0x20);
        var_t6 = var_s4 >> 0x20;
    }
    temp_s0_2 = (s64) (var_t6 << 0x20) >> 0x20;
    if ((temp_s0_2 & 0x7FF00000) == 0x7FF00000) {
        *sp10 = 0x270F;
        if (!(var_s4 & (-0x1000U >> 0xC))) {
            var_s6 = &D_00377C68;
        } else {
            var_s6 = &D_00377C78;
        }
        if (sp14 != NULL) {
            *sp14 = (M2C_FIELD(var_s6, s8 *, 3) == 0) ? (var_s6 + 3) : (var_s6 + 8);
        }
        goto block_11;
    }
    if (func_003142E0((s64) var_s4, 0) == 0) {
        var_s6 = &D_00377C80;
        *sp10 = 1;
        if (sp14 != NULL) {
            *sp14 = &D_00377C80 + 1;
        }
block_11:
        var_v0 = var_s6;
    } else {
        temp_s3 = ((u32) temp_s0_2 >> 0x14) & 0x7FF;
        var_fp = func_003048B8(arg0, (s64) var_s4, sp, &sp4);
        if (temp_s3 != 0) {
            sp44 = 0;
            temp_t5_3 = -1U >> 0x20;
            var_s3 = temp_s3 - 0x3FF;
            temp_s7 = (var_s4 & temp_t5_3) | (((u64) ((((s64) var_s4 >> 0x20) & 0xFFFFF) << 0x20) >> 0x20) << 0x20);
            var_s7 = (temp_s7 & temp_t5_3) | (((u64) (((temp_s7 >> 0x20) | 0x3FF00000) << 0x20) >> 0x20) << 0x20);
        } else {
            temp_t5_4 = sp4 + sp0;
            temp_s3_2 = temp_t5_4 + 0x432;
            if (temp_s3_2 >= 0x21) {
                var_s0 = (temp_s0_2 << -temp_s3_2) | ((u32) ((s64) (var_s4 << 0x20) >> 0x20) >> (temp_t5_4 + 0x412));
            } else {
                var_s0 = ((s64) (var_s4 << 0x20) >> 0x20) << -temp_s3_2;
            }
            var_v0_2 = func_00314330(var_s0);
            if ((s32) var_s0 < 0) {
                var_v0_2 = func_00313E80(var_v0_2, 0x41F << 0x34);
            }
            sp44 = 1;
            var_s3 = temp_s3_2 - 0x433;
            var_s7 = ((u64) (var_v0_2 << 0x20) >> 0x20) | (((var_v0_2 >> 0x20) + 0xFE100000) << 0x20);
        }
        temp_s0_3 = func_00313E80(func_00313F40(func_00313ED8(var_s7, 0x7FF << 0x33), *(s64 *)0x377C88), *(s64 *)0x377C90);
        temp_v0 = func_00313E80(temp_s0_3, func_00313F40(func_00314330(var_s3), *(s64 *)0x377C98));
        sp2C = func_003143E0(temp_v0);
        if (func_003142E0(temp_v0, 0) < 0) {
            sp2C = (func_003142E0(temp_v0, func_00314330(sp2C)) != 0) ? (sp2C - 1) : sp2C;
        }
        sp34 = 1;
        if (sp2C < 0x17U) {
            sp34 = 0;
            sp2C = (func_003142E0((s64) var_s4, *((sp2C * 8) + &D_00377D10)) < 0) ? (sp2C - 1) : sp2C;
        }
        temp_s0_4 = (sp4 - var_s3) - 1;
        if (temp_s0_4 < 0) {
            sp3C = 0;
            sp18 = -temp_s0_4;
        } else {
            sp3C = temp_s0_4;
            sp18 = 0;
        }
        if ((s32) sp2C >= 0) {
            sp1C = 0;
            sp40 = sp2C;
            sp3C += sp2C;
        } else {
            sp40 = 0;
            sp18 -= sp2C;
            sp1C = -(s32) sp2C;
        }
        temp_t7 = (sp8 >= 0xAU) ? 0U : sp8;
        sp8 = temp_t7;
        var_s1 = 1;
        if ((s32) temp_t7 >= 6) {
            var_s1 = 0;
            sp8 -= 4;
        }
        sp28 = -1;
        sp20 = -1;
        sp38 = 1;
        switch (sp8) {
        case 0:
        case 1:
            spC = 0;
            var_s3 = 0x12;
            break;
        case 2:
            sp38 = 0;
            /* fallthrough */
        case 4:
            var_s3 = (u32) ((spC > 0) ? spC : 1);
            spC = var_s3;
            sp28 = var_s3;
            sp20 = var_s3;
            break;
        case 3:
            sp38 = 0;
            /* fallthrough */
        case 5:
            temp_t7_2 = spC + sp2C;
            temp_s3_3 = temp_t7_2 + 1;
            sp28 = temp_t7_2;
            sp20 = temp_s3_3;
            var_s3 = (u32) ((temp_s3_3 <= 0) ? 1 : temp_s3_3);
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        var_s0_2 = 4;
        if (var_s3 >= 0x18U) {
            var_t5 = 0;
            do {
                var_s0_2 *= 2;
                var_t5 += 1;
            } while (var_s3 >= (u32) (var_s0_2 + 0x14));
            M2C_FIELD(arg0, s32 *, 0x44) = var_t5;
        }
        temp_v0_2 = func_00303B70(arg0, M2C_FIELD(arg0, s32 *, 0x44));
        sp54 = temp_v0_2;
        M2C_FIELD(arg0, s8 **, 0x40) = temp_v0_2;
        var_s6_2 = sp54;
        if (((u32) sp20 < 0xFU) && (var_s1 != 0)) {
            temp_s7_2 = var_s4;
            sp24 = sp20;
            var_s3_2 = 2;
            sp30 = sp2C;
            if ((s32) sp2C > 0) {
                var_s0_3 = (s32) sp2C >> 4;
                var_s1_2 = *(((sp2C & 0xF) * 8) + &D_00377D10);
                if (var_s0_3 & 0x10) {
                    var_s0_3 &= 0xF;
                    var_s3_2 = 3;
                    var_s4 = func_00314190((s64) var_s4, *(s64 *)0x377DF8);
                }
                if (var_s0_3 != 0) {
                    var_s2 = var_s0_3;
                    var_s0_4 = &D_00377DD8;
                    do {
                        if (var_s2 & 1) {
                            var_s3_2 += 1;
                            var_s1_2 = func_00313F40(var_s1_2, *var_s0_4);
                        }
                        var_s2 = var_s2 >> 1;
                        var_s0_4 += 8;
                    } while (var_s2 != 0);
                }
                var_s4 = func_00314190((s64) var_s4, var_s1_2);
            } else {
                temp_s2 = -(s32) sp2C;
                if (temp_s2 != 0) {
                    temp_s0_5 = temp_s2 >> 4;
                    var_s4 = func_00313F40(*(((temp_s2 & 0xF) * 8) + &D_00377D10), (s64) var_s4);
                    if (temp_s0_5 != 0) {
                        var_s2_2 = temp_s0_5;
                        var_s0_5 = &D_00377DD8;
                        do {
                            if (var_s2_2 & 1) {
                                var_s3_2 += 1;
                                var_s4 = func_00313F40(*var_s0_5, (s64) var_s4);
                            }
                            var_s2_2 = var_s2_2 >> 1;
                            var_s0_5 += 8;
                        } while (var_s2_2 != 0);
                    }
                }
            }
            if ((sp34 != 0) && (func_003142E0((s64) var_s4, 0x3FF << 0x34) < 0) && (sp20 > 0)) {
                if (sp28 > 0) {
                    sp20 = sp28;
                    var_s3_2 += 1;
                    var_s4 = func_00313F40(0x1009 << 0x32, (s64) var_s4);
                    sp2C -= 1;
                    goto block_54;
                }
                goto block_57;
            }
block_54:
            temp_v0_3 = func_00313E80(func_00313F40(func_00314330(var_s3_2), (s64) var_s4), 0x1007 << 0x32);
            temp_s2_2 = ((u64) (temp_v0_3 << 0x20) >> 0x20) | (((temp_v0_3 >> 0x20) + 0xFCC00000) << 0x20);
            if (sp20 == 0) {
                sp4C = NULL;
                temp_v0_4 = func_00313ED8((s64) var_s4, 0x1005 << 0x32);
                sp50 = NULL;
                if (func_003142E0(temp_s2_2, temp_v0_4) >= 0) {
                    if (func_003142E0(temp_v0_4, func_00313ED8(0, temp_s2_2)) >= 0) {
                        goto block_57;
                    }
                    goto block_80;
                }
                goto block_68;
            }
            if (sp38 != 0) {
                var_s3_3 = 0;
                var_s2_3 = func_00313ED8(func_00314190(0x1FF << 0x35, M2C_FIELD(((sp20 * 8) + &D_00377D10), s64 *, -8)), temp_s2_2);
loop_204:
                temp_v0_5 = func_003143E0((s64) var_s4);
                temp_v0_6 = func_00313ED8((s64) var_s4, func_00314330(temp_v0_5));
                temp_s1 = temp_v0_6;
                *var_s6_2 = temp_v0_5 + 0x30;
                var_s6_2 += 1;
                if (func_003142E0(temp_v0_6, var_s2_3) >= 0) {
                    if (func_003142E0(func_00313ED8(0x3FF << 0x34, temp_s1), var_s2_3) >= 0) {
                        var_s3_3 += 1;
                        if (var_s3_3 < sp20) {
                            var_s2_3 = func_00313F40(0x1009 << 0x32, var_s2_3);
                            var_s4 = func_00313F40(0x1009 << 0x32, temp_s1);
                            goto loop_204;
                        }
                        goto block_57;
                    }
                    goto block_86;
                }
            } else {
                var_s3_4 = 1;
                temp_s2_3 = func_00313F40(M2C_FIELD(((sp20 * 8) + &D_00377D10), s64 *, -8), temp_s2_2);
loop_209:
                temp_v0_7 = func_003143E0((s64) var_s4);
                temp_v0_8 = func_00313ED8((s64) var_s4, func_00314330(temp_v0_7));
                temp_s1_2 = temp_v0_8;
                *var_s6_2 = temp_v0_7 + 0x30;
                var_s6_2 += 1;
                if (var_s3_4 != sp20) {
                    var_s3_4 += 1;
                    var_s4 = func_00313F40(0x1009 << 0x32, temp_v0_8);
                    goto loop_209;
                }
                temp_s0_6 = 0x1FF << 0x35;
                if (func_003142E0(func_00313E80(temp_s0_6, temp_s2_3), temp_s1_2) >= 0) {
                    if (func_003142E0(temp_s1_2, func_00313ED8(temp_s0_6, temp_s2_3)) < 0) {
                        do {
                            var_s6_2 -= 1;
                        } while (*var_s6_2 == 0x30);
                        var_s6_2 += 1;
                    } else {
block_57:
                        var_s4 = temp_s7_2;
                        sp2C = sp30;
                        sp20 = sp24;
                        var_s6_2 = sp54;
                        goto block_58;
                    }
                } else {
                    goto block_86;
                }
            }
        } else {
block_58:
            if ((sp0 >= 0) && ((s32) sp2C < 0xF)) {
                temp_s1_3 = *((sp2C * 8) + &D_00377D10);
                if ((s32) spC >= 0) {
                    var_s3_5 = 1;
                    goto block_81;
                }
                if (sp20 > 0) {
                    var_s3_5 = 1;
block_81:
loop_82:
                    temp_v0_9 = func_003143E0(func_00314190((s64) var_s4, temp_s1_3));
                    temp_v0_10 = func_00313ED8((s64) var_s4, func_00313F40(func_00314330(temp_v0_9), temp_s1_3));
                    *var_s6_2 = temp_v0_9 + 0x30;
                    var_s6_2 += 1;
                    if (var_s3_5 == sp20) {
                        temp_v0_11 = func_00313E80(temp_v0_10, temp_v0_10);
                        if (func_003142E0(temp_s1_3, temp_v0_11) >= 0) {
                            if (func_003142E0(temp_s1_3, temp_v0_11) == 0) {
                                if (temp_v0_9 & 1) {
                                    goto block_86;
                                }
                            }
                        } else {
block_86:
                            var_s6_3 = var_s6_2 - 1;
                            temp_t5_5 = (u8) *var_s6_3;
                            var_t7 = temp_t5_5 + 1;
                            if ((s8) temp_t5_5 == 0x39) {
loop_88:
                                if (var_s6_3 != sp54) {
                                    var_s6_3 -= 1;
                                    var_t5_2 = (u8) *var_s6_3;
                                    if ((s8) var_t5_2 == 0x39) {
                                        goto loop_88;
                                    }
                                } else {
                                    sp2C += 1;
                                    *sp54 = 0x30;
                                    var_t5_2 = 0x30;
                                }
                                var_t7 = var_t5_2 + 1;
                            }
                            *var_s6_3 = var_t7;
                            var_s6_2 = var_s6_3 + 1;
                        }
                    } else {
                        var_s3_5 += 1;
                        temp_v0_12 = func_00313F40(0x1009 << 0x32, temp_v0_10);
                        var_s4 = temp_v0_12;
                        if (func_003142E0((s64) temp_v0_12, 0) == 0) {

                        } else {
                            goto loop_82;
                        }
                    }
                } else {
                    sp4C = NULL;
                    sp50 = NULL;
                    if (sp20 >= 0) {
                        if (func_003142E0((s64) var_s4, func_00313F40(temp_s1_3, 0x1005 << 0x32)) > 0) {
block_68:
                            goto block_69;
                        }
                        goto block_80;
                    }
                    goto block_79;
                    goto block_70;
                }
            } else {
                var_s1_3 = sp18;
                var_s2_4 = sp1C;
                sp48 = NULL;
                sp4C = NULL;
                temp_s7_3 = (s32) sp8 < 2;
                if (sp38 != 0) {
                    if (temp_s7_3 != 0) {
                        var_s3_6 = sp0 + 0x433;
                        if (sp44 == 0) {
                            var_s3_6 = 0x36 - sp4;
                        }
                    } else {
                        temp_s0_7 = sp20 - 1;
                        var_s2_4 = sp1C - temp_s0_7;
                        if (sp1C < temp_s0_7) {
                            temp_s0_8 = temp_s0_7 - sp1C;
                            var_s2_4 = 0;
                            sp1C += temp_s0_8;
                            sp40 += temp_s0_8;
                        }
                        var_s3_6 = sp20;
                        if (var_s3_6 < 0) {
                            var_s1_3 = sp18 - var_s3_6;
                            var_s3_6 = 0;
                        }
                    }
                    sp3C += var_s3_6;
                    sp4C = func_00303FC0(arg0, 1);
                    sp18 += var_s3_6;
                }
                if ((var_s1_3 > 0) && (sp3C > 0)) {
                    temp_s3_4 = (var_s1_3 < sp3C) ? var_s1_3 : sp3C;
                    sp3C -= temp_s3_4;
                    var_s1_3 -= temp_s3_4;
                    sp18 -= temp_s3_4;
                }
                if (sp1C > 0) {
                    var_a2 = sp1C;
                    if (sp38 != 0) {
                        if (var_s2_4 > 0) {
                            sp4C = func_00304200(arg0, sp4C, var_s2_4);
                            temp_a1 = var_fp;
                            var_fp = func_00303FF8(arg0, sp4C, var_fp);
                            func_00303C18(arg0, temp_a1);
                        }
                        temp_s0_9 = sp1C - var_s2_4;
                        var_a1 = var_fp;
                        if (temp_s0_9 != 0) {
                            var_a2 = temp_s0_9;
                            goto block_111;
                        }
                    } else {
                        var_a1 = var_fp;
block_111:
                        var_fp = func_00304200(arg0, var_a1, var_a2);
                    }
                }
                sp50 = func_00303FC0(arg0, 1);
                if ((s32) sp40 > 0) {
                    sp50 = func_00304200(arg0, sp50, (s32) sp40);
                }
                var_s0_6 = 0;
                if (temp_s7_3 != 0) {
                    if (!(var_s4 & (-0x1000U >> 0xC))) {
                        if (((s64) var_s4 >> 0x20) & 0x7FF00000) {
                            var_s0_6 = 1;
                            sp18 += 1;
                            sp3C += 1;
                        }
                    }
                }
                if (sp40 != 0) {
                    var_s3_7 = (sp3C - func_00303E80(M2C_FIELD(((M2C_FIELD(sp50, s32 *, 0x10) * 4) + sp50), s32 *, 0x10))) & 0x1F;
                } else {
                    var_s3_7 = (sp3C + 1) & 0x1F;
                }
                if (var_s3_7 != 0) {
                    var_s3_7 = 0x20 - var_s3_7;
                }
                if (var_s3_7 >= 5) {
                    var_s3_8 = var_s3_7 - 4;
                    sp3C += var_s3_8;
                    sp18 += var_s3_8;
                    goto block_125;
                }
                if (var_s3_7 < 4) {
                    var_s3_8 = var_s3_7 + 0x1C;
                    sp3C += var_s3_8;
                    sp18 += var_s3_8;
block_125:
                    var_s1_3 += var_s3_8;
                }
                if (sp18 > 0) {
                    var_fp = func_00304308(arg0, var_fp, sp18);
                }
                if (sp3C > 0) {
                    sp50 = func_00304308(arg0, sp50, sp3C);
                }
                if (sp34 != 0) {
                    if (func_00304468(var_fp, sp50) < 0) {
                        var_fp = func_00303C48(arg0, var_fp, 0xA, 0);
                        sp2C -= 1;
                        if (sp38 != 0) {
                            sp4C = func_00303C48(arg0, sp4C, 0xA, 0);
                        }
                        sp20 = sp28;
                    }
                }
                if ((sp20 <= 0) && ((s32) sp8 >= 3)) {
                    if (sp20 >= 0) {
                        sp50 = func_00303C48(arg0, sp50, 5, 0);
                        if (func_00304468(var_fp, sp50) <= 0) {
                            goto block_79;
                        }
block_69:
                        *sp54 = 0x31;
                        var_s6_2 = sp54 + 1;
                        sp2C += 1;
                    } else {
block_79:
block_80:
                        sp2C = ~spC;
                    }
                } else {
                    var_s3_9 = 1;
                    if (sp38 != 0) {
                        if (var_s1_3 > 0) {
                            sp4C = func_00304308(arg0, sp4C, var_s1_3);
                        }
                        sp48 = sp4C;
                        if (var_s0_6 != 0) {
                            temp_v0_13 = func_00303B70(arg0, M2C_FIELD(sp4C, s32 *, 4));
                            sp4C = temp_v0_13;
                            func_002FDD68(temp_v0_13 + 0xC, sp48 + 0xC, (M2C_FIELD(sp48, s32 *, 0x10) * 4) + 8);
                            sp4C = func_00304308(arg0, sp4C, 1);
                        }
                        var_s3_10 = 1;
                        temp_s7_4 = ((s64) (var_s4 << 0x20) >> 0x20) & 1;
                        sp58 = temp_s7_4;
loop_148:
                        var_s4_2 = func_00301708(var_fp, sp50) + 0x30;
                        temp_s0_10 = func_00304468(var_fp, sp48);
                        temp_v0_14 = func_003044D0(arg0, sp50, sp4C);
                        if (M2C_FIELD(temp_v0_14, s32 *, 0xC) == 0) {
                            var_s2_5 = func_00304468(var_fp, temp_v0_14);
                        } else {
                            var_s2_5 = 1;
                        }
                        func_00303C18(arg0, temp_v0_14);
                        if ((var_s2_5 == 0) && (sp8 == 0) && (temp_s7_4 == 0)) {
                            if (var_s4_2 != 0x39) {
                                var_s4_2 += var_s2_5 < temp_s0_10;
                                goto block_155;
                            }
                            goto block_157;
                        }
                        if ((temp_s0_10 < 0) || ((temp_s0_10 == 0) && (sp8 == 0) && (sp58 == 0))) {
                            if ((var_s2_5 > 0) && ((temp_v0_15 = func_00304308(arg0, var_fp, 1), var_fp = temp_v0_15, temp_v0_16 = func_00304468(temp_v0_15, sp50), (temp_v0_16 > 0)) || ((temp_v0_16 == 0) && (var_s4_2 & 1)))) {
                                var_s4_2 += 1;
                                if (var_s4_2 != 0x3A) {
                                    goto block_155;
                                }
                                goto block_158;
                            }
block_155:
                            *var_s6_2 = var_s4_2;
                            goto block_156;
                        }
                        if (var_s2_5 > 0) {
                            if (var_s4_2 != 0x39) {
                                *var_s6_2 = var_s4_2 + 1;
                                goto block_156;
                            }
block_157:
block_158:
                            *var_s6_2 = 0x39;
                            var_s6_2 += 1;
                            goto block_159;
                        }
                        *var_s6_2 = var_s4_2;
                        var_s6_2 += 1;
                        if (var_s3_10 != sp20) {
                            var_fp = func_00303C48(arg0, var_fp, 0xA, 0);
                            if (sp48 == sp4C) {
                                temp_v0_17 = func_00303C48(arg0, sp4C, 0xA, 0);
                                sp4C = temp_v0_17;
                                sp48 = temp_v0_17;
                            } else {
                                sp48 = func_00303C48(arg0, sp48, 0xA, 0);
                                sp4C = func_00303C48(arg0, sp4C, 0xA, 0);
                            }
                            var_s3_10 += 1;
                            goto loop_148;
                        }
                        goto block_184;
                    }
loop_192:
                    var_s4_2 = func_00301708(var_fp, sp50) + 0x30;
                    *var_s6_2 = var_s4_2;
                    var_s6_2 += 1;
                    if (var_s3_9 < sp20) {
                        var_s3_9 += 1;
                        var_fp = func_00303C48(arg0, var_fp, 0xA, 0);
                        goto loop_192;
                    }
block_184:
                    temp_v0_18 = func_00304308(arg0, var_fp, 1);
                    var_fp = temp_v0_18;
                    temp_v0_19 = func_00304468(temp_v0_18, sp50);
                    if (temp_v0_19 <= 0) {
                        if (temp_v0_19 == 0) {
                            if (!(var_s4_2 & 1)) {
                                goto loop_188;
                            }
                            goto block_159;
                        }
                        do {
loop_188:
                            var_s6_2 -= 1;
                        } while (*var_s6_2 == 0x30);
                        var_s6_2 += 1;
                    } else {
block_159:
                        var_s6_2 -= 1;
                        temp_t5_6 = (u8) *var_s6_2;
                        var_t7_2 = temp_t5_6 + 1;
                        if ((s8) temp_t5_6 == 0x39) {
loop_161:
                            if (var_s6_2 != sp54) {
                                var_s6_2 -= 1;
                                temp_t5_7 = (u8) *var_s6_2;
                                if ((s8) temp_t5_7 != 0x39) {
                                    var_t7_2 = temp_t5_7 + 1;
                                    goto block_164;
                                }
                                goto loop_161;
                            }
                            sp2C += 1;
                            var_s6_2 = sp54 + 1;
                            *sp54 = 0x31;
                        } else {
block_164:
                            *var_s6_2 = var_t7_2;
block_156:
                            var_s6_2 += 1;
                        }
                    }
                }
block_70:
                func_00303C18(arg0, sp50);
                if (sp4C != NULL) {
                    if ((sp48 != NULL) && (sp48 != sp4C)) {
                        func_00303C18(arg0, sp48);
                    }
                    func_00303C18(arg0, sp4C);
                }
            }
        }
        func_00303C18(arg0, var_fp);
        *var_s6_2 = 0;
        *sp10 = sp2C + 1;
        if (sp14 != NULL) {
            *sp14 = var_s6_2;
        }
        var_v0 = sp54;
    }
    return var_v0;
}
