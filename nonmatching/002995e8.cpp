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
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_00275a80(...) asm("func_00275a80");
s32 FUN_00275e68(...) asm("func_00275e68");
s32 FUN_00275f68(...) asm("func_00275f68");
s32 FUN_00276088(...) asm("func_00276088");
s32 FUN_00276348(...) asm("func_00276348");
s32 FUN_00276588(...) asm("func_00276588");
s32 FUN_002765e8(...) asm("func_002765e8");
s32 FUN_00276608(...) asm("func_00276608");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_00288e88(...) asm("func_00288e88");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028af88(...) asm("func_0028af88");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_00295430(...) asm("func_00295430");
s32 FUN_002995e8(...) asm("_ZN2Tz12JmCollection5SetupEv");
s32 FUN_00299920(...) asm("func_00299920");
s32 FUN_0029a2a0(...) asm("func_0029a2a0");
s32 FUN_0029a3e0(...) asm("func_0029a3e0");
s32 FUN_0029a740(...) asm("func_0029a740");
s32 FUN_0029fbf0(...) asm("func_0029fbf0");
extern u32 DAT_0035f148 asm("D_0035f148");
extern u32 DAT_0035f14c asm("D_0035f14c");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");

// Ghidra decompile of 0x002995e8, wrapped mechanically (ad/fallback.py)

void FUN_002995e8_impl(void) asm("_ZN2Tz12JmCollection5SetupEv");
void FUN_002995e8_impl(void) {
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 auStack_80 [4];
  B8 auStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  
  iVar6 = 0;
  uStack_64 = FUN_00276348();
  iStack_60 = FUN_002766d0();
  FUN_00276588(2);
  FUN_00288e88(DAT_0035f200);
  FUN_0029fbf0();
  FUN_0029a2a0();
  FUN_00275a80();
  uVar2 = FUN_00287bc0();
  FUN_00276088(uVar2,&uStack_70,&uStack_6c);
  FUN_00275f68(uStack_70,uStack_6c);
  uVar2 = FUN_00295430(0xf,0);
  FUN_00275e68(uVar2);
  iVar4 = 0;
  do {
    iVar3 = 3;
    puVar5 = (undefined2 *)((int)auStack_80 + iVar4);
    do {
      *puVar5 = 3;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar3);
    iVar6 = iVar6 + 1;
    iVar4 = iVar6 * 8;
  } while (iVar6 < 2);
  iVar6 = DAT_0035f3d4 + -1;
  FUN_0028d8c0(iStack_60,iVar6,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x9b,0xffffffffffffffff,0);
  iVar4 = iStack_60 + 0x330;
  FUN_00139620();
  FUN_0028dcc0(iStack_60,uStack_64);
  FUN_0028d8c0(iVar4,iVar6,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0xa5,0xffffffffffffffff,0);
  FUN_00139620(iVar4);
  FUN_0028dcc0(iVar4,uStack_64);
  iStack_68 = FUN_0023aa78(iStack_60 + 0x18);
  iStack_5c = DAT_0035f3d4 + 2;
  iVar3 = 0;
  iVar8 = DAT_0035f3d4 + 1;
  iVar4 = iStack_60;
  iVar6 = 0;
  do {
    FUN_00288d80(DAT_0035f200,iVar6,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0xffffffffffffffff,
                 auStack_80,auStack_78);
    iVar7 = iVar6 + 1;
    uVar2 = FUN_002891b8(DAT_0035f200,iVar6);
    FUN_00139620(uVar2);
    FUN_0028dcc0(uVar2,iStack_60);
    FUN_00138c68(uVar2,0,iVar3);
    iVar3 = iVar3 + iStack_68;
    FUN_0028d8c0(iVar4 + 0x7698,iVar8,DAT_0035f14c,DAT_0035f148,DAT_0035f210,3,0xffffffffffffffff,0)
    ;
    FUN_0028dcc0(iVar4 + 0x7698,uVar2);
    iVar6 = iVar4 + 0xa998;
    FUN_0028d8c0(iVar6,iStack_5c,DAT_0035f14c,DAT_0035f148,DAT_0035f210,3,0xffffffffffffffff,0);
    iVar4 = iVar4 + 0x198;
    FUN_0028dcc0(iVar6,uVar2);
    iVar6 = iVar7;
  } while (iVar7 < 0xc);
  FUN_0029a3e0(0);
  uVar2 = FUN_00287bc0();
  uVar2 = FUN_00276608(uVar2);
  FUN_002891f0(DAT_0035f200,uVar2,0,0xffffffffffffffff,0xffffffffffffffff);
  uVar2 = FUN_00287bc0();
  FUN_002765e8(uVar2,0,0);
  FUN_00299920();
  uVar1 = FUN_0028af88(DAT_0035f200);
  FUN_0028af18(DAT_0035f200,uVar1 | 0x3000);
  FUN_0029a740();
  FUN_00287cc0(0);
  return;
}

