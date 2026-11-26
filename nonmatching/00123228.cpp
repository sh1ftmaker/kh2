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

s32 FUN_00108730(...) asm("func_00108730");
s32 FUN_00108930(...) asm("func_00108930");
s32 FUN_00108f98(...) asm("func_00108f98");
s32 FUN_00109008(...) asm("func_00109008");
s32 FUN_00109360(...) asm("func_00109360");
s32 FUN_0010ae90(...) asm("func_0010ae90");
s32 FUN_00120800(...) asm("func_00120800");
s32 FUN_00123228(...) asm("_ZN2kn8ModelSKL14drawSilhouetteEPNS_16ProjectionCameraEPPN3Axa11DMA_SET_TAGEPNS_9DrawParamEPcPNS_13AnimationWorkEbPNS_7FMatrixE");
s32 FUN_00133bb8(...) asm("func_00133bb8");
s32 FUN_00133c60(...) asm("func_00133c60");
s32 FUN_001344f8(...) asm("func_001344f8");
extern u32 DAT_00347a10 asm("D_00347a10");
extern u32 DAT_00347a14 asm("D_00347a14");
extern u32 DAT_00347a18 asm("D_00347a18");
extern u32 DAT_00347a1c asm("D_00347a1c");
extern u32 DAT_0036a9b4 asm("D_0036a9b4");

// Ghidra decompile of 0x00123228, wrapped mechanically (ad/fallback.py)

undefined4 FUN_00123228_impl(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4, int param_5) asm("_ZN2kn8ModelSKL14drawSilhouetteEPNS_16ProjectionCameraEPPN3Axa11DMA_SET_TAGEPNS_9DrawParamEPcPNS_13AnimationWorkEbPNS_7FMatrixE");
undefined4 FUN_00123228_impl(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4, int param_5) {
  byte bVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte *pbVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  int aiStack_e0 [32];
  undefined4 *puStack_60;
  
  piVar23 = aiStack_e0;
  iVar24 = 0;
  iVar9 = 0;
  puStack_60 = param_3;
  uVar10 = FUN_0010ae90();
  puVar2 = *(uint **)((int)param_1 + 4);
  lVar11 = FUN_00120800(param_1);
  do {
    uVar7 = FUN_00108930(param_4,iVar24);
    iVar24 = iVar24 + 1;
    *piVar23 = uVar7;
    piVar23 = piVar23 + 1;
  } while (iVar24 < 0x20);
  iVar24 = (int)param_4;
  if (lVar11 == 0) {
    iVar25 = 0;
    puVar26 = puVar2;
    if (0 < (int)puVar2[7]) {
      do {
        pbVar22 = (byte *)(param_5 + iVar25);
        iVar25 = iVar25 + 1;
        if ((((*pbVar22 & 0xf) != 0) && ((*pbVar22 & 4) == 0)) &&
           (*(char *)(*(int *)((int)aiStack_e0 + (puVar26[8] >> 4 & 0x7c)) + 3) != '\0')) {
          iVar9 = iVar9 + 1;
        }
        puVar26 = puVar26 + 8;
      } while (iVar25 < (int)puVar2[7]);
    }
    if (iVar9 != 0) {
      uVar12 = FUN_001344f8();
      FUN_00109360(uVar12,2);
      iVar9 = FUN_00108730(param_4,uVar12);
      if ((undefined8 *)(iVar9 + 0x50) != param_2) {
        uVar3 = *param_2;
        uVar7 = *(undefined4 *)(param_2 + 1);
        uVar13 = *(undefined4 *)((int)param_2 + 0xc);
        uVar4 = param_2[2];
        uVar15 = *(undefined4 *)(param_2 + 3);
        uVar16 = *(undefined4 *)((int)param_2 + 0x1c);
        uVar5 = param_2[4];
        uVar18 = *(undefined4 *)(param_2 + 5);
        uVar19 = *(undefined4 *)((int)param_2 + 0x2c);
        uVar6 = param_2[6];
        uVar20 = *(undefined4 *)(param_2 + 7);
        uVar21 = *(undefined4 *)((int)param_2 + 0x3c);
        *(int *)(iVar9 + 0x50) = (int)uVar3;
        *(int *)(iVar9 + 0x54) = (int)((ulong)uVar3 >> 0x20);
        *(undefined4 *)(iVar9 + 0x58) = uVar7;
        *(undefined4 *)(iVar9 + 0x5c) = uVar13;
        *(int *)(iVar9 + 0x60) = (int)uVar4;
        *(int *)(iVar9 + 100) = (int)((ulong)uVar4 >> 0x20);
        *(undefined4 *)(iVar9 + 0x68) = uVar15;
        *(undefined4 *)(iVar9 + 0x6c) = uVar16;
        *(int *)(iVar9 + 0x70) = (int)uVar5;
        *(int *)(iVar9 + 0x74) = (int)((ulong)uVar5 >> 0x20);
        *(undefined4 *)(iVar9 + 0x78) = uVar18;
        *(undefined4 *)(iVar9 + 0x7c) = uVar19;
        *(int *)(iVar9 + 0x80) = (int)uVar6;
        *(int *)(iVar9 + 0x84) = (int)((ulong)uVar6 >> 0x20);
        *(undefined4 *)(iVar9 + 0x88) = uVar20;
        *(undefined4 *)(iVar9 + 0x8c) = uVar21;
      }
      *(undefined4 *)(iVar9 + 0x38) = DAT_0036a9b4;
      uVar14 = puVar2[7];
      if (0 < (int)uVar14) {
        iVar9 = 0;
        puVar8 = puStack_60;
        puVar26 = puVar2;
        do {
          puVar26 = puVar26 + 8;
          pbVar22 = (byte *)(param_5 + iVar9);
          iVar9 = iVar9 + 1;
          if ((((*pbVar22 & 0xf) != 0) && ((*pbVar22 & 4) == 0)) &&
             (*(char *)(*(int *)((int)aiStack_e0 + (*puVar26 >> 4 & 0x7c)) + 3) != '\0')) {
            FUN_00133bb8(uVar12,0,0x11000000,0x13000000);
            FUN_00108f98(uVar10,(ulong)*(byte *)(iVar24 + 4) | 0x3f80000000000000 |
                                (ulong)*(byte *)(iVar24 + 6) << 0x10 |
                                (ulong)*(byte *)(iVar24 + 5) << 8 |
                                (ulong)*(byte *)(iVar24 + 7) << 0x18);
            FUN_00109008(uVar10);
            FUN_00133c60(uVar12,*puVar8,0,0,0);
            uVar14 = puVar2[7];
          }
          puVar8 = puVar8 + 1;
        } while (iVar9 < (int)uVar14);
      }
    }
  }
  else {
    puVar26 = (uint *)lVar11;
    uVar14 = puVar26[7];
    if (0 < (int)uVar14) {
      pbVar22 = (byte *)(puVar2[7] + param_5);
      puVar17 = puVar26;
      do {
        puVar17 = puVar17 + 8;
        bVar1 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        if ((((bVar1 & 0xf) != 0) && ((bVar1 & 4) == 0)) &&
           (*(char *)(aiStack_e0[*puVar17 & 0x1f] + 3) != '\0')) {
          iVar9 = iVar9 + 1;
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (iVar9 != 0) {
      uVar12 = FUN_001344f8();
      FUN_00109360(uVar12,3);
      puVar8 = (undefined4 *)FUN_00108730(param_4,uVar12);
      uVar15 = DAT_00347a1c;
      uVar13 = DAT_00347a18;
      uVar7 = DAT_00347a14;
      *puVar8 = DAT_00347a10;
      puVar8[1] = uVar7;
      puVar8[2] = uVar13;
      puVar8[3] = uVar15;
      if ((undefined8 *)(puVar8 + 0x14) != param_2) {
        uVar3 = *param_2;
        uVar7 = *(undefined4 *)(param_2 + 1);
        uVar13 = *(undefined4 *)((int)param_2 + 0xc);
        uVar4 = param_2[2];
        uVar15 = *(undefined4 *)(param_2 + 3);
        uVar16 = *(undefined4 *)((int)param_2 + 0x1c);
        uVar5 = param_2[4];
        uVar18 = *(undefined4 *)(param_2 + 5);
        uVar19 = *(undefined4 *)((int)param_2 + 0x2c);
        uVar6 = param_2[6];
        uVar20 = *(undefined4 *)(param_2 + 7);
        uVar21 = *(undefined4 *)((int)param_2 + 0x3c);
        puVar8[0x14] = (int)uVar3;
        puVar8[0x15] = (int)((ulong)uVar3 >> 0x20);
        puVar8[0x16] = uVar7;
        puVar8[0x17] = uVar13;
        puVar8[0x18] = (int)uVar4;
        puVar8[0x19] = (int)((ulong)uVar4 >> 0x20);
        puVar8[0x1a] = uVar15;
        puVar8[0x1b] = uVar16;
        puVar8[0x1c] = (int)uVar5;
        puVar8[0x1d] = (int)((ulong)uVar5 >> 0x20);
        puVar8[0x1e] = uVar18;
        puVar8[0x1f] = uVar19;
        puVar8[0x20] = (int)uVar6;
        puVar8[0x21] = (int)((ulong)uVar6 >> 0x20);
        puVar8[0x22] = uVar20;
        puVar8[0x23] = uVar21;
      }
      uVar14 = puVar26[7];
      iVar9 = 0;
      puVar17 = puVar26;
      if (0 < (int)uVar14) {
        do {
          bVar1 = *(byte *)(param_5 + puVar2[7] + iVar9);
          if ((((bVar1 & 0xf) != 0) && ((bVar1 & 4) == 0)) &&
             (*(char *)(aiStack_e0[puVar17[8] & 0x1f] + 3) != '\0')) {
            FUN_00133bb8(uVar12,0,0x11000000,0x13000000);
            FUN_00108f98(uVar10,(ulong)*(byte *)(iVar24 + 4) | 0x3f80000000000000 |
                                (ulong)*(byte *)(iVar24 + 6) << 0x10 |
                                (ulong)*(byte *)(iVar24 + 5) << 8 |
                                (ulong)*(byte *)(iVar24 + 7) << 0x18);
            FUN_00109008(uVar10);
            FUN_00133c60(uVar12,puStack_60[puVar2[7] + iVar9],0,0,0);
            uVar14 = puVar26[7];
          }
          iVar9 = iVar9 + 1;
          puVar17 = puVar17 + 8;
        } while (iVar9 < (int)uVar14);
      }
    }
  }
  return 1;
}

