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

s32 FUN_001917b0(...) asm("func_001917b0");
s32 FUN_00196768(...) asm("func_00196768");
s32 FUN_0019a480(...) asm("func_0019a480");
s32 FUN_0019a610(...) asm("func_0019a610");
s32 FUN_0019a6c0(...) asm("func_0019a6c0");
s32 FUN_001db198(...) asm("func_001db198");
extern u32 DAT_0032bae0 asm("D_0032bae0");
extern u32 LAB_0019a5a0 asm("D_0019a5a0");

// Ghidra decompile of 0x0019a480, wrapped mechanically (ad/fallback.py)

undefined8 FUN_0019a480_impl(undefined8 param_1,undefined8 param_2) asm("func_0019a480");
undefined8 FUN_0019a480_impl(undefined8 param_1,undefined8 param_2) {
  char cVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  
  uStack_28 = 0xffff;
  uVar7 = 0;
  uStack_30 = 0xff;
  uStack_2f = 0xff;
  uStack_2e = 0xff;
  uStack_2c = 0xffff;
  uStack_2a = 0xffff;
  lVar4 = FUN_001917b0();
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 8);
  if (lVar4 == 2) {
    if (*(char *)(iVar3 + 0x1e) != '\0') {
      return 0;
    }
    cVar1 = *(char *)(iVar3 + 0x1c);
  }
  else {
    cVar1 = *(char *)(iVar3 + 0x1c);
  }
  uStack_30 = 0x12;
  if (cVar1 == 'd') {
    uStack_2f = 1;
  }
  else if (cVar1 == 'e') {
    uStack_30 = 2;
    uStack_2f = 0x28;
  }
  else {
    uStack_30 = DAT_0032bae0;
    uStack_2f = *(undefined1 *)(iVar3 + 0x1c);
  }
  uStack_2e = *(undefined1 *)(iVar3 + 0x1d);
  lVar4 = FUN_00196768(uStack_30,uStack_2f);
  uVar2 = *(ushort *)(*(int *)((int)param_2 + 0x6c) + 2);
  if (uVar2 != 1) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        return 0;
      }
      if ((*(uint *)(iVar6 + 4) & 1) != 0) {
        return 0;
      }
      if (lVar4 != 0) {
        return 0;
      }
      lVar4 = FUN_001db198(param_2,*(undefined1 *)(*(int *)(iVar6 + 8) + 0x1e));
      if (lVar4 == 0) {
        return 0;
      }
      FUN_0019a610(param_1,&uStack_30,0);
      uVar5 = *(uint *)(iVar6 + 4) | 1;
      goto LAB_0019a5a0;
    }
    if (uVar2 != 2) {
      return 0;
    }
    uVar7 = 1;
  }
  if ((*(uint *)(iVar6 + 4) & 0x10) != 0) {
    return 0;
  }
  lVar4 = FUN_0019a6c0(param_1,&uStack_30,*(undefined4 *)((int)param_2 + 0x6c),lVar4 == 0,uVar7);
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(iVar6 + 4) | 0x10;
LAB_0019a5a0:
  *(uint *)(iVar6 + 4) = uVar5;
  return 0;
}

