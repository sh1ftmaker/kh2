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

s32 FUN_00312db8(...) asm("func_00312db8");
extern u32 DAT_003784b0 asm("D_003784b0");
extern u32 LAB_00312ec8 asm("D_00312ec8");
extern u32 LAB_00312f5c asm("D_00312f5c");
extern u32 LAB_0031308c asm("D_0031308c");
extern u32 LAB_00313170 asm("D_00313170");
extern u32 LAB_003131d0 asm("D_003131d0");
extern u32 LAB_00313340 asm("D_00313340");
_GHIDRA_ANY(block)
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x00312db8, wrapped mechanically (ad/fallback.py)

/* WARNING: Removing unreachable block (ram,0x00313284) */
/* WARNING: Removing unreachable block (ram,0x00312f38) */
/* WARNING: Removing unreachable block (ram,0x00313430) */
/* WARNING: Removing unreachable block (ram,0x00312f58) */

ulong FUN_00312db8_impl(long param_1,long param_2) asm("func_00312db8");
ulong FUN_00312db8_impl(long param_1,long param_2) {
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  
  uVar4 = param_2 >> 0x20;
  uVar1 = (uint)param_2;
  uVar17 = (uint)param_1;
  uVar5 = param_1 >> 0x20;
  uVar2 = (ulong)(int)uVar1;
  uVar18 = (ulong)(int)uVar17;
  uVar10 = (uint)((ulong)param_1 >> 0x20);
  uVar19 = (uint)((ulong)param_2 >> 0x20);
  if (uVar4 != 0) {
    uVar6 = 0;
    if (uVar4 <= uVar5) {
      if (uVar4 < 0x10000) {
        iVar11 = 8;
        if (uVar4 < 0x100) {
          iVar11 = 0;
        }
      }
      else {
        iVar11 = 0x10;
        if (0xffffff < uVar4) {
          iVar11 = 0x18;
        }
      }
      uVar3 = 0x20 - ((uint)(byte)(&DAT_003784b0)[uVar19 >> iVar11] + iVar11);
      uVar6 = 0x20 - uVar3;
      if (uVar3 != 0) {
        uVar9 = uVar10 >> (uVar6 & 0x1f);
        uVar19 = uVar19 << (uVar3 & 0x1f) | uVar1 >> (uVar6 & 0x1f);
        uVar8 = uVar19 >> 0x10;
        iVar11 = (int)uVar9 / (int)uVar8;
        uVar10 = uVar10 << (uVar3 & 0x1f) | uVar17 >> (uVar6 & 0x1f);
        uVar1 = uVar1 << (uVar3 & 0x1f);
        if (uVar8 == 0) {
          trap(7);
        }
        uVar6 = iVar11 * (uVar19 & 0xffff);
        uVar9 = (int)uVar9 % (int)uVar8 << 0x10 | uVar10 >> 0x10;
        if (uVar9 < uVar6) {
          uVar9 = uVar9 + uVar19;
          iVar13 = iVar11 + -1;
          if (uVar19 <= uVar9) {
            if (uVar6 <= uVar9) {
              iVar7 = uVar9 - uVar6;
              goto LAB_00313340;
            }
            iVar13 = iVar11 + -2;
            uVar9 = uVar9 + uVar19;
          }
          iVar7 = uVar9 - uVar6;
        }
        else {
          iVar7 = uVar9 - uVar6;
          iVar13 = iVar11;
        }
LAB_00313340:
        uVar6 = iVar7 / (int)uVar8;
        if (uVar8 == 0) {
          trap(7);
        }
        uVar9 = uVar6 * (uVar19 & 0xffff);
        uVar8 = iVar7 % (int)uVar8 << 0x10 | uVar10 & 0xffff;
        uVar10 = uVar6;
        if (uVar8 < uVar9) {
          uVar8 = uVar8 + uVar19;
          uVar10 = uVar6 - 1;
          if ((uVar19 <= uVar8) && (uVar8 < uVar9)) {
            uVar10 = uVar6 - 2;
            uVar8 = uVar8 + uVar19;
          }
        }
        uVar16 = uVar1 & 0xffff;
        uVar6 = iVar13 << 0x10 | uVar10;
        uVar1 = uVar1 >> 0x10;
        uVar19 = (uVar10 & 0xffff) * uVar16;
        uVar16 = (uVar6 >> 0x10) * uVar16;
        uVar10 = (uVar10 & 0xffff) * uVar1 + (uVar19 >> 0x10) + uVar16;
        iVar11 = (uVar6 >> 0x10) * uVar1;
        if (uVar10 < uVar16) {
          iVar11 = iVar11 + 0x10000;
        }
        uVar1 = iVar11 + (uVar10 >> 0x10);
        if ((uVar8 - uVar9 < uVar1) ||
           ((uVar1 == uVar8 - uVar9 &&
            (uVar17 << (uVar3 & 0x1f) < uVar10 * 0x10000 + (uVar19 & 0xffff))))) {
          uVar6 = uVar6 - 1;
        }
        uVar4 = 0;
        goto LAB_00312f5c;
      }
      if ((uVar4 < uVar5) || (uVar6 = 0, uVar2 <= uVar18)) {
        uVar6 = 1;
      }
    }
    uVar4 = 0;
    goto LAB_00312f5c;
  }
  if (uVar5 < uVar2) {
    if (uVar2 < 0x10000) {
      iVar11 = 8;
      if (uVar2 < 0x100) {
        iVar11 = 0;
      }
    }
    else {
      iVar11 = 0x10;
      if (0xffffff < uVar2) {
        iVar11 = 0x18;
      }
    }
    uVar19 = 0x20 - ((uint)(byte)(&DAT_003784b0)[uVar1 >> iVar11] + iVar11);
    if (uVar19 != 0) {
      uVar2 = (ulong)(int)(uVar1 << (uVar19 & 0x1f));
      uVar5 = (ulong)(int)(uVar10 << (uVar19 & 0x1f) | uVar17 >> (0x20 - uVar19 & 0x1f));
      uVar18 = (ulong)(int)(uVar17 << (uVar19 & 0x1f));
    }
    uVar1 = (uint)uVar2;
    uVar19 = uVar1 >> 0x10;
    iVar11 = (int)uVar5 / (int)uVar19;
    if (uVar19 == 0) {
      trap(7);
    }
    iVar13 = iVar11 * (uVar1 & 0xffff);
    uVar10 = (int)uVar5 % (int)uVar19 << 0x10 | (uint)uVar18 >> 0x10;
    if ((ulong)(long)(int)uVar10 < (ulong)(long)iVar13) {
      iVar14 = uVar10 + uVar1;
      iVar7 = iVar11 + -1;
      if (uVar2 <= (ulong)(long)iVar14) {
        if ((ulong)(long)iVar13 <= (ulong)(long)iVar14) {
          iVar13 = iVar14 - iVar13;
          goto LAB_00312ec8;
        }
        iVar7 = iVar11 + -2;
        iVar14 = iVar14 + uVar1;
      }
      iVar13 = iVar14 - iVar13;
    }
    else {
      iVar13 = uVar10 - iVar13;
      iVar7 = iVar11;
    }
LAB_00312ec8:
    uVar10 = iVar13 / (int)uVar19;
    if (uVar19 == 0) {
      trap(7);
    }
    uVar4 = (ulong)(int)(uVar10 * (uVar1 & 0xffff));
    uVar5 = (long)(iVar13 % (int)uVar19 << 0x10) | uVar18 & 0xffff;
    uVar6 = uVar10;
    if (uVar5 < uVar4) {
      uVar5 = (ulong)(int)((int)uVar5 + uVar1);
      uVar6 = uVar10 - 1;
      if ((uVar2 <= uVar5) && (uVar5 < uVar4)) {
        uVar6 = uVar10 - 2;
      }
    }
    uVar6 = iVar7 << 0x10 | uVar6;
    uVar4 = 0;
    goto LAB_00312f5c;
  }
  if (uVar2 == 0) {
    uVar2 = (ulong)(1 / (int)uVar19);
    trap(7);
  }
  if (uVar2 < 0x10000) {
    iVar11 = 8;
    if (uVar2 < 0x100) {
      iVar11 = 0;
    }
  }
  else {
    iVar11 = 0x10;
    if (0xffffff < uVar2) {
      iVar11 = 0x18;
    }
  }
  uVar1 = (uint)uVar2;
  uVar19 = 0x20 - ((uint)(byte)(&DAT_003784b0)[uVar1 >> iVar11] + iVar11);
  if (uVar19 == 0) {
    iVar14 = uVar10 - uVar1;
    uVar4 = 1;
    uVar3 = uVar1 >> 0x10;
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar6 = uVar1 << (uVar19 & 0x1f);
    uVar2 = (ulong)(int)uVar6;
    uVar3 = uVar6 >> 0x10;
    uVar8 = uVar10 >> (0x20 - uVar19 & 0x1f);
    iVar11 = (int)uVar8 / (int)uVar3;
    uVar1 = uVar6 & 0xffff;
    uVar10 = uVar10 << (uVar19 & 0x1f) | uVar17 >> (0x20 - uVar19 & 0x1f);
    uVar18 = (ulong)(int)(uVar17 << (uVar19 & 0x1f));
    if (uVar3 == 0) {
      trap(7);
    }
    iVar13 = iVar11 * uVar1;
    uVar19 = (int)uVar8 % (int)uVar3 << 0x10 | uVar10 >> 0x10;
    iVar7 = iVar11;
    if ((ulong)(long)(int)uVar19 < (ulong)(long)iVar13) {
      uVar19 = uVar19 + uVar6;
      iVar7 = iVar11 + -1;
      if ((ulong)(long)(int)uVar19 < uVar2) goto LAB_00313170;
      if ((ulong)(long)(int)uVar19 < (ulong)(long)iVar13) {
        iVar7 = iVar11 + -2;
        uVar19 = uVar19 + uVar6;
        goto LAB_00313170;
      }
      iVar13 = uVar19 - iVar13;
    }
    else {
LAB_00313170:
      iVar13 = uVar19 - iVar13;
    }
    iVar11 = iVar13 / (int)uVar3;
    uVar5 = (ulong)iVar11;
    if (uVar3 == 0) {
      trap(7);
    }
    iVar14 = iVar11 * uVar1;
    uVar12 = (long)(iVar13 % (int)uVar3 << 0x10) | (long)(int)uVar10 & 0xffffU;
    uVar4 = (ulong)(iVar7 << 0x10);
    if (uVar12 < (ulong)(long)iVar14) {
      iVar13 = (int)uVar12 + uVar6;
      uVar12 = (ulong)iVar13;
      uVar5 = (ulong)(iVar11 + -1);
      if (uVar2 <= uVar12) {
        uVar4 = (ulong)(iVar7 << 0x10);
        if ((ulong)(long)iVar14 <= uVar12) goto LAB_003131d0;
        uVar5 = (ulong)(iVar11 + -2);
        uVar12 = (ulong)(int)(iVar13 + uVar6);
      }
      uVar4 = (ulong)(iVar7 << 0x10);
    }
LAB_003131d0:
    iVar14 = (int)uVar12 - iVar14;
    uVar4 = uVar4 | uVar5;
  }
  iVar11 = iVar14 / (int)uVar3;
  if (uVar3 == 0) {
    trap(7);
  }
  iVar13 = iVar11 * uVar1;
  uVar19 = iVar14 % (int)uVar3 << 0x10 | (uint)uVar18 >> 0x10;
  iVar7 = (int)uVar2;
  if ((ulong)(long)(int)uVar19 < (ulong)(long)iVar13) {
    iVar15 = uVar19 + iVar7;
    iVar14 = iVar11 + -1;
    if (uVar2 <= (ulong)(long)iVar15) {
      if ((ulong)(long)iVar13 <= (ulong)(long)iVar15) {
        iVar13 = iVar15 - iVar13;
        goto LAB_0031308c;
      }
      iVar14 = iVar11 + -2;
      iVar15 = iVar15 + iVar7;
    }
    iVar13 = iVar15 - iVar13;
  }
  else {
    iVar13 = uVar19 - iVar13;
    iVar14 = iVar11;
  }
LAB_0031308c:
  uVar19 = iVar13 / (int)uVar3;
  if (uVar3 == 0) {
    trap(7);
  }
  uVar5 = (long)(iVar13 % (int)uVar3 << 0x10) | uVar18 & 0xffff;
  uVar6 = uVar19;
  if (uVar5 < (ulong)(long)(int)(uVar19 * uVar1)) {
    uVar5 = (ulong)((int)uVar5 + iVar7);
    uVar6 = uVar19 - 1;
    if ((uVar2 <= uVar5) && (uVar5 < (ulong)(long)(int)(uVar19 * uVar1))) {
      uVar6 = uVar19 - 2;
    }
  }
  uVar6 = iVar14 << 0x10 | uVar6;
LAB_00312f5c:
  return (ulong)uVar6 | uVar4 << 0x20;
}

