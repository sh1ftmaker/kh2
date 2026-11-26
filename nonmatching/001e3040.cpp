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

s32 FUN_001e3040(...) asm("func_001e3040");
s32 FUN_002fdfc8(...) asm("func_002fdfc8");
extern u32 LAB_001e30c0 asm("D_001e30c0");
extern u32 LAB_001e30dc asm("D_001e30dc");
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x001e3040, wrapped mechanically (ad/fallback.py)

void FUN_001e3040_impl(int param_1,int param_2,short param_3,short param_4) asm("func_001e3040");
void FUN_001e3040_impl(int param_1,int param_2,short param_3,short param_4) {
  bool bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iStack_60;
  
  iVar11 = (int)param_3;
  iVar10 = (int)param_4;
  iVar12 = 0;
  bVar1 = *(short *)(param_2 + 2) == 0;
  iStack_60 = 0;
  if (bVar1) {
    *(undefined2 *)(param_2 + 2) = 0x2c00;
    *(undefined2 *)(param_2 + 4) = 0x3d80;
  }
  if (iVar11 == 0) {
    if (iVar10 == 0) {
      if (!bVar1) {
        return;
      }
      goto LAB_001e30c0;
    }
    uVar3 = *(ushort *)(param_2 + 4);
  }
  else {
    iStack_60 = (int)((iVar11 - (uint)*(ushort *)(param_2 + 2)) * 0x10000) >> 0x10;
LAB_001e30c0:
    if (iVar10 == 0) {
      sVar2 = *(short *)(param_1 + 6);
      goto LAB_001e30dc;
    }
    uVar3 = *(ushort *)(param_2 + 4);
  }
  iVar12 = (int)((iVar10 - (uint)uVar3) * 0x10000) >> 0x10;
  sVar2 = *(short *)(param_1 + 6);
LAB_001e30dc:
  lVar7 = (long)sVar2;
  psVar8 = (short *)(param_1 + 0x10);
  while (0 < lVar7) {
    iVar6 = param_1 + *psVar8;
    if (bVar1) {
      uVar4 = (uint)(short)(*(ushort *)(iVar6 + 0x10) & 0x3fff);
      if (uVar4 < 0x3000) {
        iVar5 = (*(uint *)(iVar6 + 0x10) & 0xffffc000) + uVar4 + -0x200;
      }
      else {
        iVar5 = (*(uint *)(iVar6 + 0x10) & 0xffffc000) + uVar4 + -0x400;
      }
      *(int *)(iVar6 + 0x10) = iVar5;
      uVar4 = *(uint *)(iVar6 + 0x14) >> 5 & 0x3fff;
      if (uVar4 < 0x3e00) {
        iVar5 = uVar4 + 0xf00;
      }
      else {
        iVar5 = uVar4 - 0x80;
      }
      *(uint *)(iVar6 + 0x14) = (*(uint *)(iVar6 + 0x14) & 0xfff8001f) + iVar5 * 0x20;
    }
    if (((iVar11 != 0) && (iStack_60 != 0)) &&
       (uVar4 = (uint)(short)(*(ushort *)(iVar6 + 0x10) & 0x3fff), 0x2bff < uVar4)) {
      iVar5 = uVar4 + iStack_60;
      if (iVar5 < 0x2c00) {
        FUN_002fdfc8(0x36e978,0x36e9e0);
        FUN_002fdfc8(0x36e998,0x36e9d0,0x240);
        trap(0);
      }
      if (iVar5 < 0x3d00) {
        uVar4 = *(uint *)(iVar6 + 0x10);
      }
      else {
        FUN_002fdfc8(0x36e978,0x36ea10);
        FUN_002fdfc8(0x36e998,0x36e9d0,0x241);
        trap(0);
        uVar4 = *(uint *)(iVar6 + 0x10);
      }
      *(uint *)(iVar6 + 0x10) = (uVar4 & 0xffffc000) + iVar5;
    }
    iVar5 = (int)lVar7;
    if (iVar10 == 0) {
      lVar7 = (long)(iVar5 + -1);
    }
    else if (iVar12 == 0) {
      lVar7 = (long)(iVar5 + -1);
    }
    else {
      uVar4 = *(uint *)(iVar6 + 0x14) >> 5 & 0x3fff;
      if (uVar4 < 0x3d80) {
        lVar7 = (long)(iVar5 + -1);
      }
      else {
        iVar9 = uVar4 + iVar12;
        if (iVar9 < 0x3d80) {
          FUN_002fdfc8(0x36e978,0x36ea40);
          FUN_002fdfc8(0x36e998,0x36e9d0,0x24b);
          trap(0);
        }
        if (iVar9 < 0x4000) {
          uVar4 = *(uint *)(iVar6 + 0x14);
        }
        else {
          FUN_002fdfc8(0x36e978,0x36ea70);
          FUN_002fdfc8(0x36e998,0x36e9d0,0x24c);
          trap(0);
          uVar4 = *(uint *)(iVar6 + 0x14);
        }
        *(uint *)(iVar6 + 0x14) = (uVar4 & 0xfff8001f) + iVar9 * 0x20;
        lVar7 = (long)(iVar5 + -1);
      }
    }
    psVar8 = psVar8 + 4;
  }
  return;
}

