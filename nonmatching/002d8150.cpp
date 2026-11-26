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

s32 FUN_00143dd0(...) asm("func_00143dd0");
s32 FUN_002d8150(...) asm("_Z16ctarget_002d8150jjjj");
extern u32 DAT_00375bcc asm("D_00375bcc");
extern u32 DAT_00375bd0 asm("D_00375bd0");
extern u32 DAT_00375bd4 asm("D_00375bd4");
extern u32 DAT_00375bd8 asm("D_00375bd8");
extern u32 DAT_00375bdc asm("D_00375bdc");
extern u32 LAB_002d820c asm("D_002d820c");
_GHIDRA_ANY(SUB84)
_GHIDRA_ANY(ZEXT416)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)

// Ghidra decompile of 0x002d8150, wrapped mechanically (ad/fallback.py)

Q16 * FUN_002d8150_impl(uint param_1,Q16 *param_2,int param_3,float *param_4,undefined8 *param_5) asm("_Z16ctarget_002d8150jjjj");
Q16 * FUN_002d8150_impl(uint param_1,Q16 *param_2,int param_3,float *param_4,undefined8 *param_5) {
  Q16 *pauVar1;
  undefined8 uVar2;
  B12 auVar3;
  B12 auVar4;
  float fVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  Q16 auVar24;
  Q16 auVar25;
  Q16 auVar26;
  Q16 auVar27;
  Q16 auVar28;
  Q16 auStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  Q16 auStack_70;
  Q16 auStack_60;
  Q16 auStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar2 = *param_5;
  uVar7 = *(undefined4 *)(param_5 + 1);
  uVar8 = *(undefined4 *)((int)param_5 + 0xc);
  uVar9 = *(undefined4 *)(param_5 + 2);
  uVar10 = *(undefined4 *)((int)param_5 + 0x14);
  uVar11 = *(undefined4 *)(param_5 + 3);
  uVar12 = *(undefined4 *)((int)param_5 + 0x1c);
  uVar13 = *(undefined4 *)(param_5 + 4);
  uVar14 = *(undefined4 *)((int)param_5 + 0x24);
  uVar15 = *(undefined4 *)(param_5 + 5);
  uVar16 = *(undefined4 *)((int)param_5 + 0x2c);
  uVar17 = *(undefined4 *)(param_5 + 6);
  uVar18 = *(undefined4 *)((int)param_5 + 0x34);
  uVar19 = *(undefined4 *)(param_5 + 7);
  uVar20 = *(undefined4 *)((int)param_5 + 0x3c);
  *(int *)*param_2 = (int)uVar2;
  *(int *)(*param_2 + 4) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(*param_2 + 8) = uVar7;
  *(undefined4 *)(*param_2 + 0xc) = uVar8;
  *(undefined4 *)param_2[1] = uVar9;
  *(undefined4 *)(param_2[1] + 4) = uVar10;
  *(undefined4 *)(param_2[1] + 8) = uVar11;
  *(undefined4 *)(param_2[1] + 0xc) = uVar12;
  *(undefined4 *)param_2[2] = uVar13;
  *(undefined4 *)(param_2[2] + 4) = uVar14;
  *(undefined4 *)(param_2[2] + 8) = uVar15;
  *(undefined4 *)(param_2[2] + 0xc) = uVar16;
  *(undefined4 *)param_2[3] = uVar17;
  *(undefined4 *)(param_2[3] + 4) = uVar18;
  *(undefined4 *)(param_2[3] + 8) = uVar19;
  *(undefined4 *)(param_2[3] + 0xc) = uVar20;
  fVar5 = DAT_00375bcc;
  if (*(char *)(param_3 + 0xc1) != '\0') {
    *param_4 = 0.0;
    return param_2;
  }
  fVar23 = *(float *)(param_3 + 0x1d4);
  fVar21 = *(float *)(param_3 + 0x1d8) + DAT_00375bcc;
  if (fVar23 - DAT_00375bcc < fVar21) {
    fVar23 = (fVar23 + *(float *)(param_3 + 0x1d8)) * DAT_00375bd0;
  }
  else {
    fVar22 = *param_4;
    if (fVar22 < fVar21) {
      *param_4 = fVar21;
      fVar23 = *(float *)(param_3 + 0x1d4);
      fVar22 = fVar21;
    }
    fVar23 = fVar23 - fVar5;
    if (fVar22 <= fVar23) goto LAB_002d820c;
  }
  *param_4 = fVar23;
  fVar22 = fVar23;
LAB_002d820c:
  auStack_50 = ZEXT416((uint)fVar22);
  auVar28 = _lqc2(auStack_50);
  auVar24 = _lqc2(*param_2);
  auVar25 = _lqc2(param_2[1]);
  auVar26 = _lqc2(param_2[2]);
  auVar27 = _lqc2(param_2[3]);
  _vmulabc(auVar24,auVar28);
  _vmaddabc(auVar25,auVar28);
  _vmaddabc(auVar26,auVar28);
  auVar24 = _vmaddbc(auVar27,auVar28);
  auStack_60 = _sqc2(auVar24);
  auVar24 = _lqc2(param_2[3]);
  auVar25 = _lqc2(auStack_60);
  auVar24 = _vadd(auVar24,auVar25);
  auVar24 = _sqc2(auVar24);
  param_2[3] = auVar24;
  (*(u64*)((u8*)&auVar3 + 4)) = 0;
  (*(u32*)((u8*)&auVar3 + 0)) = DAT_00375bd8;
  (*(u32*)((u8*)&auVar24 + 12)) = DAT_00375bd4;
  (*(B12*)((u8*)&auVar24 + 0)) = auVar3 << 0x20;
  auVar28 = _lqc2(auVar24);
  auVar24 = _lqc2(*param_2);
  auVar25 = _lqc2(param_2[1]);
  auVar26 = _lqc2(param_2[2]);
  auVar27 = _lqc2(param_2[3]);
  _vmulabc(auVar24,auVar28);
  _vmaddabc(auVar25,auVar28);
  _vmaddabc(auVar26,auVar28);
  auVar24 = _vmaddbc(auVar27,auVar28);
  auVar24 = _sqc2(auVar24);
  if (&uStack_b0 != (undefined4 *)auStack_50) {
    (*(u32*)((u8*)&auStack_50 + 8)) = (*(u32*)((u8*)&auVar24 + 8));
    (*(u32*)((u8*)&auStack_50 + 12)) = (*(u32*)((u8*)&auVar24 + 12));
    uStack_b0 = (*(u32*)((u8*)&auVar24 + 0));
    uStack_ac = (*(u32*)((u8*)&auVar24 + 4));
    uStack_a8 = (*(u32*)((u8*)&auStack_50 + 8));
    uStack_a4 = (*(u32*)((u8*)&auStack_50 + 12));
  }
  uStack_38 = 0;
  uStack_34 = DAT_00375bd4;
  uStack_40 = 0;
  uStack_3c = DAT_00375bdc;
  (*(u64*)((u8*)&auVar4 + 4)) = 0;
  (*(u32*)((u8*)&auVar4 + 0)) = DAT_00375bdc;
  (*(u32*)((u8*)&auVar25 + 12)) = DAT_00375bd4;
  (*(B12*)((u8*)&auVar25 + 0)) = auVar4 << 0x20;
  auVar28 = _lqc2(auVar25);
  auVar24 = _lqc2(*param_2);
  auVar25 = _lqc2(param_2[1]);
  auVar26 = _lqc2(param_2[2]);
  auVar27 = _lqc2(param_2[3]);
  _vmulabc(auVar24,auVar28);
  _vmaddabc(auVar25,auVar28);
  _vmaddabc(auVar26,auVar28);
  auVar24 = _vmaddbc(auVar27,auVar28);
  auStack_50 = _sqc2(auVar24);
  if (&uStack_a0 != (undefined4 *)auStack_50) {
    uStack_a0 = (*(u32*)((u8*)&auStack_50 + 0));
    uStack_9c = (*(u32*)((u8*)&auStack_50 + 4));
    uStack_98 = (*(u32*)((u8*)&auStack_50 + 8));
    uStack_94 = (*(u32*)((u8*)&auStack_50 + 12));
  }
  if ((undefined4 *)auStack_50 != &uStack_b0) {
    (*(u32*)((u8*)&auStack_50 + 4)) = uStack_ac;
    (*(u32*)((u8*)&auStack_50 + 0)) = uStack_b0;
    (*(u32*)((u8*)&auStack_50 + 8)) = uStack_a8;
    (*(u32*)((u8*)&auStack_50 + 12)) = uStack_a4;
  }
  if (&uStack_40 != &uStack_a0) {
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    uStack_38 = uStack_98;
    uStack_34 = uStack_94;
  }
  if (&uStack_90 != (undefined4 *)auStack_50) {
    uStack_90 = (*(u32*)((u8*)&auStack_50 + 0));
    uStack_8c = (*(u32*)((u8*)&auStack_50 + 4));
    uStack_88 = (*(u32*)((u8*)&auStack_50 + 8));
    uStack_84 = (*(u32*)((u8*)&auStack_50 + 12));
  }
  if (&uStack_80 != &uStack_40) {
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    uStack_78 = uStack_38;
    uStack_74 = uStack_34;
  }
  lVar6 = FUN_00143dd0(&uStack_90,auStack_c0,auStack_70,1,0xf);
  if ((lVar6 != 0) && (param_2 + 3 != &auStack_c0)) {
    *(int *)param_2[3] = (int)(*(u64*)((u8*)&auStack_c0 + 0));
    *(int *)(param_2[3] + 4) = SUB84((*(u64*)((u8*)&auStack_c0 + 0)),4);
    *(undefined4 *)(param_2[3] + 8) = (*(u32*)((u8*)&auStack_c0 + 8));
    *(undefined4 *)(param_2[3] + 0xc) = (*(u32*)((u8*)&auStack_c0 + 12));
  }
  auVar28 = _lqc2(ZEXT416(param_1) << 0x20);
  auVar24 = _lqc2(*param_2);
  auVar25 = _lqc2(param_2[1]);
  auVar26 = _lqc2(param_2[2]);
  pauVar1 = param_2 + 3;
  auVar27 = _lqc2(*pauVar1);
  _vmulabc(auVar24,auVar28);
  _vmaddabc(auVar25,auVar28);
  _vmaddabc(auVar26,auVar28);
  auVar24 = _vmaddbc(auVar27,auVar28);
  auVar24 = _sqc2(auVar24);
  if (param_2 != (Q16 *)(param_3 + 0xd0)) {
    uVar2 = *(undefined8 *)*(Q16 *)(param_3 + 0xd0);
    uVar7 = *(undefined4 *)(param_3 + 0xd8);
    uVar8 = *(undefined4 *)(param_3 + 0xdc);
    *(int *)*param_2 = (int)uVar2;
    *(int *)(*param_2 + 4) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(*param_2 + 8) = uVar7;
    *(undefined4 *)(*param_2 + 0xc) = uVar8;
  }
  if (param_2 + 1 != (Q16 *)(param_3 + 0xe0)) {
    uVar2 = *(undefined8 *)*(Q16 *)(param_3 + 0xe0);
    uVar7 = *(undefined4 *)(param_3 + 0xe8);
    uVar8 = *(undefined4 *)(param_3 + 0xec);
    *(int *)param_2[1] = (int)uVar2;
    *(int *)(param_2[1] + 4) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(param_2[1] + 8) = uVar7;
    *(undefined4 *)(param_2[1] + 0xc) = uVar8;
  }
  if (param_2 + 2 != (Q16 *)(param_3 + 0xf0)) {
    uVar2 = *(undefined8 *)*(Q16 *)(param_3 + 0xf0);
    uVar7 = *(undefined4 *)(param_3 + 0xf8);
    uVar8 = *(undefined4 *)(param_3 + 0xfc);
    *(int *)param_2[2] = (int)uVar2;
    *(int *)(param_2[2] + 4) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(param_2[2] + 8) = uVar7;
    *(undefined4 *)(param_2[2] + 0xc) = uVar8;
  }
  auVar25 = _lqc2(*pauVar1);
  auVar24 = _lqc2(auVar24);
  auVar24 = _vadd(auVar25,auVar24);
  auVar24 = _sqc2(auVar24);
  *pauVar1 = auVar24;
  return param_2;
}

