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

s32 FUN_00102448(...) asm("func_00102448");
s32 FUN_00170dd0(...) asm("func_00170dd0");
s32 FUN_00236d60(...) asm("func_00236d60");
s32 FUN_00242618(...) asm("func_00242618");
s32 FUN_002593b8(...) asm("func_002593b8");
s32 FUN_00274b40(...) asm("_ZN2Tz6Jiminy11PauseThreadEP4TASK");
s32 FUN_00274cf0(...) asm("func_00274cf0");
s32 FUN_00274db8(...) asm("func_00274db8");
s32 FUN_00274e08(...) asm("func_00274e08");
s32 FUN_00274e50(...) asm("func_00274e50");
s32 FUN_00274fa8(...) asm("func_00274fa8");
s32 FUN_00275180(...) asm("func_00275180");
s32 FUN_00275438(...) asm("func_00275438");
s32 FUN_00276410(...) asm("func_00276410");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_002925c0(...) asm("func_002925c0");
s32 FUN_00292630(...) asm("func_00292630");
s32 FUN_00292870(...) asm("func_00292870");
s32 FUN_00293bd0(...) asm("func_00293bd0");
s32 FUN_00293fc0(...) asm("func_00293fc0");
s32 FUN_00294020(...) asm("func_00294020");
s32 FUN_002a7588(...) asm("func_002a7588");
s32 FUN_002a75c0(...) asm("func_002a75c0");
s32 FUN_002a9d88(...) asm("func_002a9d88");
s32 FUN_002acf48(...) asm("func_002acf48");
s32 FUN_002b3440(...) asm("func_002b3440");
extern u32 DAT_0035f140 asm("D_0035f140");
extern u32 DAT_0035f222 asm("D_0035f222");

// Ghidra decompile of 0x00274b40, wrapped mechanically (ad/fallback.py)

void FUN_00274b40_impl(undefined8 param_1) asm("_ZN2Tz6Jiminy11PauseThreadEP4TASK");
void FUN_00274b40_impl(undefined8 param_1) {
  long lVar1;
  undefined8 uVar2;
  
  FUN_002593b8(3,param_1);
  FUN_00276410();
  FUN_00293bd0(0,0,0);
  FUN_00274db8();
  FUN_002a7588();
  FUN_002925c0();
  FUN_00102448(param_1,1);
  FUN_00170dd0(param_1);
  FUN_00274e08();
  if ((DAT_0035f140 & 4) == 0) {
    FUN_00293fc0();
    FUN_00294020(0);
  }
  FUN_002a75c0();
  while (lVar1 = FUN_00292630(), lVar1 != 0) {
    FUN_00102448(param_1,0);
  }
  uVar2 = FUN_00287bc0();
  FUN_00274cf0(uVar2);
  FUN_002925c0();
  FUN_00102448(param_1,0);
  FUN_00170dd0(param_1);
  while (DAT_0035f222 != '\0') {
    FUN_00102448(param_1,0);
  }
  FUN_002b3440(param_1);
  FUN_002a9d88();
  FUN_002acf48();
  FUN_00274fa8();
  FUN_00292870();
  FUN_00242618(0xb,1);
  while( true ) {
    FUN_00236d60();
    lVar1 = FUN_00275180();
    if (lVar1 != 0) break;
    FUN_00275438();
    FUN_00102448(param_1,0);
  }
  FUN_00274e50();
  while (lVar1 = FUN_00292630(), lVar1 != 0) {
    FUN_00102448(param_1,0);
  }
  return;
}

