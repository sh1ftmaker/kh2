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

s32 FUN_001386e0(...) asm("func_001386e0");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_001396b0(...) asm("func_001396b0");
s32 FUN_001399c0(...) asm("func_001399c0");
s32 FUN_0013a7e8(...) asm("func_0013a7e8");
s32 FUN_0013d7e0(...) asm("func_0013d7e0");
s32 FUN_0014fc40(...) asm("func_0014fc40");
s32 FUN_00154558(...) asm("_ZN2dk11GAUGE_ENEMY6createEv");
s32 FUN_00154b18(...) asm("func_00154b18");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_0031a260(...) asm("func_0031a260");

// Ghidra decompile of 0x00154558, wrapped mechanically (ad/fallback.py)

void FUN_00154558_impl(int param_1) asm("_ZN2dk11GAUGE_ENEMY6createEv");
void FUN_00154558_impl(int param_1) {
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = param_1 + 0x30;
  iVar8 = 5;
  FUN_00154b18();
  FUN_0014fc40(param_1,0x12,0,7000,6,1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = FUN_0013a7e8(1);
  uVar3 = FUN_0013d7e0();
  FUN_001386e0(iVar6,7000,uVar1,uVar3,0x26,6);
  FUN_001386e0(param_1 + 0x1c8,7000,uVar1,uVar3,0x2a,6);
  FUN_001386e0(param_1 + 0x360,7000,uVar1,uVar3,0x27,6);
  FUN_001386e0(param_1 + 0x4f8,7000,uVar1,uVar3,0x28,6);
  FUN_001386e0(param_1 + 0x690,7000,uVar1,uVar3,0x29,6);
  FUN_001386e0(param_1 + 0x828,7000,uVar1,uVar3,0x2b,6);
  iVar5 = iVar6;
  do {
    *(int *)(iVar5 + 0x18c) = iVar6;
    FUN_001396b0(iVar5);
    if (*(int *)(iVar5 + 0x18c) != 0) {
      *(undefined4 *)(iVar5 + 400) = 0;
      FUN_001396b0(iVar5);
      if (*(int *)(iVar5 + 400) != 0) {
        FUN_0031a260(iVar5,0);
      }
    }
    iVar8 = iVar8 + -1;
    iVar5 = iVar5 + 0x198;
  } while (-1 < iVar8);
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  FUN_001396b0(iVar6);
  if (*(int *)(param_1 + 0x1bc) != 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    FUN_001396b0(iVar6);
    if (*(int *)(param_1 + 0x1c0) != 0) {
      FUN_0031a260(iVar6,0);
    }
  }
  iVar8 = 0;
  iVar5 = param_1 + 0x9d8;
  iVar9 = param_1 + 0x3300;
  do {
    iVar7 = 0;
    iVar2 = param_1 + 0x9c0;
    do {
      uVar4 = 0x2d;
      if (iVar7 != 0) {
        uVar4 = 0x2c;
      }
      FUN_001386e0(iVar2,7000,uVar1,uVar3,uVar4,6);
      iVar7 = iVar7 + 1;
      *(int *)(iVar2 + 0x18c) = iVar6;
      FUN_001396b0(iVar2);
      if (*(int *)(iVar2 + 0x18c) != 0) {
        *(undefined4 *)(iVar2 + 400) = 0;
        FUN_001396b0(iVar2);
        if (*(int *)(iVar2 + 400) != 0) {
          FUN_0031a260(iVar2,0);
        }
      }
      FUN_00138c68(iVar2,iVar8,0);
      iVar2 = iVar2 + 0x198;
    } while (iVar7 < 2);
    param_1 = param_1 + 0x330;
    iVar2 = FUN_0023aa98(iVar5);
    iVar5 = iVar5 + 0x330;
    iVar8 = iVar8 - iVar2;
  } while (param_1 < iVar9);
  FUN_001399c0(6);
  return;
}

