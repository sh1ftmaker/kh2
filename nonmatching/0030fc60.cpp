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

s32 FUN_0030f6a0(...) asm("func_0030f6a0");
s32 FUN_0030fa10(...) asm("func_0030fa10");
s32 FUN_0030fba0(...) asm("func_0030fba0");
s32 FUN_0030fc28(...) asm("func_0030fc28");
s32 FUN_0030fc60(...) asm("func_0030fc60");
extern AnyCell DAT_00367118 asm("D_00367118");
extern AnyCell DAT_00367128 asm("D_00367128");
extern AnyCell DAT_0036712c asm("D_0036712c");
extern AnyCell DAT_00367130 asm("D_00367130");
extern AnyCell DAT_00367134 asm("D_00367134");
_GHIDRA_ANY(EI)
_GHIDRA_ANY(SYNC)
extern u32 REG_RCNT2_COUNT asm("D_10001000");
extern u32 REG_RCNT2_MODE asm("D_10001010");

// Ghidra decompile of 0x0030fc60, wrapped mechanically (ad/fallback.py)

undefined8 FUN_0030fc60_impl(undefined8 param_1,undefined8 param_2,undefined8 param_3) asm("func_0030fc60");
undefined8 FUN_0030fc60_impl(undefined8 param_1,undefined8 param_2,undefined8 param_3) {
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  uVar1 = REG_RCNT2_MODE;
  if (((uVar1 & 0x400) != 0) && (DAT_00367130 != (undefined4 *)0x0)) {
    puVar7 = DAT_00367130;
    do {
      uVar1 = REG_RCNT2_COUNT;
      uVar2 = REG_RCNT2_MODE;
      lVar6 = *(long *)(puVar7 + 8);
      lVar4 = *(long *)(puVar7 + 4);
      lVar5 = *(long *)(puVar7 + 6);
      if ((uVar2 & 0x800) != 0) {
        DAT_00367118 = DAT_00367118 + 1;
        FUN_0030f6a0(uVar2 & 0xfffffbff);
        uVar1 = REG_RCNT2_COUNT;
      }
      uVar8 = (DAT_00367118 << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2);
      if (uVar8 < (ulong)((lVar6 + lVar4) - lVar5)) break;
      puVar3 = (undefined4 *)FUN_0030fc28(puVar7);
      DAT_00367134 = (int)puVar7 << 4 | puVar7[2];
      uVar8 = (*(code *)puVar7[10])
                        ((int)puVar7 << 4 | puVar7[2],*(undefined8 *)(puVar7 + 8),
                         (uVar8 + *(long *)(puVar7 + 6)) - *(long *)(puVar7 + 4),puVar7[0xc],param_3
                        );
      if (uVar8 == 0) {
        puVar7[3] = puVar7[3] & 0xfffffffd;
      }
      else if (uVar8 == 0xffffffffffffffff) {
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = DAT_0036712c;
        DAT_00367128 = DAT_00367128 + -1;
        DAT_0036712c = puVar7;
      }
      else {
        if (uVar8 < 0x3999) {
          uVar8 = 0x3999;
        }
        *(ulong *)(puVar7 + 8) = *(long *)(puVar7 + 8) + uVar8;
        FUN_0030fba0(puVar7);
      }
      puVar7 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  DAT_00367134 = 0xffffffff;
  uVar1 = REG_RCNT2_COUNT;
  uVar2 = REG_RCNT2_MODE;
  if ((uVar2 & 0x800) != 0) {
    DAT_00367118 = DAT_00367118 + 1;
    FUN_0030f6a0(uVar2 & 0xfffffbff);
    uVar1 = REG_RCNT2_COUNT;
  }
  FUN_0030fa10((DAT_00367118 << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2));
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x800) != 0) {
    DAT_00367118 = DAT_00367118 + 1;
    FUN_0030f6a0(uVar1 & 0xfffffbff);
  }
  SYNC(0);
  EI();
  return 0;
}

