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

s32 FUN_00292998(...) asm("func_00292998");
s32 FUN_00292a90(...) asm("func_00292a90");
s32 FUN_00292af0(...) asm("func_00292af0");
s32 FUN_00292b40(...) asm("func_00292b40");
s32 FUN_00292eb0(...) asm("func_00292eb0");
extern u32 DAT_0035f4bc asm("D_0035f4bc");
extern u32 DAT_0035f4d0 asm("D_0035f4d0");
extern u32 DAT_0035f4d4 asm("D_0035f4d4");
extern u32 DAT_0035f4d8 asm("D_0035f4d8");
extern u32 DAT_0035f4dc asm("D_0035f4dc");
extern u32 DAT_0035f4e0 asm("D_0035f4e0");
_GHIDRA_ANY(CONCAT22)

// Ghidra decompile of 0x00292b40, wrapped mechanically (ad/fallback.py)

void FUN_00292b40_impl(short *param_1,int param_2) asm("func_00292b40");
void FUN_00292b40_impl(short *param_1,int param_2) {
  short sVar1;
  long lVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  short asStack_70 [16];
  
  iVar10 = 0;
  uVar8 = DAT_0035f4bc * 2 + 0xfU >> 4;
  psVar11 = asStack_70 + uVar8 * -8;
  psVar3 = asStack_70 + uVar8 * -8;
  if (0 < param_2) {
    iVar10 = 0;
    psVar9 = param_1;
    iVar6 = param_2;
    do {
      lVar2 = FUN_00292a90(*psVar9);
      if ((lVar2 == 0) && (lVar2 = FUN_00292af0(*psVar9), lVar2 == 0)) {
        iVar10 = iVar10 + 1;
        *psVar11 = *psVar9;
        psVar11 = psVar11 + 1;
      }
      iVar6 = iVar6 + -1;
      psVar9 = psVar9 + 1;
    } while (iVar6 != 0);
  }
  if (DAT_0035f4d0 < iVar10 + DAT_0035f4e0) {
    iVar6 = 0;
    psVar11 = param_1;
    if (0 < param_2) {
      do {
        lVar2 = 0;
        if (0 < DAT_0035f4e0) {
          do {
            iVar5 = (int)lVar2;
            lVar2 = (long)(iVar5 + 1);
            if ((uint)*(ushort *)(iVar5 * 4 + DAT_0035f4dc) == (int)*psVar11) {
              asStack_70[uVar8 * -8 + iVar10] = *psVar11;
              iVar10 = iVar10 + 1;
              break;
            }
          } while (lVar2 < DAT_0035f4e0);
        }
        iVar6 = iVar6 + 1;
        psVar11 = psVar11 + 1;
      } while (iVar6 < param_2);
    }
    FUN_00292998();
  }
  uVar8 = 0;
  uVar4 = 0;
  if (0 < DAT_0035f4d0) {
    iVar6 = 0;
    do {
      iVar5 = 0;
      if ((*(int *)(iVar6 + DAT_0035f4d4 + 4) != 0) && (0 < param_2)) {
        sVar1 = *param_1;
        psVar11 = param_1;
        while ((psVar11 = psVar11 + 1, (long)*(int *)(iVar6 + DAT_0035f4d4) != (long)sVar1 &&
               (iVar5 = iVar5 + 1, iVar5 < param_2))) {
          sVar1 = *psVar11;
        }
      }
      if ((*(int *)(iVar6 + DAT_0035f4d4 + 4) == 0) || (param_2 <= iVar5)) {
        uVar8 = uVar8 | 1 << (uVar4 & 0x1f);
      }
      uVar4 = uVar4 + 1;
      iVar6 = uVar4 * 0x10;
    } while ((int)uVar4 < DAT_0035f4d0);
  }
  iVar6 = 0;
  if (0 < iVar10) {
    do {
      iVar5 = 0;
      if (0 < DAT_0035f4d0) {
        do {
          uVar4 = DAT_0035f4d8 + iVar5;
          iVar5 = iVar5 + 1;
          if (DAT_0035f4d0 <= (int)uVar4) {
            uVar4 = 0;
          }
          if (((int)uVar8 >> (uVar4 & 0x1f) & 1U) != 0) {
            DAT_0035f4d8 = (short)uVar4;
            uVar8 = uVar8 & ~(1 << (uVar4 & 0x1f));
            break;
          }
        } while (iVar5 < DAT_0035f4d0);
      }
      iVar5 = (int)DAT_0035f4e0;
      uVar7 = CONCAT22(DAT_0035f4d8,*psVar3);
      DAT_0035f4d8 = DAT_0035f4d8 + 1;
      DAT_0035f4e0 = DAT_0035f4e0 + 1;
      *(undefined4 *)(iVar5 * 4 + DAT_0035f4dc) = uVar7;
      if ((long)DAT_0035f4d0 <= (long)DAT_0035f4d8) {
        DAT_0035f4d8 = 0;
      }
      iVar6 = iVar6 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar6 < iVar10);
  }
  FUN_00292eb0();
  return;
}

