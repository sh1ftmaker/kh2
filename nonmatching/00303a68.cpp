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

s32 FUN_00303a68(...) asm("func_00303a68");

// Ghidra decompile of 0x00303a68, wrapped mechanically (ad/fallback.py)

undefined8 * FUN_00303a68_impl(undefined8 *param_1,undefined8 *param_2,uint param_3) asm("func_00303a68");
undefined8 * FUN_00303a68_impl(undefined8 *param_1,undefined8 *param_2,uint param_3) {
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if ((param_2 < param_1) && (puVar7 = (undefined8 *)((int)param_2 + param_3), param_1 < puVar7)) {
    puVar2 = (undefined1 *)((int)param_1 + param_3);
    iVar6 = param_3 - 1;
    if (iVar6 != -1) {
      do {
        puVar7 = (undefined8 *)((int)puVar7 + -1);
        puVar2 = puVar2 + -1;
        iVar6 = iVar6 + -1;
        *puVar2 = *(undefined1 *)puVar7;
      } while (iVar6 != -1);
      return param_1;
    }
  }
  else {
    puVar7 = param_1;
    if (param_3 < 0x20) {
      iVar6 = param_3 - 1;
    }
    else if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
      do {
        uVar3 = *param_2;
        uVar4 = *(undefined4 *)(param_2 + 1);
        uVar5 = *(undefined4 *)((int)param_2 + 0xc);
        param_3 = param_3 - 0x20;
        *(int *)puVar7 = (int)uVar3;
        *(int *)((int)puVar7 + 4) = (int)((ulong)uVar3 >> 0x20);
        *(undefined4 *)(puVar7 + 1) = uVar4;
        *(undefined4 *)((int)puVar7 + 0xc) = uVar5;
        uVar3 = param_2[2];
        uVar4 = *(undefined4 *)(param_2 + 3);
        uVar5 = *(undefined4 *)((int)param_2 + 0x1c);
        param_2 = param_2 + 4;
        *(int *)(puVar7 + 2) = (int)uVar3;
        *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar3 >> 0x20);
        *(undefined4 *)(puVar7 + 3) = uVar4;
        *(undefined4 *)((int)puVar7 + 0x1c) = uVar5;
        puVar7 = puVar7 + 4;
      } while (0x1f < param_3);
      for (; 7 < param_3; param_3 = param_3 - 8) {
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      }
      iVar6 = param_3 - 1;
    }
    else {
      iVar6 = param_3 - 1;
    }
    for (; iVar6 != -1; iVar6 = iVar6 + -1) {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)puVar7 = uVar1;
      puVar7 = (undefined8 *)((int)puVar7 + 1);
    }
  }
  return param_1;
}

