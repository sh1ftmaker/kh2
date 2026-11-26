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
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_00257070(...) asm("func_00257070");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_00266248(...) asm("_ZN2Tz6CmStat14UpdateHelpListEv");
s32 FUN_00286418(...) asm("func_00286418");
s32 FUN_002864f8(...) asm("func_002864f8");
s32 FUN_00288f60(...) asm("func_00288f60");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
extern u32 DAT_0035ef6c asm("D_0035ef6c");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f020 asm("D_0035f020");
extern u32 DAT_0035f0e4 asm("D_0035f0e4");
extern u32 DAT_003734f8 asm("D_003734f8");
extern u32 DAT_003734fc asm("D_003734fc");
extern undefined *PTR_DAT_00373502 asm("D_00373502");
extern undefined *PTR_LAB_003733b0 asm("D_003733b0");

// Ghidra decompile of 0x00266248, wrapped mechanically (ad/fallback.py)

void FUN_00266248_impl(void) asm("_ZN2Tz6CmStat14UpdateHelpListEv");
void FUN_00266248_impl(void) {
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined2 auStack_80 [8];
  undefined8 auStack_70 [2];
  int iStack_60;
  int iStack_5c;
  int *piStack_58;
  
  iStack_5c = FUN_00257770();
  auStack_70[0] = 0;
  uVar4 = FUN_00257070(0x17);
  iStack_60 = (int)uVar4;
  if (9 < uVar4) {
    piStack_58 = (int *)auStack_70;
    iVar13 = 0;
    do {
      uVar1 = DAT_0035f01c;
      if (iVar13 != 0) {
        uVar1 = DAT_0035f020;
      }
      iVar10 = 0;
      iVar9 = 0;
      do {
        uVar12 = iVar13 * 10 + iVar9;
        if ((*(uint *)(DAT_0035f0e4 + 0x18) & 1 << (uVar12 & 0x1f)) != 0) {
          uVar5 = FUN_002891b8(uVar1,iVar10);
          uVar3 = FUN_00192048(*(undefined2 *)(iVar9 * 6 + *piStack_58));
          *(undefined4 *)((int)uVar5 + 0x198) = uVar3;
          iVar7 = 3;
          iVar11 = *piStack_58;
          puVar6 = auStack_80;
          do {
            iVar7 = iVar7 + -1;
            *puVar6 = *(undefined2 *)(&PTR_DAT_00373502 + *(short *)(iVar9 * 6 + iVar11 + 4));
            puVar6 = puVar6 + 1;
          } while (-1 < iVar7);
          FUN_00288f60(uVar1,iVar10,auStack_80,auStack_80);
          iVar7 = (int)uVar5 + 0x18;
          FUN_00138c10(uVar5,auStack_80[0]);
          iVar11 = FUN_0023aa98(iVar7);
          iVar7 = FUN_0023aa78(iVar7);
          FUN_00138c68(uVar5,iVar13 * iVar11,iVar10 * iVar7);
          FUN_0028dcc0(iStack_5c + uVar12 * 0x1b4 + 0x5ef0,uVar5);
          iVar11 = iStack_5c + uVar12 * 0x198 + 0x87d0;
          FUN_0028dcc0(iVar11,uVar5);
          FUN_00138c10(iVar11,DAT_0035ef6c);
          if ((iVar13 != 0) && (iStack_60 == 6)) {
            uVar3 = 6;
            if (uVar12 != 0xb) {
              uVar3 = 7;
              if ((int)uVar12 < 0xc) {
                uVar3 = 5;
                uVar8 = 10;
              }
              else {
                uVar8 = 0xc;
              }
              if (uVar12 != uVar8) {
                uVar3 = 8;
              }
            }
            lVar2 = FUN_00286418(uVar3);
            if (lVar2 != 0) {
              lVar2 = FUN_002864f8(uVar3);
              uVar3 = DAT_003734f8;
              if (lVar2 != 0) {
                uVar3 = DAT_003734fc;
              }
              FUN_00138c10(iStack_5c + uVar12 * 0x198 + 0x87d0,uVar3);
            }
          }
          iVar10 = iVar10 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 10);
      for (; iVar10 < 10; iVar10 = iVar10 + 1) {
        uVar5 = FUN_002891b8(uVar1,iVar10);
        FUN_00138c10(uVar5,DAT_0035ef6c);
        *(undefined4 *)((int)uVar5 + 0x198) = 0;
      }
      iVar11 = 0;
      iVar10 = iVar13 * 0x1108 + iStack_5c + 0x5ef0;
      iVar9 = iVar13 * 0xff0 + iStack_5c + 0x87d0;
      do {
        if ((*(uint *)(DAT_0035f0e4 + 0x18) & 1 << (iVar13 * 10 + iVar11 & 0x1fU)) == 0) {
          FUN_00138c10(iVar10,DAT_0035ef6c);
          *(undefined4 *)(iVar10 + 0x198) = 0;
          uVar5 = FUN_002891b8(uVar1,iVar11);
          FUN_0028dcc0(iVar10,uVar5);
          FUN_0028dcc0(iVar9,uVar5);
        }
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x198;
        iVar10 = iVar10 + 0x1b4;
      } while (iVar11 < 10);
      iVar13 = iVar13 + 1;
      piStack_58 = piStack_58 + 1;
    } while (iVar13 < 2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002662ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_003733b0)[iStack_60])();
  return;
}

