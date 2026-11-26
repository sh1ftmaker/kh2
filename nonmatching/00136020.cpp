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

s32 FUN_00136020(...) asm("func_00136020");
s32 FUN_001dc5f0(...) asm("func_001dc5f0");
s32 FUN_001dca20(...) asm("func_001dca20");

// Ghidra decompile of 0x00136020, wrapped mechanically (ad/fallback.py)

void FUN_00136020_impl(int param_1) asm("func_00136020");
void FUN_00136020_impl(int param_1) {
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 auStack_140 [64];
  
  puVar10 = auStack_140;
  puVar6 = auStack_140;
  iVar5 = *(int *)(param_1 + 0xc);
  iVar9 = 0;
  if (0 < iVar5) {
    iVar8 = 0;
    iVar7 = param_1;
    do {
      iVar3 = *(int *)(iVar7 + 0x10);
      iVar1 = *(int *)(iVar7 + 0x14);
      if (iVar3 != 0) {
        lVar4 = FUN_001dca20(iVar3);
        if (lVar4 == 0) {
          iVar3 = FUN_001dc5f0(iVar3);
          iVar5 = *(int *)(param_1 + 0xc);
          if (iVar3 == iVar1) {
            iVar9 = iVar9 + 1;
            uVar2 = *(undefined4 *)(iVar7 + 0x14);
            *puVar10 = *(undefined4 *)(iVar7 + 0x10);
            puVar10[1] = uVar2;
            puVar10 = puVar10 + 2;
          }
        }
        else {
          iVar5 = *(int *)(param_1 + 0xc);
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 8;
    } while (iVar8 < iVar5);
  }
  iVar5 = 0;
  if (0 < iVar9) {
    iVar5 = 0;
    iVar7 = param_1;
    do {
      iVar5 = iVar5 + 1;
      uVar2 = puVar6[1];
      *(undefined4 *)(iVar7 + 0x10) = *puVar6;
      puVar6 = puVar6 + 2;
      *(undefined4 *)(iVar7 + 0x14) = uVar2;
      iVar7 = iVar7 + 8;
    } while (iVar5 < iVar9);
  }
  if (iVar5 < 0x20) {
    iVar7 = iVar5 * 8 + param_1;
    do {
      *(undefined4 *)(iVar7 + 0x10) = 0;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(iVar7 + 0x14) = 0;
      iVar7 = iVar7 + 8;
    } while (iVar5 < 0x20);
  }
  *(int *)(param_1 + 0xc) = iVar9;
  return;
}

