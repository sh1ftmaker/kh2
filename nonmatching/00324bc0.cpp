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

s32 FUN_00324bc0(...) asm("func_00324bc0");
s32 FUN_00324d50(...) asm("func_00324d50");
extern undefined *PTR_FUN_0035eaf8 asm("D_0035eaf8");

// Ghidra decompile of 0x00324bc0, wrapped mechanically (ad/fallback.py)

void FUN_00324bc0_impl(undefined4 *param_1,int param_2) asm("func_00324bc0");
void FUN_00324bc0_impl(undefined4 *param_1,int param_2) {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  FUN_00324d50();
  uVar1 = *(undefined4 *)(param_2 + 0xb0);
  uVar2 = *(undefined4 *)(param_2 + 0xb4);
  *param_1 = &PTR_FUN_0035eaf8;
  param_1[0x2d] = uVar2;
  param_1[0x2c] = uVar1;
  param_1[0x2e] = *(undefined4 *)(param_2 + 0xb8);
  param_1[0x2f] = *(undefined4 *)(param_2 + 0xbc);
  param_1[0x30] = *(undefined4 *)(param_2 + 0xc0);
  param_1[0x31] = *(undefined4 *)(param_2 + 0xc4);
  param_1[0x32] = *(undefined4 *)(param_2 + 200);
  param_1[0x33] = *(undefined4 *)(param_2 + 0xcc);
  param_1[0x34] = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x35] = *(undefined4 *)(param_2 + 0xd4);
  param_1[0x36] = *(undefined4 *)(param_2 + 0xd8);
  param_1[0x37] = *(undefined4 *)(param_2 + 0xdc);
  param_1[0x38] = *(undefined4 *)(param_2 + 0xe0);
  param_1[0x39] = *(undefined4 *)(param_2 + 0xe4);
  param_1[0x3a] = *(undefined4 *)(param_2 + 0xe8);
  uVar1 = *(undefined4 *)(param_2 + 0xf0);
  param_1[0x3b] = *(undefined4 *)(param_2 + 0xec);
  uVar8 = *(undefined4 *)(param_2 + 0x100);
  param_1[0x3c] = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  uVar6 = *(undefined4 *)(param_2 + 0x104);
  uVar10 = *(undefined4 *)(param_2 + 0x108);
  uVar4 = *(undefined4 *)(param_2 + 0x10c);
  uVar5 = *(undefined4 *)(param_2 + 0x110);
  uVar7 = *(undefined4 *)(param_2 + 0x114);
  uVar9 = *(undefined4 *)(param_2 + 0x118);
  uVar12 = *(undefined4 *)(param_2 + 0x11c);
  uVar11 = *(undefined4 *)(param_2 + 0x120);
  uVar14 = *(undefined4 *)(param_2 + 0x124);
  uVar13 = *(undefined4 *)(param_2 + 0x128);
  uVar16 = *(undefined4 *)(param_2 + 300);
  uVar15 = *(undefined4 *)(param_2 + 0x130);
  param_1[0x40] = uVar8;
  param_1[0x3d] = uVar1;
  param_1[0x3e] = uVar2;
  param_1[0x3f] = uVar3;
  param_1[0x41] = uVar6;
  param_1[0x42] = uVar10;
  param_1[0x43] = uVar4;
  param_1[0x44] = uVar5;
  param_1[0x45] = uVar7;
  param_1[0x46] = uVar9;
  param_1[0x47] = uVar12;
  param_1[0x48] = uVar11;
  param_1[0x49] = uVar14;
  param_1[0x4a] = uVar13;
  param_1[0x4b] = uVar16;
  param_1[0x4c] = uVar15;
  param_1[0x4d] = *(undefined4 *)(param_2 + 0x134);
  uVar6 = *(undefined4 *)(param_2 + 0x138);
  uVar7 = *(undefined4 *)(param_2 + 0x13c);
  uVar1 = *(undefined4 *)(param_2 + 0x140);
  uVar2 = *(undefined4 *)(param_2 + 0x144);
  uVar3 = *(undefined4 *)(param_2 + 0x148);
  uVar4 = *(undefined4 *)(param_2 + 0x14c);
  uVar5 = *(undefined4 *)(param_2 + 0x150);
  param_1[0x55] = *(undefined4 *)(param_2 + 0x154);
  param_1[0x4e] = uVar6;
  param_1[0x4f] = uVar7;
  param_1[0x50] = uVar1;
  param_1[0x51] = uVar2;
  param_1[0x52] = uVar3;
  param_1[0x53] = uVar4;
  param_1[0x54] = uVar5;
  return;
}

