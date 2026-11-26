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

s32 FUN_00143ae0(...) asm("func_00143ae0");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_00184780(...) asm("_ZN2YS3OBJ10check_stepERKN2kn7FVectorEfff");
extern u32 DAT_0036c8b4 asm("D_0036c8b4");
_GHIDRA_ANY(SUB124)
_GHIDRA_ANY(SUB168)
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vaddq)
_GHIDRA_ANY(_vdiv)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulbc)
_GHIDRA_ANY(_vmulq)
_GHIDRA_ANY(_vnop)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x00184780, wrapped mechanically (ad/fallback.py)

undefined4 FUN_00184780_impl(undefined4 param_1,float param_2,float param_3,int param_4,Q16 *param_5) asm("_ZN2YS3OBJ10check_stepERKN2kn7FVectorEfff");
undefined4 FUN_00184780_impl(undefined4 param_1,float param_2,float param_3,int param_4,Q16 *param_5) {
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined4 in_vc6;
  Q16 in_vf0;
  Q16 auVar4;
  Q16 auVar5;
  undefined4 uVar6;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  Q16 auStack_c0;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  B4 auStack_90;
  float fStack_8c;
  Q16 auStack_80;
  Q16 auStack_70;
  Q16 auStack_60;
  
  puVar1 = (undefined8 *)FUN_0016c028();
  if ((undefined8 *)&uStack_d0 != puVar1) {
    uStack_c8 = *(undefined4 *)(puVar1 + 1);
    uStack_c4 = *(undefined4 *)((int)puVar1 + 0xc);
    uStack_d0 = (undefined4)*puVar1;
    fStack_cc = (float)((ulong)*puVar1 >> 0x20);
  }
  if (&auStack_c0 == param_5) {
    (*(u32*)((u8*)&auStack_c0 + 4)) = 0;
  }
  else {
    (*(u64*)((u8*)&auStack_c0 + 8)) = SUB168(*param_5,8);
    (*(u32*)((u8*)&auStack_c0 + 0)) = SUB124(*(B12 *)*param_5,0);
    (*(u32*)((u8*)&auStack_c0 + 4)) = 0;
  }
  auVar4 = _lqc2(auStack_c0);
  auVar5 = _vmul(auVar4,auVar4);
  auVar5 = _vaddbc(auVar5,auVar5);
  auVar5 = _vaddbc(auVar5,auVar5);
  _vsqrt(auVar5);
  uVar6 = _vwaitq();
  _cfc2(in_vc6);
  auVar5 = _vaddq(in_vf0,uVar6);
  _vnop();
  _vdiv(in_vf0,0,auVar5,0);
  uVar6 = _vwaitq();
  auVar4 = _vmulq(auVar4,uVar6);
  auStack_c0 = _sqc2(auVar4);
  if (&uStack_b0 != &uStack_d0) {
    uStack_b0 = uStack_d0;
    uStack_a8 = uStack_c8;
    uStack_a4 = uStack_c4;
    fStack_ac = fStack_cc;
  }
  fStack_ac = fStack_ac - param_2;
  auVar4 = _lqc2(auStack_c0);
  auVar5 = _qmtc2(param_1);
  auVar4 = _vmulbc(auVar4,auVar5);
  auStack_60 = _sqc2(auVar4);
  (*(u32*)((u8*)&auVar4 + 4)) = fStack_ac;
  (*(u32*)((u8*)&auVar4 + 0)) = uStack_b0;
  (*(u32*)((u8*)&auVar4 + 8)) = uStack_a8;
  (*(u32*)((u8*)&auVar4 + 12)) = uStack_a4;
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2(auStack_60);
  auVar4 = _vadd(auVar4,auVar5);
  auStack_70 = _sqc2(auVar4);
  if (&uStack_a0 != (undefined4 *)auStack_70) {
    uStack_a0 = (*(u32*)((u8*)&auStack_70 + 0));
    fStack_9c = (*(u32*)((u8*)&auStack_70 + 4));
    uStack_98 = (*(u32*)((u8*)&auStack_70 + 8));
    uStack_94 = (*(u32*)((u8*)&auStack_70 + 12));
  }
  if (&uStack_f0 != &uStack_b0) {
    uStack_f0 = uStack_b0;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    fStack_ec = fStack_ac;
  }
  if (&uStack_e0 == &uStack_a0) {
    lVar2 = *(long *)(param_4 + 0x600);
  }
  else {
    uStack_e0 = uStack_a0;
    fStack_dc = fStack_9c;
    uStack_d8 = uStack_98;
    uStack_d4 = uStack_94;
    lVar2 = *(long *)(param_4 + 0x600);
  }
  lVar2 = FUN_00143ae0(&uStack_f0,auStack_90,auStack_80,(lVar2 << 0x1d) >> 0x20 & 0xf);
  uVar6 = 3;
  if (lVar2 == 0) {
    if (&uStack_b0 != &uStack_a0) {
      uStack_b0 = uStack_a0;
      fStack_ac = fStack_9c;
      uStack_a8 = uStack_98;
      uStack_a4 = uStack_94;
    }
    fStack_ac = fStack_ac + param_2 + param_3;
    if (&uStack_f0 != &uStack_a0) {
      uStack_f0 = uStack_a0;
      fStack_ec = fStack_9c;
      uStack_e8 = uStack_98;
      uStack_e4 = uStack_94;
    }
    if (&uStack_e0 == &uStack_b0) {
      lVar2 = *(long *)(param_4 + 0x600);
    }
    else {
      uStack_e0 = uStack_b0;
      uStack_d8 = uStack_a8;
      uStack_d4 = uStack_a4;
      lVar2 = *(long *)(param_4 + 0x600);
      fStack_dc = fStack_ac;
    }
    lVar2 = FUN_00143ae0(&uStack_f0,auStack_90,auStack_80,(lVar2 << 0x1d) >> 0x20 & 0xf);
    uVar6 = 3;
    if (lVar2 != 0) {
      fVar3 = *(float *)(param_4 + 0x5fc) * DAT_0036c8b4;
      uVar6 = 1;
      if ((fStack_cc - fVar3 <= fStack_8c) && (uVar6 = 2, fStack_8c <= fStack_cc + fVar3)) {
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

