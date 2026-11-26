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
s32 FUN_001e5970(...) asm("func_001e5970");
s32 FUN_001e5a00(...) asm("func_001e5a00");
s32 FUN_002fdfc8(...) asm("func_002fdfc8");
extern u32 LAB_001e5ba0 asm("D_001e5ba0");
extern u32 LAB_001e5d70 asm("D_001e5d70");
extern u32 LAB_001e5d74 asm("D_001e5d74");
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x001e5a00, wrapped mechanically (ad/fallback.py)

long FUN_001e5a00_impl(int *param_1,int param_2,int param_3,uint param_4) asm("func_001e5a00");
long FUN_001e5a00_impl(int *param_1,int param_2,int param_3,uint param_4) {
  char cVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char acStack_c0 [48];
  int *piStack_90;
  uint uStack_8c;
  undefined1 *puStack_88;
  int iStack_84;
  uint uStack_80;
  
  puStack_88 = (undefined1 *)&piStack_90;
  pcVar9 = acStack_c0;
  pcVar11 = acStack_c0;
  uStack_80 = (uint)*(byte *)(param_3 + 0x93);
  piStack_90 = param_1;
  iStack_84 = *(int *)(param_3 + 0x88);
  uStack_8c = param_4 & 0xff;
  if (0x28 < param_2) {
    FUN_002fdfc8(0x36e978,0x36ee10);
    FUN_002fdfc8(0x36e998,0x36e9d0,0x6e5);
    trap(0);
  }
  if (iStack_84 == 0) {
    FUN_002fdfc8(0x36e978,0x36ee28);
    FUN_002fdfc8(0x36e998,0x36e9d0,0x6e6);
    trap(0);
  }
  if (0x3f < uStack_80) {
    FUN_002fdfc8(0x36e978,0x36ee38);
    FUN_002fdfc8(0x36e998,0x36e9d0,0x6e7);
    trap(0);
  }
  iVar12 = 0;
  if (0 < param_2) {
    piVar7 = piStack_90;
    do {
      if ((*(char *)((int)piVar7 + 0x12) != '\0') && (iStack_84 == *piVar7)) {
        if ((*(ulong *)(piVar7 + 2) >> (long)(int)uStack_80 & 1) == 0) {
          *(ulong *)(piVar7 + 2) = *(ulong *)(piVar7 + 2) | 1L << (long)(int)uStack_80;
          return (long)(char)piVar7[4];
        }
        goto LAB_001e5ba0;
      }
      iVar12 = iVar12 + 1;
      piVar7 = piVar7 + 6;
    } while (iVar12 < param_2);
  }
  iVar12 = 0;
  do {
    *pcVar9 = '\0';
    iVar8 = iVar12 + 1;
    pcVar9 = acStack_c0 + iVar12 + 1;
    iVar12 = iVar8;
  } while (iVar8 < 0x28);
  iVar12 = param_2;
  piVar7 = piStack_90;
  if (0 < param_2) {
    do {
      if ((*(char *)((int)piVar7 + 0x12) != '\0') &&
         (lVar4 = 0, '\0' < *(char *)((int)piVar7 + 0x11))) {
        cVar1 = (char)piVar7[4];
        while( true ) {
          iVar8 = (int)lVar4;
          if (0x27 < cVar1 + iVar8) {
            FUN_002fdfc8(0x36e978,0x36ee58);
            FUN_002fdfc8(0x36e998,0x36e9d0,0x703);
            trap(0);
            cVar1 = (char)piVar7[4];
          }
          acStack_c0[iVar8 + cVar1] = '\x01';
          lVar4 = (long)(iVar8 + 1);
          if (*(char *)((int)piVar7 + 0x11) <= lVar4) break;
          cVar1 = (char)piVar7[4];
        }
      }
      iVar12 = iVar12 + -1;
      piVar7 = piVar7 + 6;
    } while (iVar12 != 0);
  }
  uVar6 = 0;
  lVar4 = -1;
  iVar12 = 0;
  if (0 < param_2) {
    do {
      if (*pcVar11 == '\0') {
        uVar6 = uVar6 + 1;
        if (uVar6 == uStack_8c) {
          lVar4 = (long)(int)((iVar12 - uStack_8c) + 1);
          if (lVar4 < 0) {
            FUN_002fdfc8(0x36e978,0x36ee98);
            FUN_002fdfc8(0x36e998,0x36e9d0,0x714);
            trap(0);
          }
          break;
        }
      }
      else {
        uVar6 = 0;
      }
      iVar8 = iVar12 + 1;
      pcVar11 = acStack_c0 + iVar12 + 1;
      iVar12 = iVar8;
    } while (iVar8 < param_2);
  }
  if (0 < lVar4) {
    iVar12 = 0;
    if (0 < param_2) {
      pcVar9 = (char *)((int)piStack_90 + 0x12);
      piVar7 = piStack_90;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 0x18;
        if (cVar1 == '\0') {
          *(undefined1 *)((int)piVar7 + 0x12) = 1;
          *piVar7 = iStack_84;
          *(long *)(piVar7 + 2) = 1L << (long)(int)uStack_80;
          *(char *)(piVar7 + 4) = (char)lVar4;
          *(char *)((int)piVar7 + 0x11) = (char)uStack_8c;
          return lVar4;
        }
        iVar12 = iVar12 + 1;
        piVar7 = piVar7 + 6;
      } while (iVar12 < param_2);
    }
    FUN_001e2ad8(0x36ea98,0x36e9d0,0x72b,3600000);
  }
  uVar6 = uStack_8c;
  piVar3 = (int *)0x0;
  iVar12 = -1;
  iVar8 = 0;
  piVar7 = piStack_90;
  if (0 < param_2) {
    do {
      iVar10 = iVar12;
      piVar2 = piVar3;
      if (*(char *)((int)piVar7 + 0x12) == '\0') {
LAB_001e5d70:
        iVar12 = iVar10;
        piVar3 = piVar2;
      }
      else {
        cVar1 = *(char *)((int)piVar7 + 0x11);
        if ((long)(int)uStack_8c == (long)cVar1) {
          *piVar7 = iStack_84;
          *(long *)(piVar7 + 2) = 1L << (long)(int)uStack_80;
          return (long)(char)piVar7[4];
        }
        if ((long)(int)uStack_8c < (long)cVar1) {
          piVar2 = piVar7;
          if (piVar3 == (int *)0x0) {
            iVar10 = (int)cVar1 - uStack_8c;
          }
          else {
            iVar10 = (int)cVar1 - uStack_8c;
            if (iVar12 <= iVar10) goto LAB_001e5d74;
          }
          goto LAB_001e5d70;
        }
      }
LAB_001e5d74:
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 6;
    } while (iVar8 < param_2);
  }
  uVar5 = (undefined1)uStack_8c;
  if (piVar3 == (int *)0x0) {
    lVar4 = (long)(int)uStack_8c;
    iVar12 = param_2;
    piVar7 = piStack_90;
    if (0 < param_2) {
      do {
        if ((*(char *)((int)piVar7 + 0x12) != '\0') && ((char)piVar7[4] < lVar4)) {
          FUN_001e5970(piVar7);
        }
        iVar12 = iVar12 + -1;
        piVar7 = piVar7 + 6;
      } while (iVar12 != 0);
    }
    iVar12 = 0;
    if (0 < param_2) {
      pcVar9 = (char *)((int)piStack_90 + 0x12);
      piVar7 = piStack_90;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 0x18;
        if (cVar1 == '\0') {
          *(undefined1 *)((int)piVar7 + 0x12) = 1;
          *piVar7 = iStack_84;
          *(long *)(piVar7 + 2) = 1L << (long)(int)uStack_80;
          *(undefined1 *)(piVar7 + 4) = 0;
          *(undefined1 *)((int)piVar7 + 0x11) = uVar5;
          return 0;
        }
        iVar12 = iVar12 + 1;
        piVar7 = piVar7 + 6;
      } while (iVar12 < param_2);
    }
    uStack_8c = uVar6;
    FUN_002fdfc8(0x36e978,0x36ea98);
    FUN_002fdfc8(0x36e998,0x36e9d0,0x76f);
    trap(0);
LAB_001e5ba0:
    lVar4 = -1;
  }
  else {
    *piVar3 = iStack_84;
    *(undefined1 *)((int)piVar3 + 0x11) = uVar5;
    *(long *)(piVar3 + 2) = 1L << (long)(int)uStack_80;
    lVar4 = (long)(char)piVar3[4];
  }
  return lVar4;
}

