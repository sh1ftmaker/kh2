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

s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_00192b30(...) asm("func_00192b30");
s32 FUN_00192c90(...) asm("func_00192c90");
s32 FUN_00192cc0(...) asm("func_00192cc0");
s32 FUN_00256cc0(...) asm("_ZN2Tz5CmTop13CreatePadHelpEiii");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_0028d980(...) asm("func_0028d980");
s32 FUN_002fdd68(...) asm("func_002fdd68");
extern u32 DAT_0035ef64 asm("D_0035ef64");
extern u32 DAT_0035ef68 asm("D_0035ef68");
extern u32 DAT_0035f03c asm("D_0035f03c");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");

// Ghidra decompile of 0x00256cc0, wrapped mechanically (ad/fallback.py)

void FUN_00256cc0_impl(long param_1,long param_2,long param_3) asm("_ZN2Tz5CmTop13CreatePadHelpEiii");
void FUN_00256cc0_impl(long param_1,long param_2,long param_3) {
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  Q16 auStack_50;
  
  iVar2 = 0;
  iVar1 = FUN_00257770();
  uVar3 = FUN_00192cc0(auStack_50,0x372940);
  uVar3 = FUN_00192b30(uVar3);
  iVar7 = iVar1 + 0xb290;
  if (-1 < param_3) {
    uVar4 = FUN_00192048(param_3);
    iVar2 = FUN_00192c90(uVar4,iVar7);
    iVar2 = iVar2 + -1;
  }
  if (-1 < param_2) {
    iVar6 = iVar7 + iVar2;
    if (iVar2 != 0) {
      iVar2 = iVar2 + (int)uVar3;
      FUN_002fdd68(iVar6,auStack_50,uVar3);
    }
    uVar4 = FUN_00192048(param_2);
    iVar6 = FUN_00192c90(uVar4,iVar7 + iVar2);
    iVar2 = iVar2 + iVar6 + -1;
  }
  if (-1 < param_1) {
    if (iVar2 != 0) {
      iVar6 = iVar7 + iVar2;
      iVar2 = iVar2 + (int)uVar3;
      FUN_002fdd68(iVar6,auStack_50,uVar3);
    }
    uVar3 = FUN_00192048(param_1);
    FUN_00192c90(uVar3,iVar7 + iVar2);
  }
  lVar5 = FUN_00139d78(iVar1 + 0xb7c);
  if (lVar5 == 0) {
    FUN_0028d980(iVar1 + 0xb7c,DAT_0035f3d4,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0xed,0xee,
                 0xffffffffffffffff);
    *(int *)(iVar1 + 0xd14) = iVar7;
    *(undefined4 *)(iVar1 + 0xd2c) = 1;
  }
  return;
}

