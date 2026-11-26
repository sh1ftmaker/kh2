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

s32 FUN_00105c30(...) asm("func_00105c30");
s32 FUN_00167658(...) asm("func_00167658");
s32 FUN_001676b0(...) asm("func_001676b0");
s32 FUN_00167778(...) asm("func_00167778");
s32 FUN_001678f0(...) asm("_ZN2YS7HARDPAD4readERKN3Axa7PADDATAE");
s32 FUN_00167ad0(...) asm("func_00167ad0");
s32 FUN_00242a00(...) asm("func_00242a00");
s32 FUN_00242bd0(...) asm("func_00242bd0");
s32 FUN_002f5e78(...) asm("func_002f5e78");
s32 FUN_002f5f50(...) asm("func_002f5f50");
s32 FUN_002f6020(...) asm("func_002f6020");
extern u32 LAB_0016799c asm("D_0016799c");
extern u32 LAB_001679e0 asm("D_001679e0");
extern u32 LAB_00167a48 asm("D_00167a48");

// Ghidra decompile of 0x001678f0, wrapped mechanically (ad/fallback.py)

void FUN_001678f0_impl(undefined8 param_1) asm("_ZN2YS7HARDPAD4readERKN3Axa7PADDATAE");
void FUN_001678f0_impl(undefined8 param_1) {
  bool bVar1;
  long lVar2;
  ulong *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  byte bStack_130;
  byte bStack_12f;
  
  iVar8 = 0;
  uVar9 = 0;
  puVar3 = (ulong *)param_1;
  lVar2 = FUN_002f6020(*(undefined4 *)((int)puVar3 + 0x4c));
  *(uint *)(puVar3 + 10) = (uint)(lVar2 != 0);
  if (lVar2 != 1) goto LAB_00167a48;
  uVar4 = *(undefined4 *)((int)puVar3 + 0x4c);
  if ((int)puVar3[9] == 0) {
    lVar2 = FUN_002f5f50(uVar4,(int)puVar3 + 0x54);
    if (lVar2 < 0) goto LAB_00167a48;
    uVar4 = *(undefined4 *)((int)puVar3 + 0x4c);
  }
  lVar2 = FUN_002f5e78(uVar4,&bStack_130);
  if (lVar2 < 0) goto LAB_00167a48;
  uVar6 = ((ulong)bStack_130 | (long)(int)((uint)bStack_12f << 8)) ^ 0xffff;
  lVar2 = FUN_00105c30();
  if (lVar2 == 1) {
LAB_0016799c:
    bVar1 = true;
  }
  else {
    lVar2 = FUN_00105c30();
    bVar1 = false;
    if (lVar2 == 8) goto LAB_0016799c;
  }
  if (bVar1) {
    if ((uVar6 & 0x2000) != 0) {
      uVar6 = uVar6 | 0x1000000;
    }
    uVar7 = uVar6 & 0x4000;
    uVar9 = uVar6;
  }
  else if ((uVar6 & 0x4000) == 0) {
    uVar7 = uVar6 & 0x2000;
    uVar9 = uVar6;
  }
  else {
    uVar9 = uVar6 | 0x1000000;
    uVar7 = uVar6 & 0x2000;
  }
  if (uVar7 != 0) {
    uVar9 = uVar9 | 0x2000000;
  }
  lVar2 = FUN_00242bd0();
  if ((uVar9 & 0x100) == 0) {
    uVar6 = 0x4000000;
    if (lVar2 == 0) goto LAB_001679e0;
  }
  else {
    uVar6 = 0x4000000;
    if (lVar2 == 1) {
LAB_001679e0:
      uVar6 = 0x8000000;
    }
  }
  uVar9 = uVar9 | uVar6;
  if (((*(byte *)((int)puVar3 + 0x56) & 0xf) == 0xf) && ((int)puVar3[9] == 1)) {
    uVar6 = FUN_00167778(param_1,&bStack_130);
    uVar9 = uVar9 | uVar6;
  }
  lVar2 = FUN_00242a00();
  uVar5 = 0;
  if (lVar2 != 0) {
    uVar5 = (uint)(int)*(char *)((int)puVar3 + 0x44) >> 0x1f |
            (uint)*(byte *)((int)puVar3 + 0x45) << 1;
  }
  iVar8 = 1;
  FUN_00167ad0(param_1,uVar5);
LAB_00167a48:
  if (iVar8 == 1) {
    if ((int)puVar3[9] != 1) {
      *puVar3 = uVar9;
    }
    FUN_001676b0(param_1,uVar9);
    *(undefined4 *)(puVar3 + 9) = 1;
  }
  else {
    FUN_00167658(param_1,0);
    *(int *)(puVar3 + 9) = iVar8;
  }
  *(undefined1 *)((int)puVar3 + 0x44) = 0;
  *(undefined1 *)((int)puVar3 + 0x45) = 0;
  return;
}

