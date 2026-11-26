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

// m2c raw+unkfix output for 0x00299920, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00299920 {
    /* 0x00 */ char pad0[0x50];
};                                                  /* size = 0x50 */

s32 func_0028AF90(s32, s32) asm("func_0028AF90");
s32 func_00138C10(s32 = 0, s32 = 0) asm("func_00138C10");
s32 func_00192048(u16 = 0) asm("func_00192048");
s32 func_002766D0() asm("func_002766D0");
s32 func_00276C18(s32 = 0) asm("func_00276C18");
void *func_002891B8(s32 = 0, s32 = 0) asm("func_002891B8");
s32 func_0028AFA8(s32 = 0) asm("func_0028AFA8");
s32 func_002A0360() asm("func_002A0360");
s32 func_002A1B18(s32 = 0, s32 = 0) asm("func_002A1B18");
s32 func_002A6500() asm("func_002A6500");
s32 func_002A7530() asm("func_002A7530");
s32 func_002A8870(s32 = 0) asm("func_002A8870");
s32 func_002A9B88(s32 = 0) asm("func_002A9B88");
s32 func_002AA098(s32 = 0) asm("func_002AA098");
s32 func_002AA148(s32 = 0) asm("func_002AA148");
s32 func_002AA2F8(s32 = 0) asm("func_002AA2F8");
s32 func_002AA378(s32 = 0) asm("func_002AA378");
s32 func_002AAA38(s32 = 0) asm("func_002AAA38");
s32 func_002AAAB8(s32 = 0) asm("func_002AAAB8");
s32 func_002AACD8(s32 = 0) asm("func_002AACD8");
s32 func_002AAD58(s32 = 0) asm("func_002AAD58");
s32 func_002AB100(s32 = 0) asm("func_002AB100");
s32 func_002AB180(s32 = 0) asm("func_002AB180");
s32 func_002AB540(s32 = 0) asm("func_002AB540");
s32 func_002AB620(s32 = 0) asm("func_002AB620");
s32 func_002AB8E8(s32 = 0) asm("func_002AB8E8");
s32 func_002AB9C8(s32 = 0) asm("func_002AB9C8");
s32 func_002ABC60(s32 = 0) asm("func_002ABC60");
s32 func_002ABCE8(s32 = 0) asm("func_002ABCE8");
s32 func_002AC420(s32 = 0) asm("func_002AC420");
s32 func_002AC538(s32 = 0) asm("func_002AC538");
s32 func_002AC748(s32 = 0) asm("func_002AC748");
s32 func_002AC800(s32 = 0) asm("func_002AC800");
s32 func_002AD1B0(s32 = 0) asm("func_002AD1B0");
s32 func_002AD338() asm("func_002AD338");
s32 func_002AD660() asm("func_002AD660");
s32 func_002AD7D0(s32 = 0) asm("func_002AD7D0");
s32 func_002AD950(s32 = 0) asm("func_002AD950");
s32 func_002ADAF0(s32 = 0) asm("func_002ADAF0");
s32 func_002ADCB0(s32 = 0) asm("func_002ADCB0");
s32 func_002ADF60(s32 = 0) asm("func_002ADF60");
s32 func_002AE1B0(s32 = 0, s32 = 0) asm("func_002AE1B0");
s32 func_002AE660(s32 = 0) asm("func_002AE660");
s32 func_002AE768(s32 = 0) asm("func_002AE768");
s32 func_002AE890(s32 = 0) asm("func_002AE890");
s32 func_002B3AE8() asm("func_002B3AE8");
extern s32 D_00374910 asm("D_00374910");
void func_00299920(...) asm("_ZN2Tz12JmCollection12SetupSelMessEv");
void func_00299920_impl(void) asm("_ZN2Tz12JmCollection12SetupSelMessEv");
void func_00299920_impl(void) {
    s32 temp_fp;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    u32 var_s4;
    void *temp_s0;

    var_s4 = 0;
    var_s6 = 0;
    temp_fp = func_002766D0();
    temp_v0 = func_0028AFA8(*(s32 *)0x35F200);
    if (temp_v0 > 0) {
        do {
            var_s5 = 1;
            var_s1 = 0;
            var_s2 = 0;
            var_s3 = 0;
            switch (var_s4) {
            case 0:
                if ((func_002A0360() != 0) || (var_s5 = 0, (func_00276C18() != 0))) {
                    var_s3 = func_002AA2F8(-1);
                    var_s2 = func_002AA378(-1);
                    var_v0 = func_002AD338();
block_6:
                    var_s1 = var_v0;
                default:
block_7:
block_8:
                    temp_s0 = func_002891B8(*(s32 *)0x35F200, var_s6);
                    (*(s32*)((s8*)temp_s0 + 0x198)) = func_00192048(*((var_s4 * 2) + &D_00374910));
                    if (var_s5 != 0) {
                        if (var_s3 != 0) {
                            if (var_s2 != 0) {
                                var_a1 = *(s32 *)0x37490C;
                            } else {
                                var_a1 = *(s32 *)0x374908;
                            }
                            func_00138C10(temp_fp + (var_s6 * 0x198) + 0xA998, var_a1);
                        }
                        if ((var_s5 != 0) && (var_s1 != 0)) {
                            func_00138C10(temp_fp + (var_s6 * 0x198) + 0x7698, 0x9C);
                        }
                    }
                    var_s6 += 1;
                }
                break;
            case 1:
                var_s0 = 0;
loop_22:
                temp_v0_2 = func_002AA098(var_s0);
                var_s3 = temp_v0_2;
                if (temp_v0_2 == 0) {
                    var_s0 += 1;
                    if (var_s0 >= 0xF) {
                        temp_v0_3 = func_002AA098(0x10);
                        var_s3 = temp_v0_3;
                        if (temp_v0_3 != 0) {
                            goto block_25;
                        }
                    } else {
                        goto loop_22;
                    }
                } else {
block_25:
                    var_s0_2 = 0;
loop_26:
                    temp_v0_4 = func_002AA148(var_s0_2);
                    var_s2 = temp_v0_4;
                    if (temp_v0_4 != 0) {
                        var_s0_2 += 1;
                        if (var_s0_2 >= 0xF) {
                            var_s2 = func_002AA148(0x10);
                        } else {
                            goto loop_26;
                        }
                    }
                }
                var_s0_3 = 0;
loop_30:
                temp_v0_5 = func_002AD1B0(var_s0_3);
                var_s1 = temp_v0_5;
                if (temp_v0_5 != 0) {
                    var_s0_3 += 1;
                    var_a0 = 0x10;
                    if (var_s0_3 >= 0xF) {
block_33:
                        var_v0 = func_002AD1B0(var_a0);
                        goto block_6;
                    }
                    goto loop_30;
                }
                goto block_7;
            case 2:
                var_s3 = func_002AA098(0x11);
                var_s2 = func_002AA148(0x11);
                var_a0 = 0x11;
                goto block_33;
            case 3:
                var_s3 = func_002AA098(0x12);
                var_s2 = func_002AA148(0x12);
                var_a0 = 0x12;
                goto block_33;
            case 4:
                var_s3 = func_002AB540(-1);
                var_s2 = func_002AB620(-1);
                var_v0 = func_002ADAF0(-1);
                goto block_6;
            case 5:
                if (func_002B3AE8() == 0) {
                    var_s5 = 0;
                    if (func_00276C18(-1) != 0) {
                        goto block_40;
                    }
                } else {
block_40:
                    var_s3 = 0;
                    if ((func_002AC420(-1) != 0) || (func_002AC748(-1) != 0)) {
                        var_s3 = 1;
                    }
                    if ((func_002AC420(-1) != 0) && (func_002AC748(-1) == 0)) {
                        var_v0_2 = func_002AC538(-1);
                        goto block_46;
                    }
                    if ((func_002AC420(-1) == 0) && (func_002AC748(-1) != 0)) {
                        var_v0_2 = func_002AC800(-1);
block_46:
                        var_s2 = var_v0_2;
                    } else {
                        var_s2 = 0;
                        if (func_002AC420(-1) != 0) {
                            if (func_002AC748(-1) != 0) {
                                var_s2 = 0;
                                if (func_002AC538(-1) != 0) {
                                    if (func_002AC800(-1) != 0) {
                                        var_s2 = 1;
                                    }
                                }
                            } else {
                                var_s2 = 0;
                            }
                        }
                    }
                    var_s1 = 0;
                    if ((func_002AE660(-1) != 0) && (func_002AE768(-1) != 0)) {
                        if (func_002AE890(-1) != 0) {
                            var_s1 = 1;
                        }
                    }
                    goto block_8;
                }
                break;
            case 6:
                var_s3 = func_002AB8E8(-1);
                var_s2 = func_002AB9C8(-1);
                var_v0 = func_002ADCB0(-1);
                goto block_6;
            case 7:
                if ((func_002A9B88(-1) != 0) || (var_s5 = 0, (func_00276C18() != 0))) {
                    var_s3 = func_002AACD8(-1);
                    var_s2 = func_002AAD58(-1);
                    var_v0 = func_002AD7D0(-1);
                    goto block_6;
                }
                break;
            case 8:
                if ((func_002A8870(-1) != 0) || (var_s5 = 0, (func_00276C18() != 0))) {
                    var_s3 = func_002AB100(-1);
                    var_s2 = func_002AB180(-1);
                    var_v0 = func_002AD950(-1);
                    goto block_6;
                }
                break;
            case 9:
                if ((func_002A6500() != 0) || (var_s5 = 0, (func_00276C18() != 0))) {
                    var_s3 = func_002AAA38(-1);
                    var_s2 = func_002AAAB8(-1);
                    var_v0 = func_002AD660();
                    goto block_6;
                }
                break;
            case 10:
                if ((func_002A7530() != 0) || (var_s5 = 0, (func_00276C18() != 0))) {
                    var_s3 = func_002ABC60(-1);
                    var_s2 = func_002ABCE8(-1);
                    var_v0 = func_002ADF60(-1);
                    goto block_6;
                }
                break;
            case 11:
                temp_v0_6 = func_002A1B18(1, -1);
                if (temp_v0_6 != 0) {
                    var_s3 = 1;
                    var_s2 = temp_v0_6 == 2;
                }
                var_v0 = func_002AE1B0(1, 0x10);
                goto block_6;
            }
            var_s4 += 1;
        } while ((s32) var_s4 < temp_v0);
    }
    func_0028AF90(*(s32 *)0x35F200, var_s6);
}
