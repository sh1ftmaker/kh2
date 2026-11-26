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
s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_00138d60(...) asm("func_00138d60");
s32 FUN_00139548(...) asm("func_00139548");
s32 FUN_001395e8(...) asm("func_001395e8");
s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00139660(...) asm("func_00139660");
s32 FUN_00139688(...) asm("func_00139688");
s32 FUN_001396b0(...) asm("func_001396b0");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_002362b0(...) asm("func_002362b0");
s32 FUN_002367c8(...) asm("func_002367c8");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_0023c4b8(...) asm("func_0023c4b8");
s32 FUN_0023f1b0(...) asm("func_0023f1b0");
s32 FUN_002889f0(...) asm("func_002889f0");
s32 FUN_00288be8(...) asm("func_00288be8");
s32 FUN_00288ce0(...) asm("func_00288ce0");
s32 FUN_00288f48(...) asm("func_00288f48");
s32 FUN_002891d0(...) asm("func_002891d0");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028b078(...) asm("func_0028b078");
s32 FUN_0028b300(...) asm("func_0028b300");
s32 FUN_0028bae0(...) asm("func_0028bae0");
s32 FUN_0028c2c8(...) asm("func_0028c2c8");
s32 FUN_0028d068(...) asm("func_0028d068");
s32 FUN_0028d1c0(...) asm("func_0028d1c0");
s32 FUN_0028d660(...) asm("func_0028d660");
s32 FUN_002c2550(...) asm("func_002c2550");
s32 FUN_002c2598(...) asm("func_002c2598");
s32 FUN_002c2688(...) asm("func_002c2688");
s32 FUN_002c3268(...) asm("func_002c3268");
s32 FUN_002c4390(...) asm("func_002c4390");
s32 FUN_002c44b8(...) asm("_ZN2dk10WM_LANDING12createSelectEv");
s32 FUN_002f1898(...) asm("func_002f1898");
s32 FUN_0031a260(...) asm("func_0031a260");
s32 FUN_0031ac78(...) asm("func_0031ac78");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_00361c0c asm("D_00361c0c");
extern u32 DAT_0037558c asm("D_0037558c");
extern u32 DAT_00375590 asm("D_00375590");
extern u32 DAT_01e2bd10 asm("D_01e2bd10");
extern u32 LAB_002c4884 asm("D_002c4884");

// Ghidra decompile of 0x002c44b8, wrapped mechanically (ad/fallback.py)

void FUN_002c44b8_impl(undefined8 param_1) asm("_ZN2dk10WM_LANDING12createSelectEv");
void FUN_002c44b8_impl(undefined8 param_1) {
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iStack_70;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  
  DAT_0035f3d4 = 0x7544;
  iVar18 = 0;
  uVar3 = FUN_00288be8(0x38);
  iStack_64 = 0;
  FUN_002889f0(uVar3,8,1);
  iVar15 = (int)param_1;
  *(undefined4 *)(iVar15 + 0x368) = uVar3;
  uVar4 = FUN_002f1898();
  iVar14 = *(int *)(iVar15 + 0x2038);
  *(undefined4 *)(iVar15 + 0x203c) = 0;
  *(undefined4 *)(iVar15 + 0x2040) = 0;
  iVar13 = (*(int *)(iVar15 + 0x2e50) + 1) / 2;
  iStack_68 = *(int *)(iVar15 + 0x2e50) + -1;
  if (0 < iVar13) {
    do {
      iVar19 = 0;
      do {
        iVar12 = iVar15 + iVar18 * 0x1c0;
        if (((*(uint *)(iVar12 + 0x2200) & 2) != 0) && (iVar18 < iStack_68)) {
          iStack_68 = iVar18;
        }
        bVar1 = *(int *)(iVar12 + 0x2058) == 0;
        iStack_70 = iVar14 + -1;
        if (!bVar1) {
          iStack_70 = iVar18;
        }
        uVar9 = FUN_002c3268(param_1);
        FUN_0028b300(iVar15 + *(int *)(iVar15 + 0x203c) * 0x1b0 + 0x528,0x753a,1,1,iVar15 + 0x1c,
                     uVar9,0x3755a0,0x37);
        uVar2 = *(undefined4 *)(iVar15 + *(int *)(iVar15 + 0x203c) * 0x1b0 + 0x6b8);
        FUN_00139660();
        FUN_00139688(iVar15 + *(int *)(iVar15 + 0x203c) * 0x1b0 + 0x528);
        iVar16 = iVar15 + *(int *)(iVar15 + 0x203c) * 0x1b0 + 0x540;
        iVar12 = FUN_0023aa78(iVar16);
        iVar5 = FUN_0023aa98(iVar16);
        iVar6 = FUN_0023aa18(uVar2);
        iVar7 = FUN_0023aa38(uVar2);
        FUN_00138c68(iVar15 + *(int *)(iVar15 + 0x203c) * 0x1b0 + 0x528,iVar19 * iVar5 + iVar6,
                     iStack_64 * iVar12 + iVar7);
        *(int *)(iVar15 + 0x203c) = *(int *)(iVar15 + 0x203c) + 1;
        iVar12 = iVar15 + iVar18 * 0x1c0;
        if ((*(uint *)(iVar12 + 0x2200) & 1) != 0) {
          uVar9 = FUN_002c3268(param_1);
          FUN_0028b300(iVar15 + *(int *)(iVar15 + 0x2040) * 0x1b0 + 0x12a8,0x754e,1,1,iVar15 + 0x1c,
                       uVar9,0x3755a8,0x38);
          iVar5 = iVar15 + *(int *)(iVar15 + 0x2040) * 0x1b0;
          uVar2 = *(undefined4 *)(iVar5 + 0x6b8);
          FUN_00139660(iVar5 + 0x12a8);
          FUN_00139688(iVar15 + *(int *)(iVar15 + 0x2040) * 0x1b0 + 0x12a8);
          iVar6 = iVar15 + *(int *)(iVar15 + 0x2040) * 0x1b0 + 0x12c0;
          iVar5 = FUN_0023aa78(iVar6);
          iVar6 = FUN_0023aa98(iVar6);
          iVar7 = FUN_0023aa18(uVar2);
          iVar8 = FUN_0023aa38(uVar2);
          FUN_00138c68(iVar15 + *(int *)(iVar15 + 0x2040) * 0x1b0 + 0x12a8,iVar19 * iVar6 + iVar7,
                       iStack_64 * iVar5 + iVar8);
          *(int *)(iVar15 + 0x2040) = *(int *)(iVar15 + 0x2040) + 1;
        }
        iVar5 = iVar12 + 0x2060;
        FUN_002362b0(iVar5,*(undefined4 *)(iStack_70 * 0x1c0 + iVar15 + 0x2058));
        FUN_002367c8(iVar5);
        *(undefined1 *)(iVar12 + 0x21f0) = 1;
        uVar9 = FUN_0028c2c8(uVar4,iVar5,0xb,0xffffffffffffffff,0);
        iVar12 = (int)uVar9;
        *(int *)(iVar12 + 400) = iVar16;
        *(undefined4 *)(iVar12 + 0x188) = 0xb;
        FUN_001396b0(uVar9);
        if (*(int *)(iVar12 + 400) != 0) {
          *(undefined4 *)(iVar12 + 0x18c) = 0;
          FUN_001396b0(uVar9);
          if (*(int *)(iVar12 + 0x18c) != 0) {
            FUN_0031ac78(uVar9,0);
          }
        }
        FUN_00139660(uVar9);
        FUN_00139688(uVar9);
        FUN_00288ce0(uVar3,uVar9,iVar18,0x3755c0,0x3755c8);
        if (bVar1) {
          FUN_00139548(uVar9);
          iVar12 = *(int *)(iVar15 + 0x2e50);
        }
        else {
          iVar12 = *(int *)(iVar15 + 0x2e50);
        }
        iVar18 = iVar18 + 1;
        if (iVar18 == iVar12) goto LAB_002c4884;
        iVar19 = iVar19 + 1;
      } while (iVar19 < 2);
      iStack_64 = iStack_64 + 1;
    } while (iStack_64 < iVar13);
  }
LAB_002c4884:
  iStack_60 = iVar15 + 0x1c;
  iVar14 = iVar15 + 0x36c;
  FUN_002891f0(uVar3,iStack_68,1,0,2);
  iVar18 = iVar15 + 0x2e60;
  FUN_0028b078(uVar3,2,iVar13);
  FUN_0028af90(uVar3,*(undefined4 *)(iVar15 + 0x2e50));
  FUN_00288f48(uVar3,0x10,0x20,0x40,0x80);
  FUN_0028d068(0x7558,0xffffffffffffffff);
  FUN_0028d1c0(iVar14,0x7562,1,1,iStack_60,0x375598,0);
  uVar9 = FUN_002891d0(uVar3);
  FUN_0028d660(iVar14,uVar9);
  FUN_001396b0(iVar14);
  uVar9 = FUN_0023aa98(iVar15 + 0x540);
  FUN_00138c68(iVar14,uVar9,0);
  lVar10 = FUN_002c2550(*(undefined4 *)(iVar15 + 0x202c));
  *(int *)(iVar15 + 0x304c) = (int)lVar10;
  uVar3 = 3;
  if (lVar10 < 4) {
    uVar3 = (int)lVar10;
  }
  *(undefined4 *)(iVar15 + 0x3050) = uVar3;
  uVar9 = FUN_0023f1b0(iStack_60);
  uVar9 = FUN_0023c4b8(uVar9,1);
  uVar11 = FUN_00192048(0x4c16);
  FUN_00138d60(iVar18,0x7550,uVar9,*(undefined4 *)(iVar15 + 0x354c),0x5e,uVar11,0);
  FUN_001395e8(iVar18);
  FUN_001395f8(iVar18);
  *(undefined4 *)(iVar15 + 0x3010) = 2;
  FUN_00139620(iVar18);
  lVar10 = FUN_0023aa98(iVar15 + 0x2e78);
  uVar3 = 0xf;
  if (lVar10 != 0) {
    uVar3 = FUN_0023aa98(iVar15 + 0x2e78);
  }
  *(undefined4 *)(iVar15 + 0x3008) = uVar3;
  FUN_0028bae0(iVar15 + 0x3014,0x7552,uVar9,*(undefined4 *)(iVar15 + 0x354c),0x3755f0,
               *(undefined4 *)(iVar15 + 0x304c),*(undefined4 *)(iVar15 + 0x3050),iVar18);
  FUN_00138c10(iVar18,1);
  DAT_0035f3d4 = 0x7554;
  if (*(int *)(iVar15 + 0x3050) == 0) {
    return;
  }
  iVar14 = 0;
  uVar11 = FUN_00288be8(0x38);
  FUN_002889f0(uVar11,*(undefined4 *)(iVar15 + 0x3050),1);
  DAT_00361c0c = (undefined4)uVar11;
  *(undefined4 *)(iVar15 + 0x3048) = DAT_00361c0c;
  DAT_01e2bd10 = *(undefined4 *)(iVar15 + 0x202c);
  uVar3 = *(undefined4 *)(iVar15 + 0x3048);
  if (0 < *(int *)(iVar15 + 0x3050)) {
    piVar17 = (int *)(iVar15 + 0x3054);
    uVar4 = *(undefined4 *)(iVar15 + 0x354c);
    while( true ) {
      uVar11 = FUN_0028c2c8(uVar9,uVar4,0x34,0xffffffffffffffff,0);
      iVar13 = (int)uVar11;
      *piVar17 = iVar13;
      *(undefined4 *)(iVar13 + 0x188) = 0x34;
      *(int *)(iVar13 + 0x18c) = iVar18;
      FUN_001396b0(uVar11);
      if (*(int *)(iVar13 + 0x18c) != 0) {
        *(undefined4 *)(iVar13 + 400) = 0;
        FUN_001396b0(uVar11);
        if (*(int *)(iVar13 + 400) != 0) {
          FUN_0031a260(uVar11,0);
        }
      }
      FUN_00139660(uVar11);
      FUN_001395f8(uVar11);
      FUN_00139620(uVar11);
      iVar19 = FUN_0023aa98(iVar13 + 0x18);
      FUN_00138c68(uVar11,0,iVar14 * iVar19);
      uVar4 = FUN_002c2598(*(undefined4 *)(iVar15 + 0x202c),iVar14);
      *(undefined4 *)(iVar13 + 0x198) = uVar4;
      *(code **)(iVar13 + 0x1b4) = FUN_002c4390;
      FUN_00288ce0(uVar3,uVar11,iVar14,0x3755e0,0x3755e8);
      lVar10 = FUN_002c2688(*(undefined4 *)(iVar15 + 0x202c),iVar14);
      uVar4 = DAT_00375590;
      if (lVar10 != 0) {
        uVar4 = DAT_0037558c;
      }
      iVar19 = iVar15 + iVar14 * 0x198;
      iVar12 = iVar19 + 0x3060;
      FUN_001386e0(iVar12,0x7556,uVar9,*(undefined4 *)(iVar15 + 0x354c),uVar4,0);
      *(int *)(iVar19 + 0x31ec) = iVar13;
      FUN_001396b0(iVar12);
      if (*(int *)(iVar19 + 0x31ec) != 0) {
        *(undefined4 *)(iVar19 + 0x31f0) = 0;
        FUN_001396b0(iVar12);
        if (*(int *)(iVar19 + 0x31f0) != 0) {
          FUN_0031a260(iVar12,0);
        }
      }
      piVar17 = piVar17 + 1;
      iVar13 = iVar14 * 0x198;
      iVar14 = iVar14 + 1;
      FUN_001396b0(iVar15 + iVar13 + 0x3060);
      if (*(int *)(iVar15 + 0x3050) <= iVar14) break;
      uVar4 = *(undefined4 *)(iVar15 + 0x354c);
    }
  }
  FUN_002891f0(uVar3,0,1,0,2);
  iVar14 = *(int *)(iVar15 + 0x304c);
  if (3 < iVar14) {
    iVar14 = iVar14 + -2;
  }
  FUN_0028af90(uVar3,iVar14);
  FUN_00288f48(uVar3,0x10,0x20,0x40,0x80);
  return;
}

