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

s32 FUN_001a1658(...) asm("func_001a1658");
s32 FUN_001a17c8(...) asm("func_001a17c8");
s32 FUN_001a3570(...) asm("func_001a3570");
s32 FUN_001a8110(...) asm("func_001a8110");
s32 FUN_001a8bd0(...) asm("func_001a8bd0");
s32 FUN_001a8c10(...) asm("func_001a8c10");
s32 FUN_00281420(...) asm("func_00281420");
s32 FUN_002814b0(...) asm("func_002814b0");
s32 FUN_002859a0(...) asm("func_002859a0");
s32 FUN_002859f0(...) asm("_Z16u_call0_002859f0v");
s32 FUN_00285d18(...) asm("func_00285d18");
extern u32 DAT_0035f2e4 asm("D_0035f2e4");

// Ghidra decompile of 0x002859f0, wrapped mechanically (ad/fallback.py)

void FUN_002859f0_impl(void) asm("_Z16u_call0_002859f0v");
void FUN_002859f0_impl(void) {
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  
  iVar13 = 0;
  lVar15 = 0;
  iVar3 = FUN_002859a0();
  uVar2 = FUN_001a8bd0(0xffffffffffffffff);
  do {
    lVar5 = FUN_001a8c10(uVar2,iVar13);
    if (lVar5 != 0) {
      uVar6 = FUN_001a1658(lVar5,0xffffffffffffffff);
      puVar10 = *(ushort **)((int)uVar6 + 0x244);
      iVar7 = 1;
      uVar1 = *puVar10;
      puVar9 = puVar10;
      while( true ) {
        iVar8 = (uint)(uVar1 >> 5) * 4;
        uVar11 = 1 << (uVar1 & 0x1f);
        puVar9 = puVar9 + 1;
        if ((uVar1 != 0) && ((*(uint *)(iVar8 + iVar3) & uVar11) == 0)) {
          puVar12 = (uint *)(DAT_0035f2e4 + 0xcc + iVar8);
          *puVar12 = *puVar12 | uVar11;
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) break;
        uVar1 = *puVar9;
      }
      puVar9 = puVar10 + 10;
      iVar7 = 7;
      uVar1 = *puVar9;
      while( true ) {
        iVar8 = (uint)(uVar1 >> 5) * 4;
        uVar11 = 1 << (uVar1 & 0x1f);
        puVar9 = puVar9 + 1;
        if ((uVar1 != 0) && ((*(uint *)(iVar8 + iVar3) & uVar11) == 0)) {
          puVar12 = (uint *)(DAT_0035f2e4 + 0xcc + iVar8);
          *puVar12 = *puVar12 | uVar11;
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) break;
        uVar1 = *puVar9;
      }
      puVar9 = puVar10 + 0x12;
      iVar7 = 7;
      uVar1 = *puVar9;
      while( true ) {
        iVar8 = (uint)(uVar1 >> 5) * 4;
        uVar11 = 1 << (uVar1 & 0x1f);
        puVar9 = puVar9 + 1;
        if ((uVar1 != 0) && ((*(uint *)(iVar8 + iVar3) & uVar11) == 0)) {
          puVar12 = (uint *)(DAT_0035f2e4 + 0xcc + iVar8);
          *puVar12 = *puVar12 | uVar11;
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) break;
        uVar1 = *puVar9;
      }
      puVar10 = puVar10 + 0x1a;
      iVar7 = 7;
      uVar1 = *puVar10;
      while( true ) {
        iVar8 = (uint)(uVar1 >> 5) * 4;
        uVar11 = 1 << (uVar1 & 0x1f);
        puVar10 = puVar10 + 1;
        if ((uVar1 != 0) && ((*(uint *)(iVar8 + iVar3) & uVar11) == 0)) {
          puVar12 = (uint *)(DAT_0035f2e4 + 0xcc + iVar8);
          *puVar12 = *puVar12 | uVar11;
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) break;
        uVar1 = *puVar10;
      }
      FUN_001a17c8(uVar6);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 4);
  uVar4 = FUN_00281420();
  uVar14 = 0;
  uVar11 = uVar4;
  do {
    if ((uVar11 & 1) != 0) {
      lVar5 = FUN_002814b0(uVar14);
      iVar13 = ((uint)lVar5 >> 5) * 4;
      uVar11 = 1 << ((uint)lVar5 & 0x1f);
      if ((lVar5 != 0) && ((*(uint *)(iVar13 + iVar3) & uVar11) == 0)) {
        puVar12 = (uint *)(DAT_0035f2e4 + 0xcc + iVar13);
        *puVar12 = *puVar12 | uVar11;
      }
    }
    uVar14 = uVar14 + 1;
    uVar11 = (int)uVar4 >> (uVar14 & 0x1f);
  } while ((int)uVar14 < 7);
  while( true ) {
    lVar15 = FUN_001a8110(lVar15);
    puVar10 = (ushort *)lVar15;
    if (lVar15 == 0) break;
    lVar5 = FUN_00285d18((char)puVar10[1]);
    if ((lVar5 != 0) && (lVar5 = FUN_001a3570(*puVar10), lVar5 != 0)) {
      iVar13 = (uint)(*puVar10 >> 5) * 4;
      uVar11 = 1 << (*puVar10 & 0x1f);
      if ((*(uint *)(iVar13 + iVar3) & uVar11) == 0) {
        puVar12 = (uint *)(DAT_0035f2e4 + iVar13);
        *puVar12 = *puVar12 | uVar11;
      }
    }
  }
  return;
}

