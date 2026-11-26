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

s32 FUN_002f8010(...) asm("func_002f8010");
s32 FUN_002f83f0(...) asm("func_002f83f0");
s32 FUN_00313e80(...) asm("func_00313e80");
s32 FUN_00313ed8(...) asm("func_00313ed8");
s32 FUN_00313f40(...) asm("func_00313f40");
s32 FUN_00314190(...) asm("func_00314190");
s32 FUN_003142e0(...) asm("func_003142e0");
extern u32 DAT_00376e70 asm("D_00376e70");
extern u32 DAT_00376e78 asm("D_00376e78");
extern u32 DAT_00376e80 asm("D_00376e80");
extern u32 DAT_00376e88 asm("D_00376e88");
extern u32 DAT_00376e90 asm("D_00376e90");
extern u32 DAT_00376e98 asm("D_00376e98");
extern u32 DAT_00376ea0 asm("D_00376ea0");
extern u32 DAT_00376ea8 asm("D_00376ea8");
extern u32 DAT_00376eb0 asm("D_00376eb0");
extern u32 DAT_00376eb8 asm("D_00376eb8");
extern u32 DAT_00376ec0 asm("D_00376ec0");
extern u32 DAT_00376ec8 asm("D_00376ec8");
extern u32 LAB_002f80bc asm("D_002f80bc");
extern u32 LAB_002f8380 asm("D_002f8380");
extern u32 _DAT_00376ed0 asm("D_00376ed0");

// Ghidra decompile of 0x002f8010, wrapped mechanically (ad/fallback.py)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_002f8010_impl(long param_1) asm("func_002f8010");
long FUN_002f8010_impl(long param_1) {
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar6 = param_1 >> 0x20;
  uVar5 = uVar6 & 0x7fffffff;
  if (0x440fffff < uVar5) {
    if ((0x7ff00000 < uVar5) || ((uVar5 == 0x7ff00000 && ((int)param_1 != 0)))) {
      lVar1 = FUN_00313e80(param_1,param_1);
      return lVar1;
    }
    if (0 < (long)uVar6) {
      return DAT_00376e70;
    }
    param_1 = 0;
    lVar1 = DAT_00376e70;
    goto LAB_002f80bc;
  }
  if (uVar5 < 0x3fdc0000) {
    iVar7 = -1;
    if (uVar5 < 0x3e200000) {
      uVar2 = FUN_00313e80(param_1,DAT_00376e78);
      lVar1 = FUN_003142e0(0x3ff0000000000000,uVar2);
      if (lVar1 < 0) {
        return param_1;
      }
      iVar7 = -1;
    }
  }
  else {
    uVar2 = FUN_002f83f0();
    if (uVar5 < 0x3ff30000) {
      if (uVar5 < 0x3fe60000) {
        uVar3 = FUN_00313e80(uVar2,uVar2);
        iVar7 = 0;
        uVar3 = FUN_00313ed8(uVar3,0x3ff0000000000000);
        uVar2 = FUN_00313e80(uVar2,0x4000000000000000);
      }
      else {
        iVar7 = 1;
        uVar3 = FUN_00313ed8(uVar2,0x3ff0000000000000);
LAB_002f8380:
        uVar2 = FUN_00313e80(uVar2,0x3ff0000000000000);
      }
    }
    else {
      if (uVar5 < 0x40038000) {
        iVar7 = 2;
        uVar3 = FUN_00313ed8(uVar2,0x3ff8000000000000);
        uVar2 = FUN_00313f40(uVar2,0x3ff8000000000000);
        goto LAB_002f8380;
      }
      uVar3 = 0xbff0000000000000;
      iVar7 = 3;
    }
    param_1 = FUN_00314190(uVar3,uVar2);
  }
  uVar2 = FUN_00313f40(param_1,param_1);
  uVar3 = FUN_00313f40(uVar2,uVar2);
  uVar4 = FUN_00313f40(uVar3,DAT_00376e80);
  uVar4 = FUN_00313e80(DAT_00376e88,uVar4);
  uVar4 = FUN_00313f40(uVar3,uVar4);
  uVar4 = FUN_00313e80(DAT_00376e90,uVar4);
  uVar4 = FUN_00313f40(uVar3,uVar4);
  uVar4 = FUN_00313e80(DAT_00376e98,uVar4);
  uVar4 = FUN_00313f40(uVar3,uVar4);
  uVar4 = FUN_00313e80(DAT_00376ea0,uVar4);
  uVar4 = FUN_00313f40(uVar3,uVar4);
  uVar4 = FUN_00313e80(DAT_00376ea8,uVar4);
  uVar2 = FUN_00313f40(uVar2,uVar4);
  uVar4 = FUN_00313f40(uVar3,DAT_00376eb0);
  uVar4 = FUN_00313e80(DAT_00376eb8,uVar4);
  uVar4 = FUN_00313f40(uVar3,uVar4);
  uVar4 = FUN_00313e80(DAT_00376ec0,uVar4);
  uVar4 = FUN_00313f40(uVar3,uVar4);
  uVar4 = FUN_00313e80(DAT_00376ec8,uVar4);
  uVar4 = FUN_00313f40(uVar3,uVar4);
  uVar4 = FUN_00313e80(_DAT_00376ed0,uVar4);
  uVar3 = FUN_00313f40(uVar3,uVar4);
  if (iVar7 < 0) {
    uVar2 = FUN_00313e80(uVar2,uVar3);
    lVar1 = FUN_00313f40(param_1,uVar2);
  }
  else {
    uVar2 = FUN_00313e80(uVar2,uVar3);
    uVar2 = FUN_00313f40(param_1,uVar2);
    uVar2 = FUN_00313ed8(uVar2,*(undefined8 *)(iVar7 * 8 + 0x376de8));
    uVar2 = FUN_00313ed8(uVar2,param_1);
    lVar1 = FUN_00313ed8(*(undefined8 *)(iVar7 * 8 + 0x376dc8),uVar2);
    if (-1 < (long)uVar6) {
      return lVar1;
    }
    param_1 = 0;
  }
LAB_002f80bc:
  lVar1 = FUN_00313ed8(param_1,lVar1);
  return lVar1;
}

