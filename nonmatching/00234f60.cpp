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

s32 FUN_002349e8(...) asm("func_002349e8");
s32 FUN_00234f60(...) asm("func_00234f60");
s32 FUN_002fbc78(...) asm("func_002fbc78");
s32 FUN_002fc378(...) asm("func_002fc378");
s32 FUN_002fc498(...) asm("func_002fc498");
extern u32 DAT_0035e374 asm("D_0035e374");
extern u32 DAT_01dae400 asm("D_01dae400");
extern u32 DAT_01dae404 asm("D_01dae404");
extern u32 DAT_01dae438 asm("D_01dae438");
extern u32 DAT_01dae470 asm("D_01dae470");
extern u32 DAT_01dae478 asm("D_01dae478");
extern u32 DAT_01dae47c asm("D_01dae47c");
extern u32 DAT_01dae480 asm("D_01dae480");
extern u32 DAT_01dae484 asm("D_01dae484");
extern u32 DAT_01dae488 asm("D_01dae488");
extern u32 DAT_01dae48c asm("D_01dae48c");
extern u32 DAT_01dae490 asm("D_01dae490");
extern u32 DAT_01dae494 asm("D_01dae494");
extern u32 DAT_01dae498 asm("D_01dae498");
extern u32 DAT_01dae580 asm("D_01dae580");
extern u32 DAT_01dae588 asm("D_01dae588");
extern u32 LAB_002350f0 asm("D_002350f0");

// Ghidra decompile of 0x00234f60, wrapped mechanically (ad/fallback.py)

void FUN_00234f60_impl(void) asm("func_00234f60");
void FUN_00234f60_impl(void) {
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_0035e374 == 1) {
    lVar1 = FUN_002fc378(1,0,0x1dae470);
    iVar4 = DAT_01dae404;
    if (lVar1 != 0) {
      DAT_0035e374 = DAT_0035e374 + 1;
    }
  }
  else {
    iVar4 = DAT_01dae404;
    if (DAT_0035e374 < 2) {
      iVar3 = 0;
      if (DAT_0035e374 == 0) {
        do {
          iVar4 = iVar3 + 1;
          *(undefined4 *)(&DAT_01dae580 + iVar3 * 4) = 1;
          uVar2 = FUN_002fbc78(iVar3);
          *(undefined4 *)(&DAT_01dae588 + iVar3 * 4) = uVar2;
          iVar3 = iVar4;
        } while (iVar4 < 2);
        iVar4 = (DAT_01dae478 * 4 + DAT_01dae47c) * 0x20;
        FUN_002fc498(DAT_01dae478,DAT_01dae47c,&DAT_01dae480 + iVar4,&DAT_01dae488 + iVar4,
                     &DAT_01dae484 + iVar4);
        DAT_0035e374 = DAT_0035e374 + 1;
        iVar4 = DAT_01dae404;
      }
    }
    else if (DAT_0035e374 == 2) {
      if ((-3 < DAT_01dae470) || (DAT_01dae400 == 0)) {
        iVar4 = (DAT_01dae478 * 4 + DAT_01dae47c) * 0x20;
        if (*(int *)(&DAT_01dae480 + iVar4) == 3) {
          *(undefined4 *)(&DAT_01dae48c + iVar4) = 3;
        }
        else if (DAT_01dae470 == -1) {
          *(undefined4 *)(&DAT_01dae494 + iVar4) = 1;
          DAT_01dae438 = 0;
          *(undefined4 *)(&DAT_01dae48c + iVar4) = 1;
          *(undefined4 *)(&DAT_01dae490 + iVar4) = 1;
        }
        else {
          if (DAT_01dae470 < 0) {
            if (DAT_01dae470 == -2) {
              *(undefined4 *)(&DAT_01dae494 + iVar4) = 1;
              *(undefined4 *)(&DAT_01dae48c + iVar4) = 2;
              DAT_01dae438 = 0;
              *(undefined4 *)(&DAT_01dae490 + iVar4) = 1;
              goto LAB_002350f0;
            }
          }
          else if (DAT_01dae470 == 0) {
            *(undefined4 *)(&DAT_01dae48c + iVar4) = 0;
            DAT_01dae438 = 0;
            goto LAB_002350f0;
          }
          iVar4 = (DAT_01dae478 * 4 + DAT_01dae47c) * 0x20;
          *(undefined4 *)(&DAT_01dae48c + iVar4) = 3;
          if (DAT_01dae438 == 0) {
            *(undefined4 *)(&DAT_01dae498 + iVar4) = 1;
            *(undefined4 *)(&DAT_01dae490 + iVar4) = 1;
          }
          DAT_01dae438 = 1;
        }
LAB_002350f0:
        FUN_002349e8();
        return;
      }
      DAT_0035e374 = 3;
      DAT_01dae404 = 1;
      DAT_01dae400 = DAT_01dae400 + -1;
      iVar4 = DAT_01dae404;
    }
    else if ((DAT_0035e374 == 3) && (iVar4 = DAT_01dae404 + -1, DAT_01dae404 == 0)) {
      DAT_0035e374 = 0;
      iVar4 = DAT_01dae404;
    }
  }
  DAT_01dae404 = iVar4;
  return;
}

