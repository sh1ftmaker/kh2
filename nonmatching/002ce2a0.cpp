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

s32 FUN_002cb890(...) asm("func_002cb890");
s32 FUN_002cd518(...) asm("func_002cd518");
s32 FUN_002cd770(...) asm("func_002cd770");
s32 FUN_002ce2a0(...) asm("_ZN2Ti4Path17search_near_pointERiRfRKN2kn7FVectorE");
extern u32 DAT_00375944 asm("D_00375944");
extern u32 DAT_00375948 asm("D_00375948");
extern u32 DAT_0037594c asm("D_0037594c");
extern u32 DAT_00375950 asm("D_00375950");
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x002ce2a0, wrapped mechanically (ad/fallback.py)

float FUN_002ce2a0_impl(undefined8 param_1,int *param_2,float *param_3,undefined8 param_4) asm("_ZN2Ti4Path17search_near_pointERiRfRKN2kn7FVectorE");
float FUN_002ce2a0_impl(undefined8 param_1,int *param_2,float *param_3,undefined8 param_4) {
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int *piStack_70;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar11 = 0;
  fVar15 = 0.0;
  iVar6 = (int)param_1;
  iVar7 = *(int *)(iVar6 + 8);
  fStack_80 = 0.0;
  piStack_70 = param_2;
  if (iVar7 == 2) {
    uVar4 = FUN_002cb890(param_1,0);
    uVar5 = FUN_002cb890(param_1,1);
    fVar15 = (float)FUN_002cd518(param_1,&fStack_80,param_4,uVar4,uVar5);
    *param_3 = fVar15;
    *piStack_70 = 0;
  }
  else {
    fVar14 = 0.0;
    iVar10 = iVar7 - (uint)(*(char *)(iVar6 + 0x10) == '\0');
    iVar9 = 0;
    if (0 < iVar10) {
      while( true ) {
        iVar8 = iVar9 + 1;
        if (iVar7 == 0) {
          trap(7);
        }
        uVar4 = FUN_002cb890(param_1,iVar9);
        uVar5 = FUN_002cb890(param_1,iVar8 % iVar7);
        fVar13 = (float)FUN_002cd518(param_1,&fStack_7c,param_4,uVar4,uVar5);
        if ((iVar9 == 0) || ((fVar14 <= fStack_7c && (fStack_7c < fStack_80)))) {
          fStack_80 = fStack_7c;
          fVar15 = fVar13;
          iVar11 = iVar9;
        }
        if (iVar10 <= iVar8) break;
        iVar7 = *(int *)(iVar6 + 8);
        iVar9 = iVar8;
      }
    }
    bVar1 = fVar15 <= DAT_00375944;
    *piStack_70 = iVar11;
    if ((bVar1) || (DAT_00375948 <= fVar15)) {
      *param_3 = fVar15;
    }
    else {
      fVar15 = 0.0;
      uVar4 = FUN_002cb890(param_1,iVar11);
      puVar2 = (undefined8 *)uVar4;
      if (*(int *)(iVar6 + 8) == 0) {
        trap(7);
      }
      fVar14 = DAT_0037594c;
      uVar5 = FUN_002cb890(param_1,(iVar11 + 1) % *(int *)(iVar6 + 8));
      puVar3 = (undefined8 *)uVar5;
      uStack_a8 = *(undefined4 *)(puVar2 + 1);
      uStack_a4 = *(undefined4 *)((int)puVar2 + 0xc);
      uStack_b0 = (undefined4)*puVar2;
      uStack_ac = (undefined4)((ulong)*puVar2 >> 0x20);
      uStack_98 = *(undefined4 *)(puVar3 + 1);
      uStack_94 = *(undefined4 *)((int)puVar3 + 0xc);
      uStack_a0 = (undefined4)*puVar3;
      uStack_9c = (undefined4)((ulong)*puVar3 >> 0x20);
      iVar7 = 0x20;
      fVar12 = fVar14 + 0.0;
      fVar13 = DAT_00375950;
      do {
        fVar12 = fVar12 * fVar13;
        FUN_002cd770(fVar12,auStack_90,param_1,uVar4,uVar5);
        FUN_002cd518(param_1,&fStack_78,param_4,&uStack_b0,auStack_90);
        FUN_002cd518(param_1,&fStack_74,param_4,auStack_90,&uStack_a0);
        if (fStack_78 < fStack_74) {
          fVar14 = fVar12;
          if (&uStack_a0 != auStack_90) {
            uStack_98 = uStack_88;
            uStack_94 = uStack_84;
            uStack_a0 = auStack_90[0];
            uStack_9c = auStack_90[1];
          }
        }
        else {
          fVar15 = fVar12;
          if (&uStack_b0 != auStack_90) {
            uStack_a8 = uStack_88;
            uStack_a4 = uStack_84;
            uStack_b0 = auStack_90[0];
            uStack_ac = auStack_90[1];
          }
        }
        iVar7 = iVar7 + -1;
        fVar12 = fVar15 + fVar14;
      } while (-1 < iVar7);
      *param_3 = fVar12 * DAT_00375950;
    }
  }
  return fStack_80;
}

