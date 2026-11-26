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
s32 FUN_001396b0(...) asm("func_001396b0");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_0014b200(...) asm("func_0014b200");
s32 FUN_00158050(...) asm("func_00158050");
s32 FUN_0022a0f8(...) asm("func_0022a0f8");
s32 FUN_0022a7e0(...) asm("_ZN2sa13MUSICAL_INPUT6createEi");
s32 FUN_0022b720(...) asm("func_0022b720");
s32 FUN_0022b9e0(...) asm("func_0022b9e0");
s32 FUN_0031a260(...) asm("func_0031a260");
extern u32 DAT_003710f8 asm("D_003710f8");

// Ghidra decompile of 0x0022a7e0, wrapped mechanically (ad/fallback.py)

void FUN_0022a7e0_impl(undefined8 param_1,undefined4 param_2) asm("_ZN2sa13MUSICAL_INPUT6createEi");
void FUN_0022a7e0_impl(undefined8 param_1,undefined4 param_2) {
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x1578) = param_2;
  uVar5 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uVar1 = FUN_0022b720();
  uVar2 = FUN_0022b9e0();
  switch(*(undefined4 *)(iVar3 + 0x1578)) {
  case 0:
    uVar5 = 0x5a;
    uStack_60 = 0x67;
    uStack_5c = 0x7f;
    break;
  case 1:
    uVar5 = 0x5b;
    uStack_60 = 0x68;
    uStack_5c = 0x82;
    break;
  case 2:
  case 4:
    uVar5 = 0x5c;
    uStack_60 = 0x69;
    uStack_5c = 0x61;
    break;
  case 3:
    uVar5 = 0x5d;
    uStack_60 = 0x6a;
    uStack_5c = 0x62;
  }
  FUN_0022a0f8(iVar3 + 0x690,0x9c4,0,0xb);
  iVar7 = iVar3 + 0x13d0;
  FUN_0022a0f8(iVar3 + 0x1080,0x9c4,1,0xb);
  iVar6 = 2;
  iVar4 = iVar3 + 0x1b8;
  FUN_00158050(iVar3 + 0x4f0,0x9c4,uVar2,uVar1,uVar5,100,0xb);
  FUN_0022a0f8(iVar3 + 0xd30,0x9c4,1,0xb);
  FUN_00158050(iVar3 + 0x354,0x9c4,uVar2,uVar1,0x65,500,0xb);
  FUN_0022a0f8(iVar3 + 0x9e0,0x9c4,1,0xb);
  FUN_00158050(iVar4,0x9c4,uVar2,uVar1,0x66,700,0xb);
  FUN_001386e0(iVar7,0x9c4,uVar2,uVar1,uStack_5c,0xb);
  FUN_001386e0(param_1,0x9c3,uVar2,uVar1,uStack_60,0xb);
  FUN_00139d78(iVar3 + 0x690);
  FUN_0014b200(iVar3 + 0x6b0,0);
  FUN_0014b200(iVar3 + 2000,0);
  FUN_0014b200(iVar3 + 0x8d0,0);
  FUN_00139d78(iVar3 + 0x1080);
  FUN_0014b200(iVar3 + 0x10a0,200);
  FUN_0014b200(iVar3 + 0x11c0,200);
  FUN_0014b200(iVar3 + 0x12c0,200);
  FUN_00139d78(iVar3 + 0xd30);
  FUN_0014b200(iVar3 + 0xd50,600);
  FUN_0014b200(iVar3 + 0xe70,600);
  FUN_0014b200(iVar3 + 0xf70,600);
  FUN_00139d78(iVar3 + 0x9e0);
  FUN_0014b200(iVar3 + 0xa00,800);
  FUN_0014b200(iVar3 + 0xb20,800);
  FUN_0014b200(iVar3 + 0xc20,800);
  do {
    *(int *)(iVar4 + 0x18c) = iVar3;
    FUN_001396b0(iVar4);
    if (*(int *)(iVar4 + 0x18c) != 0) {
      *(undefined4 *)(iVar4 + 400) = 0;
      FUN_001396b0(iVar4);
      if (*(int *)(iVar4 + 400) != 0) {
        FUN_0031a260(iVar4,0);
      }
    }
    iVar6 = iVar6 + -1;
    iVar4 = iVar4 + 0x19c;
  } while (-1 < iVar6);
  iVar4 = iVar3 + 0x690;
  iVar6 = 3;
  do {
    iVar6 = iVar6 + -1;
    FUN_00139d78(iVar4);
    *(int *)(iVar4 + 0x340) = iVar3;
    iVar4 = iVar4 + 0x350;
  } while (-1 < iVar6);
  *(int *)(iVar3 + 0x155c) = iVar3;
  FUN_001396b0(iVar7);
  if (*(int *)(iVar3 + 0x155c) == 0) {
    *(undefined4 *)(iVar3 + 0x18c) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x1560) = 0;
    FUN_001396b0(iVar7);
    if (*(int *)(iVar3 + 0x1560) != 0) {
      FUN_0031a260(iVar7,0);
    }
    *(undefined4 *)(iVar3 + 0x18c) = 0;
  }
  FUN_001396b0(param_1);
  if (*(int *)(iVar3 + 0x18c) != 0) {
    *(undefined4 *)(iVar3 + 400) = 0;
    FUN_001396b0(param_1);
    if (*(int *)(iVar3 + 400) != 0) {
      FUN_0031a260(param_1,0);
    }
  }
  *(undefined4 *)(iVar3 + 0x1570) = 0;
  *(undefined4 *)(iVar3 + 0x180) = DAT_003710f8;
  return;
}

