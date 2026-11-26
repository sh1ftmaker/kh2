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
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_00257140(...) asm("func_00257140");
s32 FUN_00257158(...) asm("func_00257158");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_002713a0(...) asm("func_002713a0");
s32 FUN_00271b58(...) asm("func_00271b58");
s32 FUN_00271b78(...) asm("_ZN2Tz8CmCustom13UpdateTopListEv");
s32 FUN_00272c20(...) asm("func_00272c20");
s32 FUN_002891e8(...) asm("func_002891e8");
extern u32 DAT_0035ef6c asm("D_0035ef6c");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f12c asm("D_0035f12c");
extern u32 DAT_01e21ed4 asm("D_01e21ed4");
extern undefined *PTR_DAT_00373990 asm("D_00373990");

// Ghidra decompile of 0x00271b78, wrapped mechanically (ad/fallback.py)

void FUN_00271b78_impl(void) asm("_ZN2Tz8CmCustom13UpdateTopListEv");
void FUN_00271b78_impl(void) {
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint auStack_90 [8];
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  uint *puStack_54;
  
  puVar4 = auStack_90;
  iVar10 = 0x11;
  iStack_58 = FUN_00257770();
  FUN_00139d78(iStack_58);
  iVar5 = iStack_58;
  iStack_6c = FUN_002891e8(DAT_0035f01c);
  FUN_00271b58(iStack_6c);
  FUN_002713a0(iStack_6c,0x1e21ed4,&iStack_70);
  uVar2 = FUN_00257140(0);
  do {
    iVar10 = iVar10 + -1;
    FUN_00138c10(iVar5 + 0x3610,DAT_0035ef6c);
    FUN_00138c10(iVar5 + 0x5ef0,uVar2);
    *(undefined4 *)(iVar5 + 0x6088) = 0;
    *(undefined4 *)(iVar5 + 0xec8) = 0;
    iVar5 = iVar5 + 0x1b4;
  } while (-1 < iVar10);
  iVar5 = 0;
  if (0 < iStack_70) {
    do {
      puVar3 = (undefined1 *)(DAT_01e21ed4 + iVar5);
      iVar5 = iVar5 + 1;
      uVar1 = FUN_00272c20(*puVar3);
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < iStack_70);
  }
  iStack_5c = 0;
  iVar11 = 0;
  iStack_60 = 0;
  iVar5 = iStack_70;
  iVar10 = iStack_58;
  iVar13 = iStack_58;
  puStack_54 = auStack_90;
  if (0 < iStack_70) {
    do {
      uVar7 = *puStack_54;
      iStack_64 = (int)*(short *)((int)&PTR_DAT_00373990 + *(char *)(DAT_01e21ed4 + iVar11) * 2);
      uStack_68 = uVar7;
      if (0 < (int)uVar7) {
        iVar9 = iVar13 + 0xae10;
        iVar6 = iStack_60 * 0x1b4 + iStack_58;
        iVar12 = iVar10 + 0xb110;
        iVar8 = iVar6 + 0x3610;
        do {
          FUN_00138c10(iVar8,iStack_64);
          uVar2 = 0;
          if (*(char *)(DAT_01e21ed4 + iVar11) != '\x03') {
            uVar2 = FUN_00257158(*(undefined2 *)(iStack_5c * 8 + DAT_0035f12c + 8),1,
                                 *(char *)(DAT_01e21ed4 + iVar11) == '\x01');
          }
          uVar2 = FUN_00257140(uVar2);
          FUN_00138c10(iVar6 + 0x5ef0,uVar2);
          *(int *)(iVar6 + 0x6088) = iVar9;
          iVar9 = iVar9 + 0x20;
          if ((iStack_6c != 0) && (*(char *)(DAT_01e21ed4 + iVar11) != '\x03')) {
            *(int *)(iVar6 + 0xec8) = iVar12;
          }
          iVar12 = iVar12 + 4;
          iVar13 = iVar13 + 0x20;
          iVar10 = iVar10 + 4;
          iStack_5c = iStack_5c + 1;
          iVar6 = iVar6 + 0x1b4;
          uVar7 = uVar7 - 1;
          iVar8 = iVar8 + 0x1b4;
          iVar5 = iStack_70;
        } while (uVar7 != 0);
      }
      iVar11 = iVar11 + 1;
      iStack_60 = iStack_60 + uStack_68 + (uStack_68 & 1);
      puStack_54 = puStack_54 + 1;
    } while (iVar11 < iVar5);
  }
  return;
}

