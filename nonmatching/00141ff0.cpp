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

s32 FUN_00141970(...) asm("func_00141970");
s32 FUN_00141980(...) asm("func_00141980");
s32 FUN_00141c38(...) asm("func_00141c38");
s32 FUN_00141e78(...) asm("func_00141e78");
s32 FUN_00141ff0(...) asm("_ZN2dk11OctCollFile13intersectLineERNS_4LineERN2kn7FVectorERti");
s32 FUN_00144618(...) asm("func_00144618");
s32 FUN_00144e30(...) asm("func_00144e30");
s32 FUN_00144e50(...) asm("func_00144e50");
extern u32 DAT_0036aed8 asm("D_0036aed8");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x00141ff0, wrapped mechanically (ad/fallback.py)

undefined4 FUN_00141ff0_impl(undefined8 param_1,Q16 *param_2,Q16 *param_3, undefined2 *param_4,undefined8 param_5) asm("_ZN2dk11OctCollFile13intersectLineERNS_4LineERN2kn7FVectorERti");
undefined4 FUN_00141ff0_impl(undefined8 param_1,Q16 *param_2,Q16 *param_3, undefined2 *param_4,undefined8 param_5) {
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  Q16 auVar5;
  Q16 auVar6;
  Q16 auVar7;
  Q16 auVar8;
  Q16 auVar9;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  Q16 auStack_8b0;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined1 auStack_880 [32];
  undefined2 auStack_860 [8];
  undefined1 auStack_850 [2048];
  Q16 auStack_50;
  
  uStack_8c8 = *(undefined4 *)(*param_2 + 8);
  uStack_8c4 = *(undefined4 *)(*param_2 + 0xc);
  uStack_8d0 = (undefined4)*(undefined8 *)*param_2;
  uStack_8cc = (undefined4)((ulong)*(undefined8 *)*param_2 >> 0x20);
  uVar1 = *(undefined8 *)param_2[1];
  uStack_8b8 = *(undefined4 *)(param_2[1] + 8);
  uStack_8b4 = *(undefined4 *)(param_2[1] + 0xc);
  uStack_8c0 = (undefined4)uVar1;
  uStack_8bc = (undefined4)((ulong)uVar1 >> 0x20);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0xd1) == '\0') {
    auVar9 = _lqc2(*param_2);
    auVar5 = _lqc2(*(Q16 *)(iVar3 + 0x90));
    auVar6 = _lqc2(*(Q16 *)(iVar3 + 0xa0));
    auVar7 = _lqc2(*(Q16 *)(iVar3 + 0xb0));
    auVar8 = _lqc2(*(Q16 *)(iVar3 + 0xc0));
    _vmulabc(auVar5,auVar9);
    _vmaddabc(auVar6,auVar9);
    _vmaddabc(auVar7,auVar9);
    auVar5 = _vmaddbc(auVar8,auVar9);
    auVar5 = _sqc2(auVar5);
    if (&uStack_8d0 != (undefined4 *)auStack_8b0) {
      (*(u32*)((u8*)&auStack_8b0 + 8)) = (*(u32*)((u8*)&auVar5 + 8));
      (*(u32*)((u8*)&auStack_8b0 + 12)) = (*(u32*)((u8*)&auVar5 + 12));
      uStack_8d0 = (*(u32*)((u8*)&auVar5 + 0));
      uStack_8cc = (*(u32*)((u8*)&auVar5 + 4));
      uStack_8c8 = (*(u32*)((u8*)&auStack_8b0 + 8));
      uStack_8c4 = (*(u32*)((u8*)&auStack_8b0 + 12));
    }
    auVar9 = _lqc2(param_2[1]);
    auVar5 = _lqc2(*(Q16 *)(iVar3 + 0x90));
    auVar6 = _lqc2(*(Q16 *)(iVar3 + 0xa0));
    auVar7 = _lqc2(*(Q16 *)(iVar3 + 0xb0));
    auVar8 = _lqc2(*(Q16 *)(iVar3 + 0xc0));
    _vmulabc(auVar5,auVar9);
    _vmaddabc(auVar6,auVar9);
    _vmaddabc(auVar7,auVar9);
    auVar5 = _vmaddbc(auVar8,auVar9);
    auVar5 = _sqc2(auVar5);
    if (&uStack_8c0 != (undefined4 *)auStack_8b0) {
      (*(u32*)((u8*)&auStack_8b0 + 8)) = (*(u32*)((u8*)&auVar5 + 8));
      (*(u32*)((u8*)&auStack_8b0 + 12)) = (*(u32*)((u8*)&auVar5 + 12));
      uStack_8c0 = (*(u32*)((u8*)&auVar5 + 0));
      uStack_8bc = (*(u32*)((u8*)&auVar5 + 4));
      uStack_8b8 = (*(u32*)((u8*)&auStack_8b0 + 8));
      uStack_8b4 = (*(u32*)((u8*)&auStack_8b0 + 12));
    }
  }
  if (&uStack_8a0 != &uStack_8d0) {
    uStack_8a0 = uStack_8d0;
    uStack_89c = uStack_8cc;
    uStack_898 = uStack_8c8;
  }
  (*(u32*)((u8*)&auVar6 + 4)) = uStack_8bc;
  (*(u32*)((u8*)&auVar6 + 0)) = uStack_8c0;
  (*(u32*)((u8*)&auVar6 + 8)) = uStack_8b8;
  (*(u32*)((u8*)&auVar6 + 12)) = uStack_8b4;
  auVar6 = _lqc2(auVar6);
  (*(u32*)((u8*)&auVar5 + 4)) = uStack_8cc;
  (*(u32*)((u8*)&auVar5 + 0)) = uStack_8d0;
  (*(u32*)((u8*)&auVar5 + 8)) = uStack_8c8;
  (*(u32*)((u8*)&auVar5 + 12)) = uStack_8c4;
  auVar5 = _lqc2(auVar5);
  auVar5 = _vsub(auVar6,auVar5);
  auStack_8b0 = _sqc2(auVar5);
  if (&uStack_890 != (undefined4 *)auStack_8b0) {
    uStack_890 = (*(u32*)((u8*)&auStack_8b0 + 0));
    uStack_88c = (*(u32*)((u8*)&auStack_8b0 + 4));
    uStack_888 = (*(u32*)((u8*)&auStack_8b0 + 8));
  }
  uStack_894 = DAT_0036aed8;
  uStack_884 = DAT_0036aed8;
  FUN_00144618(auStack_880,&uStack_8d0);
  FUN_00144e30(auStack_8b0);
  uVar1 = FUN_00141970(param_1);
  FUN_00144e50(auStack_8b0,auStack_880,uVar1);
  auStack_860[0] = 0;
  FUN_00141980(param_1,auStack_850);
  FUN_00141c38(param_1,0,auStack_8b0,auStack_860,param_5);
  lVar2 = FUN_00141e78(param_1,&uStack_8a0,auStack_860[0],param_3);
  *param_4 = (short)lVar2;
  uVar4 = 0;
  if ((lVar2 != 0xffff) && (uVar4 = 1, *(char *)(iVar3 + 0xd1) == '\0')) {
    auVar9 = _lqc2(*param_3);
    auVar5 = _lqc2(*(Q16 *)(iVar3 + 0x50));
    auVar6 = _lqc2(*(Q16 *)(iVar3 + 0x60));
    auVar7 = _lqc2(*(Q16 *)(iVar3 + 0x70));
    auVar8 = _lqc2(*(Q16 *)(iVar3 + 0x80));
    _vmulabc(auVar5,auVar9);
    _vmaddabc(auVar6,auVar9);
    _vmaddabc(auVar7,auVar9);
    auVar5 = _vmaddbc(auVar8,auVar9);
    auVar5 = _sqc2(auVar5);
    if (param_3 == &auStack_50) {
      uVar4 = 1;
    }
    else {
      (*(u32*)((u8*)&auStack_50 + 8)) = (*(u32*)((u8*)&auVar5 + 8));
      (*(u32*)((u8*)&auStack_50 + 12)) = (*(u32*)((u8*)&auVar5 + 12));
      *(int *)*param_3 = (*(u32*)((u8*)&auVar5 + 0));
      *(int *)(*param_3 + 4) = (*(u32*)((u8*)&auVar5 + 4));
      *(undefined4 *)(*param_3 + 8) = (*(u32*)((u8*)&auStack_50 + 8));
      *(undefined4 *)(*param_3 + 0xc) = (*(u32*)((u8*)&auStack_50 + 12));
      uVar4 = 1;
    }
  }
  return uVar4;
}

