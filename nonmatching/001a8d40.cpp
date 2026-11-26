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

s32 FUN_001a8bb8(...) asm("func_001a8bb8");
s32 FUN_001a8bf8(...) asm("func_001a8bf8");
s32 FUN_001a8c60(...) asm("func_001a8c60");
s32 FUN_001a8cd0(...) asm("func_001a8cd0");
s32 FUN_001a8d40(...) asm("func_001a8d40");
extern u32 DAT_01c6cc0c asm("D_01c6cc0c");

// Ghidra decompile of 0x001a8d40, wrapped mechanically (ad/fallback.py)

void FUN_001a8d40_impl(undefined8 param_1,int param_2) asm("func_001a8d40");
void FUN_001a8d40_impl(undefined8 param_1,int param_2) {
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_60;
  undefined4 auStack_50 [4];
  
  iVar5 = 1;
  FUN_001a8bb8(&uStack_60);
  FUN_001a8bb8(auStack_50);
  uStack_60 = *(undefined4 *)(param_2 * 4 + DAT_01c6cc0c);
  uVar1 = FUN_001a8bf8(&uStack_60,0);
  FUN_001a8c60(auStack_50,0,uVar1);
  pbVar4 = (byte *)((int)&uStack_60 + 1);
  iVar7 = 1;
  do {
    iVar6 = iVar7 + 1;
    if ((*pbVar4 & 0xc0) != 0) {
      FUN_001a8c60(auStack_50,iVar5,*pbVar4);
      iVar5 = iVar5 + 1;
      *pbVar4 = 0x12;
    }
    pbVar4 = (byte *)((int)&uStack_60 + iVar7 + 1);
    iVar7 = iVar6;
  } while (iVar6 < 4);
  iVar7 = 1;
  do {
    uVar1 = FUN_001a8bf8(param_1,iVar7);
    lVar2 = FUN_001a8cd0(&uStack_60,uVar1);
    iVar6 = iVar7 + 1;
    if (-1 < lVar2) {
      uVar1 = FUN_001a8bf8(param_1,iVar7);
      FUN_001a8c60(auStack_50,iVar5,uVar1);
      *(undefined1 *)((int)&uStack_60 + (int)lVar2) = 0x12;
      iVar5 = iVar5 + 1;
    }
    iVar7 = iVar6;
  } while (iVar6 < 4);
  iVar7 = 1;
  do {
    lVar2 = FUN_001a8bf8(&uStack_60,iVar7);
    puVar3 = (undefined1 *)((int)&uStack_60 + iVar7);
    iVar7 = iVar7 + 1;
    if (lVar2 != 0x12) {
      FUN_001a8c60(auStack_50,iVar5,*puVar3);
      iVar5 = iVar5 + 1;
    }
  } while (iVar7 < 4);
  for (; iVar5 < 4; iVar5 = iVar5 + 1) {
    FUN_001a8c60(auStack_50,iVar5,0x12);
  }
  *(undefined4 *)param_1 = auStack_50[0];
  return;
}

