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

s32 FUN_001a80c8(...) asm("func_001a80c8");
s32 FUN_001b7818(...) asm("func_001b7818");
s32 FUN_002570a0(...) asm("func_002570a0");
s32 FUN_00279040(...) asm("_ZN2Tz9CmAbility14GetAbilityInfoEv");
s32 FUN_002793b0(...) asm("func_002793b0");
s32 FUN_00279620(...) asm("func_00279620");
s32 FUN_00279860(...) asm("func_00279860");
s32 FUN_002799b0(...) asm("func_002799b0");
s32 FUN_00279a10(...) asm("func_00279a10");
s32 FUN_0027aed8(...) asm("func_0027aed8");
s32 FUN_00281180(...) asm("func_00281180");
s32 FUN_002811b0(...) asm("func_002811b0");
s32 FUN_002859a0(...) asm("func_002859a0");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_0028b040(...) asm("func_0028b040");
extern u32 DAT_0035f010 asm("D_0035f010");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f230 asm("D_0035f230");
extern u32 LAB_002791ac asm("D_002791ac");
extern u32 LAB_002792d8 asm("D_002792d8");
extern u32 LAB_00279380 asm("D_00279380");

// Ghidra decompile of 0x00279040, wrapped mechanically (ad/fallback.py)

void FUN_00279040_impl(void) asm("_ZN2Tz9CmAbility14GetAbilityInfoEv");
void FUN_00279040_impl(void) {
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_60;
  int aiStack_5c [3];
  
  iVar3 = FUN_002859a0();
  lVar6 = FUN_00287bc0();
  if (lVar6 == 0xf) {
    uVar7 = FUN_0028b040(DAT_0035f01c);
  }
  else {
    uVar7 = FUN_002570a0(0xf);
  }
  FUN_0027aed8(uVar7,&iStack_60,aiStack_5c);
  iVar14 = 0;
  if (iStack_60 == 0) {
    iVar14 = aiStack_5c[0];
  }
  iVar15 = 0;
  iVar13 = 0;
  iVar4 = FUN_00281180(DAT_0035f010,iVar14);
  iVar5 = DAT_0035f230;
  iVar12 = *(int *)(iVar4 + 0x244) + 0x50;
  iVar4 = FUN_00281180(DAT_0035f010,iVar14);
  *(undefined2 *)(iVar5 + 2) = *(undefined2 *)(iVar4 + 0x18e);
  do {
    if (((*(ushort *)(iVar12 + 4) & 0x7fff) != 0) &&
       ((iVar5 = FUN_001a80c8(), iStack_60 == 0 ||
        ((*(char *)(iVar5 + 6) == '\0' && (*(short *)(iVar12 + 4) < 0)))))) {
      iVar4 = iVar15 * 8;
      *(ushort *)(iVar4 + DAT_0035f230 + 0xc) = *(ushort *)(iVar12 + 4) & 0x7fff;
      *(byte *)(iVar4 + DAT_0035f230 + 0xe) = (byte)((ushort)*(undefined2 *)(iVar12 + 4) >> 0xf);
      *(char *)(iVar4 + DAT_0035f230 + 0xf) = (char)iVar13;
      if (iVar14 == 0) {
        iVar9 = 0;
        psVar10 = (short *)(iVar3 + 0xd0);
        iVar8 = iVar4 + DAT_0035f230;
        sVar2 = *psVar10;
        while (psVar10 = psVar10 + 1, sVar2 != *(short *)(iVar8 + 0xc)) {
          iVar9 = iVar9 + 1;
          if (0x4f < iVar9) goto LAB_002791ac;
          sVar2 = *psVar10;
        }
        if (iVar9 < 0x50) {
          *(char *)(iVar8 + 0x13) = (char)iVar9;
        }
        else {
LAB_002791ac:
          *(undefined1 *)(iVar8 + 0x13) = 0xff;
        }
      }
      else {
        uVar7 = FUN_002811b0(DAT_0035f010,iVar14);
        iVar8 = FUN_001b7818(uVar7);
        iVar9 = 0;
        psVar10 = (short *)((iVar8 + -2) * 0x60 + iVar3 + 0x170);
        iVar8 = iVar4 + DAT_0035f230;
        sVar2 = *psVar10;
        while (psVar10 = psVar10 + 1, sVar2 != *(short *)(iVar8 + 0xc)) {
          iVar9 = iVar9 + 1;
          if (0x2f < iVar9) goto LAB_00279380;
          sVar2 = *psVar10;
        }
        if (iVar9 < 0x30) {
          *(char *)(iVar8 + 0x13) = (char)iVar9;
        }
        else {
LAB_00279380:
          *(undefined1 *)(iVar8 + 0x13) = 0xff;
        }
      }
      bVar1 = *(byte *)(iVar5 + 6);
      if (bVar1 < 3) {
        if (bVar1 == 0) {
          uVar11 = 2;
          goto LAB_002792d8;
        }
        *(undefined1 *)(iVar4 + DAT_0035f230 + 0x10) = 0;
      }
      else if (bVar1 == 3) {
        uVar11 = 1;
LAB_002792d8:
        *(undefined1 *)(iVar4 + DAT_0035f230 + 0x10) = uVar11;
      }
      iVar15 = iVar15 + 1;
      *(undefined1 *)(iVar4 + DAT_0035f230 + 0x11) = *(undefined1 *)(iVar5 + 7);
      *(undefined1 *)(iVar4 + DAT_0035f230 + 0x12) = 0xff;
    }
    iVar13 = iVar13 + 1;
    iVar12 = iVar12 + 2;
    if (0x4f < iVar13) {
      iVar3 = 0;
      *(char *)(DAT_0035f230 + 7) = (char)iVar15;
      FUN_00279620();
      FUN_002793b0();
      FUN_00279860();
      FUN_002799b0();
      do {
        *(undefined1 *)(DAT_0035f230 + iVar3 + 8) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      lVar6 = 0;
      if ('\0' < *(char *)(DAT_0035f230 + 7)) {
        iVar3 = 0;
        do {
          iVar14 = (int)lVar6 + 1;
          lVar6 = (long)iVar14;
          iVar3 = DAT_0035f230 + *(char *)(iVar3 + DAT_0035f230 + 0x10);
          *(char *)(iVar3 + 8) = *(char *)(iVar3 + 8) + '\x01';
          iVar3 = iVar14 * 8;
        } while (lVar6 < *(char *)(DAT_0035f230 + 7));
      }
      FUN_00279a10();
      return;
    }
  } while( true );
}

