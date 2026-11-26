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

// m2c valid-syntax output for 0x001a11e0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_001A11E0 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

M2C_UNK func_001C3060(void *) asm("func_001C3060");
M2C_UNK func_001A24A0(void * = 0, u16 = 0) asm("func_001A24A0");
void *func_001B6FB0(s32 = 0, u8 = 0) asm("func_001B6FB0");
s32 func_001B73E8(void * = 0, s32 = 0) asm("func_001B73E8");
M2C_UNK func_001C2F90(void * = 0, void * = 0) asm("func_001C2F90");
extern f32 D_FLT_0036D450 asm("D_0036D450");
void func_001A11E0(void *arg0 = 0, u16 *arg1 = 0, ...) asm("_ZN2YS5SHEET4loadEPNS_7PARTRAME");
void func_001a11e0_impl(void *arg0, u16 *arg1) asm("_ZN2YS5SHEET4loadEPNS_7PARTRAME");
void func_001a11e0_impl(void *arg0, u16 *arg1) {
    s16 temp_t6_2;
    s16 temp_t7_2;
    s16 temp_t7_3;
    s16 temp_t7_4;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_t6;
    s8 *var_t7;
    u16 *temp_a1;
    u16 *temp_t7_5;
    u16 *var_s0;
    u16 *var_s0_2;
    u16 *var_s0_3;
    u16 *var_s1;
    u16 temp_a1_2;
    u8 temp_t5;
    u8 temp_t5_2;
    u8 temp_t6;
    u8 temp_t7;
    void *temp_a0;
    void *temp_s4;
    void *temp_t5_3;
    void *temp_v0;

    var_s1 = arg1;
    if ((arg1 != NULL) || (temp_a1 = M2C_FIELD(arg0, u16 **, 0x244), var_s1 = temp_a1, (temp_a1 != NULL))) {
        temp_v0 = func_001B6FB0(M2C_FIELD(arg0, s32 *, 0x254), M2C_FIELD(var_s1, u8 *, 0xF));
        temp_t5 = M2C_FIELD(var_s1, u8 *, 5);
        temp_a0 = temp_v0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) temp_t5;
        M2C_FIELD(arg0, s32 *, 4) = (s32) temp_t5;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        temp_t7 = M2C_FIELD(var_s1, u8 *, 4);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (((s32) temp_t5 < (s32) temp_t7) ? temp_t5 : temp_t7);
        temp_t6 = M2C_FIELD(var_s1, u8 *, 6);
        temp_t5_2 = M2C_FIELD(var_s1, u8 *, 7);
        M2C_FIELD(arg0, s32 *, 0x180) = (s32) ((((temp_t6 < temp_t5_2) ^ 0) != 0) ? temp_t6 : temp_t5_2);
        M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(var_s1, u8 *, 7);
        temp_t7_2 = M2C_FIELD(temp_v0, u8 *, 4) + M2C_FIELD(var_s1, u8 *, 9);
        M2C_FIELD(arg0, s16 *, 0x188) = temp_t7_2;
        M2C_FIELD(arg0, s16 *, 0x190) = temp_t7_2;
        temp_t6_2 = M2C_FIELD(temp_v0, u8 *, 5) + M2C_FIELD(var_s1, u8 *, 0xA);
        M2C_FIELD(arg0, s16 *, 0x18A) = temp_t6_2;
        M2C_FIELD(arg0, s16 *, 0x192) = temp_t6_2;
        temp_t7_3 = M2C_FIELD(temp_v0, u8 *, 6) + M2C_FIELD(var_s1, u8 *, 0xB);
        M2C_FIELD(arg0, s16 *, 0x18C) = temp_t7_3;
        M2C_FIELD(arg0, s16 *, 0x194) = temp_t7_3;
        temp_t5_3 = M2C_FIELD(arg0, void **, 0x260);
        temp_t7_4 = M2C_FIELD(var_s1, u8 *, 8) + func_001B73E8(temp_a0, M2C_FIELD(arg0, s32 *, 0x254));
        M2C_FIELD(arg0, s16 *, 0x18E) = temp_t7_4;
        M2C_FIELD(arg0, s16 *, 0x196) = temp_t7_4;
        M2C_FIELD(arg0, f32 *, 0x1BC) = (f32) ((f32) M2C_FIELD(var_s1, u8 *, 0xC) * D_FLT_0036D450);
        M2C_FIELD(arg0, f32 *, 0x1C0) = (f32) ((f32) M2C_FIELD(var_s1, u8 *, 0xD) * D_FLT_0036D450);
        if (temp_t5_3 != NULL) {
            M2C_FIELD(arg0, u8 *, 0x1B0) = (u8) M2C_FIELD(temp_t5_3, u8 *, 0x1038);
            M2C_FIELD(arg0, u8 *, 0x1B1) = (u8) M2C_FIELD(temp_t5_3, u8 *, 0x1039);
            M2C_FIELD(arg0, u8 *, 0x1B2) = (u8) M2C_FIELD(temp_t5_3, u8 *, 0x103A);
            M2C_FIELD(arg0, u8 *, 0x1B3) = (u8) M2C_FIELD(temp_t5_3, u8 *, 0x103B);
            M2C_FIELD(arg0, f32 *, 0x1B4) = (f32) M2C_FIELD(temp_t5_3, f32 *, 0x103C);
            M2C_FIELD(arg0, f32 *, 0x1B8) = (f32) M2C_FIELD(temp_t5_3, f32 *, 0x1040);
            M2C_FIELD(arg0, s32 *, 8) = (s32) *(s32 *)0x01C6CABC;
        }
        temp_s4 = arg0 + 0x1CC;
        func_001C2F90(temp_s4, arg0);
        var_t7 = arg0 + 0x1A8;
        var_t6 = 6;
        do {
            *var_t7 = 0x64;
            var_t6 -= 1;
            var_t7 += 1;
        } while (var_t6 >= 0);
        var_s2 = 1;
        var_s0 = var_s1;
        do {
            temp_a1_2 = *var_s0;
            var_s2 -= 1;
            var_s0 += 2;
            func_001A24A0(arg0, temp_a1_2);
        } while (var_s2 >= 0);
        temp_t7_5 = M2C_FIELD(arg0, u16 **, 0x248);
        if (temp_t7_5 != NULL) {
            func_001A24A0(arg0, *temp_t7_5);
        }
        if (M2C_FIELD(var_s1, u8 *, 0x10) != 0) {
            var_s2_2 = 0;
            var_s0_2 = var_s1 + 0x14;
            do {
                var_s2_2 += 1;
                func_001A24A0(arg0, *var_s0_2);
                var_s0_2 += 2;
            } while (var_s2_2 < (s32) M2C_FIELD(var_s1, u8 *, 0x10));
        }
        if (M2C_FIELD(var_s1, u8 *, 0x11) != 0) {
            var_s2_3 = 0;
            var_s0_3 = var_s1 + 0x24;
            do {
                var_s2_3 += 1;
                func_001A24A0(arg0, *var_s0_3);
                var_s0_3 += 2;
            } while (var_s2_3 < (s32) M2C_FIELD(var_s1, u8 *, 0x11));
        }
        func_001C3060(temp_s4);
    }
}
