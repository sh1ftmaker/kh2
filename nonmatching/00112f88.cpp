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

s32 FUN_00112f88(...) asm("_ZN2kn6Friend19target2hitCollisionEPN2YS6TARGETE");
s32 FUN_0016bba8(...) asm("func_0016bba8");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190140(...) asm("func_00190140");
s32 FUN_00190388(...) asm("func_00190388");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x00112f88, wrapped mechanically (ad/fallback.py)

long FUN_00112f88_impl(undefined8 param_1) asm("_ZN2kn6Friend19target2hitCollisionEPN2YS6TARGETE");
long FUN_00112f88_impl(undefined8 param_1) {
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  long lVar6;
  float fVar7;
  Q16 auVar8;
  Q16 auVar9;
  B12 auStack_80;
  undefined4 uStack_74;
  Q16 auStack_70;
  Q16 auStack_60;
  Q16 auStack_50;
  
  lVar6 = 0;
  lVar4 = FUN_00190140();
  bVar2 = false;
  if (lVar4 != 0) {
    bVar2 = *(int *)param_1 != 0;
  }
  lVar4 = 0;
  if (bVar2) {
    iVar1 = *(int *)param_1;
    if ((*(uint *)(iVar1 + 0x588) & 2) != 0) {
      uStack_74 = 0;
      FUN_00190388(auStack_60,param_1);
      fVar5 = 0.0;
      lVar3 = lVar6;
      while (lVar4 = lVar3, fVar7 = fVar5, lVar6 = FUN_0016bba8(iVar1,2,lVar6), lVar6 != 0) {
        FUN_0018a818(auStack_80,iVar1,lVar6);
        auVar8 = _lqc2(auStack_60);
        auVar9 = _lqc2(auStack_70);
        auVar8 = _vsub(auVar8,auVar9);
        auStack_50 = _sqc2(auVar8);
        auVar8 = _lqc2(auStack_50);
        auVar8 = _vmul(auVar8,auVar8);
        auVar8 = _vaddbc(auVar8,auVar8);
        auVar8 = _vaddbc(auVar8,auVar8);
        auVar8 = _qmfc2((*(u32*)((u8*)&auVar8 + 0)));
        fVar5 = (*(u32*)((u8*)&auVar8 + 0));
        lVar3 = lVar6;
        if ((lVar4 != 0) && (fVar7 <= fVar5)) {
          fVar5 = fVar7;
          lVar3 = lVar4;
        }
      }
    }
  }
  return lVar4;
}

