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

s32 FUN_001386e0(...) asm("func_001386e0");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_002362b0(...) asm("func_002362b0");
s32 FUN_0023c4b8(...) asm("func_0023c4b8");
s32 FUN_0023f1b0(...) asm("func_0023f1b0");
s32 FUN_0023f988(...) asm("func_0023f988");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00276c18(...) asm("func_00276c18");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_00294000(...) asm("func_00294000");
s32 FUN_002941a8(...) asm("func_002941a8");
s32 FUN_00294f78(...) asm("_ZN2Tz10JmWorldSel9CreateGraEb");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_0035f57c asm("D_0035f57c");
extern u32 DAT_0035f580 asm("D_0035f580");
extern u32 DAT_0035f581 asm("D_0035f581");

// Ghidra decompile of 0x00294f78, wrapped mechanically (ad/fallback.py)

void FUN_00294f78_impl(char param_1) asm("_ZN2Tz10JmWorldSel9CreateGraEb");
void FUN_00294f78_impl(char param_1) {
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iStack_5c;
  
  iVar4 = FUN_002766d0();
  if ((DAT_0035f580 != '\0') && (DAT_0035f581 == '\0')) {
    iStack_5c = 0;
    pcVar5 = (char *)FUN_00294000(0);
    iVar11 = *(int *)(pcVar5 + 8);
    iVar8 = DAT_0035f3d4 + 1;
    if (0 < iVar11) {
      iVar12 = iVar4 + 0xdca0;
      iVar13 = iVar12;
      do {
        pcVar5 = pcVar5 + 0x10;
        if ((*pcVar5 < '\x10') &&
           ((lVar6 = FUN_002941a8(pcVar5), lVar6 != 0 || (lVar1 = FUN_00276c18(), lVar1 != 0)))) {
          cVar9 = *pcVar5;
          if (lVar6 == 0) {
            cVar9 = '\x10';
          }
          uVar14 = 2;
          uVar2 = FUN_0023f1b0(DAT_0035f210);
          uVar2 = FUN_0023c4b8(uVar2,2);
          uVar3 = FUN_0023f988(DAT_0035f57c,cVar9);
          FUN_002362b0(iVar12,uVar3);
          uVar7 = 1;
          *(undefined1 *)(iVar12 + 400) = 1;
          if (param_1 == '\0') {
            uVar7 = 2;
            uVar14 = 0xffffffff;
          }
          iVar10 = iVar4 + 0x4398;
          FUN_001386e0(iVar10,iVar8,uVar2,iVar13,uVar7,0);
          iVar12 = iVar12 + 0x1a0;
          *(undefined4 *)(iVar4 + 0x4520) = uVar14;
          iVar13 = iVar13 + 0x1a0;
          FUN_00139620(iVar10);
          *(undefined1 *)(iVar4 + 0x452d) = 1;
          *(uint *)(iVar4 + 0x4468) = *(uint *)(iVar4 + 0x4468) | 8;
          iVar4 = iVar4 + 0x198;
          uVar2 = FUN_002891b8(DAT_0035f200,iStack_5c);
          FUN_0028dcc0(iVar10,uVar2);
          iStack_5c = iStack_5c + 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    DAT_0035f581 = '\x01';
  }
  return;
}

