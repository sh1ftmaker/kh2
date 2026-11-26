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

s32 FUN_001063f0(...) asm("func_001063f0");
s32 FUN_00106450(...) asm("func_00106450");
s32 FUN_00236ca8(...) asm("func_00236ca8");
s32 FUN_00239700(...) asm("func_00239700");
s32 FUN_00239988(...) asm("func_00239988");
s32 FUN_0023c100(...) asm("_ZN2Tz9MenuBasic9SetMesResEz");
s32 FUN_0023c598(...) asm("func_0023c598");
s32 FUN_0023c6f8(...) asm("func_0023c6f8");
s32 FUN_0023ca70(...) asm("func_0023ca70");
extern u32 DAT_003714f8 asm("D_003714f8");

// Ghidra decompile of 0x0023c100, wrapped mechanically (ad/fallback.py)

undefined4 FUN_0023c100_impl(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4) asm("_ZN2Tz9MenuBasic9SetMesResEz");
undefined4 FUN_0023c100_impl(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4) {
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 4) = param_4;
  *(undefined4 *)(iVar6 + 0x28) = param_3;
  *(int *)(iVar6 + 8) = param_2;
  puVar7 = *(undefined4 **)(iVar6 + 0x2c);
  *(int *)(iVar6 + 0x10) = param_2 + *(int *)(param_2 + 0xc);
  *(int *)(iVar6 + 0x14) = param_2 + *(int *)(param_2 + 0x14);
  *(int *)(iVar6 + 0x18) = param_2 + *(int *)(param_2 + 0x1c);
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    puVar10 = puVar7 + puVar7[-1] * 0x56;
    while (bVar1 = puVar7 != puVar10, puVar10 = puVar10 + -0x56, bVar1) {
      (**(code **)*puVar10)(puVar10);
      puVar7 = *(undefined4 **)(iVar6 + 0x2c);
    }
    FUN_00106450(puVar7 + -1);
  }
  iVar11 = *(int *)(iVar6 + 0x24);
  iVar12 = iVar11 + -1;
  piVar4 = (int *)FUN_001063f0(iVar11 * 0x158 + 4,*(undefined4 *)(iVar6 + 4));
  *piVar4 = iVar11;
  piVar3 = piVar4 + 1;
  if (iVar11 != 0) {
    do {
      iVar12 = iVar12 + -1;
      FUN_00239700(piVar3);
      piVar3 = piVar3 + 0x56;
    } while (iVar12 != -1);
  }
  *(int **)(iVar6 + 0x2c) = piVar4 + 1;
  puVar7 = *(undefined4 **)(iVar6 + 0x30);
  if (puVar7 != (undefined4 *)0x0) {
    puVar10 = puVar7 + puVar7[-1] * 0x56;
    while (bVar1 = puVar7 != puVar10, puVar10 = puVar10 + -0x56, bVar1) {
      (**(code **)*puVar10)(puVar10);
      puVar7 = *(undefined4 **)(iVar6 + 0x30);
    }
    FUN_00106450(puVar7 + -1);
  }
  *(undefined4 *)(iVar6 + 0x30) = 0;
  iVar11 = 0;
  if (0 < *(int *)(iVar6 + 0x24)) {
    iVar12 = 0;
    uVar2 = *(undefined4 *)(iVar6 + 0x28);
    while( true ) {
      uVar5 = FUN_00236ca8(uVar2,0);
      iVar9 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      iVar8 = *(int *)(iVar6 + 0x2c) + iVar12;
      iVar12 = iVar12 + 0x158;
      FUN_00239988(iVar8,param_2 + *(int *)(iVar9 + *(int *)(iVar6 + 0x18)),uVar5);
      if (*(int *)(iVar6 + 0x24) <= iVar11) break;
      uVar2 = *(undefined4 *)(iVar6 + 0x28);
    }
  }
  *(undefined4 *)(iVar6 + 0x3c) = 0;
  *(undefined4 *)(iVar6 + 0x38) = 1;
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(undefined4 *)(iVar6 + 0x48) = DAT_003714f8;
  FUN_0023c598(param_1);
  FUN_0023ca70(param_1,0,0);
  FUN_0023c6f8(param_1,0);
  return 1;
}

