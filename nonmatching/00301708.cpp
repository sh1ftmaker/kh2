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

s32 FUN_00301708(...) asm("func_00301708");
s32 FUN_00304468(...) asm("func_00304468");
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x00301708, wrapped mechanically (ad/fallback.py)

int FUN_00301708_impl(undefined8 param_1,int param_2) asm("func_00301708");
int FUN_00301708_impl(undefined8 param_1,int param_2) {
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  
  iVar15 = 0;
  iVar4 = (int)param_1;
  if (*(int *)(param_2 + 0x10) <= *(int *)(iVar4 + 0x10)) {
    iVar13 = *(int *)(param_2 + 0x10) + -1;
    puVar6 = (uint *)(param_2 + 0x14);
    puVar14 = (uint *)(iVar4 + 0x14);
    puVar12 = puVar6 + iVar13;
    puVar5 = puVar14 + iVar13;
    uVar1 = *puVar5;
    iVar15 = (int)uVar1 / (int)(*puVar12 + 1);
    if (*puVar12 + 1 == 0) {
      trap(7);
    }
    if (iVar15 != 0) {
      iVar10 = 0;
      uVar11 = 0;
      puVar7 = puVar6;
      puVar8 = puVar14;
      do {
        uVar9 = *puVar7;
        uVar2 = *puVar8;
        puVar7 = puVar7 + 1;
        uVar11 = (uVar9 & 0xffff) * iVar15 + uVar11;
        uVar9 = (uVar9 >> 0x10) * iVar15 + (uVar11 >> 0x10);
        iVar10 = ((uVar2 & 0xffff) - (uVar11 & 0xffff)) + iVar10;
        *(short *)puVar8 = (short)iVar10;
        iVar10 = ((uVar2 >> 0x10) - (uVar9 & 0xffff)) + (iVar10 >> 0x10);
        uVar11 = uVar9 >> 0x10;
        *(short *)((int)puVar8 + 2) = (short)iVar10;
        iVar10 = iVar10 >> 0x10;
        puVar8 = puVar8 + 1;
      } while (puVar7 <= puVar12);
      if (uVar1 == 0) {
        if (puVar14 < puVar5 + -1) {
          if (puVar5[-1] == 0) {
            puVar5 = puVar5 + -2;
            do {
              iVar13 = iVar13 + -1;
              if (puVar5 <= puVar14) break;
              uVar1 = *puVar5;
              puVar5 = puVar5 + -1;
            } while (uVar1 == 0);
            *(int *)(iVar4 + 0x10) = iVar13;
          }
          else {
            *(int *)(iVar4 + 0x10) = iVar13;
          }
        }
        else {
          *(int *)(iVar4 + 0x10) = iVar13;
        }
      }
    }
    lVar3 = FUN_00304468(param_1);
    if (-1 < lVar3) {
      iVar15 = iVar15 + 1;
      iVar10 = 0;
      puVar5 = puVar14;
      do {
        uVar1 = *puVar6;
        uVar11 = *puVar5;
        puVar6 = puVar6 + 1;
        iVar10 = ((uVar11 & 0xffff) - (uVar1 & 0xffff)) + iVar10;
        *(short *)puVar5 = (short)iVar10;
        iVar10 = ((uVar11 >> 0x10) - (uVar1 >> 0x10)) + (iVar10 >> 0x10);
        *(short *)((int)puVar5 + 2) = (short)iVar10;
        iVar10 = iVar10 >> 0x10;
        puVar5 = puVar5 + 1;
      } while (puVar6 <= puVar12);
      puVar5 = puVar14 + iVar13;
      if (*puVar5 == 0) {
        if (puVar14 < puVar5 + -1) {
          if (puVar5[-1] == 0) {
            for (puVar5 = puVar5 + -2; (iVar13 = iVar13 + -1, puVar14 < puVar5 && (*puVar5 == 0));
                puVar5 = puVar5 + -1) {
            }
            *(int *)(iVar4 + 0x10) = iVar13;
          }
          else {
            *(int *)(iVar4 + 0x10) = iVar13;
          }
        }
        else {
          *(int *)(iVar4 + 0x10) = iVar13;
        }
      }
    }
  }
  return iVar15;
}

