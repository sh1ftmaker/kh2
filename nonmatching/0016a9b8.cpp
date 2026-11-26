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

// m2c valid-syntax output for 0x0016a9b8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0016A9B8 {
    /* 0x00 */ char pad0[0x10];
};                                                  /* size = 0x10 */

M2C_UNK func_00194318(void *) asm("func_00194318");
M2C_UNK func_0016AE58(void * = 0, f32 = 0) asm("func_0016AE58");
f32 func_0017CE80(f32 = 0, f32 = 0) asm("func_0017CE80");
s32 func_0019C400(void * = 0) asm("func_0019C400");
M2C_UNK func_001B04D8(void * = 0) asm("func_001B04D8");
s32 func_001C0CD8() asm("func_001C0CD8");
M2C_UNK func_002CCF98(s32 = 0, void * = 0) asm("func_002CCF98");
extern f32 D_FLT_0036C1AC asm("D_0036C1AC");
extern f32 D_FLT_0036C1B0 asm("D_0036C1B0");
void func_0016A9B8(void *arg0 = 0, ...) asm("_ZN2YS3OBJ14_OVR_post_execEv");
void func_0016a9b8_impl(void *arg0) asm("_ZN2YS3OBJ14_OVR_post_execEv");
void func_0016a9b8_impl(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 var_fv0f;
    s32 temp_a0;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 var_t7;
    s32 var_t7_2;
    s32 var_t7_3;
    void **temp_t5_2;
    void **var_t6;

    var_t6 = M2C_FIELD(arg0, void ***, 0xC);
    temp_t5 = M2C_FIELD(var_t6, s32 *, 8);
    if (!(temp_t5 & 2) || (temp_t5 & 0x20)) {
        if (func_001C0CD8() == 0) {
            temp_t6 = M2C_FIELD(arg0, s32 *, 0x108);
            if ((temp_t6 & 0x800000) || (var_t7 = 0 & 0xFF, ((temp_t6 & 0x01000000) != 0))) {
                var_t7 = 1 & 0xFF;
            }
            if (var_t7 != 0) {
                temp_t6_2 = M2C_FIELD(arg0, s32 *, 0x160);
                if ((temp_t6_2 & 0x20) || (var_t7_2 = 0 & 0xFF, ((temp_t6_2 & 0x01000000) != 0))) {
                    var_t7_2 = 1 & 0xFF;
                }
                if ((var_t7_2 != 0) || (var_t7_3 = 0 ^ 1, ((temp_t6_2 & 0x40) != 0))) {
                    var_t7_3 = 1 ^ 1;
                }
                if (var_t7_3 != 0) {
                    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf0, $vf0 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t7) */);
                    temp_t5_2 = M2C_FIELD(arg0, void ***, 0xC);
                    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (M2C_FIELD(arg0, s32 *, 0x108) & 0xFBFFFFFF);
                    M2C_FIELD(*temp_t5_2, M2C_UNK (**)(void **, void *), 0x10)(temp_t5_2, arg0);
                    if (!(M2C_FIELD(arg0, s32 *, 0x108) & 0x04000000)) {
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0x2C)(arg0);
                    }
                    M2C_FIELD(arg0, f32 *, 0xDC) = 0.0f;
                    temp_fv0f = M2C_FIELD(arg0, f32 *, 0x864);
                    temp_fv0 = M2C_FIELD(arg0, f32 *, 0xDC);
                    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
                    if (temp_fv0 < temp_fv0f) {
                        var_fv0f = temp_fv0f / D_FLT_0036C1AC;
                    } else {
                        var_fv0f = temp_fv0;
                    }
                    M2C_FIELD(arg0, f32 *, 0xD0) = var_fv0f;
                    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) (M2C_FIELD(arg0, f32 *, 0x544) - (var_fv0f * D_FLT_0036C1AC * var_fv0f * D_FLT_0036C1B0));
                    if ((arg0 + 0x20) != (arg0 + 0x860)) {
                        M2C_FIELD(arg0, s128 *, 0x20) = (s128) M2C_FIELD(arg0, s128 *, 0x860);
                    }
                }
            }
        }
        var_t6 = M2C_FIELD(arg0, void ***, 0xC);
    }
    M2C_FIELD(*var_t6, M2C_UNK (**)(void **, void *), 0x18)(var_t6, arg0);
    if (func_0019C400(arg0) == 0) {
        func_0016AE58(arg0, func_0017CE80(M2C_FIELD(arg0, f32 *, 0x55C), M2C_FIELD(arg0, f32 *, 0x11C) * *(f32 *)0x349E10));
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x508);
    if (temp_a0 != 0) {
        func_002CCF98(temp_a0, arg0);
    }
    func_001B04D8(arg0 + 0x4A0);
    if (!(((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 8), u16 *, 0x48) >> 5) & 1 & 0xFF)) {
        return;
    }
    func_00194318(arg0);
}
