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

static AnyCell sp60;
static AnyCell sp80;
static AnyCell sp84;
static AnyCell sp88;
// m2c valid-syntax output for 0x0026b5a0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0026B5A0 {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x1C];                    /* maybe part of sp60[8]? */
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ s32 sp84;                            /* inferred */
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ char pad8C[0x34];
};                                                  /* size = 0xC0 */

u16 *func_001A8110(u16 * = 0) asm("func_001A8110");
s32 func_00257070(s32 = 0) asm("func_00257070");
void *func_00281180(s32 = 0, s32 = 0) asm("func_00281180");
M2C_UNK func_002FDE18(void * = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_002FDE18");
void func_0026B5A0(s32 arg0 = 0, ...) asm("_ZN2Tz7CmEquip8SortItemEi");
void func_0026b5a0_impl(s32 arg0) asm("_ZN2Tz7CmEquip8SortItemEi");
void func_0026b5a0_impl(s32 arg0) {
    s32 sp60;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 *var_t1;
    s32 *var_t5_2;
    s32 temp_t2;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t7_2;
    s32 temp_t7_4;
    s32 temp_t7_5;
    s32 var_s2;
    s32 var_s3;
    s32 var_t3_2;
    s32 var_t3_4;
    s32 var_t4_2;
    s32 var_t4_3;
    s32 var_t4_4;
    s32 var_t6;
    s32 var_t7;
    s32 var_v0;
    u16 *temp_v0;
    u16 *var_s0;
    u16 temp_t7;
    u8 temp_s1;
    u8 var_t3;
    u8 var_t3_3;
    u8 var_t3_5;
    void *temp_s4;
    void *temp_t4;
    void *temp_t7_3;
    void *var_t2;
    void *var_t2_2;
    void *var_t4;
    void *var_t4_5;
    void *var_t5;
    void *var_t5_3;
    void *var_t5_4;

    var_s0 = NULL;
    temp_s4 = M2C_FIELD(func_00281180(*(s32 *)0x35F010, func_00257070((arg0 >= 0) ? arg0 : 1)), void **, 0x244);
    temp_s1 = M2C_FIELD(temp_s4, u8 *, 0x12);
    func_002FDE18(sp, 0, 0x60);
    if (temp_s1 != 0) {
        var_t5 = temp_s4;
        var_t4 = sp;
        var_t3 = temp_s1;
        do {
            var_t3 -= 1;
            M2C_FIELD(var_t4, s32 *, 0) = (s32) M2C_FIELD(var_t5, u16 *, 0x34);
            temp_t7 = M2C_FIELD(var_t5, u16 *, 0x44);
            M2C_FIELD(var_t4, s32 *, 8) = 0x3E7;
            var_t5 += 2;
            M2C_FIELD(var_t4, s32 *, 4) = (s32) temp_t7;
            var_t4 += 0xC;
        } while (var_t3 != 0);
    }
    var_s2 = 0;
    var_t4_2 = 0;
    if (temp_s1 != 0) {
        var_t2 = sp;
        var_t1 = &sp60;
        do {
            temp_t7_2 = M2C_FIELD(var_t2, s32 *, 0);
            var_v0 = temp_t7_2;
            if ((temp_t7_2 != 0) || (var_v0 = M2C_FIELD(var_t2, s32 *, 4), (var_v0 != 0))) {
                var_t3_2 = 0;
                var_t6 = var_s2 > 0;
                if (var_t6 != 0) {
                    var_t5_2 = &sp60;
loop_9:
                    var_t5_2 += 4;
                    if (var_v0 != *var_t5_2) {
                        var_t3_2 += 1;
                        var_t6 = var_t3_2 < var_s2;
                        if (var_t6 == 0) {
                            goto block_11;
                        }
                        goto loop_9;
                    }
                    if (var_t6 == 0) {
                        goto block_11;
                    }
                } else {
block_11:
                    *var_t1 = var_v0;
                    var_s2 += 1;
                    var_t1 += 4;
                }
            }
            var_t4_2 += 1;
            var_t2 += 0xC;
        } while (var_t4_2 < (s32) temp_s1);
    }
    var_s3 = 0;
loop_14:
    temp_v0 = func_001A8110(var_s0);
    var_s0 = temp_v0;
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, u8 *, 2) == 0) {
            var_t4_3 = 0;
            if (var_s2 > 0) {
                var_t7 = 0 * 4;
                do {
                    temp_t7_3 = var_t7 + sp;
                    if (M2C_FIELD(var_s0, u16 *, 0) == M2C_FIELD(temp_t7_3, s32 *, 0x60)) {
                        if (temp_s1 != 0) {
                            var_t2_2 = sp;
                            var_t3_3 = temp_s1;
                            do {
                                temp_t6 = M2C_FIELD(var_t2_2, s32 *, 0);
                                temp_t5 = M2C_FIELD(temp_t7_3, s32 *, 0x60);
                                if ((temp_t6 == temp_t5) || (M2C_FIELD(var_t2_2, s32 *, 4) == temp_t5)) {
                                    M2C_FIELD(var_t2_2, s32 *, 8) = (s32) (var_s3 + (temp_t6 == 0));
                                }
                                var_t3_3 -= 1;
                                var_t2_2 += 0xC;
                            } while (var_t3_3 != 0);
                        }
                        var_s3 += 2;
                    }
                    var_t4_3 += 1;
                    var_t7 = var_t4_3 * 4;
                } while (var_t4_3 < var_s2);
            }
        }
        goto loop_14;
    }
    var_t4_4 = 0;
    if (temp_s1 != 0) {
        do {
            temp_t2 = var_t4_4 + 1;
            if (temp_t2 < (s32) temp_s1) {
                var_t3_4 = temp_s1 - temp_t2;
                temp_t4 = (var_t4_4 * 0xC) + sp;
                var_t5_3 = (temp_t2 * 0xC) + sp;
                do {
                    var_t3_4 -= 1;
                    if (M2C_FIELD(var_t5_3, s32 *, 8) < M2C_FIELD(temp_t4, s32 *, 8)) {
                        temp_t7_4 = M2C_FIELD(temp_t4, s32 *, 0);
                        sp80 = temp_t7_4;
                        temp_t6_2 = M2C_FIELD(temp_t4, s32 *, 4);
                        sp84 = temp_t6_2;
                        temp_t7_5 = M2C_FIELD(temp_t4, s32 *, 8);
                        sp88 = temp_t7_5;
                        M2C_FIELD(temp_t4, s32 *, 0) = (s32) M2C_FIELD(var_t5_3, s32 *, 0);
                        M2C_FIELD(temp_t4, s32 *, 4) = (s32) M2C_FIELD(var_t5_3, s32 *, 4);
                        M2C_FIELD(temp_t4, s32 *, 8) = (s32) M2C_FIELD(var_t5_3, s32 *, 8);
                        M2C_FIELD(var_t5_3, s32 *, 0) = temp_t7_4;
                        M2C_FIELD(var_t5_3, s32 *, 4) = temp_t6_2;
                        M2C_FIELD(var_t5_3, s32 *, 8) = temp_t7_5;
                    }
                    var_t5_3 += 0xC;
                } while (var_t3_4 != 0);
            }
            var_t4_4 = temp_t2;
        } while (temp_t2 < (s32) temp_s1);
    }
    if (temp_s1 != 0) {
        var_t5_4 = temp_s4;
        var_t3_5 = temp_s1;
        var_t4_5 = sp;
        do {
            var_t3_5 -= 1;
            M2C_FIELD(var_t5_4, u16 *, 0x34) = (u16) M2C_FIELD(var_t4_5, u16 *, 0);
            M2C_FIELD(var_t5_4, u16 *, 0x44) = (u16) M2C_FIELD(var_t4_5, u16 *, 4);
            var_t4_5 += 0xC;
            var_t5_4 += 2;
        } while (var_t3_5 != 0);
    }
}
