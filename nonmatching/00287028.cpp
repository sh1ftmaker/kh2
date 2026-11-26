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

s32 FUN_001b7818(...) asm("func_001b7818");
s32 FUN_00258108(...) asm("func_00258108");
s32 FUN_002811b0(...) asm("func_002811b0");
s32 FUN_002859a0(...) asm("func_002859a0");
s32 FUN_00287028(...) asm("_ZN2Tz8CmNewFlg19isAbilityHistMemberEii");
extern u32 DAT_0035f2e4 asm("D_0035f2e4");

// Ghidra decompile of 0x00287028, wrapped mechanically (ad/fallback.py)

bool FUN_00287028_impl(int param_1,uint param_2) asm("_ZN2Tz8CmNewFlg19isAbilityHistMemberEii");
bool FUN_00287028_impl(int param_1,uint param_2) {
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  bVar10 = true;
  iVar1 = FUN_002859a0();
  uVar3 = FUN_00258108();
  if (param_1 < 1) {
    if ((int)param_2 < 0) {
      uVar9 = 0;
      uVar7 = 0;
      do {
        uVar6 = uVar9 & 0x1f;
        uVar9 = uVar9 + 1;
        uVar6 = 1 << uVar6;
        if (((*(uint *)(uVar7 * 4 + DAT_0035f2e4 + 0x50) & uVar6) != 0) &&
           (bVar10 = (*(uint *)(uVar7 * 4 + iVar1 + 0x50) & uVar6) != 0, !bVar10)) break;
        uVar7 = uVar9 >> 5;
      } while ((int)uVar9 < 0x50);
    }
    else {
      iVar5 = (param_2 >> 5) * 4;
      uVar7 = 1 << (param_2 & 0x1f);
      bVar10 = false;
      if ((*(uint *)(DAT_0035f2e4 + iVar5 + 0x50) & uVar7) != 0) {
        bVar10 = (*(uint *)(iVar1 + iVar5 + 0x50) & uVar7) != 0;
      }
    }
    if (param_1 == 0) {
      return bVar10;
    }
  }
  iVar5 = 1;
  do {
    if (((param_1 < 0) || (iVar5 == param_1)) && (lVar4 = FUN_002811b0(uVar3,iVar5), lVar4 != 0)) {
      iVar2 = FUN_001b7818(lVar4);
      uVar7 = 0;
      do {
        if (((int)param_2 < 0) || (uVar7 == param_2)) {
          uVar9 = (iVar2 + -2) * 0x30 + uVar7;
          iVar8 = (uVar9 >> 5) * 4;
          uVar9 = 1 << (uVar9 & 0x1f);
          if (((*(uint *)(iVar8 + DAT_0035f2e4 + 0x5c) & uVar9) != 0) &&
             (bVar10 = (*(uint *)(iVar8 + iVar1 + 0x5c) & uVar9) != 0, !bVar10)) {
            return bVar10;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x30);
      if (bVar10 == false) {
        return false;
      }
    }
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      return bVar10;
    }
  } while( true );
}

