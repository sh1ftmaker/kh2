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

s32 FUN_002ff538(...) asm("func_002ff538");
_GHIDRA_ANY(_pand)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_psubb)
_GHIDRA_ANY(_psubw)

// Ghidra decompile of 0x002ff538, wrapped mechanically (ad/fallback.py)

int FUN_002ff538_impl(undefined8 param_1,Q16 *param_2,uint param_3) asm("func_002ff538");
int FUN_002ff538_impl(undefined8 param_1,Q16 *param_2,uint param_3) {
  Q16 auVar1;
  Q16 auVar2;
  undefined1 *puVar3;
  Q16 auVar4;
  char cVar5;
  Q16 auVar6;
  Q16 auVar7;
  Q16 *pauVar8;
  undefined8 in_a0_udw;
  undefined8 in_t0_udw;
  undefined8 in_t1_udw;
  Q16 auVar9;
  Q16 auVar10;
  
  pauVar8 = (Q16 *)param_1;
  if (param_3 == 0) {
    return 0;
  }
  if ((((uint)pauVar8 | (uint)param_2) & 7) == 0) {
    (*(u64*)((u8*)&auVar4 + 8)) = in_t1_udw;
    (*(u64*)((u8*)&auVar4 + 0)) = 0x101010101010101;
    if ((((uint)pauVar8 | (uint)param_2) & 0xf) == 0 && 0xf < param_3) {
      auVar10 = _pcpyld(auVar4,auVar4);
      auVar6 = _psubw(*pauVar8,*param_2);
      (*(u64*)((u8*)&auVar9 + 8)) = in_t0_udw;
      (*(u64*)((u8*)&auVar9 + 0)) = 0x8080808080808080;
      (*(u64*)((u8*)&auVar2 + 8)) = in_t0_udw;
      (*(u64*)((u8*)&auVar2 + 0)) = 0x8080808080808080;
      auVar9 = _pcpyld(auVar9,auVar2);
      (*(u64*)((u8*)&auVar7 + 8)) = in_a0_udw;
      (*(u64*)((u8*)&auVar7 + 0)) = param_1;
      auVar4 = _pcpyud(auVar6,auVar7);
      if ((*(u64*)((u8*)&auVar4 + 0)) == 0 && (*(u64*)((u8*)&auVar6 + 0)) == 0) {
        do {
          param_3 = param_3 - 0x10;
          if (param_3 == 0) {
            return 0;
          }
          auVar4 = _psubb(*pauVar8,auVar10);
          auVar4 = _pand(auVar4,~*pauVar8);
          auVar7 = _pand(auVar4,auVar9);
          (*(u64*)((u8*)&auVar6 + 8)) = in_a0_udw;
          (*(u64*)((u8*)&auVar6 + 0)) = param_1;
          auVar4 = _pcpyud(auVar7,auVar6);
          pauVar8 = pauVar8 + 1;
          if ((*(u64*)((u8*)&auVar4 + 0)) != 0 || (*(u64*)((u8*)&auVar7 + 0)) != 0) {
            return 0;
          }
          param_2 = param_2 + 1;
          if (param_3 < 0x10) break;
          auVar7 = _psubw(*pauVar8,*param_2);
          (*(u64*)((u8*)&auVar1 + 8)) = in_a0_udw;
          (*(u64*)((u8*)&auVar1 + 0)) = param_1;
          auVar4 = _pcpyud(auVar7,auVar1);
        } while ((*(u64*)((u8*)&auVar4 + 0)) == 0 && (*(u64*)((u8*)&auVar7 + 0)) == 0);
      }
    }
    else if ((7 < param_3) && (*(long *)*pauVar8 == *(long *)*param_2)) {
      do {
        param_3 = param_3 - 8;
        if (param_3 == 0) {
          return 0;
        }
        puVar3 = *pauVar8;
        pauVar8 = (Q16 *)(*pauVar8 + 8);
        if ((*(ulong *)puVar3 + 0xfefefefefefefeff & ~*(ulong *)puVar3 & 0x8080808080808080) != 0) {
          return 0;
        }
        param_2 = (Q16 *)(*param_2 + 8);
      } while ((7 < param_3) && (*(long *)*pauVar8 == *(long *)*param_2));
    }
  }
  if (param_3 != 0) {
    cVar5 = (*pauVar8)[0];
    while( true ) {
      param_3 = param_3 - 1;
      puVar3 = *pauVar8;
      if (cVar5 != (*param_2)[0]) break;
      if (param_3 == 0) {
        return 0;
      }
      pauVar8 = (Q16 *)(*pauVar8 + 1);
      if (*puVar3 == '\0') {
        return 0;
      }
      param_2 = (Q16 *)(*param_2 + 1);
      cVar5 = (*pauVar8)[0];
    }
  }
  return (uint)(byte)(*pauVar8)[0] - (uint)(byte)(*param_2)[0];
}

