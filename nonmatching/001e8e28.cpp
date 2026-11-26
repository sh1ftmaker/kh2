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

s32 FUN_001e8e28(...) asm("func_001e8e28");
extern u32 DAT_01d9e6e0 asm("D_01d9e6e0");
extern u32 DAT_01d9e6e8 asm("D_01d9e6e8");
extern u32 DAT_01d9ea9c asm("D_01d9ea9c");
extern u32 LAB_001e8efc asm("D_001e8efc");
extern undefined *PTR_LAB_00354bb0 asm("D_00354bb0");

// Ghidra decompile of 0x001e8e28, wrapped mechanically (ad/fallback.py)

void FUN_001e8e28_impl(undefined8 param_1,undefined8 param_2) asm("func_001e8e28");
void FUN_001e8e28_impl(undefined8 param_1,undefined8 param_2) {
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  code *pcVar5;
  undefined **ppuVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  iVar3 = (int)param_2;
  iVar8 = **(int **)(iVar3 + 8);
  piVar11 = (int *)(iVar3 + *(int *)(iVar8 + 0x20));
  sVar7 = *(short *)(iVar8 + 0x26);
  iVar12 = 0;
  iVar10 = iVar8;
  DAT_01d9e6e8 = iVar3;
  if (0 < sVar7) {
    do {
      iVar1 = *(int *)(iVar10 + 0x28);
      if (iVar1 != 0) {
        piVar9 = (int *)(*piVar11 + (uint)*(ushort *)(iVar10 + 0x2c));
        if (*piVar9 == *(int *)(iVar3 + 0xc)) {
          *piVar11 = (int)piVar9;
          pcVar5 = *(code **)(iVar1 + 4);
        }
        else {
          pcVar5 = *(code **)(iVar1 + 4);
          piVar9 = (int *)*piVar11;
        }
        piVar11 = piVar11 + 1;
        if (pcVar5 != (code *)0x0) {
          ppuVar6 = &PTR_LAB_00354bb0;
          bVar4 = false;
          pcVar2 = (code *)PTR_LAB_00354bb0;
          while (pcVar2 != (code *)0x0) {
            if (pcVar5 == pcVar2) {
              bVar4 = true;
              break;
            }
            ppuVar6 = ppuVar6 + 1;
            pcVar2 = (code *)*ppuVar6;
          }
          if (bVar4) {
            sVar7 = *(short *)(iVar8 + 0x26);
            goto LAB_001e8efc;
          }
          (*pcVar5)(param_2,piVar9,iVar10 + 0x28);
        }
        sVar7 = *(short *)(iVar8 + 0x26);
      }
LAB_001e8efc:
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar12 < sVar7);
  }
  if (((DAT_01d9ea9c == 0) && ((*(ulong *)(DAT_01d9e6e0 + 0xa8) & 0xff0000ff00) == 0)) &&
     (iVar8 = *(int *)(iVar3 + 0xc) + 0x1000, *(int *)(iVar3 + 0xc) = iVar8, 0x6fffffff < iVar8)) {
    *(undefined4 *)(iVar3 + 0xc) = 0x6ffff000;
  }
  return;
}

