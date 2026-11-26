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

static AnyCell sp50;
static AnyCell sp54;
static AnyCell sp60;
static AnyCell sp64;
static AnyCell sp68;
static AnyCell spCC;
static AnyCell unkspC4;
// m2c valid-syntax+u8ptr output for 0x001c51d8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001C51D8 {
    /* 0x00 */ char pad0[0x50];
    /* 0x50 */ M2C_UNK sp50;                        /* inferred */
    /* 0x50 */ char pad50[4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[8];                       /* maybe part of sp54[3]? */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ u8 *sp64;                          /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x60];                    /* maybe part of sp68[0x19]? */
    /* 0xCC */ f32 spCC;                            /* inferred */
};                                                  /* size = 0xD0 */

u8 *func_001050D8(M2C_UNK = 0) asm("func_001050D8");
M2C_UNK func_001A7610(M2C_UNK * = 0, M2C_UNK * = 0, M2C_UNK = 0, f32 = 0) asm("func_001A7610");
M2C_UNK func_001C2858(u8 * = 0, M2C_UNK * = 0, M2C_UNK = 0) asm("func_001C2858");
s32 func_001C28F8(u8 * = 0, M2C_UNK * = 0, M2C_UNK = 0) asm("func_001C28F8");
M2C_UNK func_001C51A0(u8 * = 0, s32 = 0) asm("func_001C51A0");
M2C_UNK func_001C6310(u8 * = 0) asm("func_001C6310");
u8 *func_001DB888(s32 = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_001DB888");
u8 *func_001DBA18(s32 = 0) asm("func_001DBA18");
M2C_UNK func_001DBC58(u8 * = 0, s32 = 0, M2C_UNK * = 0, M2C_UNK * = 0) asm("func_001DBC58");
f32 func_002F8870(f32 = 0) asm("func_002F8870");
s64 func_00312DB8(u64 = 0, M2C_UNK = 0) asm("func_00312DB8");
extern AnyCell D_00351680 asm("D_00351680");
extern AnyCell D_01D497C0 asm("D_01D497C0");
extern AnyCell D_01D497D0 asm("D_01D497D0");
extern AnyCell D_01D497E0 asm("D_01D497E0");
extern f32 D_FLT_0036DE98 asm("D_0036DE98");
extern f32 D_FLT_0036DE9C asm("D_0036DE9C");
extern f32 D_FLT_0036DEA0 asm("D_0036DEA0");
extern f32 D_FLT_0036DEA4 asm("D_0036DEA4");
extern f32 D_FLT_0036DEA8 asm("D_0036DEA8");
extern f32 D_FLT_0036DEB0 asm("D_0036DEB0");
u8 * func_001C51D8(s32 arg0 = 0, u8 *arg1 = 0, ...) asm("func_001c51d8");
u8 * func_001c51d8_impl(s32 arg0, u8 *arg1) asm("func_001c51d8");
u8 * func_001c51d8_impl(s32 arg0, u8 *arg1) {
    M2C_UNK sp50;
    f32 sp54;
    s32 sp60;
    u8 *sp64;
    s32 sp68;
    f32 spCC;
    M2C_UNK *var_s3;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 var_fv0;
    f32 var_fv0f;
    s128 *temp_t6;
    s32 *temp_t4;
    s32 temp_s4;
    s32 temp_t5;
    s32 temp_v0_3;
    s32 var_s4;
    s64 temp_s1;
    u32 temp_t7_2;
    u32 var_a0;
    u32 var_s0;
    u32 var_s1;
    u8 *temp_t6_2;
    u8 *temp_t7;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_4;

    spCC = M2C_ERROR(/* Read from unset register $fs1f */);
    unkspC4 = M2C_ERROR(/* Read from unset register $fs0f */);
    func_001C2858(sp, &D_01D497C0, 0x1E);
    sp60 = 0;
    temp_v0 = func_001DBA18(arg0);
    sp64 = temp_v0;
    if (temp_v0 == NULL) {
        temp_v0_2 = func_001050D8(0xA00);
        func_001C51A0(temp_v0_2, arg0);
        sp64 = temp_v0_2;
        *(s32 *)0x01D498A4 = 0;
        *(s32 *)0x01D498B0 = 0;
        *(s32 *)0x351CC0 = 0;
        *(s32 *)0x351670 = 0;
        *(s32 *)0x351674 = 0;
    }
    temp_t7 = (*(s32 *)0x351CC0 << 5) + &D_00351680;
    M2C_FIELD(temp_t7, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_t7, s32 *, 0x10) = 0;
    M2C_FIELD(temp_t7, s32 *, 0x14) = 0;
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf0, $vf0 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
    temp_t6 = (*(s32 *)0x351CC0 << 5) + &D_00351680;
    if (temp_t6 != arg1) {
        *temp_t6 = M2C_FIELD(arg1, s128 *, 0);
    }
    var_a0 = *(u32 *)0x3638D0;
    var_s4 = 0;
    do {
        var_s0 = var_a0;
loop_6:
        var_s0 *= 0x10DCD;
        temp_s1 = (s64) (func_00312DB8((u64) ((s64) var_s0 << 0x20) >> 0x20, 0x08888889) << 0x20) >> 0x20;
        temp_v0_3 = temp_s1 & 0x1F;
        temp_t4 = &(&sp60)[(u32) temp_s1 >> 5];
        temp_t5 = *temp_t4;
        if (temp_t5 & (1 << temp_v0_3)) {
            goto loop_6;
        }
        var_s4 += 1;
        var_a0 = var_s0;
        *temp_t4 = temp_t5 | (1 << temp_v0_3);
    } while (var_s4 < 3);
    sp68 = 0x10000;
    *(s32 *)0x3638D0 = var_s0;
    temp_fs0 = D_FLT_0036DE98;
    temp_fs1 = D_FLT_0036DE9C;
    temp_s4 = M2C_FIELD(sp64, s32 *, 0x9F4);
    temp_fs1f = D_FLT_0036DEA0;
    sp68 = 0x10DCD;
    temp_fs0f = D_FLT_0036DEA4;
    var_s1 = 0;
loop_9:
    if (func_001C28F8(sp, &sp50, 1) != 0) {
        func_001A7610(&sp50, &sp50, 4, D_FLT_0036DEB0);
        if (func_002F8870(M2C_FIELD(arg1, f32 *, 4) - sp54) <= temp_fs0) {
            if ((&sp60)[var_s1 >> 5] & (1 << (var_s1 & 0x1F))) {
                temp_t7_2 = *(s32 *)0x3638D0 * sp68;
                *(s32 *)0x3638D0 = temp_t7_2;
                if ((s32) temp_t7_2 >= 0) {
                    var_fv0 = (f32) temp_t7_2;
                } else {
                    var_fv0 = 2.0f * (f32) ((temp_t7_2 & 1) | (temp_t7_2 >> 1));
                }
                var_s3 = &D_01D497E0;
                var_fv0f = D_FLT_0036DEA8 + (var_fv0 * temp_fs1 * temp_fs1f) + temp_fs0f;
            } else {
                var_fv0f = D_FLT_0036DEA4;
                var_s3 = &D_01D497D0;
            }
            sp54 -= var_fv0f;
            temp_v0_4 = func_001DB888(temp_s4 + 0x14, 0x60, saved_reg_ra);
            func_001DBC58(temp_v0_4, temp_s4, &sp50, var_s3);
            M2C_FIELD(temp_v0_4, u8 *, 0x52) = (u8) *(s32 *)0x351CC0;
            temp_t6_2 = (*(s32 *)0x351CC0 << 5) + &D_00351680;
            *(s32 *)0x01D498A4 = (s32) (*(s32 *)0x01D498A4 + 1);
            M2C_FIELD(temp_t6_2, s32 *, 0x10) = (s32) (M2C_FIELD(temp_t6_2, s32 *, 0x10) + 1);
            func_001C6310(temp_v0_4);
        }
        var_s1 += 1;
        goto loop_9;
    }
    *(s32 *)0x351CC0 += 1;
    return sp64;
}
