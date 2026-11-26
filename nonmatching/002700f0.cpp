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

s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00236ca8(...) asm("func_00236ca8");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023c4b8(...) asm("func_0023c4b8");
s32 FUN_0023f1b0(...) asm("func_0023f1b0");
s32 FUN_00256cc0(...) asm("func_00256cc0");
s32 FUN_002570a0(...) asm("func_002570a0");
s32 FUN_002570f0(...) asm("func_002570f0");
s32 FUN_00257140(...) asm("func_00257140");
s32 FUN_00257158(...) asm("func_00257158");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_002700f0(...) asm("_ZN2Tz8CmCustom11SetupCustomEv");
s32 FUN_00270648(...) asm("func_00270648");
s32 FUN_002725d8(...) asm("func_002725d8");
s32 FUN_00272b60(...) asm("func_00272b60");
s32 FUN_00273078(...) asm("func_00273078");
s32 FUN_00281f18(...) asm("func_00281f18");
s32 FUN_00282240(...) asm("func_00282240");
s32 FUN_00282620(...) asm("func_00282620");
s32 FUN_00282940(...) asm("func_00282940");
s32 FUN_00282cb8(...) asm("func_00282cb8");
s32 FUN_00282d70(...) asm("func_00282d70");
s32 FUN_00283ab8(...) asm("func_00283ab8");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_00288e08(...) asm("func_00288e08");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028af88(...) asm("func_0028af88");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028b218(...) asm("func_0028b218");
s32 FUN_0028b248(...) asm("func_0028b248");
s32 FUN_0028bae0(...) asm("func_0028bae0");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028d980(...) asm("func_0028d980");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028f4d8(...) asm("func_0028f4d8");
extern u32 DAT_0035ef64 asm("D_0035ef64");
extern u32 DAT_0035ef68 asm("D_0035ef68");
extern u32 DAT_0035f014 asm("D_0035f014");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f03c asm("D_0035f03c");
extern u32 DAT_0035f04c asm("D_0035f04c");
extern u32 DAT_0035f128 asm("D_0035f128");
extern u32 DAT_0035f12c asm("D_0035f12c");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_01e21ec0 asm("D_01e21ec0");
extern undefined *PTR_DAT_00373a34 asm("D_00373a34");
extern undefined *PTR_DAT_00373a50 asm("D_00373a50");
extern undefined *PTR_DAT_00373a60 asm("D_00373a60");

// Ghidra decompile of 0x002700f0, wrapped mechanically (ad/fallback.py)

void FUN_002700f0_impl(void) asm("_ZN2Tz8CmCustom11SetupCustomEv");
void FUN_002700f0_impl(void) {
  undefined2 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iStack_68;
  
  iVar18 = 0;
  uVar10 = FUN_00257770();
  iVar17 = (int)uVar10;
  DAT_0035f128 = 0;
  iVar7 = FUN_00287bc0();
  iVar8 = FUN_002570a0(0x1a);
  iVar9 = FUN_00272b60(iVar8);
  uVar1 = *(undefined2 *)((int)&PTR_DAT_00373a60 + iVar9 * 2);
  iVar13 = 0;
  do {
    iVar12 = 3;
    puVar14 = (undefined2 *)(&DAT_01e21ec0 + iVar13);
    do {
      *puVar14 = uVar1;
      iVar12 = iVar12 + -1;
      puVar14 = puVar14 + 1;
    } while (-1 < iVar12);
    iVar18 = iVar18 + 1;
    iVar13 = iVar18 * 8;
  } while (iVar18 < 2);
  if (iVar9 == 0) {
    FUN_00282240(DAT_0035f014,0,10);
    FUN_00282620(DAT_0035f014);
    FUN_00282cb8(DAT_0035f014,0xffffffffffffffff);
    FUN_00282d70(DAT_0035f014);
    iVar13 = FUN_00281f18(DAT_0035f014);
    iStack_68 = iVar13 + 1;
    FUN_00282940(DAT_0035f014,0,iVar13);
  }
  else {
    iStack_68 = 2;
    if (iVar9 != 1) {
      if (iVar9 == 2) {
        lVar5 = FUN_002570a0(0x19);
        if (lVar5 != 0) {
          iStack_68 = 4;
        }
      }
      else {
        iStack_68 = 6;
        if (iVar9 != 3) {
          iStack_68 = 3;
        }
      }
    }
  }
  FUN_0028f4d8(2,0xffffffffffffffff,0);
  iVar13 = DAT_0035f3d4;
  iVar16 = iVar17 + 0x660;
  iVar15 = iVar17 + 0x5ef0;
  iVar19 = 0;
  iVar12 = DAT_0035f3d4 + 1;
  FUN_0028d8c0(uVar10,DAT_0035f3d4,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
               *(undefined2 *)(iVar9 * 6 + 0x373a30),
               *(undefined2 *)((int)&PTR_DAT_00373a34 + iVar9 * 6),0);
  FUN_0028d980(iVar16,iVar12,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
               *(undefined2 *)((int)&PTR_DAT_00373a50 + iVar9 * 2),0xffffffffffffffff,
               0xffffffffffffffff);
  bVar2 = iStack_68 < 9;
  FUN_00139620(iVar16);
  FUN_0028dcc0(iVar16,uVar10);
  iVar18 = 8;
  if (bVar2) {
    iVar18 = iStack_68;
  }
  uVar3 = FUN_00257158(*(undefined2 *)(iVar8 * 8 + DAT_0035f12c + 8),1,iVar9 == 1);
  uVar3 = FUN_00257140(uVar3);
  FUN_0028d980(iVar15,iVar13 + 2,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,uVar3,0xffffffffffffffff,
               0xffffffffffffffff);
  *(int *)(iVar17 + 0x6088) = iVar17 + iVar8 * 0x20 + 0xae10;
  FUN_0028dcc0(iVar15,iVar16);
  FUN_00139620(iVar15);
  FUN_001395f8(iVar15);
  uVar3 = FUN_00257140(0);
  if (0 < iVar18) {
    iVar17 = iVar17 + 0x60a4;
    do {
      FUN_00288d80(DAT_0035f01c,iVar19,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0xffffffffffffffff,
                   0x1e21ec0,0x1e21ec8);
      uVar11 = FUN_002891b8(DAT_0035f01c,iVar19);
      uVar4 = FUN_0023aa78((int)uVar11 + 0x18);
      FUN_00288e08(DAT_0035f01c,iVar19,0,uVar4);
      FUN_00139620(uVar11);
      if ((iVar7 == 0x1f) && (lVar5 = FUN_002570a0(0x19), lVar5 != 0)) {
        iVar8 = FUN_002891b8(DAT_0035f01c,iVar19);
        *(code **)(iVar8 + 0x1b4) = FUN_00273078;
      }
      FUN_0028dcc0(uVar11,uVar10);
      iVar19 = iVar19 + 1;
      FUN_0028d980(iVar17,iVar13 + 2,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,uVar3,0xffffffffffffffff
                   ,0xffffffffffffffff);
      FUN_0028dcc0(iVar17,uVar11);
      FUN_00139620(iVar17);
      FUN_001395f8(iVar17);
      iVar17 = iVar17 + 0x1b4;
    } while (iVar19 < iVar18);
  }
  iVar17 = 8;
  if (bVar2) {
    iVar17 = iStack_68;
  }
  uVar3 = FUN_0023f1b0(DAT_0035f03c);
  uVar3 = FUN_0023c4b8(uVar3,DAT_0035ef68);
  iVar7 = FUN_0023f1b0(DAT_0035f03c);
  uVar4 = FUN_00236ca8(*(undefined4 *)(iVar7 + 0x28),DAT_0035ef64);
  uVar11 = FUN_002570f0();
  FUN_0028bae0(DAT_0035f04c,iVar12,uVar3,uVar4,uVar11,iStack_68,iVar17,uVar10);
  FUN_0028b218(DAT_0035f01c,1);
  FUN_0028b248(DAT_0035f01c,iVar17);
  if (!bVar2) {
    FUN_0028af90(DAT_0035f01c,iStack_68);
  }
  FUN_00270648();
  if (((iVar9 == 2) && (lVar5 = FUN_00283ab8(0), lVar5 != 0)) ||
     ((iVar9 == 1 && (lVar5 = FUN_00283ab8(1), lVar5 != 0)))) {
    uVar6 = FUN_0028af88(DAT_0035f01c);
    FUN_0028af18(DAT_0035f01c,uVar6 | 0x400);
    FUN_00256cc0(0xcbdd,0xffffffffffffffff,0xffffffffffffffff);
  }
  FUN_00287cc0(0);
  FUN_002725d8();
  return;
}

