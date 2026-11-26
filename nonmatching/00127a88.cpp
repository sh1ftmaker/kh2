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

s32 FUN_00124828(...) asm("func_00124828");
s32 FUN_00124c48(...) asm("func_00124c48");
s32 FUN_00127a88(...) asm("_Z13func_00127a88Pv");
s32 FUN_002fdd68(...) asm("func_002fdd68");

// Ghidra decompile of 0x00127a88, wrapped mechanically (ad/fallback.py)

undefined8 FUN_00127a88_impl(undefined8 param_1,undefined8 param_2) asm("_Z13func_00127a88Pv");
undefined8 FUN_00127a88_impl(undefined8 param_1,undefined8 param_2) {
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  undefined8 uVar28;
  
  iVar26 = (int)param_1;
  uVar28 = 0x127ab8;
  iVar2 = (**(code **)(**(int **)(iVar26 + 0x14) + 0x1c))();
  uVar28 = (**(code **)*(undefined4 *)param_2)(param_2,iVar2 * 0x50 + 0x20,uVar28);
  FUN_00124828(uVar28);
  piVar27 = (int *)uVar28;
  piVar27[3] = 0;
  *piVar27 = (int)(piVar27 + 8);
  piVar27[4] = 0;
  piVar27[1] = (int)(piVar27 + 8 + iVar2 * 4);
  iVar5 = 0;
  piVar27[5] = *(int *)(iVar26 + 0x14);
  if (0 < iVar2) {
    iVar23 = *piVar27;
    while( true ) {
      iVar21 = iVar5 * 0x10;
      puVar22 = (undefined4 *)(iVar23 + iVar21);
      puVar24 = (undefined4 *)(*(int *)(iVar26 + 0x1c) + iVar21);
      if (puVar22 == puVar24) {
        iVar25 = *(int *)(iVar26 + 0x20);
      }
      else {
        uVar6 = puVar24[1];
        uVar7 = puVar24[2];
        uVar8 = puVar24[3];
        *puVar22 = *puVar24;
        puVar22[1] = uVar6;
        puVar22[2] = uVar7;
        puVar22[3] = uVar8;
        iVar23 = *piVar27;
        iVar25 = *(int *)(iVar26 + 0x20);
      }
      *(undefined4 *)(iVar23 + iVar21 + 0xc) = *(undefined4 *)(iVar25 + iVar21);
      puVar24 = (undefined4 *)(piVar27[1] + iVar5 * 0x40);
      puVar22 = (undefined4 *)(*(int *)(iVar26 + 0x28) + iVar5 * 0x40);
      if (puVar24 != puVar22) {
        uVar6 = puVar22[1];
        uVar7 = puVar22[2];
        uVar8 = puVar22[3];
        uVar9 = puVar22[4];
        uVar10 = puVar22[5];
        uVar11 = puVar22[6];
        uVar12 = puVar22[7];
        uVar13 = puVar22[8];
        uVar14 = puVar22[9];
        uVar15 = puVar22[10];
        uVar16 = puVar22[0xb];
        uVar17 = puVar22[0xc];
        uVar18 = puVar22[0xd];
        uVar19 = puVar22[0xe];
        uVar20 = puVar22[0xf];
        *puVar24 = *puVar22;
        puVar24[1] = uVar6;
        puVar24[2] = uVar7;
        puVar24[3] = uVar8;
        puVar24[4] = uVar9;
        puVar24[5] = uVar10;
        puVar24[6] = uVar11;
        puVar24[7] = uVar12;
        puVar24[8] = uVar13;
        puVar24[9] = uVar14;
        puVar24[10] = uVar15;
        puVar24[0xb] = uVar16;
        puVar24[0xc] = uVar17;
        puVar24[0xd] = uVar18;
        puVar24[0xe] = uVar19;
        puVar24[0xf] = uVar20;
      }
      iVar5 = iVar5 + 1;
      if (iVar2 <= iVar5) break;
      iVar23 = *piVar27;
    }
  }
  if ((*(uint *)(iVar26 + 0xc) & 1) != 0) {
    *(undefined1 *)((int)piVar27 + 0x19) = 1;
  }
  piVar1 = *(int **)(iVar26 + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_1,param_2);
    piVar27[3] = iVar2;
    if (*(int *)(*(int *)(*(int *)(iVar26 + 0x18) + 4) + 4) == 1) {
      *(undefined1 *)(piVar27 + 6) = 1;
    }
    else {
      *(undefined1 *)(piVar27 + 6) = 0;
    }
    lVar3 = FUN_00124c48(*(undefined4 *)(iVar26 + 0x18),0);
    if (lVar3 != 0) {
      iVar26 = *(int *)((int)lVar3 + 8) * 4;
      uVar4 = (**(code **)*(undefined4 *)param_2)(param_2,iVar26 + 4,0);
      piVar27[4] = (int)uVar4;
      FUN_002fdd68(uVar4,(int)lVar3 + 0x10,iVar26);
      iVar2 = piVar27[4];
      *(undefined2 *)(iVar26 + iVar2) = 0xffff;
      ((undefined2 *)(iVar26 + iVar2))[1] = 0xffff;
    }
  }
  return uVar28;
}

