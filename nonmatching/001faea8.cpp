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
static AnyCell sp4;
static AnyCell sp8;
static AnyCell spA0;
static AnyCell spA4;
// m2c valid-syntax output for 0x001faea8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001FAEA8 {
    /* 0x000 */ s32 sp0;                            /* inferred */
    /* 0x004 */ s32 sp4;                            /* inferred */
    /* 0x008 */ s32 sp8;                            /* inferred */
    /* 0x00C */ char padC[4];
    /* 0x010 */ s32 sp10;                           /* inferred */
    /* 0x014 */ s32 sp14;                           /* inferred */
    /* 0x018 */ s32 sp18;                           /* inferred */
    /* 0x01C */ s32 sp1C;                           /* inferred */
    /* 0x020 */ s32 sp20;                           /* inferred */
    /* 0x024 */ s32 sp24;                           /* inferred */
    /* 0x028 */ s32 sp28;                           /* inferred */
    /* 0x02C */ s32 sp2C;                           /* inferred */
    /* 0x030 */ M2C_UNK sp30;                       /* inferred */
    /* 0x030 */ char pad30[0x70];
    /* 0x0A0 */ s32 spA0;                           /* inferred */
    /* 0x0A4 */ s32 spA4;                           /* inferred */
    /* 0x0A8 */ char padA8[0x68];
};                                                  /* size = 0x110 */

s32 func_0020EAF8(M2C_UNK = 0) asm("func_0020EAF8");
M2C_UNK func_0020EBD8(M2C_UNK = 0) asm("func_0020EBD8");
M2C_UNK func_002F25A0(M2C_UNK = 0, M2C_UNK = 0) asm("func_002F25A0");
M2C_UNK func_002F2AA0(M2C_UNK * = 0, s32 = 0, s16 = 0, M2C_UNK = 0) asm("func_002F2AA0");
M2C_UNK func_002F2D60(M2C_UNK * = 0, void * = 0) asm("func_002F2D60");
M2C_UNK func_002F3FC0(void * = 0, void * = 0, s128 = 0) asm("func_002F3FC0");
M2C_UNK func_003058A0(M2C_UNK = 0) asm("func_003058A0");
extern M2C_UNK D_01DA8AD0 asm("D_01DA8AD0");
extern f32 D_FLT_0037025C asm("D_0037025C");
void func_001FAEA8(void *arg0 = 0, s32 arg2 = 0, ...) asm("func_001faea8");
void func_001faea8_impl(void *arg0, s32 arg2) asm("func_001faea8");
void func_001faea8_impl(void *arg0, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    M2C_UNK sp30;
    s32 spA0;
    s32 spA4;
    f32 temp_fs0;
    f32 temp_fv0f;
    f32 var_fs0;
    s128 temp_a3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    s32 var_s0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    s64 temp_s6;
    s64 temp_s7;
    u8 temp_t3;
    void *var_s1;

    M2C_FIELD(&D_01DA8AD0, s128 *, -0x7530) = (s128) M2C_ERROR(/* unknown instruction: pcpyld $t3, $zero, $t3 */);
    *(s128 *)0x01DA8B10 = M2C_ERROR(/* unknown instruction: por $t3, $zero, $zero */);
    temp_a3 = M2C_ERROR(/* unknown instruction: pcpyld $a3, $zero, $a3 */);
    *(s128 *)0x01DA8B20 = M2C_ERROR(/* unknown instruction: pcpyld $t1, $zero, $t1 */);
    *(s128 *)0x01DA8AE0 = M2C_ERROR(/* unknown instruction: pcpyld $t2, $zero, $t2 */);
    *(s128 *)0x01DA8B40 = M2C_ERROR(/* unknown instruction: pcpyld $t5, $zero, $t5 */);
    *(s128 *)0x01DA8AF0 = M2C_ERROR(/* unknown instruction: pcpyld $t0, $zero, $t0 */);
    *(s128 *)0x01DA8B00 = temp_a3;
    *(s128 *)0x01DA8B30 = M2C_ERROR(/* unknown instruction: pcpyld $t4, $zero, $t4 */);
    M2C_FIELD(&D_01DA8AD0, s64 *, 0x38) = 0x40;
    M2C_FIELD(&D_01DA8AD0, s64 *, 8) = 0x4C;
    M2C_FIELD(&D_01DA8AD0, s64 *, 0x58) = 0x46;
    M2C_FIELD(&D_01DA8AD0, s64 *, 0x18) = 0x4E;
    M2C_FIELD(&D_01DA8AD0, s64 *, 0x28) = 0x18;
    M2C_FIELD(&D_01DA8AD0, s64 *, 0x48) = 0x1A;
    M2C_FIELD(&D_01DA8AD0, s64 *, 0x68) = 0x45;
    M2C_FIELD(&D_01DA8AD0, s64 *, 0x78) = 0x47;
    temp_fv0f = M2C_FIELD(arg0, f32 *, 0x7C);
    if (temp_fv0f != 0.0f) {
        temp_s0 = M2C_FIELD(arg0, u8 *, 0x8D) + 1;
        if (((s32) M2C_FIELD(arg0, u8 *, 0x8C) % temp_s0) != (arg2 % temp_s0)) {
            M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (temp_fv0f * M2C_FIELD(arg0, f32 *, 0xAC));
        } else {
            temp_s6 = (s64) ((s64) M2C_FIELD(&D_01DA8AD0, u16 *, 0x20) << 0x20) >> 0x20;
            temp_s7 = (s64) ((s64) M2C_FIELD(&D_01DA8AD0, u16 *, 0x24) << 0x20) >> 0x20;
            sp20 = temp_s6 + (((s64) ((M2C_FIELD(&D_01DA8AD0, u64 *, 0x30) & 0x7FF) << 0x20) >> 0x20) * 0x10);
            sp24 = temp_s7 + (((s64) ((((u64) M2C_FIELD(&D_01DA8AD0, u64 *, 0x30) >> 0x20) & 0x7FF) << 0x20) >> 0x20) * 0x10);
            sp28 = temp_s6 + ((((s64) ((((u64) M2C_FIELD(&D_01DA8AD0, u64 *, 0x30) >> 0x10) & 0x7FF) << 0x20) >> 0x20) + 1) * 0x10);
            sp2C = temp_s7 + ((((s64) ((((u64) M2C_FIELD(&D_01DA8AD0, u64 *, 0x30) >> 0x30) & 0x7FF) << 0x20) >> 0x20) + 1) * 0x10);
            func_002F3FC0(sp, arg0 + 0xB0, temp_a3);
            temp_t3 = M2C_FIELD(arg0, u8 *, 0xC0);
            spA0 = (s32) temp_t3;
            temp_t7 = temp_t3 * 8;
            spA4 = (s32) M2C_FIELD(arg0, u8 *, 0xC1);
            temp_t6 = spA4 * 8;
            sp18 = sp0 + temp_t7;
            temp_t5 = sp0 - temp_t7;
            sp14 = sp4 - temp_t6;
            sp1C = sp4 + temp_t6;
            sp10 = temp_t5;
            if (temp_t5 < sp20) {
                sp10 = sp20;
            } else {
                sp10 = (sp28 < temp_t5) ? sp28 : temp_t5;
            }
            var_t3 = sp14;
            if (var_t3 < sp24) {
                var_t3 = sp24;
                goto block_8;
            }
            var_t1 = sp18;
            if (sp2C < var_t3) {
                var_t3 = sp2C;
block_8:
                sp14 = var_t3;
                var_t1 = sp18;
            }
            if (var_t1 < sp20) {
                var_t1 = sp20;
                goto block_11;
            }
            var_t2 = sp1C;
            if (sp28 < var_t1) {
                var_t1 = sp28;
block_11:
                sp18 = var_t1;
                var_t2 = sp1C;
            }
            if (var_t2 < sp24) {
                var_t2 = sp24;
                goto block_14;
            }
            if (sp2C < var_t2) {
                var_t2 = sp2C;
block_14:
                sp1C = var_t2;
            }
            temp_s4 = (s32) ((var_t1 - sp10) + 0xF) >> 4;
            temp_s5 = (s32) ((var_t2 - var_t3) + 0xF) >> 4;
            if (temp_s4 > 0) {
                if (temp_s5 > 0) {
                    var_fs0 = 0.0f;
                    temp_s1 = func_0020EAF8(0x3060);
                    func_002F2AA0(&sp30, (M2C_FIELD(&D_01DA8AD0, u16 *, 0x10) & 0x1FF) << 5, (s16) (((u64) M2C_FIELD(&D_01DA8AD0, u64 *, 0) >> 0x10) & 0x3F & 0xFFFF), 0x31);
                    var_s1 = temp_s1 + 0x60;
                    func_003058A0(0);
                    func_002F2D60(&sp30, var_s1);
                    func_002F25A0(0, 0);
                    if (temp_s5 > 0) {
                        var_s0 = temp_s5;
                        do {
                            if (temp_s4 > 0) {
                                var_t4 = temp_s4;
                                do {
                                    var_s1 += 3;
                                    if ((u32) (M2C_FIELD(var_s1, u8 *, 0) | (M2C_FIELD(var_s1, u8 *, 1) << 8) | (M2C_FIELD(var_s1, u8 *, 2) << 0x10)) < (u32) (sp8 >> 4)) {
                                        var_fs0 += D_FLT_0037025C;
                                    }
                                    var_t4 -= 1;
                                } while (var_t4 != 0);
                            }
                            var_s0 -= 1;
                            var_s1 += (((temp_s4 + 7) & ~7) - temp_s4) * 3;
                        } while (var_s0 != 0);
                    }
                    func_0020EBD8(0x3060);
                    temp_fs0 = var_fs0 / (f32) (spA0 * spA4);
                    M2C_FIELD(arg0, f32 *, 0xAC) = temp_fs0;
                    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (M2C_FIELD(arg0, f32 *, 0x7C) * temp_fs0);
                } else {
                    goto block_19;
                }
            } else {
block_19:
                M2C_FIELD(arg0, f32 *, 0xAC) = 0.0f;
                M2C_FIELD(arg0, f32 *, 0x7C) = 0.0f;
            }
        }
    }
}
