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

s32 FUN_00106a60(...) asm("func_00106a60");
s32 FUN_0016a5b0(...) asm("_ZN2YS3OBJ13_OVR_pre_execEv");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_0019ba60(...) asm("func_0019ba60");
s32 FUN_001c0cd8(...) asm("func_001c0cd8");
s32 FUN_001c0e60(...) asm("func_001c0e60");
extern u32 DAT_00349e10 asm("D_00349e10");
extern u32 DAT_0036c1a8 asm("D_0036c1a8");
extern u32 _DAT_003511d0 asm("D_003511d0");
extern u32 _DAT_003511e0 asm("D_003511e0");
extern u32 _DAT_003511f0 asm("D_003511f0");
extern u32 _DAT_00351200 asm("D_00351200");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_pextlw)
_GHIDRA_ANY(_pextuw)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vdiv)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vmulq)
_GHIDRA_ANY(_vopmsub)
_GHIDRA_ANY(_vopmula)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x0016a5b0, wrapped mechanically (ad/fallback.py)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016a5b0_impl(undefined8 param_1) asm("_ZN2YS3OBJ13_OVR_pre_execEv");
void FUN_0016a5b0_impl(undefined8 param_1) {
  Q16 auVar1;
  bool bVar2;
  Q16 auVar3;
  Q16 auVar4;
  B12 *pauVar5;
  long lVar6;
  int iVar7;
  Q16 *pauVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar12;
  Q16 auVar13;
  Q16 auVar14;
  Q16 auVar15;
  Q16 auVar16;
  Q16 auVar17;
  Q16 auVar18;
  Q16 auVar19;
  undefined4 uVar20;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  Q16 auStack_70;
  Q16 auStack_60;
  Q16 auStack_50;
  Q16 auStack_40;
  Q16 auStack_30;
  
  iVar7 = (int)param_1;
  uVar10 = *(uint *)(iVar7 + 0x160);
  if ((uVar10 & 0x40) == 0) {
    if (((uVar10 & 0x20) != 0) || (bVar2 = false, (uVar10 & 0x1000000) != 0)) {
      bVar2 = true;
    }
    if (bVar2) {
      uVar10 = *(uint *)(iVar7 + 0x108) | 0x800000;
    }
    else {
      uVar10 = *(uint *)(iVar7 + 0x108) & 0xff7fffff;
    }
    uVar9 = 0xfeffffff;
  }
  else {
    uVar9 = *(uint *)(iVar7 + 0x108);
    if ((uVar9 & 0x1000000) == 0) {
      uVar10 = *(uint *)(*(int *)(iVar7 + 0xc) + 8);
      if (((uVar10 & 1) != 0) || (bVar2 = false, (uVar10 & 2) != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        (*(B12*)((u8*)&auVar12 + 4)) = in_register_00004104;
        (*(u32*)((u8*)&auVar12 + 0)) = in_vf0w;
        (*(B12*)((u8*)&auVar13 + 4)) = in_register_00004104;
        (*(u32*)((u8*)&auVar13 + 0)) = in_vf0w;
        auVar12 = _vsub(auVar12,auVar13);
        auVar12 = _sqc2(auVar12);
        *(Q16 *)(iVar7 + 0x20) = auVar12;
        uVar9 = *(uint *)(iVar7 + 0x108);
      }
      uVar9 = uVar9 | 0x1000000;
      *(uint *)(iVar7 + 0x108) = uVar9;
    }
    uVar10 = 0xff7fffff;
  }
  *(uint *)(iVar7 + 0x108) = uVar10 & uVar9;
  lVar6 = FUN_001c0cd8(param_1);
  if (lVar6 == 0) {
    fVar11 = *(float *)(iVar7 + 0x9b0);
  }
  else if ((*(ushort *)(iVar7 + 0x576) & 1) == 0) {
    fVar11 = *(float *)(iVar7 + 0x9b0);
  }
  else {
    lVar6 = FUN_0019ba60(*(undefined4 *)(iVar7 + 0x570));
    if ((lVar6 == 0) || ((*(uint *)(*(int *)(iVar7 + 0x570) + 0x160) & 0x8000) == 0)) {
      FUN_001c0e60(param_1);
      fVar11 = *(float *)(iVar7 + 0x9b0);
    }
    else {
      fVar11 = *(float *)(iVar7 + 0x9b0);
    }
  }
  if (0.0 < fVar11) {
    uVar10 = *(uint *)(iVar7 + 0x160);
    if ((((uVar10 & 4) != 0) || ((uVar10 & 8) != 0)) || (bVar2 = false, (uVar10 & 0x10) != 0)) {
      bVar2 = true;
    }
    if (bVar2) {
      *(float *)(iVar7 + 0x9b0) = fVar11 - DAT_00349e10;
    }
    else {
      *(undefined4 *)(iVar7 + 0x9b0) = 0;
    }
  }
  (*(B12*)((u8*)&auVar14 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar14 + 0)) = in_vf0w;
  (*(B12*)((u8*)&auVar15 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar15 + 0)) = in_vf0w;
  auVar12 = _vsub(auVar14,auVar15);
  auVar12 = _sqc2(auVar12);
  *(Q16 *)(iVar7 + 0x10) = auVar12;
  if ((*(uint *)(iVar7 + 0x108) & 0x10) == 0) {
    (*(B12*)((u8*)&auVar16 + 4)) = in_register_00004104;
    (*(u32*)((u8*)&auVar16 + 0)) = in_vf0w;
    (*(B12*)((u8*)&auVar17 + 4)) = in_register_00004104;
    (*(u32*)((u8*)&auVar17 + 0)) = in_vf0w;
    auVar12 = _vsub(auVar16,auVar17);
    auVar12 = _sqc2(auVar12);
    *(Q16 *)(iVar7 + 0x560) = auVar12;
  }
  else {
    pauVar5 = (B12 *)FUN_0016c028(param_1);
    uStack_80 = *(undefined4 *)*pauVar5;
    uStack_7c = *(undefined4 *)(*pauVar5 + 4);
    uStack_78 = *(undefined4 *)(*pauVar5 + 8);
    (*(u32*)((u8*)&auVar19 + 12)) = DAT_0036c1a8;
    (*(B12*)((u8*)&auVar19 + 0)) = *pauVar5;
    auVar16 = _lqc2(auVar19);
    auVar12 = _lqc2(_DAT_003511d0);
    auVar13 = _lqc2(_DAT_003511e0);
    auVar14 = _lqc2(_DAT_003511f0);
    auVar15 = _lqc2(_DAT_00351200);
    _vmulabc(auVar12,auVar16);
    _vmaddabc(auVar13,auVar16);
    _vmaddabc(auVar14,auVar16);
    auVar12 = _vmaddbc(auVar15,auVar16);
    auStack_70 = _sqc2(auVar12);
    if (&uStack_80 != (undefined4 *)auStack_70) {
      uStack_80 = (*(u32*)((u8*)&auStack_70 + 0));
      uStack_7c = (*(u32*)((u8*)&auStack_70 + 4));
      uStack_78 = (*(u32*)((u8*)&auStack_70 + 8));
    }
    uStack_74 = DAT_0036c1a8;
    lVar6 = FUN_00106a60(1);
    pauVar8 = (Q16 *)((int)lVar6 + 0x10);
    if (lVar6 == 0) {
      pauVar8 = (Q16 *)0x0;
    }
    auVar12 = _lqc2(*pauVar8);
    auVar13 = _lqc2(pauVar8[1]);
    auVar14 = _lqc2(pauVar8[2]);
    auVar15 = _lqc2(pauVar8[3]);
    _vopmula(auVar13,auVar14);
    auVar16 = _vopmsub(auVar14,auVar13);
    _vopmula(auVar14,auVar12);
    auVar17 = _vopmsub(auVar12,auVar14);
    _vopmula(auVar12,auVar13);
    auVar18 = _vopmsub(auVar13,auVar12);
    auVar19 = _vmul(auVar12,auVar16);
    auVar12 = _vmul(auVar15,auVar16);
    auVar13 = _vmul(auVar15,auVar17);
    auVar14 = _vmul(auVar15,auVar18);
    auVar15 = _vaddbc(auVar19,auVar19);
    auVar12 = _vaddbc(auVar12,auVar12);
    auVar13 = _vaddbc(auVar13,auVar13);
    auVar14 = _vaddbc(auVar14,auVar14);
    auVar15 = _vaddbc(auVar15,auVar15);
    _vaddbc(auVar12,auVar12);
    _vaddbc(auVar13,auVar13);
    auVar19 = _vaddbc(auVar14,auVar14);
    (*(B12*)((u8*)&auVar1 + 4)) = in_register_00004104;
    (*(u32*)((u8*)&auVar1 + 0)) = in_vf0w;
    _vdiv(auVar1,0,auVar15,0);
    auVar12 = _qmfc2((*(u32*)((u8*)&auVar16 + 0)));
    auVar13 = _qmfc2((*(u32*)((u8*)&auVar17 + 0)));
    auVar14 = _qmfc2((*(u32*)((u8*)&auVar18 + 0)));
    auVar15 = _qmfc2(in_vf0w);
    auVar16 = _pextlw((*(u64*)((u8*)&auVar13 + 0)),(*(u64*)((u8*)&auVar12 + 0)));
    auVar17 = _pextuw(auVar13,auVar12);
    auVar13 = _pextlw((*(u64*)((u8*)&auVar15 + 0)),(*(u64*)((u8*)&auVar14 + 0)));
    auVar14 = _pextuw(auVar15,auVar14);
    auVar12 = _pcpyld(auVar13,auVar16);
    auVar13 = _pcpyud(auVar16,auVar13);
    auVar14 = _pcpyld(auVar14,auVar17);
    auVar12 = _qmtc2((*(u32*)((u8*)&auVar12 + 0)));
    auVar13 = _qmtc2((*(u32*)((u8*)&auVar13 + 0)));
    auVar14 = _qmtc2((*(u32*)((u8*)&auVar14 + 0)));
    (*(B12*)((u8*)&auVar18 + 4)) = in_register_00004104;
    (*(u32*)((u8*)&auVar18 + 0)) = in_vf0w;
    auVar15 = _vsub(auVar18,auVar19);
    uVar20 = _vwaitq();
    auVar12 = _vmulq(auVar12,uVar20);
    auVar13 = _vmulq(auVar13,uVar20);
    auVar14 = _vmulq(auVar14,uVar20);
    auVar15 = _vmulq(auVar15,uVar20);
    auStack_60 = _sqc2(auVar12);
    auStack_50 = _sqc2(auVar13);
    auStack_40 = _sqc2(auVar14);
    auStack_30 = _sqc2(auVar15);
    (*(u32*)((u8*)&auVar3 + 4)) = uStack_7c;
    (*(u32*)((u8*)&auVar3 + 0)) = uStack_80;
    (*(u32*)((u8*)&auVar3 + 8)) = uStack_78;
    (*(u32*)((u8*)&auVar3 + 12)) = uStack_74;
    auVar16 = _lqc2(auVar3);
    auVar12 = _lqc2(auStack_60);
    auVar13 = _lqc2(auStack_50);
    auVar14 = _lqc2(auStack_40);
    auVar15 = _lqc2(auStack_30);
    _vmulabc(auVar12,auVar16);
    _vmaddabc(auVar13,auVar16);
    _vmaddabc(auVar14,auVar16);
    auVar12 = _vmaddbc(auVar15,auVar16);
    auStack_70 = _sqc2(auVar12);
    if (&uStack_80 != (undefined4 *)auStack_70) {
      uStack_80 = (*(u32*)((u8*)&auStack_70 + 0));
      uStack_7c = (*(u32*)((u8*)&auStack_70 + 4));
      uStack_78 = (*(u32*)((u8*)&auStack_70 + 8));
      uStack_74 = (*(u32*)((u8*)&auStack_70 + 12));
    }
    pauVar8 = (Q16 *)FUN_0016c028(param_1);
    (*(u32*)((u8*)&auVar4 + 4)) = uStack_7c;
    (*(u32*)((u8*)&auVar4 + 0)) = uStack_80;
    (*(u32*)((u8*)&auVar4 + 8)) = uStack_78;
    (*(u32*)((u8*)&auVar4 + 12)) = uStack_74;
    auVar12 = _lqc2(auVar4);
    auVar13 = _lqc2(*pauVar8);
    auVar12 = _vsub(auVar12,auVar13);
    auVar12 = _sqc2(auVar12);
    if ((undefined4 *)(iVar7 + 0x560) != (undefined4 *)auStack_70) {
      (*(u32*)((u8*)&auStack_70 + 0)) = (*(u32*)((u8*)&auVar12 + 0));
      (*(u32*)((u8*)&auStack_70 + 4)) = (*(u32*)((u8*)&auVar12 + 4));
      (*(u32*)((u8*)&auStack_70 + 8)) = (*(u32*)((u8*)&auVar12 + 8));
      (*(u32*)((u8*)&auStack_70 + 12)) = (*(u32*)((u8*)&auVar12 + 12));
      *(undefined4 *)(iVar7 + 0x560) = (*(u32*)((u8*)&auStack_70 + 0));
      *(undefined4 *)(iVar7 + 0x564) = (*(u32*)((u8*)&auStack_70 + 4));
      *(undefined4 *)(iVar7 + 0x568) = (*(u32*)((u8*)&auStack_70 + 8));
      *(undefined4 *)(iVar7 + 0x56c) = (*(u32*)((u8*)&auStack_70 + 12));
    }
  }
  return;
}

