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

s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_00257130(...) asm("func_00257130");
s32 FUN_00257140(...) asm("func_00257140");
s32 FUN_00257158(...) asm("func_00257158");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_00269658(...) asm("_ZN2Tz7CmEquip13UpdateTopListEv");
s32 FUN_002813b8(...) asm("func_002813b8");
s32 FUN_00281420(...) asm("func_00281420");
s32 FUN_00281f18(...) asm("func_00281f18");
s32 FUN_00281f20(...) asm("func_00281f20");
s32 FUN_00281f30(...) asm("func_00281f30");
s32 FUN_002827e0(...) asm("func_002827e0");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_0028afa8(...) asm("func_0028afa8");
s32 FUN_0028b038(...) asm("func_0028b038");
s32 FUN_0028be78(...) asm("func_0028be78");
extern u32 DAT_0035ef6c asm("D_0035ef6c");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f04c asm("D_0035f04c");
extern u32 DAT_00373768 asm("D_00373768");
extern u32 DAT_00373788 asm("D_00373788");
extern u32 LAB_00269868 asm("D_00269868");
extern undefined *PTR_DAT_00373738 asm("D_00373738");
extern undefined *PTR_DAT_00373758 asm("D_00373758");
extern undefined *PTR_DAT_00373778 asm("D_00373778");
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x00269658, wrapped mechanically (ad/fallback.py)

void FUN_00269658_impl(void) asm("_ZN2Tz7CmEquip13UpdateTopListEv");
void FUN_00269658_impl(void) {
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int aiStack_a0 [8];
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined2 *puStack_68;
  ushort *puStack_64;
  undefined2 *puStack_60;
  
  piVar10 = aiStack_a0;
  uVar12 = FUN_00257130();
  iStack_70 = FUN_00281f18(uVar12);
  iStack_6c = FUN_00257770();
  FUN_00139d78(iStack_6c);
  iVar9 = iStack_6c;
  uVar12 = FUN_0028b038(DAT_0035f01c);
  FUN_0028be78(DAT_0035f04c,uVar12);
  uVar12 = FUN_00257140(0);
  iVar16 = 0;
  do {
    iVar13 = iVar16 + 1;
    uVar3 = FUN_002891b8(DAT_0035f01c,iVar16);
    FUN_00138c10(uVar3,DAT_0035ef6c);
    FUN_00138c10(iVar9 + 0x5ef0,uVar12);
    *(undefined4 *)(iVar9 + 0x6088) = 0;
    FUN_00138c10(iVar9 + 0xd30,DAT_0035ef6c);
    *(undefined4 *)(iVar9 + 0xec8) = 0;
    iVar9 = iVar9 + 0x1b4;
    iVar16 = iVar13;
  } while (iVar13 < 9);
  iVar9 = 0;
  do {
    uVar12 = FUN_00257130();
    uVar4 = FUN_002827e0(uVar12,iVar9);
    iVar9 = iVar9 + 1;
    *piVar10 = uVar4;
    piVar10 = piVar10 + 1;
  } while (iVar9 < 5);
  uStack_80 = 0;
  if (aiStack_a0[1] != 0) {
    uVar5 = FUN_002813b8();
    uStack_80 = FUN_00281420();
    uStack_80 = uVar5 & uStack_80;
  }
  iVar17 = 0;
  iVar13 = 0;
  iVar16 = 0;
  iVar9 = FUN_0028b038(DAT_0035f01c);
  uVar12 = FUN_00257130();
  iStack_78 = FUN_00281f30(uVar12);
  uVar12 = FUN_00257130();
  iStack_74 = FUN_00281f20(uVar12);
  iStack_7c = FUN_0028afa8(DAT_0035f01c);
  do {
    if (iStack_7c <= iVar9 + iVar13) {
      return;
    }
    iVar14 = 0;
    if ((0 < aiStack_a0[iVar16]) && (iVar13 < 9)) {
      iVar7 = iVar16 * 2;
      puStack_60 = (undefined2 *)((int)&PTR_DAT_00373738 + iVar7);
      puStack_68 = (undefined2 *)((int)&PTR_DAT_00373758 + iVar7);
      puStack_64 = (ushort *)(&DAT_00373768 + iVar7);
      do {
        if (iVar9 <= iVar17) {
          uVar5 = 0xffffffff;
          if ((iVar14 == 0) || (iVar16 == 1)) {
            uVar15 = 0xffffffffffffffff;
            uVar6 = 0xffff;
            if (iVar16 == 1) {
              iVar7 = 0;
              uVar5 = 0;
              do {
                if ((((int)uStack_80 >> (uVar5 & 0x1f) & 1U) != 0) &&
                   (bVar2 = iVar7 == iVar14, iVar7 = iVar7 + 1, bVar2)) {
                  uVar1 = *(ushort *)(&DAT_00373788 + uVar5 * 2);
                  uVar6 = *(undefined2 *)((int)&PTR_DAT_00373778 + uVar5 * 2);
                  goto LAB_00269868;
                }
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < 7);
            }
            else {
              uVar6 = *puStack_68;
              uVar1 = *puStack_64;
LAB_00269868:
              uVar15 = (ulong)uVar1;
            }
            iVar7 = iStack_6c + iVar13 * 0x1b4;
            FUN_00138c10(iVar7 + 0xd30,uVar6);
            uVar4 = FUN_00192048(uVar15);
            *(undefined4 *)(iVar7 + 0xec8) = uVar4;
          }
          puVar8 = puStack_60;
          if (iVar16 == 1) {
            puVar8 = (undefined2 *)(uVar5 * 2 + 0x373748);
          }
          uVar6 = *puVar8;
          iVar7 = (iVar9 + iVar13) % iStack_70;
          if (iStack_70 == 0) {
            trap(7);
          }
          uVar12 = FUN_002891b8(DAT_0035f01c,iVar13);
          FUN_00138c10(uVar12,uVar6);
          uVar12 = FUN_00257140(0);
          if (iVar16 == 4) {
            puVar8 = (undefined2 *)(iVar7 * 6 + iStack_74);
            uVar12 = FUN_00257158(*puVar8,*(undefined1 *)(puVar8 + 1),
                                  *(char *)((int)puVar8 + 3) != '\0');
            uVar12 = FUN_00257140(uVar12);
          }
          iVar11 = iStack_6c + iVar13 * 0x1b4;
          iVar13 = iVar13 + 1;
          FUN_00138c10(iVar11 + 0x5ef0,uVar12);
          *(int *)(iVar11 + 0x6088) = iStack_78 + iVar7 * 0x50 + 0x10;
        }
        iVar14 = iVar14 + 1;
        iVar17 = iVar17 + 1;
      } while ((iVar14 < aiStack_a0[iVar16]) && (iVar13 < 9));
    }
    bVar2 = iVar16 + 1 < 5;
    iVar14 = iVar16 + 1;
    if (!bVar2) {
      if (iVar13 < 9) {
        iVar16 = -1;
      }
      bVar2 = iVar16 + 1 < 5;
      iVar14 = iVar16 + 1;
    }
    iVar16 = iVar14;
    if (!bVar2) {
      return;
    }
    if (8 < iVar13) {
      return;
    }
  } while( true );
}

