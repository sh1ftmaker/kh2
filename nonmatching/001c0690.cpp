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

s32 FUN_00188958(...) asm("func_00188958");
s32 FUN_001a1950(...) asm("func_001a1950");
s32 FUN_001a1a20(...) asm("func_001a1a20");
s32 FUN_001a1aa0(...) asm("func_001a1aa0");
s32 FUN_001a3188(...) asm("func_001a3188");
s32 FUN_001b7428(...) asm("func_001b7428");
s32 FUN_001b74b8(...) asm("func_001b74b8");
s32 FUN_001b7508(...) asm("func_001b7508");
s32 FUN_001b7538(...) asm("func_001b7538");
s32 FUN_001b7658(...) asm("func_001b7658");
s32 FUN_001c0690(...) asm("_ZNK2YS10BONUSLEVEL2upEPNS_5SHEETE");
extern u32 DAT_0032dfc8 asm("D_0032dfc8");
extern u32 DAT_0032f230 asm("D_0032f230");
extern u32 LAB_001c070c asm("D_001c070c");

// Ghidra decompile of 0x001c0690, wrapped mechanically (ad/fallback.py)

void FUN_001c0690_impl(int param_1,undefined8 param_2) asm("_ZNK2YS10BONUSLEVEL2upEPNS_5SHEETE");
void FUN_001c0690_impl(int param_1,undefined8 param_2) {
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_80 [80];
  
  FUN_001b74b8(auStack_80);
  uVar4 = (uint)*(byte *)(param_1 + 2);
  uVar6 = (uint)*(byte *)(param_1 + 3);
  iVar3 = (int)param_2;
  if (DAT_0032dfc8 == 3) {
    bVar1 = *(byte *)(param_1 + 1);
    if (bVar1 != 0) {
      if ((3 < bVar1) && (bVar1 != 0xe)) {
        iVar5 = *(int *)(iVar3 + 4);
        goto LAB_001c070c;
      }
      uVar4 = (int)(uint)*(byte *)(param_1 + 2) >> 1;
      uVar6 = 0;
    }
  }
  iVar5 = *(int *)(iVar3 + 4);
LAB_001c070c:
  *(uint *)(iVar3 + 4) = iVar5 + uVar4;
  *(uint *)(iVar3 + 0x184) = *(int *)(iVar3 + 0x184) + uVar6;
  FUN_001a1950(param_2,uVar4,0,0);
  FUN_001a1a20(param_2,uVar6,0);
  uVar2 = (uint)*(byte *)(iVar3 + 0x1b2) + (uint)*(byte *)(param_1 + 4);
  if (9 < uVar2) {
    uVar2 = 9;
  }
  *(char *)(iVar3 + 0x1b2) = (char)uVar2;
  FUN_001a1aa0(param_2,0);
  iVar5 = *(int *)(iVar3 + 0x244);
  if (iVar5 != 0) {
    FUN_00188958(iVar5,(uint)*(byte *)(iVar5 + 0x12) + (uint)*(byte *)(param_1 + 5));
    *(char *)(*(int *)(iVar3 + 0x244) + 0x11) =
         *(char *)(*(int *)(iVar3 + 0x244) + 0x11) + *(char *)(param_1 + 6);
    *(char *)(*(int *)(iVar3 + 0x244) + 0x10) =
         *(char *)(*(int *)(iVar3 + 0x244) + 0x10) + *(char *)(param_1 + 7);
  }
  FUN_001b7508(auStack_80,uVar4,0x8ae2);
  iVar7 = 1;
  FUN_001b7508(auStack_80,uVar6,0x8ae3);
  FUN_001b7508(auStack_80,*(undefined1 *)(param_1 + 4),0x8ae4);
  FUN_001b7508(auStack_80,*(undefined1 *)(param_1 + 5),0x8ae5);
  FUN_001b7508(auStack_80,*(undefined1 *)(param_1 + 6),0x8ae6);
  FUN_001b7508(auStack_80,*(undefined1 *)(param_1 + 7),0x8ae7);
  iVar5 = param_1;
  do {
    if (*(short *)(iVar5 + 8) != 0) {
      FUN_001a3188(*(short *)(iVar5 + 8),*(undefined4 *)(iVar3 + 0x254),0);
      FUN_001b7538(auStack_80,*(undefined2 *)(iVar5 + 8));
    }
    iVar7 = iVar7 + -1;
    iVar5 = iVar5 + 2;
  } while (-1 < iVar7);
  if (*(int *)(iVar3 + 0x25c) != 0) {
    FUN_001b7428();
  }
  FUN_001b7658(auStack_80,*(undefined1 *)(param_1 + 1),DAT_0032f230);
  return;
}

