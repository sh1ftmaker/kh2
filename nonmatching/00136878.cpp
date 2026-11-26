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

s32 FUN_00136778(...) asm("func_00136778");
s32 FUN_00136840(...) asm("func_00136840");
s32 FUN_00136878(...) asm("func_00136878");
s32 FUN_001aec40(...) asm("func_001aec40");
s32 FUN_002bc288(...) asm("func_002bc288");
extern u32 DAT_00347d24 asm("D_00347d24");
extern u32 DAT_003b8b24 asm("D_003b8b24");
extern u32 DAT_003b8b26 asm("D_003b8b26");
extern u32 DAT_003b8b28 asm("D_003b8b28");
extern u32 DAT_003b8b38 asm("D_003b8b38");
extern u32 _DAT_003b8b20 asm("D_003b8b20");
extern u32 _DAT_003b8b28 asm("D_003b8b28");
extern u32 _DAT_003b8b30 asm("D_003b8b30");

// Ghidra decompile of 0x00136878, wrapped mechanically (ad/fallback.py)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00136878_impl(void) asm("func_00136878");
void FUN_00136878_impl(void) {
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = FUN_001aec40();
  puVar2 = (undefined8 *)lVar3;
  if (lVar3 != 0) {
    if (*(short *)(puVar2 + 1) == -1) {
      FUN_00136840();
    }
    else if (((*(short *)(puVar2 + 1) != DAT_003b8b28) ||
             (*(short *)((int)puVar2 + 4) != DAT_003b8b24)) ||
            (*(short *)((int)puVar2 + 6) != DAT_003b8b26)) {
      FUN_00136840();
      uVar1 = FUN_00136778(*(undefined2 *)((int)puVar2 + 6),*(undefined2 *)(puVar2 + 1));
      DAT_00347d24 = FUN_002bc288(uVar1,DAT_003b8b38);
    }
    _DAT_003b8b20 = *puVar2;
    _DAT_003b8b28 = puVar2[1];
    _DAT_003b8b30 = puVar2[2];
  }
  return;
}

