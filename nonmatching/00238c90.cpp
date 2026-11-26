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

s32 FUN_001b7e68(...) asm("func_001b7e68");
s32 FUN_001b7f30(...) asm("func_001b7f30");
s32 FUN_001b7ff8(...) asm("func_001b7ff8");
s32 FUN_001b80d8(...) asm("func_001b80d8");
s32 FUN_00233708(...) asm("func_00233708");
s32 FUN_002338a8(...) asm("func_002338a8");
s32 FUN_00238c90(...) asm("_ZN2YI6SPRITE6_Draw2Eiiii");
extern u32 DAT_003714ac asm("D_003714ac");

// Ghidra decompile of 0x00238c90, wrapped mechanically (ad/fallback.py)

void FUN_00238c90_impl(int param_1,int param_2,int param_3,int param_4,int param_5) asm("_ZN2YI6SPRITE6_Draw2Eiiii");
void FUN_00238c90_impl(int param_1,int param_2,int param_3,int param_4,int param_5) {
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int aiStack_70 [4];
  int iStack_60;
  ulong *puStack_5c;
  
  *(int *)(param_1 + 0x94) = param_4;
  iStack_60 = param_4 << 4;
  iVar8 = param_3 * 0x10 + 0x7300;
  *(int *)(param_1 + 0x8c) = param_2;
  *(int *)(param_1 + 0x90) = param_3;
  *(int *)(param_1 + 0x98) = param_5;
  aiStack_70[2] = 0;
  aiStack_70[1] = 0;
  aiStack_70[0] = 0;
  iVar9 = param_2 * 0x10 + 0x7000;
  FUN_001b7e68(aiStack_70,*(int *)(param_1 + 0x18) * 0xc + 1);
  uVar3 = (ulong)*(int *)(param_1 + 0x18);
  piVar7 = *(int **)(param_1 + 0x14);
  piVar5 = (int *)(aiStack_70[0] + 0x20);
  puStack_5c = (ulong *)(aiStack_70[0] + 0x10);
  if (0 < (long)uVar3) {
    do {
      piVar5[6] = 1;
      piVar5[7] = 0;
      iVar6 = *(int *)(param_1 + 0x9c);
      piVar5[0xb] = 0x8000;
      piVar5[10] = iVar6;
      piVar5[0x12] = 1;
      piVar5[0x13] = 0;
      iVar6 = *(int *)(param_1 + 0x9c);
      piVar5[0x17] = 0x8000;
      piVar5[0x16] = iVar6;
      piVar5[0x1e] = 1;
      piVar5[0x1f] = 0;
      iVar6 = *(int *)(param_1 + 0x9c);
      piVar5[0x23] = 0;
      piVar5[0x22] = iVar6;
      piVar5[0x2a] = 1;
      piVar5[0x2b] = 0;
      iVar6 = *(int *)(param_1 + 0x9c);
      piVar5[0x2f] = 0;
      piVar5[0x2e] = iVar6;
      iVar6 = *(int *)(param_1 + 4) + piVar7[4] * 0x2c;
      if ((*(uint *)(param_1 + 0x10) & 0x40) == 0) {
        iVar4 = *(int *)(iVar6 + 4) * 0x10 + 8;
        *piVar5 = iVar4;
        piVar5[0x18] = iVar4;
        iVar4 = *(int *)(iVar6 + 8) * 0x10 + 8;
        piVar5[1] = iVar4;
        piVar5[0xd] = iVar4;
        iVar4 = *(int *)(iVar6 + 0xc) * 0x10 + 8;
        piVar5[0xc] = iVar4;
        piVar5[0x24] = iVar4;
        iVar4 = *(int *)(iVar6 + 0x10) * 0x10 + 8;
        piVar5[0x19] = iVar4;
      }
      else {
        *piVar5 = (uint)*(ushort *)(param_1 + 0xa0) * 0x10 + 8;
        piVar5[1] = (uint)*(ushort *)(param_1 + 0xa8) * 0x10 + 8;
        piVar5[0xc] = (uint)*(ushort *)(param_1 + 0xa2) * 0x10 + 8;
        piVar5[0xd] = (uint)*(ushort *)(param_1 + 0xaa) * 0x10 + 8;
        piVar5[0x18] = (uint)*(ushort *)(param_1 + 0xa4) * 0x10 + 8;
        piVar5[0x19] = (uint)*(ushort *)(param_1 + 0xac) * 0x10 + 8;
        piVar5[0x24] = (uint)*(ushort *)(param_1 + 0xa6) * 0x10 + 8;
        iVar4 = (uint)*(ushort *)(param_1 + 0xae) * 0x10 + 8;
      }
      piVar5[0x25] = iVar4;
      fVar17 = (float)(*piVar7 * 0x10 + iStack_60);
      fVar16 = (float)(piVar7[1] * 0x10 + param_5 * 0x10);
      fVar13 = (float)(piVar7[2] * 0x10 + iStack_60);
      fVar14 = (float)(piVar7[3] * 0x10 + param_5 * 0x10);
      if ((*(uint *)(param_1 + 0x10) >> 4 & 1) == 0) {
        fVar13 = fVar13 * *(float *)(param_1 + 0x2c);
        fVar14 = fVar14 * *(float *)(param_1 + 0x30);
        fVar17 = fVar17 * *(float *)(param_1 + 0x2c);
        fVar16 = fVar16 * *(float *)(param_1 + 0x30);
      }
      if ((*(uint *)(param_1 + 0x10) >> 3 & 1) == 0) {
        fVar15 = fVar14 * *(float *)(param_1 + 0x24);
        fVar12 = fVar13 * *(float *)(param_1 + 0x1c);
        fVar14 = fVar14 * *(float *)(param_1 + 0x28);
        fVar11 = fVar16 * *(float *)(param_1 + 0x24);
        fVar13 = fVar13 * *(float *)(param_1 + 0x20);
        fVar10 = fVar17 * *(float *)(param_1 + 0x1c);
        fVar16 = fVar16 * *(float *)(param_1 + 0x28);
        fVar17 = fVar17 * *(float *)(param_1 + 0x20);
        piVar5[0x14] = iVar9 + (int)(fVar12 + fVar11);
        piVar5[0x15] = iVar8 + (int)(fVar13 + fVar16);
        piVar5[8] = iVar9 + (int)(fVar10 + fVar11);
        piVar5[9] = iVar8 + (int)(fVar17 + fVar16);
        piVar5[0x20] = iVar9 + (int)(fVar10 + fVar15);
        piVar5[0x21] = iVar8 + (int)(fVar17 + fVar14);
        piVar5[0x2c] = iVar9 + (int)(fVar12 + fVar15);
        piVar5[0x2d] = iVar8 + (int)(fVar13 + fVar14);
      }
      else {
        piVar5[8] = iVar9 + (int)fVar17;
        piVar5[9] = iVar8 + (int)fVar16;
        piVar5[0x14] = iVar9 + (int)fVar13;
        piVar5[0x20] = iVar9 + (int)fVar17;
        piVar5[0x21] = iVar8 + (int)fVar14;
        piVar5[0x15] = iVar8 + (int)fVar16;
        piVar5[0x2c] = iVar9 + (int)fVar13;
        piVar5[0x2d] = iVar8 + (int)fVar14;
      }
      if ((*(uint *)(param_1 + 0x10) >> 5 & 1) == 0) {
        if (*(float *)(param_1 + 0x6c) == DAT_003714ac) {
          uVar2 = FUN_00233708(*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(param_1 + 0x88));
          *(ulong *)(piVar5 + 4) = uVar2 & 0xffffffff;
          uVar2 = FUN_00233708(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(param_1 + 0x88));
          *(ulong *)(piVar5 + 0x10) = uVar2 & 0xffffffff;
          uVar2 = FUN_00233708(*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(param_1 + 0x88));
          *(ulong *)(piVar5 + 0x1c) = uVar2 & 0xffffffff;
          uVar2 = FUN_00233708(*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(param_1 + 0x88));
        }
        else {
          uVar1 = FUN_00233708(*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(param_1 + 0x88));
          uVar2 = FUN_002338a8(*(undefined4 *)(param_1 + 0x6c),uVar1);
          *(ulong *)(piVar5 + 4) = uVar2 & 0xffffffff;
          uVar1 = FUN_00233708(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(param_1 + 0x88));
          uVar2 = FUN_002338a8(*(undefined4 *)(param_1 + 0x6c),uVar1);
          *(ulong *)(piVar5 + 0x10) = uVar2 & 0xffffffff;
          uVar1 = FUN_00233708(*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(param_1 + 0x88));
          uVar2 = FUN_002338a8(*(undefined4 *)(param_1 + 0x6c),uVar1);
          *(ulong *)(piVar5 + 0x1c) = uVar2 & 0xffffffff;
          uVar1 = FUN_00233708(*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(param_1 + 0x88));
          uVar2 = FUN_002338a8(*(undefined4 *)(param_1 + 0x6c),uVar1);
        }
        *(ulong *)(piVar5 + 0x28) = uVar2 & 0xffffffff;
      }
      else {
        *(ulong *)(piVar5 + 4) = (ulong)*(uint *)(iVar6 + 0x1c);
        *(ulong *)(piVar5 + 0x10) = (ulong)*(uint *)(iVar6 + 0x20);
        *(ulong *)(piVar5 + 0x1c) = (ulong)*(uint *)(iVar6 + 0x24);
        *(ulong *)(piVar5 + 0x28) = (ulong)*(uint *)(iVar6 + 0x28);
      }
      uVar3 = (ulong)((int)uVar3 + -1);
      piVar7 = piVar7 + 5;
      piVar5 = piVar5 + 0x30;
    } while (0 < (long)uVar3);
    uVar3 = (ulong)*(int *)(param_1 + 0x18);
  }
  puStack_5c[1] = 0x4e34e34e34e3;
  *puStack_5c = uVar3 & 0xffffffff | 0xc0ae400000008000;
  FUN_001b7ff8(aiStack_70,*(int *)(param_1 + 0x18) * 0xc + 1);
  FUN_001b80d8(aiStack_70);
  FUN_001b7f30(aiStack_70);
  return;
}

