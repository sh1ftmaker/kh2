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
s32 FUN_00139570(...) asm("func_00139570");
s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_001a6d08(...) asm("func_001a6d08");
s32 FUN_002369a0(...) asm("func_002369a0");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_0023c008(...) asm("func_0023c008");
s32 FUN_0023ee30(...) asm("func_0023ee30");
s32 FUN_0023ef50(...) asm("func_0023ef50");
s32 FUN_002431d0(...) asm("func_002431d0");
s32 FUN_0024b588(...) asm("_ZN2Tz4HBTE5SetupEv");
s32 FUN_0024bbb0(...) asm("func_0024bbb0");
s32 FUN_0024c650(...) asm("func_0024c650");
s32 FUN_00287bd0(...) asm("func_00287bd0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288750(...) asm("func_00288750");
s32 FUN_002887c8(...) asm("func_002887c8");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_002892f8(...) asm("func_002892f8");
s32 FUN_0028d7f0(...) asm("func_0028d7f0");
s32 FUN_0028dd90(...) asm("func_0028dd90");
s32 FUN_0028ddd8(...) asm("func_0028ddd8");
s32 FUN_002b4070(...) asm("func_002b4070");
s32 FUN_0031a838(...) asm("func_0031a838");
extern undefined DAT_0035eda8 asm("D_0035eda8");
extern undefined DAT_0035edb0 asm("D_0035edb0");
extern undefined DAT_0035edb4 asm("D_0035edb4");
extern undefined DAT_0035edb8 asm("D_0035edb8");
extern undefined DAT_0035edc0 asm("D_0035edc0");
extern undefined DAT_0035edc4 asm("D_0035edc4");
extern undefined DAT_0035edc5 asm("D_0035edc5");
extern undefined DAT_00371ff4 asm("D_00371ff4");
extern undefined DAT_00372041 asm("D_00372041");
extern undefined *PTR_LAB_00347f98 asm("D_00347f98");
extern undefined *PTR_LAB_0035eb98 asm("D_0035eb98");

// Ghidra decompile of 0x0024b588, wrapped mechanically (ad/fallback.py)

void FUN_0024b588_impl(void) asm("_ZN2Tz4HBTE5SetupEv");
void FUN_0024b588_impl(void) {
  char cVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar7;
  
  uVar13 = 0;
  iVar14 = 0x372030;
  DAT_0035edc4 = 0;
  iVar16 = 0;
  uVar17 = 0;
  uVar7 = FUN_0023ee30(0xa0);
  puVar5 = (undefined4 *)uVar7;
  *puVar5 = &PTR_LAB_00347f98;
  FUN_0031a838(puVar5 + 3);
  *puVar5 = &PTR_LAB_0035eb98;
  FUN_002369a0(puVar5 + 6);
  FUN_0023c008(puVar5 + 0xc);
  DAT_0035edb0 = puVar5;
  FUN_0028d7f0(uVar7,0x7532,0,0,0x1e,0x20,0,0);
  FUN_0023ef50(DAT_0035edb0);
  pbVar15 = &DAT_00372041;
  do {
    uVar7 = 0;
    bVar4 = true;
    iVar10 = 0;
    pcVar9 = (char *)(iVar14 + 0x1c);
    cVar1 = *pcVar9;
    while (pcVar9 = pcVar9 + 1, -1 < cVar1) {
      lVar3 = FUN_001a6d08(cVar1);
      if (lVar3 == 0) {
        bVar4 = false;
        break;
      }
      iVar10 = iVar10 + 1;
      if (3 < iVar10) break;
      cVar1 = *pcVar9;
    }
    if (bVar4) {
      lVar3 = FUN_002431d0(7,uVar13);
      if (lVar3 == 0) {
        DAT_0035edc5 = DAT_0035edc5 | (byte)(1 << (uVar13 & 0x1f));
      }
      if (*(char *)(iVar16 + 0x372040) != '\0') {
        uVar17 = uVar13;
      }
      FUN_00288d80(DAT_0035eda8,uVar13,0,0,DAT_0035edb0,*(undefined2 *)(iVar16 + 0x372042),
                   iVar16 + 0x372030,iVar16 + 0x372038);
      uVar7 = FUN_002891b8(DAT_0035eda8,uVar13);
      iVar10 = (int)uVar7;
      uVar8 = FUN_0023aa98(iVar10 + 0x18);
      uVar6 = FUN_0028dd90(uVar8);
      *(undefined4 *)(iVar10 + 0x1b0) = uVar6;
      uVar6 = FUN_0028ddd8(uVar8);
      *(undefined4 *)(iVar10 + 0x1ac) = uVar6;
      FUN_001395f8(uVar7);
      bVar2 = *pbVar15;
    }
    else {
      bVar2 = *pbVar15;
    }
    if (((bVar2 ^ 1) & 1) != 0) {
      FUN_00139570(uVar7);
    }
    uVar13 = uVar13 + 1;
    pbVar15 = pbVar15 + 0x24;
    iVar16 = iVar16 + 0x24;
    iVar14 = iVar14 + 0x24;
    if (2 < (int)uVar13) {
      iVar14 = FUN_002892f8(DAT_0035eda8);
      iVar16 = FUN_002891b8(DAT_0035eda8,0);
      iVar16 = FUN_0023aa78(iVar16 + 0x18);
      if (0 < iVar14) {
        iVar10 = -((iVar16 * iVar14) / 2);
        iVar11 = 0;
        do {
          iVar12 = iVar11 + 1;
          uVar7 = FUN_002891b8(DAT_0035eda8,iVar11);
          FUN_00138c68(uVar7,0,iVar10);
          iVar10 = iVar10 + iVar16;
          iVar11 = iVar12;
        } while (iVar12 < iVar14);
      }
      FUN_002891f0(DAT_0035eda8,uVar17,0,0xffffffffffffffff,0xffffffffffffffff);
      FUN_0024c650();
      uVar7 = FUN_002891e8(DAT_0035eda8);
      FUN_002891b8(DAT_0035eda8,uVar7);
      FUN_002891f0(DAT_0035eda8,uVar7,1,0,2);
      FUN_002b4070(DAT_0035edc0,0x7533,DAT_0035edb0,0x371fe8,0x372008,0x372010,0x372018,0x372020);
      uVar8 = FUN_0023ee30(0xa0);
      puVar5 = (undefined4 *)uVar8;
      *puVar5 = &PTR_LAB_00347f98;
      FUN_0031a838(puVar5 + 3);
      *puVar5 = &PTR_LAB_0035eb98;
      FUN_002369a0(puVar5 + 6);
      FUN_0023c008(puVar5 + 0xc);
      iVar14 = (int)uVar7 * 6;
      DAT_0035edb8 = puVar5;
      FUN_0028d7f0(uVar8,0x7532,0,0,*(undefined2 *)(iVar14 + 0x371ff0),
                   *(undefined2 *)(&DAT_00371ff4 + iVar14),0,0);
      FUN_0023ef50(DAT_0035edb8);
      uVar7 = FUN_0023ee30(0xa0);
      puVar5 = (undefined4 *)uVar7;
      *puVar5 = &PTR_LAB_00347f98;
      FUN_0031a838(puVar5 + 3);
      *puVar5 = &PTR_LAB_0035eb98;
      FUN_002369a0(puVar5 + 6);
      FUN_0023c008(puVar5 + 0xc);
      DAT_0035edb4 = puVar5;
      FUN_0028d7f0(uVar7,0x7543,0,0,0x21,0x23,0,0);
      FUN_0023ef50(DAT_0035edb4);
      FUN_00287bd0(0,0);
      FUN_00287cc0(0);
      lVar3 = FUN_002887c8();
      if (lVar3 == 0) {
        return;
      }
      FUN_0024bbb0();
      DAT_0035edc4 = 1;
      FUN_00288750(0x24bd80);
      return;
    }
  } while( true );
}

