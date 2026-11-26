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

s32 FUN_002f4e30(...) asm("func_002f4e30");
s32 FUN_002f5d18(...) asm("_Z16ctarget_002f5d18jjjj");
s32 FUN_002f6240(...) asm("func_002f6240");
s32 FUN_003080d0(...) asm("func_003080d0");
extern u32 DAT_01e2fe48 asm("D_01e2fe48");
extern u32 DAT_01e2fe58 asm("D_01e2fe58");

// Ghidra decompile of 0x002f5d18, wrapped mechanically (ad/fallback.py)

long FUN_002f5d18_impl(long param_1,ulong param_2) asm("_Z16ctarget_002f5d18jjjj");
long FUN_002f5d18_impl(long param_1,ulong param_2) {
  long lVar1;
  uint *puVar2;
  uint auStack_70 [5];
  ulong uStack_5c;
  undefined8 uStack_54;
  
  if ((param_2 & 0x3f) == 0) {
    if (param_1 == 0) {
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      auStack_70[4] = 0;
      uStack_5c = uStack_5c & 0xffffffffffffff00;
      auStack_70[0] = 0;
    }
    else {
      puVar2 = (uint *)param_1;
      auStack_70[0] = *puVar2;
      auStack_70[2] = puVar2[1];
      auStack_70[3] = puVar2[2];
      auStack_70[4] = puVar2[3];
      uStack_5c = *(ulong *)(puVar2 + 4);
      uStack_54 = *(undefined8 *)(puVar2 + 6);
    }
    auStack_70[1] = 1;
    auStack_70[0] = auStack_70[0] | 1;
    lVar1 = FUN_002f4e30(auStack_70,param_2,(int)param_2 + 0x80);
    if (-1 < lVar1) {
      *(int *)(&DAT_01e2fe58 + (int)lVar1 * 0x334) = (int)param_2;
      (&DAT_01e2fe48)[(int)lVar1 * 0xcd] = 1;
      FUN_002f6240(lVar1);
    }
  }
  else {
    FUN_003080d0(0x376ae8);
    lVar1 = -1;
  }
  return lVar1;
}

