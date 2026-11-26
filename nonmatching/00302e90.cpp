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

s32 FUN_002fded8(...) asm("func_002fded8");
s32 FUN_002fdf30(...) asm("func_002fdf30");
s32 FUN_00302e90(...) asm("_Z16wtarget_00302e90jjjj");
s32 FUN_00303170(...) asm("func_00303170");
extern undefined DAT_00365c50 asm("D_00365c50");
extern undefined DAT_00365c54 asm("D_00365c54");
extern undefined DAT_00366058 asm("D_00366058");
extern undefined DAT_00366060 asm("D_00366060");
extern undefined LAB_00302f40 asm("D_00302f40");
extern undefined LAB_00302fcc asm("D_00302fcc");
extern undefined LAB_00303090 asm("D_00303090");
extern undefined *PTR_DAT_00365c58 asm("D_00365c58");
extern undefined *PTR_PTR_00365c60 asm("D_00365c60");
extern undefined *PTR_PTR_00365c64 asm("D_00365c64");
_GHIDRA_ANY(block)

// Ghidra decompile of 0x00302e90, wrapped mechanically (ad/fallback.py)

/* WARNING: Removing unreachable block (ram,0x0030306c) */

void FUN_00302e90_impl(undefined8 param_1,long param_2) asm("_Z16wtarget_00302e90jjjj");
void FUN_00302e90_impl(undefined8 param_1,long param_2) {
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined **ppuVar9;
  int iVar10;
  
  if (param_2 == 0) {
    return;
  }
  FUN_002fded8();
  iVar10 = (int)param_2;
  puVar3 = (undefined *)(iVar10 + -8);
  uVar7 = *(uint *)(iVar10 + -4);
  uVar4 = uVar7 & 0xfffffffe;
  puVar6 = puVar3 + uVar4;
  uVar8 = *(uint *)(puVar6 + 4) & 0xfffffffc;
  if (puVar6 == PTR_DAT_00365c58) {
    uVar4 = uVar4 + uVar8;
    if ((uVar7 & 1) == 0) {
      puVar3 = puVar3 + -*(int *)(iVar10 + -8);
      uVar4 = uVar4 + *(int *)(iVar10 + -8);
      iVar10 = *(int *)(puVar3 + 0xc);
      iVar1 = *(int *)(puVar3 + 8);
      *(int *)(iVar10 + 8) = iVar1;
      *(int *)(iVar1 + 0xc) = iVar10;
    }
    bVar2 = DAT_00366058 <= uVar4;
    PTR_DAT_00365c58 = puVar3;
    *(uint *)(puVar3 + 4) = uVar4 | 1;
    if (bVar2) {
      FUN_00303170(param_1,(undefined4)DAT_00366060);
    }
    goto LAB_00302f40;
  }
  *(uint *)(puVar6 + 4) = uVar8;
  bVar2 = false;
  if ((uVar7 & 1) == 0) {
    puVar3 = puVar3 + -*(int *)(iVar10 + -8);
    ppuVar9 = *(undefined ***)(puVar3 + 8);
    uVar4 = uVar4 + *(int *)(iVar10 + -8);
    if (ppuVar9 == &PTR_DAT_00365c58) {
      bVar2 = true;
    }
    else {
      puVar5 = *(undefined **)(puVar3 + 0xc);
      *(undefined ***)(puVar5 + 8) = ppuVar9;
      ppuVar9[3] = puVar5;
    }
  }
  if ((*(uint *)(puVar6 + uVar8 + 4) & 1) == 0) {
    uVar4 = uVar4 + uVar8;
    if (bVar2) {
      ppuVar9 = *(undefined ***)(puVar6 + 8);
      puVar6 = *(undefined **)(puVar6 + 0xc);
    }
    else {
      ppuVar9 = *(undefined ***)(puVar6 + 8);
      if (ppuVar9 == &PTR_DAT_00365c58) {
        bVar2 = true;
        PTR_PTR_00365c60 = puVar3;
        PTR_PTR_00365c64 = puVar3;
        *(undefined ***)(puVar3 + 0xc) = &PTR_DAT_00365c58;
        *(undefined ***)(puVar3 + 8) = &PTR_DAT_00365c58;
        goto LAB_00302fcc;
      }
      puVar6 = *(undefined **)(puVar6 + 0xc);
    }
    *(undefined ***)(puVar6 + 8) = ppuVar9;
    ppuVar9[3] = puVar6;
  }
LAB_00302fcc:
  *(uint *)(puVar3 + 4) = uVar4 | 1;
  *(uint *)(puVar3 + uVar4) = uVar4;
  if (!bVar2) {
    uVar7 = uVar4 >> 3;
    if (uVar4 < 0x200) {
      puVar5 = &DAT_00365c50 + uVar7 * 8;
      puVar6 = (&PTR_DAT_00365c58)[uVar7 * 2];
      *(undefined **)(puVar3 + 0xc) = puVar5;
      *(undefined **)(puVar3 + 8) = puVar6;
      *(undefined **)(puVar6 + 0xc) = puVar3;
      DAT_00365c54 = DAT_00365c54 | (uint)(1L << (long)(int)(uVar4 >> 5));
    }
    else {
      uVar8 = uVar4 >> 9;
      if (uVar8 != 0) {
        if (uVar8 < 5) {
          uVar7 = (uVar4 >> 6) + 0x38;
        }
        else {
          uVar7 = uVar8 + 0x5b;
          if (0x14 < uVar8) {
            if (uVar8 < 0x55) {
              uVar7 = (uVar4 >> 0xc) + 0x6e;
            }
            else if (uVar8 < 0x155) {
              uVar7 = (uVar4 >> 0xf) + 0x77;
            }
            else if (uVar8 < 0x555) {
              uVar7 = (uVar4 >> 0x12) + 0x7c;
            }
            else {
              uVar7 = 0x7e;
            }
          }
        }
      }
      puVar5 = &DAT_00365c50 + uVar7 * 8;
      puVar6 = (&PTR_DAT_00365c58)[uVar7 * 2];
      if (puVar6 == puVar5) {
        DAT_00365c54 = DAT_00365c54 | (uint)(1L << (long)((int)uVar7 >> 2));
      }
      else if (uVar4 < (*(uint *)(puVar6 + 4) & 0xfffffffc)) {
        for (puVar6 = *(undefined **)(puVar6 + 8); puVar6 != puVar5;
            puVar6 = *(undefined **)(puVar6 + 8)) {
          if ((*(uint *)(puVar6 + 4) & 0xfffffffc) <= uVar4) {
            puVar5 = *(undefined **)(puVar6 + 0xc);
            goto LAB_00303090;
          }
        }
        puVar5 = *(undefined **)(puVar6 + 0xc);
      }
      else {
        puVar5 = *(undefined **)(puVar6 + 0xc);
      }
LAB_00303090:
      *(undefined **)(puVar3 + 0xc) = puVar5;
      *(undefined **)(puVar3 + 8) = puVar6;
      *(undefined **)(puVar6 + 0xc) = puVar3;
    }
    *(undefined **)(puVar5 + 8) = puVar3;
  }
LAB_00302f40:
  FUN_002fdf30(param_1);
  return;
}

