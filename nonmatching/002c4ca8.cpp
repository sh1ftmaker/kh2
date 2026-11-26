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

s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_001396b0(...) asm("func_001396b0");
s32 FUN_00239870(...) asm("func_00239870");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_002889f0(...) asm("func_002889f0");
s32 FUN_00288be8(...) asm("func_00288be8");
s32 FUN_00288ce0(...) asm("func_00288ce0");
s32 FUN_00288f48(...) asm("func_00288f48");
s32 FUN_002891d0(...) asm("func_002891d0");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028b078(...) asm("func_0028b078");
s32 FUN_0028c2c8(...) asm("func_0028c2c8");
s32 FUN_0028d068(...) asm("func_0028d068");
s32 FUN_0028d1c0(...) asm("func_0028d1c0");
s32 FUN_0028d660(...) asm("func_0028d660");
s32 FUN_002c4ca8(...) asm("_ZN2dk10WM_LANDING21createSelectDepartureEv");
s32 FUN_00324bc0(...) asm("func_00324bc0");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_00375608 asm("D_00375608");

// Ghidra decompile of 0x002c4ca8, wrapped mechanically (ad/fallback.py)

void FUN_002c4ca8_impl(int param_1) asm("_ZN2dk10WM_LANDING21createSelectDepartureEv");
void FUN_002c4ca8_impl(int param_1) {
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined1 auStack_1b0 [352];
  
  iVar7 = 0;
  DAT_0035f3d4 = 0x7544;
  uVar4 = FUN_00288be8(0x38);
  FUN_002889f0(uVar4,2,1);
  *(int *)(param_1 + 0x368) = (int)uVar4;
  do {
    uVar6 = 0x4884;
    if (iVar7 == 0) {
      uVar6 = *(undefined2 *)(&DAT_00375608 + *(int *)(param_1 + 0x202c) * 2);
    }
    uVar5 = FUN_0028c2c8(*(undefined4 *)(param_1 + 0x3548),*(undefined4 *)(param_1 + 0x354c),0x3a,
                         uVar6,0);
    iVar1 = (int)uVar5;
    *(undefined4 *)(iVar1 + 0x188) = 0x3b;
    iVar2 = FUN_0023aa98(iVar1 + 0x18);
    FUN_00138c68(uVar5,0,iVar2 * iVar7);
    *(undefined4 *)(iVar1 + 0x1b0) = 2;
    FUN_00324bc0(auStack_1b0,iVar1 + 0x18);
    iVar2 = FUN_0023aa18(auStack_1b0);
    iVar3 = FUN_0023aa38(auStack_1b0);
    *(int *)(iVar1 + 0x19c) = -iVar2;
    *(int *)(iVar1 + 0x1a0) = -iVar3;
    FUN_00288ce0(uVar4,uVar5,iVar7,0x3755d0,0x3755d8);
    iVar7 = iVar7 + 1;
    FUN_00239870(auStack_1b0);
  } while (iVar7 < 2);
  iVar7 = param_1 + 0x36c;
  FUN_002891f0(uVar4,0,1,0,2);
  FUN_0028b078(uVar4,1,2);
  FUN_0028af90(uVar4,2);
  FUN_00288f48(uVar4,0x10,0x20,0x40,0x80);
  FUN_0028d068(0x7558,0xffffffffffffffff);
  FUN_0028d1c0(iVar7,0x7562,1,1,param_1 + 0x1c,0x375598,0);
  uVar4 = FUN_002891d0(uVar4);
  FUN_0028d660(iVar7,uVar4);
  FUN_001396b0(iVar7);
  return;
}

