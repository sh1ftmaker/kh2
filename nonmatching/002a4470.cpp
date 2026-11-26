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

s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_00138c78(...) asm("func_00138c78");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00275980(...) asm("func_00275980");
s32 FUN_002759e8(...) asm("func_002759e8");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_002a4470(...) asm("_ZN2Tz10JmTreasure12CreateCursorEv");
s32 FUN_002a4990(...) asm("func_002a4990");
extern u32 DAT_0035f148 asm("D_0035f148");
extern u32 DAT_0035f14c asm("D_0035f14c");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_0035f5e4 asm("D_0035f5e4");
extern u32 DAT_0035f5e8 asm("D_0035f5e8");

// Ghidra decompile of 0x002a4470, wrapped mechanically (ad/fallback.py)

void FUN_002a4470_impl(void) asm("_ZN2Tz10JmTreasure12CreateCursorEv");
void FUN_002a4470_impl(void) {
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uStack_40;
  undefined4 auStack_3c [3];
  
  uVar4 = FUN_002766d0();
  iVar1 = *(int *)(DAT_0035f5e4 + 0x1088);
  iVar3 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  lVar2 = (long)(iVar3 >> 3) * 0xcc0;
  FUN_00138c78(((uint)lVar2 | (uint)((ulong)lVar2 >> 0x20)) + (iVar1 + (iVar3 >> 3) * -8) * 0x198 +
               DAT_0035f5e8,&uStack_40,auStack_3c);
  iVar5 = DAT_0035f5e8 + 0x72c0;
  FUN_0028d8c0(iVar5,DAT_0035f3d4 + 1,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x41,0xffffffffffffffff
               ,0);
  FUN_00139620(iVar5);
  FUN_0028dcc0(iVar5,uVar4);
  FUN_00138c68(iVar5,uStack_40,auStack_3c[0]);
  FUN_00275980(0,iVar5);
  FUN_002759e8(iVar5);
  iVar1 = DAT_0035f5e4;
  iVar3 = FUN_002a4990(0xffffffffffffffff);
  if (*(char *)(iVar3 * 8 + iVar1 + 0x1000) == '\0') {
    FUN_00138c10(iVar5,0x42);
  }
  return;
}

