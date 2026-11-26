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

s32 FUN_002384f8(...) asm("func_002384f8");
s32 FUN_0023aab8(...) asm("_ZN2YI8SEQUENCE4CalcEv");
extern u32 LAB_0023aca4 asm("D_0023aca4");

// Ghidra decompile of 0x0023aab8, wrapped mechanically (ad/fallback.py)

void FUN_0023aab8_impl(undefined8 param_1) asm("_ZN2YI8SEQUENCE4CalcEv");
void FUN_0023aab8_impl(undefined8 param_1) {
  uint uVar1;
  long lVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  float fVar8;
  
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0xbc) == '\0') {
    *(int *)(iVar3 + 0xc0) = *(int *)(iVar3 + 0x114);
    *(undefined1 *)(iVar3 + 0xbc) = 1;
    uVar5 = 0;
    puVar4 = (ushort *)(*(int *)(iVar3 + 0xb4) + *(int *)(iVar3 + 0x114) * 0x24);
    *(uint *)(iVar3 + 0xc4) = *(int *)(iVar3 + 0xb0) + (uint)*puVar4 * 0x90;
    *(uint *)(iVar3 + 200) = (uint)puVar4[1];
    uVar7 = (uint)puVar4[1];
    puVar6 = (uint *)(*(int *)(iVar3 + 0xb0) + (uint)*puVar4 * 0x90);
    if (uVar7 != 0) {
      uVar1 = *puVar6;
      while( true ) {
        if ((uVar1 & 4) != 0) {
          uVar5 = uVar5 | 1;
        }
        if (puVar6[0x21] != 0) {
          uVar5 = uVar5 | 2;
        }
        if ((uVar1 & 0x20) == 0) {
          uVar5 = uVar5 | 4;
        }
        if ((uVar1 & 0x40) == 0) {
          uVar5 = uVar5 | 8;
        }
        if ((uVar1 & 0x400) == 0) {
          uVar5 = uVar5 | 0x10;
        }
        lVar2 = FUN_002384f8(param_1,puVar6[1]);
        if (lVar2 != 0) {
          uVar5 = uVar5 | 0x20;
        }
        if ((*puVar6 & 0x1010) != 0x1010) {
          uVar5 = uVar5 | 0x40;
        }
        puVar6 = puVar6 + 0x24;
        if ((uVar5 == 0x7f) || (uVar7 = uVar7 - 1, (int)uVar7 < 1)) break;
        uVar1 = *puVar6;
      }
    }
    uVar7 = *(uint *)(iVar3 + 0xb8) & 0xfffff80f;
    *(uint *)(iVar3 + 0xb8) = uVar7;
    if (((uVar5 ^ 1) & 1) != 0) {
      *(uint *)(iVar3 + 0xb8) = uVar7 | 0x10;
    }
    if ((uVar5 & 2) == 0) {
      *(uint *)(iVar3 + 0xb8) = *(uint *)(iVar3 + 0xb8) | 0x20;
    }
    if ((uVar5 & 4) == 0) {
      *(uint *)(iVar3 + 0xb8) = *(uint *)(iVar3 + 0xb8) | 0x40;
    }
    if ((uVar5 & 8) == 0) {
      *(uint *)(iVar3 + 0xb8) = *(uint *)(iVar3 + 0xb8) | 0x80;
    }
    if ((uVar5 & 0x10) == 0) {
      *(uint *)(iVar3 + 0xb8) = *(uint *)(iVar3 + 0xb8) | 0x100;
    }
    if ((uVar5 & 0x20) == 0) {
      *(uint *)(iVar3 + 0xb8) = *(uint *)(iVar3 + 0xb8) | 0x200;
    }
    if ((uVar5 & 0x40) != 0) {
      fVar8 = *(float *)(iVar3 + 0x104);
      goto LAB_0023aca4;
    }
    *(uint *)(iVar3 + 0xb8) = *(uint *)(iVar3 + 0xb8) | 0x400;
  }
  fVar8 = *(float *)(iVar3 + 0x104);
LAB_0023aca4:
  *(float *)(iVar3 + 0xcc) = (float)(int)fVar8;
  return;
}

