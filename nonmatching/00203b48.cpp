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

s32 FUN_001e7188(...) asm("func_001e7188");
s32 FUN_00203a40(...) asm("func_00203a40");
s32 FUN_00203a88(...) asm("func_00203a88");
s32 FUN_00203b48(...) asm("func_00203b48");
s32 FUN_002f3cd8(...) asm("func_002f3cd8");
s32 FUN_002f3d08(...) asm("func_002f3d08");
s32 FUN_002f3d98(...) asm("func_002f3d98");
s32 FUN_002f3f98(...) asm("func_002f3f98");
s32 FUN_002f4000(...) asm("func_002f4000");
s32 FUN_002f4298(...) asm("func_002f4298");
s32 FUN_002f4870(...) asm("func_002f4870");
s32 FUN_00313b80(...) asm("func_00313b80");
s32 FUN_00313ed8(...) asm("func_00313ed8");
s32 FUN_003144b0(...) asm("func_003144b0");
extern u32 DAT_00370418 asm("D_00370418");
extern u32 DAT_0037041c asm("D_0037041c");
extern u32 DAT_00370420 asm("D_00370420");
extern u32 DAT_00370424 asm("D_00370424");
extern u32 DAT_00370428 asm("D_00370428");
extern u32 DAT_0037042c asm("D_0037042c");
extern u32 DAT_01d9e6e4 asm("D_01d9e6e4");
extern u32 DAT_01d9e6e8 asm("D_01d9e6e8");
extern u32 LAB_00203d70 asm("D_00203d70");
extern u32 LAB_00203ee4 asm("D_00203ee4");
extern u32 LAB_00203fdc asm("D_00203fdc");
extern u32 LAB_00204060 asm("D_00204060");
extern u32 LAB_00204110 asm("D_00204110");
extern u32 LAB_0020425c asm("D_0020425c");
extern u32 LAB_00204260 asm("D_00204260");
extern u32 LAB_0020432c asm("D_0020432c");
extern u32 LAB_00204364 asm("D_00204364");
extern u32 LAB_002046b0 asm("D_002046b0");
extern u32 LAB_0020472c asm("D_0020472c");
extern u32 LAB_002047d8 asm("D_002047d8");

// Ghidra decompile of 0x00203b48, wrapped mechanically (ad/fallback.py)

void FUN_00203b48_impl(undefined8 param_1,int param_2,int param_3,int param_4,float *param_5,long param_6 ,long param_7) asm("func_00203b48");
void FUN_00203b48_impl(undefined8 param_1,int param_2,int param_3,int param_4,float *param_5,long param_6 ,long param_7) {
  bool bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  byte bVar8;
  undefined4 *puVar9;
  float *pfVar10;
  short *psVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b0 [64];
  undefined4 uStack_70;
  short sStack_6c;
  
  puVar9 = &uStack_d0;
  fVar15 = (float)*(byte *)(param_3 + 0x27);
  fVar18 = fVar15 + fVar15;
  FUN_001e7188(param_5,0,0x18);
  if (param_6 != 0) {
    FUN_001e7188(param_6,0,0x10);
  }
  if (param_7 != 0) {
    FUN_001e7188(param_7,0,8);
  }
  fVar14 = DAT_0037041c;
  bVar6 = *(byte *)(param_3 + 0x26);
  if (bVar6 < 8) {
    uStack_d0 = *(undefined4 *)(param_3 + 0x8c);
    uStack_cc = *(undefined4 *)(param_3 + 0x90);
    uStack_c8 = *(undefined4 *)(param_3 + 0x94);
    iVar12 = 2;
    uStack_c4 = 0;
    fVar16 = DAT_00370418;
    do {
      iVar12 = iVar12 + -1;
      fVar13 = (float)FUN_00203a40();
      *(float *)((int)puVar9 + 0x10) = ((fVar18 * fVar13 - fVar15) * fVar16) / fVar14;
      puVar9 = (undefined4 *)((int)puVar9 + 4);
    } while (-1 < iVar12);
    if (*(byte *)(param_3 + 0x26) - 2 < 2) {
      uStack_c0 = 0;
      uStack_bc = 0;
    }
    pfVar10 = param_5 + 4;
    FUN_002f4000(auStack_b0);
    FUN_002f4298(auStack_b0,auStack_b0,&uStack_c0);
    FUN_002f3cd8(pfVar10,auStack_b0,&uStack_d0);
    param_5[4] = param_5[4] * *(float *)(param_3 + 0xbc);
    param_5[5] = param_5[5] * *(float *)(param_3 + 0xc0);
    param_5[6] = param_5[6] * *(float *)(param_3 + 0xc4);
    FUN_002f3d98(pfVar10,pfVar10);
    param_5[7] = 0.0;
    bVar6 = *(byte *)(param_3 + 0x26);
  }
  fVar15 = DAT_00370420;
  switch(bVar6) {
  default:
    fVar15 = *(float *)(param_3 + 0xb8);
    if (fVar15 == 0.0) goto LAB_00203d70;
    break;
  case 4:
  case 5:
    if (*(float *)(param_3 + 0xb8) != 0.0) {
      fVar18 = *(float *)(param_3 + 0xb8) * DAT_00370424;
      switch(*(undefined1 *)(param_3 + 200)) {
      default:
        iVar12 = 0;
        pfVar10 = param_5;
        do {
          iVar12 = iVar12 + 1;
          fVar15 = (float)FUN_00203a40();
          *pfVar10 = *(float *)(param_3 + 0xb8) * fVar15 - fVar18;
          pfVar10 = pfVar10 + 1;
        } while (iVar12 < 3);
        fVar15 = *(float *)(param_3 + 0xbc);
        break;
      case 1:
        iVar12 = 0;
        FUN_00203a40();
        pfVar10 = param_5;
        do {
          iVar12 = iVar12 + 1;
          fVar15 = (float)FUN_00203a40();
          *pfVar10 = *(float *)(param_3 + 0xb8) * fVar15 - fVar18;
          pfVar10 = pfVar10 + 1;
        } while (iVar12 < 3);
        fVar15 = *(float *)(param_3 + 0xbc);
        break;
      case 2:
        iVar12 = 0;
        pfVar10 = param_5;
        do {
          iVar12 = iVar12 + 1;
          fVar15 = (float)FUN_00203a40();
          fVar16 = *(float *)(param_3 + 0xb8);
          fVar14 = (float)FUN_00203a40();
          *pfVar10 = fVar16 * fVar15 * fVar14 - fVar18;
          pfVar10 = pfVar10 + 1;
        } while (iVar12 < 3);
        fVar15 = *(float *)(param_3 + 0xbc);
        break;
      case 3:
        iVar12 = 0;
        pfVar10 = param_5;
        do {
          iVar12 = iVar12 + 1;
          fVar14 = (float)FUN_00203a40();
          fVar13 = *(float *)(param_3 + 0xb8);
          fVar16 = (float)FUN_00203a40();
          *pfVar10 = (*(float *)(param_3 + 0xb8) - fVar13 * fVar14 * fVar16 * fVar15) - fVar18;
          pfVar10 = pfVar10 + 1;
        } while (iVar12 < 3);
        fVar15 = *(float *)(param_3 + 0xbc);
        break;
      case 4:
        iVar12 = 0;
        pfVar10 = param_5;
        do {
          iVar12 = iVar12 + 1;
          fVar15 = (float)FUN_00203a40();
          fVar17 = *(float *)(param_3 + 0xb8);
          fVar14 = (float)FUN_00203a40();
          fVar16 = (float)FUN_00203a40();
          fVar13 = (float)FUN_00203a40();
          *pfVar10 = fVar17 * fVar15 * fVar14 * fVar16 * fVar13 - fVar18;
          pfVar10 = pfVar10 + 1;
        } while (iVar12 < 3);
        fVar15 = *(float *)(param_3 + 0xbc);
        break;
      case 5:
        iVar12 = 2;
        fVar15 = DAT_00370424;
        pfVar10 = param_5;
        do {
          iVar12 = iVar12 + -1;
          fVar14 = (float)FUN_00203a40();
          fVar17 = *(float *)(param_3 + 0xb8);
          fVar16 = (float)FUN_00203a40();
          fVar13 = (float)FUN_00203a40();
          *pfVar10 = (*(float *)(param_3 + 0xb8) - fVar17 * fVar14 * fVar16 * fVar13 * fVar15) -
                     fVar18;
          pfVar10 = pfVar10 + 1;
        } while (-1 < iVar12);
        fVar15 = *(float *)(param_3 + 0xbc);
      }
      *param_5 = *param_5 * fVar15;
      param_5[1] = param_5[1] * *(float *)(param_3 + 0xc0);
      param_5[2] = param_5[2] * *(float *)(param_3 + 0xc4);
    }
    goto LAB_00203d70;
  case 6:
  case 7:
  case 8:
  case 9:
    iVar12 = *(int *)(DAT_01d9e6e8 + 0x90);
    if (*(short *)(param_3 + 0xd0) < 0) goto LAB_00203d70;
    psVar11 = (short *)(*(int *)(DAT_01d9e6e4 + 0x18) + *(short *)(param_3 + 0xd0) * 8);
    if (iVar12 == 0) {
      iVar12 = *(int *)(*psVar11 * 0x24 + *(int *)(DAT_01d9e6e4 + 0x10) + 0x14);
    }
    switch(*(undefined1 *)(param_3 + 200)) {
    default:
      uVar4 = *(ushort *)(param_2 + 0x62);
      sVar7 = uVar4 + 1;
      if ((long)psVar11[1] <= (long)(ulong)uVar4) {
        *(undefined2 *)(param_2 + 0x62) = 0;
        uVar4 = 0;
        sVar7 = 1;
      }
      *(short *)(param_2 + 0x62) = sVar7;
      puVar9 = (undefined4 *)
               ((uint)*(ushort *)((uint)uVar4 * 2 + *(int *)(psVar11 + 2)) * 6 + iVar12);
      uStack_70 = *puVar9;
      sStack_6c = *(short *)(puVar9 + 1);
      goto LAB_002046b0;
    case 1:
      FUN_00203a40();
      fVar18 = (float)FUN_00203a40();
      goto LAB_0020472c;
    case 2:
      fVar15 = (float)FUN_00203a40();
      break;
    case 3:
      fVar15 = (float)FUN_00203a40();
      goto LAB_002047d8;
    case 4:
      fVar15 = (float)FUN_00203a40();
      fVar18 = (float)FUN_00203a40();
      fVar15 = fVar15 * fVar18;
      break;
    case 5:
      fVar18 = (float)FUN_00203a40();
      fVar14 = (float)FUN_00203a40();
      fVar15 = (float)FUN_00203a40();
      fVar15 = fVar18 * fVar14 * fVar15;
LAB_002047d8:
      fVar18 = (float)FUN_00203a40();
      fVar14 = (float)FUN_00203a40();
      uVar2 = FUN_00313b80(fVar15 * fVar18 * fVar14);
      uVar2 = FUN_00313ed8(0x3ff0000000000000,uVar2);
      fVar18 = (float)FUN_003144b0(uVar2);
      goto LAB_0020472c;
    }
    fVar14 = (float)FUN_00203a40();
    fVar18 = (float)FUN_00203a40();
    fVar18 = fVar15 * fVar14 * fVar18;
LAB_0020472c:
    sVar7 = psVar11[1];
    if ((int)sVar7 <= (int)(uint)*(ushort *)(param_2 + 0x62)) {
      *(undefined2 *)(param_2 + 0x62) = 0;
      sVar7 = psVar11[1];
    }
    puVar9 = (undefined4 *)
             ((uint)*(ushort *)((int)(fVar18 * (float)(int)sVar7) * 2 + *(int *)(psVar11 + 2)) * 6 +
             iVar12);
    uStack_70 = *puVar9;
    sStack_6c = *(short *)(puVar9 + 1);
LAB_002046b0:
    *param_5 = (float)(int)(short)uStack_70 * *(float *)(param_3 + 0xbc);
    param_5[1] = (float)(int)(*(u16*)((u8*)&uStack_70 + 2)) * *(float *)(param_3 + 0xc0);
    param_5[2] = (float)(int)sStack_6c * *(float *)(param_3 + 0xc4);
    if (*(byte *)(param_3 + 0x26) - 8 < 2) {
      FUN_002f3d98(param_5 + 4,param_5);
      param_5[7] = 0.0;
    }
    goto LAB_00203d70;
  }
  switch(*(undefined1 *)(param_3 + 200)) {
  case 1:
    FUN_00203a40();
    fVar15 = (float)FUN_00203a40();
    fVar15 = *(float *)(param_3 + 0xb8) * fVar15;
    break;
  case 2:
    fVar18 = (float)FUN_00203a40();
    fVar14 = *(float *)(param_3 + 0xb8);
    goto LAB_0020432c;
  case 3:
    fVar15 = (float)FUN_00203a40();
    fVar18 = *(float *)(param_3 + 0xb8);
    fVar14 = (float)FUN_00203a40();
    fVar14 = fVar18 * fVar15 * fVar14;
    fVar15 = *(float *)(param_3 + 0xb8);
    fVar18 = DAT_00370420;
    goto LAB_00204364;
  case 4:
    fVar15 = (float)FUN_00203a40();
    fVar18 = *(float *)(param_3 + 0xb8);
    fVar14 = (float)FUN_00203a40();
    fVar14 = fVar18 * fVar15 * fVar14;
    fVar18 = (float)FUN_00203a40();
LAB_0020432c:
    fVar15 = (float)FUN_00203a40();
    fVar15 = fVar14 * fVar18 * fVar15;
    break;
  case 5:
    fVar15 = (float)FUN_00203a40();
    fVar16 = *(float *)(param_3 + 0xb8);
    fVar18 = (float)FUN_00203a40();
    fVar14 = (float)FUN_00203a40();
    fVar14 = fVar16 * fVar15 * fVar18 * fVar14;
    fVar15 = *(float *)(param_3 + 0xb8);
    fVar18 = DAT_00370424;
LAB_00204364:
    fVar15 = fVar15 - fVar14 * fVar18;
  }
  FUN_002f4870(fVar15,param_5,param_5 + 4);
LAB_00203d70:
  uVar3 = FUN_00203a88(*(undefined1 *)(param_3 + 0x48));
  *(undefined1 *)(param_5 + 10) = uVar3;
  uVar3 = FUN_00203a88(*(undefined1 *)(param_3 + 0x49));
  *(undefined1 *)((int)param_5 + 0x29) = uVar3;
  uVar3 = FUN_00203a88(*(undefined1 *)(param_3 + 0x4a));
  *(undefined1 *)((int)param_5 + 0x2a) = uVar3;
  uVar3 = FUN_00203a88(*(undefined1 *)(param_3 + 0x4b));
  *(undefined1 *)((int)param_5 + 0x2b) = uVar3;
  if (*(char *)(param_3 + 0x24) == '\0') {
    cVar5 = *(char *)(param_3 + 0x25);
  }
  else {
    param_5[0x15] = (float)*(byte *)(param_4 + 0xb);
    *(undefined1 *)(param_5 + 0x17) = *(undefined1 *)(param_3 + 0x24);
    cVar5 = *(char *)(param_3 + 0x25);
  }
  if (cVar5 != '\0') {
    *(char *)((int)param_5 + 0x5d) = cVar5;
  }
  param_5[0x16] = DAT_00370428;
  if (*(char *)(param_3 + 0xd3) == '\0') {
    cVar5 = *(char *)(param_3 + 0xd4);
  }
  else {
    param_5[0x16] = 0.0;
    *(undefined1 *)((int)param_5 + 0x5e) = *(undefined1 *)(param_3 + 0xd3);
    cVar5 = *(char *)(param_3 + 0xd4);
  }
  if (cVar5 != '\0') {
    *(char *)((int)param_5 + 0x5f) = cVar5;
  }
  fVar18 = DAT_0037042c;
  fVar15 = DAT_0037041c;
  *(short *)((int)param_5 + 0x2e) =
       (short)(int)((*(float *)(param_3 + 0x7c) * DAT_0037042c) / DAT_0037041c);
  *(short *)(param_5 + 0xc) = (short)(int)((*(float *)(param_3 + 0x80) * fVar18) / fVar15);
  bVar8 = *(byte *)(param_3 + 0xcb) & 4;
  bVar6 = 0;
  if (*(byte *)(param_3 + 0xcb) != 0) {
    fVar14 = (float)FUN_00203a40();
    *(short *)((int)param_5 + 0x32) =
         (short)(int)((fVar14 * *(float *)(param_3 + 0x88) * fVar18) / fVar15);
    bVar6 = *(byte *)(param_3 + 0xcb);
    if (((bVar6 & 1) == 0) || ((bVar6 & 2) == 0)) {
      if ((bVar6 & 2) != 0) {
        sVar7 = *(short *)((int)param_5 + 0x32);
        goto LAB_00203ee4;
      }
      bVar8 = bVar6 & 4;
    }
    else {
      fVar15 = (float)FUN_00203a40();
      if (DAT_00370424 < fVar15) {
        sVar7 = *(short *)((int)param_5 + 0x32);
LAB_00203ee4:
        *(short *)((int)param_5 + 0x32) = -sVar7;
        bVar6 = *(byte *)(param_3 + 0xcb);
      }
      else {
        bVar6 = *(byte *)(param_3 + 0xcb);
      }
      bVar8 = bVar6 & 4;
    }
  }
  if (bVar8 != 0) {
    *(short *)((int)param_5 + 0x2e) =
         *(short *)((int)param_5 + 0x2e) + *(short *)((int)param_5 + 0x32);
    bVar6 = *(byte *)(param_3 + 0xcb);
  }
  if ((bVar6 & 8) == 0) {
    fVar15 = *(float *)(param_3 + 0x4c);
  }
  else {
    *(short *)(param_5 + 0xc) = *(short *)(param_5 + 0xc) + *(short *)((int)param_5 + 0x32);
    fVar15 = *(float *)(param_3 + 0x4c);
  }
  param_5[0xd] = fVar15;
  param_5[0xe] = *(float *)(param_3 + 0x50);
  param_5[0xf] = *(float *)(param_3 + 0x58);
  param_5[0x10] = *(float *)(param_3 + 0x5c);
  bVar6 = 0;
  if (*(byte *)(param_3 + 0xca) != 0) {
    if ((*(byte *)(param_3 + 0xca) & 0x20) == 0) {
      fVar15 = (float)FUN_00203a40();
      param_5[0x11] = fVar15 * *(float *)(param_3 + 0x70);
      fVar15 = (float)FUN_00203a40();
      param_5[0x12] = fVar15 * *(float *)(param_3 + 0x74);
      bVar6 = *(byte *)(param_3 + 0xca);
      if ((bVar6 & 1) == 0) goto LAB_0020425c;
      bVar8 = bVar6 & 2;
      if ((bVar6 & 2) == 0) goto LAB_00204260;
      fVar18 = (float)FUN_00203a40();
      fVar15 = DAT_00370424;
      if (DAT_00370424 < fVar18) {
        param_5[0x11] = -param_5[0x11];
      }
      fVar18 = (float)FUN_00203a40();
      if (fVar18 <= fVar15) {
        bVar6 = *(byte *)(param_3 + 0xca);
        goto LAB_00203fdc;
      }
      param_5[0x12] = -param_5[0x12];
    }
    else {
      fVar15 = (float)FUN_00203a40();
      fVar15 = fVar15 * *(float *)(param_3 + 0x70);
      param_5[0x11] = fVar15;
      param_5[0x12] = fVar15;
      bVar6 = *(byte *)(param_3 + 0xca);
      if ((bVar6 & 1) == 0) {
LAB_0020425c:
        bVar8 = bVar6 & 2;
LAB_00204260:
        if (bVar8 == 0) goto LAB_00203fdc;
        fVar15 = param_5[0x11];
      }
      else {
        bVar8 = bVar6 & 2;
        if ((bVar6 & 2) == 0) goto LAB_00204260;
        fVar15 = (float)FUN_00203a40();
        if (fVar15 <= DAT_00370424) {
          bVar6 = *(byte *)(param_3 + 0xca);
          goto LAB_00203fdc;
        }
        fVar15 = param_5[0x11];
      }
      param_5[0x11] = -fVar15;
      param_5[0x12] = -param_5[0x12];
    }
    bVar6 = *(byte *)(param_3 + 0xca);
  }
LAB_00203fdc:
  if ((bVar6 & 4) != 0) {
    param_5[0xd] = param_5[0xd] + param_5[0x11];
    param_5[0xe] = param_5[0xe] + param_5[0x12];
    bVar6 = *(byte *)(param_3 + 0xca);
  }
  if ((bVar6 & 8) == 0) {
    bVar6 = *(byte *)(param_3 + 0xd2);
  }
  else {
    param_5[0xf] = param_5[0xf] + param_5[0x11];
    param_5[0x10] = param_5[0x10] + param_5[0x12];
    bVar6 = *(byte *)(param_3 + 0xd2);
  }
  if (bVar6 == 1) {
    fVar15 = (float)FUN_00203a40();
    if (DAT_00370424 < fVar15) {
      param_5[0xd] = -param_5[0xd];
LAB_00204060:
      fVar15 = *(float *)(param_3 + 0xa4);
    }
    else {
      fVar15 = *(float *)(param_3 + 0xa4);
    }
  }
  else if (bVar6 < 2) {
    fVar15 = *(float *)(param_3 + 0xa4);
  }
  else {
    if (bVar6 == 2) {
      fVar15 = (float)FUN_00203a40();
      bVar1 = DAT_00370424 < fVar15;
    }
    else {
      if (bVar6 != 3) goto LAB_00204060;
      fVar18 = (float)FUN_00203a40();
      fVar15 = DAT_00370424;
      if (DAT_00370424 < fVar18) {
        param_5[0xd] = -param_5[0xd];
      }
      fVar18 = (float)FUN_00203a40();
      bVar1 = fVar15 < fVar18;
    }
    if (bVar1) {
      param_5[0xe] = -param_5[0xe];
      goto LAB_00204060;
    }
    fVar15 = *(float *)(param_3 + 0xa4);
  }
  fVar18 = 0.0;
  param_5[0x13] = fVar15;
  param_5[0x14] = *(float *)(param_3 + 0xb0);
  fVar15 = *(float *)(param_3 + 0xac);
  if (fVar15 == 0.0) {
    fVar15 = *(float *)(param_3 + 0xd8);
  }
  else {
    fVar14 = (float)FUN_00203a40();
    param_5[0x13] = param_5[0x13] + ((fVar15 + fVar15) * fVar14 - *(float *)(param_3 + 0xac));
    fVar15 = *(float *)(param_3 + 0xd8);
  }
  if (fVar15 == fVar18) {
    sVar7 = *(short *)(param_3 + 0x22);
  }
  else {
    fVar18 = (float)FUN_00203a40();
    param_5[0x14] = param_5[0x14] + ((fVar15 + fVar15) * fVar18 - *(float *)(param_3 + 0xd8));
    sVar7 = *(short *)(param_3 + 0x22);
  }
  if (sVar7 == 0) {
    *(undefined2 *)((int)param_5 + 0x26) = 0xffff;
  }
  else {
    *(short *)((int)param_5 + 0x26) = sVar7;
  }
  *(undefined1 *)(param_5 + 0xb) = 0;
  bVar6 = *(byte *)(param_3 + 0xcc);
  if (bVar6 == 2) {
    param_2 = DAT_01d9e6e8 + 0x10;
  }
  else {
    if (2 < bVar6) {
      if (bVar6 == 3) {
        FUN_002f3d08(param_6,param_2,DAT_01d9e6e8 + 0x10);
      }
      goto LAB_00204110;
    }
    if (bVar6 != 1) goto LAB_00204110;
  }
  FUN_002f3f98(param_6,param_2);
LAB_00204110:
  if (param_7 != 0) {
    iVar12 = (int)param_7;
    *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(iVar12 + 0x1c) = *(undefined4 *)(param_3 + 0x34);
  }
  return;
}

