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

s32 FUN_001e9d48(...) asm("func_001e9d48");
s32 FUN_001e9e48(...) asm("func_001e9e48");
extern u32 DAT_01d9e6e0 asm("D_01d9e6e0");
extern u32 DAT_01d9e6e4 asm("D_01d9e6e4");
extern u32 DAT_01d9e6e8 asm("D_01d9e6e8");
extern u32 DAT_01d9ea9c asm("D_01d9ea9c");
extern u32 DAT_01d9eab4 asm("D_01d9eab4");
extern u32 LAB_001e9f38 asm("D_001e9f38");
extern u32 LAB_001e9f48 asm("D_001e9f48");
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vitof0)
_GHIDRA_ANY(_vrnext)
_GHIDRA_ANY(_vrxor)

// Ghidra decompile of 0x001e9e48, wrapped mechanically (ad/fallback.py)

void FUN_001e9e48_impl(undefined8 param_1,undefined8 param_2,int param_3) asm("func_001e9e48");
void FUN_001e9e48_impl(undefined8 param_1,undefined8 param_2,int param_3) {
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  short *psVar11;
  Q16 auVar12;
  Q16 auVar13;
  undefined4 uVar14;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  
  iVar7 = (int)param_1 + **(int **)(param_3 + 0xc);
  puVar10 = (ushort *)(iVar7 + 0xa0);
  if (DAT_01d9ea9c != 0) {
    return;
  }
  if ((*(ulong *)(DAT_01d9e6e0 + 0xa8) & 0xff0000ff00) != 0) {
    return;
  }
  if (DAT_01d9eab4 != 0) {
    return;
  }
  iVar4 = (int)param_2;
  if (*(short *)(iVar4 + 4) < 0) {
    return;
  }
  uVar3 = *(ushort *)(iVar7 + 0xa2);
  if (uVar3 != 0) goto LAB_001e9f48;
  iVar2 = *(int *)(DAT_01d9e6e8 + 0x90);
  psVar11 = (short *)(*(int *)(DAT_01d9e6e4 + 0x18) + *(short *)(iVar4 + 4) * 8);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*psVar11 * 0x24 + *(int *)(DAT_01d9e6e4 + 0x10) + 0x14);
  }
  uVar8 = (uint)*(byte *)(iVar4 + 6);
  if (*(char *)(iVar4 + 8) == '\0') {
    iVar9 = uVar8 - 1;
    if (iVar9 == -1) goto LAB_001e9f38;
    uVar3 = *puVar10;
    while( true ) {
      uVar8 = (uint)uVar3;
      uVar6 = uVar3 + 1;
      if ((long)psVar11[1] <= (long)(ulong)uVar3) {
        *puVar10 = 0;
        uVar8 = 0;
        uVar6 = 1;
      }
      iVar9 = iVar9 + -1;
      *puVar10 = uVar6;
      puVar5 = (undefined4 *)((uint)*(ushort *)(uVar8 * 2 + *(int *)(psVar11 + 2)) * 6 + iVar2);
      uStack_60 = *puVar5;
      uStack_5c = *(undefined2 *)(puVar5 + 1);
      FUN_001e9d48(param_1,param_2,&uStack_60);
      if (iVar9 == -1) break;
      uVar3 = *puVar10;
    }
    bVar1 = *(byte *)(iVar4 + 7);
  }
  else {
    if (*(char *)(iVar4 + 8) == '\x01') {
      while (uVar8 = uVar8 - 1, uVar8 != 0xffffffff) {
        auVar13 = _qmtc2(0xffffffff);
        uVar14 = _vrxor(auVar13);
        _vrnext(uVar14);
        uVar14 = _vrxor(auVar13);
        _vrnext(uVar14);
        uVar14 = _vrxor(auVar13);
        _vrnext(uVar14);
        uVar14 = _vrxor(auVar13);
        _vrnext(uVar14);
        uVar14 = _vrxor(auVar13);
        auVar12 = _vrnext(uVar14);
        auVar13 = _vitof0(auVar13);
        auVar12 = _vadd(auVar12,auVar13);
        auVar12 = _qmfc2((*(u32*)((u8*)&auVar12 + 0)));
        puVar5 = (undefined4 *)
                 ((uint)*(ushort *)
                         ((int)((*(u32*)((u8*)&auVar12 + 0)) * (float)(int)psVar11[1]) * 2 + *(int *)(psVar11 + 2))
                  * 6 + iVar2);
        uStack_60 = *puVar5;
        uStack_5c = *(undefined2 *)(puVar5 + 1);
        FUN_001e9d48(param_1,param_2,&uStack_60);
      }
    }
LAB_001e9f38:
    bVar1 = *(byte *)(iVar4 + 7);
  }
  *(ushort *)(iVar7 + 0xa2) = (ushort)bVar1;
  uVar3 = (ushort)bVar1;
LAB_001e9f48:
  *(ushort *)(iVar7 + 0xa2) = uVar3 - 1;
  return;
}

