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

s32 FUN_00138cd0(...) asm("func_00138cd0");
s32 FUN_00138de0(...) asm("_ZN2dk13SpriteMessage11drawMessageEv");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_001a98e8(...) asm("func_001a98e8");
s32 FUN_001a9ae8(...) asm("func_001a9ae8");
s32 FUN_001aa6d0(...) asm("func_001aa6d0");
s32 FUN_00239d10(...) asm("func_00239d10");
s32 FUN_0023a918(...) asm("func_0023a918");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023aa78(...) asm("func_0023aa78");
_GHIDRA_ANY(block)

// Ghidra decompile of 0x00138de0, wrapped mechanically (ad/fallback.py)

/* WARNING: Removing unreachable block (ram,0x00139048) */
/* WARNING: Removing unreachable block (ram,0x00139080) */
/* WARNING: Removing unreachable block (ram,0x00139064) */
/* WARNING: Removing unreachable block (ram,0x0013902c) */

uint FUN_00138de0_impl(undefined8 param_1) asm("_ZN2dk13SpriteMessage11drawMessageEv");
uint FUN_00138de0_impl(undefined8 param_1) {
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_a0 [96];
  int iStack_40;
  int aiStack_3c [3];
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x18c) == 0) {
    iVar1 = *(int *)(iVar5 + 400);
  }
  else {
    lVar3 = FUN_00139d78();
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar5 + 400);
  }
  if ((iVar1 == 0) || (lVar3 = FUN_00239d10(), lVar3 != 0)) {
    iStack_40 = 0;
    aiStack_3c[0] = 0;
    FUN_00138cd0(param_1,&iStack_40,aiStack_3c);
    uVar2 = *(uint *)(iVar5 + 0xc);
    if ((uVar2 & 0x10) != 0) {
      iVar1 = FUN_0023aa18(iVar5 + 0x18);
      iStack_40 = iStack_40 + iVar1;
      iVar1 = FUN_0023aa38(iVar5 + 0x18);
      uVar2 = *(uint *)(iVar5 + 0xc);
      aiStack_3c[0] = aiStack_3c[0] + iVar1;
    }
    uVar7 = *(uint *)(iVar5 + 0x1a4);
    if ((uVar2 & 4) != 0) {
      uVar2 = FUN_0023a918(iVar5 + 0x18);
      if ((*(uint *)(iVar5 + 0xc) & 8) != 0) {
        uVar2 = uVar7 & 0xffffff | uVar2 & 0xff000000;
      }
      iVar1 = (int)((float)(uVar2 >> 0x18) * *(float *)(iVar5 + 0x13c));
      if (0xfe < iVar1) {
        iVar1 = 0xff;
      }
      uVar7 = (uint)((float)(uVar2 & 0xff) * *(float *)(iVar5 + 0x130));
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      iVar8 = (int)((float)((uVar2 & 0xff00) >> 8) * *(float *)(iVar5 + 0x134));
      if (0xfe < iVar8) {
        iVar8 = 0xff;
      }
      iVar9 = (int)((float)((uVar2 & 0xff0000) >> 0x10) * *(float *)(iVar5 + 0x138));
      if (0xfe < iVar9) {
        iVar9 = 0xff;
      }
      uVar7 = iVar1 << 0x18 | uVar7 | iVar8 << 8 | iVar9 << 0x10;
    }
    if (*(int *)(iVar5 + 0x198) != 0) {
      iVar6 = iStack_40 + *(int *)(iVar5 + 0x170);
      iVar1 = *(int *)(iVar5 + 0x19c);
      iVar8 = *(int *)(iVar5 + 0x1a0);
      iVar9 = aiStack_3c[0] + *(int *)(iVar5 + 0x174);
      FUN_001a98e8(auStack_a0,*(undefined4 *)(iVar5 + 0x1ac),*(int *)(iVar5 + 0x198),
                   *(undefined4 *)(iVar5 + 0x1a8),*(undefined4 *)(iVar5 + 0x1b0));
      uVar4 = FUN_0023aa78(iVar5 + 0x18);
      FUN_001aa6d0(auStack_a0,uVar4);
      FUN_001a9ae8(auStack_a0,iVar6 + iVar1,iVar9 + iVar8,uVar7);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

