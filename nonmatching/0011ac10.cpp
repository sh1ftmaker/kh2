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

static AnyCell sp0;
static AnyCell sp10;
static AnyCell sp4;
static AnyCell sp8;
static AnyCell spC;
// m2c valid-syntax output for 0x0011ac10, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0011AC10 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad14[0x5C];
};                                                  /* size = 0x70 */

s32 func_0010C778(void * = 0) asm("func_0010C778");
void *func_00111E38(M2C_UNK = 0) asm("func_00111E38");
M2C_UNK func_0011A858(void * = 0, void * = 0) asm("func_0011A858");
M2C_UNK func_00135BD0(s32 = 0, s32 = 0) asm("func_00135BD0");
s32 func_00135C80(s32 = 0) asm("func_00135C80");
s32 func_00135C88(s32 = 0, s32 = 0) asm("func_00135C88");
s32 func_00135D00(s32 = 0, s32 = 0) asm("func_00135D00");
M2C_UNK func_0013E4B8(void ** = 0) asm("func_0013E4B8");
void **func_0013E610(s32 = 0) asm("func_0013E610");
M2C_UNK func_0013E890() asm("func_0013E890");
M2C_UNK func_0014EC20() asm("func_0014EC20");
void *func_00167F18(M2C_UNK = 0) asm("func_00167F18");
M2C_UNK func_00190128(void * = 0) asm("func_00190128");
s32 func_00190140(void * = 0) asm("func_00190140");
s32 func_001901C0(void * = 0) asm("func_001901C0");
M2C_UNK func_00190388(void * = 0, void * = 0) asm("func_00190388");
s32 func_00190730(void * = 0, s32 = 0) asm("func_00190730");
M2C_UNK func_00190878(void * = 0, s32 = 0, M2C_UNK = 0) asm("func_00190878");
s32 func_00197920() asm("func_00197920");
s32 func_0019C410(s32 = 0, s32 = 0) asm("func_0019C410");
M2C_UNK func_0019CA90(s32 = 0, M2C_UNK = 0, void * = 0) asm("func_0019CA90");
M2C_UNK func_002BA2E8(M2C_UNK = 0, M2C_UNK = 0) asm("func_002BA2E8");
void func_0011AC10(void *arg0 = 0, ...) asm("_ZN2kn13ChickenLittle13update_lockonEv");
void func_0011ac10_impl(void *arg0) asm("_ZN2kn13ChickenLittle13update_lockonEv");
void func_0011ac10_impl(void *arg0) {
    s32 sp0;                                        /* compiler-managed */
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_fp;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_t7;
    s32 var_t7_2;
    s32 var_t7_3;
    s32 var_v0;
    void **temp_a0_4;
    void **temp_a0_5;
    void **temp_a0_6;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s1_2;
    void *temp_s6;
    void *temp_t5;
    void *temp_t5_2;
    void *temp_v0;

    var_fp = 0;
    temp_s5 = func_0010C778(M2C_FIELD(arg0, void **, 4));
    temp_s6 = func_00111E38(0);
    temp_v0 = func_00167F18(0);
    var_s4 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (M2C_FIELD(temp_v0, s64 *, 8) & 0x800) {
        var_s0 = 0;
        func_00190128(sp);
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        temp_s3 = M2C_FIELD(temp_a0, s32 *, 0x9F4);
        func_00190128(temp_a0 + 0x9F4);
loop_2:
        var_a1 = var_s0;
loop_3:
        temp_v0_2 = func_00190730(sp, var_a1);
        var_s0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            var_a1 = var_s0;
            if (func_001901C0(sp) != 0) {
                if (func_0019C410(sp0, var_a1) == 0) {
                    var_a1 = var_s0;
                    if (func_00135C88(temp_s5, sp0) < 0) {
                        temp_t5 = M2C_FIELD(arg0, void **, 4);
                        M2C_FIELD(temp_t5, s32 *, 0x9F4) = sp0;
                        M2C_FIELD(temp_t5, s32 *, 0x9F8) = sp4;
                        M2C_FIELD(temp_t5, s32 *, 0x9FC) = sp8;
                        M2C_FIELD(temp_t5, s32 *, 0xA00) = spC;
                        M2C_FIELD(temp_t5, s32 *, 0xA04) = sp10;
                        func_00135BD0(temp_s5, sp0);
                    } else {
                        goto loop_3;
                    }
                } else {
                    goto loop_2;
                }
            } else {
                goto loop_3;
            }
        }
        temp_s0 = M2C_FIELD(arg0, void **, 4);
        var_t7 = 0 & 0xFF;
        if (func_00190140(temp_s0 + 0x9F4) != 0) {
            var_t7 = (M2C_FIELD(temp_s0, s32 *, 0x9F4) != 0) & 0xFF;
        }
        if (var_t7 == 0) {
            temp_s0_2 = func_00135C80(temp_s5);
            var_v0 = 0;
            if (temp_s3 != 0) {
                temp_v0_3 = func_00135C88(temp_s5, temp_s3);
                var_v0 = (temp_v0_3 >= 0) ? (temp_v0_3 + 1) : 0;
            }
            var_s3 = var_v0;
            temp_v0_4 = var_v0 + temp_s0_2;
            if (var_s3 < temp_v0_4) {
                var_a1_2 = var_s3;
loop_11:
                temp_s1 = func_00135D00(temp_s5, var_a1_2);
                func_00190128(sp);
                func_00190878(sp, temp_s1, 0);
                var_a1_3 = 0;
loop_12:
                temp_v0_5 = func_00190730(sp, var_a1_3);
                if (temp_v0_5 != 0) {
                    if (sp0 == temp_s1) {
                        var_a1_3 = temp_v0_5;
                        if (func_001901C0(sp) != 0) {
                            temp_t5_2 = M2C_FIELD(arg0, void **, 4);
                            M2C_FIELD(temp_t5_2, s32 *, 0x9F4) = sp0;
                            M2C_FIELD(temp_t5_2, s32 *, 0x9F8) = sp4;
                            M2C_FIELD(temp_t5_2, s32 *, 0x9FC) = sp8;
                            M2C_FIELD(temp_t5_2, s32 *, 0xA00) = spC;
                            M2C_FIELD(temp_t5_2, s32 *, 0xA04) = sp10;
                        } else {
                            goto loop_12;
                        }
                    }
                }
                temp_s0_3 = M2C_FIELD(arg0, void **, 4);
                var_t7_2 = 0 & 0xFF;
                if (func_00190140(temp_s0_3 + 0x9F4) != 0) {
                    var_t7_2 = (M2C_FIELD(temp_s0_3, s32 *, 0x9F4) != 0) & 0xFF;
                }
                if (var_t7_2 == 0) {
                    var_s3 += 1;
                    var_a1_2 = var_s3;
                    if (var_s3 < temp_v0_4) {
                        goto loop_11;
                    }
                }
            }
        }
        temp_s0_4 = M2C_FIELD(arg0, void **, 4);
        var_t7_3 = 0 & 0xFF;
        if (func_00190140(temp_s0_4 + 0x9F4) != 0) {
            var_t7_3 = (M2C_FIELD(temp_s0_4, s32 *, 0x9F4) != 0) & 0xFF;
        }
        if (var_t7_3 == 0) {
            func_00190128(M2C_FIELD(arg0, void **, 4) + 0x9F4);
        } else {
            temp_a0_2 = M2C_FIELD(temp_s6, s32 *, 0xB40);
            var_fp = 1;
            if (temp_a0_2 != 0) {
                func_0019CA90(temp_a0_2, 3, M2C_FIELD(arg0, void **, 4) + 0x9F4);
            }
            var_s4 = 0x19;
        }
        func_002BA2E8(7, 0);
    } else if (M2C_FIELD(temp_v0, s64 *, 0) & 0x3C0000) {
        func_00190128(M2C_FIELD(arg0, void **, 4) + 0x9F4);
        temp_a0_3 = M2C_FIELD(temp_s6, s32 *, 0xB40);
        if (temp_a0_3 != 0) {
            func_0019CA90(temp_a0_3, 3, NULL);
        }
        var_s4 = 3;
    }
    temp_s1_2 = arg0 + 0x40;
    if (func_001901C0(M2C_FIELD(arg0, void **, 4) + 0x9F4) != 0) {
        func_00190388(sp, M2C_FIELD(arg0, void **, 4) + 0x9F4);
        if (temp_s1_2 != sp) {
            M2C_FIELD(arg0, s128 *, 0x40) = (s128) sp0;
        }
    } else {
        func_0011A858(sp, arg0);
        if (temp_s1_2 == sp) {
            var_s4 = 3;
        } else {
            M2C_FIELD(arg0, s128 *, 0x40) = sp0;
            var_s4 = 3;
        }
    }
    temp_a0_4 = M2C_FIELD(arg0, void ***, 0x30);
    if (func_00197920() == 0) {
        if (temp_a0_4 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x2C) != var_s4) {
                func_0013E4B8(temp_a0_4);
                goto block_34;
            }
        } else {
block_34:
            M2C_FIELD(arg0, s32 *, 0x2C) = var_s4;
            M2C_FIELD(arg0, void ***, 0x30) = func_0013E610(var_s4);
            sp0 = M2C_FIELD(arg0, s128 *, 0x40);
            temp_a0_5 = M2C_FIELD(arg0, void ***, 0x30);
            M2C_FIELD(*temp_a0_5, M2C_UNK (**)(void **, void *), 0x1C)(temp_a0_5, sp);
            func_0013E890();
        }
    } else if (temp_a0_4 != NULL) {
        func_0013E4B8(temp_a0_4);
        M2C_FIELD(arg0, void ***, 0x30) = NULL;
    }
    if (var_fp != 0) {
        func_0014EC20();
    }
    if (M2C_FIELD(arg0, void ***, 0x30) != NULL) {
        sp0 = M2C_FIELD(arg0, s128 *, 0x40);
        temp_a0_6 = M2C_FIELD(arg0, void ***, 0x30);
        M2C_FIELD(*temp_a0_6, M2C_UNK (**)(void **, void *), 0x1C)(temp_a0_6, sp);
    }
}
