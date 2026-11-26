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

s32 FUN_00186d48(...) asm("_ZN2YS6BTLOBJ10add_damageEPNS_6DAMAGEE");
s32 FUN_0018caf8(...) asm("func_0018caf8");
s32 FUN_0018cef8(...) asm("func_0018cef8");

// Ghidra decompile of 0x00186d48, wrapped mechanically (ad/fallback.py)

void FUN_00186d48_impl(int *param_1,undefined8 param_2) asm("_ZN2YS6BTLOBJ10add_damageEPNS_6DAMAGEE");
void FUN_00186d48_impl(int *param_1,undefined8 param_2) {
  undefined1 uVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar5 = (int)param_2;
  if ((*(uint *)(iVar5 + 0x18) & 2) == 0) {
    *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | 2;
    if (param_1[0x123] != 0) {
      iVar9 = *(int *)(iVar5 + 0x28);
      if (*(byte *)(*(int *)(iVar5 + 0x20) + 4) - 5 < 2) {
        bVar6 = 0;
        if (*(int **)(*(int *)(iVar5 + 0x1c) + 0xc) != param_1) {
          bVar6 = *(byte *)(*(int *)(iVar5 + 0x20) + 0x12) >> 4 & 1;
        }
        uVar1 = *(undefined1 *)(iVar5 + 0x25);
        pcVar3 = *(code **)(*param_1 + 0x78);
      }
      else {
        piVar8 = (int *)(param_1[0x123] + (uint)*(byte *)(iVar5 + 0x25) * 0xc);
        bVar2 = iVar9 < 2;
        if (*piVar8 - iVar9 <= piVar8[2]) {
          lVar4 = (**(code **)(*param_1 + 0x58))();
          bVar2 = iVar9 < 2;
          if (lVar4 != 0) {
            iVar9 = (*piVar8 - piVar8[2]) + -1;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            bVar2 = iVar9 < 2;
          }
        }
        if (bVar2) {
          iVar7 = *param_1;
        }
        else if (((param_1[0x2af] | param_1[0x2b0]) & ~param_1[0x2b1] & 0x8000U) == 0) {
          iVar7 = *param_1;
        }
        else {
          lVar4 = FUN_0018caf8(param_2);
          if (lVar4 == 0) {
            iVar7 = *param_1;
          }
          else {
            lVar4 = FUN_0018cef8(param_2);
            if (lVar4 == 0) {
              iVar9 = 1;
            }
            iVar7 = *param_1;
          }
        }
        iVar9 = -iVar9;
        uVar1 = *(undefined1 *)(iVar5 + 0x25);
        pcVar3 = *(code **)(iVar7 + 0x78);
        bVar6 = 0;
      }
      (*pcVar3)(param_1,iVar9,uVar1,bVar6);
    }
  }
  return;
}

