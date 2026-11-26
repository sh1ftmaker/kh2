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

s32 FUN_00102180(...) asm("func_00102180");
s32 FUN_00104190(...) asm("func_00104190");
s32 FUN_00106a60(...) asm("func_00106a60");
s32 FUN_0011b6a8(...) asm("func_0011b6a8");
s32 FUN_0011b7b0(...) asm("func_0011b7b0");
s32 FUN_0011bac8(...) asm("func_0011bac8");
s32 FUN_0017ce10(...) asm("func_0017ce10");
s32 FUN_001dc5f8(...) asm("func_001dc5f8");
s32 FUN_001dc620(...) asm("func_001dc620");
s32 FUN_001dc648(...) asm("func_001dc648");
s32 FUN_001df2c0(...) asm("_ZN3ryj3PAX7MANAGER11bind_cameraEv");
extern u32 DAT_0036e80c asm("D_0036e80c");
_GHIDRA_ANY(CONCAT44)
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_pextlw)
_GHIDRA_ANY(_pextuw)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vaddq)
_GHIDRA_ANY(_vdiv)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vmulq)
_GHIDRA_ANY(_vnop)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x001df2c0, wrapped mechanically (ad/fallback.py)

void FUN_001df2c0_impl(int param_1) asm("_ZN3ryj3PAX7MANAGER11bind_cameraEv");
void FUN_001df2c0_impl(int param_1) {
  undefined8 uVar1;
  Q16 auVar2;
  Q16 auVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 auVar6;
  Q16 auVar7;
  Q16 auVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  Q16 auVar13;
  Q16 auVar14;
  Q16 auVar15;
  Q16 auVar16;
  Q16 auVar17;
  Q16 auVar18;
  undefined4 *puVar19;
  undefined4 in_vc6;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar20;
  Q16 auVar21;
  undefined4 uVar22;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  Q16 auStack_130;
  Q16 auStack_120;
  Q16 auStack_110;
  Q16 auStack_100;
  Q16 auStack_f0;
  Q16 auStack_e0;
  Q16 auStack_d0;
  Q16 auStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  Q16 auStack_a0;
  Q16 auStack_90;
  Q16 auStack_80;
  Q16 auStack_70;
  int aiStack_60 [4];
  
  iVar10 = *(int *)(param_1 + 0x44);
  uStack_190 = *(undefined4 *)(iVar10 + 0x1c);
  uStack_18c = *(undefined4 *)(iVar10 + 0x20);
  uStack_188 = *(undefined4 *)(iVar10 + 0x24);
  uStack_180 = *(undefined4 *)(iVar10 + 0x28);
  uStack_17c = *(undefined4 *)(iVar10 + 0x2c);
  uStack_178 = *(undefined4 *)(iVar10 + 0x30);
  uStack_170 = *(undefined4 *)(iVar10 + 0x34);
  uStack_16c = *(undefined4 *)(iVar10 + 0x38);
  uStack_168 = *(undefined4 *)(iVar10 + 0x3c);
  uStack_184 = DAT_0036e80c;
  uStack_174 = 0;
  uStack_164 = 0;
  FUN_00102180(aiStack_60);
  iVar10 = FUN_00104190();
  lVar12 = FUN_00106a60(aiStack_60[0] != iVar10);
  puVar19 = (undefined4 *)((int)lVar12 + 0x10);
  if (lVar12 == 0) {
    puVar19 = (undefined4 *)0x0;
  }
  if (&uStack_160 != puVar19) {
    uStack_160 = *puVar19;
    uStack_15c = puVar19[1];
    uStack_158 = puVar19[2];
    uStack_154 = puVar19[3];
    uStack_150 = puVar19[4];
    uStack_14c = puVar19[5];
    uStack_148 = puVar19[6];
    uStack_144 = puVar19[7];
    uStack_140 = puVar19[8];
    uStack_13c = puVar19[9];
    uStack_138 = puVar19[10];
    uStack_134 = puVar19[0xb];
    auStack_130 = *(Q16 *)(puVar19 + 0xc);
  }
  (*(u32*)((u8*)&auVar13 + 8)) = uStack_158;
  (*(u64*)((u8*)&auVar13 + 0)) = CONCAT44(uStack_15c,uStack_160);
  (*(u32*)((u8*)&auVar13 + 12)) = uStack_154;
  (*(u32*)((u8*)&auVar18 + 8)) = uStack_148;
  (*(u64*)((u8*)&auVar18 + 0)) = CONCAT44(uStack_14c,uStack_150);
  (*(u32*)((u8*)&auVar18 + 12)) = uStack_144;
  (*(u32*)((u8*)&auVar14 + 8)) = uStack_138;
  (*(u64*)((u8*)&auVar14 + 0)) = CONCAT44(uStack_13c,uStack_140);
  (*(u32*)((u8*)&auVar14 + 12)) = uStack_134;
  auVar15 = _qmfc2(in_vf0w);
  auVar20 = _lqc2(auStack_130);
  auVar16 = _pextlw(CONCAT44(uStack_14c,uStack_150),CONCAT44(uStack_15c,uStack_160));
  auVar17 = _pextuw(auVar18,auVar13);
  auVar18 = _pextlw((*(u64*)((u8*)&auVar15 + 0)),CONCAT44(uStack_13c,uStack_140));
  auVar15 = _pextuw(auVar15,auVar14);
  auVar13 = _pcpyld(auVar18,auVar16);
  auVar18 = _pcpyud(auVar16,auVar18);
  auVar14 = _pcpyld(auVar15,auVar17);
  uStack_160 = (*(u32*)((u8*)&auVar13 + 0));
  auVar15 = _qmtc2(uStack_160);
  uStack_150 = (*(u32*)((u8*)&auVar18 + 0));
  auVar16 = _qmtc2(uStack_150);
  uStack_140 = (*(u32*)((u8*)&auVar14 + 0));
  auVar17 = _qmtc2(uStack_140);
  _vmulabc(auVar15,auVar20);
  _vmaddabc(auVar16,auVar20);
  auVar16 = _vmaddbc(auVar17,auVar20);
  (*(B12*)((u8*)&auVar15 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar15 + 0)) = in_vf0w;
  auVar15 = _vsub(auVar15,auVar16);
  uStack_15c = (*(u32*)((u8*)&auVar13 + 4));
  uStack_158 = (*(u32*)((u8*)&auVar13 + 8));
  uStack_154 = (*(u32*)((u8*)&auVar13 + 12));
  uStack_14c = (*(u32*)((u8*)&auVar18 + 4));
  uStack_148 = (*(u32*)((u8*)&auVar18 + 8));
  uStack_144 = (*(u32*)((u8*)&auVar18 + 12));
  uStack_13c = (*(u32*)((u8*)&auVar14 + 4));
  uStack_138 = (*(u32*)((u8*)&auVar14 + 8));
  uStack_134 = (*(u32*)((u8*)&auVar14 + 12));
  auStack_130 = _sqc2(auVar15);
  FUN_0011b6a8(auStack_e0);
  FUN_0011b7b0(auStack_e0,&uStack_180);
  if (&uStack_b0 != &uStack_190) {
    uStack_b0 = uStack_190;
    uStack_ac = uStack_18c;
    uStack_a8 = uStack_188;
  }
  uStack_a4 = DAT_0036e80c;
  (*(u32*)((u8*)&auVar16 + 4)) = uStack_15c;
  (*(u32*)((u8*)&auVar16 + 0)) = uStack_160;
  (*(u32*)((u8*)&auVar16 + 8)) = uStack_158;
  (*(u32*)((u8*)&auVar16 + 12)) = uStack_154;
  auVar15 = _lqc2(auVar16);
  (*(u32*)((u8*)&auVar17 + 4)) = uStack_14c;
  (*(u32*)((u8*)&auVar17 + 0)) = uStack_150;
  (*(u32*)((u8*)&auVar17 + 8)) = uStack_148;
  (*(u32*)((u8*)&auVar17 + 12)) = uStack_144;
  auVar13 = _lqc2(auVar17);
  (*(u32*)((u8*)&auVar20 + 4)) = uStack_13c;
  (*(u32*)((u8*)&auVar20 + 0)) = uStack_140;
  (*(u32*)((u8*)&auVar20 + 8)) = uStack_138;
  (*(u32*)((u8*)&auVar20 + 12)) = uStack_134;
  auVar18 = _lqc2(auVar20);
  auVar14 = _lqc2(auStack_130);
  auVar16 = _lqc2(auStack_e0);
  auVar17 = _lqc2(auStack_d0);
  auVar20 = _lqc2(auStack_c0);
  (*(u32*)((u8*)&auVar21 + 4)) = uStack_ac;
  (*(u32*)((u8*)&auVar21 + 0)) = uStack_b0;
  (*(u32*)((u8*)&auVar21 + 8)) = uStack_a8;
  (*(u32*)((u8*)&auVar21 + 12)) = DAT_0036e80c;
  auVar21 = _lqc2(auVar21);
  _vmulabc(auVar15,auVar16);
  _vmaddabc(auVar13,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar14,auVar16);
  _vmulabc(auVar15,auVar17);
  _vmaddabc(auVar13,auVar17);
  _vmaddabc(auVar18,auVar17);
  auVar17 = _vmaddbc(auVar14,auVar17);
  _vmulabc(auVar15,auVar20);
  _vmaddabc(auVar13,auVar20);
  _vmaddabc(auVar18,auVar20);
  auVar20 = _vmaddbc(auVar14,auVar20);
  _vmulabc(auVar15,auVar21);
  _vmaddabc(auVar13,auVar21);
  _vmaddabc(auVar18,auVar21);
  auVar15 = _vmaddbc(auVar14,auVar21);
  auStack_a0 = _sqc2(auVar16);
  auStack_90 = _sqc2(auVar17);
  auStack_80 = _sqc2(auVar20);
  auStack_70 = _sqc2(auVar15);
  if (auStack_120 != auStack_a0) {
    auStack_120 = auStack_a0;
    auStack_110 = auStack_90;
    auStack_100 = auStack_80;
    auStack_f0 = auStack_70;
  }
  puVar19 = (undefined4 *)FUN_001dc5f8(*(undefined4 *)(param_1 + 0x40));
  if (puVar19 != (undefined4 *)auStack_f0) {
    *puVar19 = (*(u32*)((u8*)&auStack_f0 + 0));
    puVar19[1] = (*(u32*)((u8*)&auStack_f0 + 4));
    puVar19[2] = (*(u32*)((u8*)&auStack_f0 + 8));
    puVar19[3] = (*(u32*)((u8*)&auStack_f0 + 12));
  }
  auVar15 = _lqc2(auStack_120);
  auVar13 = _vmul(auVar15,auVar15);
  auVar13 = _vaddbc(auVar13,auVar13);
  auVar13 = _vaddbc(auVar13,auVar13);
  _vsqrt(auVar13);
  uVar22 = _vwaitq();
  _cfc2(in_vc6);
  (*(B12*)((u8*)&auVar2 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar2 + 0)) = in_vf0w;
  auVar13 = _vaddq(auVar2,uVar22);
  _vnop();
  (*(B12*)((u8*)&auVar3 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar3 + 0)) = in_vf0w;
  _vdiv(auVar3,0,auVar13,0);
  uVar22 = _vwaitq();
  auVar15 = _vmulq(auVar15,uVar22);
  auStack_120 = _sqc2(auVar15);
  auVar15 = _lqc2(auStack_110);
  auVar13 = _vmul(auVar15,auVar15);
  auVar13 = _vaddbc(auVar13,auVar13);
  auVar13 = _vaddbc(auVar13,auVar13);
  _vsqrt(auVar13);
  uVar22 = _vwaitq();
  _cfc2(in_vc6);
  (*(B12*)((u8*)&auVar4 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar4 + 0)) = in_vf0w;
  auVar13 = _vaddq(auVar4,uVar22);
  _vnop();
  (*(B12*)((u8*)&auVar5 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar5 + 0)) = in_vf0w;
  _vdiv(auVar5,0,auVar13,0);
  uVar22 = _vwaitq();
  auVar15 = _vmulq(auVar15,uVar22);
  auStack_110 = _sqc2(auVar15);
  auVar15 = _lqc2(auStack_100);
  auVar13 = _vmul(auVar15,auVar15);
  auVar13 = _vaddbc(auVar13,auVar13);
  auVar13 = _vaddbc(auVar13,auVar13);
  _vsqrt(auVar13);
  uVar22 = _vwaitq();
  _cfc2(in_vc6);
  (*(B12*)((u8*)&auVar6 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar6 + 0)) = in_vf0w;
  auVar13 = _vaddq(auVar6,uVar22);
  _vnop();
  (*(B12*)((u8*)&auVar7 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar7 + 0)) = in_vf0w;
  _vdiv(auVar7,0,auVar13,0);
  uVar22 = _vwaitq();
  auVar15 = _vmulq(auVar15,uVar22);
  auStack_100 = _sqc2(auVar15);
  (*(B12*)((u8*)&auVar8 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar8 + 0)) = in_vf0w;
  auStack_f0 = _sqc2(auVar8);
  uVar1 = FUN_001dc648(*(undefined4 *)(param_1 + 0x40));
  FUN_0011bac8(auStack_120,uVar1);
  puVar19 = (undefined4 *)FUN_001dc648(*(undefined4 *)(param_1 + 0x40));
  puVar9 = (undefined4 *)FUN_001dc648(*(undefined4 *)(param_1 + 0x40));
  uVar22 = FUN_0017ce10(*puVar9);
  *puVar19 = uVar22;
  iVar10 = FUN_001dc648(*(undefined4 *)(param_1 + 0x40));
  iVar11 = FUN_001dc648(*(undefined4 *)(param_1 + 0x40));
  uVar22 = FUN_0017ce10(*(undefined4 *)(iVar11 + 4));
  *(undefined4 *)(iVar10 + 4) = uVar22;
  iVar10 = FUN_001dc648(*(undefined4 *)(param_1 + 0x40));
  iVar11 = FUN_001dc648(*(undefined4 *)(param_1 + 0x40));
  uVar22 = FUN_0017ce10(*(undefined4 *)(iVar11 + 8));
  *(undefined4 *)(iVar10 + 8) = uVar22;
  puVar19 = (undefined4 *)FUN_001dc620(*(undefined4 *)(param_1 + 0x40));
  if (puVar19 != &uStack_170) {
    *puVar19 = uStack_170;
    puVar19[1] = uStack_16c;
    puVar19[2] = uStack_168;
    puVar19[3] = uStack_164;
  }
  return;
}

