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

s32 FUN_0023a0d8(...) asm("_ZN2YI8SEQUENCE12UpdateActiveEv");
s32 FUN_002f87c0(...) asm("func_002f87c0");
s32 FUN_002f8960(...) asm("func_002f8960");
s32 FUN_00313bc0(...) asm("func_00313bc0");
extern u32 DAT_003714d4 asm("D_003714d4");
extern u32 DAT_003714d8 asm("D_003714d8");
extern u32 DAT_003714dc asm("D_003714dc");
extern u32 LAB_0023a39c asm("D_0023a39c");
extern u32 LAB_0023a5e0 asm("D_0023a5e0");

// Ghidra decompile of 0x0023a0d8, wrapped mechanically (ad/fallback.py)

void FUN_0023a0d8_impl(int param_1) asm("_ZN2YI8SEQUENCE12UpdateActiveEv");
void FUN_0023a0d8_impl(int param_1) {
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *(undefined1 *)(param_1 + 0xd4) = 1;
  iVar4 = *(int *)(param_1 + 200);
  puVar5 = *(uint **)(param_1 + 0xc4);
  do {
    if (iVar4 < 1) {
      return;
    }
    if ((*puVar5 & 2) != 0) {
      fVar11 = *(float *)(param_1 + 0xcc);
      fVar6 = (float)(int)puVar5[2];
      if ((fVar6 <= fVar11) && (fVar11 <= (float)(int)puVar5[3])) {
        fVar10 = (float)(int)puVar5[3] - fVar6;
        fVar12 = DAT_003714d4;
        if (fVar10 != 0.0) {
          fVar12 = (fVar11 - fVar6) / fVar10;
        }
        uVar3 = *puVar5;
        uVar1 = *(uint *)(param_1 + 0xb8);
        if ((uVar3 & 1) == 0) {
          fVar6 = DAT_003714d4 - fVar12;
          fVar12 = DAT_003714d4 -
                   (fVar12 * fVar12 * fVar12 * 0.0 +
                   fVar6 * DAT_003714d8 * fVar12 * fVar12 * (DAT_003714d4 - (float)puVar5[0x1b]) +
                   fVar6 * fVar6 * DAT_003714d8 * fVar12 * (DAT_003714d4 - (float)puVar5[0x19]) +
                   fVar6 * fVar6 * fVar6);
        }
        if ((uVar1 & 4) == 0) {
          if ((uVar3 & 0x80) == 0) {
            *(uint *)(param_1 + 0xe0) =
                 (uint)(byte)puVar5[0x22] +
                 (int)((float)(int)((uint)(byte)puVar5[0x23] - (uint)(byte)puVar5[0x22]) * fVar12) |
                 ((uint)*(byte *)((int)puVar5 + 0x8b) +
                 (int)((float)(int)((uint)*(byte *)((int)puVar5 + 0x8f) -
                                   (uint)*(byte *)((int)puVar5 + 0x8b)) * fVar12)) * 0x1000000 |
                 ((uint)*(byte *)((int)puVar5 + 0x8a) +
                 (int)((float)(int)((uint)*(byte *)((int)puVar5 + 0x8e) -
                                   (uint)*(byte *)((int)puVar5 + 0x8a)) * fVar12)) * 0x10000 |
                 ((uint)*(byte *)((int)puVar5 + 0x89) +
                 (int)((float)(int)((uint)*(byte *)((int)puVar5 + 0x8d) -
                                   (uint)*(byte *)((int)puVar5 + 0x89)) * fVar12)) * 0x100;
          }
          else {
            *(uint *)(param_1 + 0xe0) = puVar5[0x22];
          }
        }
        else {
          if ((uVar3 & 0x80) == 0) {
            uVar3 = FUN_00313bc0((float)(int)((uint)(byte)puVar5[0x22] +
                                             (int)((float)(int)((uint)(byte)puVar5[0x23] -
                                                               (uint)(byte)puVar5[0x22]) * fVar12))
                                 * *(float *)(param_1 + 0x118));
            iVar4 = FUN_00313bc0((float)(int)((uint)*(byte *)((int)puVar5 + 0x8b) +
                                             (int)((float)(int)((uint)*(byte *)((int)puVar5 + 0x8f)
                                                               - (uint)*(byte *)((int)puVar5 + 0x8b)
                                                               ) * fVar12)) *
                                 *(float *)(param_1 + 0x124));
            uVar3 = uVar3 | iVar4 << 0x18;
            iVar4 = FUN_00313bc0((float)(int)((uint)*(byte *)((int)puVar5 + 0x8a) +
                                             (int)((float)(int)((uint)*(byte *)((int)puVar5 + 0x8e)
                                                               - (uint)*(byte *)((int)puVar5 + 0x8a)
                                                               ) * fVar12)) *
                                 *(float *)(param_1 + 0x120));
            fVar6 = (float)(int)((uint)*(byte *)((int)puVar5 + 0x89) +
                                (int)((float)(int)((uint)*(byte *)((int)puVar5 + 0x8d) -
                                                  (uint)*(byte *)((int)puVar5 + 0x89)) * fVar12)) *
                    *(float *)(param_1 + 0x11c);
          }
          else {
            uVar3 = FUN_00313bc0((float)(byte)puVar5[0x22] * *(float *)(param_1 + 0x118));
            iVar4 = FUN_00313bc0((float)*(byte *)((int)puVar5 + 0x8b) * *(float *)(param_1 + 0x124))
            ;
            uVar3 = uVar3 | iVar4 << 0x18;
            iVar4 = FUN_00313bc0((float)*(byte *)((int)puVar5 + 0x8a) * *(float *)(param_1 + 0x120))
            ;
            fVar6 = (float)*(byte *)((int)puVar5 + 0x89) * *(float *)(param_1 + 0x11c);
          }
          iVar2 = FUN_00313bc0(fVar6);
          *(uint *)(param_1 + 0xe0) = uVar3 | iVar4 << 0x10 | iVar2 << 8;
        }
        fVar6 = DAT_003714d4;
        if ((uVar1 & 2) == 0) {
          if ((*puVar5 & 0x40) == 0) {
            *(float *)(param_1 + 0xd8) =
                 (float)puVar5[0x14] + ((float)puVar5[0x15] - (float)puVar5[0x14]) * fVar12;
            fVar6 = (float)puVar5[0x16] + ((float)puVar5[0x17] - (float)puVar5[0x16]) * fVar12;
            goto LAB_0023a39c;
          }
          *(float *)(param_1 + 0xdc) = DAT_003714d4;
          *(float *)(param_1 + 0xd8) = fVar6;
        }
        else if ((*puVar5 & 0x40) == 0) {
          fVar6 = *(float *)(param_1 + 0x134) *
                  ((float)puVar5[0x12] + ((float)puVar5[0x13] - (float)puVar5[0x12]) * fVar12);
          *(float *)(param_1 + 0xd8) =
               fVar6 * *(float *)(param_1 + 0x138) *
               ((float)puVar5[0x14] + ((float)puVar5[0x15] - (float)puVar5[0x14]) * fVar12);
          fVar6 = fVar6 * *(float *)(param_1 + 0x13c) *
                  ((float)puVar5[0x16] + ((float)puVar5[0x17] - (float)puVar5[0x16]) * fVar12);
LAB_0023a39c:
          *(float *)(param_1 + 0xdc) = fVar6;
        }
        else {
          *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0x134) * *(float *)(param_1 + 0x138);
          *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0x134) * *(float *)(param_1 + 0x13c);
        }
        uVar3 = *puVar5;
        iVar4 = puVar5[4] + (int)((float)(int)(puVar5[5] - puVar5[4]) * fVar12);
        iVar2 = puVar5[6] + (int)((float)(int)(puVar5[7] - puVar5[6]) * fVar12);
        if ((uVar3 & 0x10) == 0) {
          fVar10 = (float)puVar5[0x1c];
          fVar6 = ((float)puVar5[0x1d] - fVar10) * fVar12;
          fVar11 = (float)puVar5[0x1e] + ((float)puVar5[0x1f] - (float)puVar5[0x1e]) * fVar12;
          if ((uVar3 & 8) == 0) {
            fVar13 = fVar12 * DAT_003714dc;
            fVar7 = (float)FUN_002f8960(fVar13 * (float)(ushort)puVar5[0x20]);
            fVar13 = (float)FUN_002f8960(fVar13 * (float)*(ushort *)((int)puVar5 + 0x82));
            fVar11 = fVar11 * fVar13;
          }
          else {
            fVar13 = fVar12 * DAT_003714dc;
            fVar7 = (float)FUN_002f87c0(fVar13 * (float)(ushort)puVar5[0x20]);
            fVar13 = (float)FUN_002f87c0(fVar13 * (float)*(ushort *)((int)puVar5 + 0x82));
            fVar11 = fVar11 * fVar13;
          }
          iVar4 = iVar4 + (int)((fVar10 + fVar6) * fVar7);
          uVar3 = *puVar5;
          uVar1 = *(uint *)(param_1 + 0xb8);
          iVar2 = iVar2 + (int)fVar11;
        }
        fVar11 = (float)(int)(puVar5[8] + (int)((float)(int)(puVar5[9] - puVar5[8]) * fVar12)) *
                 *(float *)(param_1 + 0xd8);
        fVar6 = (float)(int)(puVar5[10] + (int)((float)(int)(puVar5[0xb] - puVar5[10]) * fVar12)) *
                *(float *)(param_1 + 0xdc);
        if ((uVar1 & 1) == 0) {
          if ((uVar3 & 0x20) != 0) goto LAB_0023a5e0;
          fVar7 = (float)puVar5[0x10] + ((float)puVar5[0x11] - (float)puVar5[0x10]) * fVar12;
          fVar10 = (float)puVar5[0xc] + ((float)puVar5[0xd] - (float)puVar5[0xc]) * fVar12;
          fVar12 = (float)puVar5[0xe] + ((float)puVar5[0xf] - (float)puVar5[0xe]) * fVar12;
        }
        else if ((uVar3 & 0x20) == 0) {
          fVar10 = (float)puVar5[0xc] + ((float)puVar5[0xd] - (float)puVar5[0xc]) * fVar12 +
                   *(float *)(param_1 + 0x128);
          fVar7 = (float)puVar5[0x10] + ((float)puVar5[0x11] - (float)puVar5[0x10]) * fVar12 +
                  *(float *)(param_1 + 0x130);
          fVar12 = (float)puVar5[0xe] + ((float)puVar5[0xf] - (float)puVar5[0xe]) * fVar12 +
                   *(float *)(param_1 + 300);
        }
        else {
          fVar10 = *(float *)(param_1 + 0x128);
          fVar12 = *(float *)(param_1 + 300);
          fVar7 = *(float *)(param_1 + 0x130);
        }
        fVar13 = (float)FUN_002f8960(fVar10);
        fVar10 = (float)FUN_002f87c0(fVar10);
        fVar8 = (float)FUN_002f8960(fVar12);
        fVar9 = (float)FUN_002f87c0(fVar12);
        fVar13 = fVar13 * fVar8;
        fVar8 = (float)FUN_002f8960(fVar7);
        fVar7 = (float)FUN_002f87c0(fVar7);
        fVar12 = fVar6 * (fVar10 * fVar8 + fVar13 * fVar7);
        fVar6 = fVar6 * (fVar10 * fVar7 + fVar13 * -fVar8) + fVar11 * fVar9 * -fVar8;
        fVar11 = fVar12 + fVar11 * fVar9 * fVar7;
LAB_0023a5e0:
        *(int *)(param_1 + 0xe4) = iVar4 + (int)fVar11;
        *(int *)(param_1 + 0xe8) = iVar2 + (int)fVar6;
        return;
      }
    }
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + 0x24;
  } while( true );
}

