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

// m2c valid-syntax output for 0x0025e450, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0025E450 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

M2C_UNK func_0025DBA8() asm("func_0025DBA8");
M2C_UNK func_00288018() asm("func_00288018");
M2C_UNK func_002B5188(M2C_UNK *, M2C_UNK) asm("func_002B5188");
s32 func_00233E60() asm("func_00233E60");
s32 func_00233E70(M2C_UNK = 0) asm("func_00233E70");
s32 func_00234758() asm("func_00234758");
s32 func_00234798() asm("func_00234798");
s32 func_002347D8() asm("func_002347D8");
M2C_UNK func_002349C8(s32 = 0, M2C_UNK = 0) asm("func_002349C8");
M2C_UNK func_00240360(s32 = 0) asm("func_00240360");
s32 func_00240A08(M2C_UNK = 0) asm("func_00240A08");
s32 func_00240BA0() asm("func_00240BA0");
M2C_UNK func_00240BC0(s32 = 0) asm("func_00240BC0");
s32 func_00240BD0() asm("func_00240BD0");
M2C_UNK func_00240C08(s32 = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_00240C08");
M2C_UNK func_00240E10(M2C_UNK = 0, s32 = 0) asm("func_00240E10");
s32 func_00240E50() asm("func_00240E50");
M2C_UNK func_00240FD8(M2C_UNK = 0, M2C_UNK = 0) asm("func_00240FD8");
s32 func_002413F0() asm("func_002413F0");
M2C_UNK func_00241450(M2C_UNK = 0) asm("func_00241450");
M2C_UNK func_002415A0(M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_002415A0");
M2C_UNK func_002417A0() asm("func_002417A0");
M2C_UNK func_00241850(s32 = 0, M2C_UNK = 0) asm("func_00241850");
s32 func_00241C40(M2C_UNK = 0) asm("func_00241C40");
s32 func_00287BC0() asm("func_00287BC0");
M2C_UNK func_00287BD0(M2C_UNK = 0, M2C_UNK = 0) asm("func_00287BD0");
M2C_UNK func_00287C00(M2C_UNK = 0) asm("func_00287C00");
s32 func_00287C10() asm("func_00287C10");
M2C_UNK func_00287C30() asm("func_00287C30");
M2C_UNK func_00287C90(M2C_UNK = 0) asm("func_00287C90");
s32 func_00287CD0() asm("func_00287CD0");
M2C_UNK func_00287D20(M2C_UNK = 0, s32 = 0) asm("func_00287D20");
s32 func_00287D30() asm("func_00287D30");
s32 func_00288040() asm("func_00288040");
M2C_UNK func_0028F7E8(M2C_UNK = 0) asm("func_0028F7E8");
M2C_UNK func_002B4C88(M2C_UNK = 0) asm("func_002B4C88");
M2C_UNK func_002B4EE0() asm("func_002B4EE0");
s32 func_002B4FB8() asm("func_002B4FB8");
s32 func_002B4FF8() asm("func_002B4FF8");
M2C_UNK func_002B5108(M2C_UNK = 0, s32 = 0) asm("func_002B5108");
M2C_UNK func_002B5AF0() asm("func_002B5AF0");
extern M2C_UNK D_00373110 asm("D_00373110");
void func_0025E450(...) asm("_ZN2Tz6CmLoad12CtrlLoadListEv");
void func_0025e450_impl(void) asm("_ZN2Tz6CmLoad12CtrlLoadListEv");
void func_0025e450_impl(void) {
    M2C_UNK temp_s0;
    M2C_UNK var_a0;
    M2C_UNK var_a2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_a0_2;
    s32 var_s0;

    temp_s1 = func_00240BA0();
    temp_v0 = func_00287CD0();
    if (temp_v0 == 2) {
        if (func_002B4FB8() == 0) {
            if (func_00287C10() == 1) {
                func_00233E70(0);
                if (func_00233E60() == 0) {

                } else {
                    goto block_6;
                }
            } else {
block_6:
                func_00287C30();
                func_00287D20(0);
                temp_v0_2 = func_00287BC0();
                switch (temp_v0_2) {                /* switch 1; irregular */
                case 1:                             /* switch 1 */
                    func_002B5AF0();
                    func_0028F7E8(1);
                    func_0025DBA8();
                    return;
                case 12:                            /* switch 1 */
                    func_002417A0();
                    func_002B5188(&D_00373110, 1);
                    return;
                }
            }
        }
    } else if (func_002B4FF8() == 0) {

    } else {
        if (temp_v0 == 0) {
            func_00287C90(1);
        }
        temp_v0_3 = func_00287D30();
        switch (temp_v0_3) {                        /* switch 2 */
        case 10:                                    /* switch 2 */
            if (func_00233E70(0) == 0) {
                if (func_00234798() == 0) {
                    func_00240E10(-1, temp_s1);
                    var_a0 = 0xB;
                case 0:                             /* switch 3 */
block_23:
                    func_00287D20(var_a0);
                } else {
block_27:
                    func_002B5108(0x8A8C, temp_s1);
                    func_00287BD0(7, 0);
                    func_002B4C88(0);
                    *(s8 *)0x35F0B3 = 0;
                }
            }
            break;
        case 11:                                    /* switch 2 */
            if (func_00233E70(0) == 0) {
                if (func_00234758() == 0) {
                    var_a0 = 0xC;
                    if (func_00240E50() <= 0) {
block_31:
                        func_002B4EE0();
                        func_00287C00(0xC);
                        func_00287C90(1);
                    } else {
                        goto block_23;
                    }
                } else {
                    goto block_27;
                }
            }
            break;
        case 12:                                    /* switch 2 */
            func_00241450(1);
            var_a0 = 0xD;
            goto block_23;
        case 13:                                    /* switch 2 */
            if (func_00233E70(0) == 0) {
                if (func_00234798() == 0) {
                    func_00287D20(0xE, temp_s1);
                } else {
                    func_002B5108(0x8A8C, temp_s1);
                    func_00287BD0(7, 0);
                    func_002B4C88(0);
                    *(s32 *)0x35F0B3 = 0;
                }
            }
            /* fallthrough */
        case 14:                                    /* switch 2 */
            temp_v0_4 = func_002413F0();
            if (temp_v0_4 >= 0) {
                func_00240BC0(temp_v0_4);
                func_00240360(temp_v0_4);
                func_00241450(0);
                var_a0 = 0xF;
                goto block_23;
            }
            goto block_31;
        case 15:                                    /* switch 2 */
            if (func_00233E70(0) == 0) {
                temp_v0_5 = func_00234798();
                if (temp_v0_5 == 0) {
                    func_00240E10(-5);
                    var_a0 = 0x10;
                    goto block_23;
                }
                if (temp_v0_5 != 2) {
                    func_00240FD8(-1, 2);
                case 1:                             /* switch 3 */
block_44:
                    func_00240C08(func_00240BD0(), 0, 0x20);
                    var_a0 = 0xC;
                    goto block_23;
                }
                goto block_27;
            }
            break;
        case 16:                                    /* switch 2 */
            if (func_00233E70(0) == 0) {
                temp_v0_6 = func_00234758();
                var_s0 = temp_v0_6;
                if (temp_v0_6 == 0) {
                    temp_v0_7 = func_002413F0();
                    func_00240BC0(temp_v0_7);
                    func_00240360(temp_v0_7);
                    func_00241850(func_00240BD0(), 0);
                    func_002415A0(2, 0, 0);
                    var_a0 = 0x11;
                    goto block_23;
                }
block_48:
                if (var_s0 == 1) {
                    goto block_44;
                }
                goto block_27;
            }
            break;
        case 17:                                    /* switch 2 */
            if (func_00233E70(0) == 0) {
                func_00240FD8(-1, 2);
                temp_v0_8 = func_002347D8();
                var_a0 = 0x12;
                switch (temp_v0_8) {                /* switch 3; irregular */
                case 3:                             /* switch 3 */
block_55:
                    var_a0_2 = func_00240BD0();
                    var_a2 = 0x20;
block_56:
                    func_00240C08(var_a0_2, 0, var_a2);
                    var_a0 = 0xE;
                    goto block_23;
                }
            }
            break;
        case 18:                                    /* switch 2 */
            if (func_00240A08(0) != 0) {
                func_00240E10(-4);
                var_a0 = 0x13;
            } else {
                goto block_55;
            }
            goto block_23;
        case 19:                                    /* switch 2 */
            if (func_00233E70(0) == 0) {
                temp_v0_9 = func_00234758();
                var_s0 = temp_v0_9;
                if (temp_v0_9 == 0) {
                    func_002349C8(temp_s1, 0);
                    temp_s0 = (func_00241C40(1) == 0) ? 0x20 : 0x10;
                    var_a0_2 = func_00240BD0();
                    var_a2 = temp_s0;
                    goto block_56;
                }
                goto block_48;
            }
            break;
        }
        if (func_00288040() != 0) {
            func_00288018();
        }
    }
}
