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
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_0028be78(...) asm("func_0028be78");
s32 FUN_0028de08(...) asm("func_0028de08");
s32 FUN_00295430(...) asm("func_00295430");
s32 FUN_002954e0(...) asm("func_002954e0");
s32 FUN_002a3318(...) asm("_ZN2Tz10JmTreasure10UpdateListEv");
s32 FUN_002a3648(...) asm("func_002a3648");
s32 FUN_002a3950(...) asm("func_002a3950");
s32 FUN_002a43f0(...) asm("func_002a43f0");
s32 FUN_002fde18(...) asm("func_002fde18");
extern u32 DAT_0035f214 asm("D_0035f214");
extern u32 DAT_0035f5e4 asm("D_0035f5e4");
extern u32 DAT_0035f5e8 asm("D_0035f5e8");
extern u32 DAT_00374b98 asm("D_00374b98");
extern u32 DAT_00374b9c asm("D_00374b9c");
extern u32 DAT_00374ba0 asm("D_00374ba0");
extern u32 DAT_00374ba4 asm("D_00374ba4");

// Ghidra decompile of 0x002a3318, wrapped mechanically (ad/fallback.py)

void FUN_002a3318_impl(void) asm("_ZN2Tz10JmTreasure10UpdateListEv");
void FUN_002a3318_impl(void) {
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar12 = 0;
  iVar13 = 8;
  iVar5 = FUN_002766d0();
  FUN_0028be78(DAT_0035f214,*(undefined4 *)(DAT_0035f5e4 + 0x1084));
  FUN_002fde18(DAT_0035f5e8 + 0x982c,0,0x20);
  iVar14 = iVar5 + 0xa998;
  do {
    iVar13 = iVar13 + -1;
    iVar11 = DAT_0035f5e8 + iVar12;
    FUN_00138c10(iVar11 + 0x7974,2);
    *(undefined4 *)(iVar11 + 0x7b0c) = 0;
    iVar11 = DAT_0035f5e8 + iVar12;
    iVar12 = iVar12 + 0x1b4;
    FUN_00138c10(iVar11 + 0x88c8,2);
    *(undefined4 *)(iVar11 + 0x8a60) = 0;
    FUN_00138c10(iVar14,2);
    iVar14 = iVar14 + 0x198;
  } while (-1 < iVar13);
  iVar14 = 0;
  FUN_002fde18(iVar5 + 0x110a0,0,0x280);
  iVar12 = 0;
  pbVar8 = (byte *)(DAT_0035f5e4 + 0x1001);
  bVar1 = *pbVar8;
  do {
    pbVar8 = pbVar8 + 8;
    if (bVar1 != 0) {
      if (*(int *)(DAT_0035f5e4 + 0x1084) <= iVar14) break;
      iVar14 = iVar14 + (uint)bVar1;
    }
    iVar12 = iVar12 + 1;
    if (0xe < iVar12) break;
    bVar1 = *pbVar8;
  } while( true );
  iVar11 = 0;
  iVar13 = iVar5;
  do {
    if (0xe < iVar12) break;
    if (iVar11 + *(int *)(DAT_0035f5e4 + 0x1084) == iVar14) {
      iVar9 = DAT_0035f5e8 + iVar11 * 0x1b4;
      FUN_00138c10(iVar9 + 0x7974,0x48);
      uVar3 = FUN_00295430(iVar12,1);
      lVar4 = FUN_002954e0(iVar12);
      if (lVar4 == 0) {
        uVar6 = FUN_0028de08(uVar3,iVar13 + 0x110a0,0x40);
        *(undefined4 *)(iVar9 + 0x7b0c) = uVar6;
      }
      else {
        uVar6 = FUN_00192048(uVar3);
        *(undefined4 *)(iVar9 + 0x7b0c) = uVar6;
      }
      iVar9 = iVar12 * 8;
      if (*(char *)(iVar9 + DAT_0035f5e4 + 0x1000) == '\0') {
        iVar7 = DAT_0035f5e8 + iVar11 * 0x1b4;
        lVar4 = FUN_002a43f0();
        uVar6 = DAT_00374ba4;
        if (lVar4 != 0) {
          uVar6 = DAT_00374ba0;
        }
        uVar6 = FUN_00192048(uVar6);
        *(undefined4 *)(iVar7 + 0x8a60) = uVar6;
      }
      lVar4 = FUN_002954e0(iVar12);
      if ((lVar4 != 0) && (*(char *)(iVar9 + DAT_0035f5e4 + 0x1002) != '\0')) {
        uVar6 = DAT_00374b98;
        if (*(char *)(iVar9 + DAT_0035f5e4 + 0x1003) != '\0') {
          uVar6 = DAT_00374b9c;
        }
        FUN_00138c10(iVar5 + iVar11 * 0x198 + 0xa998,uVar6);
      }
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + (uint)*(byte *)(iVar9 + DAT_0035f5e4 + 0x1001);
      if (iVar12 < 0xf) {
        pcVar10 = (char *)(iVar12 * 8 + DAT_0035f5e4 + 0x1001);
        cVar2 = *pcVar10;
        while ((pcVar10 = pcVar10 + 8, cVar2 == '\0' && (iVar12 = iVar12 + 1, iVar12 < 0xf))) {
          cVar2 = *pcVar10;
        }
      }
    }
    iVar11 = iVar11 + 1;
    iVar13 = iVar13 + 0x40;
  } while (iVar11 < 9);
  FUN_002a3648();
  FUN_002a3950();
  return;
}

