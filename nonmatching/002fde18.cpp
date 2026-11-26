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

s32 FUN_002fde18(...) asm("_Z16wtarget_002fde18jjjj");
_GHIDRA_ANY(_pcpyh)
_GHIDRA_ANY(_pcpyld)

// Ghidra decompile of 0x002fde18, wrapped mechanically (ad/fallback.py)

undefined8 * FUN_002fde18_impl(undefined8 *param_1,undefined1 param_2,uint param_3) asm("_Z16wtarget_002fde18jjjj");
undefined8 * FUN_002fde18_impl(undefined8 *param_1,undefined1 param_2,uint param_3) {
  bool bVar1;
  Q16 auVar2;
  undefined8 *puVar3;
  undefined8 in_t0_udw;
  Q16 auVar4;
  
  puVar3 = param_1;
  if ((7 < param_3) && (((uint)param_1 & 0xf) == 0)) {
    auVar2[1] = param_2;
    auVar2[0] = param_2;
    (*(u32*)((u8*)&auVar2 + 2)) = 0;
    (*(u64*)((u8*)&auVar2 + 8)) = in_t0_udw;
    auVar2 = _pcpyh(auVar2);
    bVar1 = param_3 < 8;
    if (0x1f < param_3) {
      auVar4 = _pcpyld(auVar2,auVar2);
      do {
        *(int *)puVar3 = (*(u32*)((u8*)&auVar4 + 0));
        *(int *)((int)puVar3 + 4) = (*(u32*)((u8*)&auVar4 + 4));
        *(int *)(puVar3 + 1) = (*(u32*)((u8*)&auVar4 + 8));
        *(int *)((int)puVar3 + 0xc) = (*(u32*)((u8*)&auVar4 + 12));
        param_3 = param_3 - 0x20;
        *(int *)(puVar3 + 2) = (*(u32*)((u8*)&auVar4 + 0));
        *(int *)((int)puVar3 + 0x14) = (*(u32*)((u8*)&auVar4 + 4));
        *(int *)(puVar3 + 3) = (*(u32*)((u8*)&auVar4 + 8));
        *(int *)((int)puVar3 + 0x1c) = (*(u32*)((u8*)&auVar4 + 12));
        puVar3 = puVar3 + 4;
      } while (0x1f < param_3);
      bVar1 = param_3 < 8;
    }
    while (!bVar1) {
      *puVar3 = (*(u64*)((u8*)&auVar2 + 0));
      param_3 = param_3 - 8;
      puVar3 = puVar3 + 1;
      bVar1 = param_3 < 8;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    *(undefined1 *)puVar3 = param_2;
    puVar3 = (undefined8 *)((int)puVar3 + 1);
  }
  return param_1;
}

