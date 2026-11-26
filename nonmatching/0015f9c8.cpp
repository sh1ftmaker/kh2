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
static AnyCell sp40;
static AnyCell sp50;
static AnyCell sp60;
static AnyCell sp61;
static AnyCell sp62;
static AnyCell sp64;
static AnyCell sp68;
static AnyCell sp6C;
static AnyCell sp70;
static AnyCell sp74;
static AnyCell sp80;
static AnyCell sp84;
static AnyCell sp88;
static AnyCell sp8C;
// m2c valid-syntax output for 0x0015f9c8, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_0015F9C8 {
    /* 0x00 */ char pad0[0x10];
    /* 0x10 */ M2C_UNK sp10;                        /* inferred */
    /* 0x10 */ char pad10[0x10];
    /* 0x20 */ M2C_UNK sp20;                        /* inferred */
    /* 0x20 */ char pad20[0x20];
    /* 0x40 */ M2C_UNK sp40;                        /* inferred */
    /* 0x40 */ char pad40[0x10];
    /* 0x50 */ M2C_UNK sp50;                        /* inferred */
    /* 0x50 */ char pad50[0x10];
    /* 0x60 */ u8 sp60;                             /* inferred */
    /* 0x61 */ u8 sp61;                             /* inferred */
    /* 0x62 */ u8 sp62;                             /* inferred */
    /* 0x63 */ char pad63[1];
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ s8 sp74;                             /* inferred */
    /* 0x75 */ char pad75[0xB];                     /* maybe part of sp74[0xC]? */
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ s32 sp84;                            /* inferred */
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ void *sp8C;                          /* inferred */
    /* 0x90 */ char pad90[0x50];
};                                                  /* size = 0xE0 */

M2C_UNK func_0011E260(s32 = 0, s32 = 0) asm("func_0011E260");
M2C_UNK func_0011E880(s32 = 0, M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_0011E880");
M2C_UNK func_0011EB08(s32 = 0, M2C_UNK = 0) asm("func_0011EB08");
M2C_UNK func_00143348(void * = 0) asm("func_00143348");
M2C_UNK func_00143520(void * = 0, M2C_UNK * = 0) asm("func_00143520");
M2C_UNK func_001444C8(M2C_UNK * = 0, void * = 0, M2C_UNK * = 0) asm("func_001444C8");
M2C_UNK func_00144BE0(M2C_UNK * = 0, void * = 0) asm("func_00144BE0");
void **func_00149308(s32 = 0, s32 = 0) asm("func_00149308");
s32 func_00149320(s32 = 0, s32 = 0) asm("func_00149320");
s32 func_00149338(s32 = 0, s32 = 0) asm("func_00149338");
M2C_UNK func_00160488(void * = 0, M2C_UNK = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_00160488");
M2C_UNK func_001604F8(void * = 0) asm("func_001604F8");
M2C_UNK func_001605A0(void * = 0, M2C_UNK * = 0) asm("func_001605A0");
M2C_UNK func_001608C0(void * = 0) asm("func_001608C0");
M2C_UNK func_00160AC0(void * = 0, s32 = 0) asm("func_00160AC0");
M2C_UNK func_001614E8(void * = 0, void * = 0) asm("func_001614E8");
M2C_UNK func_00161540(void * = 0, s32 = 0) asm("func_00161540");
M2C_UNK func_001615E8(void * = 0, s32 = 0, f32 = 0) asm("func_001615E8");
M2C_UNK func_0031E158(void * = 0) asm("func_0031E158");
extern M2C_UNK D_0034C750 asm("D_0034C750");
void func_0015F9C8(void *arg0 = 0, s32 arg1 = 0, s32 arg2 = 0, s128 *arg3 = 0, s32 arg_sp0 = 0, s32 arg_sp8 = 0, s32 arg_sp10 = 0, ...) asm("func_0015f9c8");
void func_0015f9c8_impl(void *arg0, s32 arg1, s32 arg2, s128 *arg3, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) asm("func_0015f9c8");
void func_0015f9c8_impl(void *arg0, s32 arg1, s32 arg2, s128 *arg3, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {
    M2C_UNK sp10;
    M2C_UNK sp20;
    M2C_UNK sp40;
    M2C_UNK sp50;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s8 sp74;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    void *sp8C;
    s32 temp_t7_2;
    s32 temp_v0_2;
    s32 var_t3;
    void **temp_a0;
    void **temp_t4;
    void **temp_v0;
    void *temp_a1;
    void *temp_fp;
    void *temp_s3;
    void *temp_s5;
    void *temp_s6;
    void *temp_t7;
    void *temp_t7_3;
    void *var_t5;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0034C750;
    temp_s5 = arg0 + 0x50;
    sp80 = arg1;
    sp84 = M2C_ERROR(/* Read from unset register $t2 */);
    sp88 = M2C_ERROR(/* Read from unset register $t3 */);
    M2C_FIELD(arg0, s128 *, 0x50) = (s128) *arg3;
    M2C_FIELD(arg0, s128 *, 0x60) = (s128) *M2C_ERROR(/* Read from unset register $t0 */);
    M2C_FIELD(arg0, s128 *, 0x70) = (s128) *M2C_ERROR(/* Read from unset register $t1 */);
    sp8C = arg0 + 0x110;
    temp_s6 = arg0 + 0x1A4;
    temp_fp = arg0 + 0x1C0;
    temp_s3 = arg0 + 0x10;
    func_001614E8(sp8C, arg0);
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, u8 *, 0x1A4) = 0x80U;
    M2C_FIELD(temp_s6, s8 *, 3) = 0x80;
    M2C_FIELD(temp_s6, u8 *, 1) = 0x80U;
    M2C_FIELD(temp_s6, u8 *, 2) = 0x80U;
    M2C_FIELD(arg0, s32 *, 0x1A8) = arg_sp8;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = arg_sp10;
    func_0031E158(temp_fp);
    temp_v0 = func_00149308(*(s32 *)0x34C73C, arg2);
    M2C_FIELD(arg0, void ***, 4) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = M2C_FIELD(*temp_v0, s32 (**)(void **, s32), 0x24)(temp_v0, *(s32 *)0x34C738);
    func_0011E260(M2C_FIELD(arg0, s32 *, 0x1C0), func_00149320(*(s32 *)0x34C73C, arg2));
    M2C_FIELD(arg0, s32 *, 0x1EC) = func_00149320(*(s32 *)0x34C73C, arg2);
    func_001604F8(arg0);
    temp_t7 = arg0 + 0x200;
    if (temp_t7 != temp_s3) {
        M2C_FIELD(arg0, s128 *, 0x200) = (s128) M2C_FIELD(arg0, s128 *, 0x10);
        M2C_FIELD(temp_t7, s128 *, 0x10) = (s128) M2C_FIELD(temp_s3, s128 *, 0x10);
        M2C_FIELD(temp_t7, s128 *, 0x20) = (s128) M2C_FIELD(temp_s3, s128 *, 0x20);
        M2C_FIELD(temp_t7, s128 *, 0x30) = (s128) M2C_FIELD(temp_s3, s128 *, 0x30);
    }
    if ((arg0 + 0x280) != temp_s5) {
        M2C_FIELD(arg0, s128 *, 0x280) = (s128) M2C_FIELD(arg0, s128 *, 0x50);
    }
    temp_a0 = M2C_FIELD(arg0, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_a0, void **, 0), M2C_UNK (**)(void **, void *, M2C_UNK *), 0x10)(temp_a0, sp, &sp10);
    func_001444C8(&sp20, sp, &sp10);
    temp_a1 = arg0 + 0x90;
    M2C_FIELD(arg0, void **, 0x2BC) = temp_a1;
    func_00144BE0(&sp20, temp_a1);
    M2C_FIELD(&sp40, s128 *, 0) = (s128) M2C_FIELD(arg0, s128 *, 0x10);
    M2C_FIELD(&sp40, s128 *, 0x10) = (s128) M2C_FIELD(temp_s3, s128 *, 0x10);
    M2C_FIELD(&sp40, s128 *, 0x20) = (s128) M2C_FIELD(temp_s3, s128 *, 0x20);
    M2C_FIELD(&sp40, s128 *, 0x30) = (s128) M2C_FIELD(temp_s3, s128 *, 0x30);
    func_001605A0(arg0, &sp40);
    func_00143348(temp_fp);
    M2C_FIELD(arg0, s32 *, 0x2B8) = (s32) ((M2C_FIELD(arg0, s32 *, 0x2B8) & ~8) | 0x20);
    func_0011EB08(M2C_FIELD(arg0, s32 *, 0x1C0), 0);
    func_0011E880(M2C_FIELD(arg0, s32 *, 0x1C0), 2, 0, 0);
    if (arg_sp10 & 1 & 0xFF) {
        M2C_FIELD(arg0, s32 *, 0x2B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x2B8) | 1);
        func_001608C0(arg0);
    }
    if (arg_sp10 & 2) {
        sp68 = 0;
        sp64 = 0xFFFF;
        sp6C = 0;
        sp70 = 0;
        sp74 = 0;
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($s4) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($s4) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf5, $vf0, $vf4 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($t7) */);
        func_00143520(temp_s5, &sp40);
        M2C_FIELD(temp_s6, s8 *, 3) = 0x80;
        M2C_FIELD(arg0, u8 *, 0x1A4) = sp60;
        M2C_FIELD(temp_s6, u8 *, 1) = sp61;
        M2C_FIELD(temp_s6, u8 *, 2) = sp62;
        func_00160488(arg0, 0x80, 0x80, 0x80);
    }
    if ((M2C_BITWISE(f32, M2C_FIELD(arg0, s128 *, 0x70)) * M2C_FIELD(arg0, f32 *, 0x74) * M2C_FIELD(arg0, f32 *, 0x78)) < 0.0f) {
        M2C_FIELD(arg0, s32 *, 0x1C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C8) | 8);
    }
    if (sp88 != -1) {
        temp_v0_2 = func_00149338(*(s32 *)0x34C73C, arg2);
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) | 2);
            func_00161540(sp8C, temp_v0_2);
            func_001615E8(sp8C, sp88, 2.0f * (f32) arg_sp0);
        }
    }
    temp_t4 = M2C_FIELD(arg0, void ***, 4);
    if (*M2C_FIELD(temp_t4, s32 **, 4) == -1) {
        M2C_FIELD(arg0, s32 *, 0x2D4) = sp80;
        M2C_FIELD(arg0, s32 *, 0x2B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x2B8) | 0x80);
    }
    M2C_FIELD(arg0, void **, 0x1F4) = NULL;
    if (M2C_FIELD(M2C_FIELD(temp_t4, void **, 0), s32 (**)(void **), 0x38)(temp_t4) & ~1) {
        var_t3 = 0;
        M2C_FIELD(arg0, s32 *, 0x2D4) = sp80;
        M2C_FIELD(arg0, void **, 0x1F4) = (void *) (arg0 + 0x184);
        M2C_FIELD(arg0, s32 *, 0x2B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x2B8) | 0x100);
        var_t5 = arg0;
        do {
            temp_t7_2 = var_t3 + 1;
            M2C_FIELD(var_t5, s8 *, 0x188) = -0x80;
            M2C_FIELD(var_t5, s8 *, 0x189) = -0x80;
            M2C_FIELD(var_t5, s32 *, 0x184) = (s32) (1 << temp_t7_2);
            var_t3 = temp_t7_2;
            M2C_FIELD(var_t5, s8 *, 0x18A) = -0x80;
            M2C_FIELD(var_t5, s8 *, 0x18B) = -0x80;
            var_t5 += 8;
        } while (temp_t7_2 < 4);
        M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    }
    temp_t7_3 = *(void **)0x4F0004;
    if (temp_t7_3 != NULL) {
        M2C_FIELD(temp_t7_3, void **, 0x80) = arg0;
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
        *(void **)0x4F0004 = arg0;
    } else {
        *(void **)0x4F0004 = arg0;
        *(void **)0x4F3B38 = arg0;
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
    }
    func_00160AC0(arg0, sp84);
}
