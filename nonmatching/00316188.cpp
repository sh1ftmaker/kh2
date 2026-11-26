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

s32 FUN_003160e0(...) asm("func_003160e0");
s32 FUN_00316188(...) asm("func_00316188");

// Ghidra decompile of 0x00316188, wrapped mechanically (ad/fallback.py)

bool FUN_00316188_impl(int param_1,undefined8 param_2,int *param_3,int *param_4) asm("func_00316188");
bool FUN_00316188_impl(int param_1,undefined8 param_2,int *param_3,int *param_4) {
  uint uVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  uint uStack_60;
  
  lVar4 = FUN_003160e0();
  bVar5 = true;
  if (lVar4 == 0) {
    uVar1 = param_4[2];
    if ((uVar1 & 0x10) != 0) {
      uVar1 = *(uint *)(param_1 + 8);
    }
    iVar9 = *(int *)(param_1 + 0xc) + -1;
    if (iVar9 != -1) {
      iVar10 = iVar9 * 0x10 + param_1;
      uStack_60 = (uVar1 ^ 1) & 1;
      do {
        uVar7 = *(ulong *)(iVar10 + 0x18) & 1;
        iStack_70 = 0;
        uStack_6c = 0;
        iStack_64 = 0;
        uVar8 = (long)(*(ulong *)(iVar10 + 0x18) << 0x1f) >> 0x20 & 1;
        iVar6 = *(int *)(iVar10 + 0x18) >> 8;
        if ((uVar8 != 0) || (uStack_60 == 0)) {
          if (param_3 == (int *)0x0) {
            piVar2 = *(int **)(iVar10 + 0x10);
            iVar6 = 0;
          }
          else {
            if (uVar7 != 0) {
              iVar6 = *(int *)(*param_3 + iVar6);
            }
            iVar6 = (int)param_3 + iVar6;
            piVar2 = *(int **)(iVar10 + 0x10);
          }
          uStack_68 = uVar1;
          lVar4 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2,iVar6,&iStack_70);
          if (lVar4 != 0) {
            if ((iStack_64 == 8) && (uVar7 != 0)) {
              iStack_64 = *(int *)(iVar10 + 0x10);
            }
            if ((int)uStack_6c < 4) {
              iVar6 = param_4[3];
            }
            else if (uVar8 == 0) {
              uStack_6c = uStack_6c & 0xfffffffd;
              iVar6 = param_4[3];
            }
            else {
              iVar6 = param_4[3];
            }
            if (iVar6 == 0) {
              *param_4 = iStack_70;
              param_4[2] = uStack_68;
              param_4[3] = iStack_64;
              param_4[1] = uStack_6c;
              if ((int)uStack_6c < 4) {
                return true;
              }
              if ((uStack_6c & 2) == 0) {
                if ((uStack_6c & 1) == 0) {
                  return true;
                }
                if ((*(uint *)(param_1 + 8) & 2) == 0) {
                  return true;
                }
              }
              else if (((*(byte *)(param_1 + 8) ^ 1) & 1) != 0) {
                return true;
              }
            }
            else {
              if (*param_4 != iStack_70) {
                *param_4 = 0;
                param_4[1] = 2;
                return true;
              }
              if (*param_4 == 0) {
                if (((iStack_64 == 8) || (iVar6 == 8)) ||
                   (*(int *)(iStack_64 + 4) != *(int *)(iVar6 + 4))) {
                  param_4[1] = 2;
                  return true;
                }
                uVar3 = param_4[1];
              }
              else {
                uVar3 = param_4[1];
              }
              param_4[1] = uVar3 | uStack_6c;
            }
          }
        }
        iVar9 = iVar9 + -1;
        iVar10 = iVar10 + -0x10;
      } while (iVar9 != -1);
    }
    bVar5 = param_4[1] != 0;
  }
  return bVar5;
}

