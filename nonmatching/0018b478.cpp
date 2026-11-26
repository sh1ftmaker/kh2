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

s32 FUN_001065a8(...) asm("func_001065a8");
s32 FUN_0016af58(...) asm("func_0016af58");
s32 FUN_0018b478(...) asm("_ZN2YS3NPC16check_run_actionEv");
s32 FUN_0018b7f8(...) asm("func_0018b7f8");
s32 FUN_0018b8e0(...) asm("func_0018b8e0");
s32 FUN_0018bb70(...) asm("func_0018bb70");
s32 FUN_0018bd50(...) asm("func_0018bd50");
s32 FUN_0018c438(...) asm("func_0018c438");
s32 FUN_0018c570(...) asm("func_0018c570");
s32 FUN_001c0cd8(...) asm("func_001c0cd8");
extern u32 DAT_00349e10 asm("D_00349e10");
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vaddq)
_GHIDRA_ANY(_vdiv)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulq)
_GHIDRA_ANY(_vnop)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x0018b478, wrapped mechanically (ad/fallback.py)

void FUN_0018b478_impl(undefined8 param_1) asm("_ZN2YS3NPC16check_run_actionEv");
void FUN_0018b478_impl(undefined8 param_1) {
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_vc6;
  Q16 in_vf0;
  Q16 auVar7;
  Q16 auVar8;
  undefined4 uVar9;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  Q16 auStack_60;
  Q16 auStack_50;
  
  lVar2 = FUN_001c0cd8();
  if (lVar2 != 0) {
    return;
  }
  iVar4 = (int)param_1;
  FUN_0018c570(iVar4 + 0xa40);
  if (0.0 < *(float *)(iVar4 + 0xb00)) {
    *(float *)(iVar4 + 0xb00) = *(float *)(iVar4 + 0xb00) - DAT_00349e10;
  }
  iVar1 = *(int *)(iVar4 + 0xa40);
  uVar3 = iVar1 - 4;
  if ((iVar1 != 4) &&
     ((*(int *)(iVar4 + 0xaa0) != 4 || (uVar3 = iVar1 - 4, *(float *)(iVar4 + 0xb00) <= 0.0)))) {
    lVar2 = FUN_0018bd50(param_1,5);
    if (lVar2 != 0) {
      if (*(int *)(iVar4 + 0xa40) != 0) {
        *(int *)(iVar4 + 0xaa0) = *(int *)(iVar4 + 0xa40);
        *(undefined4 *)(iVar4 + 0xaa4) = *(undefined4 *)(iVar4 + 0xa44);
        *(undefined4 *)(iVar4 + 0xaa8) = *(undefined4 *)(iVar4 + 0xa48);
        *(undefined4 *)(iVar4 + 0xaac) = *(undefined4 *)(iVar4 + 0xa4c);
        if ((undefined4 *)(iVar4 + 0xab0) != (undefined4 *)(iVar4 + 0xa50)) {
          *(undefined4 *)(iVar4 + 0xab0) = *(undefined4 *)(iVar4 + 0xa50);
          *(undefined4 *)(iVar4 + 0xab4) = *(undefined4 *)(iVar4 + 0xa54);
          *(undefined4 *)(iVar4 + 0xab8) = *(undefined4 *)(iVar4 + 0xa58);
          *(undefined4 *)(iVar4 + 0xabc) = *(undefined4 *)(iVar4 + 0xa5c);
        }
        *(undefined4 *)(iVar4 + 0xac0) = *(undefined4 *)(iVar4 + 0xa60);
        *(undefined1 *)(iVar4 + 0xac4) = *(undefined1 *)(iVar4 + 0xa64);
        *(undefined4 *)(iVar4 + 0xac8) = *(undefined4 *)(iVar4 + 0xa68);
        *(undefined4 *)(iVar4 + 0xacc) = *(undefined4 *)(iVar4 + 0xa6c);
        *(undefined1 *)(iVar4 + 0xad0) = *(undefined1 *)(iVar4 + 0xa70);
        *(undefined1 *)(iVar4 + 0xad1) = *(undefined1 *)(iVar4 + 0xa71);
        if ((undefined4 *)(iVar4 + 0xae0) != (undefined4 *)(iVar4 + 0xa80)) {
          *(undefined4 *)(iVar4 + 0xae0) = *(undefined4 *)(iVar4 + 0xa80);
          *(undefined4 *)(iVar4 + 0xae4) = *(undefined4 *)(iVar4 + 0xa84);
          *(undefined4 *)(iVar4 + 0xae8) = *(undefined4 *)(iVar4 + 0xa88);
          *(undefined4 *)(iVar4 + 0xaec) = *(undefined4 *)(iVar4 + 0xa8c);
        }
        *(undefined4 *)(iVar4 + 0xaf0) = *(undefined4 *)(iVar4 + 0xa90);
      }
      FUN_0018c438(iVar4 + 0xa40);
      uVar6 = FUN_001065a8(*(undefined4 *)(iVar4 + 0xb10),*(undefined4 *)(iVar4 + 0xb14));
      *(undefined4 *)(iVar4 + 0xa90) = uVar6;
      *(undefined1 *)(iVar4 + 0xa71) = 1;
      *(undefined4 *)(iVar4 + 0xa40) = 4;
      *(undefined1 *)(iVar4 + 0xa64) = 0;
      *(undefined4 *)(iVar4 + 0xa44) = 2;
      return;
    }
    uVar3 = *(int *)(iVar4 + 0xa40) - 4;
  }
  if (uVar3 < 2) {
    fVar5 = *(float *)(iVar4 + 0xb00);
  }
  else {
    if ((*(int *)(iVar4 + 0xaa0) == 5) && (0.0 < *(float *)(iVar4 + 0xb00))) {
      return;
    }
    lVar2 = FUN_0018b8e0(param_1,&uStack_70);
    if (lVar2 != 0) {
      if (*(int *)(iVar4 + 0xa40) != 0) {
        *(int *)(iVar4 + 0xaa0) = *(int *)(iVar4 + 0xa40);
        *(undefined4 *)(iVar4 + 0xaa4) = *(undefined4 *)(iVar4 + 0xa44);
        *(undefined4 *)(iVar4 + 0xaa8) = *(undefined4 *)(iVar4 + 0xa48);
        *(undefined4 *)(iVar4 + 0xaac) = *(undefined4 *)(iVar4 + 0xa4c);
        if ((undefined4 *)(iVar4 + 0xab0) != (undefined4 *)(iVar4 + 0xa50)) {
          *(undefined4 *)(iVar4 + 0xab0) = *(undefined4 *)(iVar4 + 0xa50);
          *(undefined4 *)(iVar4 + 0xab4) = *(undefined4 *)(iVar4 + 0xa54);
          *(undefined4 *)(iVar4 + 0xab8) = *(undefined4 *)(iVar4 + 0xa58);
          *(undefined4 *)(iVar4 + 0xabc) = *(undefined4 *)(iVar4 + 0xa5c);
        }
        *(undefined4 *)(iVar4 + 0xac0) = *(undefined4 *)(iVar4 + 0xa60);
        *(undefined1 *)(iVar4 + 0xac4) = *(undefined1 *)(iVar4 + 0xa64);
        *(undefined4 *)(iVar4 + 0xac8) = *(undefined4 *)(iVar4 + 0xa68);
        *(undefined4 *)(iVar4 + 0xacc) = *(undefined4 *)(iVar4 + 0xa6c);
        *(undefined1 *)(iVar4 + 0xad0) = *(undefined1 *)(iVar4 + 0xa70);
        *(undefined1 *)(iVar4 + 0xad1) = *(undefined1 *)(iVar4 + 0xa71);
        if ((undefined4 *)(iVar4 + 0xae0) != (undefined4 *)(iVar4 + 0xa80)) {
          *(undefined4 *)(iVar4 + 0xae0) = *(undefined4 *)(iVar4 + 0xa80);
          *(undefined4 *)(iVar4 + 0xae4) = *(undefined4 *)(iVar4 + 0xa84);
          *(undefined4 *)(iVar4 + 0xae8) = *(undefined4 *)(iVar4 + 0xa88);
          *(undefined4 *)(iVar4 + 0xaec) = *(undefined4 *)(iVar4 + 0xa8c);
        }
        *(undefined4 *)(iVar4 + 0xaf0) = *(undefined4 *)(iVar4 + 0xa90);
      }
      uVar6 = FUN_001065a8(*(undefined4 *)(iVar4 + 0xb1c),*(undefined4 *)(iVar4 + 0xb20));
      FUN_0016af58(auStack_60,param_1);
      FUN_0016af58(auStack_50,lVar2);
      (*(u32*)((u8*)&auStack_50 + 4)) = 0;
      (*(u32*)((u8*)&auStack_60 + 4)) = 0;
      auVar7 = _lqc2(auStack_60);
      auVar8 = _vmul(auVar7,auVar7);
      auVar8 = _vaddbc(auVar8,auVar8);
      auVar8 = _vaddbc(auVar8,auVar8);
      _vsqrt(auVar8);
      uVar9 = _vwaitq();
      _cfc2(in_vc6);
      auVar8 = _vaddq(in_vf0,uVar9);
      _vnop();
      _vdiv(in_vf0,0,auVar8,0);
      uVar9 = _vwaitq();
      auVar7 = _vmulq(auVar7,uVar9);
      auStack_60 = _sqc2(auVar7);
      auVar7 = _lqc2(auStack_50);
      auVar8 = _vmul(auVar7,auVar7);
      auVar8 = _vaddbc(auVar8,auVar8);
      auVar8 = _vaddbc(auVar8,auVar8);
      _vsqrt(auVar8);
      uVar9 = _vwaitq();
      _cfc2(in_vc6);
      auVar8 = _vaddq(in_vf0,uVar9);
      _vnop();
      _vdiv(in_vf0,0,auVar8,0);
      uVar9 = _vwaitq();
      auVar7 = _vmulq(auVar7,uVar9);
      auStack_50 = _sqc2(auVar7);
      auVar7 = _lqc2(auStack_60);
      auVar8 = _lqc2(auStack_50);
      auVar7 = _vmul(auVar7,auVar8);
      auVar7 = _vaddbc(auVar7,auVar7);
      auVar7 = _vaddbc(auVar7,auVar7);
      auVar7 = _qmfc2((*(u32*)((u8*)&auVar7 + 0)));
      FUN_0018bb70(uVar6,param_1,uStack_70,lVar2,1);
      FUN_0018bb70(uVar6,lVar2,uStack_6c,param_1,(*(u32*)((u8*)&auVar7 + 0)) < 0.0);
      return;
    }
    fVar5 = *(float *)(iVar4 + 0xb00);
  }
  if (fVar5 <= 0.0) {
    *(undefined4 *)(iVar4 + 0xb00) = 0;
    FUN_0018b7f8(param_1);
  }
  return;
}

