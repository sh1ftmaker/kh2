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
static AnyCell sp18;
static AnyCell sp1C;
static AnyCell sp64;
// m2c valid-syntax output for 0x002cfb30, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002CFB30 {
    /* 0x00 */ char pad0[0x10];
    /* 0x10 */ f32 sp10;                            /* inferred */
    /* 0x14 */ f32 sp14;                            /* inferred */
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x44];                    /* maybe part of sp1C[0x12]? */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad68[8];
};                                                  /* size = 0x70 */

s32 func_0016F000(M2C_UNK = 0, void * = 0, M2C_UNK = 0, f32 = 0, f32 = 0, f32 = 0, f32 = 0) asm("func_0016F000");
s32 func_00197920() asm("func_00197920");
s32 func_0019C768(void * = 0) asm("func_0019C768");
void *func_001B9BC8(void * = 0) asm("func_001B9BC8");
M2C_UNK func_001C0D38(s32 = 0, s32 = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_001C0D38");
M2C_UNK func_001CBCF0(void * = 0, f32 * = 0, s32 = 0, f32 = 0, f32 = 0, f32 = 0, f32 = 0) asm("func_001CBCF0");
s32 func_002CEB08() asm("func_002CEB08");
s32 func_002CEB28() asm("func_002CEB28");
s32 func_002CF270(void * = 0, M2C_UNK = 0) asm("func_002CF270");
M2C_UNK func_002CF280(void * = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_002CF280");
s32 func_002CF4A8(void * = 0) asm("func_002CF4A8");
M2C_UNK func_002DB208(s32 = 0, s32 = 0) asm("func_002DB208");
void *func_002E3260(s32 = 0, s32 = 0, u16 = 0) asm("func_002E3260");
extern f32 D_FLT_00375984 asm("D_00375984");
void func_002CFB30(...) asm("_ZN2Ti5MGObj11exec_appearEv");
void func_002cfb30_impl(void) asm("_ZN2Ti5MGObj11exec_appearEv");
void func_002cfb30_impl(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp64;
    f32 temp_fv1;
    s32 temp_s5;
    s32 temp_t7;
    s32 temp_v0_3;
    s32 var_s2;
    s32 var_s5;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s1;
    void *temp_s3;
    void *temp_t6;
    void *temp_t7_2;
    void *temp_t7_3;
    void *temp_t7_4;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    sp64 = M2C_ERROR(/* Read from unset register $fs0f */);
    if ((func_002CEB28() != 0) && (func_00197920() == 0)) {
        var_s0 = NULL;
loop_3:
        temp_v0 = func_001B9BC8(var_s0);
        var_s0 = temp_v0;
        if (temp_v0 != NULL) {
            if ((M2C_FIELD(var_s0, s32 *, 0x588) & 0x08000000) && (func_0019C768(temp_v0) != 0) && (func_002CF270(var_s0 + 0xAF0, 0x1000) != 0)) {
                temp_t7 = M2C_FIELD(var_s0, s32 *, 0xB10);
                if (temp_t7 > 0) {
                    M2C_FIELD(var_s0, s32 *, 0xB10) = (s32) (temp_t7 - 1);
                }
            }
            goto loop_3;
        }
        var_s2 = 0;
        if (*(s32 *)0x361FA0 > 0) {
            do {
                temp_s1 = *(s32 *)0x361FA4 + (var_s2 * 0x28);
                if (M2C_FIELD(temp_s1, s32 *, 0) != 0) {
                    temp_s3 = temp_s1 + 4;
                    if ((M2C_FIELD(temp_s1, void **, 0xC) != NULL) && (func_002CF270(temp_s3, 2) == 0)) {
                        var_s5 = 0;
                        if (func_002CF270(temp_s3, 0x40) != 0) {
                            temp_fv1 = M2C_FIELD(temp_s1, f32 *, 0x20) - *(f32 *)0x349E10;
                            M2C_FIELD(temp_s1, f32 *, 0x20) = temp_fv1;
                            if (temp_fv1 <= 0.0f) {
                                var_s5 = 1;
                            }
                        } else {
                            temp_a0 = *(void **)0x361F60;
                            if ((M2C_FIELD(M2C_FIELD(temp_a0, void **, 0), s32 (**)(void *, void *), 0x18)(temp_a0, temp_s1) != 0) && ((var_s5 = 1, (func_002CEB08() == 0)) || (func_002CEB08() == 2))) {
                                temp_t7_2 = M2C_FIELD(temp_s1, void **, 0x18);
                                if (temp_t7_2 != NULL) {
                                    temp_v0_2 = func_002E3260(M2C_FIELD(*(void **)0x361F60, s32 *, 0x5C), M2C_FIELD(temp_s1, s32 *, 0), *M2C_FIELD(temp_t7_2, u16 **, 0x10));
                                    if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, s16 *, 0x10) > 0)) {
                                        var_s5 = 0;
                                        func_002CF280(temp_s3, 0x40, 0);
                                        M2C_FIELD(temp_s1, f32 *, 0x20) = (f32) ((f32) M2C_FIELD(temp_v0_2, s16 *, 0x10) * D_FLT_00375984);
                                    }
                                }
                            }
                        }
                        if (var_s5 != 0) {
                            if (func_002CF270(temp_s3, 4) != 0) {
                                temp_t7_3 = M2C_FIELD(temp_s1, void **, 0xC);
                                temp_t7_4 = M2C_FIELD(temp_s1, void **, 0xC);
                                sp1C = 0.0f;
                                sp10 = M2C_FIELD(temp_t7_4, f32 *, 0x10);
                                sp18 = -M2C_FIELD(temp_t7_4, f32 *, 0x18);
                                sp14 = -M2C_FIELD(temp_t7_4, f32 *, 0x14);
                                func_001CBCF0(sp, &sp10, M2C_FIELD(temp_s1, s32 *, 8), M2C_FIELD(temp_t7_3, f32 *, 4), M2C_FIELD(temp_t7_3, f32 *, 8), M2C_FIELD(temp_t7_3, f32 *, 0xC), 0.0f);
                            } else {
                                temp_s5 = func_002CF4A8(temp_s1);
                                if (M2C_FIELD(M2C_FIELD(temp_s1, void **, 0xC), s32 *, 0) == 0x65F) {
                                    temp_v0_3 = func_0016F000(0x662, sp, 0, 0.0f, 0.0f, 0.0f, 0.0f);
                                    func_001C0D38(temp_v0_3, temp_s5, 0x4000, 0);
                                    func_002DB208(temp_s5, temp_v0_3);
                                    *(s32 *)0x361FA8 += 1;
                                    func_002CF280(temp_s5 + 0xAF0, 0x40, 0);
                                    func_002CF280(temp_v0_3 + 0xAF0, 0x40, 0);
                                }
                            }
                            func_002CF280(temp_s3, 2, 0);
                            temp_t6 = M2C_FIELD(temp_s1, void **, 0x18);
                            if (temp_t6 != NULL) {
                                M2C_FIELD(temp_t6, s32 *, 0x24) = (s32) (M2C_FIELD(temp_t6, s32 *, 0x24) - 1);
                            }
                            temp_a0_2 = M2C_FIELD(temp_s1, void **, 0x1C);
                            if (temp_a0_2 != NULL) {
                                M2C_FIELD(temp_a0_2, s32 *, 0x24) = (s32) (M2C_FIELD(temp_a0_2, s32 *, 0x24) - 1);
                            }
                        }
                    }
                }
                var_s2 += 1;
            } while (var_s2 < *(s32 *)0x361FA0);
        }
    }
}
