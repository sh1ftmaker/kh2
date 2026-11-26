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

s32 FUN_001a3570(...) asm("func_001a3570");
s32 FUN_001a6658(...) asm("_ZN2YS5MAGIC8GetTableEi");
extern u32 DAT_0032bae0 asm("D_0032bae0");
extern u32 DAT_01c6cb28 asm("D_01c6cb28");
extern u32 LAB_001a66a0 asm("D_001a66a0");

// Ghidra decompile of 0x001a6658, wrapped mechanically (ad/fallback.py)

byte * FUN_001a6658_impl(ulong param_1) asm("_ZN2YS5MAGIC8GetTableEi");
byte * FUN_001a6658_impl(ulong param_1) {
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar5 = 0;
  pbVar7 = (byte *)(DAT_01c6cb28 + 8);
  if (0 < *(int *)(DAT_01c6cb28 + 4)) {
    do {
      if (*pbVar7 == param_1) goto LAB_001a66a0;
      iVar5 = iVar5 + 1;
      pbVar7 = pbVar7 + 0x38;
    } while (iVar5 < *(int *)(DAT_01c6cb28 + 4));
  }
  pbVar7 = (byte *)0x0;
LAB_001a66a0:
  pbVar2 = (byte *)0x0;
  if (pbVar7 != (byte *)0x0) {
    lVar3 = 0;
    if ((*(short *)(pbVar7 + 0x24) != 0) && (lVar3 = FUN_001a3570(), lVar3 == 0)) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)(DAT_01c6cb28 + *(int *)(DAT_01c6cb28 + 4) * 0x38 + 8);
    pbVar2 = pbVar7;
    if (((pbVar7 + 0x38 < pbVar6) && (pbVar7[0x38] == *pbVar7)) &&
       ((long)(ulong)pbVar7[0x39] <= lVar3)) {
      bVar1 = pbVar7[0x3a];
      pbVar4 = pbVar7 + 0x38;
      while( true ) {
        if ((bVar1 == 0) || (bVar1 == DAT_0032bae0)) {
          pbVar7 = pbVar4;
        }
        pbVar2 = pbVar7;
        if (((pbVar6 <= pbVar4 + 0x38) || (pbVar4[0x38] != *pbVar7)) ||
           (lVar3 < (long)(ulong)pbVar4[0x39])) break;
        bVar1 = pbVar4[0x3a];
        pbVar4 = pbVar4 + 0x38;
      }
    }
  }
  return pbVar2;
}

