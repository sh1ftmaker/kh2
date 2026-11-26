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

s32 FUN_001145b0(...) asm("func_001145b0");
s32 FUN_00257070(...) asm("func_00257070");
s32 FUN_002570a0(...) asm("func_002570a0");
s32 FUN_0026b5a0(...) asm("func_0026b5a0");
s32 FUN_00270c70(...) asm("func_00270c70");
s32 FUN_002713c8(...) asm("func_002713c8");
s32 FUN_00273818(...) asm("_ZN2Tz8CmCustom23ChangeAutoReplenishmentEv");
s32 FUN_00281180(...) asm("func_00281180");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_002892f8(...) asm("func_002892f8");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028afd0(...) asm("func_0028afd0");
s32 FUN_0028b038(...) asm("func_0028b038");
s32 FUN_0028b040(...) asm("func_0028b040");
s32 FUN_0028be78(...) asm("func_0028be78");
s32 FUN_0028bfc0(...) asm("func_0028bfc0");
extern u32 DAT_0035f010 asm("D_0035f010");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f04c asm("D_0035f04c");
extern u32 DAT_0035f12c asm("D_0035f12c");

// Ghidra decompile of 0x00273818, wrapped mechanically (ad/fallback.py)

void FUN_00273818_impl(void) asm("_ZN2Tz8CmCustom23ChangeAutoReplenishmentEv");
void FUN_00273818_impl(void) {
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  
  lVar5 = FUN_00287bc0();
  uVar11 = (int)lVar5 - 0x1a;
  if (uVar11 < 3) {
    iVar4 = FUN_0028b040(DAT_0035f01c);
  }
  else {
    iVar4 = FUN_002570a0(0x1a);
  }
  lVar6 = FUN_002570a0(0x19);
  if (lVar6 != 0) {
    iVar4 = iVar4 + -1;
  }
  iVar4 = iVar4 * 8;
  iVar7 = iVar4 + DAT_0035f12c;
  sVar2 = *(short *)(iVar7 + 8);
  if (lVar6 == 0) {
    bVar3 = *(char *)(iVar7 + 10) == '\0';
  }
  else {
    if (lVar5 == 0x1f) {
      uVar10 = FUN_0028b040(DAT_0035f01c);
    }
    else {
      uVar10 = ((uint)(*(char *)(iVar7 + 0xb) != '\0') << 1 | (int)*(char *)(iVar7 + 10)) + 1;
      if (3 < (int)uVar10) {
        uVar10 = 0;
      }
    }
    *(byte *)(iVar4 + DAT_0035f12c + 10) = (byte)uVar10 & 1;
    *(char *)(iVar4 + DAT_0035f12c + 0xb) = ((uVar10 & 2) != 0) << 1;
    bVar3 = *(char *)(iVar4 + DAT_0035f12c + 10) != '\0';
  }
  iVar7 = FUN_00281180(DAT_0035f010,lVar6);
  iVar7 = *(int *)(iVar7 + 0x244);
  iVar8 = iVar7;
  for (uVar10 = (uint)*(byte *)(iVar7 + 0x12); uVar10 != 0; uVar10 = uVar10 - 1) {
    if (((ulong)*(ushort *)(iVar8 + 0x34) == (long)sVar2) ||
       ((ulong)*(ushort *)(iVar8 + 0x44) == (long)sVar2)) {
      sVar9 = sVar2;
      if (!bVar3) {
        sVar9 = 0;
      }
      *(short *)(iVar8 + 0x44) = sVar9;
    }
    iVar8 = iVar8 + 2;
  }
  if (lVar6 != 0) {
    iVar8 = FUN_001145b0(*(undefined2 *)(iVar4 + DAT_0035f12c + 8));
    *(undefined1 *)(iVar8 + iVar7 + 0xf5) = *(undefined1 *)(iVar4 + DAT_0035f12c + 0xb);
  }
  FUN_0026b5a0(0x19);
  if (uVar11 < 3) {
    cVar1 = *(char *)(DAT_0035f12c + 4);
    FUN_00270c70(lVar6);
    FUN_002713c8();
    if (cVar1 != *(char *)(DAT_0035f12c + 4)) {
      cVar1 = *(char *)(DAT_0035f12c + 4);
      lVar6 = FUN_00257070(0x19);
      lVar5 = (long)cVar1;
      if (lVar6 != 0) {
        lVar5 = (long)(cVar1 + 1);
      }
      lVar6 = FUN_002891e8(DAT_0035f01c);
      iVar4 = FUN_0028b038(DAT_0035f01c);
      iVar7 = FUN_002892f8(DAT_0035f01c);
      if (lVar6 == 0) {
        if (iVar4 != 0) {
          iVar4 = iVar4 + -1;
        }
      }
      else if ((iVar4 == 0) || (iVar4 + iVar7 <= lVar5)) {
        if ((lVar6 != 0) && (lVar5 <= lVar6)) {
          lVar6 = (long)((int)lVar6 + -1);
        }
      }
      else {
        iVar4 = iVar4 + -1;
      }
      FUN_0028bfc0(DAT_0035f04c,lVar5);
      FUN_0028be78(DAT_0035f04c,iVar4);
      FUN_002891f0(DAT_0035f01c,lVar6,0,0xffffffffffffffff,0xffffffffffffffff);
      FUN_0028afd0(DAT_0035f01c,iVar4);
      FUN_0028af90(DAT_0035f01c,lVar5);
      return;
    }
  }
  return;
}

