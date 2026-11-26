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

s32 FUN_00181500(...) asm("func_00181500");
s32 FUN_001a6d08(...) asm("func_001a6d08");
s32 FUN_00257e00(...) asm("_ZN2Tz5CmTop18GetEnbableSelectorEv");
s32 FUN_00281100(...) asm("func_00281100");
s32 FUN_00281180(...) asm("func_00281180");
extern u32 DAT_0035f010 asm("D_0035f010");
extern undefined *PTR_DAT_00372a28 asm("D_00372a28");

// Ghidra decompile of 0x00257e00, wrapped mechanically (ad/fallback.py)

uint FUN_00257e00_impl(void) asm("_ZN2Tz5CmTop18GetEnbableSelectorEv");
uint FUN_00257e00_impl(void) {
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined **ppuVar6;
  int iVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  uint uVar11;
  
  ppuVar10 = &PTR_DAT_00372a28;
  uVar8 = 0;
  uVar11 = 0;
  ppuVar9 = ppuVar10;
  do {
    bVar2 = true;
    if (uVar8 != 1) {
      iVar7 = 0;
      ppuVar6 = ppuVar9 + 7;
      cVar1 = *(char *)ppuVar6;
      while (ppuVar6 = (undefined **)((int)ppuVar6 + 1), -1 < cVar1) {
        lVar5 = FUN_001a6d08(cVar1);
        if (lVar5 == 0) {
          bVar2 = false;
          break;
        }
        iVar7 = iVar7 + 1;
        if (3 < iVar7) break;
        cVar1 = *(char *)ppuVar6;
      }
      if (bVar2) {
        iVar7 = 0;
        ppuVar6 = ppuVar10;
        do {
          iVar7 = iVar7 + 1;
          bVar2 = true;
          if (*(char *)(ppuVar6 + 8) < '\0') break;
          lVar5 = FUN_001a6d08(*(char *)(ppuVar6 + 8));
          if (lVar5 != 0) {
            bVar2 = false;
            break;
          }
          ppuVar6 = (undefined **)((int)ppuVar10 + iVar7);
        } while (iVar7 < 4);
        if (bVar2) {
          uVar11 = uVar11 | 1 << (uVar8 & 0x1f);
        }
      }
    }
    uVar8 = uVar8 + 1;
    ppuVar10 = ppuVar10 + 9;
    ppuVar9 = ppuVar9 + 9;
  } while ((int)uVar8 < 8);
  bVar2 = false;
  iVar7 = 0;
  do {
    iVar4 = FUN_00281100(DAT_0035f010);
    if (iVar4 <= iVar7) {
      bVar3 = !bVar2;
      bVar2 = true;
      if (bVar3) {
        return uVar11;
      }
      break;
    }
    iVar4 = FUN_00281180(DAT_0035f010,iVar7);
    bVar2 = (*(ushort *)(*(int *)(iVar4 + 0x244) + 0x54) & 0x7fff) != 0;
    iVar7 = iVar7 + 1;
  } while (!bVar2);
  lVar5 = FUN_00181500(0x817);
  if ((lVar5 != 0) && (lVar5 = FUN_00181500(0x849), lVar5 == 0)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar11 = uVar11 | 2;
  }
  return uVar11;
}

