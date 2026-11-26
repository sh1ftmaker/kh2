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

s32 FUN_001064a8(...) asm("func_001064a8");
s32 FUN_001d9d48(...) asm("func_001d9d48");
s32 FUN_001d9e30(...) asm("func_001d9e30");
s32 FUN_00294000(...) asm("func_00294000");
s32 FUN_002a9d68(...) asm("func_002a9d68");
s32 FUN_002b3440(...) asm("_ZN2Tz8JmPuzzle8SetPieceEv");
s32 FUN_002b3ac8(...) asm("func_002b3ac8");
extern u32 LAB_002b35f4 asm("D_002b35f4");
extern u32 LAB_002b3758 asm("D_002b3758");
_GHIDRA_ANY(block)
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x002b3440, wrapped mechanically (ad/fallback.py)

/* WARNING: Removing unreachable block (ram,0x002b37d4) */

void FUN_002b3440_impl(void) asm("_ZN2Tz8JmPuzzle8SetPieceEv");
void FUN_002b3440_impl(void) {
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  char cVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  uint auStack_240 [20];
  uint auStack_1f0 [52];
  int aiStack_120 [48];
  int iStack_60;
  int iStack_5c;
  
  puVar5 = auStack_240;
  puVar12 = auStack_240;
  puVar4 = auStack_240;
  iVar10 = 9;
  do {
    *puVar5 = 0;
    iVar10 = iVar10 + -1;
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  } while (iVar10 != -1);
  auStack_1f0[0] = 0;
  iVar19 = 9;
  auStack_1f0[1] = 0;
  iStack_60 = FUN_002a9d68();
  iVar10 = FUN_00294000(9);
  iStack_5c = iVar10;
  do {
    *puVar12 = 0;
    iVar19 = iVar19 + -1;
    puVar12[1] = 0;
    puVar12 = puVar12 + 2;
  } while (-1 < iVar19);
  lVar17 = 0;
  while (lVar17 = FUN_001d9e30(lVar17), lVar17 != 0) {
    lVar15 = FUN_001d9d48(lVar17);
    if (lVar15 != 0) {
      bVar2 = ((byte *)lVar17)[1];
      auStack_240[(uint)*(byte *)lVar17 * 2 + (uint)(bVar2 >> 5)] =
           auStack_240[(uint)*(byte *)lVar17 * 2 + (uint)(bVar2 >> 5)] | 1 << (bVar2 & 0x1f);
    }
  }
  iVar19 = *(int *)(iStack_5c + 8);
  iVar20 = 0;
  iVar3 = iStack_60;
  if (0 < iVar19) {
    do {
      pcVar6 = (char *)(iVar3 + 0x1e8);
      iVar19 = 0x2f;
      cVar11 = *pcVar6;
      while( true ) {
        uVar7 = 1 << ((int)cVar11 & 0x1fU);
        pcVar6 = pcVar6 + 4;
        if (-1 < cVar11) {
          uVar14 = *(uint *)((int)puVar4 + ((uint)(int)cVar11 >> 5) * 4);
          if ((uVar14 & uVar7) != 0) {
            *(uint *)((int)puVar4 + ((uint)(int)cVar11 >> 5) * 4) = uVar14 & ~uVar7;
          }
        }
        iVar19 = iVar19 + -1;
        if (iVar19 < 0) break;
        cVar11 = *pcVar6;
      }
      iVar20 = iVar20 + 1;
      iVar19 = *(int *)(iStack_5c + 8);
      puVar4 = (uint *)((int)puVar4 + 8);
      iVar3 = iVar3 + 0xc0;
    } while (iVar20 < iVar19);
  }
  uVar7 = 0;
  if (0 < iVar19) {
    do {
      auStack_1f0[0] = 0;
      auStack_1f0[1] = 0;
      lVar17 = 0;
      uVar14 = 0;
      do {
        uVar13 = uVar14 >> 5;
        uVar8 = uVar14 & 0x1f;
        uVar14 = uVar14 + 1;
        if ((auStack_240[uVar7 * 2 + uVar13] & 1 << uVar8) != 0) {
          lVar17 = (long)((int)lVar17 + 1);
        }
      } while ((int)uVar14 < 0x30);
      lVar15 = 0;
      if (lVar17 != 0) {
        lVar18 = 0;
        piVar21 = aiStack_120;
        do {
          do {
            do {
              lVar18 = FUN_001d9e30(lVar18);
              if (lVar18 == 0) goto LAB_002b35f4;
              pbVar16 = (byte *)lVar18;
            } while (*pbVar16 != uVar7);
            uVar13 = (uint)(pbVar16[1] >> 5);
            uVar8 = 1 << (pbVar16[1] & 0x1f);
            uVar14 = auStack_1f0[uVar13];
          } while (((uVar14 & uVar8) != 0) || ((auStack_240[uVar7 * 2 + uVar13] & uVar8) == 0));
          lVar15 = (long)((int)lVar15 + 1);
          auStack_1f0[uVar13] = uVar14 | uVar8;
          *piVar21 = (int)pbVar16;
          piVar21 = piVar21 + 1;
        } while (lVar15 < lVar17);
LAB_002b35f4:
        puVar4 = auStack_1f0 + 4;
        iVar19 = 0x2f;
        do {
          *puVar4 = 0;
          iVar19 = iVar19 + -1;
          puVar4 = puVar4 + 1;
        } while (-1 < iVar19);
        lVar15 = 0;
        uVar14 = 0;
        iVar19 = FUN_002b3ac8(*(byte *)(iVar10 + 0x11) & 0xf);
        if (0 < iVar19) {
          puVar4 = auStack_1f0 + 4;
          pcVar6 = (char *)(uVar7 * 0xc0 + iStack_60 + 0x1e8);
          cVar11 = *pcVar6;
          while( true ) {
            pcVar6 = pcVar6 + 4;
            if (cVar11 < '\0') {
              *puVar4 = uVar14;
              lVar15 = (long)((int)lVar15 + 1);
              puVar4 = puVar4 + 1;
            }
            uVar14 = uVar14 + 1;
            if (iVar19 <= (int)uVar14) break;
            cVar11 = *pcVar6;
          }
        }
        iVar19 = 0;
        if (lVar15 >= 2) {
          do {
            iVar3 = FUN_001064a8(0xffffffffffffffff);
            iVar3 = iVar3 % (int)lVar15;
            if (lVar15 == 0) {
              trap(7);
            }
            iVar20 = iVar19 % (int)lVar15;
            uVar14 = auStack_1f0[iVar3 + 4];
            iVar19 = iVar19 + 1;
            auStack_1f0[iVar3 + 4] = auStack_1f0[iVar20 + 4];
            auStack_1f0[iVar20 + 4] = uVar14;
          } while (iVar19 < 0x100);
        }
        if (((*(byte *)(iVar10 + 0x11) & 0xf0) != 0) || (lVar18 = 0, lVar15 < 2)) {
LAB_002b3758:
          lVar15 = 0;
          if (0 < lVar17) {
            puVar4 = auStack_240;
            do {
              iVar19 = (uVar7 * 0x30 + *(int *)((int)puVar4 + 0x60)) * 4 + iStack_60;
              *(undefined1 *)(iVar19 + 0x1e8) = *(undefined1 *)(*(int *)((int)puVar4 + 0x120) + 1);
              if ((*(byte *)(iVar10 + 0x11) & 0xf0) == 0) {
                *(undefined1 *)(iVar19 + 0x1e9) = 0;
              }
              else {
                bVar2 = FUN_001064a8(8);
                *(byte *)(iVar19 + 0x1e9) = bVar2 & 3;
                if ((*(char *)(iVar19 + 0x1e8) == lVar15) && ((bVar2 & 3) == 0)) {
                  iVar3 = FUN_001064a8(8);
                  *(char *)(iVar19 + 0x1e9) = (char)(iVar3 % 3) + '\x01';
                }
              }
              lVar15 = (long)((int)lVar15 + 1);
              puVar4 = (uint *)((int)puVar4 + 4);
            } while (lVar15 < lVar17);
          }
        }
        else {
          puVar4 = auStack_240;
          iVar19 = aiStack_120[0];
          if (0 < lVar17) {
            do {
              if ((*(uint *)((int)puVar4 + 0x60) == (uint)*(byte *)(iVar19 + 1)) &&
                 (lVar9 = 0, puVar5 = auStack_240, 0 < lVar15)) {
                do {
                  if ((lVar18 != lVar9) &&
                     (*(uint *)((int)puVar5 + 0x60) !=
                      (uint)*(byte *)(*(int *)((int)puVar4 + 0x120) + 1))) {
                    uVar1 = *(undefined4 *)((int)puVar4 + 0x60);
                    *(uint *)((int)puVar4 + 0x60) = *(uint *)((int)puVar5 + 0x60);
                    *(undefined4 *)((int)puVar5 + 0x60) = uVar1;
                    break;
                  }
                  lVar9 = (long)((int)lVar9 + 1);
                  puVar5 = (uint *)((int)puVar5 + 4);
                } while (lVar9 < lVar15);
              }
              lVar18 = (long)((int)lVar18 + 1);
              if (lVar17 <= lVar18) goto LAB_002b3758;
              piVar21 = (int *)((int)puVar4 + 0x124);
              puVar4 = (uint *)((int)puVar4 + 4);
              iVar19 = *piVar21;
            } while( true );
          }
        }
      }
      uVar7 = uVar7 + 1;
      iVar10 = iVar10 + 0x10;
    } while ((int)uVar7 < *(int *)(iStack_5c + 8));
  }
  return;
}

