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

s32 FUN_0013b5d0(...) asm("func_0013b5d0");
s32 FUN_0013b988(...) asm("func_0013b988");
s32 FUN_0013c820(...) asm("func_0013c820");
s32 FUN_0013cb90(...) asm("func_0013cb90");
s32 FUN_0013cbb8(...) asm("_ZN2dk12COMMAND_DRAW8shortCutEPN2YS12COMMAND_MENUEb");
s32 FUN_0013ce08(...) asm("func_0013ce08");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_001b8e88(...) asm("func_001b8e88");
extern u32 DAT_00348520 asm("D_00348520");
extern u32 DAT_0036ad50 asm("D_0036ad50");

// Ghidra decompile of 0x0013cbb8, wrapped mechanically (ad/fallback.py)

void FUN_0013cbb8_impl(undefined8 param_1,int *param_2,undefined1 param_3) asm("_ZN2dk12COMMAND_DRAW8shortCutEPN2YS12COMMAND_MENUEb");
void FUN_0013cbb8_impl(undefined8 param_1,int *param_2,undefined1 param_3) {
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *(undefined1 *)((int)param_1 + 0xff) = 1;
  iVar3 = FUN_0013cb90();
  uVar5 = *(undefined4 *)(&DAT_00348520 + iVar3 * 0x14);
  if (*param_2 == 10) {
    uVar5 = 8;
  }
  FUN_0013b5d0(DAT_0036ad50,param_1,0,uVar5,0,param_3,0x1c,param_2[2] * -0x16 + 0x184,0);
  iVar4 = param_2[2];
  iVar8 = iVar4 * -0x16 + 0x19a;
  if (0 < iVar4) {
    piVar7 = param_2;
    iVar9 = 0;
    piVar6 = param_2;
    do {
      piVar7 = piVar7 + 3;
      uVar5 = 0;
      iVar4 = FUN_001b8e88(*(undefined2 *)((int)piVar6 + 0xe));
      iVar10 = iVar9 + 1;
      FUN_0013b988(param_1,param_2,*(undefined1 *)((int)piVar6 + 0x11),iVar9,0,1);
      pbVar1 = (byte *)((int)piVar6 + 0x12);
      piVar6 = piVar6 + 3;
      if (*pbVar1 != 0) {
        uVar5 = *(undefined4 *)(&DAT_00348520 + (iVar3 * 5 + (uint)*pbVar1) * 4);
      }
      uVar2 = FUN_00192048(*(undefined4 *)(iVar4 + 8));
      FUN_0013b5d0(DAT_0036ad50,param_1,0,uVar5,piVar7,param_3,0x1c,iVar8,uVar2);
      iVar8 = iVar8 + 0x16;
      iVar4 = param_2[2];
      iVar9 = iVar10;
    } while (iVar10 < iVar4);
  }
  *(int *)((int)param_1 + 0xdc) = iVar4;
  iVar3 = param_2[2];
  if (iVar3 < 7) {
    do {
      FUN_0013c820(param_1,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    iVar3 = param_2[2];
  }
  else {
    iVar3 = param_2[2];
  }
  FUN_0013ce08(param_1,iVar3);
  return;
}

