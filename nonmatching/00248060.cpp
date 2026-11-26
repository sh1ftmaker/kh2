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
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_001a6d08(...) asm("func_001a6d08");
s32 FUN_002369a0(...) asm("func_002369a0");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_0023c008(...) asm("func_0023c008");
s32 FUN_0023d808(...) asm("func_0023d808");
s32 FUN_0023e690(...) asm("func_0023e690");
s32 FUN_0023e858(...) asm("func_0023e858");
s32 FUN_0023e8b8(...) asm("func_0023e8b8");
s32 FUN_0023e8d8(...) asm("func_0023e8d8");
s32 FUN_0023e9b0(...) asm("func_0023e9b0");
s32 FUN_0023ee30(...) asm("func_0023ee30");
s32 FUN_0023ef50(...) asm("func_0023ef50");
s32 FUN_002431d0(...) asm("func_002431d0");
s32 FUN_00248060(...) asm("_ZN2Tz4MUMI5SetupEv");
s32 FUN_00248720(...) asm("func_00248720");
s32 FUN_00249180(...) asm("func_00249180");
s32 FUN_00249480(...) asm("func_00249480");
s32 FUN_00287bd0(...) asm("func_00287bd0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00287dc0(...) asm("func_00287dc0");
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
extern undefined DAT_0035ed4c asm("D_0035ed4c");
extern undefined DAT_0035ed54 asm("D_0035ed54");
extern undefined DAT_0035ed58 asm("D_0035ed58");
extern undefined DAT_0035ed5c asm("D_0035ed5c");
extern undefined DAT_0035ed60 asm("D_0035ed60");
extern undefined DAT_0035ed68 asm("D_0035ed68");
extern undefined DAT_0035ed69 asm("D_0035ed69");
extern undefined DAT_00371ce4 asm("D_00371ce4");
extern undefined DAT_00371ce8 asm("D_00371ce8");
extern undefined DAT_00371cec asm("D_00371cec");
extern undefined DAT_00371d44 asm("D_00371d44");
extern undefined DAT_00371d80 asm("D_00371d80");
extern undefined DAT_00371d88 asm("D_00371d88");
extern undefined *PTR_LAB_00347f98 asm("D_00347f98");
extern undefined *PTR_LAB_0035eb98 asm("D_0035eb98");

// Ghidra decompile of 0x00248060, wrapped mechanically (ad/fallback.py)

void FUN_00248060_impl(void) asm("_ZN2Tz4MUMI5SetupEv");
void FUN_00248060_impl(void) {
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar7;
  char *pcVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar6;
  
  uVar13 = 0;
  iVar15 = 0;
  uVar16 = 0;
  DAT_0035ed68 = 0;
  uVar6 = FUN_0023ee30(0xa0);
  puVar4 = (undefined4 *)uVar6;
  *puVar4 = &PTR_LAB_00347f98;
  FUN_0031a838(puVar4 + 3);
  *puVar4 = &PTR_LAB_0035eb98;
  FUN_002369a0(puVar4 + 6);
  FUN_0023c008(puVar4 + 0xc);
  DAT_0035ed54 = puVar4;
  FUN_0028d7f0(uVar6,0x7532,0,0,0x1e,0x20,0,0);
  FUN_0023ef50(DAT_0035ed54);
  iVar17 = 0x371d90;
  do {
    bVar3 = true;
    iVar10 = 0;
    pcVar8 = (char *)(iVar17 + 0x1c);
    cVar1 = *pcVar8;
    while (pcVar8 = pcVar8 + 1, -1 < cVar1) {
      lVar2 = FUN_001a6d08(cVar1);
      if (lVar2 == 0) {
        bVar3 = false;
        break;
      }
      iVar10 = iVar10 + 1;
      if (3 < iVar10) break;
      cVar1 = *pcVar8;
    }
    if (bVar3) {
      lVar2 = FUN_002431d0(5,uVar13);
      puVar9 = (undefined *)(iVar15 + 0x371d90);
      if (lVar2 == 0) {
        DAT_0035ed69 = DAT_0035ed69 | (byte)(1 << (uVar13 & 0x1f));
      }
      puVar14 = (undefined *)(iVar15 + 0x371d98);
      if (*(char *)(iVar15 + 0x371da0) != '\0') {
        uVar16 = uVar13;
      }
      lVar2 = FUN_00249480(uVar13);
      if (lVar2 == 0) {
        puVar9 = &DAT_00371d80;
        puVar14 = &DAT_00371d88;
      }
      FUN_00288d80(DAT_0035ed4c,uVar13,0,0,DAT_0035ed54,*(undefined2 *)(iVar15 + 0x371da2),puVar9,
                   puVar14);
      uVar6 = FUN_002891b8(DAT_0035ed4c,uVar13);
      iVar10 = (int)uVar6;
      uVar7 = FUN_0023aa98(iVar10 + 0x18);
      uVar5 = FUN_0028dd90(uVar7);
      *(undefined4 *)(iVar10 + 0x1b0) = uVar5;
      uVar5 = FUN_0028ddd8(uVar7);
      *(undefined4 *)(iVar10 + 0x1ac) = uVar5;
      FUN_001395f8(uVar6);
    }
    uVar13 = uVar13 + 1;
    iVar15 = iVar15 + 0x24;
    iVar17 = iVar17 + 0x24;
    if (2 < (int)uVar13) {
      iVar17 = FUN_002892f8(DAT_0035ed4c);
      iVar15 = FUN_002891b8(DAT_0035ed4c,0);
      iVar15 = FUN_0023aa78(iVar15 + 0x18);
      if (0 < iVar17) {
        iVar10 = -((iVar15 * iVar17) / 2);
        iVar11 = 0;
        do {
          iVar12 = iVar11 + 1;
          uVar6 = FUN_002891b8(DAT_0035ed4c,iVar11);
          FUN_00138c68(uVar6,0,iVar10);
          iVar10 = iVar10 + iVar15;
          iVar11 = iVar12;
        } while (iVar12 < iVar17);
      }
      FUN_002891f0(DAT_0035ed4c,uVar16,0,0xffffffffffffffff,0xffffffffffffffff);
      FUN_00249180();
      uVar6 = FUN_002891e8(DAT_0035ed4c);
      FUN_002891f0(DAT_0035ed4c,uVar6,1,0,2);
      FUN_002b4070(DAT_0035ed60,0x7533,DAT_0035ed54,0x371d38,0x371d58,0x371d60,0x371d68,0x371d70);
      uVar7 = FUN_0023ee30(0xa0);
      puVar4 = (undefined4 *)uVar7;
      *puVar4 = &PTR_LAB_00347f98;
      FUN_0031a838(puVar4 + 3);
      *puVar4 = &PTR_LAB_0035eb98;
      FUN_002369a0(puVar4 + 6);
      FUN_0023c008(puVar4 + 0xc);
      iVar17 = (int)uVar6 * 6;
      DAT_0035ed5c = puVar4;
      FUN_0028d7f0(uVar7,0x7532,0,0,*(undefined2 *)(iVar17 + 0x371d40),
                   *(undefined2 *)(&DAT_00371d44 + iVar17),0,0);
      FUN_0023ef50(DAT_0035ed5c);
      uVar6 = FUN_0023ee30(0xa0);
      puVar4 = (undefined4 *)uVar6;
      *puVar4 = &PTR_LAB_00347f98;
      FUN_0031a838(puVar4 + 3);
      *puVar4 = &PTR_LAB_0035eb98;
      FUN_002369a0(puVar4 + 6);
      FUN_0023c008(puVar4 + 0xc);
      DAT_0035ed58 = puVar4;
      FUN_0028d7f0(uVar6,0x7543,0,0,0x21,0x23,0,0);
      FUN_0023ef50(DAT_0035ed58);
      uVar6 = FUN_00287dc0();
      FUN_0023d808(uVar6,0x7538);
      (**(code **)(*(int *)uVar6 + 0x18))(uVar6,0,0x2000043f,0x86,2,0xb8,0x1b9);
      FUN_0023e858(DAT_00371ce4,uVar6,0);
      FUN_0023e8b8(DAT_00371ce8,uVar6,0);
      FUN_0023e8d8(DAT_00371cec,uVar6,0);
      iVar17 = DAT_0035ed60;
      FUN_00139d78(*(undefined4 *)(DAT_0035ed60 + 8));
      FUN_0023e9b0(uVar6,0,*(undefined4 *)(iVar17 + 8));
      FUN_0023e690(uVar6,0,0x87,0x88);
      FUN_00287bd0(0,0);
      FUN_00287cc0(0);
      lVar2 = FUN_002887c8();
      if (lVar2 == 0) {
        return;
      }
      FUN_00248720();
      DAT_0035ed68 = 1;
      FUN_00288750(0x2488f0);
      return;
    }
  } while( true );
}

