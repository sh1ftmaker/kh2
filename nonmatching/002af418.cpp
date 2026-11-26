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

s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_00276348(...) asm("func_00276348");
s32 FUN_00276608(...) asm("func_00276608");
s32 FUN_002766b0(...) asm("func_002766b0");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00276e78(...) asm("func_00276e78");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028afd0(...) asm("func_0028afd0");
s32 FUN_0028b218(...) asm("func_0028b218");
s32 FUN_0028b248(...) asm("func_0028b248");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028f4d8(...) asm("func_0028f4d8");
s32 FUN_0028f930(...) asm("func_0028f930");
s32 FUN_002af418(...) asm("_ZN2Tz8JmPuzzle8SetupSelEv");
s32 FUN_002b1850(...) asm("func_002b1850");
s32 FUN_002b1a00(...) asm("func_002b1a00");
s32 FUN_002b1db8(...) asm("func_002b1db8");
s32 FUN_002b3b60(...) asm("func_002b3b60");
extern u32 DAT_0035f148 asm("D_0035f148");
extern u32 DAT_0035f14c asm("D_0035f14c");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_0035f630 asm("D_0035f630");

// Ghidra decompile of 0x002af418, wrapped mechanically (ad/fallback.py)

void FUN_002af418_impl(void) asm("_ZN2Tz8JmPuzzle8SetupSelEv");
void FUN_002af418_impl(void) {
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  undefined2 auStack_80 [4];
  B8 auStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  
  uStack_6c = FUN_00276348();
  iVar3 = FUN_002766d0();
  FUN_002b1db8();
  lVar2 = FUN_0028f930(1);
  if (lVar2 == 0) {
    uVar4 = FUN_002b3b60(0);
    FUN_0028f4d8(1,uVar4,0);
  }
  iVar9 = 0;
  iVar7 = 0;
  do {
    iVar6 = 3;
    puVar8 = (undefined2 *)((int)auStack_80 + iVar7);
    do {
      *puVar8 = 2;
      iVar6 = iVar6 + -1;
      puVar8 = puVar8 + 1;
    } while (-1 < iVar6);
    iVar9 = iVar9 + 1;
    iVar7 = iVar9 * 8;
  } while (iVar9 < 2);
  uStack_68 = 0x60000000;
  iVar7 = DAT_0035f3d4 + -1;
  FUN_00276e78();
  FUN_0028d8c0(iVar3,iVar7,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x5a,0xffffffffffffffff,0);
  FUN_00139620(iVar3);
  iVar6 = 0;
  FUN_0028dcc0(iVar3,uStack_6c);
  iStack_70 = FUN_0023aa78(iVar3 + 0x18);
  iStack_60 = DAT_0035f3d4 + 2;
  uStack_68 = uStack_68 | 8;
  iStack_64 = DAT_0035f3d4 + 1;
  iVar7 = 0;
  iVar9 = iVar3;
  do {
    FUN_00288d80(DAT_0035f200,iVar7,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0xffffffffffffffff,
                 auStack_80,auStack_78);
    iVar10 = iVar7 + 1;
    uVar4 = FUN_002891b8(DAT_0035f200,iVar7);
    FUN_00139620(uVar4);
    FUN_0028dcc0(uVar4,iVar3);
    FUN_00138c68(uVar4,0,iVar6);
    *(undefined4 *)((int)uVar4 + 0x1ac) = 3;
    iVar6 = iVar6 + iStack_70;
    *(uint *)((int)uVar4 + 0x1a4) = uStack_68;
    FUN_001395f8(uVar4);
    FUN_0028d8c0(iVar9 + 0xa998,iStack_64,DAT_0035f14c,DAT_0035f148,DAT_0035f210,2,
                 0xffffffffffffffff,0);
    FUN_0028dcc0(iVar9 + 0xa998,uVar4);
    iVar7 = iVar9 + 0x7698;
    iVar9 = iVar9 + 0x198;
    FUN_0028d8c0(iVar7,iStack_60,DAT_0035f14c,DAT_0035f148,DAT_0035f210,2,0xffffffffffffffff,0);
    FUN_0028dcc0(iVar7,uVar4);
    iVar7 = iVar10;
  } while (iVar10 < 10);
  iVar3 = 0;
  iVar7 = 9;
  puVar5 = DAT_0035f630;
  do {
    uVar1 = *puVar5;
    iVar7 = iVar7 + -1;
    puVar5 = puVar5 + 9;
    if ((uVar1 & 0x1000000) != 0) {
      iVar3 = iVar3 + 1;
    }
  } while (-1 < iVar7);
  uVar4 = FUN_00287bc0();
  uVar4 = FUN_00276608(uVar4);
  FUN_002891f0(DAT_0035f200,uVar4,0,0xffffffffffffffff,0xffffffffffffffff);
  FUN_0028af90(DAT_0035f200,iVar3);
  FUN_0028afd0(DAT_0035f200,0);
  if (1 < iVar3) {
    FUN_0028b218(DAT_0035f200,1);
    FUN_0028b248(DAT_0035f200,10);
  }
  FUN_002b1850();
  FUN_002b1a00();
  FUN_002766b0(1);
  FUN_00287cc0(0);
  return;
}

