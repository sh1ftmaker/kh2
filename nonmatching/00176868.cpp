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

s32 FUN_00176868(...) asm("_ZN2YS5PARTY16check_blow_recovERNS_7COMMANDE");
s32 FUN_00176970(...) asm("func_00176970");
s32 FUN_00176fb0(...) asm("func_00176fb0");
s32 FUN_00177008(...) asm("func_00177008");
s32 FUN_00177860(...) asm("func_00177860");
s32 FUN_00177a28(...) asm("func_00177a28");
s32 FUN_001a0920(...) asm("func_001a0920");

// Ghidra decompile of 0x00176868, wrapped mechanically (ad/fallback.py)

undefined4 FUN_00176868_impl(undefined8 param_1,int param_2) asm("_ZN2YS5PARTY16check_blow_recovERNS_7COMMANDE");
undefined4 FUN_00176868_impl(undefined8 param_1,int param_2) {
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  uVar1 = *(uint *)(*(int *)(iVar5 + 0xc) + 8);
  if ((uVar1 & 0x40) != 0) {
    if ((uVar1 & 0x800) != 0) {
      return 0;
    }
    if (*(float *)(iVar5 + 0xf8) < *(float *)(*(int *)(iVar5 + 0x130) + 0x58)) {
      return 0;
    }
    if ((*(uint *)(iVar5 + 0x7f8) & 4) != 0) {
      return 0;
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((uVar1 & 2) != 0) {
      puVar2 = (uint *)FUN_00177860();
      if ((*puVar2 & 0x100000) != 0) {
        FUN_00176970(param_1);
        return 1;
      }
      uVar1 = *(uint *)(param_2 + 4);
    }
    if ((uVar1 & 8) == 0) {
      return 0;
    }
    FUN_00177a28(param_1);
    lVar3 = FUN_00176fb0(param_1,0x28);
    if ((lVar3 != 0) && (lVar4 = FUN_001a0920(lVar3,param_1), lVar4 != 0)) {
      FUN_00177008(param_1,lVar3,*(int *)(iVar5 + 0xb40) + 4);
      return 1;
    }
  }
  return 0;
}

