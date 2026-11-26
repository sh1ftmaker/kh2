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

s32 FUN_001e2ad8(...) asm("func_001e2ad8");
s32 FUN_001e2c90(...) asm("func_001e2c90");
s32 FUN_002fdfc8(...) asm("func_002fdfc8");
extern u32 LAB_001e2d10 asm("D_001e2d10");
extern u32 LAB_001e2d28 asm("D_001e2d28");
extern u32 LAB_001e2d90 asm("D_001e2d90");
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x001e2c90, wrapped mechanically (ad/fallback.py)

void FUN_001e2c90_impl(int param_1,int param_2,short param_3,short param_4) asm("func_001e2c90");
void FUN_001e2c90_impl(int param_1,int param_2,short param_3,short param_4) {
  bool bVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar9 = (int)param_3;
  iVar8 = (int)param_4;
  iVar10 = 0;
  iVar11 = 0;
  bVar1 = *(short *)(param_2 + 2) == 0;
  param_1 = param_1 + *(int *)(param_1 + 4);
  if (bVar1) {
    *(undefined2 *)(param_2 + 2) = 0x2c00;
    *(undefined2 *)(param_2 + 4) = 0x3d80;
  }
  if (iVar9 == 0) {
    if (iVar8 == 0) {
      if (!bVar1) {
        return;
      }
      goto LAB_001e2d10;
    }
    uVar3 = *(ushort *)(param_2 + 4);
  }
  else {
    iVar10 = (int)((iVar9 - (uint)*(ushort *)(param_2 + 2)) * 0x10000) >> 0x10;
LAB_001e2d10:
    if (iVar8 == 0) goto LAB_001e2d28;
    uVar3 = *(ushort *)(param_2 + 4);
  }
  iVar11 = (int)((iVar8 - (uint)uVar3) * 0x10000) >> 0x10;
LAB_001e2d28:
  if (iVar10 == 0) {
    if (iVar11 == 0) {
      if (!bVar1) {
        return;
      }
      cVar2 = *(char *)(param_1 + 1);
    }
    else {
      cVar2 = *(char *)(param_1 + 1);
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 1);
  }
  do {
    if (cVar2 == -1) {
      return;
    }
    bVar4 = true;
    iVar7 = 0;
    switch(cVar2) {
    case '\0':
      iVar7 = 0x14;
      goto LAB_001e2d90;
    case '\x01':
      iVar7 = 0x1c;
      goto LAB_001e2d90;
    case '\x02':
      iVar7 = 0x20;
      break;
    case '\x03':
    case '\x06':
      iVar7 = 0x28;
      break;
    case '\x04':
      iVar7 = 0x18;
      goto LAB_001e2d90;
    case '\x05':
      iVar7 = 0x20;
LAB_001e2d90:
      bVar4 = false;
      break;
    case '\a':
      iVar7 = 0x30;
      break;
    default:
      FUN_001e2ad8(0x36ea98,0x36e9d0,0x1d0,0x36eaa0);
    }
    if (bVar4) {
      if (bVar1) {
        uVar5 = (uint)(short)(*(ushort *)(param_1 + 8) & 0x3fff);
        if (uVar5 < 0x3000) {
          iVar6 = uVar5 - 0x200;
        }
        else {
          iVar6 = uVar5 - 0x400;
        }
        *(uint *)(param_1 + 8) = (*(uint *)(param_1 + 8) & 0xffffc000) + iVar6;
        uVar5 = *(uint *)(param_1 + 0xc) >> 5 & 0x3fff;
        if (uVar5 < 0x3e00) {
          iVar6 = uVar5 + 0xf00;
        }
        else {
          iVar6 = uVar5 - 0x80;
        }
        *(uint *)(param_1 + 0xc) = (*(uint *)(param_1 + 0xc) & 0xfff8001f) + iVar6 * 0x20;
      }
      if (((iVar9 != 0) && (iVar10 != 0)) &&
         (uVar5 = (uint)(short)(*(ushort *)(param_1 + 8) & 0x3fff), iVar6 = uVar5 + iVar10,
         0x2bff < uVar5)) {
        if (iVar6 < 0x2c00) {
          FUN_002fdfc8(0x36e978,0x36e9e0);
          FUN_002fdfc8(0x36e998,0x36e9d0,0x1ef);
          trap(0);
        }
        if (iVar6 < 0x3d00) {
          uVar5 = *(uint *)(param_1 + 8);
        }
        else {
          FUN_002fdfc8(0x36e978,0x36ea10);
          FUN_002fdfc8(0x36e998,0x36e9d0,0x1f0);
          trap(0);
          uVar5 = *(uint *)(param_1 + 8);
        }
        *(uint *)(param_1 + 8) = (uVar5 & 0xffffc000) + iVar6;
      }
      if (iVar8 == 0) {
        iVar6 = (int)*(short *)(param_1 + 2);
      }
      else if (iVar11 == 0) {
        iVar6 = (int)*(short *)(param_1 + 2);
      }
      else {
        uVar5 = *(uint *)(param_1 + 0xc) >> 5 & 0x3fff;
        if (uVar5 < 0x3d80) {
          iVar6 = (int)*(short *)(param_1 + 2);
        }
        else {
          iVar6 = uVar5 + iVar11;
          if (iVar6 < 0x3d80) {
            FUN_002fdfc8(0x36e978,0x36ea40);
            FUN_002fdfc8(0x36e998,0x36e9d0,0x1fa);
            trap(0);
          }
          if (iVar6 < 0x4000) {
            uVar5 = *(uint *)(param_1 + 0xc);
          }
          else {
            FUN_002fdfc8(0x36e978,0x36ea70);
            FUN_002fdfc8(0x36e998,0x36e9d0,0x1fb);
            trap(0);
            uVar5 = *(uint *)(param_1 + 0xc);
          }
          *(uint *)(param_1 + 0xc) = (uVar5 & 0xfff8001f) + iVar6 * 0x20;
          iVar6 = (int)*(short *)(param_1 + 2);
        }
      }
    }
    else {
      iVar6 = (int)*(short *)(param_1 + 2);
    }
    iVar7 = param_1 + iVar7 * iVar6;
    param_1 = iVar7 + 0x10;
    cVar2 = *(char *)(iVar7 + 0x11);
  } while( true );
}

