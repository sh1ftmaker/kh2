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
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00275a80(...) asm("func_00275a80");
s32 FUN_00275f68(...) asm("func_00275f68");
s32 FUN_00276088(...) asm("func_00276088");
s32 FUN_00276348(...) asm("func_00276348");
s32 FUN_00276568(...) asm("func_00276568");
s32 FUN_00276588(...) asm("func_00276588");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00276c18(...) asm("func_00276c18");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_00288e88(...) asm("func_00288e88");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028af88(...) asm("func_0028af88");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028b078(...) asm("func_0028b078");
s32 FUN_0028b200(...) asm("func_0028b200");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_00294000(...) asm("func_00294000");
s32 FUN_002941a8(...) asm("func_002941a8");
s32 FUN_002945e8(...) asm("_ZN2Tz10JmWorldSel5SetupEv");
s32 FUN_00294998(...) asm("func_00294998");
s32 FUN_00294e48(...) asm("func_00294e48");
s32 FUN_00294f78(...) asm("func_00294f78");
s32 FUN_002952f8(...) asm("func_002952f8");
s32 FUN_002955a8(...) asm("func_002955a8");
s32 FUN_002ac9b0(...) asm("func_002ac9b0");
s32 FUN_002acb20(...) asm("func_002acb20");
s32 FUN_002ae908(...) asm("func_002ae908");
extern u32 DAT_0035f148 asm("D_0035f148");
extern u32 DAT_0035f14c asm("D_0035f14c");
extern u32 DAT_0035f150 asm("D_0035f150");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_003746b4 asm("D_003746b4");
extern u32 DAT_003746b8 asm("D_003746b8");

// Ghidra decompile of 0x002945e8, wrapped mechanically (ad/fallback.py)

void FUN_002945e8_impl(void) asm("_ZN2Tz10JmWorldSel5SetupEv");
void FUN_002945e8_impl(void) {
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined2 auStack_80 [4];
  B8 auStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  
  iVar12 = 0;
  uStack_60 = FUN_00276348();
  iStack_5c = FUN_002766d0();
  FUN_00276588(0);
  FUN_00288e88(DAT_0035f200);
  FUN_00294e48();
  FUN_00275a80();
  uVar3 = FUN_00287bc0();
  FUN_00276088(uVar3,&uStack_70,&uStack_6c);
  FUN_00275f68(uStack_70,uStack_6c);
  iStack_68 = FUN_00294000(0);
  pcStack_64 = (char *)(iStack_68 + 0x10);
  iVar9 = 0;
  do {
    iVar8 = 3;
    puVar10 = (undefined2 *)((int)auStack_80 + iVar9);
    do {
      *puVar10 = (undefined2)DAT_0035f150;
      iVar8 = iVar8 + -1;
      puVar10 = puVar10 + 1;
    } while (-1 < iVar8);
    iVar12 = iVar12 + 1;
    iVar9 = iVar12 * 8;
  } while (iVar12 < 2);
  iStack_58 = DAT_0035f3d4 + 3;
  iVar8 = DAT_0035f3d4 + 2;
  iVar9 = iStack_5c;
  iVar12 = 0;
  do {
    FUN_00288d80(DAT_0035f200,iVar12,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0xffffffffffffffff,
                 auStack_80,auStack_78);
    iVar13 = iVar12 + 1;
    uVar3 = FUN_002891b8(DAT_0035f200,iVar12);
    FUN_00139620(uVar3);
    FUN_0028dcc0(uVar3,uStack_60);
    FUN_0028d8c0(iVar9 + 0x7698,iVar8,DAT_0035f14c,DAT_0035f148,DAT_0035f210,DAT_0035f150,
                 0xffffffffffffffff,0);
    FUN_0028dcc0(iVar9 + 0x7698,uVar3);
    *(uint *)(iVar9 + 0x7768) = *(uint *)(iVar9 + 0x7768) | 8;
    FUN_0028d8c0(iVar9 + 0xa998,iStack_58,DAT_0035f14c,DAT_0035f148,DAT_0035f210,DAT_0035f150,
                 0xffffffffffffffff,0);
    FUN_0028dcc0(iVar9 + 0xa998,uVar3);
    *(uint *)(iVar9 + 0xaa68) = *(uint *)(iVar9 + 0xaa68) | 8;
    iVar9 = iVar9 + 0x198;
    iVar12 = iVar13;
  } while (iVar13 < 0x12);
  iVar9 = *(int *)(iStack_68 + 8);
  iVar12 = 0;
  if (0 < iVar9) {
    iVar13 = iStack_5c + 0xa998;
    iVar8 = iStack_5c + 0x7698;
    pcVar11 = pcStack_64;
    do {
      if (*pcVar11 < '\x10') {
        lVar4 = FUN_002941a8(pcVar11);
        cVar7 = *pcVar11;
        if ((lVar4 != 0) || (lVar5 = FUN_00276c18(), lVar5 != 0)) {
          uVar3 = FUN_002891b8(DAT_0035f200,iVar12);
          FUN_00138c10(uVar3,0xad);
          iVar2 = FUN_002891b8(DAT_0035f200,iVar12);
          *(undefined4 *)(iVar2 + 0x188) = 0xffffffff;
          if (lVar4 != 0) {
            lVar4 = FUN_002ac9b0(cVar7);
            if (lVar4 != 0) {
              lVar4 = FUN_002acb20(cVar7);
              uVar1 = DAT_003746b4;
              if (lVar4 != 0) {
                uVar1 = DAT_003746b8;
              }
              FUN_00138c10(iVar13,uVar1);
            }
            lVar4 = FUN_002ae908(cVar7);
            if (lVar4 != 0) {
              FUN_00138c10(iVar8,0xb0);
            }
          }
          iVar8 = iVar8 + 0x198;
          iVar13 = iVar13 + 0x198;
          iVar12 = iVar12 + 1;
        }
      }
      iVar9 = iVar9 + -1;
      pcVar11 = pcVar11 + 0x10;
    } while (iVar9 != 0);
  }
  FUN_00294f78(0);
  pcVar11 = (char *)FUN_00276568();
  cVar7 = *pcVar11;
  if (*pcVar11 < '\0') {
    cVar7 = '\x0f';
  }
  uVar3 = FUN_002952f8(cVar7);
  FUN_002891f0(DAT_0035f200,uVar3,0,0xffffffffffffffff,0xffffffffffffffff);
  FUN_0028b078(DAT_0035f200,6,3);
  FUN_0028b200(DAT_0035f200,1);
  FUN_0028af90(DAT_0035f200,iVar12);
  uVar6 = FUN_0028af88(DAT_0035f200);
  FUN_0028af18(DAT_0035f200,uVar6 | 0x3000);
  FUN_00294998();
  FUN_002955a8();
  FUN_00287cc0(0);
  return;
}

