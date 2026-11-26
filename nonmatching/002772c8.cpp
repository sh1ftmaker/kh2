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
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_00256cc0(...) asm("func_00256cc0");
s32 FUN_00257050(...) asm("func_00257050");
s32 FUN_00257070(...) asm("func_00257070");
s32 FUN_00257100(...) asm("func_00257100");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_00258068(...) asm("func_00258068");
s32 FUN_002772c8(...) asm("_ZN2Tz9CmAbility8SetupTopEi");
s32 FUN_00277708(...) asm("func_00277708");
s32 FUN_00279cd8(...) asm("func_00279cd8");
s32 FUN_00279ec8(...) asm("func_00279ec8");
s32 FUN_0027ae78(...) asm("func_0027ae78");
s32 FUN_0027aed8(...) asm("func_0027aed8");
s32 FUN_00281100(...) asm("func_00281100");
s32 FUN_00281140(...) asm("func_00281140");
s32 FUN_00281180(...) asm("func_00281180");
s32 FUN_00286d28(...) asm("func_00286d28");
s32 FUN_00286ec8(...) asm("func_00286ec8");
s32 FUN_00287028(...) asm("func_00287028");
s32 FUN_00287218(...) asm("func_00287218");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_00288e08(...) asm("func_00288e08");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_002892f8(...) asm("func_002892f8");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028af88(...) asm("func_0028af88");
s32 FUN_0028afa8(...) asm("func_0028afa8");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028f4d8(...) asm("func_0028f4d8");
extern u32 DAT_0035ef64 asm("D_0035ef64");
extern u32 DAT_0035ef68 asm("D_0035ef68");
extern u32 DAT_0035ef6c asm("D_0035ef6c");
extern u32 DAT_0035f010 asm("D_0035f010");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f03c asm("D_0035f03c");
extern u32 DAT_0035f230 asm("D_0035f230");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_00373dfc asm("D_00373dfc");
extern u32 DAT_00373e00 asm("D_00373e00");
extern u32 LAB_002775bc asm("D_002775bc");

// Ghidra decompile of 0x002772c8, wrapped mechanically (ad/fallback.py)

void FUN_002772c8_impl(long param_1) asm("_ZN2Tz9CmAbility8SetupTopEi");
void FUN_002772c8_impl(long param_1) {
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  
  iVar9 = 1;
  iStack_54 = FUN_00257770();
  FUN_0028f4d8(0,0xffffffffffffffff,0);
  uStack_58 = DAT_0035f3d4;
  DAT_0035f3d4 = 0x7541;
  uVar5 = FUN_00257100(0);
  uVar1 = FUN_00257100(1);
  FUN_00288d80(DAT_0035f01c,0,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0xffffffffffffffff,uVar5,uVar1)
  ;
  FUN_00288e08(DAT_0035f01c,0,0,0xffffffffffffffff);
  uVar5 = FUN_002891b8(DAT_0035f01c,0);
  FUN_00139620(uVar5);
  uVar2 = FUN_00281140(DAT_0035f010,0);
  *(undefined4 *)((int)uVar5 + 0x198) = uVar2;
  FUN_001395f8(uVar5);
  iVar3 = FUN_0023aa98((int)uVar5 + 0x18);
  uVar5 = FUN_00277708(1);
  iVar8 = (int)uVar5 + 1;
  iVar4 = FUN_002891b8(DAT_0035f01c,uVar5);
  iVar4 = FUN_0023aa98(iVar4 + 0x18);
  iVar3 = iVar3 + iVar4 * (int)uVar5;
  do {
    lVar6 = FUN_00281180(DAT_0035f010,iVar9);
    if (lVar6 != 0) {
      uVar5 = FUN_00257100(0);
      uVar1 = FUN_00257100(1);
      FUN_00288d80(DAT_0035f01c,iVar8,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0xffffffffffffffff,
                   uVar5,uVar1);
      uVar5 = FUN_002891b8(DAT_0035f01c,iVar8);
      iVar4 = FUN_0023aa98((int)uVar5 + 0x18);
      FUN_00138c68(uVar5,0,iVar3);
      iVar3 = iVar3 + iVar4;
      FUN_00139620(uVar5);
      uVar2 = FUN_00281140(DAT_0035f010,iVar9);
      *(undefined4 *)((int)uVar5 + 0x198) = uVar2;
      FUN_001395f8(uVar5);
      iVar8 = iVar8 + 1;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  DAT_0035f3d4 = uStack_58;
  *(char *)(DAT_0035f230 + 6) = (char)iVar8;
  iVar8 = FUN_00257070(0xf);
  if (-1 < param_1) {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = FUN_002892f8(DAT_0035f01c);
      iVar4 = FUN_00281100(DAT_0035f010);
      iVar3 = (iVar3 - iVar4) + (int)param_1;
    }
    if (iVar8 != iVar3) {
      FUN_00257050(0x10,0,0);
      FUN_00257050(0xf,iVar3,0);
      iVar8 = iVar3;
    }
  }
  FUN_002891f0(DAT_0035f01c,iVar8,1,0,2);
  iVar8 = FUN_0028afa8(DAT_0035f01c);
  if (0 < iVar8) {
    iVar3 = iStack_54 + 0x87d0;
    iVar4 = 0;
    do {
      FUN_0027aed8(iVar4,&iStack_60,&uStack_5c);
      uVar2 = DAT_0035ef6c;
      if (iStack_60 == 0) {
        lVar6 = FUN_00286d28(uStack_5c);
        if (lVar6 != 0) {
          lVar6 = FUN_00287028(uStack_5c,0xffffffffffffffff);
LAB_002775bc:
          uVar2 = DAT_00373dfc;
          if (lVar6 != 0) {
            uVar2 = DAT_00373e00;
          }
        }
      }
      else {
        uVar5 = FUN_0027ae78(uStack_5c,0xffffffffffffffff);
        lVar6 = FUN_00286ec8(uVar5,0xffffffffffffffff);
        if (lVar6 != 0) {
          uVar5 = FUN_0027ae78(uStack_5c);
          lVar6 = FUN_00287218(uVar5,0xffffffffffffffff);
          goto LAB_002775bc;
        }
      }
      FUN_0028d8c0(iVar3,0x7541,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,uVar2,0xffffffffffffffff,0);
      iVar9 = iVar4 + 1;
      uVar5 = FUN_002891b8(DAT_0035f01c,iVar4);
      iVar4 = (int)uVar5 + 0x18;
      FUN_0028dcc0(iVar3,uVar5);
      uVar5 = FUN_0023aa18(iVar4);
      uVar1 = FUN_0023aa38(iVar4);
      FUN_00138c68(iVar3,uVar5,uVar1);
      iVar3 = iVar3 + 0x198;
      iVar4 = iVar9;
    } while (iVar9 < iVar8);
  }
  FUN_00279cd8();
  FUN_00279ec8();
  uVar7 = FUN_0028af88(DAT_0035f01c);
  lVar6 = FUN_00258068(0);
  if (lVar6 != 0) {
    uVar7 = uVar7 | 0x100;
    FUN_00256cc0(0xb373,0xffffffffffffffff,0xffffffffffffffff);
  }
  FUN_0028af18(DAT_0035f01c,uVar7);
  FUN_00287cc0(0);
  return;
}

