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
s32 FUN_00188fe0(...) asm("func_00188fe0");
s32 FUN_00189200(...) asm("func_00189200");
s32 FUN_002859a0(...) asm("func_002859a0");
s32 FUN_00286628(...) asm("_Z16u_tail0_00286628v");
extern u32 DAT_0035f2e4 asm("D_0035f2e4");
extern u32 LAB_002866f4 asm("D_002866f4");
extern u32 LAB_002866f8 asm("D_002866f8");
extern u32 LAB_002867d0 asm("D_002867d0");
extern u32 LAB_002868d8 asm("D_002868d8");
extern u32 LAB_002869dc asm("D_002869dc");
extern u32 LAB_00286b30 asm("D_00286b30");
extern u32 LAB_00286c2c asm("D_00286c2c");

// Ghidra decompile of 0x00286628, wrapped mechanically (ad/fallback.py)

void FUN_00286628_impl(void) asm("_Z16u_tail0_00286628v");
void FUN_00286628_impl(void) {
  ushort uVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  short *psVar14;
  ushort *puVar15;
  uint *puVar16;
  int iVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  
  iVar20 = 0;
  bVar3 = true;
  iVar4 = FUN_002859a0();
  if (*(short *)(iVar4 + 0xd0) != 0) {
    psVar14 = (short *)(iVar4 + 0xd2);
    do {
      iVar20 = iVar20 + 1;
      bVar3 = iVar20 < 0x50;
      if (*psVar14 == 0) break;
      psVar14 = psVar14 + 1;
    } while (bVar3);
  }
  iVar5 = FUN_001058e8();
  iVar5 = FUN_00188fe0(iVar5 + 0x24f0,1);
  if (bVar3) {
    iVar11 = 0;
    if ((*(ushort *)(iVar5 + 0x54) & 0x7fff) != 0) {
      puVar10 = (ushort *)(iVar5 + 0x54);
      puVar6 = (ushort *)(iVar20 * 2 + iVar4 + 0xd0);
      bVar3 = true;
      while (bVar3) {
        iVar7 = 0;
        bVar3 = 0 < iVar20;
        uVar18 = *puVar10 & 0x7fff;
        if (bVar3) {
          puVar15 = (ushort *)(iVar4 + 0xd0);
          uVar1 = *puVar15;
          while (puVar15 = puVar15 + 1, uVar1 != uVar18) {
            iVar7 = iVar7 + 1;
            bVar3 = iVar7 < iVar20;
            if (!bVar3) goto LAB_002866f4;
            uVar1 = *puVar15;
          }
          if (!bVar3) {
            *puVar6 = uVar18;
            goto LAB_002866f8;
          }
        }
        else {
LAB_002866f4:
          *puVar6 = uVar18;
LAB_002866f8:
          iVar20 = iVar20 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar10 = puVar10 + 1;
        iVar11 = iVar11 + 1;
        if (((*puVar10 & 0x7fff) == 0) || (bVar3 = iVar20 < 0x50, 0x4f < iVar11)) break;
      }
    }
    if (0 < iVar20) {
      uVar8 = 0;
      uVar19 = 0;
      do {
        uVar12 = uVar8 & 0x1f;
        uVar8 = uVar8 + 1;
        uVar12 = 1 << uVar12;
        if ((*(uint *)(uVar19 * 4 + iVar4 + 0x50) & uVar12) == 0) {
          puVar16 = (uint *)(DAT_0035f2e4 + 0x50 + uVar19 * 4);
          *puVar16 = *puVar16 | uVar12;
        }
        uVar19 = uVar8 >> 5;
      } while ((int)uVar8 < iVar20);
    }
  }
  uVar8 = 0;
  if (0 < iVar20) {
    puVar6 = (ushort *)(iVar4 + 0xd0);
    do {
      bVar3 = false;
      iVar11 = 0;
      if ((*(ushort *)(iVar5 + 0x54) & 0x7fff) != 0) {
        puVar10 = (ushort *)(iVar5 + 0x54);
        iVar7 = iVar5;
        while (*puVar6 != (*(ushort *)(iVar7 + 0x54) & 0x7fff)) {
          puVar10 = puVar10 + 1;
          iVar11 = iVar11 + 1;
          if (((*puVar10 & 0x7fff) == 0) || (iVar7 = iVar11 * 2 + iVar5, 0x4f < iVar11))
          goto LAB_002867d0;
        }
        bVar3 = true;
      }
LAB_002867d0:
      if (!bVar3) {
        uVar12 = 1 << (uVar8 & 0x1f);
        puVar16 = (uint *)((uVar8 >> 5) * 4 + iVar4 + 0x50);
        uVar19 = *puVar16;
        if ((uVar19 & uVar12) == 0) {
          *puVar16 = uVar19 | uVar12;
        }
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while ((int)uVar8 < iVar20);
  }
  iVar5 = 2;
  iVar20 = 0;
  do {
    iVar7 = 0;
    iVar11 = 0;
    psVar14 = (short *)(iVar20 * 0x60 + iVar4 + 0x170);
    do {
      sVar2 = *psVar14;
      psVar14 = psVar14 + 1;
      if (sVar2 == 0) break;
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar11 < 0x30);
    iVar11 = FUN_001058e8();
    iVar11 = FUN_00188fe0(iVar11 + 0x24f0,iVar5);
    if (iVar7 < 0x30) {
      iVar13 = 0;
      if ((*(ushort *)(iVar11 + 0x54) & 0x7fff) != 0) {
        puVar6 = (ushort *)(iVar11 + 0x54);
        bVar3 = true;
        while (bVar3) {
          iVar9 = 0;
          bVar3 = 0 < iVar7;
          if (bVar3) {
            puVar10 = (ushort *)(iVar20 * 0x60 + iVar4 + 0x170);
            uVar18 = *puVar10;
            while (puVar10 = puVar10 + 1, uVar18 != (*puVar6 & 0x7fff)) {
              iVar9 = iVar9 + 1;
              bVar3 = iVar9 < iVar7;
              if (!bVar3) goto LAB_002868d8;
              uVar18 = *puVar10;
            }
            if (!bVar3) goto LAB_002868d8;
          }
          else {
LAB_002868d8:
            iVar9 = iVar20 * 0x30 + iVar7;
            iVar7 = iVar7 + 1;
            *(ushort *)(iVar9 * 2 + iVar4 + 0x170) = *puVar6 & 0x7fff;
          }
          puVar6 = puVar6 + 1;
          iVar13 = iVar13 + 1;
          if (((*puVar6 & 0x7fff) == 0) || (bVar3 = iVar7 < 0x30, 0x4f < iVar13)) break;
        }
      }
      if (0 < iVar7) {
        iVar13 = 0;
        uVar8 = iVar20 * 0x30;
        do {
          iVar13 = iVar13 + 1;
          iVar9 = (uVar8 >> 5) * 4;
          uVar8 = 1 << (uVar8 & 0x1f);
          if ((*(uint *)(iVar9 + iVar4 + 0x5c) & uVar8) == 0) {
            puVar16 = (uint *)(DAT_0035f2e4 + 0x5c + iVar9);
            *puVar16 = *puVar16 | uVar8;
          }
          uVar8 = iVar20 * 0x30 + iVar13;
        } while (iVar13 < iVar7);
      }
    }
    iVar13 = 0;
    if (0 < iVar7) {
      puVar6 = (ushort *)(iVar20 * 0x60 + iVar4 + 0x170);
      do {
        uVar8 = iVar20 * 0x30 + iVar13;
        bVar3 = false;
        iVar9 = 0;
        if ((*(ushort *)(iVar11 + 0x54) & 0x7fff) != 0) {
          puVar10 = (ushort *)(iVar11 + 0x54);
          iVar17 = iVar11;
          while (*puVar6 != (*(ushort *)(iVar17 + 0x54) & 0x7fff)) {
            puVar10 = puVar10 + 1;
            iVar9 = iVar9 + 1;
            if (((*puVar10 & 0x7fff) == 0) || (iVar17 = iVar9 * 2 + iVar11, 0x4f < iVar9))
            goto LAB_002869dc;
          }
          bVar3 = true;
        }
LAB_002869dc:
        iVar13 = iVar13 + 1;
        if (!bVar3) {
          uVar19 = 1 << (uVar8 & 0x1f);
          puVar16 = (uint *)((uVar8 >> 5) * 4 + iVar4 + 0x5c);
          uVar8 = *puVar16;
          if ((uVar8 & uVar19) == 0) {
            *puVar16 = uVar8 | uVar19;
          }
        }
        puVar6 = puVar6 + 1;
      } while (iVar13 < iVar7);
    }
    iVar5 = iVar5 + 1;
    iVar20 = iVar20 + 1;
  } while (iVar5 < 0xe);
  iVar5 = 1;
  iVar20 = 0;
  do {
    iVar7 = 0;
    iVar11 = 0;
    psVar14 = (short *)(iVar20 * 0x60 + iVar4 + 0x5f0);
    if (iVar5 == 6) {
      iVar20 = iVar20 + -1;
    }
    else {
      do {
        sVar2 = *psVar14;
        psVar14 = psVar14 + 1;
        if (sVar2 == 0) break;
        iVar11 = iVar11 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar11 < 0x30);
      iVar11 = FUN_001058e8();
      iVar11 = FUN_00189200(iVar11 + 0x24f0,iVar5);
      if (iVar7 < 0x30) {
        iVar13 = 0;
        if ((*(ushort *)(iVar11 + 8) & 0x7fff) != 0) {
          puVar6 = (ushort *)(iVar11 + 8);
          bVar3 = true;
          while (bVar3) {
            iVar9 = 0;
            bVar3 = 0 < iVar7;
            if (bVar3) {
              puVar10 = (ushort *)(iVar20 * 0x60 + iVar4 + 0x5f0);
              uVar18 = *puVar10;
              while (puVar10 = puVar10 + 1, uVar18 != (*puVar6 & 0x7fff)) {
                iVar9 = iVar9 + 1;
                bVar3 = iVar9 < iVar7;
                if (!bVar3) goto LAB_00286b30;
                uVar18 = *puVar10;
              }
              if (!bVar3) goto LAB_00286b30;
            }
            else {
LAB_00286b30:
              iVar9 = iVar20 * 0x30 + iVar7;
              iVar7 = iVar7 + 1;
              *(ushort *)(iVar9 * 2 + iVar4 + 0x5f0) = *puVar6 & 0x7fff;
            }
            puVar6 = puVar6 + 1;
            iVar13 = iVar13 + 1;
            if (((*puVar6 & 0x7fff) == 0) || (bVar3 = iVar7 < 0x30, 0x17 < iVar13)) break;
          }
        }
        if (0 < iVar7) {
          iVar13 = 0;
          uVar8 = iVar20 * 0x30;
          do {
            iVar13 = iVar13 + 1;
            iVar9 = (uVar8 >> 5) * 4;
            uVar8 = 1 << (uVar8 & 0x1f);
            if ((*(uint *)(iVar9 + iVar4 + 0xa4) & uVar8) == 0) {
              puVar16 = (uint *)(DAT_0035f2e4 + 0xa4 + iVar9);
              *puVar16 = *puVar16 | uVar8;
            }
            uVar8 = iVar20 * 0x30 + iVar13;
          } while (iVar13 < iVar7);
        }
      }
      iVar13 = 0;
      if (0 < iVar7) {
        puVar6 = (ushort *)(iVar20 * 0x60 + iVar4 + 0x5f0);
        do {
          uVar8 = iVar20 * 0x30 + iVar13;
          bVar3 = false;
          iVar9 = 0;
          if ((*(ushort *)(iVar11 + 8) & 0x7fff) != 0) {
            iVar17 = iVar11;
            while (*puVar6 != (*(ushort *)(iVar17 + 8) & 0x7fff)) {
              iVar9 = iVar9 + 1;
              if (((*(ushort *)(iVar9 * 2 + iVar11 + 8) & 0x7fff) == 0) ||
                 (iVar17 = iVar9 * 2 + iVar11, 0x4f < iVar9)) goto LAB_00286c2c;
            }
            bVar3 = true;
          }
LAB_00286c2c:
          iVar13 = iVar13 + 1;
          if (!bVar3) {
            uVar19 = 1 << (uVar8 & 0x1f);
            puVar16 = (uint *)((uVar8 >> 5) * 4 + iVar4 + 0xa4);
            uVar8 = *puVar16;
            if ((uVar8 & uVar19) == 0) {
              *puVar16 = uVar8 | uVar19;
            }
          }
          puVar6 = puVar6 + 1;
        } while (iVar13 < iVar7);
      }
    }
    iVar5 = iVar5 + 1;
    iVar20 = iVar20 + 1;
    if (7 < iVar5) {
      return;
    }
  } while( true );
}

