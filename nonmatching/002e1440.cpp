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

s32 FUN_002e10d0(...) asm("func_002e10d0");
s32 FUN_002e1440(...) asm("func_002e1440");
s32 FUN_002f8870(...) asm("func_002f8870");
s32 FUN_002f8a18(...) asm("func_002f8a18");
extern u32 DAT_00362d70 asm("D_00362d70");
extern u32 DAT_00375ee0 asm("D_00375ee0");
extern u32 DAT_00375ee4 asm("D_00375ee4");
extern u32 DAT_00375ee8 asm("D_00375ee8");
extern u32 DAT_00375eec asm("D_00375eec");
extern u32 DAT_00375ef0 asm("D_00375ef0");
_GHIDRA_ANY(CONCAT44)
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
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x002e1440, wrapped mechanically (ad/fallback.py)

void FUN_002e1440_impl(undefined8 param_1,Q16 *param_2,float *param_3,float *param_4) asm("func_002e1440");
void FUN_002e1440_impl(undefined8 param_1,Q16 *param_2,float *param_3,float *param_4) {
  Q16 auVar1;
  Q16 auVar2;
  Q16 auVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 auVar6;
  Q16 auVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar12;
  Q16 auVar13;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  Q16 auStack_50;
  Q16 auStack_40;
  
  FUN_002e10d0(&uStack_c0,param_1);
  (*(u32*)((u8*)&auStack_50 + 4)) = uStack_8c;
  (*(u32*)((u8*)&auStack_50 + 0)) = uStack_90;
  (*(u32*)((u8*)&auStack_50 + 8)) = uStack_88;
  (*(u32*)((u8*)&auStack_50 + 12)) = uStack_84;
  (*(u32*)((u8*)&auVar2 + 8)) = uStack_b8;
  (*(u64*)((u8*)&auVar2 + 0)) = CONCAT44(uStack_bc,uStack_c0);
  (*(u32*)((u8*)&auVar2 + 12)) = uStack_b4;
  (*(u32*)((u8*)&auVar7 + 8)) = uStack_a8;
  (*(u64*)((u8*)&auVar7 + 0)) = CONCAT44(uStack_ac,uStack_b0);
  (*(u32*)((u8*)&auVar7 + 12)) = uStack_a4;
  (*(u32*)((u8*)&auVar3 + 8)) = uStack_98;
  (*(u64*)((u8*)&auVar3 + 0)) = CONCAT44(uStack_9c,uStack_a0);
  (*(u32*)((u8*)&auVar3 + 12)) = uStack_94;
  auVar4 = _qmfc2(in_vf0w);
  auVar12 = _lqc2(auStack_50);
  auVar5 = _pextlw(CONCAT44(uStack_ac,uStack_b0),CONCAT44(uStack_bc,uStack_c0));
  auVar6 = _pextuw(auVar7,auVar2);
  auVar7 = _pextlw((*(u64*)((u8*)&auVar4 + 0)),CONCAT44(uStack_9c,uStack_a0));
  auVar4 = _pextuw(auVar4,auVar3);
  auVar2 = _pcpyld(auVar7,auVar5);
  auVar7 = _pcpyud(auVar5,auVar7);
  auVar3 = _pcpyld(auVar4,auVar6);
  uStack_80 = (*(u32*)((u8*)&auVar2 + 0));
  auVar4 = _qmtc2(uStack_80);
  uStack_70 = (*(u32*)((u8*)&auVar7 + 0));
  auVar5 = _qmtc2(uStack_70);
  uStack_60 = (*(u32*)((u8*)&auVar3 + 0));
  auVar6 = _qmtc2(uStack_60);
  _vmulabc(auVar4,auVar12);
  _vmaddabc(auVar5,auVar12);
  auVar5 = _vmaddbc(auVar6,auVar12);
  (*(B12*)((u8*)&auVar4 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar4 + 0)) = in_vf0w;
  auVar4 = _vsub(auVar4,auVar5);
  uStack_7c = (*(u32*)((u8*)&auVar2 + 4));
  uStack_78 = (*(u32*)((u8*)&auVar2 + 8));
  uStack_74 = (*(u32*)((u8*)&auVar2 + 12));
  uStack_6c = (*(u32*)((u8*)&auVar7 + 4));
  uStack_68 = (*(u32*)((u8*)&auVar7 + 8));
  uStack_64 = (*(u32*)((u8*)&auVar7 + 12));
  uStack_5c = (*(u32*)((u8*)&auVar3 + 4));
  uStack_58 = (*(u32*)((u8*)&auVar3 + 8));
  uStack_54 = (*(u32*)((u8*)&auVar3 + 12));
  auStack_50 = _sqc2(auVar4);
  *(undefined4 *)(*param_2 + 0xc) = DAT_00375ee0;
  auVar5 = _lqc2(*param_2);
  auVar4 = _lqc2(auVar2);
  auVar2 = _lqc2(auVar7);
  auVar7 = _lqc2(auVar3);
  auVar3 = _lqc2(auStack_50);
  _vmulabc(auVar4,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar4 = _vmaddbc(auVar3,auVar5);
  auStack_40 = _sqc2(auVar4);
  if (param_2 != &auStack_40) {
    *(undefined4 *)*param_2 = (*(u32*)((u8*)&auStack_40 + 0));
    *(undefined4 *)(*param_2 + 4) = (*(u32*)((u8*)&auStack_40 + 4));
    *(undefined4 *)(*param_2 + 8) = (*(u32*)((u8*)&auStack_40 + 8));
    *(undefined4 *)(*param_2 + 0xc) = (*(u32*)((u8*)&auStack_40 + 12));
  }
  fVar9 = (float)FUN_002f8a18(DAT_00362d70 * DAT_00375ee4 * DAT_00375ee8);
  fVar10 = (float)FUN_002f8870(*(undefined4 *)(*param_2 + 8));
  fVar9 = fVar9 * fVar10;
  fVar8 = (fVar9 * DAT_00375eec) / DAT_00375ef0;
  fVar10 = fVar8 - *param_4;
  if (fVar10 < *(float *)*param_2) {
    *(float *)*param_2 = fVar10;
    fVar11 = *param_3;
  }
  else {
    fVar11 = *param_3;
    fVar10 = *(float *)*param_2;
  }
  fVar11 = fVar11 - fVar8;
  if (fVar10 < fVar11) {
    *(float *)*param_2 = fVar11;
  }
  fVar10 = fVar9 - param_4[1];
  if (fVar10 < *(float *)(*param_2 + 4)) {
    *(float *)(*param_2 + 4) = fVar10;
    fVar8 = param_3[1];
  }
  else {
    fVar8 = param_3[1];
    fVar10 = *(float *)(*param_2 + 4);
  }
  if (fVar10 < fVar8 - fVar9) {
    *(float *)(*param_2 + 4) = fVar8 - fVar9;
  }
  auVar13 = _lqc2(*param_2);
  (*(u32*)((u8*)&auVar5 + 4)) = uStack_bc;
  (*(u32*)((u8*)&auVar5 + 0)) = uStack_c0;
  (*(u32*)((u8*)&auVar5 + 8)) = uStack_b8;
  (*(u32*)((u8*)&auVar5 + 12)) = uStack_b4;
  auVar4 = _lqc2(auVar5);
  (*(u32*)((u8*)&auVar6 + 4)) = uStack_ac;
  (*(u32*)((u8*)&auVar6 + 0)) = uStack_b0;
  (*(u32*)((u8*)&auVar6 + 8)) = uStack_a8;
  (*(u32*)((u8*)&auVar6 + 12)) = uStack_a4;
  auVar2 = _lqc2(auVar6);
  (*(u32*)((u8*)&auVar12 + 4)) = uStack_9c;
  (*(u32*)((u8*)&auVar12 + 0)) = uStack_a0;
  (*(u32*)((u8*)&auVar12 + 8)) = uStack_98;
  (*(u32*)((u8*)&auVar12 + 12)) = uStack_94;
  auVar7 = _lqc2(auVar12);
  (*(u32*)((u8*)&auVar1 + 4)) = uStack_8c;
  (*(u32*)((u8*)&auVar1 + 0)) = uStack_90;
  (*(u32*)((u8*)&auVar1 + 8)) = uStack_88;
  (*(u32*)((u8*)&auVar1 + 12)) = uStack_84;
  auVar3 = _lqc2(auVar1);
  _vmulabc(auVar4,auVar13);
  _vmaddabc(auVar2,auVar13);
  _vmaddabc(auVar7,auVar13);
  auVar4 = _vmaddbc(auVar3,auVar13);
  auVar4 = _sqc2(auVar4);
  if (param_2 != &auStack_40) {
    (*(u32*)((u8*)&auStack_40 + 0)) = (*(u32*)((u8*)&auVar4 + 0));
    (*(u32*)((u8*)&auStack_40 + 4)) = (*(u32*)((u8*)&auVar4 + 4));
    (*(u32*)((u8*)&auStack_40 + 8)) = (*(u32*)((u8*)&auVar4 + 8));
    (*(u32*)((u8*)&auStack_40 + 12)) = (*(u32*)((u8*)&auVar4 + 12));
    *(undefined4 *)*param_2 = (*(u32*)((u8*)&auStack_40 + 0));
    *(undefined4 *)(*param_2 + 4) = (*(u32*)((u8*)&auStack_40 + 4));
    *(undefined4 *)(*param_2 + 8) = (*(u32*)((u8*)&auStack_40 + 8));
    *(undefined4 *)(*param_2 + 0xc) = (*(u32*)((u8*)&auStack_40 + 12));
  }
  return;
}

