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

s32 FUN_00102448(...) asm("func_00102448");
s32 FUN_00102688(...) asm("func_00102688");
s32 FUN_00102c18(...) asm("func_00102c18");
s32 FUN_00104a48(...) asm("_ZN4AREA10InitThreadEP4TASK");
s32 FUN_001052a8(...) asm("func_001052a8");
s32 FUN_00105310(...) asm("func_00105310");
s32 FUN_00105370(...) asm("func_00105370");
s32 FUN_001053c0(...) asm("func_001053c0");
s32 FUN_00109140(...) asm("func_00109140");
s32 FUN_001366b8(...) asm("func_001366b8");
s32 FUN_00136878(...) asm("func_00136878");
s32 FUN_00136d40(...) asm("func_00136d40");
s32 FUN_00136fd0(...) asm("func_00136fd0");
s32 FUN_001382b8(...) asm("func_001382b8");
s32 FUN_0013a8f8(...) asm("func_0013a8f8");
s32 FUN_0013a9f8(...) asm("func_0013a9f8");
s32 FUN_0013ef80(...) asm("func_0013ef80");
s32 FUN_00149c08(...) asm("func_00149c08");
s32 FUN_00149ca0(...) asm("func_00149ca0");
s32 FUN_0014ce60(...) asm("func_0014ce60");
s32 FUN_00169030(...) asm("func_00169030");
s32 FUN_00169148(...) asm("func_00169148");
s32 FUN_00169178(...) asm("func_00169178");
s32 FUN_0016fa98(...) asm("func_0016fa98");
s32 FUN_00170888(...) asm("func_00170888");
s32 FUN_00182d80(...) asm("func_00182d80");
s32 FUN_0019ef70(...) asm("func_0019ef70");
s32 FUN_0019f070(...) asm("func_0019f070");
s32 FUN_001a84f0(...) asm("func_001a84f0");
s32 FUN_001a8510(...) asm("func_001a8510");
s32 FUN_001de7b0(...) asm("func_001de7b0");
s32 FUN_001de7d8(...) asm("func_001de7d8");
s32 FUN_001de910(...) asm("func_001de910");
s32 FUN_002283b0(...) asm("func_002283b0");
s32 FUN_002b9f28(...) asm("func_002b9f28");
extern u32 DAT_0032b96c asm("D_0032b96c");
extern u32 DAT_0032bae8 asm("D_0032bae8");
extern u32 DAT_0032bb1c asm("D_0032bb1c");
extern u32 DAT_0034ecd0 asm("D_0034ecd0");
extern u32 DAT_0034ecd4 asm("D_0034ecd4");
extern u32 DAT_003a7b00 asm("D_003a7b00");
extern u32 DAT_003a7b08 asm("D_003a7b08");
extern u32 DAT_003a7b10 asm("D_003a7b10");
extern u32 _DAT_0032bae0 asm("D_0032bae0");

// Ghidra decompile of 0x00104a48, wrapped mechanically (ad/fallback.py)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104a48_impl(undefined8 param_1) asm("_ZN4AREA10InitThreadEP4TASK");
void FUN_00104a48_impl(undefined8 param_1) {
  long lVar1;
  undefined8 uVar2;
  B4 auStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined4 uStack_60;
  
  uStack_74 = 0xffff;
  uStack_7c = 0xff;
  uStack_7b = 0xff;
  uStack_7a = 0xff;
  uStack_78 = 0xffff;
  uStack_76 = 0xffff;
  uStack_60 = 0;
  FUN_0019ef70(auStack_80);
  FUN_0014ce60();
  FUN_00109140();
  while( true ) {
    FUN_00169030(param_1);
    lVar1 = FUN_00105310(0x32bae0,auStack_80);
    if (lVar1 == 0) break;
    FUN_0016fa98(6,0x8c0000);
    FUN_00105370(0x380000,0x100000);
    FUN_001de7d8(DAT_0032bb1c,0x80000,0x20000);
    while (lVar1 = FUN_001a84f0(), lVar1 == 0) {
      uVar2 = FUN_001a8510(auStack_80);
      FUN_001382b8(uVar2);
      FUN_00102448(param_1,0);
    }
    DAT_003a7b08 = _DAT_0032bae0;
    DAT_003a7b10 = DAT_0032bae8;
    DAT_003a7b00 = 1;
    FUN_0019f070(auStack_80,0);
    FUN_00102448(param_1,0);
    DAT_003a7b00 = 0;
    FUN_00102688(DAT_0032b96c,8,8);
    FUN_001de910();
    FUN_001053c0();
    FUN_0016fa98(6,0xc0000);
    FUN_00182d80();
    FUN_001052a8(0x3a7b08);
  }
  FUN_00105370(DAT_0034ecd0 + DAT_0034ecd4,DAT_0034ecd4);
  FUN_0016fa98(6,0xc0000);
  uVar2 = FUN_002283b0();
  FUN_002b9f28(uVar2);
  FUN_00149ca0();
  FUN_001366b8(param_1);
  FUN_00136fd0();
  FUN_00169148(param_1);
  FUN_0013a8f8();
  FUN_00149c08();
  uVar2 = FUN_0013a9f8();
  FUN_001de7b0(uVar2);
  FUN_00169178();
  FUN_00170888(param_1);
  FUN_00136878();
  FUN_00136d40(param_1);
  while (lVar1 = FUN_0013ef80(), lVar1 == 0) {
    FUN_00102448(param_1,0);
  }
  FUN_00102c18(0,1000,0x104cc0);
  return;
}

