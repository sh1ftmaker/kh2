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

s32 FUN_00141c18(...) asm("func_00141c18");
s32 FUN_00141ff0(...) asm("func_00141ff0");
s32 FUN_00142b70(...) asm("func_00142b70");
s32 FUN_00165db8(...) asm("_ZN2dk6ObjOcc13intersectLineERNS_4LineERN2kn7FVectorERtjjbRPS0_ii");
s32 FUN_00165ef0(...) asm("func_00165ef0");

// Ghidra decompile of 0x00165db8, wrapped mechanically (ad/fallback.py)

undefined4 FUN_00165db8_impl(int param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4, undefined8 param_5,undefined1 param_6,undefined4 *param_7,undefined8 param_8,int param_9 ) asm("_ZN2dk6ObjOcc13intersectLineERNS_4LineERN2kn7FVectorERtjjbRPS0_ii");
undefined4 FUN_00165db8_impl(int param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4, undefined8 param_5,undefined1 param_6,undefined4 *param_7,undefined8 param_8,int param_9 ) {
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 auStack_60 [2];
  int iStack_5c;
  undefined4 uStack_58;
  
  *param_7 = 0;
  auStack_60[0] = 0xffff;
  lVar6 = 0;
  *param_3 = 0xffff;
  uStack_58 = 0;
  iStack_5c = param_1;
  while (lVar6 = FUN_00165ef0(lVar6), lVar6 != 0) {
    piVar5 = (int *)lVar6;
    if ((*piVar5 != param_9) && (lVar2 = FUN_00142b70(piVar5[1]), lVar2 == 0)) {
      FUN_00141c18(piVar5[1],param_4,param_5,param_6,0);
      lVar2 = FUN_00141ff0(piVar5[1],iStack_5c,&uStack_70,auStack_60,param_8);
      if (lVar2 != 0) {
        uStack_58 = 1;
        if (param_2 != &uStack_70) {
          *(int *)param_2 = (int)uStack_70;
          *(int *)((int)param_2 + 4) = (int)((ulong)uStack_70 >> 0x20);
          *(undefined4 *)(param_2 + 1) = uStack_68;
          *(undefined4 *)((int)param_2 + 0xc) = uStack_64;
        }
        if ((undefined8 *)(iStack_5c + 0x10) == param_2) {
          *param_7 = piVar5;
        }
        else {
          uVar1 = *param_2;
          uVar3 = *(undefined4 *)(param_2 + 1);
          uVar4 = *(undefined4 *)((int)param_2 + 0xc);
          *(int *)(iStack_5c + 0x10) = (int)uVar1;
          *(int *)(iStack_5c + 0x14) = (int)((ulong)uVar1 >> 0x20);
          *(undefined4 *)(iStack_5c + 0x18) = uVar3;
          *(undefined4 *)(iStack_5c + 0x1c) = uVar4;
          *param_7 = piVar5;
        }
        *param_3 = auStack_60[0];
      }
    }
  }
  return uStack_58;
}

