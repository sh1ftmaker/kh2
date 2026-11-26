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

s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00139688(...) asm("func_00139688");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_00257140(...) asm("func_00257140");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_00271900(...) asm("_ZN2Tz8CmCustom13CreateTopListEv");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028d980(...) asm("func_0028d980");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
extern u32 DAT_0035ef64 asm("D_0035ef64");
extern u32 DAT_0035ef68 asm("D_0035ef68");
extern u32 DAT_0035ef6c asm("D_0035ef6c");
extern u32 DAT_0035f03c asm("D_0035f03c");

// Ghidra decompile of 0x00271900, wrapped mechanically (ad/fallback.py)

void FUN_00271900_impl(void) asm("_ZN2Tz8CmCustom13CreateTopListEv");
void FUN_00271900_impl(void) {
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iStack_60;
  
  iVar3 = FUN_00257770();
  FUN_00139d78(iVar3);
  FUN_0028d8c0(iVar3,0x753d,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0x8c,0x8d,100);
  iStack_60 = 0;
  iVar12 = iVar3;
  do {
    iVar9 = iVar12 + 0x3610;
    FUN_0028d980(iVar9,0x753e,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0x96,0xffffffffffffffff,
                 0xffffffffffffffff);
    iVar8 = iVar12 + 0x3628;
    iVar10 = iVar12 + 0x5ef0;
    iVar4 = FUN_0023aa98(iVar8);
    iVar11 = iVar12 + 0xd30;
    iVar5 = FUN_0023aa78(iVar8);
    uVar1 = FUN_0023aa18(iVar8);
    uVar2 = FUN_0023aa38(iVar8);
    FUN_00138c10(iVar9,DAT_0035ef6c);
    iVar7 = iStack_60 / 2;
    iVar8 = iStack_60 % 2;
    iStack_60 = iStack_60 + 1;
    FUN_00138c68(iVar9,iVar8 * iVar4,iVar7 * iVar5);
    FUN_0028dcc0(iVar9,iVar3);
    FUN_00139688(iVar9);
    FUN_00139620(iVar9);
    uVar6 = FUN_00257140(0);
    FUN_0028d980(iVar10,0x753f,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,uVar6,0xffffffffffffffff,
                 0xffffffffffffffff);
    FUN_0028dcc0(iVar10,iVar9);
    FUN_00139620(iVar10);
    FUN_001395f8(iVar10);
    FUN_0028d980(iVar11,0x753f,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,uVar6,0xffffffffffffffff,
                 0xffffffffffffffff);
    FUN_0028dcc0(iVar11,iVar9);
    FUN_00138c68(iVar11,uVar1,uVar2);
    FUN_00139620(iVar11);
    FUN_001395f8(iVar11);
    *(undefined4 *)(iVar12 + 0xee0) = 1;
    iVar12 = iVar12 + 0x1b4;
  } while (iStack_60 < 0x12);
  return;
}

