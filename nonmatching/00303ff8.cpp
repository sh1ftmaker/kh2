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

s32 FUN_00303b70(...) asm("func_00303b70");
s32 FUN_00303ff8(...) asm("func_00303ff8");

// Ghidra decompile of 0x00303ff8, wrapped mechanically (ad/fallback.py)

void FUN_00303ff8_impl(undefined8 param_1,int param_2,int param_3) asm("func_00303ff8");
void FUN_00303ff8_impl(undefined8 param_1,int param_2,int param_3) {
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  
  iVar16 = *(int *)(param_2 + 0x10);
  iVar15 = *(int *)(param_3 + 0x10);
  iVar12 = param_2;
  if (iVar16 < iVar15) {
    iVar16 = *(int *)(param_3 + 0x10);
    iVar15 = *(int *)(param_2 + 0x10);
    iVar12 = param_3;
    param_3 = param_2;
  }
  iVar14 = iVar16 + iVar15;
  iVar2 = FUN_00303b70(param_1,*(int *)(iVar12 + 4) + (uint)(*(int *)(iVar12 + 8) < iVar14));
  puVar17 = (uint *)(iVar2 + 0x14);
  if (puVar17 < puVar17 + iVar14) {
    *puVar17 = 0;
    puVar5 = puVar17;
    while (puVar5 = puVar5 + 1, puVar5 < puVar17 + iVar14) {
      *puVar5 = 0;
    }
  }
  puVar4 = (uint *)(param_3 + 0x14);
  puVar3 = (uint *)(iVar12 + 0x14);
  puVar13 = puVar4 + iVar15;
  puVar5 = puVar17;
  for (; puVar4 < puVar13; puVar4 = puVar4 + 1) {
    uVar9 = *puVar4;
    uVar11 = uVar9 & 0xffff;
    if (uVar11 != 0) {
      uVar9 = 0;
      puVar7 = puVar5;
      puVar6 = puVar3;
      do {
        uVar8 = *puVar6;
        uVar10 = *puVar7;
        puVar6 = puVar6 + 1;
        uVar9 = (uVar8 & 0xffff) * uVar11 + (uVar10 & 0xffff) + uVar9;
        *(short *)puVar7 = (short)uVar9;
        uVar9 = (uVar8 >> 0x10) * uVar11 + (uVar10 >> 0x10) + (uVar9 >> 0x10);
        *(short *)((int)puVar7 + 2) = (short)uVar9;
        uVar9 = uVar9 >> 0x10;
        puVar7 = puVar7 + 1;
      } while (puVar6 < puVar3 + iVar16);
      *puVar7 = uVar9;
      uVar9 = *puVar4;
    }
    uVar9 = uVar9 >> 0x10;
    if (uVar9 != 0) {
      uVar11 = *puVar5;
      uVar10 = 0;
      puVar7 = puVar5;
      puVar6 = puVar3;
      uVar8 = uVar11;
      do {
        uVar1 = *puVar6;
        *(short *)puVar7 = (short)uVar11;
        puVar6 = puVar6 + 1;
        uVar10 = (uVar1 & 0xffff) * uVar9 + (uVar8 >> 0x10) + uVar10;
        *(short *)((int)puVar7 + 2) = (short)uVar10;
        puVar7 = puVar7 + 1;
        uVar8 = *puVar7;
        uVar11 = (uVar1 >> 0x10) * uVar9 + (uVar8 & 0xffff) + (uVar10 >> 0x10);
        uVar10 = uVar11 >> 0x10;
      } while (puVar6 < puVar3 + iVar16);
      *puVar7 = uVar11;
    }
    puVar5 = puVar5 + 1;
  }
  if (0 < iVar14) {
    puVar17 = puVar17 + iVar14 + -1;
    if (*puVar17 != 0) {
      *(int *)(iVar2 + 0x10) = iVar14;
      return;
    }
    do {
      iVar14 = iVar14 + -1;
      if (iVar14 < 1) {
        *(int *)(iVar2 + 0x10) = iVar14;
        return;
      }
      puVar17 = puVar17 + -1;
    } while (*puVar17 == 0);
  }
  *(int *)(iVar2 + 0x10) = iVar14;
  return;
}

