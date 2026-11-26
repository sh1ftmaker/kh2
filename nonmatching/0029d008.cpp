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

static AnyCell sp40;
static AnyCell sp44;
// m2c valid-syntax output for 0x0029d008, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0029D008 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x58];
};                                                  /* size = 0xA0 */

M2C_UNK func_00138C10(s32 = 0, s32 = 0) asm("func_00138C10");
s32 func_00192048(u16 = 0) asm("func_00192048");
s32 func_00192A80(s32 = 0) asm("func_00192A80");
s32 func_00192E50(s32 = 0, void * = 0, M2C_UNK = 0, s32 = 0) asm("func_00192E50");
M2C_UNK func_002595E8(void * = 0, s32 = 0) asm("func_002595E8");
s32 func_002766D0() asm("func_002766D0");
void *func_002891B8(s32 = 0, s32 = 0) asm("func_002891B8");
s32 func_0028AFA8(s32 = 0) asm("func_0028AFA8");
s32 func_0028B038(s32 = 0) asm("func_0028B038");
M2C_UNK func_0028BE78(s32 = 0, s32 = 0) asm("func_0028BE78");
M2C_UNK func_0028DEF0(void * = 0, s32 = 0) asm("func_0028DEF0");
s32 func_00294000(M2C_UNK = 0) asm("func_00294000");
s32 func_002943B0(void * = 0) asm("func_002943B0");
u16 func_00295430(s8 = 0, M2C_UNK = 0) asm("func_00295430");
s32 func_002A9E98(u16 = 0) asm("func_002A9E98");
s32 func_002A9F50(u16 = 0) asm("func_002A9F50");
void func_0029D008(...) asm("_ZN2Tz5JmDic14UpdateCharaSelEv");
void func_0029d008_impl(void) asm("_ZN2Tz5JmDic14UpdateCharaSelEv");
void func_0029d008_impl(void) {
    s32 sp40;
    s32 sp44;
    s16 temp_fp;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_t7;
    s32 var_v0;
    u16 temp_s2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_5;

    var_s1 = 9;
    sp40 = func_002766D0();
    sp44 = func_00294000(3) + 0x10;
    var_s0 = sp40 + 0xA998;
    do {
        func_00138C10(var_s0, 2);
        var_s1 -= 1;
        var_s0 += 0x198;
    } while (var_s1 >= 0);
    temp_v0 = func_0028B038(*(s32 *)0x35F200);
    func_0028BE78(*(s32 *)0x35F214, temp_v0);
    if (M2C_FIELD(*(void **)0x35F5AC, s8 *, 5) == 0) {
        temp_s0 = func_002891B8(*(s32 *)0x35F200, 0);
        M2C_FIELD(temp_s0, s32 *, 0x198) = func_00192048(0x36B3U);
    }
    var_s5 = 0;
    temp_v0_2 = func_0028AFA8(*(s32 *)0x35F200);
    temp_s3 = (temp_v0_2 >= 0xB) ? 0xA : temp_v0_2;
    var_s1_2 = 0;
    if (M2C_FIELD(*(void **)0x35F5AC, s8 *, 5) > 0) {
        if (temp_s3 > 0) {
            var_t7 = temp_v0 > 0;
loop_7:
            if (var_t7 == 0) {
                temp_fp = M2C_FIELD(((var_s1_2 * 2) + *(s32 *)0x35F5AC), s16 *, 8);
                temp_s0_2 = (temp_fp * 0x24) + sp44;
                temp_s2 = M2C_FIELD(temp_s0_2, u16 *, 6);
                temp_v0_3 = func_002943B0(temp_s0_2);
                if (temp_v0_3 != 0) {
                    if (M2C_FIELD(temp_s0_2, u16 *, 0x10) & 0x400) {
                        var_s2 = var_s5 << 6;
                        temp_s0_3 = func_00192048(temp_s2);
                        func_00192E50(temp_s0_3, *(s32 *)0x35F5AC + var_s2 + 0x108, 0x40, func_00192048(func_00295430(M2C_FIELD(*(s32 *)0x35F5AC, s8 *, 4), 1)));
                    } else {
                        var_s2 = var_s5 << 6;
                        func_002595E8(*(s32 *)0x35F5AC + var_s2 + 0x108, func_00192048(temp_s2));
                    }
                } else {
                    if (M2C_FIELD(temp_s0_2, u16 *, 0x10) & 0x400) {
                        temp_s0_4 = func_00192048(temp_s2);
                        var_v0 = func_00192E50(temp_s0_4, sp, 0x40, func_00192048(func_00295430(M2C_FIELD(*(s32 *)0x35F5AC, s8 *, 4), 1)));
                    } else {
                        var_v0 = func_00192048(temp_s2);
                    }
                    var_s2 = var_s5 << 6;
                    func_0028DEF0(*(s32 *)0x35F5AC + var_s2 + 0x108, func_00192A80(var_v0));
                }
                M2C_FIELD(func_002891B8(*(s32 *)0x35F200, var_s5), void **, 0x198) = (void *) (*(s32 *)0x35F5AC + var_s2 + 0x108);
                if (temp_v0_3 != 0) {
                    temp_s0_5 = (temp_fp * 0x24) + sp44;
                    if (func_002A9E98(M2C_FIELD(temp_s0_5, u16 *, 4)) != 0) {
                        if (func_002A9F50(M2C_FIELD(temp_s0_5, u16 *, 4)) != 0) {
                            var_s2_2 = *(s32 *)0x374AD4;
                        } else {
                            var_s2_2 = *(s32 *)0x374AD0;
                        }
                        func_00138C10(sp40 + (var_s5 * 0x198) + 0xA998, var_s2_2);
                    }
                }
                var_s5 += 1;
            }
            var_s1_2 += 1;
            if (var_s1_2 < M2C_FIELD(*(s32 *)0x35F5AC, s8 *, 5)) {
                var_t7 = var_s1_2 < temp_v0;
                if (var_s5 < temp_s3) {
                    goto loop_7;
                }
            }
        }
    }
}
