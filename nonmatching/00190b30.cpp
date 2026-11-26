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
s32 FUN_0016bda8(...) asm("func_0016bda8");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190878(...) asm("func_00190878");
s32 FUN_00190b30(...) asm("_ZN2YS6TARGET13search_lockonEPNS_6PLAYERE");
s32 FUN_00191c20(...) asm("func_00191c20");
s32 FUN_0019bc38(...) asm("func_0019bc38");
s32 FUN_001b9bc8(...) asm("func_001b9bc8");
extern u32 DAT_00352130 asm("D_00352130");
extern u32 DAT_0036cd44 asm("D_0036cd44");
extern u32 LAB_00190bac asm("D_00190bac");
extern u32 LAB_00190c08 asm("D_00190c08");
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x00190b30, wrapped mechanically (ad/fallback.py)

void FUN_00190b30_impl(undefined8 param_1,undefined8 param_2) asm("_ZN2YS6TARGET13search_lockonEPNS_6PLAYERE");
void FUN_00190b30_impl(undefined8 param_1,undefined8 param_2) {
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_vc6;
  Q16 auVar9;
  Q16 auVar10;
  Q16 auStack_90;
  Q16 auStack_80;
  B4 auStack_70;
  float fStack_6c;
  Q16 auStack_60;
  Q16 auStack_50;
  
  lVar3 = 0;
  fVar8 = 0.0;
  fVar5 = (float)FUN_00191c20();
  fVar6 = *(float *)(DAT_00352130 + 0x4c);
  (**(code **)(*(int *)param_2 + 0x9c))(auStack_90,param_2);
  FUN_0016bda8(auStack_80,param_2);
  FUN_00190128(param_1);
LAB_00190bac:
  do {
    lVar3 = FUN_001b9bc8(lVar3);
    if (lVar3 == 0) {
      return;
    }
    lVar1 = FUN_0019bc38(lVar3);
  } while (lVar1 == 0);
  lVar1 = 0;
  fVar7 = DAT_0036cd44;
LAB_00190c08:
  do {
    lVar1 = FUN_0016bba8(lVar3,3,lVar1);
    if (lVar1 == 0) goto LAB_00190bac;
    if ((*(ushort *)((undefined1 *)lVar1 + 2) & 1) == 0) {
      FUN_0018a818(auStack_70,lVar3,lVar1);
      if (((*(uint *)((int)lVar3 + 0x588) & 0x400) == 0) || (fVar5 < fVar7)) {
        auVar9 = _lqc2(auStack_60);
        auVar10 = _lqc2(auStack_90);
        auVar9 = _vsub(auVar9,auVar10);
        auStack_50 = _sqc2(auVar9);
        auVar9 = _lqc2(auStack_50);
        auVar9 = _vmul(auVar9,auVar9);
        auVar9 = _vaddbc(auVar9,auVar9);
        auVar9 = _vaddbc(auVar9,auVar9);
        _vsqrt(auVar9);
        _vwaitq();
        uVar2 = _cfc2(in_vc6);
        if (fVar6 * fVar5 < (float)uVar2 - fStack_6c) goto LAB_00190c08;
      }
      auVar9 = _lqc2(auStack_60);
      auVar10 = _lqc2(auStack_80);
      auVar9 = _vsub(auVar9,auVar10);
      auStack_50 = _sqc2(auVar9);
      auVar9 = _lqc2(auStack_50);
      auVar9 = _vmul(auVar9,auVar9);
      auVar9 = _vaddbc(auVar9,auVar9);
      auVar9 = _vaddbc(auVar9,auVar9);
      _vsqrt(auVar9);
      _vwaitq();
      uVar2 = _cfc2(in_vc6);
      fVar4 = (float)uVar2 - fStack_6c;
      if ((*(int *)param_1 == 0) || (fVar4 < fVar8)) {
        FUN_00190878(param_1,lVar3,*(undefined1 *)lVar1);
        fVar8 = fVar4;
      }
    }
  } while( true );
}

