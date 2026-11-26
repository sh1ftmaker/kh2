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

s32 FUN_00104f58(...) asm("func_00104f58");
s32 FUN_00149fe0(...) asm("func_00149fe0");
s32 FUN_0014a138(...) asm("func_0014a138");
s32 FUN_0019f070(...) asm("_ZN2YS6JUMPER4execEj");
s32 FUN_0019f2a8(...) asm("func_0019f2a8");
s32 FUN_001a60c8(...) asm("func_001a60c8");
s32 FUN_001a8bb8(...) asm("func_001a8bb8");
s32 FUN_001a8bd0(...) asm("func_001a8bd0");
s32 FUN_001a8d40(...) asm("func_001a8d40");
s32 FUN_001ada38(...) asm("func_001ada38");
s32 FUN_001d94f8(...) asm("func_001d94f8");
s32 FUN_00253180(...) asm("func_00253180");
s32 FUN_002533e0(...) asm("func_002533e0");
extern u32 DAT_01c62f98 asm("D_01c62f98");
extern u32 DAT_01c62fa0 asm("D_01c62fa0");
extern u32 DAT_01c62fa8 asm("D_01c62fa8");
extern u32 LAB_0019f138 asm("D_0019f138");
extern u32 LAB_0019f1c8 asm("D_0019f1c8");

// Ghidra decompile of 0x0019f070, wrapped mechanically (ad/fallback.py)

void FUN_0019f070_impl(undefined8 param_1,uint param_2) asm("_ZN2YS6JUMPER4execEj");
void FUN_0019f070_impl(undefined8 param_1,uint param_2) {
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  byte abStack_60 [4];
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_50;
  
  uStack_58 = 0xffff;
  abStack_60[0] = 0xff;
  abStack_60[1] = 0xff;
  abStack_60[2] = 0xff;
  uStack_5c = 0xffff;
  uStack_5a = 0xffff;
  uVar8 = 0;
  if (DAT_01c62fa0 == '\0') {
    FUN_001a8bb8(0x1c62fa8);
    DAT_01c62fa0 = '\x01';
  }
  piVar6 = (int *)param_1;
  uVar1 = piVar6[4];
  uVar7 = 0;
  if ((-1 < (int)uVar1) && (uVar7 = uVar1, (uVar1 & 0x4000) != 0)) {
    uVar7 = uVar1 & 0xffffbfff | 0x80000000;
  }
  lVar2 = FUN_0019f2a8(param_1,abStack_60);
  uVar7 = uVar7 | param_2;
  iVar5 = *piVar6;
  if (iVar5 == 5) {
    FUN_00253180(0xf,0xffffffffffffffff);
    iVar5 = piVar6[5];
  }
  else if (iVar5 < 6) {
    if (iVar5 == 4) {
      uVar7 = 1;
      if (lVar2 == 0) {
        if (-1 < (int)DAT_01c62f98) {
          *(undefined1 *)(piVar6 + 1) = (undefined1)DAT_01c62f98;
          DAT_01c62f98 = 0xffffffff;
        }
        FUN_00149fe0((char)piVar6[1],0);
        iVar5 = piVar6[5];
        goto LAB_0019f138;
      }
      DAT_01c62f98 = (uint)*(byte *)(piVar6 + 1);
    }
    iVar5 = piVar6[5];
  }
  else if (iVar5 == 6) {
    FUN_0014a138(0);
    iVar5 = piVar6[5];
  }
  else {
    iVar5 = piVar6[5];
  }
LAB_0019f138:
  if (-1 < iVar5) {
    uVar4 = 0xffffffffffffffff;
    if (lVar2 != 0) {
      uVar4 = (ulong)abStack_60[0];
    }
    uVar3 = FUN_001a8bd0(uVar4);
    DAT_01c62fa8 = *(undefined4 *)uVar3;
    FUN_001a8d40(uVar3,piVar6[5]);
    iVar5 = piVar6[7];
    if (iVar5 != 0) {
      uVar8 = 0;
      if (iVar5 != 1) {
        uVar8 = 2;
        if (iVar5 != 2) goto LAB_0019f1c8;
        uStack_50 = DAT_01c62fa8;
        FUN_001d94f8(DAT_01c62fa8,uVar3);
      }
      FUN_001a60c8();
      FUN_002533e0(uVar8,0x1c62fa8);
      uVar8 = 2;
    }
  }
LAB_0019f1c8:
  if (lVar2 == 0) {
    if (piVar6[6] != 0) {
      FUN_001ada38(piVar6[6],uVar7);
    }
  }
  else {
    FUN_00104f58(abStack_60,uVar7,uVar8,0,piVar6[6]);
  }
  return;
}

