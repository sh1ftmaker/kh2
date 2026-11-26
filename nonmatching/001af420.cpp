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

s32 FUN_001373d8(...) asm("func_001373d8");
s32 FUN_0014ac08(...) asm("func_0014ac08");
s32 FUN_00170888(...) asm("func_00170888");
s32 FUN_00170cd0(...) asm("func_00170cd0");
s32 FUN_001852b8(...) asm("func_001852b8");
s32 FUN_00197738(...) asm("func_00197738");
s32 FUN_00197920(...) asm("func_00197920");
s32 FUN_001a58f8(...) asm("func_001a58f8");
s32 FUN_001af420(...) asm("_ZN2YS8GAMEOVER4execEv");
s32 FUN_001af778(...) asm("func_001af778");
s32 FUN_001af8d8(...) asm("func_001af8d8");
s32 FUN_001af938(...) asm("func_001af938");
s32 FUN_001c10f8(...) asm("func_001c10f8");
s32 FUN_001c8948(...) asm("func_001c8948");
s32 FUN_001c8d80(...) asm("func_001c8d80");
s32 FUN_001c8db8(...) asm("func_001c8db8");
s32 FUN_001c98f0(...) asm("func_001c98f0");
s32 FUN_001c9df8(...) asm("func_001c9df8");
s32 FUN_001d0068(...) asm("func_001d0068");
s32 FUN_001d00a8(...) asm("func_001d00a8");
s32 FUN_00253410(...) asm("func_00253410");
s32 FUN_002bc788(...) asm("func_002bc788");
s32 FUN_002bc798(...) asm("func_002bc798");
extern u32 DAT_0034e948 asm("D_0034e948");

// Ghidra decompile of 0x001af420, wrapped mechanically (ad/fallback.py)

undefined4 FUN_001af420_impl(undefined8 param_1) asm("_ZN2YS8GAMEOVER4execEv");
undefined4 FUN_001af420_impl(undefined8 param_1) {
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)param_1;
  iVar1 = piVar3[2];
  switch(iVar1) {
  case 0:
  case 3:
    break;
  case 1:
    FUN_002bc788();
    piVar3[2] = piVar3[2] + 1;
  case 2:
    lVar2 = FUN_00197920();
    if (lVar2 != 0) {
      return 1;
    }
    iVar1 = FUN_0014ac08();
    if (*(int *)(iVar1 + 0xfc) != 4) {
      return 1;
    }
    FUN_002bc798();
    iVar1 = 1;
    if (*piVar3 != 1) {
      FUN_001852b8(DAT_0034e948);
      iVar1 = *piVar3;
    }
    if (iVar1 == 2) {
      FUN_001af938();
switchD_001af454_caseD_8:
      return 0;
    }
    if ((char)piVar3[3] == '\0') {
      FUN_00197738();
      FUN_001c8948();
      iVar1 = piVar3[2];
    }
    else {
      FUN_001a58f8();
      iVar1 = piVar3[2];
    }
    break;
  case 4:
    lVar2 = FUN_001c8db8(0x351eb8,0);
    if (lVar2 != 0) {
      return 1;
    }
    lVar2 = FUN_001c8db8(0x351ec0,0);
    if (lVar2 != 0) {
      return 1;
    }
    lVar2 = FUN_00170cd0();
    if (lVar2 != 0) {
      return 1;
    }
    FUN_001c8d80(0x351eb8,0);
    if ((char)piVar3[3] == '\0') {
      FUN_001af8d8(param_1);
    }
    else {
      FUN_001c98f0(0);
      FUN_001d0068();
    }
    FUN_00170888(0);
    iVar1 = piVar3[2];
    break;
  case 5:
    if ((char)piVar3[3] == '\0') {
      lVar2 = FUN_00170cd0();
      if (lVar2 != 0) {
        return 1;
      }
      FUN_001af778(param_1);
      iVar1 = piVar3[4];
      piVar4 = piVar3 + 0xc;
    }
    else {
      lVar2 = FUN_001c9df8();
      if (lVar2 != 0) {
        return 1;
      }
      iVar1 = FUN_001c10f8(10);
      piVar4 = piVar3 + 5;
    }
    FUN_00253410(iVar1,piVar4);
    iVar1 = piVar3[2];
    break;
  default:
    goto switchD_001af454_caseD_6;
  case 7:
    FUN_001373d8();
    FUN_001d00a8();
    return 0;
  case 8:
    goto switchD_001af454_caseD_8;
  }
  piVar3[2] = iVar1 + 1;
switchD_001af454_caseD_6:
  return 1;
}

