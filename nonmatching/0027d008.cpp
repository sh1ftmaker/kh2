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
s32 FUN_00138c78(...) asm("func_00138c78");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_0027d008(...) asm("_ZN2Tz8CmConfig10UpdateListEv");
s32 FUN_0027d488(...) asm("func_0027d488");
s32 FUN_0027d5d8(...) asm("func_0027d5d8");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_0028b038(...) asm("func_0028b038");
s32 FUN_0028be78(...) asm("func_0028be78");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
extern u32 DAT_0035ef6c asm("D_0035ef6c");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f04c asm("D_0035f04c");
extern u32 DAT_0035f234 asm("D_0035f234");
extern u32 DAT_00373ef8 asm("D_00373ef8");
extern u32 DAT_00373f08 asm("D_00373f08");
extern u32 DAT_00373f10 asm("D_00373f10");
extern u32 DAT_00373f12 asm("D_00373f12");
extern u32 DAT_00373f14 asm("D_00373f14");
extern undefined *PTR_DAT_00373f00 asm("D_00373f00");

// Ghidra decompile of 0x0027d008, wrapped mechanically (ad/fallback.py)

void FUN_0027d008_impl(void) asm("_ZN2Tz8CmConfig10UpdateListEv");
void FUN_0027d008_impl(void) {
  short sVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  B4 auStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined **ppuStack_64;
  int iStack_60;
  
  iVar13 = 0;
  iVar5 = FUN_00257770();
  iStack_68 = iVar5;
  iStack_60 = FUN_0028b038(DAT_0035f01c);
  FUN_0028be78(DAT_0035f04c,iStack_60);
  do {
    iVar8 = iVar5 + 0x3610;
    iVar11 = 3;
    do {
      iVar11 = iVar11 + -1;
      FUN_00138c10(iVar8,DAT_0035ef6c);
      *(undefined4 *)(iVar8 + 0x198) = 0;
      iVar8 = iVar8 + 0x1b4;
    } while (-1 < iVar11);
    iVar13 = iVar13 + 1;
    iVar5 = iVar5 + 0x6d0;
  } while (iVar13 < 9);
  iVar5 = 8;
  puVar10 = (undefined4 *)(iStack_68 + 0xec8);
  puVar9 = (undefined2 *)(&DAT_00373f12 + iStack_60 * 0x14);
  do {
    iVar5 = iVar5 + -1;
    uVar6 = FUN_00192048(*puVar9);
    puVar9 = puVar9 + 10;
    *puVar10 = uVar6;
    puVar10 = puVar10 + 0x6d;
  } while (-1 < iVar5);
  iVar5 = 0;
  do {
    iVar13 = iStack_60 + iVar5;
    if (*(short *)(&DAT_00373f10 + iVar13 * 0x14) == 1) {
      ppuStack_64 = (undefined **)&DAT_00373ef8;
    }
    else if (*(short *)(&DAT_00373f10 + iVar13 * 0x14) == 2) {
      ppuStack_64 = &PTR_DAT_00373f00;
    }
    else {
      ppuStack_64 = (undefined **)&DAT_00373f08;
    }
    iVar8 = iVar13 * 0x14;
    lVar12 = 0;
    if (0 < *(short *)(&DAT_00373f10 + iVar8)) {
      puVar9 = (undefined2 *)(&DAT_00373f14 + iVar8);
      sVar1 = *(short *)(&DAT_00373f10 + iVar8);
      iVar8 = iVar5 * 0x6d0 + iStack_68 + 0x3610;
      do {
        if ((iVar13 == 9) || (*(char *)(DAT_0035f234 + iVar13) == lVar12)) {
          uVar2 = *(undefined2 *)ppuStack_64;
        }
        else {
          uVar2 = *(undefined2 *)((int)ppuStack_64 + 2);
        }
        FUN_00138c10(iVar8,uVar2);
        iVar11 = FUN_0023aa78(iVar8 + 0x18);
        uVar6 = FUN_0023aa98(iVar8 + 0x18);
        FUN_00138c78(iVar8,auStack_70,&uStack_6c);
        FUN_00138c68(iVar8,iVar11 * (int)lVar12,uStack_6c);
        if (iVar13 == 9) {
          uVar2 = *(undefined2 *)(&DAT_00373f14 + (*(char *)(DAT_0035f234 + 9) + 0x5a) * 2);
        }
        else {
          uVar2 = *puVar9;
        }
        lVar12 = (long)((int)lVar12 + 1);
        uVar7 = FUN_00192048(uVar2);
        *(undefined4 *)(iVar8 + 0x198) = uVar7;
        puVar9 = puVar9 + 1;
        *(undefined4 *)(iVar8 + 0x19c) = uVar6;
        *(undefined4 *)(iVar8 + 0x1a0) = 0;
        iVar8 = iVar8 + 0x1b4;
      } while (lVar12 < sVar1);
    }
    iVar13 = iStack_60;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 9);
  iVar5 = 0;
  do {
    uVar3 = FUN_0027d488(iVar5,iVar13);
    iVar8 = iVar5 + 1;
    uVar4 = FUN_002891b8(DAT_0035f01c,iVar5);
    FUN_0028dcc0(uVar4,uVar3);
    iVar5 = iVar8;
  } while (iVar8 < 9);
  FUN_0027d5d8();
  return;
}

