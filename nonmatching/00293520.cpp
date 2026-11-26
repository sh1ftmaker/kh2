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

s32 FUN_00102a38(...) asm("func_00102a38");
s32 FUN_00103eb0(...) asm("func_00103eb0");
s32 FUN_001a8bd0(...) asm("func_001a8bd0");
s32 FUN_001a8c10(...) asm("func_001a8c10");
s32 FUN_00293350(...) asm("func_00293350");
s32 FUN_00293520(...) asm("_ZN2Tz9ChgWeapon6UpdateEv");
extern u32 DAT_0035f4e8 asm("D_0035f4e8");
extern u32 DAT_0035f4f0 asm("D_0035f4f0");

// Ghidra decompile of 0x00293520, wrapped mechanically (ad/fallback.py)

void FUN_00293520_impl(void) asm("_ZN2Tz9ChgWeapon6UpdateEv");
void FUN_00293520_impl(void) {
  undefined8 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  undefined2 *puVar9;
  
  if (DAT_0035f4f0 == '\0') {
    iVar3 = FUN_00103eb0();
    lVar5 = FUN_00102a38(*(undefined4 *)(iVar3 + 4),0x2933b8);
    if (lVar5 == 0) {
      uVar1 = FUN_001a8bd0(0xffffffffffffffff);
      sVar2 = FUN_001a8c10(uVar1,3);
      lVar5 = 0;
      iVar3 = -1;
      do {
        iVar6 = 0;
        iVar7 = 0;
        do {
          psVar8 = (short *)(iVar7 + DAT_0035f4e8);
          if (*psVar8 == sVar2) {
            *psVar8 = -1;
            *(undefined2 *)(iVar7 + DAT_0035f4e8 + 2) = 0xffff;
            *(undefined2 *)(iVar7 + DAT_0035f4e8 + 4) = 0xffff;
          }
          else if ((-1 < *psVar8) && (iVar4 = iVar6, psVar8[1] == lVar5)) break;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 6;
          iVar4 = iVar3;
        } while (iVar6 < 8);
        if (-1 < iVar4) {
          iVar4 = iVar4 * 6;
          puVar9 = (undefined2 *)(iVar4 + DAT_0035f4e8);
          FUN_00293350(*puVar9,puVar9[1],puVar9[2]);
          *(undefined2 *)(iVar4 + DAT_0035f4e8) = 0xffff;
          *(undefined2 *)(iVar4 + DAT_0035f4e8 + 2) = 0xffff;
          *(undefined2 *)(iVar4 + DAT_0035f4e8 + 4) = 0xffff;
          return;
        }
        lVar5 = (long)((int)lVar5 + 1);
        iVar3 = iVar4;
      } while (lVar5 < 2);
    }
  }
  return;
}

