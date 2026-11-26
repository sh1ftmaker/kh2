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

s32 FUN_001e7698(...) asm("func_001e7698");
s32 FUN_001e79f0(...) asm("func_001e79f0");
s32 FUN_001e7a98(...) asm("_Z16pppCreatePObjectP9_pppMngStP12_pppPDataVal");
s32 FUN_002fdfc8(...) asm("func_002fdfc8");
extern u32 DAT_01d9e6e4 asm("D_01d9e6e4");
extern u32 LAB_001e7b48 asm("D_001e7b48");
_GHIDRA_ANY(trap)

// Ghidra decompile of 0x001e7a98, wrapped mechanically (ad/fallback.py)

ulong FUN_001e7a98_impl(int param_1,int *param_2) asm("_Z16pppCreatePObjectP9_pppMngStP12_pppPDataVal");
ulong FUN_001e7a98_impl(int param_1,int *param_2) {
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar1 = *param_2;
  uVar4 = FUN_001e7698(DAT_01d9e6e4,*(int *)(iVar1 + 0x20) + *(short *)(iVar1 + 0x26) * 4);
  if ((uVar4 & 0xf) != 0) {
    FUN_002fdfc8(0x36ef58,0x36ef70);
    FUN_002fdfc8(0x36ef98,0x36ef88,0xde);
    trap(0);
  }
  puVar7 = (undefined4 *)uVar4;
  puVar7[3] = 0;
  *(undefined1 *)(puVar7 + 0x27) = 1;
  puVar7[0x24] = 0;
  puVar7[0x25] = 0;
  puVar7[2] = param_2;
  *(undefined1 *)((int)puVar7 + 0x9d) = 0;
  *(undefined1 *)((int)puVar7 + 0x9e) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x74);
  if (puVar2 == (undefined4 *)0x0) {
    param_2[1] = (int)puVar7;
    *(undefined4 **)(param_1 + 0x74) = puVar7;
LAB_001e7b48:
    *puVar7 = 0;
  }
  else if ((undefined4 *)param_2[1] == (undefined4 *)0x0) {
    piVar6 = (int *)puVar2[2];
    puVar5 = (undefined4 *)(param_1 + 0x74);
    while (*(short *)(*piVar6 + 0x24) < *(short *)(iVar1 + 0x24)) {
      puVar3 = (undefined4 *)*puVar2;
      if (puVar3 == (undefined4 *)0x0) {
        param_2[1] = (int)puVar7;
        *puVar2 = puVar7;
        goto LAB_001e7b48;
      }
      puVar5 = puVar2;
      puVar2 = puVar3;
      piVar6 = (int *)puVar3[2];
    }
    param_2[1] = (int)puVar7;
    *puVar5 = puVar7;
    *puVar7 = puVar2;
  }
  else {
    *puVar7 = *(undefined4 *)param_2[1];
    *(undefined4 **)param_2[1] = puVar7;
  }
  *(short *)(param_2 + 3) = (short)param_2[3] + 1;
  FUN_001e79f0(uVar4);
  return uVar4;
}

