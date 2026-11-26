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

s32 FUN_001058e8(...) asm("func_001058e8");
s32 FUN_001145b0(...) asm("func_001145b0");
s32 FUN_001a3570(...) asm("func_001a3570");
s32 FUN_001a36f8(...) asm("func_001a36f8");
s32 FUN_001a6598(...) asm("func_001a6598");
s32 FUN_001a80c8(...) asm("func_001a80c8");
s32 FUN_001a8110(...) asm("func_001a8110");
s32 FUN_00270c70(...) asm("_Z17ctarget0_00270c70v");
s32 FUN_002713a0(...) asm("func_002713a0");
s32 FUN_00271870(...) asm("func_00271870");
s32 FUN_00281180(...) asm("func_00281180");
s32 FUN_002fde18(...) asm("func_002fde18");
extern AnyCell DAT_0035f010 asm("D_0035f010");
extern AnyCell DAT_0035f12c asm("D_0035f12c");
extern AnyCell LAB_00270e6c asm("D_00270e6c");
extern AnyCell LAB_00270fdc asm("D_00270fdc");
_GHIDRA_ANY(block)

// Ghidra decompile of 0x00270c70, wrapped mechanically (ad/fallback.py)

/* WARNING: Removing unreachable block (ram,0x0027108c) */

void FUN_00270c70_impl(undefined8 param_1) asm("_Z17ctarget0_00270c70v");
void FUN_00270c70_impl(undefined8 param_1) {
  ushort uVar1;
  short *psVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  uint auStack_1b0 [80];
  undefined8 uStack_70;
  char *pcStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  lVar17 = 0;
  iStack_58 = (int)param_1;
  iVar18 = 0;
  iVar19 = 0;
  FUN_002713a0(param_1,&pcStack_60,&iStack_5c);
  FUN_002fde18(DAT_0035f12c,0,0x98);
  iVar5 = FUN_00281180(DAT_0035f010,iStack_58);
  iStack_54 = *(int *)(iVar5 + 0x244);
  iVar5 = iStack_5c;
  if (0 < iStack_5c) {
    do {
      switch(pcStack_60[iVar19]) {
      case '\0':
        iVar7 = 0;
        iVar16 = iVar18;
        do {
          iVar5 = FUN_001058e8();
          psVar2 = DAT_0035f12c;
          iVar9 = iVar7 * 2;
          iVar7 = iVar7 + 1;
          iVar18 = iVar16 + 1;
          sVar4 = FUN_00271870(*(undefined2 *)(iVar9 + iVar5 + 0x36f8));
          psVar2[iVar16 * 4 + 4] = sVar4;
          iVar5 = iStack_5c;
          iVar16 = iVar18;
        } while (iVar7 < 4);
        break;
      case '\x01':
        uVar10 = 0;
        iVar5 = 0;
        puVar12 = auStack_1b0;
        do {
          uVar6 = FUN_001a36f8(iVar5);
          iVar5 = iVar5 + 1;
          *puVar12 = uVar6;
          puVar12 = puVar12 + 1;
        } while (iVar5 < 6);
LAB_00270e6c:
        lVar17 = FUN_001a8110(lVar17);
        if (lVar17 != 0) {
          puVar13 = (ushort *)lVar17;
          if (((char)puVar13[1] == '\x12') && (lVar8 = FUN_001a3570(*puVar13), 0 < lVar8)) {
            uVar14 = 0;
            puVar12 = auStack_1b0;
            do {
              if (*puVar12 == (uint)*puVar13) {
                uVar10 = uVar10 | 1 << (uVar14 & 0x1f);
                break;
              }
              uVar14 = uVar14 + 1;
              puVar12 = puVar12 + 1;
            } while ((int)uVar14 < 6);
          }
          goto LAB_00270e6c;
        }
        cVar15 = '\0';
        uVar14 = 0;
        iVar5 = iVar18;
        puVar12 = auStack_1b0;
        do {
          iVar18 = iVar5;
          if (((int)uVar10 >> (uVar14 & 0x1f) & 1U) != 0) {
            cVar15 = cVar15 + '\x01';
            DAT_0035f12c[iVar5 * 4 + 4] = *(short *)puVar12;
            psVar2 = DAT_0035f12c;
            iVar18 = iVar5 + 1;
            uVar3 = FUN_001a6598(uVar14);
            *(undefined1 *)(psVar2 + iVar5 * 4 + 5) = uVar3;
          }
          uVar14 = uVar14 + 1;
          puVar12 = (uint *)((int)puVar12 + 4);
          iVar5 = iVar18;
        } while ((int)uVar14 < 6);
        *(char *)DAT_0035f12c = cVar15;
        iVar5 = iStack_5c;
        break;
      case '\x02':
        iVar7 = 0;
        FUN_002fde18(auStack_1b0,0,0x140);
        uVar10 = (uint)*(byte *)(iStack_54 + 0x12);
        iVar16 = 0;
        iVar5 = iStack_54;
        puVar12 = auStack_1b0;
        if (uVar10 != 0) {
          do {
            uVar14 = (uint)*(ushort *)(iVar5 + 0x34);
            iVar9 = 0;
            if ((uVar14 != 0) || (uVar14 = (uint)*(ushort *)(iVar5 + 0x44), uVar14 != 0)) {
              puVar11 = auStack_1b0;
              if (iVar7 < 1) {
                uVar1 = *(ushort *)(iVar5 + 0x44);
              }
              else {
                do {
                  iVar9 = iVar9 + 1;
                  if (*(ushort *)puVar11 == uVar14) goto LAB_00270fdc;
                  puVar11 = (uint *)((int)puVar11 + 4);
                } while (iVar9 < iVar7);
                uVar1 = *(ushort *)(iVar5 + 0x44);
              }
              iVar7 = iVar7 + 1;
              if (uVar1 == uVar14) {
                uVar14 = uVar14 | 0x80000000;
              }
              *puVar12 = uVar14;
              puVar12 = puVar12 + 1;
              uVar10 = (uint)*(byte *)(iStack_54 + 0x12);
            }
LAB_00270fdc:
            iVar16 = iVar16 + 1;
            iVar5 = iVar5 + 2;
          } while (iVar16 < (int)uVar10);
        }
        iVar5 = iVar7;
        puVar12 = auStack_1b0;
        if (0 < iVar7) {
          do {
            DAT_0035f12c[iVar18 * 4 + 4] = (short)*puVar12;
            if (iStack_58 != 0) {
              iVar16 = FUN_001145b0(DAT_0035f12c[iVar18 * 4 + 4]);
              *(undefined1 *)((int)DAT_0035f12c + iVar18 * 8 + 0xb) =
                   *(undefined1 *)(iVar16 + iStack_54 + 0xf5);
            }
            if ((*puVar12 & 0x80000000) != 0) {
              *(undefined1 *)(DAT_0035f12c + iVar18 * 4 + 5) = 1;
            }
            iVar18 = iVar18 + 1;
            iVar5 = iVar5 + -1;
            puVar12 = puVar12 + 1;
          } while (iVar5 != 0);
        }
        *(char *)((int)DAT_0035f12c + 1) = (char)iVar7;
        iVar5 = iStack_5c;
        break;
      case '\x03':
        *(undefined1 *)((int)DAT_0035f12c + 3) = *(undefined1 *)(iStack_54 + 0xf4);
        iVar5 = iStack_5c;
        break;
      case '\x04':
        iVar16 = 0;
        FUN_002fde18(auStack_1b0,0,0x140);
        iVar5 = 0x4f;
        puVar13 = (ushort *)(iStack_54 + 0x54);
        puVar12 = auStack_1b0;
        do {
          uVar1 = *puVar13;
          if ((((uVar1 & 0x7fff) != 0) && ((short)uVar1 < 0)) &&
             (iVar7 = FUN_001a80c8(uVar1 & 0x7fff), *(char *)(iVar7 + 6) == '\x02')) {
            *puVar12 = uVar1 & 0x7fff;
            iVar16 = iVar16 + 1;
            puVar12 = puVar12 + 1;
          }
          iVar5 = iVar5 + -1;
          puVar13 = puVar13 + 1;
        } while (-1 < iVar5);
        iVar5 = iVar16;
        puVar12 = auStack_1b0;
        if (0 < iVar16) {
          do {
            DAT_0035f12c[iVar18 * 4 + 4] = *(short *)puVar12;
            *(undefined1 *)(DAT_0035f12c + iVar18 * 4 + 5) = 1;
            if (iStack_58 != 0) {
              iVar7 = FUN_001145b0(DAT_0035f12c[iVar18 * 4 + 4]);
              *(undefined1 *)((int)DAT_0035f12c + iVar18 * 8 + 0xb) =
                   *(undefined1 *)(iVar7 + iStack_54 + 0xf5);
            }
            iVar18 = iVar18 + 1;
            iVar5 = iVar5 + -1;
            puVar12 = (uint *)((int)puVar12 + 4);
          } while (iVar5 != 0);
        }
        lVar17 = 0;
        FUN_002fde18(auStack_1b0,0,0x140);
        iVar5 = 0;
        while (lVar17 = FUN_001a8110(lVar17), lVar17 != 0) {
          if ((char)((ushort *)lVar17)[1] == '\x13') {
            iVar7 = iVar16;
            psVar2 = DAT_0035f12c;
            puVar12 = auStack_1b0;
            if (0 < iVar16) {
              do {
                if ((long)psVar2[4] == (ulong)*(ushort *)lVar17) {
                  *puVar12 = iVar5;
                }
                iVar7 = iVar7 + -1;
                psVar2 = psVar2 + 4;
                puVar12 = puVar12 + 1;
              } while (iVar7 != 0);
            }
            iVar5 = iVar5 + 1;
          }
          else {
            iVar5 = iVar5 + 1;
          }
        }
        iVar5 = 0;
        if (0 < iVar16) {
          do {
            iVar7 = iVar5 + 1;
            if (iVar7 < iVar16) {
              puVar12 = auStack_1b0 + iVar5;
              puVar11 = auStack_1b0 + iVar7;
              iVar9 = iVar7;
              do {
                if ((int)*puVar11 < (int)*puVar12) {
                  uStack_70 = *(undefined8 *)(DAT_0035f12c + iVar5 * 4 + 4);
                  *(undefined8 *)(DAT_0035f12c + iVar5 * 4 + 4) =
                       *(undefined8 *)(DAT_0035f12c + iVar9 * 4 + 4);
                  *(undefined8 *)(DAT_0035f12c + iVar9 * 4 + 4) = uStack_70;
                  uVar10 = *puVar12;
                  *puVar12 = *puVar11;
                  *puVar11 = uVar10;
                }
                iVar9 = iVar9 + 1;
                puVar11 = puVar11 + 1;
              } while (iVar9 < iVar16);
            }
            iVar5 = iVar7;
          } while (iVar7 < iVar16);
        }
        *(char *)(DAT_0035f12c + 1) = (char)iVar16;
        lVar17 = 0;
        iVar5 = iStack_5c;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar5);
  }
  *(char *)(DAT_0035f12c + 2) = (char)iVar18;
  if (*pcStack_60 == '\0') {
    iVar5 = 0;
    do {
      if ((DAT_0035f12c[iVar5 * 4 + 4] != 0) && (lVar17 = 4, '\x04' < (char)DAT_0035f12c[2])) {
        do {
          iVar18 = (int)lVar17;
          if (DAT_0035f12c[iVar5 * 4 + 4] == DAT_0035f12c[iVar18 * 4 + 4]) {
            *(char *)(DAT_0035f12c + iVar5 * 4 + 5) = (char)DAT_0035f12c[iVar18 * 4 + 5];
            cVar15 = (char)DAT_0035f12c[2];
          }
          else {
            cVar15 = (char)DAT_0035f12c[2];
          }
          lVar17 = (long)(iVar18 + 1);
        } while (lVar17 < cVar15);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  return;
}

