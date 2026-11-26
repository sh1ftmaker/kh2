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

s32 FUN_002a9d68(...) asm("func_002a9d68");
s32 FUN_002b0fc8(...) asm("_ZN2Tz8JmPuzzle8PieceSelEj");
s32 FUN_002b1bd0(...) asm("func_002b1bd0");
s32 FUN_002b2380(...) asm("func_002b2380");
s32 FUN_002b23e0(...) asm("func_002b23e0");
s32 FUN_002b2da8(...) asm("func_002b2da8");
s32 FUN_002b2f28(...) asm("func_002b2f28");
s32 FUN_002b3050(...) asm("func_002b3050");
extern u32 DAT_0035f638 asm("D_0035f638");

// Ghidra decompile of 0x002b0fc8, wrapped mechanically (ad/fallback.py)

void FUN_002b0fc8_impl(ulong param_1) asm("_ZN2Tz8JmPuzzle8PieceSelEj");
void FUN_002b0fc8_impl(ulong param_1) {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar2 = FUN_002a9d68();
  iVar3 = FUN_002b23e0(0xffffffffffffffff);
  uVar4 = FUN_002b2380(*(undefined2 *)(DAT_0035f638 + 0x1c),*(undefined2 *)(DAT_0035f638 + 0x20));
  if ((*(uint *)(DAT_0035f638 + 0x34) & 0x800) == 0) {
    *(undefined2 *)(DAT_0035f638 + 0x1e) = *(undefined2 *)(DAT_0035f638 + 0x1c);
    *(undefined2 *)(DAT_0035f638 + 0x22) = *(undefined2 *)(DAT_0035f638 + 0x20);
    *(uint *)(DAT_0035f638 + 0x34) =
         *(uint *)(DAT_0035f638 + 0x34) & 0xffffcfff |
         ((int)*(char *)(((uint)*(byte *)(iVar3 + 2) * 0x30 + uVar4) * 4 + iVar2 + 0x1e9) & 3U) <<
         0xc;
    FUN_002b2da8(1);
  }
  else {
    if ((param_1 & 4) != 0) {
      uVar5 = FUN_002b2380(*(undefined2 *)(DAT_0035f638 + 0x1e),*(undefined2 *)(DAT_0035f638 + 0x22)
                          );
      *(byte *)(((uint)*(byte *)(iVar3 + 2) * 0x30 + uVar4) * 4 + iVar2 + 0x1e9) =
           (byte)(*(uint *)(DAT_0035f638 + 0x34) >> 0xc) & 3;
      uVar1 = *(undefined4 *)(uVar5 * 4 + (uint)*(byte *)(iVar3 + 2) * 0xc0 + iVar2 + 0x1e8);
      iVar7 = (uint)*(byte *)(iVar3 + 2) * 0xc0 + iVar2;
      *(undefined4 *)(uVar5 * 4 + iVar7 + 0x1e8) = *(undefined4 *)(uVar4 * 4 + iVar7 + 0x1e8);
      *(undefined4 *)(uVar4 * 4 + (uint)*(byte *)(iVar3 + 2) * 0xc0 + iVar2 + 0x1e8) = uVar1;
      *(undefined2 *)(DAT_0035f638 + 0x1c) = *(undefined2 *)(DAT_0035f638 + 0x1e);
      *(undefined2 *)(DAT_0035f638 + 0x20) = *(undefined2 *)(DAT_0035f638 + 0x22);
      puVar6 = (uint *)(DAT_0035f638 + 0x2c + (uVar4 >> 5) * 4);
      *puVar6 = *puVar6 | 1 << (uVar4 & 0x1f);
      puVar6 = (uint *)(DAT_0035f638 + 0x2c + (uVar5 >> 5) * 4);
      *puVar6 = *puVar6 | 1 << (uVar5 & 0x1f);
      FUN_002b1bd0(0);
    }
    FUN_002b2f28(1);
  }
  *(uint *)(DAT_0035f638 + 0x34) =
       *(uint *)(DAT_0035f638 + 0x34) & 0xfffff7ff |
       (*(uint *)(DAT_0035f638 + 0x34) >> 0xb & 1 ^ 1) << 0xb;
  FUN_002b3050(1);
  return;
}

