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

s32 FUN_001e0e50(...) asm("func_001e0e50");
s32 FUN_001e0f90(...) asm("func_001e0f90");
s32 FUN_001e0fd0(...) asm("func_001e0fd0");
s32 FUN_001e1e40(...) asm("func_001e1e40");
s32 FUN_002bc1e8(...) asm("func_002bc1e8");
s32 FUN_00312db8(...) asm("func_00312db8");
extern u32 DAT_00349e10 asm("D_00349e10");
extern u32 DAT_003638d0 asm("D_003638d0");
extern u32 DAT_0036e930 asm("D_0036e930");
extern u32 DAT_0036e934 asm("D_0036e934");
extern u32 DAT_0036e938 asm("D_0036e938");
extern u32 DAT_0036e93c asm("D_0036e93c");
extern u32 DAT_0036e940 asm("D_0036e940");
extern u32 DAT_0036e944 asm("D_0036e944");
extern u32 DAT_0036e948 asm("D_0036e948");
extern u32 DAT_0036e94c asm("D_0036e94c");
extern u32 LAB_001e1f28 asm("D_001e1f28");
extern u32 LAB_001e204c asm("D_001e204c");

// Ghidra decompile of 0x001e1e40, wrapped mechanically (ad/fallback.py)

void FUN_001e1e40_impl(int param_1) asm("func_001e1e40");
void FUN_001e1e40_impl(int param_1) {
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0xe00) < 0) {
    uVar2 = FUN_002bc1e8(0x5b518);
    *(undefined4 *)(param_1 + 0xe00) = uVar2;
  }
  fVar8 = *(float *)(param_1 + 0xdf4);
  if (fVar8 <= *(float *)(param_1 + 0xde4)) {
    do {
      uVar6 = (ulong)*(int *)(param_1 + 0xdcc);
      lVar7 = 0;
      if (0 < (long)uVar6) {
        do {
          iVar3 = DAT_003638d0 * 0x10dcd;
          DAT_003638d0 = iVar3;
          uVar4 = FUN_00312db8((ulong)((int)uVar6 - 1) + 0x100000000,uVar6 & 0xffffffff);
          iVar3 = FUN_00312db8(iVar3,uVar4);
          if (*(int *)(iVar3 * 0x30 + *(int *)(param_1 + 0xdc8) + 0x24) == 2) {
            FUN_001e0e50();
            fVar8 = *(float *)(param_1 + 0xdf4);
            goto LAB_001e1f28;
          }
          uVar6 = (ulong)*(int *)(param_1 + 0xdcc);
          lVar7 = (long)((int)lVar7 + 1);
        } while (lVar7 < (long)uVar6);
        fVar8 = *(float *)(param_1 + 0xdf4);
      }
LAB_001e1f28:
      fVar10 = *(float *)(param_1 + 0xde4) - fVar8;
      *(float *)(param_1 + 0xde4) = fVar10;
    } while (fVar8 <= fVar10);
  }
  bVar1 = DAT_0036e934 <= *(float *)(param_1 + 0xde8);
  fVar8 = fVar8 + DAT_00349e10 * DAT_0036e930;
  *(float *)(param_1 + 0xdf4) = fVar8;
  fVar10 = DAT_0036e938;
  if (bVar1) {
    fVar10 = DAT_0036e93c;
  }
  if (fVar8 <= fVar10) {
    fVar8 = fVar10;
  }
  *(float *)(param_1 + 0xdf4) = fVar8;
  if (DAT_0036e940 < *(float *)(param_1 + 0xde8)) {
    fVar10 = *(float *)(param_1 + 0xdf8);
    fVar8 = *(float *)(param_1 + 0xdfc);
    if (fVar10 <= fVar8) {
      do {
        uVar6 = (ulong)*(int *)(param_1 + 0xdcc);
        lVar7 = 0;
        if (0 < (long)uVar6) {
          do {
            iVar3 = DAT_003638d0 * 0x10dcd;
            DAT_003638d0 = iVar3;
            uVar4 = FUN_00312db8((ulong)((int)uVar6 - 1) + 0x100000000,uVar6 & 0xffffffff);
            iVar3 = FUN_00312db8(iVar3,uVar4);
            lVar5 = FUN_001e0fd0(*(int *)(param_1 + 0xdc8) + iVar3 * 0x30);
            if (lVar5 != 0) {
              FUN_001e0f90(*(int *)(param_1 + 0xdc8) + iVar3 * 0x30);
              fVar10 = *(float *)(param_1 + 0xdf8);
              goto LAB_001e204c;
            }
            uVar6 = (ulong)*(int *)(param_1 + 0xdcc);
            lVar7 = (long)((int)lVar7 + 1);
          } while (lVar7 < (long)uVar6);
          fVar10 = *(float *)(param_1 + 0xdf8);
        }
LAB_001e204c:
        fVar8 = *(float *)(param_1 + 0xdfc) - fVar10;
        *(float *)(param_1 + 0xdfc) = fVar8;
      } while (fVar10 <= fVar8);
    }
    fVar9 = DAT_0036e944;
    *(float *)(param_1 + 0xdfc) = fVar8 + DAT_00349e10;
    fVar10 = fVar10 + DAT_00349e10 * DAT_0036e948;
    *(float *)(param_1 + 0xdf8) = fVar10;
    if ((fVar9 <= fVar10) && (fVar9 = DAT_0036e94c, fVar10 <= DAT_0036e94c)) {
      fVar9 = fVar10;
    }
    *(float *)(param_1 + 0xdf8) = fVar9;
  }
  return;
}

