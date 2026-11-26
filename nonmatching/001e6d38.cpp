// FIXME(lane): not matching; origin: ghidra (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

// Ghidra pseudo-C type aliases (mechanical, standard for any Ghidra decompile export)
typedef u8  undefined;
typedef u8  undefined1;
typedef u16 undefined2;
typedef u32 undefined3;
typedef u32 undefined4;
typedef u64 undefined5;
typedef u64 undefined6;
typedef u64 undefined7;
typedef u64 undefined8;
typedef u32 uint;
typedef u16 ushort;
typedef u8  byte;
typedef u8  uchar;
typedef u32 ulong;
typedef u64 ulonglong;
typedef s64 longlong;
typedef s32 int3;
typedef u32 uint3;
typedef s64 int5;
typedef u64 uint5;
typedef s64 int6;
typedef u64 uint6;
typedef s64 int7;
typedef u64 uint7;
typedef s32 code(...);            // Ghidra's opaque code type: callable through a pointer
// Byte-block locals (`undefined1 auVar [16]`, [12], [8], [4]): Ghidra both *assigns* them
// (`auVar = _lqc2(..)`) and lets them decay to a byte pointer (`*(int*)pauVar[4]`,
// `pauVar[5] + 0xc`) or an integer (`(int)auStack_2c0`), so: structs with those conversions.
#define _GHIDRA_BYTES(NAME, N, AL) struct __attribute__((aligned(AL))) NAME {     u8 b[N];     NAME() {}     NAME(s64 v) { *(s64*)b = v; }     template <class T> bool operator==(const T &o) const { return (s64)*this == (s64)o; }     template <class T> bool operator!=(const T &o) const { return (s64)*this != (s64)o; }     template <class T> operator T*() const { return (T*)b; }     operator s64() const { return *(s64*)b; }     u8 &operator[](int i) { return b[i]; }     u8 *operator+(int o) const { return (u8*)b + o; } };
_GHIDRA_BYTES(Q16, 16, 16)
_GHIDRA_BYTES(B12, 12, 4)
_GHIDRA_BYTES(B8, 8, 8)
_GHIDRA_BYTES(B4, 4, 4)
// Untyped global cell (used for DAT_ tokens on the second attempt): Ghidra types each DAT_
// by its use site (uint*, char, float, ...); AnyCell reads/writes as whatever that is.
struct AnyCell {
    u32 w;
    template <class T> operator T() const { return *(const T*)this; }
    operator s64() const { return *(const s32*)this; }
    template <class T> AnyCell &operator=(const T &v) { *(T*)this = v; return *this; }
    template <class T> bool operator==(T *p) const { return *(T* const*)this == p; }
    template <class T> bool operator!=(T *p) const { return *(T* const*)this != p; }
    bool operator==(s64 v) const { return *(const s32*)this == v; }
    bool operator!=(s64 v) const { return *(const s32*)this != v; }
    u8 &operator[](int i) { return ((u8*)this)[i]; }
};
// Generic stand-in result for Ghidra intrinsics (_lqc2, _vadd..., CONCAT44, SUB168, ...):
// converts to whatever the use site needs. Mechanical, never a match, always compiles.
struct AnyVal {
    template <class T> operator T() const { T t; return t; }
    operator s64() const { return 0; }
    operator Q16() const { Q16 q; return q; }
    operator B12() const { B12 q; return q; }
    operator B8() const { B8 q; return q; }
    operator B4() const { B4 q; return q; }
};
#define _GHIDRA_ANY(F) static inline AnyVal F() { AnyVal r; return r; } template <class A> static inline AnyVal F(const A &) { AnyVal r; return r; } template <class A, class B> static inline AnyVal F(const A &, const B &) { AnyVal r; return r; } template <class A, class B, class C> static inline AnyVal F(const A &, const B &, const C &) { AnyVal r; return r; } template <class A, class B, class C, class D> static inline AnyVal F(const A &, const B &, const C &, const D &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E, class G> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &, const G &) { AnyVal r; return r; }

s32 FUN_001e2b50(...) asm("func_001e2b50");
s32 FUN_001e2bc8(...) asm("func_001e2bc8");
s32 FUN_001e5fd8(...) asm("func_001e5fd8");
s32 FUN_001e6d38(...) asm("func_001e6d38");
s32 FUN_001e7650(...) asm("func_001e7650");
s32 FUN_002f4000(...) asm("func_002f4000");
extern u32 DAT_00352be4 asm("D_00352be4");
extern u32 DAT_00352be8 asm("D_00352be8");
extern u32 DAT_00352bec asm("D_00352bec");
extern u32 DAT_00352bf0 asm("D_00352bf0");
extern u32 DAT_00352bf4 asm("D_00352bf4");
extern u32 DAT_00352bf8 asm("D_00352bf8");
extern u32 DAT_00352bfc asm("D_00352bfc");
extern u32 DAT_00352c00 asm("D_00352c00");
extern u32 DAT_00352c08 asm("D_00352c08");
extern u32 DAT_00352c10 asm("D_00352c10");
extern u32 DAT_00352c18 asm("D_00352c18");
extern u32 DAT_00352c20 asm("D_00352c20");
extern u32 DAT_00352c28 asm("D_00352c28");
extern u32 DAT_00352c30 asm("D_00352c30");
extern u32 DAT_00352c40 asm("D_00352c40");
extern u32 DAT_00352c44 asm("D_00352c44");
extern u32 DAT_00352c48 asm("D_00352c48");
extern u32 DAT_00353e48 asm("D_00353e48");
extern u32 DAT_00354248 asm("D_00354248");
extern u32 DAT_0036ef38 asm("D_0036ef38");
extern u32 DAT_01d9e6b8 asm("D_01d9e6b8");
extern u32 DAT_01d9e6c8 asm("D_01d9e6c8");
extern u32 DAT_01d9e6cc asm("D_01d9e6cc");
extern u32 DAT_01d9e6d0 asm("D_01d9e6d0");
extern u32 DAT_01d9e6e4 asm("D_01d9e6e4");
extern u32 DAT_01d9ea80 asm("D_01d9ea80");
extern u32 DAT_01d9ea84 asm("D_01d9ea84");
extern u32 DAT_01d9ea88 asm("D_01d9ea88");
extern u32 DAT_01d9ea8c asm("D_01d9ea8c");
extern u32 DAT_01d9ea9c asm("D_01d9ea9c");
extern u32 DAT_01d9eaa0 asm("D_01d9eaa0");
_GHIDRA_ANY(CONCAT44)

// Ghidra decompile of 0x001e6d38, wrapped mechanically (ad/fallback.py)

void FUN_001e6d38_impl(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12, undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16, undefined8 param_17,undefined8 param_18) asm("func_001e6d38");
void FUN_001e6d38_impl(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12, undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16, undefined8 param_17,undefined8 param_18) {
  DAT_00352bfc = param_11;
  DAT_00352bf4 = param_9;
  DAT_00352bf8 = param_10;
  DAT_00352c08 = param_13;
  DAT_00352c10 = param_14;
  DAT_00352c18 = param_15;
  DAT_00352c20 = param_16;
  DAT_00352c28 = param_17;
  DAT_00352c30 = param_18;
  DAT_00352c00 = CONCAT44(0xff000000,param_12);
  DAT_00352be4 = param_5;
  DAT_00352be8 = param_6;
  DAT_00352bec = param_7;
  DAT_00352bf0 = param_8;
  FUN_001e2bc8();
  DAT_01d9ea9c = 0;
  DAT_00352c40 = (undefined4)param_2;
  DAT_00352c44 = (undefined4)param_4;
  FUN_001e7650(0x1d9e6b8,param_1,param_2);
  DAT_01d9e6e4 = &DAT_01d9e6b8;
  DAT_01d9e6c8 = &DAT_00352c48;
  DAT_01d9e6cc = &DAT_00353e48;
  DAT_01d9e6d0 = &DAT_00354248;
  DAT_01d9eaa0 = 0;
  FUN_002f4000(0x1d9ea40);
  DAT_01d9ea80 = 0;
  DAT_01d9ea84 = 0;
  DAT_01d9ea88 = 0;
  DAT_01d9ea8c = DAT_0036ef38;
  FUN_001e2b50(param_3,param_4);
  FUN_001e5fd8();
  return;
}

