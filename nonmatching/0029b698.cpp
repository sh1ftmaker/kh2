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
s32 FUN_00236ca8(...) asm("func_00236ca8");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023c4b8(...) asm("func_0023c4b8");
s32 FUN_0023f1b0(...) asm("func_0023f1b0");
s32 FUN_00276348(...) asm("func_00276348");
s32 FUN_00276608(...) asm("func_00276608");
s32 FUN_00276620(...) asm("func_00276620");
s32 FUN_00276678(...) asm("func_00276678");
s32 FUN_00276690(...) asm("func_00276690");
s32 FUN_002766b0(...) asm("func_002766b0");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00276e78(...) asm("func_00276e78");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af28(...) asm("func_0028af28");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028afd0(...) asm("func_0028afd0");
s32 FUN_0028b218(...) asm("func_0028b218");
s32 FUN_0028b248(...) asm("func_0028b248");
s32 FUN_0028bae0(...) asm("func_0028bae0");
s32 FUN_0028be78(...) asm("func_0028be78");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028f4d8(...) asm("func_0028f4d8");
s32 FUN_0028f930(...) asm("func_0028f930");
s32 FUN_0029b698(...) asm("_ZN2Tz5JmDic13SetupCharaSelEv");
s32 FUN_0029ca50(...) asm("func_0029ca50");
s32 FUN_0029d008(...) asm("func_0029d008");
s32 FUN_0029ea30(...) asm("func_0029ea30");
s32 FUN_0029eaa8(...) asm("func_0029eaa8");
extern u32 DAT_0035f148 asm("D_0035f148");
extern u32 DAT_0035f14c asm("D_0035f14c");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f214 asm("D_0035f214");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_0035f5ac asm("D_0035f5ac");
extern u32 LAB_0029b70c asm("D_0029b70c");

// Ghidra decompile of 0x0029b698, wrapped mechanically (ad/fallback.py)

void FUN_0029b698_impl(void) asm("_ZN2Tz5JmDic13SetupCharaSelEv");
void FUN_0029b698_impl(void) {
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 auStack_70 [4];
  B8 auStack_68;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  
  uVar4 = FUN_00276348();
  uVar3 = FUN_002766d0();
  iVar11 = (int)uVar3;
  lVar2 = FUN_00287bc0();
  if (lVar2 == 0xf) {
    lVar2 = FUN_0028f930(1);
    if (lVar2 != 0) goto LAB_0029b70c;
    uVar5 = 1;
    uVar7 = 1;
  }
  else {
    lVar2 = FUN_0028f930(0);
    if (lVar2 != 0) goto LAB_0029b70c;
    uVar5 = 0;
    uVar7 = 0;
  }
  FUN_0028f4d8(uVar5,0xffffffffffffffff,uVar7);
LAB_0029b70c:
  iVar13 = 0;
  iVar9 = 0;
  do {
    iVar8 = 3;
    puVar10 = (undefined2 *)((int)auStack_70 + iVar9);
    do {
      *puVar10 = 2;
      iVar8 = iVar8 + -1;
      puVar10 = puVar10 + 1;
    } while (-1 < iVar8);
    iVar13 = iVar13 + 1;
    iVar9 = iVar13 * 8;
  } while (iVar13 < 2);
  iStack_5c = iVar11 + 0x4c8;
  iStack_60 = DAT_0035f3d4 + -1;
  uStack_58 = 0x60000000;
  FUN_00276e78();
  FUN_0028d8c0(uVar3,iStack_60,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x5a,0xffffffffffffffff,0);
  FUN_00139620(uVar3);
  FUN_0028dcc0(uVar3,uVar4);
  FUN_0028d8c0(iStack_5c,iStack_60,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x5f,0xffffffffffffffff,0)
  ;
  FUN_00139620(iStack_5c);
  FUN_0028dcc0(iStack_5c,uVar4);
  uStack_58 = uStack_58 | 8;
  iVar8 = FUN_0023aa78(iVar11 + 0x18);
  iVar11 = iVar11 + 0xa998;
  iStack_60 = DAT_0035f3d4;
  iVar12 = DAT_0035f3d4 + 1;
  iVar9 = 0;
  iVar13 = 0;
  do {
    FUN_00288d80(DAT_0035f200,iVar9,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0xffffffffffffffff,
                 auStack_70,auStack_68);
    iVar14 = iVar9 + 1;
    uVar4 = FUN_002891b8(DAT_0035f200,iVar9);
    FUN_00139620(uVar4);
    FUN_0028dcc0(uVar4,uVar3);
    FUN_00138c68(uVar4,0,iVar13);
    *(undefined4 *)((int)uVar4 + 0x1ac) = 3;
    *(uint *)((int)uVar4 + 0x1a4) = uStack_58;
    FUN_001395f8(uVar4);
    FUN_0028d8c0(iVar11,iVar12,DAT_0035f14c,DAT_0035f148,DAT_0035f210,2,0xffffffffffffffff,0);
    FUN_0028dcc0(iVar11,uVar4);
    iVar11 = iVar11 + 0x198;
    iVar9 = iVar14;
    iVar13 = iVar13 + iVar8;
  } while (iVar14 < 10);
  FUN_0029ca50();
  cVar1 = *(char *)(DAT_0035f5ac + 5);
  uVar4 = FUN_00276608(0xf);
  uVar3 = FUN_00276620(0xf);
  cVar6 = '\x01';
  if (cVar1 != '\0') {
    cVar6 = cVar1;
  }
  FUN_0028af90(DAT_0035f200,cVar6);
  FUN_002891f0(DAT_0035f200,uVar4,0,0xffffffffffffffff,0xffffffffffffffff);
  FUN_0028afd0(DAT_0035f200,uVar3);
  FUN_0028b218(DAT_0035f200,1);
  FUN_0028b248(DAT_0035f200,10);
  if (cVar1 == '\0') {
    FUN_00276690(1);
    FUN_0028af28(DAT_0035f200,0x10);
  }
  cVar6 = '\n';
  if ('\n' < cVar1) {
    cVar6 = cVar1;
  }
  iStack_60 = DAT_0035f3d4;
  uVar4 = FUN_0023f1b0(DAT_0035f210);
  uVar4 = FUN_0023c4b8(uVar4,DAT_0035f14c);
  iVar11 = FUN_0023f1b0(DAT_0035f210);
  uVar5 = FUN_00236ca8(*(undefined4 *)(iVar11 + 0x28),DAT_0035f148);
  uVar7 = FUN_00276678();
  FUN_0028bae0(DAT_0035f214,iStack_60,uVar4,uVar5,uVar7,cVar6,10,iStack_5c);
  FUN_0028be78(DAT_0035f214,uVar3);
  FUN_0029d008();
  FUN_0029eaa8();
  FUN_0029ea30();
  FUN_002766b0(1);
  FUN_00287cc0(0);
  return;
}

