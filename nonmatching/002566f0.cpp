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

s32 FUN_002566f0(...) asm("_ZN2Tz5CmTop12DrawSelectorEPNS_6SelectEii");
s32 FUN_00256a58(...) asm("func_00256a58");
s32 FUN_00263340(...) asm("func_00263340");
s32 FUN_00266678(...) asm("func_00266678");
s32 FUN_00267270(...) asm("func_00267270");
s32 FUN_0026a238(...) asm("func_0026a238");
s32 FUN_00273228(...) asm("func_00273228");
s32 FUN_0027bbe0(...) asm("func_0027bbe0");
s32 FUN_0027d598(...) asm("func_0027d598");
s32 FUN_00287cd0(...) asm("func_00287cd0");
s32 FUN_00289038(...) asm("func_00289038");
s32 FUN_002890e0(...) asm("func_002890e0");
s32 FUN_002891d0(...) asm("func_002891d0");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_00289310(...) asm("func_00289310");
s32 FUN_00289358(...) asm("func_00289358");
s32 FUN_0028cf28(...) asm("func_0028cf28");
s32 FUN_0028d008(...) asm("func_0028d008");
s32 FUN_0028d660(...) asm("func_0028d660");
s32 FUN_0028d6e8(...) asm("func_0028d6e8");
extern u32 DAT_0035f050 asm("D_0035f050");
extern u32 LAB_00256754 asm("D_00256754");
extern u32 LAB_0025683c asm("D_0025683c");

// Ghidra decompile of 0x002566f0, wrapped mechanically (ad/fallback.py)

void FUN_002566f0_impl(undefined8 param_1,long param_2,undefined8 param_3) asm("_ZN2Tz5CmTop12DrawSelectorEPNS_6SelectEii");
void FUN_002566f0_impl(undefined8 param_1,long param_2,undefined8 param_3) {
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_00289310();
  lVar4 = FUN_00287cd0();
  if (lVar4 != 1) {
    return;
  }
  if (lVar3 == 0) {
    if (param_2 == 0x18) {
      lVar3 = FUN_00267270();
    }
    if (lVar3 != 0) goto LAB_00256754;
  }
  else {
LAB_00256754:
    uVar5 = FUN_002891e8(param_1);
    if ((((param_2 != 2) && (param_2 != 5)) && (param_2 != 6)) &&
       (((param_2 != 7 && (param_2 != 8)) && (param_2 != 9)))) {
      FUN_002890e0(param_1,1,2,0,0xffffffffffffffff);
      FUN_00289038(param_1,uVar5,1,1,2,0,0xffffffffffffffff);
    }
    lVar4 = FUN_0028d008(param_3);
    if (lVar4 != 0) {
      uVar5 = FUN_002891d0(param_1);
      FUN_0028cf28(param_3,uVar5);
    }
    lVar4 = FUN_0028d6e8(DAT_0035f050);
    if (lVar4 != 0) {
      if (param_2 == 0x24) {
        iVar1 = FUN_002891d0(param_1);
        uVar2 = *(undefined4 *)(iVar1 + 0x18c);
      }
      else {
        uVar2 = FUN_002891d0(param_1);
      }
      FUN_0028d660(DAT_0035f050,uVar2);
    }
    if (lVar3 != 0) goto LAB_0025683c;
  }
  lVar3 = FUN_00289358(param_1);
  if (lVar3 == 0) {
    return;
  }
LAB_0025683c:
  if (param_2 == 0) {
    FUN_00256a58();
    return;
  }
  if (((param_2 != 1) && (param_2 != 10)) &&
     ((param_2 != 0xb && ((param_2 != 0xc && (param_2 != 0xd)))))) {
    iVar1 = (int)param_2;
    if (param_2 != 0xe) {
      if (iVar1 - 0xfU < 5) {
        FUN_0027bbe0(param_1,param_2,param_3);
        return;
      }
      if (((((param_2 == 2) || (param_2 == 5)) || (param_2 == 6)) ||
          ((param_2 == 7 || (param_2 == 8)))) || (param_2 == 9)) {
        FUN_0026a238(param_1,param_2,param_3);
        return;
      }
      if (((iVar1 - 0x19U < 3) || (param_2 == 0x1d)) ||
         ((param_2 == 0x1e || (((param_2 == 0x1f || (param_2 == 0x20)) || (param_2 == 0x21)))))) {
        FUN_00273228(param_1,param_2,param_3);
        return;
      }
      if (param_2 == 0x24) {
        FUN_0027d598(param_1,0x24,param_3);
        return;
      }
      if (1 < iVar1 - 0x17U) {
        return;
      }
      FUN_00266678(param_1,param_2,param_3);
      return;
    }
  }
  FUN_00263340(param_1,param_2,param_3);
  return;
}

