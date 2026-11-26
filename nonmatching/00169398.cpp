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
static AnyCell sp74;
// m2c valid-syntax output for 0x00169398, wrapped mechanically (ad/fallback.py)
struct _m2c_stack_func_00169398 {
    /* 0x00 */ char pad0[0x10];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ void *sp14;                          /* inferred */
    /* 0x18 */ char pad18[0x5C];                    /* maybe part of sp14[0x18]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad78[8];
};                                                  /* size = 0x80 */

s32 func_001050C8() asm("func_001050C8");
M2C_UNK func_0011C4B0(s32 = 0) asm("func_0011C4B0");
M2C_UNK func_0011E260(s32 = 0, s32 = 0) asm("func_0011E260");
void *func_00168B38(s32 = 0, M2C_UNK = 0, M2C_UNK = 0) asm("func_00168B38");
M2C_UNK func_0016A1B8(void * = 0, s32 = 0) asm("func_0016A1B8");
M2C_UNK func_0016A2B0(void * = 0) asm("func_0016A2B0");
M2C_UNK func_0016ADC8(void * = 0, void * = 0, s128 = 0) asm("func_0016ADC8");
M2C_UNK func_0016AEB8(void * = 0, f32 = 0) asm("func_0016AEB8");
M2C_UNK func_0016BD10(void * = 0, M2C_UNK = 0) asm("func_0016BD10");
M2C_UNK func_0017E9D0(void * = 0, void * = 0) asm("func_0017E9D0");
M2C_UNK func_001826C8(f32 = 0) asm("func_001826C8");
M2C_UNK func_00193608(void * = 0) asm("func_00193608");
M2C_UNK func_00194468(void * = 0) asm("func_00194468");
s32 func_001948E0() asm("func_001948E0");
M2C_UNK func_001957E8(void * = 0) asm("func_001957E8");
M2C_UNK func_0019F578(void * = 0) asm("func_0019F578");
M2C_UNK func_001A91F8(void * = 0) asm("func_001A91F8");
M2C_UNK func_001A92D8(void * = 0, s32 = 0, void * = 0) asm("func_001A92D8");
void **func_001A93E8(void * = 0) asm("func_001A93E8");
s32 func_001A9420(void * = 0) asm("func_001A9420");
M2C_UNK func_001A9560(void * = 0, void * = 0, void * = 0, void * = 0) asm("func_001A9560");
M2C_UNK func_001B0448(void * = 0, void * = 0) asm("func_001B0448");
M2C_UNK func_001B9380(void * = 0) asm("func_001B9380");
M2C_UNK func_001DDD10(void * = 0) asm("func_001DDD10");
M2C_UNK func_0031B9E0(void * = 0) asm("func_0031B9E0");
M2C_UNK func_0031CC28(void * = 0) asm("func_0031CC28");
M2C_UNK func_0031E158(void * = 0) asm("func_0031E158");
M2C_UNK func_0031E268(void * = 0) asm("func_0031E268");
M2C_UNK func_0031E2C0(void * = 0) asm("func_0031E2C0");
extern M2C_UNK D_0034D850 asm("D_0034D850");
extern f32 D_FLT_0036C180 asm("D_0036C180");
extern f32 D_FLT_0036C184 asm("D_0036C184");
extern f32 D_FLT_0036C188 asm("D_0036C188");
extern f32 D_FLT_0036C18C asm("D_0036C18C");
void func_00169398(void *arg0 = 0, s32 arg1 = 0, void *arg2 = 0, s32 arg3 = 0, f32 fparg0 = 0, ...) asm("_ZN2YS3OBJC1EjPKNS_8OBJENTRYEjRKN2kn7FVectorEf");
void func_00169398_impl(void *arg0, s32 arg1, void *arg2, s32 arg3, f32 fparg0) asm("_ZN2YS3OBJC1EjPKNS_8OBJENTRYEjRKN2kn7FVectorEf");
void func_00169398_impl(void *arg0, s32 arg1, void *arg2, s32 arg3, f32 fparg0) {
    s32 sp10;
    void *sp14;
    f32 sp74;
    M2C_UNK32 temp_fv0;
    s128 *temp_s6;
    s32 temp_a1;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_t5;
    u8 var_t7;
    void **temp_a0_2;
    void **temp_v0;
    void *temp_a0;
    void *temp_s2;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s4;
    void *temp_s5;
    void *temp_t1;
    void *temp_t2;
    void *temp_t3;
    void *temp_t4;
    void *temp_t5;
    void *temp_t5_2;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_t6_3;
    void *temp_t6_4;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t7_3;
    void *temp_t7_4;
    void *temp_t7_5;
    void *temp_v0_3;
    void *var_s0;
    void *var_t6;

    temp_t6 = arg0 + 0x10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0034D850;
    M2C_FIELD(arg0, void **, 8) = arg2;
    temp_t7 = arg0 + 0x20;
    M2C_FIELD(arg0, void **, 4) = arg0;
    temp_t5 = arg0 + 0x30;
    M2C_FIELD(temp_t6, f32 *, 0xC) = 0.0f;
    M2C_FIELD(temp_t6, f32 *, 4) = 0.0f;
    sp10 = arg3;
    var_s0 = arg0 + 0x308;
    M2C_FIELD(temp_t6, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_t7, f32 *, 0xC) = 0.0f;
    var_s2 = 0xF;
    M2C_FIELD(temp_t7, f32 *, 4) = 0.0f;
    sp14 = arg0 + 0x9C;
    temp_s3 = arg0 + 0x300;
    temp_s6 = M2C_ERROR(/* Read from unset register $t0 */);
    sp74 = M2C_ERROR(/* Read from unset register $fs0f */);
    M2C_FIELD(temp_t7, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_t5, f32 *, 0xC) = (f32) D_FLT_0036C180;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) D_FLT_0036C180;
    M2C_FIELD(temp_t5, f32 *, 4) = (f32) D_FLT_0036C180;
    M2C_FIELD(temp_t5, f32 *, 8) = (f32) D_FLT_0036C180;
    M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    func_001DDD10(arg0 + 0x80);
    func_001DDD10(sp14);
    M2C_FIELD(arg0, f32 *, 0xC0) = 0.0f;
    temp_t7_2 = arg0 + 0xC0;
    M2C_FIELD(temp_t7_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_t7_2, f32 *, 0x20) = 0.0f;
    M2C_FIELD(temp_t7_2, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_t7_2, f32 *, 0xC) = 0.0f;
    M2C_FIELD(temp_t7_2, f32 *, 0x10) = 0.0f;
    M2C_FIELD(temp_t7_2, f32 *, 0x14) = 0.0f;
    M2C_FIELD(temp_t7_2, f32 *, 0x18) = 0.0f;
    M2C_FIELD(temp_t7_2, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x100) = -1;
    M2C_FIELD(arg0, s32 *, 0x104) = 5;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    func_001957E8(arg0 + 0x110);
    func_0017E9D0(arg0 + 0x140, arg0);
    do {
        M2C_FIELD(var_s0, s32 *, 0) = 0;
        temp_a0 = var_s0 + 4;
        M2C_FIELD(var_s0, s32 *, 4) = 0;
        var_s2 -= 1;
        var_s0 += 8;
        func_0031CC28(temp_a0);
    } while (var_s2 != -1);
    M2C_FIELD(temp_s3, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0x300) = 0;
    temp_t6_2 = arg0 + 0x3AC;
    M2C_FIELD(temp_s3, s32 *, 4) = 0;
    M2C_FIELD(temp_s3, s32 *, 0x88) = 0;
    temp_s5 = arg0 + 0x4A0;
    M2C_FIELD(temp_s3, s32 *, 0x8C) = 0;
    M2C_FIELD(temp_s3, s32 *, 0x90) = 0;
    M2C_FIELD(temp_s3, s32 *, 0x94) = 0;
    M2C_FIELD(temp_s3, s32 *, 0x98) = 0;
    M2C_FIELD(temp_s3, s32 *, 0x9C) = 0;
    M2C_FIELD(temp_t6_2, s8 *, 3) = 0x80;
    M2C_FIELD(temp_t6_2, s8 *, 1) = 0x80;
    M2C_FIELD(temp_t6_2, s8 *, 2) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x3AC) = 0x80;
    M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
    func_0019F578(arg0 + 0x3B4);
    func_0019F578(arg0 + 0x414);
    M2C_FIELD(arg0, s32 *, 0x474) = 0;
    func_0031E2C0(arg0 + 0x478);
    M2C_FIELD(arg0, s32 *, 0x47C) = 0;
    func_0031E2C0(arg0 + 0x480);
    M2C_FIELD(arg0, s32 *, 0x484) = 0;
    M2C_FIELD(arg0, s32 *, 0x488) = 0;
    var_t6 = arg0 + 0x51C;
    M2C_FIELD(arg0, s32 *, 0x48C) = 0;
    var_t5 = 3;
    M2C_FIELD(temp_s5, s32 *, 0xC) = -1;
    M2C_FIELD(temp_s5, s32 *, 4) = 0;
    M2C_FIELD(temp_s5, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4A0) = 0;
    M2C_FIELD(arg0, f32 *, 0x4B4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x4B0) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x500) = 0;
    M2C_FIELD(arg0, s32 *, 0x504) = 0;
    M2C_FIELD(arg0, s32 *, 0x508) = 0;
    M2C_FIELD(arg0, s32 *, 0x50C) = 0;
    M2C_FIELD(arg0, s32 *, 0x510) = 0;
    M2C_FIELD(arg0, s8 *, 0x514) = 0;
    M2C_FIELD(arg0, s16 *, 0x518) = 0;
    do {
        M2C_FIELD(var_t6, s32 *, 0) = 0;
        var_t5 -= 1;
        M2C_FIELD(var_t6, s32 *, 4) = 0;
        var_t6 += 8;
    } while (var_t5 != -1);
    temp_t7_3 = arg0 + 0x560;
    temp_t6_3 = arg0 + 0x570;
    M2C_FIELD(temp_t7_3, f32 *, 0xC) = 0.0f;
    M2C_FIELD(temp_t7_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_t7_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x560) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x570) = 0;
    M2C_FIELD(temp_t6_3, s32 *, 8) = 3;
    M2C_FIELD(temp_t6_3, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 0x57C) = 0;
    M2C_FIELD(arg0, s32 *, 0x588) = 0;
    M2C_FIELD(arg0, s32 *, 0x58C) = 0;
    func_0031B9E0(arg0 + 0x590);
    temp_t7_4 = arg0 + 0x620;
    M2C_FIELD(temp_t7_4, s32 *, 0x24) = 0xFFFF;
    M2C_FIELD(temp_t7_4, s32 *, 0x28) = 0;
    M2C_FIELD(temp_t7_4, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_t7_4, s32 *, 0x30) = 0;
    M2C_FIELD(temp_t7_4, s8 *, 0x34) = 0;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($t7) */);
    temp_s2 = arg0 + 0x630;
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($t7) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf5, $vf0, $vf4 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($s2) */);
    temp_s4 = arg0 + 0x670;
    temp_s3_2 = arg0 + 0x7A0;
    M2C_FIELD(arg0, s32 *, 0x660) = (s32) (((M2C_FIELD(arg0, s32 *, 0x660) & ~1) | 2) & ~4);
    func_0031E158(temp_s4);
    func_001A91F8(temp_s3_2);
    func_001A92D8(temp_s3_2, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x7F8) = 0;
    temp_t7_5 = arg0 + 0x800;
    M2C_FIELD(arg0, s8 *, 0x7FC) = 0;
    temp_t1 = arg0 + 0x834;
    M2C_FIELD(arg0, s32 *, 0x800) = 0;
    temp_t6_4 = arg0 + 0x860;
    M2C_FIELD(temp_t7_5, s32 *, 0xC) = 0;
    temp_t5_2 = arg0 + 0x870;
    M2C_FIELD(temp_t7_5, s32 *, 4) = 0;
    temp_t4 = arg0 + 0x880;
    M2C_FIELD(temp_t7_5, s32 *, 8) = 0;
    temp_t3 = arg0 + 0x8A0;
    temp_t2 = arg0 + 0x8BC;
    M2C_FIELD(arg0, s32 *, 0x810) = 0;
    M2C_FIELD(arg0, s32 *, 0x818) = 0;
    M2C_FIELD(arg0, s32 *, 0x81C) = 0;
    M2C_FIELD(arg0, s32 *, 0x828) = 0;
    M2C_FIELD(arg0, s32 *, 0x830) = 0;
    M2C_FIELD(temp_t1, M2C_UNK32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x82C) = (f32) D_FLT_0036C180;
    temp_fv0 = M2C_FIELD(temp_t1, M2C_UNK32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x834) = (f32) D_FLT_0036C180;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x860) = temp_fv0;
    M2C_FIELD(temp_t6_4, M2C_UNK32 *, 0xC) = temp_fv0;
    M2C_FIELD(temp_t6_4, M2C_UNK32 *, 4) = temp_fv0;
    M2C_FIELD(temp_t6_4, M2C_UNK32 *, 8) = temp_fv0;
    M2C_FIELD(temp_t5_2, M2C_UNK32 *, 0xC) = temp_fv0;
    M2C_FIELD(temp_t5_2, M2C_UNK32 *, 4) = temp_fv0;
    M2C_FIELD(temp_t5_2, M2C_UNK32 *, 8) = temp_fv0;
    M2C_FIELD(temp_t4, M2C_UNK32 *, 0xC) = temp_fv0;
    M2C_FIELD(temp_t4, M2C_UNK32 *, 4) = temp_fv0;
    M2C_FIELD(temp_t4, M2C_UNK32 *, 8) = temp_fv0;
    M2C_FIELD(temp_t3, M2C_UNK32 *, 0xC) = temp_fv0;
    M2C_FIELD(temp_t3, M2C_UNK32 *, 4) = temp_fv0;
    M2C_FIELD(temp_t3, M2C_UNK32 *, 8) = temp_fv0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x870) = temp_fv0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x880) = temp_fv0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x8A0) = temp_fv0;
    M2C_FIELD(arg0, s8 *, 0x8BC) = 0x80;
    M2C_FIELD(temp_t2, s8 *, 1) = 0x80;
    M2C_FIELD(temp_t2, s8 *, 2) = 0x80;
    M2C_FIELD(temp_t2, s8 *, 3) = 0x80;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x8D4) = temp_fv0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x8C4) = temp_fv0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x8C8) = temp_fv0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x8CC) = temp_fv0;
    M2C_FIELD(arg0, f32 *, 0x8D0) = (f32) D_FLT_0036C180;
    M2C_FIELD(arg0, s8 *, 0x8DC) = 1;
    M2C_FIELD(arg0, f32 *, 0x8C0) = (f32) D_FLT_0036C180;
    M2C_FIELD(arg0, s32 *, 0x8D8) = 0;
    M2C_FIELD(arg0, s8 *, 0x8DD) = 0;
    func_0031E268(arg0 + 0x8E0);
    M2C_FIELD(arg0, f32 *, 0x9A8) = (f32) D_FLT_0036C184;
    var_t7 = 0;
    if (func_001948E0() == 0) {
        var_t7 = 0;
        if (!(*(s32 *)0x34F240 & 0x10)) {
            var_t7 = M2C_FIELD(arg2, u8 *, 0x56);
        }
    }
    M2C_FIELD(arg0, u8 *, 0x9AC) = var_t7;
    M2C_FIELD(arg0, s32 *, 0x9B0) = 0;
    M2C_FIELD(arg0, s8 *, 0x9AD) = (s8) sp10;
    func_001B9380(arg0);
    func_0016BD10(arg0, 0);
    temp_v0 = func_001A93E8(temp_s3_2);
    M2C_FIELD(arg0, void ***, 0x8B0) = temp_v0;
    if (temp_v0 != NULL) {
        temp_a0_2 = M2C_FIELD(arg0, void ***, 0x8B0);
        M2C_FIELD(arg0, s32 *, 0x670) = M2C_FIELD(*temp_a0_2, s32 (**)(void **, s32), 0x24)(temp_a0_2, func_001050C8());
        temp_v0_2 = func_001A9420(temp_s3_2);
        if (temp_v0_2 != 0) {
            func_0011E260(M2C_FIELD(arg0, s32 *, 0x670), temp_v0_2);
            M2C_FIELD(arg0, s32 *, 0x69C) = temp_v0_2;
            M2C_FIELD(arg0, s32 *, 0x7F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x7F8) | 2);
        }
        func_0011C4B0(M2C_FIELD(arg0, s32 *, 0x670));
        M2C_FIELD(temp_s4, f32 *, 0x104) = (f32) D_FLT_0036C188;
        M2C_FIELD(temp_s4, f32 *, 0x108) = (f32) D_FLT_0036C18C;
        func_00194468(arg0);
        if (M2C_FIELD(arg2, u16 *, 0x48) & 0x10) {
            M2C_FIELD(arg0, s32 *, 0x768) = (s32) (M2C_FIELD(arg0, s32 *, 0x768) | 0x20);
        }
        M2C_FIELD(temp_s4, u8 *, 0x11F) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 6);
    } else {
        M2C_FIELD(arg0, s32 *, 0x670) = 0;
        M2C_FIELD(arg0, s32 *, 0x768) = (s32) (M2C_FIELD(arg0, s32 *, 0x768) & ~4 & ~8);
    }
    M2C_FIELD(arg0, s32 *, 0x668) = 0;
    M2C_FIELD(arg0, s32 *, 0x664) = 0;
    temp_v0_3 = func_00168B38(M2C_FIELD(temp_s3_2, s32 *, 0xC), 0x17, 0);
    if (temp_v0_3 != NULL) {
        temp_a1 = M2C_FIELD(temp_v0_3, s32 *, 8);
        if (temp_a1 != 0) {
            func_0016A1B8(arg0, temp_a1);
        }
    }
    M2C_FIELD(temp_s2, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_s2, f32 *, 0xC) = (f32) D_FLT_0036C180;
    M2C_FIELD(arg0, f32 *, 0x630) = 0.0f;
    M2C_FIELD(temp_s2, f32 *, 4) = (f32) D_FLT_0036C180;
    func_001826C8((f32) M2C_FIELD(arg2, u8 *, 0x54));
    func_001B0448(temp_s5, arg0);
    M2C_FIELD(arg0, s32 *, 0x820) = 0;
    M2C_FIELD(arg0, s32 *, 0x824) = 0;
    if ((arg0 + 0x890) != temp_s6) {
        M2C_FIELD(arg0, s128 *, 0x890) = (s128) *temp_s6;
    }
    M2C_FIELD(arg0, f32 *, 0x89C) = fparg0;
    func_0016AEB8(arg0, fparg0);
    func_0016ADC8(arg0, sp, *temp_s6);
    func_00193608(arg0);
    func_0016A2B0(arg0);
    func_001A9560(temp_s3_2, arg0, sp14, arg0 + 0x7B8);
}
