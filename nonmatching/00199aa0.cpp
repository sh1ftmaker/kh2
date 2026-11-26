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

s32 FUN_00198c28(...) asm("func_00198c28");
s32 FUN_00198e70(...) asm("func_00198e70");
s32 FUN_00198ea8(...) asm("func_00198ea8");
s32 FUN_00199aa0(...) asm("func_00199aa0");
extern u32 LAB_00199b5c asm("D_00199b5c");

// Ghidra decompile of 0x00199aa0, wrapped mechanically (ad/fallback.py)

void FUN_00199aa0_impl(undefined4 *param_1,undefined4 param_2,char *param_3) asm("func_00199aa0");
void FUN_00199aa0_impl(undefined4 *param_1,undefined4 param_2,char *param_3) {
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  
  param_1[2] = param_3;
  iVar9 = param_1[2];
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[9] = iVar9 + 0x2c;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  iVar6 = iVar9 + 0x2c + (uint)*(ushort *)(iVar9 + 4) * 0x40;
  param_1[10] = iVar6;
  iVar6 = iVar6 + (uint)*(ushort *)(iVar9 + 6) * 0x40;
  param_1[0xb] = iVar6;
  uVar8 = (uint)*(ushort *)(iVar9 + 8);
  if (uVar8 == 0) {
    param_1[0xc] = iVar6;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      iVar6 = iVar6 + (uint)*(ushort *)(iVar6 + 2) * 0xc + 8;
    } while (uVar8 != 0);
    param_1[0xc] = iVar6;
  }
  param_1[0xd] = iVar6 + (uint)*(ushort *)(iVar9 + 10) * 0x10;
  if (*param_3 == '\x02') {
    param_1[5] = (float)*(ushort *)(iVar9 + 0x1c);
  }
  else {
    if (*param_3 != '\x05') {
      bVar1 = param_3[1];
      goto LAB_00199b5c;
    }
    param_1[1] = param_1[1] | 1;
  }
  bVar1 = param_3[1];
LAB_00199b5c:
  if ((bVar1 & 1) != 0) {
    param_1[1] = param_1[1] | 1;
  }
  iVar9 = 0;
  if (*(short *)(param_1[2] + 0xc) != 0) {
    iVar6 = param_1[0xd];
    while( true ) {
      uVar5 = 0xffffffffffffffff;
      psVar7 = (short *)(iVar9 * 8 + iVar6);
      sVar3 = *psVar7;
      if (sVar3 != 0x4a) {
        uVar5 = (ulong)(ushort)psVar7[1];
      }
      uVar4 = FUN_00198c28(sVar3,uVar5);
      cVar2 = *(char *)(iVar9 * 8 + param_1[0xd] + 4);
      if (cVar2 == '\0') {
        FUN_00198e70(uVar4,*(undefined2 *)(param_1[2] + 2));
        iVar6 = param_1[2];
      }
      else if (cVar2 == '\x01') {
        FUN_00198ea8(uVar4,*(undefined2 *)(param_1[2] + 2));
        iVar6 = param_1[2];
      }
      else {
        iVar6 = param_1[2];
      }
      iVar9 = iVar9 + 1;
      if ((int)(uint)*(ushort *)(iVar6 + 0xc) <= iVar9) break;
      iVar6 = param_1[0xd];
    }
  }
  return;
}

