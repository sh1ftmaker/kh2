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

s32 FUN_0023f070(...) asm("func_0023f070");
s32 FUN_0023f0c0(...) asm("func_0023f0c0");
s32 FUN_0024e9c0(...) asm("func_0024e9c0");
s32 FUN_0024ec50(...) asm("_ZN2Tz4TTMY8CtrlMenuEv");
s32 FUN_0024eff8(...) asm("func_0024eff8");
s32 FUN_0024f070(...) asm("func_0024f070");
s32 FUN_0024f1a0(...) asm("func_0024f1a0");
s32 FUN_0024f240(...) asm("func_0024f240");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287c90(...) asm("func_00287c90");
s32 FUN_00287cd0(...) asm("func_00287cd0");
s32 FUN_00287da0(...) asm("func_00287da0");
s32 FUN_00287df0(...) asm("func_00287df0");
s32 FUN_00287f90(...) asm("func_00287f90");
s32 FUN_00288018(...) asm("func_00288018");
s32 FUN_00288040(...) asm("func_00288040");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_00289310(...) asm("func_00289310");
s32 FUN_00289380(...) asm("func_00289380");
extern u32 DAT_0035ee04 asm("D_0035ee04");
extern u32 DAT_0035ee08 asm("D_0035ee08");

// Ghidra decompile of 0x0024ec50, wrapped mechanically (ad/fallback.py)

void FUN_0024ec50_impl(void) asm("_ZN2Tz4TTMY8CtrlMenuEv");
void FUN_0024ec50_impl(void) {
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00289380(DAT_0035ee04);
  FUN_00287bc0();
  lVar2 = FUN_00287cd0();
  if (((lVar1 != -1) || (lVar3 = FUN_00289310(DAT_0035ee04), lVar3 != 0)) &&
     (lVar3 = FUN_0023f0c0(DAT_0035ee08), lVar3 != 1)) {
    FUN_0023f070(DAT_0035ee08,1,0xffffffffffffffff);
    FUN_00287f90(0);
    return;
  }
  if ((lVar2 == 0) && (lVar2 = FUN_0023f0c0(DAT_0035ee08), lVar2 == 1)) {
    uVar4 = FUN_002891e8(DAT_0035ee04);
    FUN_0024e9c0();
    FUN_0024eff8(uVar4);
    FUN_00287c90(1);
  }
  uVar4 = FUN_00289310(DAT_0035ee04);
  FUN_00287df0(lVar1,uVar4,1,0,1);
  switch((int)lVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_0024f070(lVar1);
    break;
  case -2:
    lVar1 = FUN_0024f240();
    if (lVar1 == 0) {
      FUN_0024f1a0();
      break;
    }
  case -4:
    FUN_00287da0();
  }
  lVar1 = FUN_00288040();
  if (lVar1 != 0) {
    FUN_00288018();
    return;
  }
  return;
}

