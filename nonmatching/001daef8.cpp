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

s32 FUN_0011b6a8(...) asm("func_0011b6a8");
s32 FUN_0011b720(...) asm("func_0011b720");
s32 FUN_001daef8(...) asm("func_001daef8");
extern u32 DAT_0036e798 asm("D_0036e798");
extern undefined *PTR_LAB_00352a20 asm("D_00352a20");
_GHIDRA_ANY(SUB168)
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

// Ghidra decompile of 0x001daef8, wrapped mechanically (ad/fallback.py)

void FUN_001daef8_impl(undefined4 *param_1,int param_2) asm("func_001daef8");
void FUN_001daef8_impl(undefined4 *param_1,int param_2) {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  Q16 *pauVar14;
  Q16 auVar15;
  Q16 auVar16;
  Q16 auVar17;
  Q16 auVar18;
  Q16 auVar19;
  Q16 *pauVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar23;
  Q16 auVar24;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *param_1 = &PTR_LAB_00352a20;
  pauVar20 = (Q16 *)(param_1 + 4);
  uVar21 = *(undefined4 *)(param_2 + 0x18);
  uVar22 = *(undefined4 *)(param_2 + 0x10);
  uStack_24 = 0;
  param_1[0x15] = *(undefined4 *)(param_2 + 0x14);
  param_1[0x16] = uVar21;
  param_1[0x17] = 0;
  param_1[0x14] = uVar22;
  param_1[0x1a] = 0;
  param_1[0x1b] = param_2;
  uStack_30 = *(undefined4 *)(param_2 + 4);
  uStack_2c = *(undefined4 *)(param_2 + 8);
  uStack_28 = *(undefined4 *)(param_2 + 0xc);
  FUN_0011b6a8(pauVar20);
  pauVar14 = (Q16 *)FUN_0011b720(-*(float *)(param_2 + 0x20),pauVar20);
  if (pauVar20 != pauVar14) {
    uVar21 = *(undefined4 *)(*pauVar14 + 4);
    uVar22 = *(undefined4 *)(*pauVar14 + 8);
    uVar1 = *(undefined4 *)(*pauVar14 + 0xc);
    uVar2 = *(undefined4 *)pauVar14[1];
    uVar3 = *(undefined4 *)(pauVar14[1] + 4);
    uVar4 = *(undefined4 *)(pauVar14[1] + 8);
    uVar5 = *(undefined4 *)(pauVar14[1] + 0xc);
    uVar6 = *(undefined4 *)pauVar14[2];
    uVar7 = *(undefined4 *)(pauVar14[2] + 4);
    uVar8 = *(undefined4 *)(pauVar14[2] + 8);
    uVar9 = *(undefined4 *)(pauVar14[2] + 0xc);
    uVar10 = *(undefined4 *)pauVar14[3];
    uVar11 = *(undefined4 *)(pauVar14[3] + 4);
    uVar12 = *(undefined4 *)(pauVar14[3] + 8);
    uVar13 = *(undefined4 *)(pauVar14[3] + 0xc);
    *(undefined4 *)*pauVar20 = *(undefined4 *)*pauVar14;
    param_1[5] = uVar21;
    param_1[6] = uVar22;
    param_1[7] = uVar1;
    param_1[8] = uVar2;
    param_1[9] = uVar3;
    param_1[10] = uVar4;
    param_1[0xb] = uVar5;
    param_1[0xc] = uVar6;
    param_1[0xd] = uVar7;
    param_1[0xe] = uVar8;
    param_1[0xf] = uVar9;
    param_1[0x10] = uVar10;
    param_1[0x11] = uVar11;
    param_1[0x12] = uVar12;
    param_1[0x13] = uVar13;
  }
  if (param_1 + 0x10 != &uStack_30) {
    param_1[0x10] = uStack_30;
    param_1[0x11] = uStack_2c;
    param_1[0x12] = uStack_28;
    param_1[0x13] = uStack_24;
  }
  param_1[0x13] = DAT_0036e798;
  auVar16 = _qmfc2(in_vf0w);
  auVar24 = _lqc2(*(Q16 *)(param_1 + 0x10));
  auVar17 = _pextlw(SUB168(*(Q16 *)(param_1 + 8),0),SUB168(*pauVar20,0));
  auVar18 = _pextuw(*(Q16 *)(param_1 + 8),*pauVar20);
  auVar19 = _pextlw((*(u64*)((u8*)&auVar16 + 0)),SUB168(*(Q16 *)(param_1 + 0xc),0));
  auVar16 = _pextuw(auVar16,*(Q16 *)(param_1 + 0xc));
  auVar15 = _pcpyld(auVar19,auVar17);
  auVar17 = _pcpyud(auVar17,auVar19);
  auVar18 = _pcpyld(auVar16,auVar18);
  auVar16 = _qmtc2((*(u32*)((u8*)&auVar15 + 0)));
  auVar19 = _qmtc2((*(u32*)((u8*)&auVar17 + 0)));
  auVar23 = _qmtc2((*(u32*)((u8*)&auVar18 + 0)));
  _vmulabc(auVar16,auVar24);
  _vmaddabc(auVar19,auVar24);
  auVar19 = _vmaddbc(auVar23,auVar24);
  (*(B12*)((u8*)&auVar16 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar16 + 0)) = in_vf0w;
  auVar16 = _vsub(auVar16,auVar19);
  *(int *)*pauVar20 = (*(u32*)((u8*)&auVar15 + 0));
  param_1[5] = (*(u32*)((u8*)&auVar15 + 4));
  param_1[6] = (*(u32*)((u8*)&auVar15 + 8));
  param_1[7] = (*(u32*)((u8*)&auVar15 + 12));
  param_1[8] = (*(u32*)((u8*)&auVar17 + 0));
  param_1[9] = (*(u32*)((u8*)&auVar17 + 4));
  param_1[10] = (*(u32*)((u8*)&auVar17 + 8));
  param_1[0xb] = (*(u32*)((u8*)&auVar17 + 12));
  param_1[0xc] = (*(u32*)((u8*)&auVar18 + 0));
  param_1[0xd] = (*(u32*)((u8*)&auVar18 + 4));
  param_1[0xe] = (*(u32*)((u8*)&auVar18 + 8));
  param_1[0xf] = (*(u32*)((u8*)&auVar18 + 12));
  auVar16 = _sqc2(auVar16);
  *(Q16 *)(param_1 + 0x10) = auVar16;
  return;
}

