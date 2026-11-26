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

s32 FUN_002fde18(...) asm("func_002fde18");
s32 FUN_00317d80(...) asm("func_00317d80");
s32 FUN_00317ee8(...) asm("func_00317ee8");

// Ghidra decompile of 0x00317ee8, wrapped mechanically (ad/fallback.py)

undefined8 FUN_00317ee8_impl(int param_1,undefined8 param_2) asm("func_00317ee8");
undefined8 FUN_00317ee8_impl(int param_1,undefined8 param_2) {
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined1 auStack_e60 [712];
  int iStack_b98;
  undefined8 uStack_b80;
  undefined1 auStack_b70 [2840];
  undefined8 uStack_58;
  undefined2 uStack_50;
  int iStack_44;
  byte bStack_28;
  undefined4 uStack_24;
  
  puVar5 = auStack_e60;
  FUN_002fde18(auStack_e60,0,0x2e8);
  iStack_b98 = param_1 + 1;
  lVar2 = FUN_00317d80(auStack_e60,auStack_b70);
  uVar4 = 0;
  if (lVar2 == 0) {
    iVar8 = (int)param_2;
    puVar6 = (undefined8 *)(iVar8 + 0x18);
    if (iStack_44 != 2) {
      pcVar7 = (char *)(iVar8 + 0x5a4);
      iVar3 = 0xb0;
      do {
        cVar1 = puVar5[0x2f8];
        *pcVar7 = cVar1;
        if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
          *puVar6 = *(undefined8 *)(puVar5 + 0x2f0);
        }
        else {
          *puVar6 = 0;
        }
        puVar6 = puVar6 + 1;
        pcVar7 = pcVar7 + 1;
        iVar3 = iVar3 + -1;
        puVar5 = puVar5 + 0x10;
      } while (-1 < iVar3);
      *(undefined2 *)(iVar8 + 0x5a0) = uStack_50;
      *(undefined8 *)(iVar8 + 8) = uStack_58;
      *(ushort *)(iVar8 + 0x5a2) = (ushort)bStack_28;
      *(undefined8 *)(iVar8 + 0x10) = uStack_b80;
      *(undefined4 *)(iVar8 + 4) = uStack_24;
      uVar4 = param_2;
    }
  }
  return uVar4;
}

