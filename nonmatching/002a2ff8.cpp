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

s32 FUN_002954e0(...) asm("func_002954e0");
s32 FUN_002a2ff8(...) asm("_ZN2Tz10JmTreasure8SortListEv");
s32 FUN_002a4380(...) asm("func_002a4380");
s32 FUN_002a43f0(...) asm("func_002a43f0");
extern u32 DAT_0035f5e4 asm("D_0035f5e4");

// Ghidra decompile of 0x002a2ff8, wrapped mechanically (ad/fallback.py)

void FUN_002a2ff8_impl(void) asm("_ZN2Tz10JmTreasure8SortListEv");
void FUN_002a2ff8_impl(void) {
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  
  iVar11 = *(int *)(DAT_0035f5e4 + 0x1078);
  iVar4 = 0;
  if (0 < iVar11) {
    do {
      iVar8 = iVar4 + 1;
      if (iVar8 < iVar11) {
        iVar11 = iVar8;
        do {
          iVar5 = iVar11 * 8;
          pbVar9 = (byte *)(iVar4 * 8 + DAT_0035f5e4);
          pbVar7 = (byte *)(iVar5 + DAT_0035f5e4);
          iVar11 = iVar11 + 1;
          if (*pbVar7 < *pbVar9) {
            uVar3 = *(undefined8 *)pbVar9;
            *(undefined8 *)pbVar9 = *(undefined8 *)pbVar7;
            *(undefined8 *)(iVar5 + DAT_0035f5e4) = uVar3;
          }
        } while (iVar11 < *(int *)(DAT_0035f5e4 + 0x1078));
      }
      iVar11 = *(int *)(DAT_0035f5e4 + 0x1078);
      iVar4 = iVar8;
    } while (iVar8 < iVar11);
    iVar11 = *(int *)(DAT_0035f5e4 + 0x1078);
  }
  iVar4 = 0;
  if (0 < iVar11) {
    do {
      iVar8 = iVar4 + 1;
      if (iVar8 < iVar11) {
        iVar11 = iVar8;
        do {
          iVar5 = iVar11 * 8;
          pcVar12 = (char *)(iVar4 * 8 + DAT_0035f5e4);
          pcVar10 = (char *)(iVar5 + DAT_0035f5e4);
          iVar11 = iVar11 + 1;
          if (*pcVar12 != *pcVar10) break;
          if (*(ushort *)(pcVar10 + 4) < *(ushort *)(pcVar12 + 4)) {
            uVar3 = *(undefined8 *)pcVar12;
            *(undefined8 *)pcVar12 = *(undefined8 *)pcVar10;
            *(undefined8 *)(iVar5 + DAT_0035f5e4) = uVar3;
            iVar5 = *(int *)(DAT_0035f5e4 + 0x1078);
          }
          else {
            iVar5 = *(int *)(DAT_0035f5e4 + 0x1078);
          }
        } while (iVar11 < iVar5);
      }
      iVar11 = *(int *)(DAT_0035f5e4 + 0x1078);
      iVar4 = iVar8;
    } while (iVar8 < iVar11);
  }
  iVar11 = 0;
  if (0 < *(int *)(DAT_0035f5e4 + 0x1078)) {
    do {
      iVar8 = iVar11 + 1;
      pbVar7 = (byte *)(iVar11 * 8 + DAT_0035f5e4);
      iVar4 = (uint)*pbVar7 * 8;
      *(byte **)(iVar4 + DAT_0035f5e4 + 0x1004) = pbVar7;
      uVar6 = 1;
      if (iVar8 < *(int *)(DAT_0035f5e4 + 0x1078)) {
        pcVar10 = (char *)(iVar8 * 8 + DAT_0035f5e4);
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 8;
          if (*(char *)(iVar11 * 8 + DAT_0035f5e4) != cVar1) break;
          iVar8 = iVar8 + 1;
          uVar6 = uVar6 + 1;
        } while (iVar8 < *(int *)(DAT_0035f5e4 + 0x1078));
      }
      uVar13 = uVar6 + 7;
      if (-1 < (int)uVar6) {
        uVar13 = uVar6;
      }
      *(char *)(iVar4 + DAT_0035f5e4 + 0x1000) = (char)uVar6;
      *(char *)(iVar4 + DAT_0035f5e4 + 0x1001) = (char)(uVar13 >> 3);
      if ((uVar6 & 7) != 0) {
        *(char *)(iVar4 + DAT_0035f5e4 + 0x1001) = *(char *)(iVar4 + DAT_0035f5e4 + 0x1001) + '\x01'
        ;
      }
      iVar11 = iVar11 + uVar6;
    } while (iVar11 < *(int *)(DAT_0035f5e4 + 0x1078));
  }
  iVar11 = 0;
  do {
    lVar2 = FUN_002a43f0();
    if ((lVar2 == 0) || (lVar2 = FUN_002a4380(iVar11), lVar2 == 0)) {
      iVar4 = iVar11 * 8;
      if ((*(char *)(iVar4 + DAT_0035f5e4 + 0x1001) == '\0') &&
         (lVar2 = FUN_002954e0(iVar11), lVar2 != 0)) {
        *(undefined1 *)(iVar4 + DAT_0035f5e4 + 0x1001) = 1;
      }
      *(uint *)(DAT_0035f5e4 + 0x1080) =
           *(int *)(DAT_0035f5e4 + 0x1080) + (uint)*(byte *)(iVar4 + DAT_0035f5e4 + 0x1001);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0xf);
  return;
}

