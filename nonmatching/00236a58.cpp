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

s32 FUN_001063f0(...) asm("func_001063f0");
s32 FUN_00106450(...) asm("func_00106450");
s32 FUN_002361a0(...) asm("func_002361a0");
s32 FUN_002362b0(...) asm("func_002362b0");
s32 FUN_002367c8(...) asm("func_002367c8");
s32 FUN_00236a58(...) asm("_ZN2Tz9MenuBasic9SetGraResEz");

// Ghidra decompile of 0x00236a58, wrapped mechanically (ad/fallback.py)

void FUN_00236a58_impl(int param_1,int param_2,undefined4 param_3) asm("_ZN2Tz9MenuBasic9SetGraResEz");
void FUN_00236a58_impl(int param_1,int param_2,undefined4 param_3) {
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 8) = param_2;
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xc);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3 + puVar3[-1] * 0x68;
    while (bVar1 = puVar3 != puVar4, puVar4 = puVar4 + -0x68, bVar1) {
      (**(code **)*puVar4)(puVar4);
      puVar3 = *(undefined4 **)(param_1 + 0x14);
    }
    FUN_00106450(puVar3 + -4);
  }
  iVar6 = *(int *)(param_1 + 0x10);
  iVar7 = iVar6 + -1;
  iVar2 = FUN_001063f0(iVar6 * 0x1a0 + 0x10,*(undefined4 *)(param_1 + 4));
  *(int *)(iVar2 + 0xc) = iVar6;
  iVar5 = iVar2 + 0x10;
  if (iVar6 != 0) {
    do {
      iVar7 = iVar7 + -1;
      FUN_002361a0(iVar5);
      iVar5 = iVar5 + 0x1a0;
    } while (iVar7 != -1);
  }
  *(int *)(param_1 + 0x14) = iVar2 + 0x10;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar5 = 0;
    do {
      iVar2 = iVar6 * 8;
      iVar6 = iVar6 + 1;
      FUN_002362b0(*(int *)(param_1 + 0x14) + iVar5,
                   param_2 + *(int *)(iVar2 + *(int *)(param_1 + 0xc)));
      FUN_002367c8(*(int *)(param_1 + 0x14) + iVar5);
      if (*(char *)(param_2 + 6) == '\0') {
        iVar2 = *(int *)(param_1 + 0x10);
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + iVar5 + 400) = 1;
        iVar2 = *(int *)(param_1 + 0x10);
      }
      iVar5 = iVar5 + 0x1a0;
    } while (iVar6 < iVar2);
  }
  return;
}

