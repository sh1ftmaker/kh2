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

s32 FUN_00233ce0(...) asm("_ZN2YI5MCARD4InitEv");
s32 FUN_002fbc78(...) asm("func_002fbc78");
extern u32 DAT_0035e360 asm("D_0035e360");
extern u32 DAT_0035e364 asm("D_0035e364");
extern u32 DAT_0035e368 asm("D_0035e368");
extern u32 DAT_0035e36c asm("D_0035e36c");
extern u32 DAT_0035e370 asm("D_0035e370");
extern u32 DAT_0035e374 asm("D_0035e374");
extern u32 DAT_01dae420 asm("D_01dae420");
extern u32 DAT_01dae424 asm("D_01dae424");
extern u32 DAT_01dae428 asm("D_01dae428");
extern u32 DAT_01dae42c asm("D_01dae42c");
extern u32 DAT_01dae430 asm("D_01dae430");
extern u32 DAT_01dae438 asm("D_01dae438");
extern u32 DAT_01dae43c asm("D_01dae43c");
extern u32 DAT_01dae440 asm("D_01dae440");
extern u32 DAT_01dae444 asm("D_01dae444");
extern u32 DAT_01dae448 asm("D_01dae448");
extern u32 DAT_01dae44c asm("D_01dae44c");
extern u32 DAT_01dae450 asm("D_01dae450");
extern u32 DAT_01dae454 asm("D_01dae454");
extern u32 DAT_01dae458 asm("D_01dae458");
extern u32 DAT_01dae45c asm("D_01dae45c");
extern u32 DAT_01dae460 asm("D_01dae460");
extern u32 DAT_01dae464 asm("D_01dae464");
extern u32 DAT_01dae468 asm("D_01dae468");
extern u32 DAT_01dae478 asm("D_01dae478");
extern u32 DAT_01dae47c asm("D_01dae47c");
extern u32 DAT_01dae480 asm("D_01dae480");
extern u32 DAT_01dae580 asm("D_01dae580");
extern u32 DAT_01dae588 asm("D_01dae588");

// Ghidra decompile of 0x00233ce0, wrapped mechanically (ad/fallback.py)

void FUN_00233ce0_impl(void) asm("_ZN2YI5MCARD4InitEv");
void FUN_00233ce0_impl(void) {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = 0;
  do {
    iVar5 = iVar3 + 1;
    *(undefined4 *)(&DAT_01dae580 + iVar3 * 4) = 1;
    uVar1 = FUN_002fbc78(iVar3);
    *(undefined4 *)(&DAT_01dae588 + iVar3 * 4) = uVar1;
    iVar3 = iVar5;
  } while (iVar5 < 2);
  DAT_0035e36c = 1;
  DAT_0035e370 = 0;
  DAT_01dae420 = 0;
  DAT_0035e374 = 0;
  DAT_0035e360 = 0;
  DAT_01dae430 = 0;
  DAT_0035e368 = 1;
  DAT_0035e364 = 0;
  DAT_01dae428 = 300;
  DAT_01dae47c = 0;
  DAT_01dae478 = 0;
  iVar5 = 0;
  DAT_01dae424 = 300;
  DAT_01dae42c = 0;
  iVar3 = 0;
  do {
    iVar2 = 3;
    puVar4 = (undefined4 *)(&DAT_01dae480 + iVar3);
    do {
      *puVar4 = 0xffffffff;
      iVar2 = iVar2 + -1;
      puVar4[1] = 0xffffffff;
      puVar4[2] = 0;
      puVar4[3] = 0xffffffff;
      puVar4[4] = 0xffffffff;
      puVar4[5] = 0xffffffff;
      puVar4[6] = 0xffffffff;
      puVar4[7] = 0;
      puVar4 = puVar4 + 8;
    } while (-1 < iVar2);
    iVar5 = iVar5 + 1;
    iVar3 = iVar5 * 0x80;
  } while (iVar5 < 2);
  DAT_01dae438 = 0xffffffff;
  DAT_01dae468 = 0xffffffff;
  DAT_01dae43c = 0xffffffff;
  DAT_01dae440 = 0xffffffff;
  DAT_01dae444 = 0xffffffff;
  DAT_01dae448 = 0xffffffff;
  DAT_01dae44c = 0xffffffff;
  DAT_01dae450 = 0xffffffff;
  DAT_01dae454 = 0xffffffff;
  DAT_01dae458 = 0xffffffff;
  DAT_01dae45c = 0xffffffff;
  DAT_01dae460 = 0xffffffff;
  DAT_01dae464 = 0xffffffff;
  return;
}

