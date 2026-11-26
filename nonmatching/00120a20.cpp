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

s32 FUN_00120800(...) asm("func_00120800");
s32 FUN_00120a20(...) asm("func_00120a20");
s32 FUN_00133848(...) asm("func_00133848");
s32 FUN_00133898(...) asm("func_00133898");
s32 FUN_001339d0(...) asm("func_001339d0");

// Ghidra decompile of 0x00120a20, wrapped mechanically (ad/fallback.py)

undefined4 FUN_00120a20_impl(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5) asm("func_00120a20");
undefined4 FUN_00120a20_impl(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5) {
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 *puStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  iVar1 = *(int *)(param_1 + 4);
  iStack_6c = param_2;
  puStack_68 = param_3;
  iStack_64 = param_5;
  iVar4 = FUN_00120800();
  iStack_60 = 0;
  iVar11 = *(int *)(iVar1 + 0x1c);
  uStack_70 = param_4;
  if (0 < iVar11) {
    iStack_5c = iStack_64 << 2;
    iVar14 = iVar1;
    puVar15 = puStack_68;
    do {
      iVar11 = 0;
      *puVar15 = uStack_70;
      puVar8 = (undefined2 *)(iVar1 + *(int *)(iVar14 + 0x30));
      piVar12 = (int *)(iVar1 + *(int *)(iVar14 + 0x34));
      FUN_001339d0(&uStack_70,iVar1 + *(int *)(puVar8 + 2),*puVar8,*(undefined4 *)(puVar8 + 4),
                   *(undefined4 *)(puVar8 + 6));
      if (0 < *piVar12) {
        iVar13 = iStack_5c + iStack_6c;
        piVar10 = piVar12;
        do {
          piVar10 = piVar10 + 1;
          puVar9 = puVar8 + 8;
          if (*piVar10 < 0) {
            FUN_00133848(&uStack_70,0,0x17000000,0);
            puVar9 = puVar8 + 0x10;
            uVar7 = *puVar9;
            uVar2 = *(undefined4 *)(puVar8 + 0x14);
            iVar5 = iVar1 + *(int *)(puVar8 + 0x12);
            uVar3 = *(undefined4 *)(puVar8 + 0x16);
          }
          else {
            uVar2 = *(undefined4 *)(puVar8 + 0xc);
            uVar7 = 4;
            uVar3 = *(undefined4 *)(puVar8 + 0xe);
            iVar5 = *(int *)(iVar13 + 0x2c) + *piVar10 * 0x40;
          }
          FUN_001339d0(&uStack_70,iVar5,uVar7,uVar2,uVar3);
          iVar11 = iVar11 + 1;
          puVar8 = puVar9;
        } while (iVar11 < *piVar12);
      }
      FUN_00133898(&uStack_70,0,0x17000000,0);
      iVar14 = iVar14 + 0x20;
      iStack_60 = iStack_60 + 1;
      iVar11 = *(int *)(iVar1 + 0x1c);
      puVar15 = puVar15 + 1;
    } while (iStack_60 < iVar11);
  }
  if ((iVar4 != 0) && (iStack_60 = 0, 0 < *(int *)(iVar4 + 0x1c))) {
    iVar13 = iStack_64 * 4;
    iVar14 = iVar4;
    while( true ) {
      iVar5 = 0;
      puStack_68[iVar11 + iStack_60] = uStack_70;
      puVar8 = (undefined2 *)(iVar4 + *(int *)(iVar14 + 0x30));
      piVar12 = (int *)(iVar4 + *(int *)(iVar14 + 0x34));
      FUN_001339d0(&uStack_70,iVar4 + *(int *)(puVar8 + 2),*puVar8,*(undefined4 *)(puVar8 + 4),
                   *(undefined4 *)(puVar8 + 6));
      if (0 < *piVar12) {
        iVar11 = iVar13 + iStack_6c;
        piVar10 = piVar12;
        do {
          piVar10 = piVar10 + 1;
          puVar9 = puVar8 + 8;
          if (*piVar10 < 0) {
            FUN_00133848(&uStack_70,0,0x17000000,0);
            puVar9 = puVar8 + 0x10;
            uVar7 = *puVar9;
            uVar2 = *(undefined4 *)(puVar8 + 0x14);
            iVar6 = iVar4 + *(int *)(puVar8 + 0x12);
            uVar3 = *(undefined4 *)(puVar8 + 0x16);
          }
          else {
            uVar2 = *(undefined4 *)(puVar8 + 0xc);
            uVar7 = 4;
            uVar3 = *(undefined4 *)(puVar8 + 0xe);
            iVar6 = *(int *)(iVar11 + 0x2c) + *piVar10 * 0x40;
          }
          FUN_001339d0(&uStack_70,iVar6,uVar7,uVar2,uVar3);
          iVar5 = iVar5 + 1;
          puVar8 = puVar9;
        } while (iVar5 < *piVar12);
      }
      FUN_00133898(&uStack_70,0,0x17000000,0);
      iStack_60 = iStack_60 + 1;
      iVar14 = iVar14 + 0x20;
      if (*(int *)(iVar4 + 0x1c) <= iStack_60) break;
      iVar11 = *(int *)(iVar1 + 0x1c);
    }
  }
  return uStack_70;
}

