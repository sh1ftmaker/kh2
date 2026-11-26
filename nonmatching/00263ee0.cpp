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

s32 FUN_001a6c90(...) asm("func_001a6c90");
s32 FUN_001a6d08(...) asm("func_001a6d08");
s32 FUN_00263ea8(...) asm("func_00263ea8");
s32 FUN_00263eb8(...) asm("func_00263eb8");
s32 FUN_00263ee0(...) asm("_ZN2Tz9IShopInfo10GetShopTblEiPNS0_7ShopTblE");
s32 FUN_002641c8(...) asm("func_002641c8");
extern u32 LAB_00264028 asm("D_00264028");

// Ghidra decompile of 0x00263ee0, wrapped mechanically (ad/fallback.py)

void FUN_00263ee0_impl(short param_1,undefined8 param_2) asm("_ZN2Tz9IShopInfo10GetShopTblEiPNS0_7ShopTblE");
void FUN_00263ee0_impl(short param_1,undefined8 param_2) {
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  short sVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  
  uVar3 = FUN_00263ea8();
  iVar2 = (int)uVar3;
  FUN_00263eb8(uVar3);
  psVar7 = (short *)(iVar2 + 0x10);
  lVar5 = 0;
  psVar8 = psVar7;
  if (*(short *)(iVar2 + 6) < 1) {
LAB_00264028:
    uVar1 = psVar7[7];
  }
  else {
    do {
      psVar7 = psVar8;
      if (*psVar7 == param_1) {
        psVar8 = (short *)(iVar2 + *(int *)(psVar7 + 10));
        lVar5 = FUN_001a6d08(psVar7[1]);
        if (lVar5 == 0) {
          FUN_001a6c90(psVar7[1]);
          sVar6 = psVar7[2];
        }
        else {
          sVar6 = psVar7[2];
        }
        psVar10 = (short *)param_2;
        *psVar10 = sVar6;
        psVar10[1] = psVar7[3];
        psVar10[2] = psVar7[4];
        psVar10[3] = psVar7[5];
        sVar6 = psVar7[6];
        psVar10[5] = 0;
        psVar10[4] = sVar6;
        if ((psVar7[7] & 0x80U) == 0) {
          if (psVar8[1] == 0) {
            *(undefined1 *)((int)psVar10 + 0xd) = 0;
          }
          else {
            *(undefined1 *)((int)psVar10 + 0xd) = 1;
          }
        }
        else {
          *(undefined1 *)((int)psVar10 + 0xd) = 0;
        }
        *(undefined1 *)(psVar10 + 6) = 0;
        uVar1 = psVar7[7];
        if ((uVar1 & 0x100) != 0) {
          *(undefined1 *)(psVar10 + 6) = 1;
          uVar1 = psVar7[7];
        }
        if ((uVar1 & 0x200) == 0) {
          sVar6 = psVar7[8];
        }
        else {
          *(byte *)(psVar10 + 6) = *(byte *)(psVar10 + 6) | 2;
          sVar6 = psVar7[8];
        }
        iVar11 = 0;
        if (sVar6 != 0) {
          do {
            if ((*psVar8 < 0) || (lVar5 = FUN_001a6d08(*psVar8), lVar5 != 0)) {
              FUN_002641c8(param_2,iVar2 + *(int *)(psVar8 + 2),psVar8[1],0x1f);
              uVar1 = psVar7[8];
            }
            else {
              uVar1 = psVar7[8];
            }
            iVar11 = iVar11 + 1;
            psVar8 = psVar8 + 4;
          } while (iVar11 < (int)(uint)uVar1);
        }
        goto LAB_00264028;
      }
      lVar5 = (long)((int)lVar5 + 1);
      psVar8 = psVar7 + 0xc;
    } while (lVar5 < *(short *)(iVar2 + 6));
    uVar1 = psVar7[0x13];
  }
  if ((uVar1 & 0x80) == 0) {
    return;
  }
  iVar11 = 0;
  iVar2 = FUN_00263ea8();
  sVar6 = *(short *)(iVar2 + 6);
  psVar8 = (short *)(iVar2 + 0x10);
  if (0 < sVar6) {
    do {
      if (*psVar8 != param_1) {
        lVar5 = FUN_001a6d08(psVar8[1]);
        if (lVar5 == 0) {
          sVar6 = *(short *)(iVar2 + 6);
        }
        else if ((psVar8[7] & 0x80U) == 0) {
          iVar9 = 0;
          uVar4 = (uint)(ushort)psVar8[8];
          psVar7 = (short *)(iVar2 + *(int *)(psVar8 + 10));
          if (uVar4 != 0) {
            do {
              if (*psVar7 < 0) {
                FUN_002641c8(param_2,iVar2 + *(int *)(psVar7 + 2),psVar7[1],uVar1);
                uVar4 = (uint)(ushort)psVar8[8];
              }
              iVar9 = iVar9 + 1;
              psVar7 = psVar7 + 4;
            } while (iVar9 < (int)uVar4);
          }
          sVar6 = *(short *)(iVar2 + 6);
        }
        else {
          sVar6 = *(short *)(iVar2 + 6);
        }
      }
      iVar11 = iVar11 + 1;
      psVar8 = psVar8 + 0xc;
    } while (iVar11 < sVar6);
  }
  return;
}

