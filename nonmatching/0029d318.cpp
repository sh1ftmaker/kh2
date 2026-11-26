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

s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_0016e920(...) asm("func_0016e920");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_00192b80(...) asm("func_00192b80");
s32 FUN_00192cc0(...) asm("func_00192cc0");
s32 FUN_00192e50(...) asm("func_00192e50");
s32 FUN_001b8e88(...) asm("func_001b8e88");
s32 FUN_001b90a8(...) asm("func_001b90a8");
s32 FUN_001d23e0(...) asm("func_001d23e0");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023aa58(...) asm("func_0023aa58");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_002595e8(...) asm("func_002595e8");
s32 FUN_00276348(...) asm("func_00276348");
s32 FUN_00276638(...) asm("func_00276638");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00276c18(...) asm("func_00276c18");
s32 FUN_00276c38(...) asm("func_00276c38");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028afd0(...) asm("func_0028afd0");
s32 FUN_0028b218(...) asm("func_0028b218");
s32 FUN_0028b248(...) asm("func_0028b248");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028d980(...) asm("func_0028d980");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028de08(...) asm("func_0028de08");
s32 FUN_00294368(...) asm("func_00294368");
s32 FUN_00295430(...) asm("func_00295430");
s32 FUN_0029d318(...) asm("_ZN2Tz5JmDic15CreateCharaInfoEv");
s32 FUN_0029da68(...) asm("func_0029da68");
s32 FUN_002fde18(...) asm("func_002fde18");
extern u32 DAT_0035f148 asm("D_0035f148");
extern u32 DAT_0035f14c asm("D_0035f14c");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_0035f5ac asm("D_0035f5ac");
extern u32 DAT_0035f5b0 asm("D_0035f5b0");
extern u32 DAT_00374ae0 asm("D_00374ae0");

// Ghidra decompile of 0x0029d318, wrapped mechanically (ad/fallback.py)

void FUN_0029d318_impl(void) asm("_ZN2Tz5JmDic15CreateCharaInfoEv");
void FUN_0029d318_impl(void) {
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short *psVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar3 = FUN_002766d0();
  iVar4 = FUN_00276638(0xf);
  uVar11 = FUN_0029da68(*(undefined2 *)(iVar4 * 2 + DAT_0035f5ac + 8));
  iVar4 = DAT_0035f3d4;
  uVar5 = FUN_00276348();
  iVar6 = FUN_00287bc0();
  iVar16 = DAT_0035f5b0;
  iVar19 = (int)uVar11;
  uVar1 = *(undefined2 *)(iVar19 + 6);
  FUN_0028d980(DAT_0035f5b0,iVar4,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x4c,0xffffffffffffffff,
               0xffffffffffffffff);
  FUN_00139620(iVar16);
  FUN_0028dcc0(iVar16,uVar5);
  *(undefined4 *)(iVar16 + 0x1ac) = 3;
  *(undefined4 *)(iVar16 + 0x1a4) = 0x60000008;
  if ((*(ushort *)(iVar19 + 0x10) & 0x400) == 0) {
    uVar12 = FUN_00192048(uVar1);
    FUN_002595e8(DAT_0035f5ac + 0x108,uVar12);
  }
  else {
    uVar12 = FUN_00192048(uVar1);
    uVar13 = FUN_00295430(*(undefined1 *)(DAT_0035f5ac + 4),1);
    uVar13 = FUN_00192048(uVar13);
    FUN_00192e50(uVar12,DAT_0035f5ac + 0x108,0x40,uVar13);
  }
  *(int *)(iVar16 + 0x198) = DAT_0035f5ac + 0x108;
  iVar16 = DAT_0035f5b0;
  if (*(short *)(iVar19 + 10) != 0) {
    iVar17 = DAT_0035f5b0 + 0x1b4;
    FUN_0028d980(iVar17,iVar4,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x4d,0xffffffffffffffff,
                 *(short *)(iVar19 + 10));
    FUN_00139620(iVar17);
    FUN_0028dcc0(iVar17,uVar5);
    *(undefined4 *)(iVar16 + 0x360) = 3;
    *(undefined4 *)(iVar16 + 0x358) = 0x60000008;
  }
  iVar16 = DAT_0035f5b0;
  if ((*(ushort *)(iVar19 + 0x10) & 0x800) != 0) {
    iVar18 = DAT_0035f5b0 + 0x368;
    iVar17 = DAT_0035f5b0 + 0x380;
    FUN_0028d980(iVar18,iVar4,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x4e,0xffffffffffffffff,
                 0xffffffffffffffff);
    uVar7 = FUN_00192048(0x489b);
    *(undefined4 *)(iVar16 + 0x500) = uVar7;
    uVar7 = FUN_0023aa18(iVar17);
    uVar12 = FUN_0023aa38(iVar17);
    uVar8 = FUN_0023aa58(iVar17);
    FUN_0028dcc0(iVar18,uVar5);
    FUN_00139620(iVar18);
    FUN_001395f8(iVar18);
    iVar16 = DAT_0035f5b0;
    iVar17 = DAT_0035f5b0 + 0x51c;
    uVar13 = FUN_00276c38(2);
    FUN_0028d980(iVar17,iVar4 + 1,DAT_0035f14c,DAT_0035f148,DAT_0035f210,uVar13,0xffffffffffffffff,
                 0xffffffffffffffff);
    uVar11 = FUN_00294368(uVar11);
    uVar9 = FUN_00192cc0(DAT_0035f5b0 + 0x1b0a,0x3749e8,uVar11);
    *(undefined4 *)(iVar16 + 0x6b4) = uVar9;
    FUN_00139620(iVar17);
    FUN_0028dcc0(iVar17,DAT_0035f5b0 + 0x368);
    FUN_001395f8(iVar17);
    FUN_00138c68(iVar17,uVar7,uVar12);
    *(undefined4 *)(iVar16 + 0x6c4) = uVar8;
    *(undefined4 *)(iVar16 + 0x6cc) = 1;
  }
  iVar16 = DAT_0035f5b0 + 0x17d8;
  FUN_0028d8c0(iVar16,iVar4,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x51,0xffffffffffffffff,0);
  iVar17 = iVar3 + 0x18;
  FUN_0028dcc0(iVar16,uVar5);
  iVar16 = DAT_0035f5b0 + 0x1970;
  FUN_0028d8c0(iVar16,iVar4,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x52,0xffffffffffffffff,0);
  FUN_0028dcc0(iVar16,uVar5);
  iVar16 = iVar3 + 0x330;
  FUN_0028d8c0(iVar16,iVar4,DAT_0035f14c,DAT_0035f148,DAT_0035f210,
               *(undefined2 *)(&DAT_00374ae0 + *(char *)(iVar19 + 2) * 2),0xffffffffffffffff,0);
  FUN_0028dcc0(iVar16,iVar3);
  uVar7 = FUN_0023aa18(iVar17);
  uVar11 = FUN_0023aa38(iVar17);
  FUN_00138c68(iVar16,uVar7,uVar11);
  iVar4 = DAT_0035f5b0;
  uVar2 = FUN_0023aa78(iVar17);
  *(undefined1 *)(iVar4 + 0x1b3b) = uVar2;
  *(undefined2 *)(DAT_0035f5b0 + 0x1b08) = *(undefined2 *)(iVar19 + 8);
  iVar4 = DAT_0035f5b0;
  uVar11 = FUN_00192048(*(undefined2 *)(iVar19 + 8));
  uVar2 = FUN_00192b80(uVar11);
  *(undefined1 *)(iVar4 + 0x1b3a) = uVar2;
  iVar4 = 1;
  if ('\a' < *(char *)(DAT_0035f5b0 + 0x1b3a)) {
    iVar4 = *(char *)(DAT_0035f5b0 + 0x1b3a) + -6;
  }
  FUN_0028af90(DAT_0035f200,iVar4);
  FUN_002891f0(DAT_0035f200,0,0,0xffffffffffffffff,0xffffffffffffffff);
  FUN_0028afd0(DAT_0035f200,0);
  if (1 < iVar4) {
    FUN_0028b218(DAT_0035f200,1);
    FUN_0028b248(DAT_0035f200,7);
  }
  FUN_002fde18(iVar3 + 0x110a0,0,0x280);
  if ((iVar6 == 0x13) || (iVar6 == 0x16)) {
    iVar4 = FUN_0016e920(*(undefined2 *)(iVar19 + 0xc));
    lVar14 = FUN_001d23e0(*(undefined2 *)(iVar4 + 0x4c));
    if (lVar14 != 0) {
      psVar10 = (short *)lVar14;
      iVar16 = 0;
      iVar4 = 4;
      do {
        psVar10 = psVar10 + 1;
        if (*psVar10 != 0) {
          lVar14 = FUN_001b8e88();
          lVar15 = FUN_001b90a8(lVar14);
          if ((lVar15 != 0) || (lVar15 = FUN_00276c18(), lVar15 != 0)) {
            lVar15 = 0;
            if ((lVar14 != 0) && (lVar15 = FUN_001b90a8(lVar14), 999 < lVar15)) {
              lVar15 = 999;
            }
            iVar6 = DAT_0035f5b0 + iVar16 * 0x1b4;
            iVar19 = iVar6 + 0x6d0;
            FUN_0028d980(iVar19,0x7564,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x4f,
                         0xffffffffffffffff,0xffffffffffffffff);
            uVar7 = *(undefined4 *)((int)lVar14 + 8);
            if (lVar15 == 0) {
              uVar7 = FUN_0028de08(uVar7,iVar3 + 0x110a0,0x40);
            }
            else {
              uVar7 = FUN_00192048(uVar7);
            }
            iVar17 = iVar6 + 0x6e8;
            *(undefined4 *)(iVar6 + 0x868) = uVar7;
            iVar3 = iVar3 + 0x40;
            uVar7 = FUN_0023aa18(iVar17);
            uVar11 = FUN_0023aa38(iVar17);
            iVar6 = FUN_0023aa78(iVar17);
            uVar8 = FUN_0023aa58(iVar17);
            FUN_00138c68(iVar19,0,iVar6 * iVar16);
            iVar6 = iVar16 * 0x1b4;
            FUN_0028dcc0(iVar19,uVar5);
            FUN_00139620(iVar19);
            FUN_001395f8(iVar19);
            iVar19 = DAT_0035f5b0 + iVar6;
            iVar18 = iVar19 + 0xf54;
            uVar12 = FUN_00276c38(2);
            FUN_0028d980(iVar18,0x7565,DAT_0035f14c,DAT_0035f148,DAT_0035f210,uVar12,
                         0xffffffffffffffff,0xffffffffffffffff);
            iVar17 = iVar16 * 8;
            iVar16 = iVar16 + 1;
            uVar9 = FUN_00192cc0(DAT_0035f5b0 + iVar17 + 0x1b12,0x3749e8,lVar15);
            *(undefined4 *)(iVar19 + 0x10ec) = uVar9;
            FUN_00139620(iVar18);
            FUN_0028dcc0(iVar18,DAT_0035f5b0 + iVar6 + 0x6d0);
            FUN_001395f8(iVar18);
            FUN_00138c68(iVar18,uVar7,uVar11);
            *(undefined4 *)(iVar19 + 0x10fc) = uVar8;
            *(undefined4 *)(iVar19 + 0x1104) = 1;
          }
        }
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  return;
}

