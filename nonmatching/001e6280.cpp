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

s32 FUN_001e41e0(...) asm("func_001e41e0");
s32 FUN_001e6038(...) asm("func_001e6038");
s32 FUN_001e6280(...) asm("func_001e6280");
s32 FUN_001e7cc0(...) asm("func_001e7cc0");
s32 FUN_001e8bb8(...) asm("func_001e8bb8");
s32 FUN_001e8c28(...) asm("func_001e8c28");
s32 FUN_002fdfc8(...) asm("func_002fdfc8");
extern u32 DAT_00352be0 asm("D_00352be0");
extern u32 DAT_00354690 asm("D_00354690");
extern u32 DAT_00354694 asm("D_00354694");
extern u32 DAT_0036ef20 asm("D_0036ef20");
extern u32 DAT_01d9e6e0 asm("D_01d9e6e0");
extern u32 DAT_01d9ea9c asm("D_01d9ea9c");
extern u32 LAB_001e634c asm("D_001e634c");
extern u32 LAB_001e64bc asm("D_001e64bc");
_GHIDRA_ANY(trap)
extern u32 REG_RCNT0_COUNT asm("D_10000000");

// Ghidra decompile of 0x001e6280, wrapped mechanically (ad/fallback.py)

undefined4 FUN_001e6280_impl(long param_1,long param_2) asm("func_001e6280");
undefined4 FUN_001e6280_impl(long param_1,long param_2) {
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = 1;
  if (param_1 == 0) {
    FUN_002fdfc8(0x36e978,0x36e9c0);
    FUN_002fdfc8(0x36e998,0x36e9d0,0x859);
    trap(0);
  }
  iVar5 = (int)param_1;
  DAT_01d9e6e0 = iVar5;
  FUN_001e6038(param_1);
  if (DAT_01d9ea9c == 0) {
    fVar7 = *(float *)(iVar5 + 0xa4);
    if (((*(ulong *)(DAT_01d9e6e0 + 0xa8) & 0xff0000ff00) != 0) ||
       ((*(ushort *)(iVar5 + 0x86) & 8) != 0)) goto LAB_001e634c;
    if (0.0 < fVar7) {
      fVar7 = fVar7 - DAT_00352be0;
      *(float *)(iVar5 + 0xa4) = fVar7;
      goto LAB_001e634c;
    }
  }
  else {
    fVar7 = *(float *)(iVar5 + 0xa4);
LAB_001e634c:
    if (0.0 < fVar7) {
      return 1;
    }
  }
  if (*(int *)(iVar5 + 0x58) == 0) {
    *(undefined1 *)(iVar5 + 0x90) = 0;
  }
  else if (*(char *)(iVar5 + 0xab) == '\0') {
    if (param_2 == 0) {
      *(undefined1 *)(iVar5 + 0x90) = 0;
    }
    else {
      *(undefined1 *)(iVar5 + 0x90) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x90) = 0;
  }
  if (*(char *)(iVar5 + 0x90) == '\0') {
    *(undefined4 *)(iVar5 + 0x120) = 0;
  }
  else {
    if (*(char *)(*(int *)(iVar5 + 0x8c) + 0xf8) != '\0') {
      DAT_01d9e6e0 = 0;
      return 1;
    }
    *(undefined4 *)(iVar5 + 0x120) = 0;
  }
  uVar2 = REG_RCNT0_COUNT;
  bVar1 = false;
  *(undefined4 *)(iVar5 + 0x100) = uVar2;
  uVar2 = REG_RCNT0_COUNT;
  *(undefined4 *)(iVar5 + 0xd0) = uVar2;
  if (DAT_00354690 == *(int *)(iVar5 + 0x88)) {
    bVar1 = DAT_00354694 == *(byte *)(iVar5 + 0x93);
  }
  if (!bVar1) {
    FUN_001e41e0(param_1);
  }
  fVar7 = *(float *)(iVar5 + 0x98) + DAT_00352be0;
  bVar1 = DAT_0036ef20 <= fVar7;
  *(float *)(iVar5 + 0x98) = fVar7;
  if (bVar1) {
    *(undefined1 *)(iVar5 + 0xac) = 0;
    iVar4 = *(int *)(iVar5 + 0x60);
    bVar1 = false;
    while (0 < iVar4) {
      FUN_001e8bb8(param_1);
      lVar3 = FUN_001e8c28(param_1,0);
      if (lVar3 != 0) {
        bVar1 = true;
        FUN_001e7cc0(param_1);
        uVar6 = 0;
        break;
      }
      iVar4 = *(int *)(iVar5 + 0x60) + -1;
      *(int *)(iVar5 + 0x60) = iVar4;
    }
    fVar7 = DAT_0036ef20;
    if (bVar1) {
      DAT_00354690 = *(undefined4 *)(iVar5 + 0x88);
      goto LAB_001e64bc;
    }
    fVar8 = *(float *)(iVar5 + 0x98) - DAT_0036ef20;
    *(float *)(iVar5 + 0x98) = fVar8;
    while (bVar1 = false, fVar7 <= fVar8) {
      FUN_001e8bb8(param_1);
      lVar3 = FUN_001e8c28(param_1,0);
      if (lVar3 != 0) {
        bVar1 = true;
        FUN_001e7cc0(param_1);
        uVar6 = 0;
        break;
      }
      fVar8 = *(float *)(iVar5 + 0x98) - fVar7;
      *(float *)(iVar5 + 0x98) = fVar8;
    }
    if (bVar1) {
      DAT_00354690 = *(undefined4 *)(iVar5 + 0x88);
      goto LAB_001e64bc;
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0xac) = 1;
  }
  FUN_001e8bb8(param_1);
  DAT_00354690 = *(undefined4 *)(iVar5 + 0x88);
LAB_001e64bc:
  iVar4 = REG_RCNT0_COUNT;
  DAT_00354694 = (uint)*(byte *)(iVar5 + 0x93);
  iVar4 = *(int *)(iVar5 + 0xd4) + (iVar4 - *(int *)(iVar5 + 0xd0));
  *(int *)(iVar5 + 0xd4) = iVar4;
  if (*(int *)(iVar5 + 0xd8) < iVar4) {
    *(int *)(iVar5 + 0xd8) = iVar4;
  }
  iVar4 = REG_RCNT0_COUNT;
  iVar4 = *(int *)(iVar5 + 0x104) + (iVar4 - *(int *)(iVar5 + 0x100));
  *(int *)(iVar5 + 0x104) = iVar4;
  if (*(int *)(iVar5 + 0x108) < iVar4) {
    *(int *)(iVar5 + 0x108) = iVar4;
  }
  iVar4 = *(int *)(iVar5 + 0x124) - *(int *)(iVar5 + 0x120);
  *(int *)(iVar5 + 0x124) = iVar4;
  if (*(int *)(iVar5 + 0x128) < iVar4) {
    *(int *)(iVar5 + 0x128) = iVar4;
  }
  DAT_01d9e6e0 = 0;
  return uVar6;
}

