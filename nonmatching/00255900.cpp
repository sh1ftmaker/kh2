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

// m2c valid-syntax output for 0x00255900, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00255900 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

M2C_UNK func_0025F7F0(M2C_UNK) asm("func_0025F7F0");
M2C_UNK func_002644A0(M2C_UNK) asm("func_002644A0");
M2C_UNK func_0026BC10() asm("func_0026BC10");
M2C_UNK func_0026EE78() asm("func_0026EE78");
M2C_UNK func_002772C8(M2C_UNK) asm("func_002772C8");
M2C_UNK func_0027C5A0() asm("func_0027C5A0");
M2C_UNK func_0027E770() asm("func_0027E770");
M2C_UNK func_00288018() asm("func_00288018");
s32 func_00139D78(s32 = 0) asm("func_00139D78");
M2C_UNK func_0023D820(s32 = 0) asm("func_0023D820");
s32 func_00242848(s32 = 0) asm("func_00242848");
M2C_UNK func_002535B0(M2C_UNK = 0) asm("func_002535B0");
M2C_UNK func_00254AB8() asm("func_00254AB8");
M2C_UNK func_00254E60() asm("func_00254E60");
M2C_UNK func_00256A58() asm("func_00256A58");
M2C_UNK func_00257050(M2C_UNK = 0, u32 = 0, M2C_UNK = 0) asm("func_00257050");
s32 func_00257970() asm("func_00257970");
u32 func_00257FA8(s32 = 0) asm("func_00257FA8");
M2C_UNK func_00263C60() asm("func_00263C60");
M2C_UNK func_0027E6E0() asm("func_0027E6E0");
s32 func_0027E920() asm("func_0027E920");
M2C_UNK func_0027EAD0() asm("func_0027EAD0");
s32 func_00287BC0() asm("func_00287BC0");
M2C_UNK func_00287C00(s32 = 0) asm("func_00287C00");
M2C_UNK func_00287C30() asm("func_00287C30");
M2C_UNK func_00287C90(M2C_UNK = 0) asm("func_00287C90");
s32 func_00287CD0() asm("func_00287CD0");
M2C_UNK func_00287DA0() asm("func_00287DA0");
s32 func_00287DC0() asm("func_00287DC0");
s32 func_00287DF0(s32 = 0, s32 = 0, M2C_UNK = 0, M2C_UNK * = 0) asm("func_00287DF0");
M2C_UNK func_00287F90(M2C_UNK = 0) asm("func_00287F90");
s32 func_00288040() asm("func_00288040");
M2C_UNK func_00288658(M2C_UNK = 0, M2C_UNK = 0) asm("func_00288658");
M2C_UNK func_00288670(M2C_UNK * = 0) asm("func_00288670");
void *func_002891B8(s32 = 0, s32 = 0) asm("func_002891B8");
s32 func_002891E8(s32 = 0) asm("func_002891E8");
s32 func_00289310(s32 = 0) asm("func_00289310");
s32 func_00289380(s32 = 0) asm("func_00289380");
M2C_UNK func_0028AA40(s32 = 0) asm("func_0028AA40");
M2C_UNK func_0028AB20(s32 = 0) asm("func_0028AB20");
M2C_UNK func_0028ABE0(s32 = 0) asm("func_0028ABE0");
s32 func_0028ACC8(s32 = 0) asm("func_0028ACC8");
s32 func_0028AE28(s32 = 0, M2C_UNK = 0) asm("func_0028AE28");
M2C_UNK func_0028FB68(M2C_UNK = 0, s32 = 0) asm("func_0028FB68");
s32 func_002938E0() asm("func_002938E0");
s32 func_002938F0() asm("func_002938F0");
extern M2C_UNK D_00254F80 asm("D_00254F80");
extern M2C_UNK D_00258118 asm("D_00258118");
void func_00255900(...) asm("_ZN2Tz5CmTop7CtrlTopEv");
void func_00255900_impl(void) asm("_ZN2Tz5CmTop7CtrlTopEv");
void func_00255900_impl(void) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    u32 temp_v0_2;

    var_s1 = -1;
    if (*(u8 *)0x35F057 == 0) {
        var_s1 = func_00289380(*(s32 *)0x35F01C);
    }
    temp_s0 = func_00287CD0();
    if (func_002938E0() != 0) {
        if (func_002938F0() == 0) {
            goto block_5;
        }
        goto block_7;
    }
block_5:
    if (*(u8 *)0x35F056 == 0) {
block_7:
        if (*(u8 *)0x35EF60 != 0) {
            if (temp_s0 != 2) {
                func_00254AB8();
            } else {
                func_0023D820(func_00287DC0());
            }
        }
    }
    if (*(s32 *)0x35F057 != 0) {

    } else {
        temp_s2 = func_00287DC0();
        if (temp_s0 == 2) {
            if ((func_0028ACC8(*(s32 *)0x35F01C) != 0) || (func_00139D78(temp_s2) != 0) || (func_0027E920() != 0) || (func_00257970() != 0)) {
                if ((var_s1 != -1) || (func_00289310(*(s32 *)0x35F01C) != 0)) {
                    func_00287F90(0);
                    func_0028ABE0(*(s32 *)0x35F01C);
                    func_0027E770();
                }
            } else {
                func_00287C30();
                temp_v0 = func_00287BC0();
                switch (temp_v0) {                  /* switch 1; irregular */
                case 1:                             /* switch 1 */
                    func_0025F7F0(-1);
                    return;
                case 15:                            /* switch 1 */
                    func_002772C8(-1);
                    return;
                case 20:                            /* switch 1 */
                    func_0026BC10();
                    return;
                case 23:                            /* switch 1 */
                    func_002644A0(1);
                    return;
                case 25:                            /* switch 1 */
                    func_0026EE78();
                    return;
                case 36:                            /* switch 1 */
                    func_0027C5A0();
                    return;
                }
            }
        } else {
            if (((var_s1 != -1) || (func_00289310(*(s32 *)0x35F01C) != 0)) && (func_0028AE28(*(s32 *)0x35F01C, 0) == 0)) {
                func_0028AB20(*(s32 *)0x35F01C);
                func_0027EAD0();
            }
            if ((temp_s0 == 0) && (func_0028AE28(*(s32 *)0x35F01C, 0) != 0)) {
                func_00256A58();
                func_00287C90(1);
            }
            if (func_00242848(func_00287DF0(var_s1, func_00289310(*(s32 *)0x35F01C), 1, &D_00258118)) == 0) {
                switch (var_s1) {                   /* switch 2; irregular */
                case -1:                            /* switch 2 */
                    break;
                default:                            /* switch 2 */
                    var_s0 = -1;
                    func_0028FB68(0, M2C_FIELD(func_002891B8(*(s32 *)0x35F01C, var_s1), s32 *, 0x198));
                    func_00257050(0, func_00257FA8(var_s1), 0);
                    temp_v0_2 = func_00257FA8(var_s1);
                    switch (temp_v0_2) {            /* switch 3 */
                    case 0:                         /* switch 3 */
                        var_s0 = 1;
                        break;
                    case 1:                         /* switch 3 */
                        var_s0 = 0xF;
                        break;
                    case 2:                         /* switch 3 */
                        var_s0 = 0x19;
                        break;
                    case 3:                         /* switch 3 */
                        var_s0 = 0x14;
                        break;
                    case 4:                         /* switch 3 */
                        var_s0 = 0x17;
                        break;
                    case 5:                         /* switch 3 */
                    case 6:                         /* switch 3 */
                        var_s0 = -1;
                        func_002535B0(((func_00257FA8(var_s1) ^ 5) != 0) ? 2 : 1);
                        func_00288658(2, 0);
                        func_00288670(&D_00254F80);
                        func_00287DA0();
                        if ((func_002938E0() != 0) && (func_002938F0() == 0)) {
                            func_0023D820(temp_s2);
                        }
                        break;
                    case 7:                         /* switch 3 */
                        var_s0 = 0x24;
                        break;
                    }
                    if (var_s0 >= 0) {
                        func_00287C00(var_s0);
                        func_0028AA40(*(s32 *)0x35F01C);
                        func_00263C60();
                        func_00254E60();
                        func_0027E6E0();
                        func_00287C90(1);
                    }
                    break;
                case -2:                            /* switch 2 */
                case -4:                            /* switch 2 */
                    func_00287DA0();
                    func_00257050(0, func_00257FA8(func_002891E8(*(s32 *)0x35F01C)), 0);
                    if ((func_002938E0() != 0) && (func_002938F0() == 0)) {
                        func_0023D820(temp_s2);
                    }
                    break;
                }
            }
            if (func_00288040() != 0) {
                func_00288018();
            }
        }
    }
}
