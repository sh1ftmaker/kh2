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

s32 FUN_002f5020(...) asm("func_002f5020");
s32 FUN_002f5c48(...) asm("func_002f5c48");
s32 FUN_00305f18(...) asm("func_00305f18");
s32 FUN_003094b8(...) asm("func_003094b8");
s32 FUN_0030edb0(...) asm("func_0030edb0");
s32 FUN_0030ee00(...) asm("func_0030ee00");
extern u32 DAT_01e2da80 asm("D_01e2da80");
extern u32 DAT_01e2da84 asm("D_01e2da84");
extern u32 DAT_01e2fd80 asm("D_01e2fd80");
extern u32 DAT_01e2fd88 asm("D_01e2fd88");
extern u32 DAT_01e2fd90 asm("D_01e2fd90");
extern u32 DAT_01e2fd98 asm("D_01e2fd98");
extern u32 DAT_01e2fda0 asm("D_01e2fda0");
extern u32 DAT_01e2fda8 asm("D_01e2fda8");
extern u32 DAT_01e2fdb0 asm("D_01e2fdb0");
extern u32 DAT_01e2fdb8 asm("D_01e2fdb8");
extern u32 DAT_01e2fe00 asm("D_01e2fe00");
extern u32 DAT_01e2fe08 asm("D_01e2fe08");
extern u32 DAT_01e2fe10 asm("D_01e2fe10");
extern u32 DAT_01e2fe18 asm("D_01e2fe18");
extern u32 DAT_01e2fe20 asm("D_01e2fe20");
extern u32 DAT_01e2fe28 asm("D_01e2fe28");
extern u32 DAT_01e2fe30 asm("D_01e2fe30");
extern u32 DAT_01e2fe40 asm("D_01e2fe40");
extern u32 _DAT_01e2fe38 asm("D_01e2fe38");
s32 SignalSema(...) asm("func_00305640");
s32 WaitSema(...) asm("func_00305660");

// Ghidra decompile of 0x002f5020, wrapped mechanically (ad/fallback.py)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002f5020_impl(int param_1) asm("func_002f5020");
undefined4 FUN_002f5020_impl(int param_1) {
  undefined4 uVar1;
  long lVar2;
  
  FUN_00305f18(0x1e2fd80,0x1e2fe00);
  FUN_0030edb0();
  DAT_01e2fe00 = DAT_01e2fd80;
  DAT_01e2fe08 = DAT_01e2fd88;
  DAT_01e2fe10 = DAT_01e2fd90;
  DAT_01e2fe18 = DAT_01e2fd98;
  DAT_01e2fe20 = DAT_01e2fda0;
  DAT_01e2fe28 = DAT_01e2fda8;
  DAT_01e2fe30 = DAT_01e2fdb0;
  _DAT_01e2fe38 = DAT_01e2fdb8;
  FUN_0030ee00();
  uVar1 = 0xfffffff4;
  if (*(int *)((int)&DAT_01e2fe00 + param_1 * 4) == 1) {
    WaitSema(DAT_01e2fe40);
    DAT_01e2da80 = param_1;
    lVar2 = FUN_003094b8(0x1e2d980,0xffffffff80001303,0,0x1e2da80,0x90,0x1e2da80,0x90,0);
    uVar1 = DAT_01e2da84;
    if (lVar2 < 0) {
      FUN_002f5c48(0x376940);
      SignalSema(DAT_01e2fe40);
      uVar1 = 0;
    }
    else {
      SignalSema(DAT_01e2fe40);
    }
  }
  return uVar1;
}

