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

s32 FUN_00207260(...) asm("func_00207260");
s32 FUN_002072a8(...) asm("func_002072a8");
s32 FUN_00207350(...) asm("func_00207350");
s32 FUN_002f3cd8(...) asm("func_002f3cd8");
s32 FUN_002f3d50(...) asm("func_002f3d50");
s32 FUN_002f3d98(...) asm("func_002f3d98");
s32 FUN_002f3f98(...) asm("func_002f3f98");
s32 FUN_002f4000(...) asm("func_002f4000");
s32 FUN_002f4298(...) asm("func_002f4298");
s32 FUN_002f4870(...) asm("func_002f4870");
s32 FUN_002fde18(...) asm("func_002fde18");
s32 FUN_00313b80(...) asm("func_00313b80");
s32 FUN_00313ed8(...) asm("func_00313ed8");
s32 FUN_003142e0(...) asm("func_003142e0");
s32 FUN_003144b0(...) asm("func_003144b0");
extern u32 DAT_00370588 asm("D_00370588");
extern u32 DAT_0037058c asm("D_0037058c");
extern u32 DAT_00370590 asm("D_00370590");
extern u32 DAT_00370594 asm("D_00370594");
extern u32 DAT_00370598 asm("D_00370598");
extern u32 DAT_01d9e6e4 asm("D_01d9e6e4");
extern u32 DAT_01d9e6e8 asm("D_01d9e6e8");
extern u32 LAB_002075d8 asm("D_002075d8");
extern u32 LAB_0020771c asm("D_0020771c");
extern u32 LAB_00207720 asm("D_00207720");
extern u32 LAB_00207894 asm("D_00207894");
extern u32 LAB_00207898 asm("D_00207898");
extern u32 LAB_00207978 asm("D_00207978");
extern u32 LAB_00207a48 asm("D_00207a48");
extern u32 LAB_00207cdc asm("D_00207cdc");
extern u32 LAB_00207d14 asm("D_00207d14");
extern u32 LAB_00208070 asm("D_00208070");
extern u32 LAB_00208178 asm("D_00208178");
extern u32 LAB_00208224 asm("D_00208224");

// Ghidra decompile of 0x00207350, wrapped mechanically (ad/fallback.py)

void FUN_00207350_impl(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6) asm("func_00207350");
void FUN_00207350_impl(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6) {
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int7 extraout_var;
  int7 extraout_var_00;
  int7 extraout_var_01;
  int7 extraout_var_02;
  ushort uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  byte bVar8;
  int iVar9;
  undefined4 *puVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b0 [64];
  undefined4 uStack_70;
  short sStack_6c;
  
  puVar10 = &uStack_d0;
  fVar17 = (float)*(byte *)(param_2 + 0x27);
  fVar20 = fVar17 + fVar17;
  FUN_002fde18(param_4,0,0xb0);
  if (param_5 != 0) {
    FUN_002fde18(param_5,0,0x40);
  }
  if (param_6 != 0) {
    FUN_002fde18(param_6,0,0x20);
  }
  FUN_002f4000(param_4);
  fVar16 = DAT_00370590;
  bVar6 = *(byte *)(param_2 + 0x26);
  if (bVar6 < 8) {
    uStack_cc = *(undefined4 *)(param_2 + 200);
    uStack_d0 = *(undefined4 *)(param_2 + 0xc4);
    uStack_c8 = *(undefined4 *)(param_2 + 0xcc);
    iVar12 = 2;
    uStack_c4 = DAT_00370588;
    fVar18 = DAT_0037058c;
    do {
      iVar12 = iVar12 + -1;
      fVar14 = (float)FUN_00207260();
      *(float *)((int)puVar10 + 0x10) = ((fVar20 * fVar14 - fVar17) * fVar18) / fVar16;
      puVar10 = (undefined4 *)((int)puVar10 + 4);
    } while (-1 < iVar12);
    if (*(byte *)(param_2 + 0x26) - 2 < 2) {
      uStack_c0 = 0;
      uStack_bc = 0;
    }
    iVar12 = param_4 + 0x10;
    iVar13 = param_4 + 0x20;
    FUN_002f4000(auStack_b0);
    FUN_002f4298(auStack_b0,auStack_b0,&uStack_c0);
    FUN_002f3cd8(iVar12,auStack_b0,&uStack_d0);
    *(float *)(param_4 + 0x10) = *(float *)(param_4 + 0x10) * *(float *)(param_2 + 0xf4);
    *(float *)(param_4 + 0x14) = *(float *)(param_4 + 0x14) * *(float *)(param_2 + 0xf8);
    *(float *)(param_4 + 0x18) = *(float *)(param_4 + 0x18) * *(float *)(param_2 + 0xfc);
    FUN_002f3d98(iVar12,iVar12);
    FUN_002f3d50(iVar13,iVar12,param_4);
    FUN_002f3d98(iVar13,iVar13);
    FUN_002f3d50(param_4,iVar13,iVar12);
    FUN_002f3d98(param_4,param_4);
    bVar6 = *(byte *)(param_2 + 0x26);
  }
  fVar17 = DAT_00370594;
  switch(bVar6) {
  default:
    fVar17 = *(float *)(param_2 + 0xf0);
    if (fVar17 == 0.0) goto LAB_002075d8;
    break;
  case 4:
  case 5:
    if (*(float *)(param_2 + 0xf0) != 0.0) {
      fVar20 = *(float *)(param_2 + 0xf0) * DAT_00370598;
      switch(*(undefined1 *)(param_2 + 0x100)) {
      default:
        iVar13 = 0;
        iVar12 = param_4;
        do {
          iVar13 = iVar13 + 1;
          fVar17 = (float)FUN_00207260();
          *(float *)(iVar12 + 0x30) = *(float *)(param_2 + 0xf0) * fVar17 - fVar20;
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        fVar17 = *(float *)(param_2 + 0xf4);
        break;
      case 1:
        iVar13 = 0;
        FUN_00207260();
        iVar12 = param_4;
        do {
          iVar13 = iVar13 + 1;
          fVar17 = (float)FUN_00207260();
          *(float *)(iVar12 + 0x30) = *(float *)(param_2 + 0xf0) * fVar17 - fVar20;
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        fVar17 = *(float *)(param_2 + 0xf4);
        break;
      case 2:
        iVar13 = 0;
        iVar12 = param_4;
        do {
          iVar13 = iVar13 + 1;
          fVar17 = (float)FUN_00207260();
          fVar18 = *(float *)(param_2 + 0xf0);
          fVar16 = (float)FUN_00207260();
          *(float *)(iVar12 + 0x30) = fVar18 * fVar17 * fVar16 - fVar20;
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        fVar17 = *(float *)(param_2 + 0xf4);
        break;
      case 3:
        iVar13 = 0;
        iVar12 = param_4;
        do {
          iVar13 = iVar13 + 1;
          fVar16 = (float)FUN_00207260();
          fVar14 = *(float *)(param_2 + 0xf0);
          fVar18 = (float)FUN_00207260();
          *(float *)(iVar12 + 0x30) =
               (*(float *)(param_2 + 0xf0) - fVar14 * fVar16 * fVar18 * fVar17) - fVar20;
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        fVar17 = *(float *)(param_2 + 0xf4);
        break;
      case 4:
        iVar13 = 0;
        iVar12 = param_4;
        do {
          iVar13 = iVar13 + 1;
          fVar17 = (float)FUN_00207260();
          fVar19 = *(float *)(param_2 + 0xf0);
          fVar16 = (float)FUN_00207260();
          fVar18 = (float)FUN_00207260();
          fVar14 = (float)FUN_00207260();
          *(float *)(iVar12 + 0x30) = fVar19 * fVar17 * fVar16 * fVar18 * fVar14 - fVar20;
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        fVar17 = *(float *)(param_2 + 0xf4);
        break;
      case 5:
        iVar13 = 2;
        fVar17 = DAT_00370598;
        iVar12 = param_4;
        do {
          iVar13 = iVar13 + -1;
          fVar16 = (float)FUN_00207260();
          fVar19 = *(float *)(param_2 + 0xf0);
          fVar18 = (float)FUN_00207260();
          fVar14 = (float)FUN_00207260();
          *(float *)(iVar12 + 0x30) =
               (*(float *)(param_2 + 0xf0) - fVar19 * fVar16 * fVar18 * fVar14 * fVar17) - fVar20;
          iVar12 = iVar12 + 4;
        } while (-1 < iVar13);
        fVar17 = *(float *)(param_2 + 0xf4);
      }
      *(float *)(param_4 + 0x30) = *(float *)(param_4 + 0x30) * fVar17;
      *(float *)(param_4 + 0x34) = *(float *)(param_4 + 0x34) * *(float *)(param_2 + 0xf8);
      fVar17 = *(float *)(param_2 + 0xfc);
      *(undefined4 *)(param_4 + 0x3c) = DAT_00370588;
      *(float *)(param_4 + 0x38) = *(float *)(param_4 + 0x38) * fVar17;
    }
    goto LAB_002075d8;
  case 6:
  case 7:
  case 8:
  case 9:
    iVar12 = *(int *)(DAT_01d9e6e8 + 0x90);
    if (*(short *)(param_2 + 0x108) < 0) goto LAB_002075d8;
    psVar11 = (short *)(*(int *)(DAT_01d9e6e4 + 0x18) + *(short *)(param_2 + 0x108) * 8);
    if (iVar12 == 0) {
      iVar12 = *(int *)(*psVar11 * 0x24 + *(int *)(DAT_01d9e6e4 + 0x10) + 0x14);
    }
    switch(*(undefined1 *)(param_2 + 0x100)) {
    default:
      uVar4 = *(ushort *)(param_1 + 0x22);
      sVar7 = uVar4 + 1;
      if ((long)psVar11[1] <= (long)(ulong)uVar4) {
        *(undefined2 *)(param_1 + 0x22) = 0;
        uVar4 = 0;
        sVar7 = 1;
      }
      *(short *)(param_1 + 0x22) = sVar7;
      puVar10 = (undefined4 *)
                ((uint)*(ushort *)((uint)uVar4 * 2 + *(int *)(psVar11 + 2)) * 6 + iVar12);
      uStack_70 = *puVar10;
      sStack_6c = *(short *)(puVar10 + 1);
      goto LAB_00208070;
    case 1:
      FUN_00207260();
      fVar20 = (float)FUN_00207260();
      goto LAB_00208178;
    case 2:
      fVar17 = (float)FUN_00207260();
      break;
    case 3:
      fVar17 = (float)FUN_00207260();
      goto LAB_00208224;
    case 4:
      fVar17 = (float)FUN_00207260();
      fVar20 = (float)FUN_00207260();
      fVar17 = fVar17 * fVar20;
      break;
    case 5:
      fVar20 = (float)FUN_00207260();
      fVar16 = (float)FUN_00207260();
      fVar17 = (float)FUN_00207260();
      fVar17 = fVar20 * fVar16 * fVar17;
LAB_00208224:
      fVar20 = (float)FUN_00207260();
      fVar16 = (float)FUN_00207260();
      uVar2 = FUN_00313b80(fVar17 * fVar20 * fVar16);
      uVar2 = FUN_00313ed8(0x3ff0000000000000,uVar2);
      fVar20 = (float)FUN_003144b0(uVar2);
      goto LAB_00208178;
    }
    fVar16 = (float)FUN_00207260();
    fVar20 = (float)FUN_00207260();
    fVar20 = fVar17 * fVar16 * fVar20;
LAB_00208178:
    sVar7 = psVar11[1];
    if ((int)sVar7 <= (int)(uint)*(ushort *)(param_1 + 0x22)) {
      *(undefined2 *)(param_1 + 0x22) = 0;
      sVar7 = psVar11[1];
    }
    puVar10 = (undefined4 *)
              ((uint)*(ushort *)((int)(fVar20 * (float)(int)sVar7) * 2 + *(int *)(psVar11 + 2)) * 6
              + iVar12);
    uStack_70 = *puVar10;
    sStack_6c = *(short *)(puVar10 + 1);
LAB_00208070:
    *(float *)(param_4 + 0x30) = (float)(int)(short)uStack_70 * *(float *)(param_2 + 0xf4);
    *(float *)(param_4 + 0x34) = (float)(int)(*(u16*)((u8*)&uStack_70 + 2)) * *(float *)(param_2 + 0xf8);
    fVar17 = *(float *)(param_2 + 0xfc);
    *(undefined4 *)(param_4 + 0x3c) = DAT_00370588;
    *(float *)(param_4 + 0x38) = (float)(int)sStack_6c * fVar17;
    iVar12 = param_4 + 0x10;
    if (*(byte *)(param_2 + 0x26) - 8 < 2) {
      iVar13 = param_4 + 0x20;
      FUN_002f3d98(iVar12,param_4 + 0x30);
      *(float *)(param_4 + 0x10) = *(float *)(param_4 + 0x10) * *(float *)(param_2 + 0xf4);
      *(float *)(param_4 + 0x14) = *(float *)(param_4 + 0x14) * *(float *)(param_2 + 0xf8);
      *(float *)(param_4 + 0x18) = *(float *)(param_4 + 0x18) * *(float *)(param_2 + 0xfc);
      FUN_002f3d98(iVar12,iVar12);
      FUN_002f3d50(iVar13,iVar12,param_4);
      FUN_002f3d98(iVar13,iVar13);
      FUN_002f3d50(param_4,iVar13,iVar12);
      FUN_002f3d98(param_4,param_4);
    }
    goto LAB_002075d8;
  }
  switch(*(undefined1 *)(param_2 + 0x100)) {
  case 1:
    FUN_00207260();
    fVar17 = (float)FUN_00207260();
    fVar17 = *(float *)(param_2 + 0xf0) * fVar17;
    break;
  case 2:
    fVar20 = (float)FUN_00207260();
    fVar16 = *(float *)(param_2 + 0xf0);
    goto LAB_00207cdc;
  case 3:
    fVar17 = (float)FUN_00207260();
    fVar20 = *(float *)(param_2 + 0xf0);
    fVar16 = (float)FUN_00207260();
    fVar16 = fVar20 * fVar17 * fVar16;
    fVar17 = *(float *)(param_2 + 0xf0);
    fVar20 = DAT_00370594;
    goto LAB_00207d14;
  case 4:
    fVar17 = (float)FUN_00207260();
    fVar20 = *(float *)(param_2 + 0xf0);
    fVar16 = (float)FUN_00207260();
    fVar16 = fVar20 * fVar17 * fVar16;
    fVar20 = (float)FUN_00207260();
LAB_00207cdc:
    fVar17 = (float)FUN_00207260();
    fVar17 = fVar16 * fVar20 * fVar17;
    break;
  case 5:
    fVar17 = (float)FUN_00207260();
    fVar18 = *(float *)(param_2 + 0xf0);
    fVar20 = (float)FUN_00207260();
    fVar16 = (float)FUN_00207260();
    fVar16 = fVar18 * fVar17 * fVar20 * fVar16;
    fVar17 = *(float *)(param_2 + 0xf0);
    fVar20 = DAT_00370598;
LAB_00207d14:
    fVar17 = fVar17 - fVar16 * fVar20;
  }
  FUN_002f4870(fVar17,param_4 + 0x30,param_4 + 0x10);
  *(undefined4 *)(param_4 + 0x3c) = DAT_00370588;
LAB_002075d8:
  uVar3 = FUN_002072a8(*(undefined1 *)(param_2 + 0x48));
  *(undefined1 *)(param_4 + 0x42) = uVar3;
  uVar3 = FUN_002072a8(*(undefined1 *)(param_2 + 0x49));
  *(undefined1 *)(param_4 + 0x43) = uVar3;
  uVar3 = FUN_002072a8(*(undefined1 *)(param_2 + 0x4a));
  *(undefined1 *)(param_4 + 0x44) = uVar3;
  uVar3 = FUN_002072a8(*(undefined1 *)(param_2 + 0x4b));
  *(undefined1 *)(param_4 + 0x45) = uVar3;
  if (*(char *)(param_2 + 0x24) == '\0') {
    cVar5 = *(char *)(param_2 + 0x25);
  }
  else {
    *(float *)(param_4 + 0xa8) = (float)*(byte *)(param_3 + 0xb);
    *(undefined1 *)(param_4 + 0xad) = *(undefined1 *)(param_2 + 0x24);
    cVar5 = *(char *)(param_2 + 0x25);
  }
  if (cVar5 != '\0') {
    *(char *)(param_4 + 0xae) = cVar5;
  }
  *(undefined4 *)(param_4 + 0x48) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_4 + 0x4c) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_4 + 0x50) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_4 + 0x58) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_4 + 0x5c) = *(undefined4 *)(param_2 + 0x60);
  bVar6 = 0;
  if (*(byte *)(param_2 + 0x103) == 0) {
LAB_0020771c:
    bVar8 = bVar6 & 4;
  }
  else {
    if ((*(byte *)(param_2 + 0x103) & 0x20) == 0) {
      fVar17 = (float)FUN_00207260();
      *(int *)(param_4 + 0x60) = (int)(fVar17 * (float)*(int *)(param_2 + 0x70));
      fVar17 = (float)FUN_00207260();
      *(int *)(param_4 + 100) = (int)(fVar17 * (float)*(int *)(param_2 + 0x74));
      fVar17 = (float)FUN_00207260();
      *(int *)(param_4 + 0x68) = (int)(fVar17 * (float)*(int *)(param_2 + 0x78));
      bVar6 = *(byte *)(param_2 + 0x103);
      if (((bVar6 & 1) == 0) || ((bVar6 & 2) == 0)) {
        bVar8 = bVar6 & 4;
        if ((bVar6 & 2) == 0) goto LAB_00207720;
        iVar13 = 0;
        iVar12 = param_4;
        do {
          iVar13 = iVar13 + 1;
          *(int *)(iVar12 + 0x60) = -*(int *)(iVar12 + 0x60);
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        bVar6 = *(byte *)(param_2 + 0x103);
      }
      else {
        iVar13 = 0;
        iVar12 = param_4;
        do {
          uVar15 = FUN_00207260();
          uVar2 = FUN_00313b80(uVar15);
          FUN_003142e0(0x3fe0000000000000,uVar2);
          iVar13 = iVar13 + 1;
          if (extraout_var_02 < 0) {
            *(int *)(iVar12 + 0x60) = -*(int *)(iVar12 + 0x60);
          }
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        bVar6 = *(byte *)(param_2 + 0x103);
      }
      goto LAB_0020771c;
    }
    fVar17 = (float)FUN_00207260();
    iVar12 = (int)(fVar17 * (float)*(int *)(param_2 + 0x70));
    *(int *)(param_4 + 0x60) = iVar12;
    *(int *)(param_4 + 0x68) = iVar12;
    *(int *)(param_4 + 100) = iVar12;
    bVar6 = *(byte *)(param_2 + 0x103);
    if (((bVar6 & 1) != 0) && ((bVar6 & 2) != 0)) {
      uVar15 = FUN_00207260();
      uVar2 = FUN_00313b80(uVar15);
      FUN_003142e0(0x3fe0000000000000,uVar2);
      if (extraout_var < 0) {
        iVar13 = 0;
        iVar12 = param_4;
        do {
          iVar13 = iVar13 + 1;
          *(int *)(iVar12 + 0x60) = -*(int *)(iVar12 + 0x60);
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        bVar6 = *(byte *)(param_2 + 0x103);
      }
      else {
        bVar6 = *(byte *)(param_2 + 0x103);
      }
      goto LAB_0020771c;
    }
    bVar8 = bVar6 & 4;
    if ((bVar6 & 2) != 0) {
      iVar13 = 0;
      iVar12 = param_4;
      do {
        iVar13 = iVar13 + 1;
        *(int *)(iVar12 + 0x60) = -*(int *)(iVar12 + 0x60);
        iVar12 = iVar12 + 4;
      } while (iVar13 < 3);
      bVar6 = *(byte *)(param_2 + 0x103);
      goto LAB_0020771c;
    }
  }
LAB_00207720:
  iVar13 = 2;
  iVar12 = param_4;
  if (bVar8 != 0) {
    do {
      iVar13 = iVar13 + -1;
      *(int *)(iVar12 + 0x48) = *(int *)(iVar12 + 0x48) + *(int *)(iVar12 + 0x60);
      iVar12 = iVar12 + 4;
    } while (-1 < iVar13);
    bVar6 = *(byte *)(param_2 + 0x103);
  }
  if ((bVar6 & 8) != 0) {
    iVar13 = 2;
    iVar12 = param_4;
    do {
      iVar13 = iVar13 + -1;
      *(int *)(iVar12 + 0x54) = *(int *)(iVar12 + 0x54) + *(int *)(iVar12 + 0x60);
      iVar12 = iVar12 + 4;
    } while (-1 < iVar13);
  }
  iVar13 = param_4 + 0x40;
  iVar12 = 2;
  do {
    iVar1 = *(int *)(iVar13 + 8);
    if (0xffff < iVar1 + 0x8000U) {
      iVar9 = iVar1 + 0x7fff;
      if (-1 < iVar1) {
        iVar9 = iVar1;
      }
      *(int *)(iVar13 + 8) = iVar1 + (iVar9 >> 0xf) * -0x8000;
    }
    iVar12 = iVar12 + -1;
    iVar13 = iVar13 + 4;
  } while (-1 < iVar12);
  *(undefined4 *)(param_4 + 0x6c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_4 + 0x70) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_4 + 0x74) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_4 + 0x78) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_4 + 0x7c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_4 + 0x80) = *(undefined4 *)(param_2 + 0x90);
  bVar6 = 0;
  if (*(byte *)(param_2 + 0x102) == 0) {
LAB_00207894:
    bVar8 = bVar6 & 4;
  }
  else {
    if ((*(byte *)(param_2 + 0x102) & 0x20) == 0) {
      fVar17 = (float)FUN_00207260();
      *(float *)(param_4 + 0x84) = fVar17 * *(float *)(param_2 + 0xa0);
      fVar17 = (float)FUN_00207260();
      *(float *)(param_4 + 0x88) = fVar17 * *(float *)(param_2 + 0xa4);
      fVar17 = (float)FUN_00207260();
      *(float *)(param_4 + 0x8c) = fVar17 * *(float *)(param_2 + 0xa8);
      bVar6 = *(byte *)(param_2 + 0x102);
      if (((bVar6 & 1) == 0) || ((bVar6 & 2) == 0)) {
        bVar8 = bVar6 & 4;
        if ((bVar6 & 2) == 0) goto LAB_00207898;
        iVar13 = 0;
        iVar12 = param_4 + 0x80;
        do {
          iVar13 = iVar13 + 1;
          *(float *)(iVar12 + 4) = -*(float *)(iVar12 + 4);
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        bVar6 = *(byte *)(param_2 + 0x102);
      }
      else {
        iVar12 = 0;
        iVar13 = param_4 + 0x80;
        do {
          uVar15 = FUN_00207260();
          uVar2 = FUN_00313b80(uVar15);
          FUN_003142e0(0x3fe0000000000000,uVar2);
          iVar12 = iVar12 + 1;
          if (extraout_var_01 < 0) {
            *(float *)(iVar13 + 4) = -*(float *)(iVar13 + 4);
          }
          iVar13 = iVar13 + 4;
        } while (iVar12 < 3);
        bVar6 = *(byte *)(param_2 + 0x102);
      }
      goto LAB_00207894;
    }
    fVar17 = (float)FUN_00207260();
    fVar17 = fVar17 * *(float *)(param_2 + 0xa0);
    *(float *)(param_4 + 0x84) = fVar17;
    *(float *)(param_4 + 0x8c) = fVar17;
    *(float *)(param_4 + 0x88) = fVar17;
    bVar6 = *(byte *)(param_2 + 0x102);
    if (((bVar6 & 1) != 0) && ((bVar6 & 2) != 0)) {
      uVar15 = FUN_00207260();
      uVar2 = FUN_00313b80(uVar15);
      FUN_003142e0(0x3fe0000000000000,uVar2);
      if (extraout_var_00 < 0) {
        iVar13 = 0;
        iVar12 = param_4 + 0x80;
        do {
          iVar13 = iVar13 + 1;
          *(float *)(iVar12 + 4) = -*(float *)(iVar12 + 4);
          iVar12 = iVar12 + 4;
        } while (iVar13 < 3);
        bVar6 = *(byte *)(param_2 + 0x102);
      }
      else {
        bVar6 = *(byte *)(param_2 + 0x102);
      }
      goto LAB_00207894;
    }
    bVar8 = bVar6 & 4;
    if ((bVar6 & 2) != 0) {
      iVar13 = 0;
      iVar12 = param_4 + 0x80;
      do {
        iVar13 = iVar13 + 1;
        *(float *)(iVar12 + 4) = -*(float *)(iVar12 + 4);
        iVar12 = iVar12 + 4;
      } while (iVar13 < 3);
      bVar6 = *(byte *)(param_2 + 0x102);
      goto LAB_00207894;
    }
  }
LAB_00207898:
  if (bVar8 != 0) {
    iVar13 = 2;
    iVar12 = param_4;
    do {
      iVar13 = iVar13 + -1;
      *(float *)(iVar12 + 0x6c) = *(float *)(iVar12 + 0x6c) + *(float *)(iVar12 + 0x84);
      iVar12 = iVar12 + 4;
    } while (-1 < iVar13);
    bVar6 = *(byte *)(param_2 + 0x102);
  }
  if ((bVar6 & 8) != 0) {
    iVar13 = 2;
    iVar12 = param_4;
    do {
      iVar13 = iVar13 + -1;
      *(float *)(iVar12 + 0x78) = *(float *)(iVar12 + 0x78) + *(float *)(iVar12 + 0x84);
      iVar12 = iVar12 + 4;
    } while (-1 < iVar13);
  }
  *(undefined4 *)(param_4 + 0x90) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_4 + 0x94) = *(undefined4 *)(param_2 + 0xe8);
  fVar17 = *(float *)(param_2 + 0xe4);
  if (fVar17 == 0.0) {
    uVar15 = *(undefined4 *)(param_2 + 0xac);
  }
  else {
    fVar20 = (float)FUN_00207260();
    *(float *)(param_4 + 0x90) =
         *(float *)(param_4 + 0x90) + ((fVar17 + fVar17) * fVar20 - *(float *)(param_2 + 0xe4));
    uVar15 = *(undefined4 *)(param_2 + 0xac);
  }
  *(undefined4 *)(param_4 + 0x98) = uVar15;
  *(undefined4 *)(param_4 + 0x9c) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_4 + 0xa0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_4 + 0xa4) = *(undefined4 *)(param_2 + 0xbc);
  bVar6 = *(byte *)(param_2 + 0x104);
  if (bVar6 == 2) {
LAB_00207a48:
    fVar17 = (float)FUN_00207260();
    *(float *)(param_4 + 0x9c) = *(float *)(param_4 + 0x9c) * fVar17;
  }
  else if (bVar6 < 3) {
    if (bVar6 == 1) {
      fVar17 = (float)FUN_00207260();
      *(float *)(param_4 + 0x98) = *(float *)(param_4 + 0x98) * fVar17;
    }
  }
  else {
    if (bVar6 != 3) {
      if (bVar6 != 4) {
        sVar7 = *(short *)(param_2 + 0x22);
        goto LAB_00207978;
      }
      fVar17 = (float)FUN_00207260();
      *(float *)(param_4 + 0x98) = *(float *)(param_4 + 0x98) * fVar17;
      goto LAB_00207a48;
    }
    fVar17 = (float)FUN_00207260();
    *(float *)(param_4 + 0x98) = *(float *)(param_4 + 0x98) * fVar17;
    *(float *)(param_4 + 0x9c) = *(float *)(param_4 + 0x9c) * fVar17;
  }
  sVar7 = *(short *)(param_2 + 0x22);
LAB_00207978:
  if (sVar7 == 0) {
    *(undefined2 *)(param_4 + 0x40) = 0xffff;
  }
  else {
    *(short *)(param_4 + 0x40) = sVar7;
  }
  *(undefined1 *)(param_4 + 0xac) = 0;
  if (param_5 != 0) {
    FUN_002f3f98(param_5,0x1d9e6f0);
  }
  if (param_6 != 0) {
    iVar12 = (int)param_6;
    *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(iVar12 + 0x1c) = *(undefined4 *)(param_2 + 0x34);
  }
  return;
}

