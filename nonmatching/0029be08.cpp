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

s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00276348(...) asm("func_00276348");
s32 FUN_00276690(...) asm("func_00276690");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00276e78(...) asm("func_00276e78");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028af28(...) asm("func_0028af28");
s32 FUN_0028af88(...) asm("func_0028af88");
s32 FUN_0028b1e8(...) asm("func_0028b1e8");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_00293d80(...) asm("func_00293d80");
s32 FUN_00294000(...) asm("func_00294000");
s32 FUN_002943b0(...) asm("func_002943b0");
s32 FUN_0029be08(...) asm("func_0029be08");
s32 FUN_0029d318(...) asm("func_0029d318");
s32 FUN_0029daa0(...) asm("func_0029daa0");
s32 FUN_0029dba0(...) asm("func_0029dba0");
s32 FUN_0029dd00(...) asm("func_0029dd00");
s32 FUN_0029dd60(...) asm("func_0029dd60");
s32 FUN_0029e960(...) asm("func_0029e960");
s32 FUN_0029ea30(...) asm("func_0029ea30");
extern u32 DAT_0035f148 asm("D_0035f148");
extern u32 DAT_0035f14c asm("D_0035f14c");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_0035f5ac asm("D_0035f5ac");

// Ghidra decompile of 0x0029be08, wrapped mechanically (ad/fallback.py)

void FUN_0029be08_impl(void) asm("func_0029be08");
void FUN_0029be08_impl(void) {
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  long lVar10;
  undefined2 auStack_60 [4];
  B8 auStack_58;
  
  iVar9 = 0;
  uVar1 = FUN_00276348();
  uVar2 = FUN_002766d0();
  iVar4 = DAT_0035f3d4;
  iVar7 = 0;
  do {
    iVar6 = 3;
    puVar8 = (undefined2 *)((int)auStack_60 + iVar7);
    do {
      *puVar8 = 2;
      iVar6 = iVar6 + -1;
      puVar8 = puVar8 + 1;
    } while (-1 < iVar6);
    iVar9 = iVar9 + 1;
    iVar7 = iVar9 * 8;
  } while (iVar9 < 2);
  FUN_00293d80(0x13ed);
  FUN_0029dd00();
  FUN_0029dd60();
  iVar7 = 0;
  FUN_00276e78();
  lVar10 = 0;
  FUN_0028d8c0(uVar2,iVar4 + -1,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x4b,0xffffffffffffffff,0);
  FUN_00139620(uVar2);
  FUN_0028dcc0(uVar2,uVar1);
  FUN_00288d80(DAT_0035f200,0,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0xffffffffffffffff,auStack_60,
               auStack_58);
  uVar1 = FUN_002891b8(DAT_0035f200,0);
  FUN_00139620(uVar1);
  uVar1 = FUN_002891b8(DAT_0035f200,0);
  FUN_0028dcc0(uVar1,uVar2);
  iVar4 = FUN_002891b8(DAT_0035f200,0);
  *(undefined4 *)(iVar4 + 0x1ac) = 3;
  iVar4 = FUN_002891b8(DAT_0035f200,0);
  *(undefined4 *)(iVar4 + 0x1a4) = 0x60000008;
  iVar4 = FUN_002891b8(DAT_0035f200,0);
  *(code **)(iVar4 + 0x1b4) = FUN_0029dba0;
  uVar1 = FUN_002891b8(DAT_0035f200,0);
  FUN_001395f8(uVar1);
  FUN_0029d318();
  FUN_0029daa0();
  FUN_00276690(1);
  FUN_0028af28(DAT_0035f200,0x10);
  iVar4 = FUN_00294000(3);
  if ('\0' < *(char *)(DAT_0035f5ac + 5)) {
    do {
      iVar9 = (int)lVar10;
      lVar10 = (long)(iVar9 + 1);
      lVar3 = FUN_002943b0(iVar4 + 0x10 + *(short *)(iVar9 * 2 + DAT_0035f5ac + 8) * 0x24);
      if (lVar3 != 0) {
        iVar7 = iVar7 + 1;
      }
    } while (lVar10 < *(char *)(DAT_0035f5ac + 5));
  }
  uVar5 = FUN_0028af88(DAT_0035f200);
  if (1 < iVar7) {
    uVar5 = uVar5 | 0xc000;
  }
  FUN_0028af18(DAT_0035f200,uVar5 | 0x200);
  FUN_0028b1e8(DAT_0035f200,0);
  FUN_0029e960();
  FUN_0029ea30();
  FUN_00287cc0(0);
  return;
}

