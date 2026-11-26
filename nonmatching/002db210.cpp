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

s32 FUN_001064a8(...) asm("func_001064a8");
s32 FUN_0016b0a0(...) asm("func_0016b0a0");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_0017f540(...) asm("func_0017f540");
s32 FUN_0019ba60(...) asm("func_0019ba60");
s32 FUN_001c0cd8(...) asm("func_001c0cd8");
s32 FUN_001c0e60(...) asm("func_001c0e60");
s32 FUN_002cf280(...) asm("func_002cf280");
s32 FUN_002d73f0(...) asm("func_002d73f0");
s32 FUN_002d8110(...) asm("func_002d8110");
s32 FUN_002d9208(...) asm("func_002d9208");
s32 FUN_002db210(...) asm("_ZN2Ti18MGHachimitsuGopher8separateEv");
s32 FUN_002f87c0(...) asm("func_002f87c0");
s32 FUN_002f8960(...) asm("func_002f8960");
extern u32 DAT_0034e948 asm("D_0034e948");
extern u32 DAT_00361f60 asm("D_00361f60");
extern u32 DAT_00375d1c asm("D_00375d1c");
_GHIDRA_ANY(SUB128)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_pextlw)
_GHIDRA_ANY(_pextuw)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vmulbc)
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x002db210, wrapped mechanically (ad/fallback.py)

void FUN_002db210_impl(undefined8 param_1) asm("_ZN2Ti18MGHachimitsuGopher8separateEv");
void FUN_002db210_impl(undefined8 param_1) {
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Q16 *pauVar5;
  int iVar6;
  undefined4 *puVar7;
  Q16 auVar8;
  Q16 auVar9;
  Q16 auVar10;
  Q16 auVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar16;
  Q16 auVar17;
  Q16 auStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Q16 auStack_60;
  Q16 auStack_50;
  
  FUN_001c0e60();
  iVar12 = (int)param_1;
  FUN_002cf280(iVar12 + 0xaf0,1,0);
  if ((*(int *)(iVar12 + 0xb14) != 0) && (lVar2 = FUN_0019ba60(), lVar2 != 0)) {
    lVar2 = FUN_001c0cd8(*(undefined4 *)(iVar12 + 0xb14));
    if (lVar2 == 0) {
      piVar1 = *(int **)(iVar12 + 0xb14);
    }
    else {
      FUN_001c0e60(*(undefined4 *)(iVar12 + 0xb14));
      piVar1 = *(int **)(iVar12 + 0xb14);
    }
    (**(code **)(*piVar1 + 0x20))();
  }
  uVar4 = DAT_00361f60;
  FUN_0017f540(0,0,iVar12 + 0x140,0x97);
  if (*(int *)(iVar12 + 0xb1c) == 0) {
    pauVar5 = (Q16 *)FUN_002d8110(uVar4);
    auVar8 = _qmfc2(in_vf0w);
    auVar17 = _lqc2(pauVar5[3]);
    auVar9 = _pextlw(*(undefined8 *)pauVar5[1],SUB128(*(B12 *)*pauVar5,0));
    auVar10 = _pextuw(pauVar5[1],*pauVar5);
    auVar11 = _pextlw((*(u64*)((u8*)&auVar8 + 0)),*(undefined8 *)pauVar5[2]);
    auVar8 = _pextuw(auVar8,pauVar5[2]);
    auStack_90 = _pcpyld(auVar11,auVar9);
    auVar9 = _pcpyud(auVar9,auVar11);
    auVar10 = _pcpyld(auVar8,auVar10);
    auVar8 = _qmtc2((*(u32*)((u8*)&auStack_90 + 0)));
    uStack_80 = (*(u32*)((u8*)&auVar9 + 0));
    auVar11 = _qmtc2(uStack_80);
    uStack_70 = (*(u32*)((u8*)&auVar10 + 0));
    auVar16 = _qmtc2(uStack_70);
    _vmulabc(auVar8,auVar17);
    _vmaddabc(auVar11,auVar17);
    auVar11 = _vmaddbc(auVar16,auVar17);
    (*(B12*)((u8*)&auVar8 + 4)) = in_register_00004104;
    (*(u32*)((u8*)&auVar8 + 0)) = in_vf0w;
    auVar8 = _vsub(auVar8,auVar11);
    uStack_7c = (*(u32*)((u8*)&auVar9 + 4));
    uStack_78 = (*(u32*)((u8*)&auVar9 + 8));
    uStack_74 = (*(u32*)((u8*)&auVar9 + 12));
    uStack_6c = (*(u32*)((u8*)&auVar10 + 4));
    uStack_68 = (*(u32*)((u8*)&auVar10 + 8));
    uStack_64 = (*(u32*)((u8*)&auVar10 + 12));
    auStack_60 = _sqc2(auVar8);
    pauVar5 = (Q16 *)FUN_0016c028(param_1);
    auVar16 = _lqc2(*pauVar5);
    auVar8 = _lqc2(auStack_90);
    (*(u32*)((u8*)&auVar9 + 4)) = uStack_7c;
    (*(u32*)((u8*)&auVar9 + 0)) = uStack_80;
    (*(u32*)((u8*)&auVar9 + 8)) = uStack_78;
    (*(u32*)((u8*)&auVar9 + 12)) = uStack_74;
    auVar9 = _lqc2(auVar9);
    (*(u32*)((u8*)&auVar10 + 4)) = uStack_6c;
    (*(u32*)((u8*)&auVar10 + 0)) = uStack_70;
    (*(u32*)((u8*)&auVar10 + 8)) = uStack_68;
    (*(u32*)((u8*)&auVar10 + 12)) = uStack_64;
    auVar10 = _lqc2(auVar10);
    auVar11 = _lqc2(auStack_60);
    _vmulabc(auVar8,auVar16);
    _vmaddabc(auVar9,auVar16);
    _vmaddabc(auVar10,auVar16);
    auVar8 = _vmaddbc(auVar11,auVar16);
    auStack_50 = _sqc2(auVar8);
    if ((undefined4 *)(iVar12 + 0xb40) != (undefined4 *)auStack_50) {
      *(undefined4 *)(iVar12 + 0xb40) = (*(u32*)((u8*)&auStack_50 + 0));
      *(undefined4 *)(iVar12 + 0xb44) = (*(u32*)((u8*)&auStack_50 + 4));
      *(undefined4 *)(iVar12 + 0xb48) = (*(u32*)((u8*)&auStack_50 + 8));
      *(undefined4 *)(iVar12 + 0xb4c) = (*(u32*)((u8*)&auStack_50 + 12));
    }
  }
  else {
    puVar7 = (undefined4 *)FUN_0016b0a0(DAT_0034e948);
    if ((undefined4 *)(iVar12 + 0xb50) != puVar7) {
      uVar13 = puVar7[1];
      uVar14 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)(iVar12 + 0xb50) = *puVar7;
      *(undefined4 *)(iVar12 + 0xb54) = uVar13;
      *(undefined4 *)(iVar12 + 0xb58) = uVar14;
      *(undefined4 *)(iVar12 + 0xb5c) = uVar3;
    }
    puVar7 = (undefined4 *)FUN_0016c028(param_1);
    if ((undefined4 *)(iVar12 + 0xb40) != puVar7) {
      uVar13 = puVar7[1];
      uVar14 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)(iVar12 + 0xb40) = *puVar7;
      *(undefined4 *)(iVar12 + 0xb44) = uVar13;
      *(undefined4 *)(iVar12 + 0xb48) = uVar14;
      *(undefined4 *)(iVar12 + 0xb4c) = uVar3;
    }
  }
  lVar2 = FUN_001064a8(2);
  if (lVar2 == 0) {
    iVar6 = FUN_002d73f0(uVar4);
    fVar15 = DAT_00375d1c - *(float *)(iVar6 + 0x2c);
  }
  else {
    iVar6 = FUN_002d73f0(uVar4);
    fVar15 = *(float *)(iVar6 + 0x3c);
  }
  iVar6 = FUN_002d73f0(uVar4);
  uVar14 = *(undefined4 *)(iVar6 + 0x38);
  uVar13 = FUN_002f87c0(fVar15);
  uStack_7c = FUN_002f8960(fVar15);
  uStack_74 = 0;
  uStack_78 = 0;
  (*(u32*)((u8*)&auVar11 + 4)) = uStack_7c;
  (*(u32*)((u8*)&auVar11 + 0)) = uVar13;
  (*(u64*)((u8*)&auVar11 + 8)) = 0;
  auVar8 = _lqc2(auVar11);
  auVar9 = _qmtc2(uVar14);
  auVar8 = _vmulbc(auVar8,auVar9);
  auStack_90 = _sqc2(auVar8);
  if ((undefined4 *)(iVar12 + 0xb20) != (undefined4 *)auStack_90) {
    *(undefined4 *)(iVar12 + 0xb20) = (*(u32*)((u8*)&auStack_90 + 0));
    *(undefined4 *)(iVar12 + 0xb24) = (*(u32*)((u8*)&auStack_90 + 4));
    *(undefined4 *)(iVar12 + 0xb28) = (*(u32*)((u8*)&auStack_90 + 8));
    *(undefined4 *)(iVar12 + 0xb2c) = (*(u32*)((u8*)&auStack_90 + 12));
  }
  (*(B12*)((u8*)&auVar16 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar16 + 0)) = in_vf0w;
  (*(B12*)((u8*)&auVar17 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar17 + 0)) = in_vf0w;
  auVar8 = _vsub(auVar16,auVar17);
  auVar8 = _sqc2(auVar8);
  *(Q16 *)(iVar12 + 0xb30) = auVar8;
  *(undefined1 *)(iVar12 + 0xb18) = 1;
  uStack_80 = uVar13;
  FUN_002d9208(uVar4,0);
  return;
}

