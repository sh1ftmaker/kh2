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

static AnyCell sp10;
static AnyCell sp14;
static AnyCell sp20;
static AnyCell sp30;
static AnyCell sp4;
static AnyCell sp70;
static AnyCell sp80;
static AnyCell unkspD4;
static AnyCell unkspDC;
static AnyCell unkspE4;
// m2c valid-syntax output for 0x001c4918, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001C4918 {
    /* 0x00 */ char pad0[4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad8[8];                        /* maybe part of sp4[3]? */
    /* 0x10 */ s128 sp10;                           /* inferred */
    /* 0x14 */ f32 sp14;                            /* overlap; inferred */
    /* 0x20 */ M2C_UNK sp20;                        /* inferred */
    /* 0x20 */ char pad20[0x10];
    /* 0x30 */ M2C_UNK sp30;                        /* inferred */
    /* 0x30 */ char pad30[0x40];
    /* 0x70 */ M2C_UNK sp70;                        /* inferred */
    /* 0x70 */ char pad70[0x10];
    /* 0x80 */ M2C_UNK sp80;                        /* inferred */
    /* 0x80 */ char pad80[0x70];
};                                                  /* size = 0xF0 */

s32 func_00106A60(M2C_UNK = 0) asm("func_00106A60");
M2C_UNK func_0016C018(s32 = 0, M2C_UNK = 0, s32 = 0) asm("func_0016C018");
s32 func_0016C6E8(M2C_UNK = 0) asm("func_0016C6E8");
s32 func_0016F000(M2C_UNK = 0, void * = 0, M2C_UNK = 0) asm("func_0016F000");
f32 func_0017CE10(f32 = 0) asm("func_0017CE10");
s32 func_00197920() asm("func_00197920");
s32 func_0019BA60(s32 = 0) asm("func_0019BA60");
s32 func_001A7588(s128 * = 0, void * = 0, M2C_UNK * = 0, M2C_UNK = 0) asm("func_001A7588");
s32 func_001A7610(M2C_UNK * = 0, void * = 0, M2C_UNK = 0, M2C_UNK * = 0, f32 = 0) asm("func_001A7610");
s32 func_001C4160() asm("func_001C4160");
s32 func_001C4170(s32 = 0) asm("func_001C4170");
M2C_UNK func_001C42A0() asm("func_001C42A0");
M2C_UNK func_001DBAD0(s32 = 0) asm("func_001DBAD0");
f32 func_002F87C0(f32 = 0) asm("func_002F87C0");
f32 func_002F8960(f32 = 0) asm("func_002F8960");
extern s128 D_00352A60 asm("D_00352A60");
extern M2C_UNK D_01D49610 asm("D_01D49610");
extern f32 D_FLT_0036DE60 asm("D_0036DE60");
extern f32 D_FLT_0036DE64 asm("D_0036DE64");
extern f32 D_FLT_0036DE68 asm("D_0036DE68");
extern f32 D_FLT_0036DE6C asm("D_0036DE6C");
extern f32 D_FLT_0036DE70 asm("D_0036DE70");
extern f32 D_FLT_0036DE74 asm("D_0036DE74");
extern f32 D_FLT_0036DE78 asm("D_0036DE78");
extern f32 D_FLT_0036DE7C asm("D_0036DE7C");
extern f32 D_FLT_0036DE80 asm("D_0036DE80");
extern f32 D_FLT_0036DE84 asm("D_0036DE84");
extern M2C_UNK D_FLT_01D49590 asm("D_01D49590");
void func_001C4918(s32 arg0 = 0, ...) asm("_ZN2YS13CROWD_M_EX6609_OVR_execEv");
void func_001c4918_impl(s32 arg0) asm("_ZN2YS13CROWD_M_EX6609_OVR_execEv");
void func_001c4918_impl(s32 arg0) {
    f32 sp4;
    s128 sp10;
    f32 sp14;
    M2C_UNK sp20;
    M2C_UNK sp30;
    M2C_UNK sp70;
    M2C_UNK sp80;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fs3;
    f32 temp_fv0f;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv1f;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_t7_3;
    s32 temp_t7_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_s2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t7;
    void *temp_t7_2;

    unkspE4 = M2C_ERROR(/* Read from unset register $fs2f */);
    unkspDC = M2C_ERROR(/* Read from unset register $fs1f */);
    unkspD4 = M2C_ERROR(/* Read from unset register $fs0f */);
    if (func_001C4160() != 0) {
        func_001C42A0();
    }
    temp_fs3 = D_FLT_0036DE60;
    temp_fs1 = D_FLT_0036DE64;
    temp_fs1f = D_FLT_0036DE68;
    var_s2 = 0;
    do {
        temp_s1 = var_s2 * 0x10;
        temp_s0 = temp_s1 + &D_FLT_01D49590;
        temp_fs0 = func_002F8960(M2C_FIELD(temp_s0, f32 *, 0xC));
        temp_fs0f = func_002F8960(M2C_FIELD(temp_s0, f32 *, 0xC)) * temp_fs3;
        temp_fv0f = func_002F87C0(M2C_FIELD(temp_s0, f32 *, 0xC));
        if (temp_fs0 > 0.0f) {
            var_fv0 = temp_fs0 * temp_fs0;
        } else {
            var_fv0 = -(temp_fs0 * temp_fs0);
        }
        temp_t7 = temp_s1 + &D_FLT_01D49590;
        M2C_FIELD(temp_t7, f32 *, 4) = temp_fs0f;
        M2C_FIELD(temp_s0, f32 *, 0) = (f32) (var_fv0 * temp_fs1);
        if (temp_fv0f > 0.0f) {
            var_fv0_2 = temp_fv0f * temp_fv0f;
        } else {
            var_fv0_2 = -(temp_fv0f * temp_fv0f);
        }
        temp_s0_2 = temp_s1 + &D_FLT_01D49590;
        var_s2 += 1;
        M2C_FIELD(temp_t7, f32 *, 8) = (f32) (var_fv0_2 * temp_fs1);
        M2C_FIELD(temp_s0_2, f32 *, 0xC) = func_0017CE10(M2C_FIELD(temp_s0_2, f32 *, 0xC) + temp_fs1f);
    } while (var_s2 < 8);
    temp_v0 = func_00106A60(1);
    temp_t7_2 = (temp_v0 == 0) ? NULL : (temp_v0 + 0x10);
    if (temp_t7_2 != &D_01D49610) {
        M2C_FIELD(&D_01D49610, s128 *, 0) = (s128) M2C_FIELD(temp_t7_2, s128 *, 0);
        M2C_FIELD(&D_01D49610, s128 *, 0x10) = (s128) M2C_FIELD(temp_t7_2, s128 *, 0x10);
        M2C_FIELD(&D_01D49610, s128 *, 0x20) = (s128) M2C_FIELD(temp_t7_2, s128 *, 0x20);
        M2C_FIELD(&D_01D49610, s128 *, 0x30) = (s128) M2C_FIELD(temp_t7_2, s128 *, 0x30);
    }
    func_001DBAD0(arg0);
    if ((func_00197920() == 0) && (func_0019BA60(arg0) != 0)) {
        temp_s0_3 = func_001C4170();
        if (func_0016C6E8(0x558) < temp_s0_3) {
            temp_t7_3 = *(s32 *)0x3638D0 * 0x10DCD;
            *(s32 *)0x3638D0 = temp_t7_3;
            if (temp_t7_3 >= 0) {
                var_fv0_3 = (f32) temp_t7_3;
            } else {
                var_fv0_3 = 2.0f * (f32) ((temp_t7_3 & 1) | ((u32) temp_t7_3 >> 1));
            }
            temp_t7_4 = *(s32 *)0x3638D0 * 0x10DCD;
            temp_fs0_2 = D_FLT_0036DE70;
            *(s32 *)0x3638D0 = temp_t7_4;
            if (temp_t7_4 >= 0) {
                var_fv1f = (f32) temp_t7_4;
            } else {
                var_fv1f = 2.0f * (f32) ((temp_t7_4 & 1) | ((u32) temp_t7_4 >> 1));
            }
            M2C_FIELD(sp, f32 *, 0) = (f32) (D_FLT_0036DE78 + (var_fv0_3 * D_FLT_0036DE6C * D_FLT_0036DE74));
            M2C_FIELD(sp, f32 *, 0xC) = 0.0f;
            M2C_FIELD(sp, f32 *, 4) = temp_fs0_2;
            M2C_FIELD(sp, f32 *, 8) = (f32) (D_FLT_0036DE80 + (var_fv1f * D_FLT_0036DE6C * D_FLT_0036DE7C));
            if (&sp30 != &D_01D49610) {
                M2C_FIELD(&sp30, s128 *, 0) = (s128) M2C_FIELD(&D_01D49610, s128 *, 0);
                M2C_FIELD(&sp30, s128 *, 0x10) = (s128) M2C_FIELD(&D_01D49610, s128 *, 0x10);
                M2C_FIELD(&sp30, s128 *, 0x20) = (s128) M2C_FIELD(&D_01D49610, s128 *, 0x20);
                M2C_FIELD(&sp30, s128 *, 0x30) = (s128) M2C_FIELD(&D_01D49610, s128 *, 0x30);
            }
            M2C_ERROR(/* unknown instruction: qmfc2.ni $t3, $vf0 */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a2) */);
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
            M2C_FIELD(&sp30, s128 *, 0) = (s128) M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf1 */);
            M2C_FIELD(&sp30, s128 *, 0x10) = (s128) M2C_ERROR(/* unknown instruction: qmtc2.ni $t1, $vf2 */);
            M2C_FIELD(&sp30, s128 *, 0x20) = (s128) M2C_ERROR(/* unknown instruction: qmtc2.ni $t2, $vf3 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($sp) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a2) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw $acc, $vf1, $vf5x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw $acc, $vf2, $vf5y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw $acc, $vf3, $vf5z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf5, $vf4, $vf5w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($a3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            if (func_001A7610(&sp70, sp, 2, &sp80, D_FLT_0036DE84) != 0) {
                if (&sp10 != &D_00352A60) {
                    sp10 = D_00352A60;
                }
                sp14 -= D_FLT_0036DE64;
                if (func_001A7588(&sp10, sp, &sp20, 2) < 0) {
                    func_001C4170();
                    sp4 += temp_fs0_2;
                    temp_v0_2 = func_0016F000(0x558, sp, 0);
                    if (temp_v0_2 != 0) {
                        func_0016C018(temp_v0_2, 1, *(s32 *)0x01D49650);
                        if (func_001C4170() < 0x32) {
                            var_a2 = 0x1F4;
                            goto block_26;
                        }
                        if (func_001C4170(temp_v0_2) < 0x64) {
                            var_a2 = 0x3E8;
block_26:
                            func_0016C018(temp_v0_2, 2, var_a2);
                        }
                    }
                }
            }
        }
    }
}
