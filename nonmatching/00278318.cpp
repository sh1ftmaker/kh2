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

s32 FUN_00242848(...) asm("func_00242848");
s32 FUN_00256e30(...) asm("func_00256e30");
s32 FUN_00256e80(...) asm("func_00256e80");
s32 FUN_00256ea8(...) asm("func_00256ea8");
s32 FUN_00256ef0(...) asm("func_00256ef0");
s32 FUN_00257050(...) asm("func_00257050");
s32 FUN_002570a0(...) asm("func_002570a0");
s32 FUN_00257708(...) asm("func_00257708");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_00257970(...) asm("func_00257970");
s32 FUN_00258068(...) asm("func_00258068");
s32 FUN_00263c60(...) asm("func_00263c60");
s32 FUN_002677f0(...) asm("func_002677f0");
s32 FUN_002772c8(...) asm("func_002772c8");
s32 FUN_00277d20(...) asm("func_00277d20");
s32 FUN_00278318(...) asm("_ZN2Tz9CmAbility7CtrlTopEv");
s32 FUN_002788c0(...) asm("func_002788c0");
s32 FUN_00279040(...) asm("func_00279040");
s32 FUN_002799b0(...) asm("func_002799b0");
s32 FUN_0027a208(...) asm("func_0027a208");
s32 FUN_0027a6d8(...) asm("func_0027a6d8");
s32 FUN_0027a7e0(...) asm("func_0027a7e0");
s32 FUN_0027a898(...) asm("func_0027a898");
s32 FUN_0027a908(...) asm("func_0027a908");
s32 FUN_0027a990(...) asm("func_0027a990");
s32 FUN_0027aa10(...) asm("func_0027aa10");
s32 FUN_0027aed8(...) asm("func_0027aed8");
s32 FUN_0027af58(...) asm("func_0027af58");
s32 FUN_0027b248(...) asm("func_0027b248");
s32 FUN_0027b548(...) asm("func_0027b548");
s32 FUN_0027b6b8(...) asm("func_0027b6b8");
s32 FUN_0027bf68(...) asm("func_0027bf68");
s32 FUN_002831e0(...) asm("func_002831e0");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287bd0(...) asm("func_00287bd0");
s32 FUN_00287c00(...) asm("func_00287c00");
s32 FUN_00287c10(...) asm("func_00287c10");
s32 FUN_00287c30(...) asm("func_00287c30");
s32 FUN_00287c90(...) asm("func_00287c90");
s32 FUN_00287cd0(...) asm("func_00287cd0");
s32 FUN_00287da0(...) asm("func_00287da0");
s32 FUN_00287df0(...) asm("func_00287df0");
s32 FUN_00287f90(...) asm("func_00287f90");
s32 FUN_00288018(...) asm("func_00288018");
s32 FUN_00288040(...) asm("func_00288040");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_00289310(...) asm("func_00289310");
s32 FUN_00289380(...) asm("func_00289380");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028afa8(...) asm("func_0028afa8");
s32 FUN_0028b038(...) asm("func_0028b038");
s32 FUN_0028da70(...) asm("func_0028da70");
s32 FUN_0028f6f0(...) asm("func_0028f6f0");
s32 FUN_0028f7e8(...) asm("func_0028f7e8");
s32 FUN_0028f878(...) asm("func_0028f878");
s32 FUN_0028f930(...) asm("func_0028f930");
s32 FUN_0028fa98(...) asm("func_0028fa98");
s32 FUN_0028fb28(...) asm("func_0028fb28");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 LAB_002783d0 asm("D_002783d0");
extern u32 LAB_00278690 asm("D_00278690");
extern u32 LAB_002786b0 asm("D_002786b0");
extern u32 LAB_002787b8 asm("D_002787b8");

// Ghidra decompile of 0x00278318, wrapped mechanically (ad/fallback.py)

void FUN_00278318_impl(void) asm("_ZN2Tz9CmAbility7CtrlTopEv");
void FUN_00278318_impl(void) {
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int iStack_50;
  undefined4 auStack_4c [3];
  
  lVar8 = 0;
  iVar3 = FUN_00257770();
  lVar4 = FUN_00289380(DAT_0035f01c);
  lVar5 = FUN_00287cd0();
  if (lVar5 == 2) {
    lVar5 = FUN_00287c10();
    uVar9 = (int)lVar5 - 0x11;
    uVar10 = (int)lVar5 - 0xf;
    uVar6 = 1;
    if ((uVar10 < 2) || (uVar6 = 0xffffffffffffffff, lVar5 == 2)) {
      lVar8 = FUN_0028f930(uVar6);
    }
    if (uVar9 < 3) {
      if (lVar8 == 0) {
        lVar1 = FUN_00256ef0();
        lVar8 = 0;
        if (lVar1 == 0) goto LAB_002783d0;
      }
      lVar8 = 1;
    }
LAB_002783d0:
    bVar2 = false;
    if ((lVar8 != 0) || (lVar8 = FUN_00257970(), lVar8 != 0)) {
      bVar2 = true;
    }
    if ((((bVar2) || (lVar8 = FUN_0027a908(2 < uVar9), lVar8 != 0)) ||
        ((lVar5 == 0xf && (lVar8 = FUN_0028f930(1), lVar8 != 0)))) ||
       ((lVar5 == 2 && (lVar8 = FUN_0028f930(0xffffffffffffffff), lVar8 != 0)))) {
      if ((lVar4 == -1) && (lVar8 = FUN_00289310(DAT_0035f01c), lVar8 == 0)) {
        return;
      }
      FUN_00287f90(0);
      if (uVar9 < 3) {
        FUN_00256ea8();
      }
      FUN_0027a898(2 < uVar9);
      if (uVar10 < 2) {
        FUN_0028f7e8(1);
        return;
      }
      if (lVar5 != 2) {
        return;
      }
      FUN_0028f878();
      return;
    }
    FUN_00287c30();
    FUN_0028af18(DAT_0035f01c,0x73);
    FUN_00257708(0);
    if (lVar5 == 0xf) {
      FUN_0028f7e8(1);
      FUN_002772c8(0xffffffffffffffff);
      return;
    }
    if (lVar5 == 0x10) {
      FUN_00279040();
      FUN_00277d20();
      return;
    }
    if (uVar9 < 3) {
      FUN_002788c0();
      return;
    }
    if (lVar5 != 2) {
      return;
    }
    uVar6 = FUN_002570a0(0xf);
    FUN_0027aed8(uVar6,&iStack_50,auStack_4c);
    if (iStack_50 != 0) {
      auStack_4c[0] = 0;
      FUN_00257050(0xf,0,0);
      FUN_00257050(0x10,0,0);
    }
    FUN_002677f0(2,auStack_4c[0]);
    return;
  }
  if (((lVar4 != -1) || (lVar8 = FUN_00289310(DAT_0035f01c), lVar8 != 0)) &&
     (lVar8 = FUN_0027a990(), lVar8 == 0)) {
    FUN_0027aa10();
    FUN_0028da70(iVar3 + 0xb350,0x111);
    FUN_0028fa98(0xffffffffffffffff);
    FUN_00256e30();
  }
  if ((lVar5 == 0) && (lVar8 = FUN_0027a990(), lVar8 != 0)) {
    FUN_0027b6b8();
    FUN_00287c90(1);
  }
  lVar8 = FUN_0028afa8(DAT_0035f01c);
  uVar6 = FUN_00289310(DAT_0035f01c);
  uVar6 = FUN_00287df0(lVar4,uVar6,1,0x27c3e0,1);
  lVar5 = FUN_00242848(uVar6);
  if (lVar5 != 0) goto switchD_00278680_caseD_ffffffff;
  switch((int)lVar4) {
  case -0xb:
  case -10:
    FUN_0027b548(lVar4 == -10);
    FUN_00263c60();
    FUN_0028f6f0(1);
    FUN_0027a7e0(1);
    FUN_00287c90(1);
    FUN_00287c00(0x10);
    uVar6 = 0;
    uVar7 = 0;
    goto LAB_002786b0;
  default:
    if ((lVar4 < 0) || (lVar8 <= lVar4)) break;
    iStack_50 = 0x11;
    lVar8 = FUN_0027af58();
    iVar3 = 0x12;
    if (lVar8 != 1) {
      iVar3 = iStack_50;
      if (lVar8 < 2) {
        if (lVar8 == 0) {
          iStack_50 = 0x11;
          iVar3 = iStack_50;
        }
      }
      else if (lVar8 == 2) {
        iVar3 = 0x13;
      }
    }
    iStack_50 = iVar3;
    FUN_0028fb28(2,*(undefined2 *)((int)lVar8 * 2 + 0x373e28));
    FUN_00256e80();
    FUN_00263c60();
    FUN_0027a7e0(0);
    FUN_00287c90(1);
    iVar3 = iStack_50;
    goto LAB_002787b8;
  case -7:
    iStack_50 = FUN_00287bc0();
    FUN_00287bd0(0x25,0);
    FUN_002831e0(2,iStack_50);
    break;
  case -6:
    FUN_0027bf68();
    FUN_002799b0();
    FUN_0027a6d8();
    FUN_0027a208();
    FUN_0027b248(1);
    FUN_0027b6b8();
    break;
  case -5:
    FUN_00263c60();
    FUN_0028f6f0(1);
    FUN_0028f6f0(0);
    FUN_00256e80();
    FUN_0027a7e0(1);
    FUN_00287c90(1);
    iVar3 = 2;
LAB_002787b8:
    FUN_00287c00(iVar3);
    uVar6 = FUN_002891e8(DAT_0035f01c);
    uVar7 = FUN_0028b038(DAT_0035f01c);
LAB_002786b0:
    FUN_00257050(0x10,uVar6,uVar7);
    break;
  case -4:
    FUN_00287da0();
    goto LAB_00278690;
  case -2:
    FUN_00263c60();
    FUN_0028f6f0(1);
    FUN_0027a7e0(1);
    FUN_00287c90(1);
    FUN_00287c00(0xf);
    lVar8 = FUN_00258068(0);
    if (lVar8 == 0) {
      FUN_00256e80();
    }
LAB_00278690:
    uVar6 = FUN_002891e8(DAT_0035f01c);
    uVar7 = FUN_0028b038(DAT_0035f01c);
    goto LAB_002786b0;
  case -1:
    break;
  }
switchD_00278680_caseD_ffffffff:
  lVar8 = FUN_00288040();
  if (lVar8 != 0) {
    FUN_00288018();
  }
  return;
}

