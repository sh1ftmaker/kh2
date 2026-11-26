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
static AnyCell sp20;
static AnyCell sp24;
static AnyCell sp30;
// m2c valid-syntax output for 0x001fc320, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001FC320 {
    /* 0x00 */ char pad0[0x10];
    /* 0x10 */ M2C_UNK sp10;                        /* inferred */
    /* 0x10 */ char pad10[0x10];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[8];                       /* maybe part of sp24[3]? */
    /* 0x30 */ M2C_UNK sp30;                        /* inferred */
    /* 0x30 */ char pad30[0x50];
};                                                  /* size = 0x80 */

s32 func_002225A8(M2C_UNK * = 0) asm("func_002225A8");
M2C_UNK func_00222730(void * = 0, M2C_UNK * = 0, void * = 0) asm("func_00222730");
M2C_UNK func_002F3EF8(M2C_UNK * = 0, M2C_UNK * = 0, M2C_UNK * = 0) asm("func_002F3EF8");
M2C_UNK func_002F3F10(M2C_UNK * = 0, void * = 0, M2C_UNK * = 0) asm("func_002F3F10");
M2C_UNK func_002F3F40(M2C_UNK * = 0, M2C_UNK * = 0, f32 = 0) asm("func_002F3F40");
M2C_UNK func_002F3F88(M2C_UNK * = 0, void * = 0) asm("func_002F3F88");
extern M2C_UNK D_01D9E360 asm("D_01D9E360");
extern f32 D_FLT_0037026C asm("D_0037026C");
void func_001FC320(void *arg0 = 0, void *arg1 = 0, void *arg2 = 0, ...) asm("func_001fc320");
void func_001fc320_impl(void *arg0, void *arg1, void *arg2) asm("func_001fc320");
void func_001fc320_impl(void *arg0, void *arg1, void *arg2) {
    M2C_UNK sp10;
    f32 sp20;
    M2C_UNK sp30;
    M2C_UNK *temp_s2;
    M2C_UNK *temp_t4;
    M2C_UNK *var_t5;
    f32 temp_fv0;
    s32 temp_t5;
    u8 temp_t2;
    void *temp_s3;
    void *temp_s4;
    void *temp_t7;

    temp_s2 = arg0 + M2C_FIELD(M2C_FIELD(arg2, void **, 0xC), s32 *, 8) + 0xA0;
    temp_t2 = M2C_FIELD(temp_s2, u8 *, 0x10);
    if (!(temp_t2 & 1 & 0xFF)) {
        if (M2C_FIELD(arg0, s32 *, 0xC) == M2C_FIELD(arg1, s32 *, 0)) {
            temp_t5 = M2C_FIELD(arg1, s32 *, 4);
            if (temp_t5 != -1) {
                var_t5 = M2C_FIELD(((temp_t5 * 0x10) + M2C_FIELD(*(void **)0x01D9E6E0, s32 *, 0x80)), s32 *, 4) + M2C_FIELD(arg1, s32 *, 8) + 0xA0;
            } else {
                var_t5 = &D_01D9E360;
            }
            M2C_FIELD(temp_s2, M2C_UNK **, 0x14) = var_t5;
            if (M2C_FIELD(arg1, u8 *, 0xC) != 0) {
                M2C_FIELD(temp_s2, u8 *, 0x10) = (u8) (temp_t2 | 2);
            }
            if ((M2C_FIELD(arg0, s32 *, 0xC) != 0) || (M2C_FIELD(arg0, u8 *, 0x9D) != 0)) {
                goto block_8;
            }
        } else {
block_8:
            if ((*(s32 *)0x01D9EA9C == 0) && !(M2C_FIELD(*(s32 *)0x01D9E6E0, s64 *, 0xA8) & ((0xFF << 0x20) | 0xFF00))) {
                temp_t4 = M2C_FIELD(temp_s2, M2C_UNK **, 0x14);
                if (temp_t4 != &D_01D9E360) {
                    temp_t7 = M2C_FIELD(arg2, void **, 0xC);
                    temp_fv0 = M2C_FIELD(temp_t4, f32 *, 0);
                    temp_s3 = arg0 + M2C_FIELD(temp_t7, s32 *, 4) + 0xA0;
                    temp_s4 = arg0 + M2C_FIELD(temp_t7, s32 *, 0) + 0xA0;
                    if (temp_fv0 != 0.0f) {
                        sp20 = temp_fv0;
                        func_002F3F10(sp, temp_s4, M2C_FIELD(temp_t4, M2C_UNK **, 4));
                        func_002F3F88(&sp10, temp_s3);
                        if (func_002225A8(sp) != 0) {
                            if (!(sp24 < 0.0f) && !(D_FLT_0037026C < sp24)) {
                                M2C_FIELD(temp_s2, u8 *, 0x10) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x10) | 1);
                                func_002F3F40(&sp30, &sp10, sp24);
                                func_002F3EF8(&sp30, &sp30, sp);
                                func_002F3EF8(temp_s2, M2C_FIELD(M2C_FIELD(temp_s2, M2C_UNK **, 0x14), M2C_UNK **, 4), &sp30);
                                if (M2C_FIELD(temp_s2, u8 *, 0x10) & 2) {
                                    func_00222730(temp_s3, temp_s2, temp_s4);
                                    M2C_FIELD(arg0, s32 *, 0xC) = 0xFFFF0000;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
