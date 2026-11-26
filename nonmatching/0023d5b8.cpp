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

s32 FUN_0014b208(...) asm("func_0014b208");
s32 FUN_0014b220(...) asm("func_0014b220");
s32 FUN_0014b468(...) asm("func_0014b468");
s32 FUN_0014b5e0(...) asm("func_0014b5e0");
s32 FUN_0014b608(...) asm("func_0014b608");
s32 FUN_0014b610(...) asm("func_0014b610");
s32 FUN_0014b618(...) asm("func_0014b618");
s32 FUN_0014b628(...) asm("func_0014b628");
s32 FUN_0014b630(...) asm("func_0014b630");
s32 FUN_0023d5b8(...) asm("_ZN2Tz7MenuObj4InitEv");
s32 FUN_0023e738(...) asm("func_0023e738");
extern u32 DAT_00371510 asm("D_00371510");
extern u32 DAT_00371518 asm("D_00371518");

// Ghidra decompile of 0x0023d5b8, wrapped mechanically (ad/fallback.py)

void FUN_0023d5b8_impl(int param_1) asm("_ZN2Tz7MenuObj4InitEv");
void FUN_0023d5b8_impl(int param_1) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0 < *(int *)(param_1 + 0xb6c)) {
    iVar1 = param_1 + 0x660;
    iVar2 = 0;
    iVar4 = param_1;
    iVar3 = param_1;
    do {
      *(char *)(iVar4 + 0xb64) = (char)iVar2;
      *(undefined1 *)(iVar4 + 0xb60) = 0x10;
      *(undefined4 *)(iVar1 + 0x70) = 0;
      iVar5 = iVar2 + 1;
      *(undefined4 *)(iVar1 + 0x74) = 0;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined1 *)(iVar1 + 0x13c) = 0;
      *(undefined4 *)(iVar3 + 0x14b0) = 0;
      iVar1 = iVar1 + 0x140;
      *(undefined4 *)(iVar3 + 0x14c0) = 0;
      *(undefined4 *)(iVar3 + 0x14d0) = 0;
      FUN_0023e738(param_1,iVar2,0,0);
      iVar3 = iVar3 + 4;
      iVar2 = iVar5;
    } while (iVar5 < *(int *)(param_1 + 0xb6c));
  }
  iVar4 = param_1 + 0xb80;
  *(undefined4 *)(param_1 + 0xb68) = 0;
  *(undefined1 *)(param_1 + 0x14e0) = 0;
  *(undefined1 *)(param_1 + 0x14e1) = 0;
  *(undefined1 *)(param_1 + 0x14e2) = 0;
  iVar2 = param_1 + 0xe90;
  FUN_0014b610(iVar4,0x31000070);
  param_1 = param_1 + 0x11a0;
  FUN_0014b608(iVar4,0x80140);
  FUN_0014b5e0(iVar4,6);
  FUN_0014b220(iVar4,0,0,0,0);
  FUN_0014b208(iVar4,0x200,0x1a0);
  FUN_0014b608(iVar2,0x80140);
  FUN_0014b610(iVar2,0x131000070);
  FUN_0014b5e0(iVar2,0x156);
  FUN_0014b630(iVar2,0x60);
  FUN_0014b618(iVar2,0x30003);
  FUN_0014b208(iVar2,0x200,0x1a0);
  FUN_0014b468(iVar2,0x200,0x1a0);
  FUN_0014b628(iVar2,DAT_00371510);
  FUN_0014b610(param_1,0x131000070);
  FUN_0014b5e0(param_1,0x156);
  FUN_0014b630(param_1,0x60);
  FUN_0014b618(param_1,0xd);
  FUN_0014b208(param_1,0x200,0x1a0);
  FUN_0014b468(param_1,0x200,0x1a0);
  FUN_0014b628(param_1,DAT_00371518);
  return;
}

