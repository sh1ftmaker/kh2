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

s32 FUN_002fd428(...) asm("func_002fd428");
s32 FUN_002fea70(...) asm("func_002fea70");
s32 FUN_00302e90(...) asm("func_00302e90");
extern AnyCell DAT_00365c50 asm("D_00365c50");
extern AnyCell DAT_00366060 asm("D_00366060");
extern AnyCell DAT_00366068 asm("D_00366068");
extern AnyCell DAT_00366070 asm("D_00366070");
extern AnyCell DAT_00366078 asm("D_00366078");
extern AnyCell DAT_00366080 asm("D_00366080");
extern undefined *PTR_DAT_00365c58 asm("D_00365c58");

// Ghidra decompile of 0x002fd428, wrapped mechanically (ad/fallback.py)

void FUN_002fd428_impl(undefined8 param_1,int param_2) asm("func_002fd428");
void FUN_002fd428_impl(undefined8 param_1,int param_2) {
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_00365c58;
  param_2 = param_2 + (int)DAT_00366060;
  uVar8 = *(uint *)(PTR_DAT_00365c58 + 4) & 0xfffffffc;
  uVar7 = param_2 + 0x10;
  puVar5 = PTR_DAT_00365c58 + uVar8;
  if (DAT_00366068 != (undefined *)0xffffffff) {
    uVar7 = param_2 + 0x100fU & 0xfffff000;
  }
  puVar3 = (undefined *)FUN_002fea70(param_1,uVar7);
  if ((puVar3 != (undefined *)0xffffffff) && ((puVar5 <= puVar3 || (puVar1 == &DAT_00365c50)))) {
    DAT_00366080 = DAT_00366080 + uVar7;
    if ((puVar3 == puVar5) && (((uint)puVar3 & 0xfff) == 0)) {
      *(uint *)(PTR_DAT_00365c58 + 4) = uVar7 + uVar8 | 1;
    }
    else {
      puVar2 = puVar3;
      if (DAT_00366068 != (undefined *)0xffffffff) {
        DAT_00366080 = puVar3 + ((int)DAT_00366080 - (int)puVar5);
        puVar2 = DAT_00366068;
      }
      DAT_00366068 = puVar2;
      if (((uint)(puVar3 + 8) & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x10 - ((uint)(puVar3 + 8) & 0xf);
        puVar3 = puVar3 + iVar6;
      }
      iVar6 = iVar6 + (0x1000 - ((uint)(puVar3 + uVar7) & 0xfff));
      puVar5 = (undefined *)FUN_002fea70(param_1,iVar6);
      if (puVar5 == (undefined *)0xffffffff) {
        iVar6 = 0;
        puVar5 = puVar3;
      }
      DAT_00366080 = DAT_00366080 + iVar6;
      PTR_DAT_00365c58 = puVar3;
      *(uint *)(puVar3 + 4) = (uint)(puVar5 + (iVar6 - (int)puVar3)) | 1;
      if (puVar1 != &DAT_00365c50) {
        if (uVar8 < 0x10) {
          *(undefined4 *)(puVar3 + 4) = 1;
          return;
        }
        uVar7 = uVar8 - 0xc & 0xfffffff0;
        *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) & 1 | uVar7;
        *(undefined4 *)(puVar1 + uVar7 + 8) = 5;
        *(undefined4 *)(puVar1 + uVar7 + 4) = 5;
        if (0xf < uVar7) {
          FUN_00302e90(param_1,puVar1 + 8);
        }
      }
    }
    uVar4 = (ulong)(int)DAT_00366080;
    if (DAT_00366070 < uVar4) {
      DAT_00366070 = uVar4;
    }
    if (DAT_00366078 < uVar4) {
      DAT_00366078 = uVar4;
    }
  }
  return;
}

