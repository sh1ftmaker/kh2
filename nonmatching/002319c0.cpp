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
static AnyCell sp60;
static AnyCell spC;
static AnyCell unksp4;
static AnyCell unksp8;
// m2c valid-syntax output for 0x002319c0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002319C0 {
    /* 0x00 */ s128 sp0;                            /* inferred */
    /* 0x0C */ f32 spC;                             /* overlap; inferred */
    /* 0x10 */ f32 sp10;                            /* inferred */
    /* 0x14 */ f32 sp14;                            /* inferred */
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ M2C_UNK sp20;                        /* inferred */
    /* 0x20 */ char pad20[0x40];
    /* 0x60 */ s128 sp60;                           /* inferred */
    /* 0x70 */ char pad70[0x60];
};                                                  /* size = 0xD0 */

void *func_00106A18(M2C_UNK = 0) asm("func_00106A18");
s32 func_00106A60(M2C_UNK = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_00106A60");
f32 func_00106F30(void * = 0, M2C_UNK = 0) asm("func_00106F30");
f32 func_00106F40(void * = 0, f32 = 0) asm("func_00106F40");
M2C_UNK func_00107368(s32 = 0, f32 * = 0) asm("func_00107368");
M2C_UNK func_00107478(s32 = 0, void * = 0) asm("func_00107478");
f32 func_001074B8(s32 = 0) asm("func_001074B8");
M2C_UNK func_00140F78(f32 * = 0, void * = 0) asm("func_00140F78");
f32 func_00141070() asm("func_00141070");
void *func_0016B0D0() asm("func_0016B0D0");
extern M2C_UNK D_0035DE90 asm("D_0035DE90");
extern f32 D_FLT_003712B8 asm("D_003712B8");
extern f32 D_FLT_003712BC asm("D_003712BC");
extern f32 D_FLT_003712C0 asm("D_003712C0");
extern f32 D_FLT_003712C4 asm("D_003712C4");
void func_002319C0(s32 arg0 = 0, ...) asm("_ZN2sa5EVENT22set_objcamera_event_inEi");
void func_002319c0_impl(s32 arg0) asm("_ZN2sa5EVENT22set_objcamera_event_inEi");
void func_002319c0_impl(s32 arg0) {
    s128 sp0;
    f32 spC;
    f32 sp10;
    f32 sp1C;
    M2C_UNK sp20;
    s128 sp60;
    M2C_UNK *var_a3;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_ft1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s4;
    s32 temp_t4;
    s32 temp_v0_3;
    s32 var_a0;
    void *temp_a3_2;
    void *temp_s7;
    void *temp_t4_2;
    void *temp_t7;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;

    func_00140F78(&sp10, sp);
    temp_s7 = func_00106A18(1);
    temp_fs0 = func_00106F40(temp_s7, func_00141070()) * D_FLT_003712BC;
    spC = D_FLT_003712B8;
    sp1C = D_FLT_003712B8;
    temp_v0 = func_0016B0D0();
    temp_v0_2 = temp_v0 + 0x40;
    M2C_FIELD(&sp20, s128 *, 0) = (s128) M2C_FIELD(temp_v0, s128 *, 0x40);
    M2C_FIELD(&sp20, s128 *, 0x10) = (s128) M2C_FIELD(temp_v0_2, s128 *, 0x10);
    M2C_FIELD(&sp20, s128 *, 0x20) = (s128) M2C_FIELD(temp_v0_2, s128 *, 0x20);
    M2C_FIELD(&sp20, s128 *, 0x30) = (s128) M2C_FIELD(temp_v0_2, s128 *, 0x30);
    M2C_ERROR(/* unknown instruction: qmfc2.ni $t3, $vf0 */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a3) */);
    M2C_ERROR(/* unknown instruction: pextlw $t4, $t1, $t0 */);
    M2C_ERROR(/* unknown instruction: pextuw $t5, $t1, $t0 */);
    M2C_ERROR(/* unknown instruction: pextlw $t6, $t3, $t2 */);
    M2C_ERROR(/* unknown instruction: pextuw $t7, $t3, $t2 */);
    M2C_ERROR(/* unknown instruction: pcpyld $t0, $t6, $t4 */);
    M2C_ERROR(/* unknown instruction: pcpyud $t1, $t4, $t6 */);
    M2C_ERROR(/* unknown instruction: pcpyld $t2, $t7, $t5 */);
    M2C_ERROR(/* unknown instruction: vmulax.xyz $acc, $vf1, $vf4x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyz $acc, $vf2, $vf4y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf4, $vf3, $vf4z */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf4, $vf0, $vf4 */);
    M2C_FIELD(&sp20, s128 *, 0) = (s128) M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf1 */);
    M2C_FIELD(&sp20, s128 *, 0x10) = (s128) M2C_ERROR(/* unknown instruction: qmtc2.ni $t1, $vf2 */);
    M2C_FIELD(&sp20, s128 *, 0x20) = (s128) M2C_ERROR(/* unknown instruction: qmtc2.ni $t2, $vf3 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($t7) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t6) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($t6) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($t6) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($t6) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw $acc, $vf1, $vf5x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw $acc, $vf2, $vf5y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw $acc, $vf3, $vf5z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf5, $vf4, $vf5w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($fp) */);
    if (&sp10 != &sp60) {
        sp10 = (s128) sp60;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($sp) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t6) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($t6) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($t6) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($t6) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw $acc, $vf1, $vf5x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw $acc, $vf2, $vf5y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw $acc, $vf3, $vf5z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf5, $vf4, $vf5w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($fp) */);
    if (sp != &sp60) {
        sp0 = sp60;
    }
    var_a3 = &D_0035DE90;
    var_a0 = 1;
    do {
        var_a0 -= 1;
        M2C_FIELD(var_a3, f32 *, 0xE8) = 0.0f;
        M2C_FIELD(var_a3, f32 *, 0xC8) = 0.0f;
        M2C_FIELD(var_a3, f32 *, 0xA8) = 0.0f;
        M2C_FIELD(var_a3, s32 *, 0xE0) = (s32) ((M2C_FIELD(var_a3, s32 *, 0xE0) & 0x1FFFFFFF) | 0x40000000);
        M2C_FIELD(var_a3, s32 *, 0xC0) = (s32) ((M2C_FIELD(var_a3, s32 *, 0xC0) & 0x1FFFFFFF) | 0x40000000);
        M2C_FIELD(var_a3, s32 *, 0xA0) = (s32) ((M2C_FIELD(var_a3, s32 *, 0xA0) & 0x1FFFFFFF) | 0x40000000);
        M2C_FIELD(var_a3, s32 *, 0x80) = (s32) ((M2C_FIELD(var_a3, s32 *, 0x80) & 0x1FFFFFFF) | 0x40000000);
        M2C_FIELD(var_a3, s32 *, 0x60) = (s32) ((M2C_FIELD(var_a3, s32 *, 0x60) & 0x1FFFFFFF) | 0x40000000);
        M2C_FIELD(var_a3, s32 *, 0x40) = (s32) ((M2C_FIELD(var_a3, s32 *, 0x40) & 0x1FFFFFFF) | 0x40000000);
        M2C_FIELD(var_a3, s32 *, 0x20) = (s32) ((M2C_FIELD(var_a3, s32 *, 0x20) & 0x1FFFFFFF) | 0x40000000);
        M2C_FIELD(var_a3, s32 *, 0) = (s32) ((M2C_FIELD(var_a3, s32 *, 0) & 0x1FFFFFFF) | 0x40000000);
        M2C_FIELD(var_a3, f32 *, 0x68) = 0.0f;
        M2C_FIELD(var_a3, f32 *, 0x88) = 0.0f;
        M2C_FIELD(var_a3, f32 *, 0x48) = 0.0f;
        M2C_FIELD(var_a3, f32 *, 0x28) = 0.0f;
        M2C_FIELD(var_a3, f32 *, 8) = 0.0f;
        var_a3 += 0x10;
    } while (var_a0 >= 0);
    temp_lo = (s32) (arg0 << 9) / 30;
    M2C_FIELD(&D_0035DE90, f32 *, 0xFC) = 0.0f;
    M2C_FIELD(&D_0035DE90, f32 *, 0xDC) = 0.0f;
    M2C_FIELD(&D_0035DE90, f32 *, 0xBC) = 0.0f;
    M2C_FIELD(&D_0035DE90, f32 *, 0x9C) = 0.0f;
    M2C_FIELD(&D_0035DE90, f32 *, 0x7C) = 0.0f;
    M2C_FIELD(&D_0035DE90, f32 *, 0x5C) = 0.0f;
    M2C_FIELD(&D_0035DE90, f32 *, 0x3C) = 0.0f;
    M2C_FIELD(&D_0035DE90, f32 *, 0x1C) = 0.0f;
    temp_lo_2 = (s32) (*(s32 *)0x35DE28 << 9) / 30;
    temp_t4 = ((s32) (temp_lo * 8) >> 3) & 0x1FFFFFFF;
    M2C_FIELD(&D_0035DE90, s32 *, 0xE0) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0xE0) & 0xE0000000) | (temp_lo & 0x1FFFFFFF));
    M2C_FIELD(&D_0035DE90, s32 *, -0x2170) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, -0x2170) & 0xE0000000) | temp_t4);
    M2C_FIELD(&D_0035DE90, s32 *, 0xA0) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0xA0) & 0xE0000000) | temp_t4);
    M2C_FIELD(&D_0035DE90, s32 *, 0x60) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x60) & 0xE0000000) | temp_t4);
    M2C_FIELD(&D_0035DE90, s32 *, 0x40) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x40) & 0xE0000000) | temp_t4);
    M2C_FIELD(&D_0035DE90, s32 *, 0x20) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x20) & 0xE0000000) | temp_t4);
    M2C_FIELD(&D_0035DE90, s32 *, 0xC0) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0xC0) & 0xE0000000) | temp_t4);
    M2C_FIELD(&D_0035DE90, s32 *, 0x80) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x80) & 0xE0000000) | temp_t4);
    M2C_FIELD(&D_0035DE90, f32 *, 0x14) = sp10;
    M2C_FIELD(&D_0035DE90, f32 *, 0x34) = (f32) -sp14;
    M2C_FIELD(&D_0035DE90, f32 *, 0x54) = (f32) -sp18;
    M2C_FIELD(&D_0035DE90, f32 *, 0x74) = (f32) sp0;
    M2C_FIELD(&D_0035DE90, f32 *, 0x94) = (f32) -unksp4;
    M2C_FIELD(&D_0035DE90, f32 *, 0xB4) = (f32) -unksp8;
    M2C_FIELD(&D_0035DE90, f32 *, 0xD4) = 0.0f;
    M2C_FIELD(&D_0035DE90, f32 *, 0xF4) = temp_fs0;
    temp_a1 = temp_lo_2 & 0x1FFFFFFF;
    temp_s4 = ((s32) (temp_lo_2 * 8) >> 3) & 0x1FFFFFFF;
    temp_a2 = (M2C_FIELD(&D_0035DE90, s32 *, 0xF0) & 0xE0000000) | temp_a1;
    temp_a3 = (M2C_FIELD(&D_0035DE90, s32 *, 0xB0) & 0xE0000000) | temp_s4;
    M2C_FIELD(&D_0035DE90, s32 *, 0xF0) = temp_a2;
    M2C_FIELD(&D_0035DE90, s32 *, 0xD0) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0xD0) & 0xE0000000) | temp_s4);
    M2C_FIELD(&D_0035DE90, s32 *, 0xB0) = temp_a3;
    M2C_FIELD(&D_0035DE90, s32 *, 0x90) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x90) & 0xE0000000) | temp_s4);
    M2C_FIELD(&D_0035DE90, s32 *, 0x70) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x70) & 0xE0000000) | temp_s4);
    M2C_FIELD(&D_0035DE90, s32 *, 0x50) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x50) & 0xE0000000) | temp_s4);
    M2C_FIELD(&D_0035DE90, s32 *, 0x30) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x30) & 0xE0000000) | temp_s4);
    M2C_FIELD(&D_0035DE90, s32 *, 0x10) = (s32) ((M2C_FIELD(&D_0035DE90, s32 *, 0x10) & 0xE0000000) | temp_s4);
    temp_v0_3 = func_00106A60(1, temp_a1, temp_a2, temp_a3);
    func_00107368(temp_v0_3, &sp10);
    func_00107478(temp_v0_3, sp);
    spC = D_FLT_003712B8;
    sp1C = D_FLT_003712B8;
    temp_fs0_2 = func_001074B8(temp_v0_3);
    temp_v0_4 = func_00106A18(1);
    if (temp_s7 != temp_v0_4) {
        M2C_FIELD(temp_s7, s128 *, 0) = (s128) M2C_FIELD(temp_v0_4, s128 *, 0);
        M2C_FIELD(temp_s7, s128 *, 0x10) = (s128) M2C_FIELD(temp_v0_4, s128 *, 0x10);
        M2C_FIELD(temp_s7, s128 *, 0x20) = (s128) M2C_FIELD(temp_v0_4, s128 *, 0x20);
        M2C_FIELD(temp_s7, s128 *, 0x30) = (s128) M2C_FIELD(temp_v0_4, s128 *, 0x30);
    }
    temp_a3_2 = temp_s7 + 0x80;
    temp_t4_2 = temp_v0_4 + 0x80;
    M2C_FIELD(temp_s7, s32 *, 0x4C) = (s32) M2C_FIELD(temp_v0_4, s32 *, 0x4C);
    M2C_FIELD(temp_s7, s32 *, 0x44) = (s32) M2C_FIELD(temp_v0_4, s32 *, 0x44);
    M2C_FIELD(temp_s7, s32 *, 0x50) = (s32) M2C_FIELD(temp_v0_4, s32 *, 0x50);
    M2C_FIELD(temp_s7, s64 *, 0x58) = (s64) M2C_FIELD(temp_v0_4, s64 *, 0x58);
    M2C_FIELD(temp_s7, f32 *, 0x40) = (f32) M2C_FIELD(temp_v0_4, f32 *, 0x40);
    M2C_FIELD(temp_s7, s32 *, 0x48) = (s32) M2C_FIELD(temp_v0_4, s32 *, 0x48);
    M2C_FIELD(temp_s7, s32 *, 0x54) = (s32) M2C_FIELD(temp_v0_4, s32 *, 0x54);
    M2C_FIELD(temp_s7, s32 *, 0x60) = (s32) M2C_FIELD(temp_v0_4, s32 *, 0x60);
    M2C_FIELD(temp_s7, f32 *, 0x64) = (f32) M2C_FIELD(temp_v0_4, f32 *, 0x64);
    M2C_FIELD(temp_s7, f32 *, 0x68) = (f32) M2C_FIELD(temp_v0_4, f32 *, 0x68);
    M2C_FIELD(temp_s7, f32 *, 0x6C) = (f32) M2C_FIELD(temp_v0_4, f32 *, 0x6C);
    M2C_FIELD(temp_s7, f32 *, 0x70) = (f32) M2C_FIELD(temp_v0_4, f32 *, 0x70);
    M2C_FIELD(temp_s7, f32 *, 0x74) = (f32) M2C_FIELD(temp_v0_4, f32 *, 0x74);
    M2C_FIELD(temp_s7, f32 *, 0x78) = (f32) M2C_FIELD(temp_v0_4, f32 *, 0x78);
    if (temp_a3_2 != temp_t4_2) {
        M2C_FIELD(temp_s7, s128 *, 0x80) = (s128) M2C_FIELD(temp_v0_4, s128 *, 0x80);
        M2C_FIELD(temp_a3_2, s128 *, 0x10) = (s128) M2C_FIELD(temp_t4_2, s128 *, 0x10);
        M2C_FIELD(temp_a3_2, s128 *, 0x20) = (s128) M2C_FIELD(temp_t4_2, s128 *, 0x20);
        M2C_FIELD(temp_a3_2, s128 *, 0x30) = (s128) M2C_FIELD(temp_t4_2, s128 *, 0x30);
    }
    temp_v0_5 = temp_v0_4 + 0xC0;
    temp_t7 = temp_s7 + 0xC0;
    if (temp_t7 != temp_v0_5) {
        M2C_FIELD(temp_s7, s128 *, 0xC0) = (s128) M2C_FIELD(temp_v0_4, s128 *, 0xC0);
        M2C_FIELD(temp_t7, s128 *, 0x10) = (s128) M2C_FIELD(temp_v0_5, s128 *, 0x10);
        M2C_FIELD(temp_t7, s128 *, 0x20) = (s128) M2C_FIELD(temp_v0_5, s128 *, 0x20);
        M2C_FIELD(temp_t7, s128 *, 0x30) = (s128) M2C_FIELD(temp_v0_5, s128 *, 0x30);
    }
    temp_ft1 = func_00106F40(temp_s7, func_00106F30(temp_s7, 0)) * D_FLT_003712BC;
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t7) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($t7) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($t7) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($t7) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw $acc, $vf1, $vf5x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw $acc, $vf2, $vf5y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw $acc, $vf3, $vf5z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf5, $vf4, $vf5w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($fp) */);
    if (&sp10 != &sp60) {
        sp10 = (s128) sp60;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($sp) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a3) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw $acc, $vf1, $vf5x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw $acc, $vf2, $vf5y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw $acc, $vf3, $vf5z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf5, $vf4, $vf5w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($fp) */);
    if (sp != &sp60) {
        sp0 = sp60;
    }
    M2C_FIELD(&D_0035DE90, f32 *, 0xE4) = temp_ft1;
    M2C_FIELD(&D_0035DE90, f32 *, 0x24) = (f32) -sp14;
    M2C_FIELD(&D_0035DE90, f32 *, 0x44) = (f32) -sp18;
    M2C_FIELD(&D_0035DE90, f32 *, 0x84) = (f32) -unksp4;
    M2C_FIELD(&D_0035DE90, f32 *, 0xA4) = (f32) -unksp8;
    M2C_FIELD(&D_0035DE90, f32 *, 4) = sp10;
    M2C_FIELD(&D_0035DE90, f32 *, 0xC4) = (f32) ((temp_fs0_2 * D_FLT_003712C0) / D_FLT_003712C4);
    M2C_FIELD(&D_0035DE90, f32 *, 0x64) = (f32) sp0;
}
