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

s32 FUN_00257070(...) asm("func_00257070");
s32 FUN_0026b008(...) asm("_ZN2Tz7CmEquip22CheckAutoReplenishmentEv");
s32 FUN_00281180(...) asm("func_00281180");
extern u32 DAT_0035f010 asm("D_0035f010");

// Ghidra decompile of 0x0026b008, wrapped mechanically (ad/fallback.py)

void FUN_0026b008_impl(void) asm("_ZN2Tz7CmEquip22CheckAutoReplenishmentEv");
void FUN_0026b008_impl(void) {
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint auStack_30 [8];
  
  puVar11 = auStack_30;
  puVar10 = auStack_30;
  uVar2 = FUN_00257070(1);
  iVar3 = FUN_00281180(DAT_0035f010,uVar2);
  iVar3 = *(int *)(iVar3 + 0x244);
  uVar4 = (uint)*(byte *)(iVar3 + 0x12);
  iVar5 = 0;
  uVar8 = uVar4;
  if (uVar4 != 0) {
    do {
      *puVar11 = 0;
      uVar8 = uVar8 - 1;
      puVar11 = puVar11 + 1;
    } while (uVar8 != 0);
    iVar5 = 0;
    if (uVar4 != 0) {
      puVar9 = (ushort *)(iVar3 + 0x44);
      uVar1 = *puVar9;
      uVar8 = uVar4;
      while( true ) {
        puVar9 = puVar9 + 1;
        if (uVar1 != 0) {
          *puVar10 = (uint)uVar1;
          iVar5 = iVar5 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) break;
        uVar1 = *puVar9;
      }
    }
  }
  iVar6 = 0;
  if (uVar4 != 0) {
    do {
      iVar7 = 0;
      if (0 < iVar5) {
        puVar10 = auStack_30;
        do {
          if ((uint)*(ushort *)(iVar3 + 0x34) == *puVar10) {
            *(short *)(iVar3 + 0x44) = (short)*puVar10;
            break;
          }
          iVar7 = iVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar7 < iVar5);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 2;
    } while (iVar6 < (int)uVar4);
  }
  return;
}

