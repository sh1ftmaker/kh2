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

s32 FUN_0016a060(...) asm("func_0016a060");
s32 FUN_0016b0e0(...) asm("func_0016b0e0");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_001b9bc8(...) asm("func_001b9bc8");
s32 FUN_002ceef8(...) asm("func_002ceef8");
s32 FUN_002cf270(...) asm("func_002cf270");
s32 FUN_002d5958(...) asm("func_002d5958");
extern u32 DAT_00361f60 asm("D_00361f60");
_GHIDRA_ANY(SUB84)
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x002d5958, wrapped mechanically (ad/fallback.py)

long FUN_002d5958_impl(undefined8 param_1) asm("func_002d5958");
long FUN_002d5958_impl(undefined8 param_1) {
  undefined4 uVar1;
  Q16 *pauVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 in_vc6;
  Q16 auVar8;
  Q16 auVar9;
  undefined1 auStack_b0 [56];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Q16 auStack_60;
  
  uVar1 = DAT_00361f60;
  lVar5 = 0;
  fVar7 = 0.0;
  FUN_0016b0e0(param_1,0x43,auStack_b0);
  uStack_70 = (undefined4)(*(u64*)((u8*)&auStack_b0 + 48));
  uStack_6c = SUB84((*(u64*)((u8*)&auStack_b0 + 48)),4);
  uStack_68 = uStack_78;
  uStack_64 = uStack_74;
  lVar6 = 0;
  while (lVar5 = FUN_001b9bc8(lVar5), lVar5 != 0) {
    if ((*(uint *)((int)lVar5 + 0x588) & 0x8000000) != 0) {
      lVar3 = FUN_0016a060(lVar5);
      if (((lVar3 == 0x14) && (lVar3 = FUN_002cf270((int)lVar5 + 0xaf0,0x80), lVar3 == 0)) &&
         (lVar3 = FUN_002ceef8(uVar1,lVar5), lVar3 != 0)) {
        if (lVar6 == 0) {
          pauVar2 = (Q16 *)FUN_0016c028(lVar5);
          auVar9 = _lqc2(*pauVar2);
          (*(u32*)((u8*)&auVar8 + 4)) = uStack_6c;
          (*(u32*)((u8*)&auVar8 + 0)) = uStack_70;
          (*(u32*)((u8*)&auVar8 + 8)) = uStack_68;
          (*(u32*)((u8*)&auVar8 + 12)) = uStack_64;
          auVar8 = _lqc2(auVar8);
          auVar8 = _vsub(auVar9,auVar8);
          auStack_60 = _sqc2(auVar8);
          auVar8 = _lqc2(auStack_60);
          auVar8 = _vmul(auVar8,auVar8);
          auVar8 = _vaddbc(auVar8,auVar8);
          auVar8 = _vaddbc(auVar8,auVar8);
          _vsqrt(auVar8);
          _vwaitq();
          uVar4 = _cfc2(in_vc6);
          fVar7 = (float)uVar4;
          lVar6 = lVar5;
        }
        else {
          pauVar2 = (Q16 *)FUN_0016c028(lVar5);
          auVar8 = _lqc2(*pauVar2);
          (*(u32*)((u8*)&auVar9 + 4)) = uStack_6c;
          (*(u32*)((u8*)&auVar9 + 0)) = uStack_70;
          (*(u32*)((u8*)&auVar9 + 8)) = uStack_68;
          (*(u32*)((u8*)&auVar9 + 12)) = uStack_64;
          auVar9 = _lqc2(auVar9);
          auVar8 = _vsub(auVar8,auVar9);
          auStack_60 = _sqc2(auVar8);
          auVar8 = _lqc2(auStack_60);
          auVar8 = _vmul(auVar8,auVar8);
          auVar8 = _vaddbc(auVar8,auVar8);
          auVar8 = _vaddbc(auVar8,auVar8);
          _vsqrt(auVar8);
          _vwaitq();
          uVar4 = _cfc2(in_vc6);
          if ((float)uVar4 < fVar7) {
            lVar6 = lVar5;
          }
        }
      }
    }
  }
  return lVar6;
}

