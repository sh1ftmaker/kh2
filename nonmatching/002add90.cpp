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
s32 FUN_002a7490(...) asm("func_002a7490");
s32 FUN_002a74c0(...) asm("func_002a74c0");
s32 FUN_002add90(...) asm("_ZN2Tz10JmComplete14CheckSynthesisEv");
extern u32 DAT_0035f620 asm("D_0035f620");
extern u32 DAT_0035f628 asm("D_0035f628");
extern u32 DAT_0035f62c asm("D_0035f62c");
extern u32 LAB_002ade1c asm("D_002ade1c");
extern u32 LAB_002ade80 asm("D_002ade80");

// Ghidra decompile of 0x002add90, wrapped mechanically (ad/fallback.py)

void FUN_002add90_impl(void) asm("_ZN2Tz10JmComplete14CheckSynthesisEv");
void FUN_002add90_impl(void) {
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar3 = FUN_001058e8();
  uVar1 = FUN_002a7490();
  uVar2 = FUN_002a74c0();
  uVar4 = 0;
  DAT_0035f628 = DAT_0035f628 + 4;
  do {
    uVar10 = uVar1;
    if ((uVar4 != 0) && (uVar10 = uVar2, uVar4 == 3)) {
      uVar10 = uVar1;
    }
    if (uVar10 != 0) {
      if (uVar4 == 1) {
        iVar5 = 0;
        uVar6 = 0;
        do {
          uVar9 = uVar6 >> 5;
          uVar8 = uVar6 & 0x1f;
          uVar6 = uVar6 + 1;
          if ((*(uint *)(uVar9 * 4 + iVar3 + 0x49f4) & 1 << uVar8) != 0) {
            iVar5 = iVar5 + 1;
          }
        } while ((int)uVar6 < 0x3c);
        uVar10 = (ulong)(iVar5 < 0x3c);
LAB_002ade80:
        uVar10 = uVar10 ^ 1;
      }
      else {
        if (1 < (int)uVar4) {
          iVar5 = 0;
          if (uVar4 == 2) {
            uVar6 = 0;
            do {
              uVar9 = uVar6 >> 5;
              uVar8 = uVar6 & 0x1f;
              uVar6 = uVar6 + 1;
              if ((*(uint *)(uVar9 * 4 + iVar3 + 0x49fc) & 1 << uVar8) != 0) {
                iVar5 = iVar5 + 1;
              }
            } while ((int)uVar6 < 0x36);
            uVar10 = (ulong)(iVar5 < 0x36);
          }
          else {
            uVar6 = 0;
            if (uVar4 != 3) goto LAB_002ade1c;
            do {
              uVar9 = uVar6 >> 5;
              uVar8 = uVar6 & 0x1f;
              uVar6 = uVar6 + 1;
              if ((*(uint *)(uVar9 * 4 + iVar3 + 0x4a10) & 1 << uVar8) != 0) {
                iVar5 = iVar5 + 1;
              }
            } while ((int)uVar6 < 0x50);
            uVar10 = (ulong)(iVar5 < 0x3b);
          }
          goto LAB_002ade80;
        }
        if (uVar4 == 0) {
          uVar10 = (ulong)(*(byte *)(iVar3 + 0x4c34) + 1 < 9);
          goto LAB_002ade80;
        }
      }
LAB_002ade1c:
      if (uVar10 != 0) {
        puVar7 = (uint *)(DAT_0035f620 + 0x140 + (uVar4 >> 5) * 4);
        *puVar7 = *puVar7 | 1 << (uVar4 & 0x1f);
        DAT_0035f62c = DAT_0035f62c + 1;
      }
    }
    uVar4 = uVar4 + 1;
    if (3 < (int)uVar4) {
      return;
    }
  } while( true );
}

