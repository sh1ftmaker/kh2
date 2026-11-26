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

s32 FUN_001386e0(...) asm("func_001386e0");
s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_00224860(...) asm("func_00224860");
s32 FUN_002291d0(...) asm("_ZN2sa14MUSICAL_SCORE16updateEv");
s32 FUN_0022b720(...) asm("func_0022b720");
s32 FUN_0022b9e0(...) asm("func_0022b9e0");
extern u32 DAT_0035e130 asm("D_0035e130");
extern u32 DAT_0035e148 asm("D_0035e148");
extern u32 LAB_00229294 asm("D_00229294");

// Ghidra decompile of 0x002291d0, wrapped mechanically (ad/fallback.py)

void FUN_002291d0_impl(int *param_1) asm("_ZN2sa14MUSICAL_SCORE16updateEv");
void FUN_002291d0_impl(int *param_1) {
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  (**(code **)(*param_1 + 0x1c))();
  iVar2 = FUN_00224860();
  if (param_1[0x26a] != iVar2) {
    uVar3 = FUN_0022b9e0();
    uVar4 = FUN_0022b720();
    if (1 < -iVar2 + 6) {
      iVar8 = -iVar2 + 5;
      piVar6 = param_1 + 0x6c;
      iVar7 = 0;
      do {
        lVar5 = FUN_00139d78(piVar6);
        if (lVar5 == 0) {
          FUN_001386e0(piVar6,0xaf0,uVar3,uVar4,*(undefined4 *)(iVar7 + 0x35e118));
LAB_00229294:
          piVar6[0x62] = *(int *)(&DAT_0035e130 + iVar7);
        }
        else if (piVar6[0x61] == *(int *)(&DAT_0035e148 + iVar7)) {
          FUN_00138c10(piVar6,*(undefined4 *)(iVar7 + 0x35e118),uVar3,uVar4,
                       (undefined4 *)(iVar7 + 0x35e118),0xb);
          goto LAB_00229294;
        }
        iVar7 = iVar7 + 4;
        iVar8 = iVar8 + -1;
        piVar6 = piVar6 + 0x66;
      } while (iVar8 != 0);
    }
    iVar7 = param_1[0x26a];
    if (iVar7 < iVar2) {
      puVar9 = (undefined4 *)(iVar7 * -4 + 0x35e158);
      piVar6 = param_1 + iVar7 * -0x66 + 0x204;
      do {
        bVar1 = 4 < iVar7;
        iVar7 = iVar7 + 1;
        if (bVar1) break;
        FUN_00138c10(piVar6,*puVar9);
        puVar9 = puVar9 + -1;
        piVar6 = piVar6 + -0x66;
      } while (iVar7 < iVar2);
    }
  }
  param_1[0x26a] = iVar2;
  return;
}

