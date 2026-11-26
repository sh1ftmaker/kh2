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

s32 FUN_0022f8f0(...) asm("func_0022f8f0");
s32 FUN_0022f928(...) asm("func_0022f928");
s32 FUN_002fd188(...) asm("func_002fd188");
extern u32 DAT_00371224 asm("D_00371224");
extern u32 DAT_00371228 asm("D_00371228");
extern u32 DAT_0037122c asm("D_0037122c");
extern u32 DAT_00371230 asm("D_00371230");
extern u32 DAT_00371234 asm("D_00371234");
extern u32 DAT_00371238 asm("D_00371238");
extern u32 DAT_01dadb10 asm("D_01dadb10");
extern u32 DAT_01dadb20 asm("D_01dadb20");
extern u32 DAT_01dadb24 asm("D_01dadb24");
extern u32 DAT_01dadb28 asm("D_01dadb28");
extern u32 DAT_01dadb2c asm("D_01dadb2c");
extern u32 DAT_01dadb30 asm("D_01dadb30");
extern u32 DAT_01dadb34 asm("D_01dadb34");
extern u32 DAT_01dadb38 asm("D_01dadb38");
extern u32 DAT_01dadb3c asm("D_01dadb3c");
extern u32 DAT_01dadb40 asm("D_01dadb40");
extern u32 DAT_01dadb44 asm("D_01dadb44");
extern u32 DAT_01dadb48 asm("D_01dadb48");
extern u32 DAT_01dadb4c asm("D_01dadb4c");
extern u32 DAT_01dadb50 asm("D_01dadb50");
extern u32 DAT_01dadb54 asm("D_01dadb54");
extern u32 DAT_01dadb58 asm("D_01dadb58");
extern u32 DAT_01dadb5c asm("D_01dadb5c");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)

// Ghidra decompile of 0x0022f928, wrapped mechanically (ad/fallback.py)

void FUN_0022f928_impl(float param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6) asm("func_0022f928");
void FUN_0022f928_impl(float param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6) {
  B12 auVar1;
  undefined4 uVar2;
  Q16 auVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 auVar6;
  Q16 auVar7;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (DAT_01dadb10 == '\0') {
    uStack_70 = DAT_00371224;
    (*(u32*)((u8*)&uStack_88 + 0)) = (float)DAT_00371228;
    uStack_64 = 0;
    fStack_a0 = DAT_0037122c;
    (*(u32*)((u8*)&uStack_90 + 4)) = (float)DAT_00371234;
    (*(u32*)((u8*)&uStack_90 + 0)) = (float)DAT_00371230;
    fStack_9c = (float)DAT_00371228;
    fStack_98 = (float)DAT_00371224;
    (*(u32*)((u8*)&uStack_88 + 4)) = DAT_00371238;
    uStack_94 = DAT_00371224;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = DAT_00371224;
    uStack_74 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    DAT_01dadb20 = DAT_0037122c;
    DAT_01dadb24 = DAT_00371228;
    DAT_01dadb28 = DAT_00371224;
    DAT_01dadb2c = DAT_00371224;
    DAT_01dadb30 = DAT_00371230;
    DAT_01dadb34 = DAT_00371234;
    DAT_01dadb38 = DAT_00371228;
    DAT_01dadb3c = DAT_00371238;
    DAT_01dadb40 = 0;
    DAT_01dadb44 = 0;
    DAT_01dadb48 = DAT_00371224;
    DAT_01dadb4c = 0;
    DAT_01dadb50 = DAT_00371224;
    DAT_01dadb54 = 0;
    DAT_01dadb58 = 0;
    DAT_01dadb5c = 0;
    DAT_01dadb10 = '\x01';
    FUN_002fd188(0x230d68);
  }
  fStack_9c = param_1 * param_1;
  uStack_94 = DAT_00371224;
  fStack_a0 = fStack_9c * param_1;
  (*(u32*)((u8*)&auVar7 + 4)) = fStack_9c;
  (*(u32*)((u8*)&auVar7 + 0)) = fStack_a0;
  (*(u32*)((u8*)&auVar7 + 8)) = param_1;
  (*(u32*)((u8*)&auVar7 + 12)) = DAT_00371224;
  auVar7 = _lqc2(auVar7);
  (*(u32*)((u8*)&auVar3 + 4)) = DAT_01dadb24;
  (*(u32*)((u8*)&auVar3 + 0)) = DAT_01dadb20;
  (*(u32*)((u8*)&auVar3 + 8)) = DAT_01dadb28;
  (*(u32*)((u8*)&auVar3 + 12)) = DAT_01dadb2c;
  auVar3 = _lqc2(auVar3);
  (*(u32*)((u8*)&auVar4 + 4)) = DAT_01dadb34;
  (*(u32*)((u8*)&auVar4 + 0)) = DAT_01dadb30;
  (*(u32*)((u8*)&auVar4 + 8)) = DAT_01dadb38;
  (*(u32*)((u8*)&auVar4 + 12)) = DAT_01dadb3c;
  auVar4 = _lqc2(auVar4);
  (*(u32*)((u8*)&auVar5 + 4)) = DAT_01dadb44;
  (*(u32*)((u8*)&auVar5 + 0)) = DAT_01dadb40;
  (*(u32*)((u8*)&auVar5 + 8)) = DAT_01dadb48;
  (*(u32*)((u8*)&auVar5 + 12)) = DAT_01dadb4c;
  auVar5 = _lqc2(auVar5);
  (*(u32*)((u8*)&auVar6 + 4)) = DAT_01dadb54;
  (*(u32*)((u8*)&auVar6 + 0)) = DAT_01dadb50;
  (*(u32*)((u8*)&auVar6 + 8)) = DAT_01dadb58;
  (*(u32*)((u8*)&auVar6 + 12)) = DAT_01dadb5c;
  auVar6 = _lqc2(auVar6);
  _vmulabc(auVar3,auVar7);
  _vmaddabc(auVar4,auVar7);
  _vmaddabc(auVar5,auVar7);
  auVar3 = _vmaddbc(auVar6,auVar7);
  auVar3 = _sqc2(auVar3);
  if (&fStack_a0 == (float *)&uStack_90) {
    uStack_70 = param_3[2];
    fStack_98 = param_1;
  }
  else {
    (*(u32*)((u8*)&uStack_90 + 0)) = (*(u32*)((u8*)&auVar3 + 0));
    (*(u32*)((u8*)&uStack_90 + 4)) = (*(u32*)((u8*)&auVar3 + 4));
    (*(u32*)((u8*)&uStack_88 + 0)) = (*(u32*)((u8*)&auVar3 + 8));
    (*(u32*)((u8*)&uStack_88 + 4)) = (*(u32*)((u8*)&auVar3 + 12));
    fStack_a0 = (float)uStack_90;
    fStack_9c = (*(u32*)((u8*)&uStack_90 + 4));
    fStack_98 = (float)uStack_88;
    uStack_94 = (*(u32*)((u8*)&uStack_88 + 4));
    uStack_70 = param_3[2];
  }
  uStack_64 = param_6[2];
  uStack_80 = param_3[1];
  uStack_74 = param_6[1];
  uStack_6c = param_4[2];
  uStack_68 = param_5[2];
  uStack_7c = param_4[1];
  uStack_78 = param_5[1];
  uStack_88 = (*(u64*)((u8*)&auVar3 + 8));
  (*(u64*)((u8*)&auVar1 + 4)) = uStack_88;
  (*(u32*)((u8*)&auVar1 + 0)) = *param_4;
  uStack_90 = (*(u64*)((u8*)&auVar1 + 0)) << 0x20;
  (*(u32*)((u8*)&uStack_88 + 0)) = (float)*param_5;
  (*(u32*)((u8*)&uStack_88 + 4)) = *param_6;
  (*(u32*)((u8*)&uStack_90 + 0)) = (float)*param_3;
  uVar2 = FUN_0022f8f0(&fStack_a0,&uStack_90);
  *param_2 = uVar2;
  uVar2 = FUN_0022f8f0(&fStack_a0,&uStack_80);
  param_2[1] = uVar2;
  uVar2 = FUN_0022f8f0(&fStack_a0,&uStack_70);
  param_2[2] = uVar2;
  return;
}

