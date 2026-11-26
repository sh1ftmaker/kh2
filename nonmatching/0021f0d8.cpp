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

s32 FUN_0021f0d8(...) asm("_Z14KeLnsLp_UpdateP17_KeWkLnsLp_Update");
s32 FUN_002229a0(...) asm("func_002229a0");
s32 FUN_002229d8(...) asm("func_002229d8");
s32 FUN_002f3cd8(...) asm("func_002f3cd8");
s32 FUN_002f3d08(...) asm("func_002f3d08");
s32 FUN_002f3d70(...) asm("func_002f3d70");
s32 FUN_002f3d98(...) asm("func_002f3d98");
s32 FUN_002f3f10(...) asm("func_002f3f10");
s32 FUN_002f3f40(...) asm("func_002f3f40");
s32 FUN_002f3f88(...) asm("func_002f3f88");
s32 FUN_002f3f98(...) asm("func_002f3f98");
s32 FUN_002f4000(...) asm("func_002f4000");
extern u32 DAT_00370b54 asm("D_00370b54");
extern u32 DAT_00370b58 asm("D_00370b58");
extern u32 DAT_00370b5c asm("D_00370b5c");
extern u32 DAT_00370b60 asm("D_00370b60");
extern u32 DAT_00370b64 asm("D_00370b64");
extern u32 DAT_00370b68 asm("D_00370b68");
extern u32 DAT_01d9e870 asm("D_01d9e870");
extern u32 DAT_01d9e874 asm("D_01d9e874");
extern u32 DAT_01d9e878 asm("D_01d9e878");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vaddq)
_GHIDRA_ANY(_vdiv)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulq)
_GHIDRA_ANY(_vopmsub)
_GHIDRA_ANY(_vopmula)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x0021f0d8, wrapped mechanically (ad/fallback.py)

void FUN_0021f0d8_impl(int *param_1) asm("_Z14KeLnsLp_UpdateP17_KeWkLnsLp_Update");
void FUN_0021f0d8_impl(int *param_1) {
  char cVar1;
  int iVar2;
  bool bVar3;
  Q16 *pauVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Q16 in_vf0;
  Q16 auVar9;
  Q16 auVar10;
  Q16 auVar11;
  undefined4 uVar12;
  undefined1 auStack_100 [48];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined1 auStack_c0 [48];
  Q16 auStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar2 = *param_1;
  FUN_002f3f98(auStack_c0,param_1[2]);
  fVar5 = DAT_00370b58;
  if (*(char *)(iVar2 + 0x8f) == '\0') {
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    afStack_70[0] = 0.0;
    afStack_70[1] = 0.0;
    afStack_70[2] = 0.0;
    fStack_74 = DAT_00370b58;
    afStack_70[3] = DAT_00370b58;
    FUN_002f4000(auStack_100);
    fStack_d0 = DAT_01d9e870 + *(float *)(iVar2 + 0x80);
    fStack_cc = DAT_01d9e874 + *(float *)(iVar2 + 0x84);
    fStack_c8 = DAT_01d9e878 + *(float *)(iVar2 + 0x88);
    FUN_002f3d08(auStack_100,0x1d9e8c0,auStack_100);
    FUN_002f3cd8(&uStack_80,auStack_100,&uStack_80);
    FUN_002f3f40(fVar5 / fStack_74,&uStack_80,&uStack_80);
    FUN_002f4000(auStack_100);
    FUN_002f3f88(&fStack_d0,0x1d9e870);
    FUN_002f3d08(auStack_100,0x1d9e8c0,auStack_100);
    FUN_002f3cd8(afStack_70,auStack_100,afStack_70);
    FUN_002f3f40(fVar5 / afStack_70[3],afStack_70,afStack_70);
    FUN_002f3f10(&fStack_60,afStack_70,&uStack_80);
    uStack_58 = DAT_00370b5c;
  }
  else {
    FUN_002f3f98(auStack_100,auStack_c0);
    fStack_d0 = 0.0;
    fStack_cc = 0.0;
    fStack_c8 = 0.0;
    FUN_002f3cd8(&uStack_80,auStack_100,param_1[1]);
    FUN_002f3f40(DAT_00370b54,afStack_70,auStack_90);
    FUN_002f3f10(&fStack_60,afStack_70,&uStack_80);
  }
  pauVar4 = (Q16 *)(iVar2 + 0x30);
  FUN_002f4000(iVar2);
  FUN_002f3cd8(pauVar4,auStack_c0,param_1[1]);
  if ((fStack_60 == 0.0) && (fStack_5c == 0.0)) {
    FUN_002f3f88(iVar2 + 0x70,pauVar4);
    cVar1 = *(char *)(iVar2 + 0x8f);
  }
  else {
    (*(u32*)((u8*)&auVar11 + 4)) = fStack_5c;
    (*(u32*)((u8*)&auVar11 + 0)) = fStack_60;
    (*(u32*)((u8*)&auVar11 + 8)) = uStack_58;
    (*(u32*)((u8*)&auVar11 + 12)) = uStack_54;
    auVar9 = _lqc2(auVar11);
    auVar11 = _vmul(auVar9,auVar9);
    auVar11 = _vaddbc(auVar11,auVar11);
    _vsqrt(auVar11);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _sqc2(auVar10);
    *(Q16 *)(iVar2 + 0x60) = auVar11;
    uVar12 = _vwaitq();
    auVar11 = _vaddq(in_vf0,uVar12);
    _vdiv(in_vf0,0,auVar11,0);
    auVar11 = _lqc2(*pauVar4);
    auVar11 = _sqc2(auVar11);
    *(Q16 *)(iVar2 + 0x70) = auVar11;
    uVar12 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar12);
    auVar11 = _sqc2(auVar9);
    *(Q16 *)(iVar2 + 0x40) = auVar11;
    _vopmula(auVar9,auVar10);
    auVar11 = _vopmsub(auVar10,auVar9);
    auVar11 = _sqc2(auVar11);
    *(Q16 *)(iVar2 + 0x50) = auVar11;
    cVar1 = *(char *)(iVar2 + 0x8f);
  }
  if (cVar1 == '\0') {
    fVar5 = DAT_01d9e878 + *(float *)(iVar2 + 0x88);
  }
  else {
    fVar5 = *(float *)(iVar2 + 0x38);
  }
  *(float *)(iVar2 + 0x78) = fVar5 * DAT_00370b60;
  FUN_002f3d98(&fStack_60,&fStack_60);
  *(float *)(iVar2 + 0x70) = fStack_60 * *(float *)(iVar2 + 0x78);
  *(float *)(iVar2 + 0x74) = fStack_5c * *(float *)(iVar2 + 0x78);
  FUN_002f3f10(afStack_70,afStack_70,&uStack_80);
  fVar6 = (float)FUN_002229a0(afStack_70);
  uVar12 = FUN_002229d8(afStack_70);
  *(undefined4 *)(iVar2 + 0xa4) = uVar12;
  FUN_002f3d98(&uStack_80,afStack_70);
  fVar5 = DAT_00370b58;
  if (*(char *)(iVar2 + 0x8f) == '\0') {
    fVar6 = 0.0;
    if (0.0 < *(float *)(iVar2 + 0xa8)) {
      fVar7 = *(float *)(iVar2 + 0xa4) / *(float *)(iVar2 + 0xa8);
      bVar3 = fVar7 <= DAT_00370b58;
      *(float *)(iVar2 + 0x7c) = fVar7;
      if (bVar3) {
        fVar6 = fVar5 - fVar7;
      }
      *(float *)(iVar2 + 0x7c) = fVar6;
    }
    else {
      *(undefined4 *)(iVar2 + 0x7c) = 0;
    }
  }
  else {
    afStack_70[0] = 0.0;
    afStack_70[1] = 0.0;
    afStack_70[2] = DAT_00370b58;
    fVar7 = (float)FUN_002f3d70(afStack_70,&uStack_80);
    fVar8 = 0.0;
    afStack_70[0] = (fVar5 - (fVar5 - fVar7) * DAT_00370b64) / DAT_00370b68;
    if (afStack_70[0] <= fVar5) {
      fVar8 = fVar5 - afStack_70[0];
    }
    *(float *)(iVar2 + 0x7c) = fVar8;
    if (0.0 <= *(float *)(iVar2 + 0x9c)) {
      FUN_002f3f98(auStack_100,auStack_c0);
      fStack_d0 = 0.0;
      fStack_cc = 0.0;
      fStack_c8 = 0.0;
      FUN_002f3cd8(afStack_70,auStack_100,afStack_70);
      fVar5 = (float)FUN_002f3d70(iVar2 + 0x90,&uStack_80);
      fVar7 = 0.0;
      fVar5 = ((DAT_00370b58 - fVar5) * DAT_00370b64) / *(float *)(iVar2 + 0x9c);
      if (fVar5 <= DAT_00370b58) {
        fVar7 = DAT_00370b58 - fVar5;
      }
      *(float *)(iVar2 + 0x7c) = *(float *)(iVar2 + 0x7c) * fVar7;
    }
    fVar5 = *(float *)(iVar2 + 0xa8) - (float)*(byte *)(iVar2 + 0x8e);
    if (0.0 < fVar5) {
      fVar6 = fVar6 / fVar5;
      fVar5 = 0.0;
      if (fVar6 < DAT_00370b58) {
        fVar5 = DAT_00370b58 - fVar6;
      }
      *(float *)(iVar2 + 0x7c) = *(float *)(iVar2 + 0x7c) * fVar5;
    }
    else {
      *(undefined4 *)(iVar2 + 0x7c) = 0;
    }
  }
  return;
}

