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

s32 FUN_002570a0(...) asm("func_002570a0");
s32 FUN_00270c70(...) asm("func_00270c70");
s32 FUN_00272b60(...) asm("func_00272b60");
s32 FUN_00273530(...) asm("func_00273530");
s32 FUN_00273678(...) asm("func_00273678");
s32 FUN_002736f8(...) asm("func_002736f8");
s32 FUN_00273818(...) asm("func_00273818");
s32 FUN_00273c40(...) asm("func_00273c40");
s32 FUN_00273cb8(...) asm("func_00273cb8");
s32 FUN_0028b040(...) asm("func_0028b040");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f12c asm("D_0035f12c");

// Ghidra decompile of 0x00273530, wrapped mechanically (ad/fallback.py)

void FUN_00273530_impl(void) asm("func_00273530");
void FUN_00273530_impl(void) {
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  iVar2 = FUN_002570a0(0x1a);
  uVar4 = FUN_00272b60(iVar2);
  uVar3 = FUN_0028b040(DAT_0035f01c);
  switch(uVar4) {
  case 0:
    FUN_00273678();
    break;
  case 1:
    if ((*(char *)(iVar2 * 8 + DAT_0035f12c + 10) != '\0') != uVar3) {
      FUN_002736f8();
    }
    break;
  case 2:
    lVar5 = FUN_002570a0(0x19);
    if (lVar5 != 0) {
      iVar2 = iVar2 + -1;
    }
    bVar1 = *(char *)(iVar2 * 8 + DAT_0035f12c + 10) != '\0';
    uVar6 = (uint)bVar1;
    lVar5 = FUN_002570a0(0x19);
    if ((lVar5 != 0) && (*(char *)(iVar2 * 8 + DAT_0035f12c + 0xb) == '\x02')) {
      uVar6 = bVar1 + 2;
    }
    if (uVar6 != uVar3) {
      FUN_00273818();
    }
    break;
  case 3:
    FUN_00273c40(uVar3);
    break;
  case 4:
    FUN_00273cb8(uVar3);
  }
  uVar4 = FUN_002570a0(0x19);
  FUN_00270c70(uVar4);
  return;
}

