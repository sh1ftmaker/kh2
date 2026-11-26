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
// m2c valid-syntax+u8ptr output for 0x0026f388, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0026F388 {
    /* 0x00 */ char pad0[0x10];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ u8 *sp14;                          /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x50];
};                                                  /* size = 0x70 */

M2C_UNK func_00287CC0(M2C_UNK) asm("func_00287CC0");
M2C_UNK func_00138C10(u8 * = 0, s32 = 0) asm("func_00138C10");
M2C_UNK func_00138C68(u8 * = 0, s32 = 0, s32 = 0) asm("func_00138C68");
M2C_UNK func_001395F8(u8 * = 0) asm("func_001395F8");
M2C_UNK func_00139620(u8 * = 0) asm("func_00139620");
s32 func_00236CA8(s32 = 0, s32 = 0) asm("func_00236CA8");
s32 func_0023AA18(u8 * = 0) asm("func_0023AA18");
s32 func_0023AA38(u8 * = 0) asm("func_0023AA38");
s32 func_0023AA78(u8 * = 0) asm("func_0023AA78");
s32 func_0023C4B8(u8 * = 0, s32 = 0) asm("func_0023C4B8");
u8 *func_0023F1B0(s32 = 0) asm("func_0023F1B0");
M2C_UNK func_00256CC0(M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_00256CC0");
s32 func_00257070(M2C_UNK = 0) asm("func_00257070");
s32 func_00257088(M2C_UNK = 0) asm("func_00257088");
M2C_UNK func_002570F0() asm("func_002570F0");
M2C_UNK func_00257140(M2C_UNK = 0) asm("func_00257140");
u8 *func_00257770() asm("func_00257770");
M2C_UNK func_002713C8() asm("func_002713C8");
M2C_UNK func_00271EE8() asm("func_00271EE8");
M2C_UNK func_00272AE0() asm("func_00272AE0");
s32 func_00272B60(s32 = 0) asm("func_00272B60");
s32 func_00283AB8(M2C_UNK = 0, M2C_UNK = 0) asm("func_00283AB8");
M2C_UNK func_00288D80(s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_00288D80");
M2C_UNK func_00288E08(s32 = 0, s32 = 0, M2C_UNK = 0, s32 = 0) asm("func_00288E08");
u8 *func_002891B8(s32 = 0, s32 = 0) asm("func_002891B8");
M2C_UNK func_002891F0(s32 = 0, s32 = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_002891F0");
s32 func_002892F8(s32 = 0) asm("func_002892F8");
M2C_UNK func_0028AF18(s32 = 0, s32 = 0) asm("func_0028AF18");
M2C_UNK func_0028AF40(s32 = 0, M2C_UNK = 0) asm("func_0028AF40");
s32 func_0028AF88(s32 = 0) asm("func_0028AF88");
M2C_UNK func_0028AF90(s32 = 0, s8 = 0) asm("func_0028AF90");
M2C_UNK func_0028AFD0(s32 = 0, s32 = 0) asm("func_0028AFD0");
s32 func_0028B040(s32 = 0) asm("func_0028B040");
M2C_UNK func_0028B218(s32 = 0, M2C_UNK = 0) asm("func_0028B218");
M2C_UNK func_0028B248(s32 = 0, M2C_UNK = 0) asm("func_0028B248");
M2C_UNK func_0028BAE0(s32 = 0, s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_0028BAE0");
M2C_UNK func_0028D068(M2C_UNK = 0, M2C_UNK = 0) asm("func_0028D068");
M2C_UNK func_0028D8C0(u8 * = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_0028D8C0");
M2C_UNK func_0028D980(u8 * = 0, s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_0028D980");
M2C_UNK func_0028DCC0(u8 * = 0, u8 * = 0) asm("func_0028DCC0");
M2C_UNK func_0028F4D8(M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_0028F4D8");
extern AnyCell D_00272F48 asm("D_00272F48");
extern AnyCell D_01E21EC0 asm("D_01E21EC0");
void func_0026F388(...) asm("_ZN2Tz8CmCustom15SetupCustomListEv");
void func_0026f388_impl(void) asm("_ZN2Tz8CmCustom15SetupCustomListEv");
void func_0026f388_impl(void) {
    s32 sp10;
    u8 *sp14;
    s32 sp18;
    s32 sp1C;
    M2C_UNK var_a1;
    M2C_UNK var_s3;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_t5;
    s32 var_t7;
    s32 var_t7_3;
    s8 temp_s5;
    s8 temp_s5_2;
    u16 *var_t7_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_3;
    u8 *temp_v0;
    u8 *var_s1;
    u8 *var_s5;
    u8 *var_s6;

    var_s4 = 0;
    sp14 = func_00257770();
    *(s8 *)0x35F128 = 0;
    *(s8 *)0x35F129 = -1;
    func_0028D068(0x7545, 0);
    var_t7 = 0 * 8;
    do {
        var_t5 = 3;
        var_t7_2 = var_t7 + &D_01E21EC0;
loop_2:
        *var_t7_2 = *(u16 *)0x35EF6C;
        var_t5 -= 1;
        var_t7_2 += 2;
        if (var_t5 >= 0) {
            goto loop_2;
        }
        var_s4 += 1;
        var_t7 = var_s4 * 8;
    } while (var_s4 < 2);
    func_0028F4D8(1, -1, 0);
    temp_t7 = *(s32 *)0x35F3D4;
    sp10 = temp_t7;
    temp_a1 = sp10;
    temp_t7_2 = temp_t7 + 1;
    sp10 = temp_t7_2;
    var_s4_2 = 0;
    func_0028D8C0(sp14, temp_a1, *(s32 *)0x35EF68, *(s32 *)0x35EF64);
    var_s6 = sp14 + 0x87D0;
    sp18 = temp_t7_2 + 1;
    sp1C = sp10 + 2;
    var_s5 = sp14 + 0x5EF0;
    do {
        func_00288D80(*(s32 *)0x35F01C, var_s4_2, *(s32 *)0x35EF68, *(s32 *)0x35EF64);
        temp_v0 = func_002891B8(*(s32 *)0x35F01C, var_s4_2);
        temp_s0 = temp_v0 + 0x18;
        func_00138C10(temp_v0, 0x108);
        temp_s3 = func_0023AA78(temp_s0);
        temp_s2 = func_0023AA18(temp_s0);
        temp_s0_2 = func_0023AA38(temp_s0);
        func_00288E08(*(s32 *)0x35F01C, var_s4_2, 0, temp_s3);
        var_s4_2 += 1;
        func_00139620(temp_v0);
        func_00138C10(temp_v0, (s32) *(s32 *)0x35EF6C);
        M2C_FIELD(temp_v0, s32 *, 0x188) = -1;
        M2C_FIELD(temp_v0, M2C_UNK **, 0x1B4) = &D_00272F48;
        func_0028DCC0(temp_v0, sp14);
        func_00257140(0);
        func_0028D980(var_s5, sp18, *(s32 *)0x35EF68, *(s32 *)0x35EF64, 0);
        func_0028DCC0(var_s5, temp_v0);
        func_00139620(var_s5);
        func_001395F8(var_s5);
        var_s5 += 0x1B4;
        func_0028D8C0(var_s6, sp1C, *(s32 *)0x35EF68, *(s32 *)0x35EF64);
        func_0028DCC0(var_s6, temp_v0);
        temp_a0 = var_s6;
        var_s6 += 0x198;
        func_00138C68(temp_a0, temp_s2, temp_s0_2);
    } while (var_s4_2 < 9);
    var_s1 = sp14;
    var_s4_3 = 0;
    do {
        temp_s0_3 = var_s1 + 0xD30;
        func_0028D980(temp_s0_3, sp10, *(s32 *)0x35EF68, *(s32 *)0x35EF64, 0);
        func_00138C68(temp_s0_3, 0, func_0023AA78(var_s1 + 0xD48) * var_s4_3);
        var_s4_3 += 1;
        func_00138C10(temp_s0_3, (s32) *(s32 *)0x35EF6C);
        func_001395F8(temp_s0_3);
        func_0028DCC0(temp_s0_3, sp14);
        M2C_FIELD(var_s1, s32 *, 0xEE0) = 2;
        var_s1 += 0x1B4;
    } while (var_s4_3 < 9);
    temp_s5 = M2C_FIELD(*(u8 **)0x35F12C, s8 *, 4);
    temp_s5_2 = (func_00257070(0x19) != 0) ? (temp_s5 + 1) : temp_s5;
    temp_s1 = func_0023C4B8(func_0023F1B0(*(s32 *)0x35F03C), *(s32 *)0x35EF68);
    temp_s0_4 = func_00236CA8(M2C_FIELD(func_0023F1B0(*(s32 *)0x35F03C), s32 *, 0x28), *(s32 *)0x35EF64);
    func_002570F0();
    func_0028BAE0(*(s32 *)0x35F04C, sp10, temp_s1, temp_s0_4, 0);
    func_0028AF90(*(s32 *)0x35F01C, temp_s5_2);
    var_s1_2 = func_00257070(0x1A);
    var_s0 = func_00257088(0x1A);
    temp_v0_2 = func_002892F8(*(s32 *)0x35F01C);
    temp_t6 = var_s1_2 + var_s0;
    temp_t7_3 = var_s0 + temp_v0_2;
    if ((temp_t6 >= temp_s5_2) || (temp_s5_2 < temp_t7_3)) {
        if (var_s0 > 0) {
            var_t7_3 = var_s0 + temp_v0_2;
loop_12:
            if (temp_s5_2 < var_t7_3) {
                var_s0 -= 1;
                var_t7_3 = var_s0 + temp_v0_2;
                if (var_s0 > 0) {
                    goto loop_12;
                }
            }
        }
        temp_s1_2 = temp_t6 - var_s0;
        temp_s1_3 = (temp_s1_2 < 0) ? 0 : temp_s1_2;
        var_s1_2 = (temp_s1_3 >= temp_v0_2) ? (temp_v0_2 - 1) : temp_s1_3;
        if ((var_s1_2 + var_s0) >= temp_s5_2) {
            var_s0 = 0;
            var_s1_2 = 0;
        }
    }
    func_002891F0(*(s32 *)0x35F01C, var_s1_2, 0, -1);
    func_0028AFD0(*(s32 *)0x35F01C, var_s0);
    func_0028B218(*(s32 *)0x35F01C, 1);
    func_0028B248(*(s32 *)0x35F01C, 9);
    temp_v0_3 = func_00272B60(func_0028B040(*(s32 *)0x35F01C));
    if (temp_v0_3 != 0) {
        func_0028AF40(*(s32 *)0x35F01C, 0x200);
    }
    var_s3 = -1;
    func_0028AF18(*(s32 *)0x35F01C, func_0028AF88(*(s32 *)0x35F01C) | 0xC000);
    func_002713C8();
    func_00272AE0();
    func_00271EE8();
    if (temp_v0_3 == 2) {
        if (func_00283AB8(0) == 0) {
            goto block_21;
        }
        goto block_23;
    }
block_21:
    var_a1 = -1;
    if (temp_v0_3 == 1) {
        if (func_00283AB8(1, -1) != 0) {
block_23:
            var_s3 = 0xCBDD;
            func_0028AF18(*(s32 *)0x35F01C, func_0028AF88(*(s32 *)0x35F01C) | 0x400);
        }
        var_a1 = var_s3;
    }
    func_00256CC0(0xB61A, var_a1, -1);
    func_00287CC0(0);
}
