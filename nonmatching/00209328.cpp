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

s32 FUN_00209328(...) asm("func_00209328");
s32 FUN_002f25a0(...) asm("func_002f25a0");
s32 FUN_002f35e8(...) asm("func_002f35e8");
s32 FUN_002f3918(...) asm("func_002f3918");
s32 FUN_002f3cd8(...) asm("func_002f3cd8");
s32 FUN_002f3d08(...) asm("func_002f3d08");
s32 FUN_002f3d98(...) asm("func_002f3d98");
s32 FUN_002f3ef8(...) asm("func_002f3ef8");
s32 FUN_002f3f10(...) asm("func_002f3f10");
s32 FUN_002f3f40(...) asm("func_002f3f40");
s32 FUN_002f3f88(...) asm("func_002f3f88");
s32 FUN_002f3fc0(...) asm("func_002f3fc0");
s32 FUN_002f4870(...) asm("func_002f4870");
s32 FUN_002f4888(...) asm("func_002f4888");
extern u32 DAT_00359780 asm("D_00359780");
extern u32 DAT_00359788 asm("D_00359788");
extern u32 DAT_00370688 asm("D_00370688");
extern u32 DAT_01d9e6e4 asm("D_01d9e6e4");
extern u32 DAT_01d9e6e8 asm("D_01d9e6e8");
extern u32 DAT_01da8be0 asm("D_01da8be0");
extern u32 DAT_01da8be4 asm("D_01da8be4");
extern u32 DAT_01da8be8 asm("D_01da8be8");
extern u32 DAT_01da8bec asm("D_01da8bec");
extern u32 LAB_00209934 asm("D_00209934");
s32 FlushCache(...) asm("func_003058a0");
_GHIDRA_ANY(SQRT)
_GHIDRA_ANY(SYNC)

// Ghidra decompile of 0x00209328, wrapped mechanically (ad/fallback.py)

void FUN_00209328_impl(int param_1,int param_2,int param_3) asm("func_00209328");
void FUN_00209328_impl(int param_1,int param_2,int param_3) {
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  float *pfVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float afStack_2c0 [4];
  float afStack_2b0 [4];
  Q16 auStack_2a0;
  Q16 auStack_290;
  float fStack_280;
  float fStack_27c;
  float fStack_274;
  Q16 auStack_270;
  float fStack_260;
  float fStack_25c;
  float fStack_254;
  Q16 auStack_250;
  Q16 auStack_240;
  Q16 auStack_230;
  uint auStack_220 [36];
  uint auStack_190 [4];
  float fStack_180;
  float fStack_17c;
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_134;
  float afStack_130 [3];
  float fStack_124;
  undefined1 auStack_120 [64];
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  float afStack_d0 [3];
  float fStack_c4;
  undefined1 auStack_c0 [64];
  uint *puStack_80;
  int iStack_7c;
  uint uStack_78;
  ulong *puStack_74;
  undefined1 *puStack_70;
  
  pfVar11 = afStack_2c0;
  iStack_7c = param_1 + **(int **)(param_3 + 0xc) + 0xa0;
  puStack_80 = (uint *)(param_1 + (*(int **)(param_3 + 0xc))[2] + 0xa0);
  if (*(int *)(param_2 + 4) != 0xffff) {
    afStack_2b0[0] = *(float *)(param_2 + 8);
    afStack_2c0[0] = -afStack_2b0[0];
    afStack_2c0[1] = 0.0;
    afStack_2c0[2] = 0.0;
    afStack_2c0[3] = DAT_00370688;
    afStack_2b0[1] = 0.0;
    afStack_2b0[2] = 0.0;
    afStack_2b0[3] = DAT_00370688;
    if (*(char *)(param_2 + 0x30) == '\0') {
      fVar19 = DAT_00370688;
      FUN_002f3d08(auStack_c0,0x1d9e840,DAT_01d9e6e8 + 0x10);
      uStack_d8 = 0;
      fStack_dc = 0.0;
      fStack_e0 = 0.0;
      fStack_d4 = fVar19;
      FUN_002f3cd8(&fStack_e0,auStack_c0,&fStack_e0);
      FUN_002f3f88(afStack_d0,&fStack_e0);
      afStack_d0[0] = afStack_d0[0] + *(float *)(param_2 + 0xc);
      FUN_002f3cd8(&fStack_e0,0x1d9e8c0,&fStack_e0);
      FUN_002f3cd8(afStack_d0,0x1d9e8c0,afStack_d0);
      if ((fStack_d4 <= 0.0) || (fStack_c4 <= 0.0)) {
        fVar18 = 0.0;
        fVar19 = fVar18;
      }
      else {
        fStack_d4 = fVar19 / fStack_d4;
        FUN_002f4870(fStack_d4,&fStack_e0,&fStack_e0);
        fStack_c4 = fVar19 / fStack_c4;
        FUN_002f4870(fStack_c4,afStack_d0,afStack_d0);
        FUN_002f3f10(&fStack_e0,&fStack_e0,afStack_d0);
        fVar18 = SQRT(fStack_dc * fStack_dc + fStack_e0 * fStack_e0);
        fVar19 = fVar18;
      }
    }
    else {
      fVar19 = DAT_00370688;
      FUN_002f3d08(auStack_120,0x1d9e840,DAT_01d9e6e8 + 0x10);
      FUN_002f3cd8(&fStack_140,auStack_120,afStack_2c0);
      FUN_002f3f88(afStack_130,&fStack_140);
      afStack_130[0] = afStack_130[0] + *(float *)(param_2 + 0xc);
      FUN_002f3cd8(&fStack_140,0x1d9e8c0,&fStack_140);
      FUN_002f3cd8(afStack_130,0x1d9e8c0,afStack_130);
      if ((fStack_134 <= 0.0) || (fStack_124 <= 0.0)) {
        fVar19 = 0.0;
      }
      else {
        fStack_134 = fVar19 / fStack_134;
        FUN_002f4870(fStack_134,&fStack_140,&fStack_140);
        fStack_124 = fVar19 / fStack_124;
        FUN_002f4870(fStack_124,afStack_130,afStack_130);
        FUN_002f3f10(&fStack_140,&fStack_140,afStack_130);
        fVar19 = SQRT(fStack_13c * fStack_13c + fStack_140 * fStack_140);
      }
      FUN_002f3cd8(&fStack_140,auStack_120,afStack_2b0);
      FUN_002f3f88(afStack_130,&fStack_140);
      afStack_130[0] = afStack_130[0] + *(float *)(param_2 + 0xc);
      FUN_002f3cd8(&fStack_140,0x1d9e8c0,&fStack_140);
      FUN_002f3cd8(afStack_130,0x1d9e8c0,afStack_130);
      fVar18 = DAT_00370688;
      if ((fStack_134 <= 0.0) || (fStack_124 <= 0.0)) {
        fVar18 = 0.0;
      }
      else {
        fStack_134 = DAT_00370688 / fStack_134;
        FUN_002f4870(fStack_134,&fStack_140,&fStack_140);
        fStack_124 = fVar18 / fStack_124;
        FUN_002f4870(fStack_124,afStack_130,afStack_130);
        FUN_002f3f10(&fStack_140,&fStack_140,afStack_130);
        fVar18 = SQRT(fStack_13c * fStack_13c + fStack_140 * fStack_140);
      }
      if ((fVar19 == 0.0) && (fVar18 == 0.0)) {
        return;
      }
    }
    FUN_002f3cd8(&fStack_280,DAT_01d9e6e8 + 0x50,afStack_2c0);
    puStack_70 = auStack_2a0;
    FUN_002f3cd8(&fStack_260,DAT_01d9e6e8 + 0x50,afStack_2b0);
    if ((0.0 < fStack_274) || (0.0 < fStack_254)) {
      if (0.0 < fStack_274) {
        fStack_274 = DAT_00370688 / fStack_274;
        fStack_180 = fStack_274;
        FUN_002f4870(fStack_274,&fStack_280,&fStack_280);
      }
      if (0.0 < fStack_254) {
        fStack_254 = DAT_00370688 / fStack_254;
        fStack_17c = fStack_254;
        FUN_002f4870(fStack_254,&fStack_260,&fStack_260);
      }
      fStack_170 = fStack_260 - fStack_280;
      uStack_168 = 0;
      uStack_164 = 0;
      fStack_16c = fStack_25c - fStack_27c;
      FUN_002f3d98(&fStack_170,&fStack_170);
      fStack_160 = -fStack_16c;
      fStack_15c = fStack_170;
      uStack_154 = 0;
      uStack_158 = 0;
      FUN_002f3f40(fVar19,&uStack_150,&fStack_160);
      FUN_002f3ef8(auStack_270,&fStack_280,&uStack_150);
      FUN_002f3f40(fVar18,&uStack_150,&fStack_160);
      FUN_002f3ef8(auStack_250,&fStack_260,&uStack_150);
      fStack_160 = -fStack_160;
      fStack_15c = -fStack_15c;
      FUN_002f3f40(fVar19,&uStack_150,&fStack_160);
      FUN_002f3ef8(&fStack_280,&fStack_280,&uStack_150);
      iVar12 = 0;
      FUN_002f3f40(fVar18,&uStack_150,&fStack_160);
      FUN_002f3ef8(&fStack_260,&fStack_260,&uStack_150);
      FUN_002f3f40(fVar19,&uStack_150,&fStack_170);
      FUN_002f3f10(puStack_70,&fStack_280,&uStack_150);
      FUN_002f3f10(auStack_290,auStack_270,&uStack_150);
      FUN_002f3f40(fVar18,&uStack_150,&fStack_170);
      FUN_002f3ef8(auStack_240,&fStack_260,&uStack_150);
      FUN_002f3ef8(auStack_230,auStack_250,&uStack_150);
      puVar5 = puStack_70;
      iVar8 = 0;
      while( true ) {
        iVar12 = iVar12 + 1;
        FUN_002f3fc0((int)auStack_220 + iVar8,puVar5 + iVar8);
        if (7 < iVar12) break;
        iVar8 = iVar12 * 0x10;
      }
      iVar8 = 0;
      auStack_220[0x20] = (uint)((float)*(byte *)(iStack_7c + 8) * *(float *)(param_2 + 0x10));
      auStack_220[0x21] = (uint)((float)*(byte *)(iStack_7c + 9) * *(float *)(param_2 + 0x14));
      auStack_220[0x22] = (uint)((float)*(byte *)(iStack_7c + 10) * *(float *)(param_2 + 0x18));
      auStack_220[0x23] = (uint)((float)*(byte *)(iStack_7c + 0xb) * *(float *)(param_2 + 0x1c));
      auStack_190[0] = (uint)((float)*(byte *)(iStack_7c + 8) * *(float *)(param_2 + 0x20));
      auStack_190[1] = (uint)((float)*(byte *)(iStack_7c + 9) * *(float *)(param_2 + 0x24));
      auStack_190[2] = (uint)((float)*(byte *)(iStack_7c + 10) * *(float *)(param_2 + 0x28));
      auStack_190[3] = (uint)((float)*(byte *)(iStack_7c + 0xb) * *(float *)(param_2 + 0x2c));
      do {
        if (*(int *)((int)pfVar11 + 0x120) < 0) {
          *(undefined4 *)((int)pfVar11 + 0x120) = 0;
LAB_00209934:
          iVar12 = *(int *)((int)pfVar11 + 0x130);
        }
        else {
          if (0xff < *(int *)((int)pfVar11 + 0x120)) {
            *(undefined4 *)((int)pfVar11 + 0x120) = 0xff;
            goto LAB_00209934;
          }
          iVar12 = *(int *)((int)pfVar11 + 0x130);
        }
        if (iVar12 < 0) {
          *(undefined4 *)((int)pfVar11 + 0x130) = 0;
        }
        else if (0xff < iVar12) {
          *(undefined4 *)((int)pfVar11 + 0x130) = 0xff;
        }
        iVar8 = iVar8 + 1;
        pfVar11 = (float *)((int)pfVar11 + 4);
      } while (iVar8 < 4);
      uVar16 = 0;
      iVar15 = 0;
      iVar9 = DAT_00359780 + 1;
      iVar8 = *(int *)(*(int *)(DAT_01d9e6e4 + 0x10) + *(int *)(param_2 + 4) * 0x24 + 0x1c);
      puVar2 = (uint *)(&DAT_00359788)[DAT_00359780];
      iVar12 = *(int *)(iVar8 + 4);
      DAT_00359780 = iVar9;
      (&DAT_00359788)[iVar9] = puVar2 + 0x200;
      iVar12 = iVar8 + iVar12;
      puVar13 = puVar2 + 0x18;
      puVar2[4] = 1;
      puVar2[5] = 0x30000000;
      puVar2[6] = 0xeee;
      puVar2[7] = 0;
      uStack_78 = (uint)puVar2 & 0xfffffff | 0x80000000;
      puVar2[8] = *(uint *)(iVar12 + 8);
      puStack_74 = (ulong *)(puVar2 + 0x14);
      uVar17 = *(uint *)(iVar12 + 0xc);
      puVar2[10] = 6;
      puVar2[0xb] = 0;
      puVar2[9] = uVar17;
      puVar2[0xc] = (uint)*(byte *)(iVar8 + 0x16);
      bVar1 = *(byte *)(iVar8 + 0x17);
      puVar2[0xe] = 0x42;
      puVar2[0xf] = 0;
      puVar2[0xd] = (uint)bVar1;
      uVar4 = DAT_01da8bec;
      uVar3 = DAT_01da8be8;
      uVar17 = DAT_01da8be4;
      puVar2[0x10] = DAT_01da8be0;
      puVar2[0x11] = uVar17;
      puVar2[0x12] = uVar3;
      puVar2[0x13] = uVar4;
      puVar14 = puStack_80;
      puStack_70 = puVar5;
      do {
        lVar6 = FUN_002f4888(puStack_70 + iVar15 * 0x10);
        if (lVar6 == 0) {
          if (*(char *)(param_2 + 0x30) == '\0') {
            *puVar13 = *puVar14;
            puVar13[1] = puVar14[1];
            uVar17 = puVar14[2];
          }
          else {
            fVar19 = fStack_17c;
            if (iVar15 < 4) {
              fVar19 = fStack_180;
            }
            FUN_002f3f40(fVar19,&uStack_150,puVar14);
            *puVar13 = uStack_150;
            puVar13[1] = uStack_14c;
            uVar17 = uStack_148;
          }
          puVar13[2] = uVar17;
          puVar13[3] = 0;
          puVar13 = puVar13 + 4;
          if (iVar15 < 4) {
            iVar8 = 0;
            puVar10 = auStack_220 + 0x20;
            do {
              iVar8 = iVar8 + 1;
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar8 < 4);
          }
          else {
            puVar10 = auStack_190;
            iVar8 = 3;
            do {
              iVar8 = iVar8 + -1;
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (-1 < iVar8);
          }
          uVar16 = (ulong)((int)uVar16 + 1);
          *puVar13 = auStack_220[iVar15 * 4];
          puVar13[1] = auStack_220[iVar15 * 4 + 1];
          puVar13[2] = auStack_220[iVar15 * 4 + 2];
          puVar13[3] = 0;
          puVar13 = puVar13 + 4;
        }
        iVar15 = iVar15 + 1;
        puVar14 = puVar14 + 4;
      } while (iVar15 < 8);
      puStack_74[1] = 0x412;
      *puStack_74 = uVar16 | 0x302e400000008000;
      SYNC(0);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = ((int)puVar13 - (int)puVar2 >> 4) - 1U | 0x70000000;
      FlushCache(0);
      uVar7 = FUN_002f35e8(2);
      FUN_002f3918(uVar7,uStack_78);
      FUN_002f25a0(0,0);
      DAT_00359780 = DAT_00359780 + -1;
    }
  }
  return;
}

