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

s32 FUN_0031a850(...) asm("_ZN2dk18TREASURE_INFO_BASEaSERKS0_");
s32 FUN_0031a9d8(...) asm("func_0031a9d8");

// Ghidra decompile of 0x0031a850, wrapped mechanically (ad/fallback.py)

undefined8 FUN_0031a850_impl(undefined8 param_1,int param_2) asm("_ZN2dk18TREASURE_INFO_BASEaSERKS0_");
undefined8 FUN_0031a850_impl(undefined8 param_1,int param_2) {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  FUN_0031a9d8();
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(iVar7 + 0xb4) = uVar1;
  *(undefined4 *)(iVar7 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(iVar7 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(iVar7 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(iVar7 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(iVar7 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(iVar7 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(iVar7 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(iVar7 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(iVar7 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(iVar7 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(iVar7 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(iVar7 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(iVar7 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  uVar1 = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(iVar7 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(iVar7 + 0xf0) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  uVar8 = *(undefined4 *)(param_2 + 0x104);
  uVar10 = *(undefined4 *)(param_2 + 0x108);
  uVar4 = *(undefined4 *)(param_2 + 0x10c);
  uVar5 = *(undefined4 *)(param_2 + 0x110);
  uVar6 = *(undefined4 *)(param_2 + 0x114);
  uVar9 = *(undefined4 *)(param_2 + 0x118);
  uVar12 = *(undefined4 *)(param_2 + 0x11c);
  uVar11 = *(undefined4 *)(param_2 + 0x120);
  uVar14 = *(undefined4 *)(param_2 + 0x124);
  uVar13 = *(undefined4 *)(param_2 + 0x128);
  uVar16 = *(undefined4 *)(param_2 + 300);
  uVar15 = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(iVar7 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(iVar7 + 0xf4) = uVar1;
  *(undefined4 *)(iVar7 + 0xf8) = uVar2;
  *(undefined4 *)(iVar7 + 0xfc) = uVar3;
  *(undefined4 *)(iVar7 + 0x104) = uVar8;
  *(undefined4 *)(iVar7 + 0x108) = uVar10;
  *(undefined4 *)(iVar7 + 0x10c) = uVar4;
  *(undefined4 *)(iVar7 + 0x110) = uVar5;
  *(undefined4 *)(iVar7 + 0x114) = uVar6;
  *(undefined4 *)(iVar7 + 0x118) = uVar9;
  *(undefined4 *)(iVar7 + 0x11c) = uVar12;
  *(undefined4 *)(iVar7 + 0x120) = uVar11;
  *(undefined4 *)(iVar7 + 0x124) = uVar14;
  *(undefined4 *)(iVar7 + 0x128) = uVar13;
  *(undefined4 *)(iVar7 + 300) = uVar16;
  *(undefined4 *)(iVar7 + 0x130) = uVar15;
  *(undefined4 *)(iVar7 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  uVar1 = *(undefined4 *)(param_2 + 0x154);
  uVar8 = *(undefined4 *)(param_2 + 0x13c);
  uVar2 = *(undefined4 *)(param_2 + 0x140);
  uVar3 = *(undefined4 *)(param_2 + 0x144);
  uVar4 = *(undefined4 *)(param_2 + 0x148);
  uVar5 = *(undefined4 *)(param_2 + 0x14c);
  uVar6 = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(iVar7 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(iVar7 + 0x13c) = uVar8;
  *(undefined4 *)(iVar7 + 0x140) = uVar2;
  *(undefined4 *)(iVar7 + 0x144) = uVar3;
  *(undefined4 *)(iVar7 + 0x148) = uVar4;
  *(undefined4 *)(iVar7 + 0x14c) = uVar5;
  *(undefined4 *)(iVar7 + 0x150) = uVar6;
  *(undefined4 *)(iVar7 + 0x154) = uVar1;
  return param_1;
}

