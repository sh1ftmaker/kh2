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

s32 FUN_0010eed8(...) asm("func_0010eed8");
s32 FUN_0010eee8(...) asm("func_0010eee8");
s32 FUN_0010ef28(...) asm("func_0010ef28");
s32 FUN_0010f648(...) asm("func_0010f648");
s32 FUN_0010f8d0(...) asm("func_0010f8d0");
s32 FUN_0010fb10(...) asm("_ZN2kn6Friend15emergencyActionEv");
s32 FUN_001137e0(...) asm("func_001137e0");
s32 FUN_001137e8(...) asm("func_001137e8");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_001a1de0(...) asm("func_001a1de0");
extern u32 DAT_003a9290 asm("D_003a9290");
extern u32 DAT_003a9298 asm("D_003a9298");
extern u32 DAT_003a929c asm("D_003a929c");
extern u32 DAT_003a92b0 asm("D_003a92b0");
extern u32 LAB_0010fd1c asm("D_0010fd1c");

// Ghidra decompile of 0x0010fb10, wrapped mechanically (ad/fallback.py)

undefined4 FUN_0010fb10_impl(undefined8 param_1) asm("_ZN2kn6Friend15emergencyActionEv");
undefined4 FUN_0010fb10_impl(undefined8 param_1) {
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint *puStack_54;
  
  iVar3 = (int)param_1;
  if ((*(int *)(iVar3 + 0xce4) != 0) && (lVar2 = FUN_0010f8d0(), lVar2 == 0)) {
    uStack_5c = *(undefined4 *)(iVar3 + 0xc60);
    uStack_58 = *(undefined4 *)(iVar3 + 0xc64);
    *(uint *)(iVar3 + 0xb7c) = *(uint *)(iVar3 + 0xb7c) | 0x20;
    FUN_0010eee8(param_1);
    *(undefined4 *)(iVar3 + 0xce8) = 0;
    iVar1 = FUN_001137e0(*(undefined4 *)(iVar3 + 0xb60));
    puStack_54 = (uint *)FUN_001137e8(*(undefined4 *)(iVar3 + 0xb60));
    if (DAT_003a9290 == '\0') {
      iVar11 = 0x1f;
      puVar4 = (undefined4 *)&DAT_003a929c;
      puVar8 = &DAT_003a9298;
      do {
        iVar11 = iVar11 + -1;
        FUN_00190128(puVar4);
        puVar4 = puVar8 + 8;
        puVar8 = puVar8 + 7;
      } while (iVar11 != -1);
      DAT_003a9290 = '\x01';
    }
    iVar11 = 0;
    FUN_00190128(&uStack_80);
    do {
      iVar6 = 0;
      iVar13 = 0;
      if (0 < iVar1) {
        puVar8 = &DAT_003a9298;
        iVar14 = 0;
        puVar10 = puStack_54;
        puVar12 = puStack_54;
        do {
          if (puVar12[1] != 0) {
            if (iVar11 == 0) {
              if ((*puVar12 & 0x10) == 0) goto LAB_0010fd1c;
              uVar9 = puVar12[4];
            }
            else if (iVar11 == 1) {
              if ((*puVar12 & 0x20) == 0) goto LAB_0010fd1c;
              uVar9 = puVar12[4];
            }
            else {
              uVar9 = puVar12[4];
            }
            if ((((uVar9 == 0) || (*(int *)(uVar9 + 8) < 1)) || (*(int *)(iVar3 + 0x48c) == 0)) ||
               (lVar2 = FUN_001a1de0(), lVar2 == 0)) {
              FUN_00190128(&uStack_80);
              if ((puVar10[2] & 1) == 0) {
                pcVar7 = (code *)puVar10[1];
                iVar5 = *(int *)(iVar3 + 0xb60);
              }
              else {
                iVar5 = *(int *)(iVar3 + 0xb60);
                pcVar7 = *(code **)((puVar10[1] & 0xfffffffc) +
                                   *(int *)(iVar5 + ((int)puVar10[2] >> 1)));
              }
              lVar2 = (*pcVar7)(iVar5 + ((int)puVar10[2] >> 1),puVar10,&uStack_80,&uStack_60,1);
              if ((lVar2 != 0) && (iVar13 < 0x20)) {
                *puVar8 = puVar10;
                iVar13 = iVar13 + 1;
                *(undefined4 *)(&DAT_003a929c + iVar14) = uStack_80;
                *(undefined4 *)(iVar14 + 0x3a92ac) = uStack_70;
                *(undefined4 *)(iVar14 + 0x3a92a0) = uStack_7c;
                *(undefined4 *)(iVar14 + 0x3a92a4) = uStack_78;
                *(undefined4 *)(iVar14 + 0x3a92a8) = uStack_74;
                puVar8[6] = uStack_60;
                puVar8 = puVar8 + 7;
                iVar14 = iVar14 + 0x1c;
              }
            }
          }
LAB_0010fd1c:
          iVar6 = iVar6 + 1;
          puVar12 = puVar12 + 9;
          puVar10 = puVar10 + 9;
        } while (iVar6 < iVar1);
      }
      if (0 < iVar13) {
        iVar1 = FUN_0010f648(iVar13);
        puVar10 = (uint *)(&DAT_003a9298)[iVar1 * 7];
        iVar11 = (int)puVar10[2] >> 1;
        if ((puVar10[2] & 1) == 0) {
          pcVar7 = (code *)puVar10[1];
          iVar6 = *(int *)(iVar3 + 0xb60);
        }
        else {
          iVar6 = *(int *)(iVar3 + 0xb60);
          pcVar7 = *(code **)((puVar10[1] & 0xfffffffc) + *(int *)(iVar6 + iVar11));
        }
        (*pcVar7)(iVar6 + iVar11,puVar10,&DAT_003a929c + iVar1 * 0x1c,&DAT_003a92b0 + iVar1 * 7,0);
        if ((*puVar10 & 1) == 0) {
          FUN_0010ef28(param_1,puVar10);
          *(int *)(iVar3 + 0xce8) = *(int *)(iVar3 + 0xce8) + 1;
        }
        else {
          *(undefined4 *)(iVar3 + 0xce8) = 0;
        }
        FUN_0010eed8(param_1,puVar10,(&DAT_003a92b0)[iVar1 * 7]);
        return 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 2);
    *(undefined4 *)(iVar3 + 0xc64) = uStack_58;
    *(undefined4 *)(iVar3 + 0xc60) = uStack_5c;
  }
  return 0;
}

