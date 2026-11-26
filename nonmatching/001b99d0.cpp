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

s32 FUN_001b99d0(...) asm("_ZN2YS3OBJ10CalcMotionEv");
s32 FUN_001b9b28(...) asm("func_001b9b28");
s32 FUN_001c0cd8(...) asm("func_001c0cd8");
s32 FUN_00320468(...) asm("func_00320468");
extern u32 DAT_01d48db0 asm("D_01d48db0");
extern u32 DAT_01d48db4 asm("D_01d48db4");

// Ghidra decompile of 0x001b99d0, wrapped mechanically (ad/fallback.py)

void FUN_001b99d0_impl(void) asm("_ZN2YS3OBJ10CalcMotionEv");
void FUN_001b99d0_impl(void) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar1 = DAT_01d48db0;
  while (iVar3 = iVar1, iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x8b8);
    if (*(int *)(iVar3 + 0x800) != 0) {
      FUN_001b9b28(iVar3);
      if (iVar3 == DAT_01d48db0) {
        DAT_01d48db0 = *(int *)(iVar3 + 0x8b8);
        iVar6 = 0;
      }
      else {
        iVar4 = *(int *)(DAT_01d48db0 + 0x8b8);
        iVar6 = DAT_01d48db0;
        while (iVar2 = iVar4, iVar2 != iVar3) {
          iVar6 = iVar2;
          iVar4 = *(int *)(iVar2 + 0x8b8);
        }
        *(undefined4 *)(iVar6 + 0x8b8) = *(undefined4 *)(iVar3 + 0x8b8);
      }
      if (iVar3 == DAT_01d48db4) {
        DAT_01d48db4 = iVar6;
      }
      *(undefined4 *)(iVar3 + 0x8b8) = 0;
    }
  }
  while (iVar1 = DAT_01d48db0, DAT_01d48db0 != 0) {
    while (iVar3 = iVar1, iVar3 != 0) {
      iVar1 = DAT_01d48db0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x8b8);
      }
      lVar5 = FUN_001c0cd8(iVar3);
      if ((lVar5 == 0) || ((*(uint *)(*(int *)(iVar3 + 0x570) + 0x7f8) & 0x100) != 0)) {
        FUN_001b9b28(iVar3);
        FUN_00320468(0x1d48db0,iVar3);
      }
    }
  }
  return;
}

