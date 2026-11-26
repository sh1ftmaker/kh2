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

static AnyCell unksp20;
static AnyCell unksp8;
// m2c valid-syntax output for 0x0029c098, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0029C098 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

M2C_UNK func_00287CC0(M2C_UNK) asm("func_00287CC0");
M2C_UNK func_00288018() asm("func_00288018");
M2C_UNK func_0029AAC0(s32) asm("func_0029AAC0");
M2C_UNK func_0029BE08() asm("func_0029BE08");
s32 func_00242848(s32 = 0) asm("func_00242848");
M2C_UNK func_00275B60() asm("func_00275B60");
M2C_UNK func_00276220(s32 = 0, M2C_UNK = 0) asm("func_00276220");
s32 func_00276358() asm("func_00276358");
s32 func_00276368() asm("func_00276368");
s32 func_00276398() asm("func_00276398");
s32 func_00276638(M2C_UNK = 0) asm("func_00276638");
M2C_UNK func_00276690(M2C_UNK = 0) asm("func_00276690");
M2C_UNK func_002766B0(M2C_UNK = 0) asm("func_002766B0");
s32 func_00276888() asm("func_00276888");
M2C_UNK func_00276DC0() asm("func_00276DC0");
s32 func_00287BC0() asm("func_00287BC0");
M2C_UNK func_00287BD0(s8 = 0, M2C_UNK = 0) asm("func_00287BD0");
M2C_UNK func_00287C00(s32 = 0) asm("func_00287C00");
s32 func_00287C10() asm("func_00287C10");
M2C_UNK func_00287C30() asm("func_00287C30");
M2C_UNK func_00287C90(M2C_UNK = 0) asm("func_00287C90");
M2C_UNK func_00287CC0(M2C_UNK = 0) asm("func_00287CC0");
s32 func_00287CD0() asm("func_00287CD0");
M2C_UNK func_00287DA0() asm("func_00287DA0");
s32 func_00287DF0(s32 = 0, s32 = 0, M2C_UNK = 0, M2C_UNK * = 0) asm("func_00287DF0");
M2C_UNK func_00287F90(M2C_UNK = 0) asm("func_00287F90");
s32 func_00288040() asm("func_00288040");
s32 func_00289310(s32 = 0) asm("func_00289310");
s32 func_00289380(s32 = 0) asm("func_00289380");
s32 func_0028ACC8(s32 = 0) asm("func_0028ACC8");
M2C_UNK func_0028AF18(s32 = 0, s32 = 0) asm("func_0028AF18");
s32 func_0028AF88(s32 = 0) asm("func_0028AF88");
M2C_UNK func_0028B1E8(s32 = 0, M2C_UNK = 0) asm("func_0028B1E8");
s32 func_00292630() asm("func_00292630");
M2C_UNK func_0029AA30() asm("func_0029AA30");
M2C_UNK func_0029AAC0(s32 = 0) asm("func_0029AAC0");
s32 func_0029AD40() asm("func_0029AD40");
M2C_UNK func_0029B698(s8 = 0) asm("func_0029B698");
M2C_UNK func_0029CB28(s32 = 0) asm("func_0029CB28");
M2C_UNK func_0029DE18() asm("func_0029DE18");
M2C_UNK func_0029DFC0() asm("func_0029DFC0");
M2C_UNK func_0029E258(M2C_UNK = 0) asm("func_0029E258");
M2C_UNK func_0029E298(s32 = 0) asm("func_0029E298");
s32 func_0029E2F8(s32 = 0) asm("func_0029E2F8");
M2C_UNK func_0029E430() asm("func_0029E430");
M2C_UNK func_0029E4C8(M2C_UNK = 0) asm("func_0029E4C8");
M2C_UNK func_0029E9D0() asm("func_0029E9D0");
M2C_UNK func_002A0908(s32 = 0) asm("func_002A0908");
extern M2C_UNK D_0029ECF0 asm("D_0029ECF0");
void func_0029C098(...) asm("_ZN2Tz5JmDic13CtrlCharaInfoEv");
void func_0029c098_impl(void) asm("_ZN2Tz5JmDic13CtrlCharaInfoEv");
void func_0029c098_impl(void) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s8 temp_a0;

    var_s2 = -1;
    temp_s0 = func_00287CD0();
    temp_s3 = func_00287BC0();
    if (temp_s0 != 2) {
        var_s2 = func_00289380(*(s32 *)0x35F200);
    }
    if ((temp_s0 != 2) && (func_0029E2F8(0) == 0)) {
        func_0029E4C8(0);
    }
    if (temp_s0 == 2) {
        temp_v0 = func_00287C10();
        if ((temp_v0 == 0x11) || (temp_v0 == 0x14) || (temp_v0 == 0x17)) {
            var_s3 = 0;
        } else {
            var_s3 = 0;
            if (func_00276368() != 0) {
                var_s3 = 1;
            } else if (func_0028ACC8(*(s32 *)0x35F200) != 0) {
                var_s3 = 1;
            } else if (func_00276888() != 0) {
                var_s3 = 1;
            } else if (func_0029AD40() != 0) {
                var_s3 = 1;
            }
        }
        if (var_s3 == 0) {
            var_s0 = 0;
loop_12:
            var_s0 += 1;
            if (func_0029E2F8(var_s0) == 0) {
                if (var_s0 >= 2) {
                    if (func_00292630() == 0) {
                        func_0029E430();
                        func_00276690(0);
                        func_002766B0(1);
                        if ((temp_v0 != 0x11) && (temp_v0 != 0x14) && (temp_v0 != 0x17)) {
                            func_0029AAC0(func_00287C10());
                            func_00276220(func_00276358(), 0);
                        }
                        func_00287C30();
                        temp_s3_2 = func_00287BC0();
                        func_0028AF18(*(s32 *)0x35F200, 0x73);
                        func_0028B1E8(*(s32 *)0x35F200, 1);
                        switch (temp_s3_2) {        /* switch 1; irregular */
                        case 15:                    /* switch 1 */
                        case 18:                    /* switch 1 */
                        case 21:                    /* switch 1 */
                            func_0029E9D0();
                            temp_a0 = *(s8 *)0x35F5C4;
                            if (temp_a0 > 0) {
                                func_00287BD0(temp_a0, 0);
                                func_002A0908(func_00276638(0xF));
                            } else {
                                func_0029B698(temp_a0);
                            }
                            *(s32 *)0x35F5C4 = -1;
                            break;
                        case 16:                    /* switch 1 */
                        case 19:                    /* switch 1 */
                        case 22:                    /* switch 1 */
                            func_00276220(func_00276358(), 0);
                            func_0029BE08();
                            return;
                        case 17:                    /* switch 1 */
                        case 20:                    /* switch 1 */
                        case 23:                    /* switch 1 */
                            unksp8 = unksp20;
                            func_0029DFC0();
                            func_0029E4C8(1);
                            func_00276690(1);
                            func_0028AF18(*(s32 *)0x35F200, ((func_0028AF88(*(s32 *)0x35F200) & ~0x50) | 0x30000) & ~3);
                            func_00287CC0(0);
                            return;
                        }
                    }
                } else {
                    goto loop_12;
                }
            } else {
                goto block_39;
            }
        } else {
block_39:
            if (var_s2 != -1) {
                func_00287F90(0);
                if ((temp_v0 == 0x11) || (temp_v0 == 0x14) || (temp_v0 == 0x17)) {
                    var_s0_2 = 0;
                    do {
                        func_0029E298(var_s0_2);
                        var_s0_2 += 1;
                    } while (var_s0_2 < 2);
                } else {
                    func_0029AAC0(func_00287C10());
                }
            }
        }
    } else {
        func_0029DE18();
        if (((var_s2 != -1) || (func_00289310(*(s32 *)0x35F200) != 0)) && (func_00276398() == 0)) {
            func_00276220(0, 2);
            func_00275B60();
        }
        if ((temp_s0 == 0) && (func_00276398() != 0)) {
            func_00287C90(1);
        }
        if (func_00242848(func_00287DF0(var_s2, func_00289310(*(s32 *)0x35F200), 1, &D_0029ECF0)) == 0) {
            switch (var_s2) {                       /* switch 2 */
            case -4:                                /* switch 2 */
                func_00287DA0();
                break;
            case -11:                               /* switch 2 */
            case -10:                               /* switch 2 */
                func_0029CB28(var_s2);
                func_0029AA30();
                func_00276220(var_s2 != -0xA, 1);
                var_a0 = func_00287BC0();
block_74:
                func_00287C00(var_a0);
                func_00287CC0(2);
                break;
            case -6:                                /* switch 2 */
                var_s1 = 0x11;
                if (temp_s3 != 0x10) {
                    var_s1 = ((temp_s3 ^ 0x13) != 0) ? 0x17 : 0x14;
                }
                func_0029E258(0);
                func_00276DC0();
                var_a0 = var_s1;
                goto block_74;
            case -2:                                /* switch 2 */
                var_s1_2 = 0xF;
                if (temp_s3 != 0x10) {
                    var_s1_2 = ((temp_s3 ^ 0x13) != 0) ? 0x15 : 0x12;
                }
                func_0029AA30();
                func_00276DC0();
                func_00276220(1, 1);
                var_a0 = var_s1_2;
                goto block_74;
            }
        }
        if (func_00288040() != 0) {
            func_00288018();
        }
    }
}
