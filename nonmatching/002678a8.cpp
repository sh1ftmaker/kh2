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
// m2c valid-syntax output for 0x002678a8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_002678A8 {
    /* 0x00 */ char pad0[0x10];
    /* 0x10 */ u16 sp10;                            /* inferred */
    /* 0x12 */ char pad12[0xE];                     /* maybe part of sp10[8]? */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x5C];
};                                                  /* size = 0x80 */

M2C_UNK func_00138C10(void * = 0, s32 = 0) asm("func_00138C10");
M2C_UNK func_00138C68(void * = 0, M2C_UNK = 0, s32 = 0) asm("func_00138C68");
M2C_UNK func_001395F8(void * = 0) asm("func_001395F8");
M2C_UNK func_00139620(void * = 0) asm("func_00139620");
s32 func_00236CA8(s32 = 0, s32 = 0) asm("func_00236CA8");
s32 func_0023AA78(void * = 0) asm("func_0023AA78");
s32 func_0023C4B8(void * = 0, s32 = 0) asm("func_0023C4B8");
void *func_0023F1B0(s32 = 0) asm("func_0023F1B0");
M2C_UNK func_00256CC0(M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_00256CC0");
s32 func_00257070(M2C_UNK = 0) asm("func_00257070");
s32 func_00257088(M2C_UNK = 0) asm("func_00257088");
M2C_UNK func_002570F0() asm("func_002570F0");
s32 func_00257130() asm("func_00257130");
M2C_UNK func_00257140(M2C_UNK = 0) asm("func_00257140");
void *func_00257770() asm("func_00257770");
s32 func_00258068(M2C_UNK = 0) asm("func_00258068");
M2C_UNK func_002677D8() asm("func_002677D8");
s32 func_00269508(s32 = 0) asm("func_00269508");
M2C_UNK func_00269658() asm("func_00269658");
s32 func_00281198(s32 = 0, s32 = 0) asm("func_00281198");
M2C_UNK func_002817D8(M2C_UNK = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_002817D8");
M2C_UNK func_00281E70(void * = 0) asm("func_00281E70");
s32 func_00281F18(s32 = 0) asm("func_00281F18");
M2C_UNK func_00282240(s32 = 0, s32 = 0, M2C_UNK = 0) asm("func_00282240");
M2C_UNK func_002827F0(s32 = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_002827F0");
s32 func_00283AB8(M2C_UNK = 0) asm("func_00283AB8");
M2C_UNK func_00287CC0(M2C_UNK = 0) asm("func_00287CC0");
M2C_UNK func_00288D80(s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_00288D80");
M2C_UNK func_00288E08(s32 = 0, s32 = 0, M2C_UNK = 0, s32 = 0) asm("func_00288E08");
void *func_002891B8(s32 = 0, s32 = 0) asm("func_002891B8");
M2C_UNK func_002891F0(s32 = 0, s32 = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_002891F0");
M2C_UNK func_0028AF18(s32 = 0, s32 = 0) asm("func_0028AF18");
s32 func_0028AF88(s32 = 0) asm("func_0028AF88");
M2C_UNK func_0028AF90(s32 = 0, s32 = 0) asm("func_0028AF90");
M2C_UNK func_0028AFD0(s32 = 0, s32 = 0) asm("func_0028AFD0");
s32 func_0028B040(s32 = 0) asm("func_0028B040");
M2C_UNK func_0028B218(s32 = 0, M2C_UNK = 0) asm("func_0028B218");
M2C_UNK func_0028B248(s32 = 0, M2C_UNK = 0) asm("func_0028B248");
M2C_UNK func_0028BAE0(s32 = 0, s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_0028BAE0");
M2C_UNK func_0028D068(M2C_UNK = 0, M2C_UNK = 0) asm("func_0028D068");
M2C_UNK func_0028D8C0(void * = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_0028D8C0");
M2C_UNK func_0028D980(void * = 0, s32 = 0, s32 = 0, s32 = 0, s32 = 0) asm("func_0028D980");
M2C_UNK func_0028DCC0(void * = 0, void * = 0) asm("func_0028DCC0");
M2C_UNK func_0028F4D8(M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_0028F4D8");
s32 func_0028F930(M2C_UNK = 0) asm("func_0028F930");
void func_002678A8(...) asm("_ZN2Tz7CmEquip8SetupTopEv");
void func_002678a8_impl(void) asm("_ZN2Tz7CmEquip8SetupTopEv");
void func_002678a8_impl(void) {
    u16 sp10;
    s32 sp20;
    M2C_UNK var_s7;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s0_4;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_s7_2;
    s32 temp_s7_3;
    s32 temp_v0;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_s6_3;
    u16 *var_t6;
    void *temp_fp;
    void *temp_s0;
    void *temp_s0_3;
    void *var_s1;
    void *var_s4;

    var_s6 = 3;
    temp_fp = func_00257770();
    func_0028D068(0x7545, 0);
    var_t6 = &sp10;
    do {
        *var_t6 = *(u16 *)0x35EF6C;
        var_s6 -= 1;
        var_t6 += 2;
    } while (var_s6 >= 0);
    if (func_0028F930(0) == 0) {
        func_0028F4D8(0, -1, 0);
    }
    if (func_0028F930(1) == 0) {
        func_0028F4D8(1, -1, 0);
    }
    temp_s5 = *(s32 *)0x35F3D4;
    temp_s5_2 = temp_s5 + 1;
    func_0028D8C0(temp_fp, temp_s5, *(s32 *)0x35EF68, *(s32 *)0x35EF64);
    var_s6_2 = 0;
    var_s4 = temp_fp + 0x5EF0;
    do {
        func_00288D80(*(s32 *)0x35F01C, var_s6_2, *(s32 *)0x35EF68, *(s32 *)0x35EF64);
        func_00138C10(func_002891B8(*(s32 *)0x35F01C, var_s6_2), 0x109);
        func_00288E08(*(s32 *)0x35F01C, var_s6_2, 0, func_0023AA78(func_002891B8(*(s32 *)0x35F01C, var_s6_2) + 0x18));
        func_00139620(func_002891B8(*(s32 *)0x35F01C, var_s6_2));
        func_00138C10(func_002891B8(*(s32 *)0x35F01C, var_s6_2), (s32) *(s32 *)0x35EF6C);
        M2C_FIELD(func_002891B8(*(s32 *)0x35F01C, var_s6_2), s32 *, 0x188) = -1;
        func_0028DCC0(func_002891B8(*(s32 *)0x35F01C, var_s6_2), temp_fp);
        func_00257140(0);
        func_0028D980(var_s4, temp_s5_2 + 1, *(s32 *)0x35EF68, *(s32 *)0x35EF64, 0);
        temp_a1 = var_s6_2;
        var_s6_2 += 1;
        func_0028DCC0(var_s4, func_002891B8(*(s32 *)0x35F01C, temp_a1));
        func_00139620(var_s4);
        func_001395F8(var_s4);
        var_s4 += 0x1B4;
    } while (var_s6_2 < 9);
    var_s6_3 = 0;
    var_s1 = temp_fp;
    do {
        temp_s0 = var_s1 + 0xD30;
        func_0028D980(temp_s0, temp_s5_2, *(s32 *)0x35EF68, *(s32 *)0x35EF64, 0);
        func_00138C68(temp_s0, 0, func_0023AA78(var_s1 + 0xD48) * var_s6_3);
        var_s6_3 += 1;
        func_00138C10(temp_s0, (s32) *(s32 *)0x35EF6C);
        func_001395F8(temp_s0);
        func_0028DCC0(temp_s0, temp_fp);
        M2C_FIELD(var_s1, s32 *, 0xEE0) = 2;
        var_s1 += 0x1B4;
    } while (var_s6_3 < 9);
    sp20 = func_0023C4B8(func_0023F1B0(*(s32 *)0x35F03C), *(s32 *)0x35EF68);
    temp_s0_2 = func_00236CA8(M2C_FIELD(func_0023F1B0(*(s32 *)0x35F03C), s32 *, 0x28), *(s32 *)0x35EF64);
    temp_v0 = func_00281F18(func_00257130());
    temp_s7 = temp_v0;
    temp_s6 = (temp_v0 < 0xA) ? temp_v0 : 9;
    func_002570F0();
    func_0028BAE0(*(s32 *)0x35F04C, temp_s5_2, sp20, temp_s0_2, 0);
    temp_s0_3 = temp_fp + 0xB350;
    func_0028D980(temp_s0_3, *(s32 *)0x35F3D4, *(s32 *)0x35EF68, *(s32 *)0x35EF64, 0);
    func_002817D8(0x753F, *(s32 *)0x35EF68, *(s32 *)0x35EF64, *(s32 *)0x35F03C);
    func_00281E70(temp_s0_3);
    func_002677D8();
    temp_s7_2 = func_00281198(*(s32 *)0x35F010, func_00257070(1)) + 5;
    func_00282240(func_00257130(), temp_s7_2, 0);
    func_002827F0(func_00257130(), 0, 0);
    func_0028AF90(*(s32 *)0x35F01C, func_00281F18(func_00257130()));
    func_002891F0(*(s32 *)0x35F01C, func_00257070(2), 0, -1);
    func_0028AFD0(*(s32 *)0x35F01C, func_00257088(2));
    temp_s0_4 = func_00269508(func_0028B040(*(s32 *)0x35F01C));
    temp_s2 = func_0028AF88(*(s32 *)0x35F01C);
    temp_s7_3 = (func_00258068(1) != 0) ? 0xC100 : 0xC000;
    func_0028AF18(*(s32 *)0x35F01C, temp_s2 | (((temp_s0_4 ^ 4) == 0) ? (temp_s7_3 | 0x200) : temp_s7_3));
    var_s7 = -1;
    func_0028B218(*(s32 *)0x35F01C, 1);
    func_0028B248(*(s32 *)0x35F01C, 9);
    func_00269658();
    if (temp_s0_4 == 4) {
        if (func_00283AB8(0) == 0) {
            goto block_13;
        }
        goto block_15;
    }
block_13:
    if ((temp_s0_4 == 1) && (func_00283AB8(3) != 0)) {
block_15:
        var_s7 = 0xCBDD;
        func_0028AF18(*(s32 *)0x35F01C, func_0028AF88(*(s32 *)0x35F01C) | 0x400);
    }
    if (func_00258068(1) != 0) {
        func_00256CC0(0xB619, 0xB61A, var_s7);
    }
    func_00287CC0(0);
}
