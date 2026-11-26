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

s32 FUN_003012d8(...) asm("func_003012d8");
s32 FUN_00301938(...) asm("func_00301938");
s32 FUN_00313ed8(...) asm("func_00313ed8");
s32 FUN_003142e0(...) asm("func_003142e0");

// Ghidra decompile of 0x003012d8, wrapped mechanically (ad/fallback.py)

undefined8 FUN_003012d8_impl(undefined8 param_1,long param_2,int param_3,ulong param_4,undefined1 *param_5, undefined8 param_6,long param_7,int *param_8) asm("func_003012d8");
undefined8 FUN_003012d8_impl(undefined8 param_1,long param_2,int param_3,ulong param_4,undefined1 *param_5, undefined8 param_6,long param_7,int *param_8) {
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  B4 auStack_60;
  char *apcStack_5c [3];
  
  uVar5 = 3;
  if ((param_7 != 0x66) && ((param_7 == 0x65 || (uVar5 = 2, param_7 == 0x45)))) {
    param_3 = param_3 + 1;
    uVar5 = 2;
  }
  if (param_2 >> 0x20 < 0) {
    param_2 = FUN_00313ed8(0,param_2);
    *param_5 = 0x2d;
  }
  else {
    *param_5 = 0;
  }
  uVar5 = FUN_00301938(param_1,param_2,uVar5,param_3,param_6,auStack_60,apcStack_5c);
  pcVar4 = (char *)uVar5;
  if (((param_7 != 0x67) && (param_7 != 0x47)) || ((param_4 & 1) != 0)) {
    pcVar3 = pcVar4 + param_3;
    if (param_7 == 0x66) {
      piVar6 = (int *)param_6;
      if (*pcVar4 == '0') {
        lVar1 = FUN_003142e0(param_2,0);
        if (lVar1 != 0) {
          *piVar6 = 1 - param_3;
        }
        iVar2 = *piVar6;
      }
      else {
        iVar2 = *piVar6;
      }
      pcVar3 = pcVar3 + iVar2;
    }
    lVar1 = FUN_003142e0(param_2,0);
    if (lVar1 == 0) {
      apcStack_5c[0] = pcVar3;
    }
    for (; apcStack_5c[0] < pcVar3; apcStack_5c[0] = apcStack_5c[0] + 1) {
      *apcStack_5c[0] = '0';
    }
  }
  *param_8 = (int)apcStack_5c[0] - (int)pcVar4;
  return uVar5;
}

