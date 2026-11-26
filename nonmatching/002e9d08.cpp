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

s32 FUN_0016bba8(...) asm("func_0016bba8");
s32 FUN_0017ce10(...) asm("func_0017ce10");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190878(...) asm("func_00190878");
s32 FUN_001b9bc8(...) asm("func_001b9bc8");
s32 FUN_002e9a38(...) asm("func_002e9a38");
s32 FUN_002e9a78(...) asm("func_002e9a78");
s32 FUN_002e9c58(...) asm("func_002e9c58");
s32 FUN_002e9c98(...) asm("func_002e9c98");
s32 FUN_002e9d08(...) asm("_ZN2Ts15TARGET_SEARCHERclEPN2YS6TARGETERKN2kn7FVectorES7_bbb");
s32 FUN_002f8ad0(...) asm("func_002f8ad0");
s32 FUN_00313b80(...) asm("func_00313b80");
s32 FUN_003142e0(...) asm("func_003142e0");
extern u32 DAT_003760a8 asm("D_003760a8");
extern u32 LAB_002e9e44 asm("D_002e9e44");
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x002e9d08, wrapped mechanically (ad/fallback.py)

void FUN_002e9d08_impl(undefined8 param_1,undefined8 param_2,Q16 *param_3, undefined4 *param_4,char param_5,char param_6,char param_7) asm("_ZN2Ts15TARGET_SEARCHERclEPN2YS6TARGETERKN2kn7FVectorES7_bbb");
void FUN_002e9d08_impl(undefined8 param_1,undefined8 param_2,Q16 *param_3, undefined4 *param_4,char param_5,char param_6,char param_7) {
  float fVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 in_vc6;
  Q16 auVar12;
  Q16 auVar13;
  B12 auStack_b0;
  undefined4 uStack_a4;
  Q16 auStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  Q16 auStack_80;
  
  lVar6 = 0;
  uStack_a4 = 0;
  fVar11 = 0.0;
  FUN_00190128(param_2);
  iVar7 = (int)param_1;
  *(undefined1 *)(iVar7 + 5) = 0;
  do {
    do {
      lVar6 = FUN_001b9bc8(lVar6);
      if (lVar6 == 0) {
        if ((*(int *)param_2 != 0) && (param_7 != '\0')) {
          FUN_002e9c98(param_1,param_2);
        }
        return;
      }
      lVar2 = FUN_002e9a78(param_1,lVar6,*(undefined4 *)(iVar7 + 0xc));
    } while ((lVar2 == 0) ||
            ((((*(uint *)(iVar7 + 4) & 0x10000) != 0 &&
              ((*(uint *)((int)lVar6 + 0x108) & 0x8000) != 0)) ||
             (lVar2 = FUN_002e9c58(param_1,lVar6), fVar1 = DAT_003760a8, lVar2 == 0))));
    lVar2 = 0;
LAB_002e9e44:
    lVar2 = FUN_0016bba8(lVar6,3,lVar2);
  } while (lVar2 == 0);
  *(char *)(iVar7 + 5) = *(char *)(iVar7 + 5) + '\x01';
  if ((param_7 == '\0') || (lVar3 = FUN_002e9a38(param_1,lVar6,*(undefined1 *)lVar2), lVar3 == 0)) {
    FUN_0018a818(auStack_b0,lVar6,lVar2);
    auVar12 = _lqc2(auStack_a0);
    auVar13 = _lqc2(*param_3);
    auVar12 = _vsub(auVar12,auVar13);
    auStack_80 = _sqc2(auVar12);
    if (&uStack_90 != (undefined4 *)auStack_80) {
      uStack_90 = (*(u32*)((u8*)&auStack_80 + 0));
      uStack_8c = (*(u32*)((u8*)&auStack_80 + 4));
      uStack_88 = (*(u32*)((u8*)&auStack_80 + 8));
      uStack_84 = (*(u32*)((u8*)&auStack_80 + 12));
    }
    if (param_6 != '\0') {
      uStack_8c = 0;
    }
    (*(u32*)((u8*)&auVar12 + 4)) = uStack_8c;
    (*(u32*)((u8*)&auVar12 + 0)) = uStack_90;
    (*(u32*)((u8*)&auVar12 + 8)) = uStack_88;
    (*(u32*)((u8*)&auVar12 + 12)) = uStack_84;
    auVar12 = _lqc2(auVar12);
    auVar12 = _vmul(auVar12,auVar12);
    auVar12 = _vaddbc(auVar12,auVar12);
    auVar12 = _vaddbc(auVar12,auVar12);
    _vsqrt(auVar12);
    _vwaitq();
    uVar5 = _cfc2(in_vc6);
    fVar4 = (float)uVar5;
    if ((*(float *)(iVar7 + 0x10) <= fVar4) && (fVar4 <= *(float *)(iVar7 + 0x14))) {
      fVar10 = fVar4;
      if (*(float *)(iVar7 + 0x18) < fVar1) {
        fVar8 = (float)FUN_002f8ad0(*param_4,param_4[2]);
        fVar9 = (float)FUN_002f8ad0(uStack_90,uStack_88);
        fVar8 = (float)FUN_0017ce10(fVar8 - fVar9);
        uVar5 = FUN_00313b80(fVar8);
        lVar3 = FUN_003142e0(uVar5,0);
        if (lVar3 < 0) {
          fVar8 = -fVar8;
        }
        if (*(float *)(iVar7 + 0x18) <= fVar8) goto LAB_002e9e44;
      }
      if (param_5 == '\0') {
        fVar10 = -fVar4;
      }
      if ((*(int *)param_2 == 0) || (fVar10 < fVar11)) {
        FUN_00190878(param_2,lVar6,*(undefined1 *)lVar2);
        fVar11 = fVar10;
      }
    }
  }
  goto LAB_002e9e44;
}

