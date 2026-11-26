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

s32 FUN_003060f0(...) asm("func_003060f0");
s32 FUN_00306760(...) asm("func_00306760");
s32 FUN_0030edb0(...) asm("func_0030edb0");
s32 FUN_0030ee00(...) asm("func_0030ee00");
s32 ReferThreadStatus(...) asm("func_00305520");
s32 _StartThread(...) asm("func_00305440");

// Ghidra decompile of 0x00306760, wrapped mechanically (ad/fallback.py)

long FUN_00306760_impl(undefined8 param_1,undefined8 param_2) asm("func_00306760");
long FUN_00306760_impl(undefined8 param_1,undefined8 param_2) {
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  long lVar1;
  int aiStack_70 [2];
  int iStack_68;
  int iStack_64;
  
  lVar1 = FUN_003060f0();
  if (lVar1 != 0) {
    return -1;
  }
  lVar1 = FUN_0030edb0();
  if (lVar1 != 0) {
    lVar1 = ReferThreadStatus(param_1,aiStack_70);
    if (lVar1 < 0) {
      FUN_0030ee00();
      return lVar1;
    }
    if (aiStack_70[0] == 0x10) {
      iStack_68 = iStack_68 + iStack_64;
      *(undefined4 *)(iStack_68 + -0x2a0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x29c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x298) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x294) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x290) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x28c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x288) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x284) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x280) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x27c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x278) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x274) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x270) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x26c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x268) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x264) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x260) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x25c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -600) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x254) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x250) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x24c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x248) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x244) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x240) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x23c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x238) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x234) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x230) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x22c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x228) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x224) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x220) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x21c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x218) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x214) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x210) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x20c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x208) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x204) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x200) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1fc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1f8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -500) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1f0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1ec) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1e8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1e4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1e0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1dc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1d8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1d4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1d0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1cc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1c8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1c4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1c0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1bc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1b8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1b4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1b0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x1ac) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x1a8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x1a4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x1a0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x19c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x198) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x194) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -400) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x18c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x188) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x184) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x180) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x17c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x178) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x174) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x170) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x16c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x168) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x164) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x160) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x15c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x158) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x154) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x150) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x14c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x148) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x144) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x140) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x13c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x138) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x134) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x130) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -300) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x128) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x124) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x120) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x11c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x118) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x114) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x110) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x10c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x108) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x104) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x100) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0xfc) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0xf8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0xf4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0xf0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0xec) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0xe8) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0xe4) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0xa0) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x9c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x98) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x94) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x90) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x8c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x88) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x84) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x80) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x7c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x78) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x74) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x70) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x6c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x68) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -100) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x60) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x5c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x58) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x54) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x50) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x4c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x48) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x44) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x40) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x3c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x38) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x34) = in_register_0000000c;
      *(undefined4 *)(iStack_68 + -0x30) = in_zero_lo;
      *(undefined4 *)(iStack_68 + -0x2c) = in_zero_hi;
      *(undefined4 *)(iStack_68 + -0x28) = in_zero_udw;
      *(undefined4 *)(iStack_68 + -0x24) = in_register_0000000c;
      *(long *)(iStack_68 + -0x260) = (long)(int)param_2;
      *(long *)(iStack_68 + -0xe0) = (long)*(int *)(iStack_68 + -0xe0);
      *(undefined8 *)(iStack_68 + -0xd8) = 0;
      *(long *)(iStack_68 + -0xd0) = (long)*(int *)(iStack_68 + -0xd0);
      *(undefined8 *)(iStack_68 + -200) = 0;
      *(long *)(iStack_68 + -0xc0) = (long)*(int *)(iStack_68 + -0xc0);
      *(undefined8 *)(iStack_68 + -0xb8) = 0;
      *(long *)(iStack_68 + -0xb0) = (long)*(int *)(iStack_68 + -0xb0);
      *(undefined8 *)(iStack_68 + -0xa8) = 0;
      FUN_0030ee00();
      lVar1 = _StartThread(param_1,param_2);
      return lVar1;
    }
    FUN_0030ee00();
  }
  return -1;
}

