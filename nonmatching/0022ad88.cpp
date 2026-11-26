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

s32 FUN_002249b8(...) asm("func_002249b8");
s32 FUN_002294c8(...) asm("func_002294c8");
s32 FUN_00229678(...) asm("func_00229678");
s32 FUN_0022ad88(...) asm("_ZN2sa13MUSICAL_INPUT10scorePrintEiPN2dk6SpriteE");
s32 FUN_00239700(...) asm("func_00239700");
s32 FUN_0031a838(...) asm("func_0031a838");
extern u32 DAT_00347f80 asm("D_00347f80");
extern undefined *PTR_FUN_0035e190 asm("D_0035e190");
extern undefined *PTR_LAB_00347e60 asm("D_00347e60");
extern undefined *PTR_LAB_00347f98 asm("D_00347f98");

// Ghidra decompile of 0x0022ad88, wrapped mechanically (ad/fallback.py)

void FUN_0022ad88_impl(long param_1,undefined8 param_2) asm("_ZN2sa13MUSICAL_INPUT10scorePrintEiPN2dk6SpriteE");
void FUN_0022ad88_impl(long param_1,undefined8 param_2) {
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 auStack_50 [4];
  
  if ((0 < param_1) && (lVar2 = FUN_002249b8(), lVar2 == 5)) {
    auStack_50[0] = (undefined4)param_1;
    iVar4 = 6;
    uVar3 = (**(code **)**(undefined4 **)(DAT_00347f80 + 0x14))
                      (*(undefined4 **)(DAT_00347f80 + 0x14),0xb54,0);
    puVar1 = (undefined4 *)uVar3;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_0035e190;
    puVar1 = puVar1 + 6;
    do {
      *puVar1 = &PTR_LAB_00347f98;
      iVar4 = iVar4 + -1;
      FUN_0031a838(puVar1 + 3);
      *puVar1 = &PTR_LAB_00347e60;
      FUN_00239700(puVar1 + 6);
      puVar1 = puVar1 + 0x66;
    } while (iVar4 != -1);
    FUN_002294c8(uVar3,6,auStack_50,0x35e1f8);
    FUN_00229678(uVar3,param_2,auStack_50[0]);
  }
  return;
}

