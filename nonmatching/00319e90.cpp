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

s32 FUN_00319e90(...) asm("func_00319e90");

// Ghidra decompile of 0x00319e90, wrapped mechanically (ad/fallback.py)

void FUN_00319e90_impl(undefined4 *param_1,undefined4 *param_2) asm("func_00319e90");
void FUN_00319e90_impl(undefined4 *param_1,undefined4 *param_2) {
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  uVar5 = param_2[0xd];
  uVar6 = param_2[0xe];
  uVar7 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar7;
  uVar5 = param_2[0x11];
  uVar6 = param_2[0x12];
  uVar7 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar5;
  param_1[0x12] = uVar6;
  param_1[0x13] = uVar7;
  uVar5 = param_2[0x15];
  uVar6 = param_2[0x16];
  uVar7 = param_2[0x17];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar5;
  param_1[0x16] = uVar6;
  param_1[0x17] = uVar7;
  uVar1 = *(undefined2 *)((int)param_2 + 0x62);
  uVar2 = *(undefined2 *)(param_2 + 0x19);
  uVar3 = *(undefined2 *)(param_2 + 0x18);
  uVar4 = *(undefined2 *)((int)param_2 + 0x66);
  uVar5 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  *(undefined2 *)(param_1 + 0x18) = uVar3;
  *(undefined2 *)((int)param_1 + 0x62) = uVar1;
  *(undefined2 *)(param_1 + 0x19) = uVar2;
  *(undefined2 *)((int)param_1 + 0x66) = uVar4;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  uVar5 = param_2[0x1e];
  uVar6 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1e] = uVar5;
  param_1[0x1f] = uVar6;
  return;
}

