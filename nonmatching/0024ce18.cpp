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
s32 FUN_00139570(...) asm("func_00139570");
s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_001a6d08(...) asm("func_001a6d08");
s32 FUN_002369a0(...) asm("func_002369a0");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_0023c008(...) asm("func_0023c008");
s32 FUN_0023ee30(...) asm("func_0023ee30");
s32 FUN_0023ef50(...) asm("func_0023ef50");
s32 FUN_002431d0(...) asm("func_002431d0");
s32 FUN_0024ce18(...) asm("_ZN2Tz4TTPT5SetupEv");
s32 FUN_0024d4a0(...) asm("func_0024d4a0");
s32 FUN_0024df90(...) asm("func_0024df90");
s32 FUN_0024dfe0(...) asm("func_0024dfe0");
s32 FUN_0024e008(...) asm("func_0024e008");
s32 FUN_0024e058(...) asm("func_0024e058");
s32 FUN_0024e080(...) asm("func_0024e080");
s32 FUN_0024e158(...) asm("func_0024e158");
s32 FUN_00287bd0(...) asm("func_00287bd0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288750(...) asm("func_00288750");
s32 FUN_002887c8(...) asm("func_002887c8");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_002892f8(...) asm("func_002892f8");
s32 FUN_0028af40(...) asm("func_0028af40");
s32 FUN_0028d7f0(...) asm("func_0028d7f0");
s32 FUN_0028d980(...) asm("func_0028d980");
s32 FUN_0028dd90(...) asm("func_0028dd90");
s32 FUN_0028ddd8(...) asm("func_0028ddd8");
s32 FUN_002b4070(...) asm("func_002b4070");
s32 FUN_0031a838(...) asm("func_0031a838");
extern u32 DAT_0035edcc asm("D_0035edcc");
extern u32 DAT_0035edd4 asm("D_0035edd4");
extern u32 DAT_0035edd8 asm("D_0035edd8");
extern u32 DAT_0035eddc asm("D_0035eddc");
extern u32 DAT_0035ede0 asm("D_0035ede0");
extern u32 DAT_0035edec asm("D_0035edec");
extern u32 DAT_0035edf0 asm("D_0035edf0");
extern u32 DAT_0035edf4 asm("D_0035edf4");
extern u32 DAT_0035edfc asm("D_0035edfc");
extern undefined *PTR_LAB_00347f98 asm("D_00347f98");
extern undefined *PTR_LAB_0035eb98 asm("D_0035eb98");

// Ghidra decompile of 0x0024ce18, wrapped mechanically (ad/fallback.py)

void FUN_0024ce18_impl(void) asm("_ZN2Tz4TTPT5SetupEv");
void FUN_0024ce18_impl(void) {
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  char cVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  uVar16 = 0;
  DAT_0035edf0 = 0;
  uVar17 = 0;
  uVar8 = FUN_0023ee30(0xa0);
  puVar6 = (undefined4 *)uVar8;
  *puVar6 = &PTR_LAB_00347f98;
  FUN_0031a838(puVar6 + 3);
  *puVar6 = &PTR_LAB_0035eb98;
  FUN_002369a0(puVar6 + 6);
  FUN_0023c008(puVar6 + 0xc);
  DAT_0035edd4 = puVar6;
  FUN_0028d7f0(uVar8,0x7532,0,0,0x1e,0x20,0,0);
  FUN_0023ef50(DAT_0035edd4);
  iVar5 = FUN_0024dfe0();
  iVar3 = FUN_0024e058();
  if (0 < iVar5) {
    do {
      uVar8 = 0;
      bVar2 = true;
      iVar13 = 0;
      pcVar12 = (char *)(iVar3 + 0x1c);
      cVar11 = *pcVar12;
      while (pcVar12 = pcVar12 + 1, -1 < cVar11) {
        lVar1 = FUN_001a6d08(cVar11);
        if (lVar1 == 0) {
          bVar2 = false;
          break;
        }
        iVar13 = iVar13 + 1;
        if (3 < iVar13) break;
        cVar11 = *pcVar12;
      }
      if (bVar2) {
        uVar10 = uVar16;
        if (DAT_0035edf4 != 0) {
          uVar10 = uVar16 + 3;
        }
        lVar1 = FUN_002431d0(0,uVar10);
        if (lVar1 == 0) {
          DAT_0035edfc = DAT_0035edfc | (byte)(1 << (uVar16 & 0x1f));
          cVar11 = *(char *)(iVar3 + 0x10);
        }
        else {
          cVar11 = *(char *)(iVar3 + 0x10);
        }
        if (cVar11 != '\0') {
          uVar17 = uVar16;
        }
        FUN_00288d80(DAT_0035edcc,uVar16,0,0,DAT_0035edd4,*(undefined2 *)(iVar3 + 0x12),iVar3,
                     iVar3 + 8);
        uVar8 = FUN_002891b8(DAT_0035edcc,uVar16);
        iVar13 = (int)uVar8;
        uVar9 = FUN_0023aa98(iVar13 + 0x18);
        uVar4 = FUN_0028dd90(uVar9);
        *(undefined4 *)(iVar13 + 0x1b0) = uVar4;
        uVar4 = FUN_0028ddd8(uVar9);
        *(undefined4 *)(iVar13 + 0x1ac) = uVar4;
        FUN_001395f8(uVar8);
      }
      if (((*(byte *)(iVar3 + 0x11) ^ 1) & 1) != 0) {
        FUN_00139570(uVar8);
      }
      uVar16 = uVar16 + 1;
      iVar3 = iVar3 + 0x24;
    } while ((int)uVar16 < iVar5);
  }
  iVar5 = FUN_002892f8(DAT_0035edcc);
  iVar3 = FUN_002891b8(DAT_0035edcc,0);
  iVar3 = FUN_0023aa78(iVar3 + 0x18);
  if (0 < iVar5) {
    iVar13 = -((iVar3 * iVar5) / 2);
    iVar14 = 0;
    do {
      iVar15 = iVar14 + 1;
      uVar8 = FUN_002891b8(DAT_0035edcc,iVar14);
      FUN_00138c68(uVar8,0,iVar13);
      iVar13 = iVar13 + iVar3;
      iVar14 = iVar15;
    } while (iVar15 < iVar5);
  }
  FUN_002891f0(DAT_0035edcc,uVar17,0,0xffffffffffffffff,0xffffffffffffffff);
  FUN_0024df90();
  uVar8 = FUN_002891e8(DAT_0035edcc);
  FUN_002891f0(DAT_0035edcc,uVar8,1,0,2);
  FUN_002b4070(DAT_0035edec,0x7533,DAT_0035edd4,0x372158,0x372190,0x372198,0x3721a0,0x3721a8);
  puVar6 = (undefined4 *)FUN_0023ee30(0xa0);
  *puVar6 = &PTR_LAB_00347f98;
  FUN_0031a838(puVar6 + 3);
  *puVar6 = &PTR_LAB_0035eb98;
  FUN_002369a0(puVar6 + 6);
  FUN_0023c008(puVar6 + 0xc);
  DAT_0035eddc = puVar6;
  puVar7 = (undefined2 *)FUN_0024e008(uVar8);
  FUN_0028d7f0(DAT_0035eddc,0x7532,0,0,*puVar7,puVar7[2],0,0);
  FUN_0023ef50(DAT_0035eddc);
  uVar8 = FUN_0023ee30(0xa0);
  puVar6 = (undefined4 *)uVar8;
  *puVar6 = &PTR_LAB_00347f98;
  FUN_0031a838(puVar6 + 3);
  *puVar6 = &PTR_LAB_0035eb98;
  FUN_002369a0(puVar6 + 6);
  FUN_0023c008(puVar6 + 0xc);
  DAT_0035edd8 = puVar6;
  FUN_0028d7f0(uVar8,0x7543,0,0,0x21,0x23,0,0);
  FUN_0023ef50(DAT_0035edd8);
  lVar1 = FUN_001a6d08(7);
  if ((lVar1 != 0) && (lVar1 = FUN_0024e080(), lVar1 != 0)) {
    FUN_0028af40(DAT_0035edcc,0x200);
    FUN_0028d980(DAT_0035ede0,0x753b,0,0,DAT_0035edd4,0x1f,0x21,0xb47);
    FUN_00139620(DAT_0035ede0);
    FUN_001395f8(DAT_0035ede0);
    *(undefined1 *)(DAT_0035ede0 + 0x195) = 1;
    *(uint *)(DAT_0035ede0 + 0xd0) = *(uint *)(DAT_0035ede0 + 0xd0) | 8;
  }
  FUN_0024e158();
  FUN_00287bd0(0,0);
  FUN_00287cc0(0);
  lVar1 = FUN_002887c8();
  if (lVar1 == 0) {
    return;
  }
  FUN_0024d4a0();
  DAT_0035edf0 = 1;
  FUN_00288750(0x24d6b8);
  return;
}

