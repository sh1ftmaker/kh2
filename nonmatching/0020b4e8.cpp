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

// m2c valid-syntax output for 0x0020b4e8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0020B4E8 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

f32 func_0020B410(u8 = 0) asm("func_0020B410");
s8 func_0020B458(u8 = 0) asm("func_0020B458");
s32 func_00313B80(f32 = 0) asm("func_00313B80");
s32 func_003142E0(s64 = 0, s32 = 0) asm("func_003142E0");
extern f32 D_FLT_003706CC asm("D_003706CC");
void func_0020B4E8(void *arg0 = 0, void *arg1 = 0, void *arg2 = 0, ...) asm("_Z5birthP18VRyjMegaBirthModelP18PRyjMegaBirthModelP6VColorP14_PARTICLE_DATAP14_PARTICLE_WMATP15_PARTICLE_COLOR");
void func_0020b4e8_impl(void *arg0, void *arg1, void *arg2) asm("_Z5birthP18VRyjMegaBirthModelP18PRyjMegaBirthModelP6VColorP14_PARTICLE_DATAP14_PARTICLE_WMATP15_PARTICLE_COLOR");
void func_0020b4e8_impl(void *arg0, void *arg1, void *arg2) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    s32 temp_t4;
    s32 var_condition_bit;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_t2;
    s32 var_t4;
    s32 var_t4_2;
    s32 var_t6_4;
    s32 var_t6_5;
    s32 var_t7;
    s32 var_t7_2;
    s32 var_t7_3;
    s32 var_t7_4;
    s32 var_t7_7;
    s32 var_t7_8;
    s32 var_t7_9;
    s64 temp_s0;
    u16 temp_t6_11;
    u8 temp_a0;
    u8 temp_t6;
    u8 temp_t6_10;
    u8 temp_t6_2;
    u8 temp_t6_3;
    u8 temp_t6_4;
    u8 temp_t6_5;
    u8 temp_t6_6;
    u8 temp_t6_7;
    u8 temp_t6_8;
    u8 temp_t6_9;
    void *var_s3;
    void *var_s3_2;
    void *var_t3;
    void *var_t5;
    void *var_t5_2;
    void *var_t5_3;
    void *var_t5_4;
    void *var_t5_5;
    void *var_t6;
    void *var_t6_2;
    void *var_t6_3;
    void *var_t7_5;
    void *var_t7_6;

    M2C_FIELD(arg1, s8 *, 0x22) = func_0020B458(M2C_FIELD(arg0, u8 *, 0x34));
    M2C_FIELD(arg1, s8 *, 0x23) = func_0020B458(M2C_FIELD(arg0, u8 *, 0x35));
    M2C_FIELD(arg1, s8 *, 0x24) = func_0020B458(M2C_FIELD(arg0, u8 *, 0x36));
    M2C_FIELD(arg1, s8 *, 0x25) = func_0020B458(M2C_FIELD(arg0, u8 *, 0x37));
    temp_t6 = M2C_FIELD(arg0, u8 *, 0x12);
    if (temp_t6 & 0xFF) {
        M2C_FIELD(arg1, u8 *, 0x98) = temp_t6;
        M2C_FIELD(arg1, u8 *, 0x98) = (s64) ((s64) M2C_FIELD(arg1, u8 *, 0x98) | 0x200);
    }
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg1, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg1, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
    M2C_FIELD(arg1, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x48);
    M2C_FIELD(arg1, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x4C);
    temp_t6_2 = M2C_FIELD(arg0, u8 *, 0xF4);
    if (temp_t6_2 & 0xFF) {
        if (temp_t6_2 & 0x20) {
            func_0020B410();
            temp_fv0f = (f32) M2C_FIELD(arg0, s32 *, 0x5C);
            M2C_FIELD(arg1, f32 *, 0x40) = temp_fv0f;
            M2C_FIELD(arg1, f32 *, 0x48) = temp_fv0f;
            M2C_FIELD(arg1, f32 *, 0x44) = temp_fv0f;
            temp_t6_3 = M2C_FIELD(arg0, u8 *, 0xF4);
            if (temp_t6_3 & 1 & 0xFF) {
                var_t7 = temp_t6_3 & 2;
                if (temp_t6_3 & 2) {
                    if (func_003142E0(0x1FF << 0x35, func_00313B80(func_0020B410())) < 0) {
                        var_s0 = 0;
                        var_t5 = arg1;
                        do {
                            var_s0 += 1;
                            M2C_FIELD(var_t5, s32 *, 0x40) = (s32) -M2C_FIELD(var_t5, s32 *, 0x40);
                            var_t5 += 4;
                        } while (var_s0 < 3);
                    }
                    goto block_9;
                }
                goto block_100;
            }
            var_t7 = temp_t6_3 & 2;
block_100:
            var_t7_2 = temp_t6_3 & 4;
            if (var_t7 != 0) {
                var_s0_2 = 0;
                var_t5_2 = arg1;
                do {
                    var_s0_2 += 1;
                    M2C_FIELD(var_t5_2, s32 *, 0x40) = (s32) -M2C_FIELD(var_t5_2, s32 *, 0x40);
                    var_t5_2 += 4;
                } while (var_s0_2 < 3);
                goto block_9;
            }
        } else {
            func_0020B410();
            M2C_FIELD(arg1, f32 *, 0x40) = (f32) M2C_FIELD(arg0, s32 *, 0x5C);
            func_0020B410();
            M2C_FIELD(arg1, f32 *, 0x44) = (f32) M2C_FIELD(arg0, s32 *, 0x60);
            func_0020B410();
            M2C_FIELD(arg1, f32 *, 0x48) = (f32) M2C_FIELD(arg0, s32 *, 0x64);
            temp_t6_4 = M2C_FIELD(arg0, u8 *, 0xF4);
            if ((temp_t6_4 & 1 & 0xFF) && (temp_t6_4 & 2)) {
                var_s0_3 = 0;
                var_s3 = arg1;
                do {
                    var_s0_3 += 1;
                    if (func_003142E0(0x1FF << 0x35, func_00313B80(func_0020B410())) < 0) {
                        M2C_FIELD(var_s3, s32 *, 0x40) = (s32) -M2C_FIELD(var_s3, s32 *, 0x40);
                    }
                    var_s3 += 4;
                } while (var_s0_3 < 3);
                goto block_9;
            }
            var_t7_2 = temp_t6_4 & 4;
            if (temp_t6_4 & 2) {
                var_s0_4 = 0;
                var_t5_3 = arg1;
                do {
                    var_s0_4 += 1;
                    M2C_FIELD(var_t5_3, s32 *, 0x40) = (s32) -M2C_FIELD(var_t5_3, s32 *, 0x40);
                    var_t5_3 += 4;
                } while (var_s0_4 < 3);
block_9:
                goto block_10;
            }
        }
    } else {
block_10:
        var_t7_2 = M2C_FIELD(arg0, u8 *, 0xF4) & 4;
    }
    var_t4 = 2;
    if (var_t7_2 != 0) {
        var_t5_4 = arg1;
        do {
            var_t4 -= 1;
            M2C_FIELD(var_t5_4, s32 *, 0x28) = (s32) (M2C_FIELD(var_t5_4, s32 *, 0x28) + M2C_FIELD(var_t5_4, s32 *, 0x40));
            var_t5_4 += 4;
        } while (var_t4 >= 0);
    }
    var_t4_2 = 2;
    if (M2C_FIELD(arg0, u8 *, 0xF4) & 8) {
        var_t5_5 = arg1;
        do {
            var_t4_2 -= 1;
            M2C_FIELD(var_t5_5, s32 *, 0x34) = (s32) (M2C_FIELD(var_t5_5, s32 *, 0x34) + M2C_FIELD(var_t5_5, s32 *, 0x40));
            var_t5_5 += 4;
        } while (var_t4_2 >= 0);
    }
    var_t3 = arg1 + 0x20;
    var_t2 = 2;
    do {
        temp_t4 = M2C_FIELD(var_t3, s32 *, 8);
        if ((u32) (temp_t4 + 0x8000) > 0xFFFFU) {
            M2C_FIELD(var_t3, s32 *, 8) = (s32) (temp_t4 - (((s32) ((temp_t4 >= 0) ? temp_t4 : (temp_t4 + 0x7FFF)) >> 0xF) << 0xF));
        }
        var_t2 -= 1;
        var_t3 += 4;
    } while (var_t2 >= 0);
    M2C_FIELD(arg1, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg1, f32 *, 0x58) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg1, f32 *, 0x5C) = (f32) M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg1, f32 *, 0x60) = (f32) M2C_FIELD(arg0, f32 *, 0x74);
    M2C_FIELD(arg1, f32 *, 0x64) = (f32) M2C_FIELD(arg0, f32 *, 0x78);
    M2C_FIELD(arg1, f32 *, 0x68) = (f32) M2C_FIELD(arg0, f32 *, 0x7C);
    temp_t6_5 = M2C_FIELD(arg0, u8 *, 0xF3);
    if (temp_t6_5 & 0xFF) {
        if (temp_t6_5 & 0x20) {
            temp_fv0 = func_0020B410() * M2C_FIELD(arg0, f32 *, 0x8C);
            M2C_FIELD(arg1, f32 *, 0x6C) = temp_fv0;
            M2C_FIELD(arg1, f32 *, 0x74) = temp_fv0;
            M2C_FIELD(arg1, f32 *, 0x70) = temp_fv0;
            temp_t6_6 = M2C_FIELD(arg0, u8 *, 0xF3);
            if (temp_t6_6 & 1 & 0xFF) {
                var_t7_3 = temp_t6_6 & 2;
                if (temp_t6_6 & 2) {
                    if (func_003142E0(0x1FF << 0x35, func_00313B80(func_0020B410())) < 0) {
                        var_s0_5 = 0;
                        var_t6 = arg1 + 0x60;
                        do {
                            var_s0_5 += 1;
                            M2C_FIELD(var_t6, f32 *, 0xC) = (f32) -M2C_FIELD(var_t6, f32 *, 0xC);
                            var_t6 += 4;
                        } while (var_s0_5 < 3);
                    }
                    goto block_29;
                }
                goto block_83;
            }
            var_t7_3 = temp_t6_6 & 2;
block_83:
            var_t7_4 = temp_t6_6 & 4;
            if (var_t7_3 != 0) {
                var_s0_6 = 0;
                var_t6_2 = arg1 + 0x60;
                do {
                    var_s0_6 += 1;
                    M2C_FIELD(var_t6_2, f32 *, 0xC) = (f32) -M2C_FIELD(var_t6_2, f32 *, 0xC);
                    var_t6_2 += 4;
                } while (var_s0_6 < 3);
                goto block_29;
            }
        } else {
            M2C_FIELD(arg1, f32 *, 0x6C) = (f32) (func_0020B410() * M2C_FIELD(arg0, f32 *, 0x8C));
            M2C_FIELD(arg1, f32 *, 0x70) = (f32) (func_0020B410() * M2C_FIELD(arg0, f32 *, 0x90));
            M2C_FIELD(arg1, f32 *, 0x74) = (f32) (func_0020B410() * M2C_FIELD(arg0, f32 *, 0x94));
            temp_t6_7 = M2C_FIELD(arg0, u8 *, 0xF3);
            if ((temp_t6_7 & 1 & 0xFF) && (temp_t6_7 & 2)) {
                var_s0_7 = 0;
                var_s3_2 = arg1 + 0x60;
                do {
                    var_s0_7 += 1;
                    if (func_003142E0(0x1FF << 0x35, func_00313B80(func_0020B410())) < 0) {
                        M2C_FIELD(var_s3_2, f32 *, 0xC) = (f32) -M2C_FIELD(var_s3_2, f32 *, 0xC);
                    }
                    var_s3_2 += 4;
                } while (var_s0_7 < 3);
                goto block_29;
            }
            var_t7_4 = temp_t6_7 & 4;
            if (temp_t6_7 & 2) {
                var_s0_8 = 0;
                var_t6_3 = arg1 + 0x60;
                do {
                    var_s0_8 += 1;
                    M2C_FIELD(var_t6_3, f32 *, 0xC) = (f32) -M2C_FIELD(var_t6_3, f32 *, 0xC);
                    var_t6_3 += 4;
                } while (var_s0_8 < 3);
block_29:
                goto block_30;
            }
        }
    } else {
block_30:
        var_t7_4 = M2C_FIELD(arg0, u8 *, 0xF3) & 4;
    }
    var_t7_5 = arg1;
    if (var_t7_4 != 0) {
        var_t6_4 = 2;
        do {
            var_t6_4 -= 1;
            M2C_FIELD(var_t7_5, f32 *, 0x54) = (f32) (M2C_FIELD(var_t7_5, f32 *, 0x54) + M2C_FIELD(var_t7_5, f32 *, 0x6C));
            var_t7_5 += 4;
        } while (var_t6_4 >= 0);
    }
    var_t7_6 = arg1;
    if (M2C_FIELD(arg0, u8 *, 0xF3) & 8) {
        var_t6_5 = 2;
        do {
            var_t6_5 -= 1;
            M2C_FIELD(var_t7_6, f32 *, 0x60) = (f32) (M2C_FIELD(var_t7_6, f32 *, 0x60) + M2C_FIELD(var_t7_6, f32 *, 0x6C));
            var_t7_6 += 4;
        } while (var_t6_5 >= 0);
    }
    M2C_FIELD(arg1, f32 *, 0x78) = (f32) M2C_FIELD(arg0, f32 *, 0xC4);
    temp_fs0 = M2C_FIELD(arg0, f32 *, 0xCC);
    if (temp_fs0 != 0.0f) {
        M2C_FIELD(arg1, f32 *, 0x78) = (f32) (M2C_FIELD(arg1, f32 *, 0x78) + ((2.0f * temp_fs0 * func_0020B410()) - M2C_FIELD(arg0, f32 *, 0xCC)));
    }
    M2C_FIELD(arg1, f32 *, 0x7C) = (f32) M2C_FIELD(arg0, f32 *, 0x98);
    M2C_FIELD(arg1, f32 *, 0x80) = (f32) M2C_FIELD(arg0, f32 *, 0xA8);
    M2C_FIELD(arg1, f32 *, 0x84) = (f32) M2C_FIELD(arg0, f32 *, 0x9C);
    M2C_FIELD(arg1, f32 *, 0x88) = (f32) M2C_FIELD(arg0, f32 *, 0xAC);
    temp_t6_8 = M2C_FIELD(arg0, u8 *, 0xF5);
    if (temp_t6_8 & 0xFF) {
        if (temp_t6_8 & 0x20) {
            temp_fv0_2 = func_0020B410() * M2C_FIELD(arg0, f32 *, 0xA4);
            M2C_FIELD(arg1, f32 *, 0x8C) = temp_fv0_2;
            M2C_FIELD(arg1, f32 *, 0x90) = temp_fv0_2;
            temp_t6_9 = M2C_FIELD(arg0, u8 *, 0xF5);
            if (temp_t6_9 & 1 & 0xFF) {
                var_t7_7 = temp_t6_9 & 2;
                if (temp_t6_9 & 2) {
                    if (func_003142E0(0x1FF << 0x35, func_00313B80(func_0020B410())) < 0) {
                        goto block_45;
                    }
                    goto block_46;
                }
                goto block_72;
            }
            goto block_71;
        }
        M2C_FIELD(arg1, f32 *, 0x8C) = (f32) (func_0020B410() * M2C_FIELD(arg0, f32 *, 0xA4));
        M2C_FIELD(arg1, f32 *, 0x90) = (f32) (func_0020B410() * M2C_FIELD(arg0, f32 *, 0xB4));
        temp_t6_10 = M2C_FIELD(arg0, u8 *, 0xF5);
        if (temp_t6_10 & 1 & 0xFF) {
            var_t7_7 = temp_t6_10 & 2;
            if (temp_t6_10 & 2) {
                temp_s0 = 0x1FF << 0x35;
                if (func_003142E0(temp_s0, func_00313B80(func_0020B410())) < 0) {
                    M2C_FIELD(arg1, f32 *, 0x8C) = (f32) -M2C_FIELD(arg1, f32 *, 0x8C);
                }
                if (func_003142E0(temp_s0, func_00313B80(func_0020B410())) < 0) {
                    M2C_FIELD(arg1, f32 *, 0x90) = (f32) -M2C_FIELD(arg1, f32 *, 0x90);
                }
                goto block_46;
            }
            goto block_72;
        }
block_71:
        var_t7_7 = M2C_FIELD(arg0, u8 *, 0xF5) & 2;
block_72:
        var_t7_8 = M2C_FIELD(arg0, u8 *, 0xF5) & 4;
        if (var_t7_7 != 0) {
block_45:
            M2C_FIELD(arg1, f32 *, 0x8C) = (f32) -M2C_FIELD(arg1, f32 *, 0x8C);
            M2C_FIELD(arg1, f32 *, 0x90) = (f32) -M2C_FIELD(arg1, f32 *, 0x90);
block_46:
            goto block_47;
        }
    } else {
block_47:
        var_t7_8 = M2C_FIELD(arg0, u8 *, 0xF5) & 4;
    }
    var_t7_9 = M2C_FIELD(arg0, u8 *, 0xF5) & 8;
    if (var_t7_8 != 0) {
        M2C_FIELD(arg1, f32 *, 0x7C) = (f32) (M2C_FIELD(arg1, f32 *, 0x7C) + M2C_FIELD(arg1, f32 *, 0x8C));
        M2C_FIELD(arg1, f32 *, 0x80) = (f32) (M2C_FIELD(arg1, f32 *, 0x80) + M2C_FIELD(arg1, f32 *, 0x90));
        var_t7_9 = M2C_FIELD(arg0, u8 *, 0xF5) & 8;
    }
    if (var_t7_9 != 0) {
        M2C_FIELD(arg1, f32 *, 0x84) = (f32) (M2C_FIELD(arg1, f32 *, 0x84) + M2C_FIELD(arg1, f32 *, 0x8C));
        M2C_FIELD(arg1, f32 *, 0x88) = (f32) (M2C_FIELD(arg1, f32 *, 0x88) + M2C_FIELD(arg1, f32 *, 0x90));
    }
    temp_t6_11 = M2C_FIELD(arg0, u16 *, 0x10);
    if (temp_t6_11 & 0xFFFF) {
        M2C_FIELD(arg1, u16 *, 0x20) = temp_t6_11;
    } else {
        M2C_FIELD(arg1, u16 *, 0x20) = -1U;
    }
    if (arg2 != NULL) {
        M2C_FIELD(arg2, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg2, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg2, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
        M2C_FIELD(arg2, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    }
    M2C_FIELD(arg1, s32 *, 0x94) = 0;
    temp_a0 = M2C_FIELD(arg0, u8 *, 0xF6);
    switch (temp_a0) {                              /* irregular */
    case 1:
        if (D_FLT_003706CC < func_0020B410(temp_a0)) {
            M2C_FIELD(arg1, f32 *, 0x54) = (f32) -M2C_FIELD(arg1, f32 *, 0x54);
        }
        break;
    case 3:
        temp_fs0_2 = D_FLT_003706CC;
        if (temp_fs0_2 < func_0020B410(temp_a0)) {
            M2C_FIELD(arg1, f32 *, 0x54) = (f32) -M2C_FIELD(arg1, f32 *, 0x54);
        }
        var_condition_bit = temp_fs0_2 < func_0020B410();
block_68:
        if (var_condition_bit) {
            M2C_FIELD(arg1, f32 *, 0x58) = (f32) -M2C_FIELD(arg1, f32 *, 0x58);
        }
        break;
    case 2:
        var_condition_bit = D_FLT_003706CC < func_0020B410(temp_a0);
        goto block_68;
    }
}
