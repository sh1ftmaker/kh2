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
s32 FUN_00139570(...) asm("func_00139570");
s32 FUN_001396b0(...) asm("func_001396b0");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_0014b200(...) asm("func_0014b200");
s32 FUN_00158050(...) asm("func_00158050");
s32 FUN_002298a8(...) asm("_ZN2sa13MUSICAL_COMBO6createEi");
s32 FUN_0022a0f8(...) asm("func_0022a0f8");
s32 FUN_0022b720(...) asm("func_0022b720");
s32 FUN_0022b9e0(...) asm("func_0022b9e0");
s32 FUN_0031a260(...) asm("func_0031a260");

// Ghidra decompile of 0x002298a8, wrapped mechanically (ad/fallback.py)

void FUN_002298a8_impl(undefined8 param_1,long param_2) asm("_ZN2sa13MUSICAL_COMBO6createEi");
void FUN_002298a8_impl(undefined8 param_1,long param_2) {
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_60;
  
  iVar5 = (int)param_1;
  *(int *)(iVar5 + 0xba0) = (int)param_2;
  uStack_60 = 0x6f;
  uVar7 = 0x60;
  uVar8 = 0x89;
  uVar1 = FUN_0022b720();
  uVar2 = FUN_0022b9e0();
  if (param_2 == 1) {
    uVar7 = 0x5f;
    uStack_60 = 0x6e;
    uVar8 = 0x87;
  }
  FUN_0022a0f8(iVar5 + 0x360,0x9c4,0,0xb);
  iVar3 = iVar5 + 0x1b8;
  FUN_0022a0f8(iVar5 + 0x6b0,0x9c4,1,0xb);
  iVar6 = iVar5 + 0xa00;
  FUN_00158050(iVar3,0x9c4,uVar2,uVar1,uVar7,100,0xb);
  FUN_001386e0(iVar6,0x9c4,uVar2,uVar1,uVar8,0xb);
  FUN_001386e0(param_1,0x9c3,uVar2,uVar1,uStack_60,0xb);
  FUN_00139570(iVar6);
  FUN_00139d78(iVar5 + 0x360);
  FUN_0014b200(iVar5 + 0x380,0);
  FUN_0014b200(iVar5 + 0x4a0,0);
  FUN_0014b200(iVar5 + 0x5a0,0);
  FUN_00139d78(iVar5 + 0x6b0);
  FUN_0014b200(iVar5 + 0x6d0,200);
  FUN_0014b200(iVar5 + 0x7f0,200);
  FUN_0014b200(iVar5 + 0x8f0,200);
  *(int *)(iVar5 + 0x344) = iVar5;
  FUN_001396b0(iVar3);
  if (*(int *)(iVar5 + 0x344) != 0) {
    *(undefined4 *)(iVar5 + 0x348) = 0;
    FUN_001396b0(iVar3);
    if (*(int *)(iVar5 + 0x348) != 0) {
      FUN_0031a260(iVar3,0);
    }
  }
  iVar3 = iVar5 + 0x360;
  iVar4 = 1;
  do {
    iVar4 = iVar4 + -1;
    FUN_00139d78(iVar3);
    *(int *)(iVar3 + 0x340) = iVar5;
    iVar3 = iVar3 + 0x350;
  } while (-1 < iVar4);
  *(int *)(iVar5 + 0xb8c) = iVar5;
  FUN_001396b0(iVar6);
  if (*(int *)(iVar5 + 0xb8c) == 0) {
    *(undefined4 *)(iVar5 + 0x18c) = 0;
  }
  else {
    *(undefined4 *)(iVar5 + 0xb90) = 0;
    FUN_001396b0(iVar6);
    if (*(int *)(iVar5 + 0xb90) != 0) {
      FUN_0031a260(iVar6,0);
    }
    *(undefined4 *)(iVar5 + 0x18c) = 0;
  }
  FUN_001396b0(param_1);
  if (*(int *)(iVar5 + 0x18c) != 0) {
    *(undefined4 *)(iVar5 + 400) = 0;
    FUN_001396b0(param_1);
    if (*(int *)(iVar5 + 400) != 0) {
      FUN_0031a260(param_1,0);
      return;
    }
  }
  return;
}

