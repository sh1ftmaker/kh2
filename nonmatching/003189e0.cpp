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

static AnyCell sp1114;
static AnyCell sp1130;
static AnyCell sp1224;
static AnyCell sp2C0;
static AnyCell sp2C8;
static AnyCell sp2D0;
static AnyCell sp2D8;
static AnyCell sp2E0;
static AnyCell sp2F0;
static AnyCell sp5B8;
static AnyCell sp5E0;
static AnyCell unksp11D0;
static AnyCell unksp11D8;
static AnyCell unksp11E0;
static AnyCell unksp11E8;
static AnyCell unksp11F0;
static AnyCell unksp11FC;
static AnyCell unksp1204;
static AnyCell unksp120C;
static AnyCell unksp1214;
static AnyCell unksp121C;
// m2c valid-syntax output for 0x003189e0, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_003189E0 {
    /* 0x0000 */ char pad0[0x2C0];
    /* 0x02C0 */ s64 sp2C0;                         /* inferred */
    /* 0x02C8 */ s64 sp2C8;                         /* inferred */
    /* 0x02D0 */ s64 sp2D0;                         /* inferred */
    /* 0x02D8 */ s64 sp2D8;                         /* inferred */
    /* 0x02E0 */ s64 sp2E0;                         /* inferred */
    /* 0x02E8 */ char pad2E8[8];
    /* 0x02F0 */ M2C_UNK sp2F0;                     /* inferred */
    /* 0x02F0 */ char pad2F0[0x2C8];
    /* 0x05B8 */ u32 sp5B8;                         /* inferred */
    /* 0x05BC */ char pad5BC[0x24];                 /* maybe part of sp5B8[0xA]? */
    /* 0x05E0 */ M2C_UNK sp5E0;                     /* inferred */
    /* 0x05E0 */ char pad5E0[0xB34];
    /* 0x1114 */ s32 (*sp1114)(M2C_UNK, M2C_UNK, s64, void *); /* inferred */
    /* 0x1118 */ char pad1118[0x18];                /* maybe part of sp1114[7]? */
    /* 0x1130 */ void *sp1130;                      /* inferred */
    /* 0x1134 */ char pad1134[0xF0];                /* maybe part of sp1130[0x3D]? */
    /* 0x1224 */ f32 sp1224;                        /* inferred */
    /* 0x1228 */ char pad1228[8];
};                                                  /* size = 0x1230 */

s32 func_00317D80(M2C_UNK * = 0, M2C_UNK * = 0) asm("func_00317D80");
M2C_UNK func_003181A0(M2C_UNK * = 0, M2C_UNK * = 0) asm("func_003181A0");
M2C_UNK func_003181F8(void * = 0, M2C_UNK * = 0, M2C_UNK = 0) asm("func_003181F8");
s64 func_00318290(void * = 0, M2C_UNK * = 0) asm("func_00318290");
s64 func_00318908(void * = 0, M2C_UNK * = 0) asm("func_00318908");
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x1140, 0x1144, 0x1148, 0x114c, 0x1150, 0x1154, 0x1158, 0x115c, 0x1160, 0x1164, 0x1168, 0x116c, 0x1170, 0x1174, 0x1178, 0x117c, 0x1180, 0x1184, 0x1188, 0x118c, 0x1190, 0x1194, 0x1198, 0x119c, 0x11a0, 0x11a4, 0x11a8, 0x11ac, 0x11b0, 0x11b4, 0x11b8, 0x11bc, 0x11c0, 0x11c4, 0x11c8, 0x11cc, 0x11f0, 0x11f4, 0x11f8, 0x1200, 0x1208, 0x1210, 0x1218, 0x1220], gap at: 0x11d0. */
s64 func_003189E0(s64 arg0 = 0, s64 arg1 = 0, s64 arg2 = 0, s64 arg3 = 0, M2C_UNK arg_sp0 = 0, ...) asm("func_003189e0");
s64 func_003189e0_impl(s64 arg0, s64 arg1, s64 arg2, s64 arg3, M2C_UNK arg_sp0) asm("func_003189e0");
s64 func_003189e0_impl(s64 arg0, s64 arg1, s64 arg2, s64 arg3, M2C_UNK arg_sp0) {
    s64 sp2C0;
    M2C_UNK sp2F0;
    M2C_UNK sp5E0;
    void *sp1130;
    f32 sp1224;
    M2C_UNK *var_t5;
    M2C_UNK *var_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s64 var_v0;
    void *var_t6_2;
    void *var_t7;

    unksp11D0 = arg0;
    unksp11D8 = arg1;
    unksp11E0 = arg2;
    sp1130 = (void *) arg0;
    unksp11E8 = arg3;
    sp1224 = M2C_ERROR(/* Read from unset register $fs5f */);
    unksp121C = M2C_ERROR(/* Read from unset register $fs4f */);
    unksp1214 = M2C_ERROR(/* Read from unset register $fs3f */);
    unksp120C = M2C_ERROR(/* Read from unset register $fs2f */);
    unksp1204 = M2C_ERROR(/* Read from unset register $fs1f */);
    unksp11FC = M2C_ERROR(/* Read from unset register $fs0f */);
    func_003181F8(sp, &arg_sp0, saved_reg_ra);
    var_t6 = &sp2F0;
    var_t7 = sp;
    do {
        M2C_FIELD(var_t6, s64 *, 0) = (s64) M2C_FIELD(var_t7, s64 *, 0);
        M2C_FIELD(var_t6, s64 *, 8) = (s64) M2C_FIELD(var_t7, s64 *, 8);
        M2C_FIELD(var_t6, s64 *, 0x10) = (s64) M2C_FIELD(var_t7, s64 *, 0x10);
        M2C_FIELD(var_t6, s64 *, 0x18) = (s64) M2C_FIELD(var_t7, s64 *, 0x18);
        M2C_FIELD(var_t6, s64 *, 0x20) = (s64) M2C_FIELD(var_t7, s64 *, 0x20);
        M2C_FIELD(var_t6, s64 *, 0x28) = (s64) M2C_FIELD(var_t7, s64 *, 0x28);
        M2C_FIELD(var_t6, s64 *, 0x30) = (s64) M2C_FIELD(var_t7, s64 *, 0x30);
        M2C_FIELD(var_t6, s64 *, 0x38) = (s64) M2C_FIELD(var_t7, s64 *, 0x38);
        var_t7 += 0x40;
        var_t6 += 0x40;
    } while (var_t7 != &sp2C0);
    M2C_FIELD(var_t6, s64 *, 0) = sp2C0;
    M2C_FIELD(var_t6, s64 *, 8) = sp2C8;
    M2C_FIELD(var_t6, s64 *, 0x10) = sp2D0;
    M2C_FIELD(var_t6, s64 *, 0x18) = sp2D8;
    M2C_FIELD(var_t6, s64 *, 0x20) = sp2E0;
loop_3:
    temp_v0 = func_00317D80(&sp2F0, &sp5E0);
    if (temp_v0 != 5) {
        if (temp_v0 == 0) {
            if (sp1114 != NULL) {
                temp_v0_2 = sp1114(1, 1, M2C_FIELD(sp1130, s64 *, 0), sp1130);
                if (temp_v0_2 != 6) {
                    var_v0 = 3;
                    if (temp_v0_2 == 8) {
                        goto block_8;
                    }
                } else {
                    var_t5 = &sp2F0;
                    M2C_FIELD(sp1130, s64 *, 0x10) = 0;
                    M2C_FIELD(sp1130, s64 *, 0x18) = (s64) sp5B8;
                    var_t6_2 = sp;
                    do {
                        M2C_FIELD(var_t5, s64 *, 0) = (s64) M2C_FIELD(var_t6_2, s64 *, 0);
                        M2C_FIELD(var_t5, s64 *, 8) = (s64) M2C_FIELD(var_t6_2, s64 *, 8);
                        M2C_FIELD(var_t5, s64 *, 0x10) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x10);
                        M2C_FIELD(var_t5, s64 *, 0x18) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x18);
                        M2C_FIELD(var_t5, s64 *, 0x20) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x20);
                        M2C_FIELD(var_t5, s64 *, 0x28) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x28);
                        M2C_FIELD(var_t5, s64 *, 0x30) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x30);
                        M2C_FIELD(var_t5, s64 *, 0x38) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x38);
                        var_t6_2 += 0x40;
                        var_t5 += 0x40;
                    } while (var_t6_2 != &sp2C0);
                    M2C_FIELD(var_t5, s64 *, 0) = (s64) M2C_FIELD(var_t6_2, s64 *, 0);
                    M2C_FIELD(var_t5, s64 *, 8) = (s64) M2C_FIELD(var_t6_2, s64 *, 8);
                    M2C_FIELD(var_t5, s64 *, 0x10) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x10);
                    M2C_FIELD(var_t5, s64 *, 0x18) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x18);
                    M2C_FIELD(var_t5, s64 *, 0x20) = (s64) M2C_FIELD(var_t6_2, s64 *, 0x20);
                    var_v0 = func_00318908(sp1130, &sp2F0);
                    if (var_v0 == 7) {
                        var_v0 = func_00318290(sp, &sp2F0);
                        unksp11F0 = sp5B8;
                    }
                }
            } else {
block_8:
                func_003181A0(&sp2F0, &sp5E0);
                goto loop_3;
            }
        } else {
            var_v0 = 3;
        }
    } else {
        var_v0 = 5;
    }
    return var_v0;
}
