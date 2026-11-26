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

s32 FUN_001e2ad8(...) asm("func_001e2ad8");
s32 FUN_001e4028(...) asm("func_001e4028");
s32 FUN_002fdfc8(...) asm("func_002fdfc8");
extern u32 DAT_00354248 asm("D_00354248");
extern u32 DAT_0035424a asm("D_0035424a");
extern u32 DAT_0035424c asm("D_0035424c");
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x001e4028, wrapped mechanically (ad/fallback.py)

uint * FUN_001e4028_impl(int *param_1,int param_2) asm("func_001e4028");
uint * FUN_001e4028_impl(int *param_1,int param_2) {
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar6 = (uint *)(param_1 + 1);
  uVar7 = 0;
  uVar8 = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)*puVar6;
      iVar5 = (int)uVar7 >> 3;
      puVar6 = puVar6 + 1;
      if (((uint)piVar2 & 0xf) != 0) {
        FUN_002fdfc8(0x36e978,0x36ec40);
        FUN_002fdfc8(0x36e998,0x36e9d0,0x44c);
        trap(0);
      }
      if (0xf < iVar5) {
        FUN_002fdfc8(0x36e978,0x36ec58);
        FUN_002fdfc8(0x36e998,0x36e9d0,0x44d);
        trap(0);
      }
      if (iVar5 < 0) {
        FUN_002fdfc8(0x36e978,0x36ec70);
        FUN_002fdfc8(0x36e998,0x36e9d0,0x44d);
        trap(0);
      }
      if ((uVar7 & 7) == 0) {
        uVar8 = (uint)*(byte *)(param_2 + iVar5);
      }
      if ((uVar8 & 1) != 0) {
        iVar5 = *piVar2;
        if (iVar5 < 0x80) {
          uVar4 = (undefined2)piVar2[1];
        }
        else {
          FUN_001e2ad8(0x36ece0,0x36e9d0,0x457,0x36ecf0);
          uVar4 = (undefined2)piVar2[1];
        }
        iVar5 = iVar5 * 8;
        *(undefined2 *)(&DAT_00354248 + iVar5) = uVar4;
        iVar3 = piVar2[2];
        *(int **)(&DAT_0035424c + iVar5) = piVar2 + 3;
        *(short *)(&DAT_0035424a + iVar5) = (short)iVar3;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 >> 1;
    } while ((int)uVar7 < iVar1);
  }
  return puVar6;
}

