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

s32 FUN_00186ec0(...) asm("_ZN2YS6BTLOBJ17_OVR_is_withstandEPNS_6DAMAGEE");
s32 FUN_0018cae0(...) asm("func_0018cae0");
extern u32 LAB_00186f40 asm("D_00186f40");

// Ghidra decompile of 0x00186ec0, wrapped mechanically (ad/fallback.py)

undefined8 FUN_00186ec0_impl(int param_1,undefined8 param_2) asm("_ZN2YS6BTLOBJ17_OVR_is_withstandEPNS_6DAMAGEE");
undefined8 FUN_00186ec0_impl(int param_1,undefined8 param_2) {
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = (int)param_2;
  uVar4 = *(uint *)(param_1 + 0xabc);
  uVar5 = (uVar4 | *(uint *)(param_1 + 0xac0)) & ~*(uint *)(param_1 + 0xac4);
  if ((uVar5 & 0x200) != 0) {
    return 1;
  }
  if ((uVar5 & 0x400) != 0) {
    if (((uVar5 & 0x80000) == 0) && (*(char *)(iVar2 + 0x25) != '\0')) {
      uVar5 = *(uint *)(param_1 + 0xac4);
      goto LAB_00186f40;
    }
    lVar1 = FUN_0018cae0(param_2);
    if (lVar1 == 0) {
      return 1;
    }
    uVar4 = *(uint *)(param_1 + 0xabc);
  }
  uVar5 = *(uint *)(param_1 + 0xac4);
LAB_00186f40:
  if ((((uVar4 | *(uint *)(param_1 + 0xac0)) & ~uVar5 & 0x800) == 0) &&
     (*(char *)(iVar2 + 0x25) == '\0')) {
    uVar4 = *(uint *)(param_1 + 0x588);
  }
  else {
    lVar1 = FUN_0018cae0(param_2);
    if (lVar1 == 0) {
      if ((*(uint *)(*(int *)(iVar2 + 0x10) + 0x588) & 0x80) == 0) {
        return 1;
      }
      uVar4 = *(uint *)(param_1 + 0x588);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x588);
    }
  }
  uVar3 = 0;
  if ((((uVar4 & 0x80) != 0) && ((*(uint *)(param_1 + 0x160) & 0x4000) != 0)) &&
     (uVar3 = 1, *(char *)(iVar2 + 0x26) != '\0')) {
    uVar3 = 0;
  }
  return uVar3;
}

