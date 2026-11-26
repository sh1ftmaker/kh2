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

s32 FUN_00102080(...) asm("func_00102080");
s32 FUN_001024a8(...) asm("func_001024a8");
s32 FUN_00102e90(...) asm("func_00102e90");
s32 FUN_001037f8(...) asm("_ZN4MENU13pauseExecTaskEP4TASK");
s32 FUN_00103c70(...) asm("func_00103c70");
s32 FUN_00103e78(...) asm("func_00103e78");
s32 FUN_00103ea0(...) asm("func_00103ea0");
s32 FUN_00104288(...) asm("func_00104288");
s32 FUN_00104600(...) asm("func_00104600");
s32 FUN_001050c8(...) asm("func_001050c8");
s32 FUN_0014c9d8(...) asm("func_0014c9d8");
s32 FUN_0014df88(...) asm("func_0014df88");
s32 FUN_0014e0d8(...) asm("func_0014e0d8");
s32 FUN_00167ea8(...) asm("func_00167ea8");
s32 FUN_0023ed90(...) asm("func_0023ed90");
s32 FUN_0023fb00(...) asm("func_0023fb00");
extern u32 DAT_0032b984 asm("D_0032b984");
extern u32 DAT_0032b9bc asm("D_0032b9bc");
extern u32 DAT_0032ba24 asm("D_0032ba24");
extern u32 DAT_0032ba64 asm("D_0032ba64");
extern u32 DAT_003a6a50 asm("D_003a6a50");

// Ghidra decompile of 0x001037f8, wrapped mechanically (ad/fallback.py)

void FUN_001037f8_impl(undefined8 param_1) asm("_ZN4MENU13pauseExecTaskEP4TASK");
void FUN_001037f8_impl(undefined8 param_1) {
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  bVar2 = false;
  FUN_00103ea0(0);
  if (((((DAT_0032ba24 == 1) || (DAT_0032ba24 == 5)) || (DAT_0032ba24 == 6)) && (DAT_0032b984 == 2))
     || ((DAT_0032ba24 == 4 && (DAT_0032b9bc == 2)))) {
    bVar2 = true;
  }
  else if (DAT_0032ba24 == 2) {
    bVar2 = DAT_0032ba64 == 2;
  }
  if (!bVar2) {
    FUN_0014c9d8(1);
    iVar1 = DAT_0032ba24;
    if (((DAT_0032ba24 == 1) || (DAT_0032ba24 == 5)) || (DAT_0032ba24 == 6)) {
      if (DAT_003a6a50 != 10) {
        FUN_0014df88();
        FUN_0014e0d8();
      }
      if (DAT_0032b984 != 0) {
        DAT_0032b984 = 2;
      }
    }
    else if (DAT_0032ba24 == 2) {
      FUN_0014df88();
      FUN_0014e0d8();
      if (DAT_0032ba64 != 0) {
        DAT_0032ba64 = iVar1;
      }
    }
    FUN_0023ed90();
    if (((DAT_0032ba24 == 1) || (DAT_0032ba24 == 5)) || (DAT_0032ba24 == 6)) {
      uVar3 = FUN_001050c8();
    }
    else if (DAT_0032ba24 == 2) {
      uVar3 = FUN_00104288();
    }
    else if (DAT_0032ba24 == 3) {
      uVar3 = FUN_00104600();
    }
    else {
      uVar3 = FUN_00102e90();
    }
    FUN_0023fb00(uVar3);
    FUN_00103c70();
    FUN_00103e78();
  }
  FUN_00102080(0x32b9e8);
  FUN_00167ea8();
  FUN_001024a8(param_1);
  return;
}

