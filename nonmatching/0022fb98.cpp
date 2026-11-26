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
s32 FUN_0022fb98(...) asm("func_0022fb98");
s32 FUN_002fd188(...) asm("func_002fd188");
extern u32 DAT_0037123c asm("D_0037123c");
extern u32 DAT_00371240 asm("D_00371240");
extern u32 DAT_00371244 asm("D_00371244");
extern u32 DAT_00371248 asm("D_00371248");
extern u32 DAT_0037124c asm("D_0037124c");
extern u32 DAT_00371250 asm("D_00371250");
extern u32 DAT_00371254 asm("D_00371254");
extern u32 DAT_01dadb60 asm("D_01dadb60");
extern u32 DAT_01dadb70 asm("D_01dadb70");
extern u32 DAT_01dadb74 asm("D_01dadb74");
extern u32 DAT_01dadb78 asm("D_01dadb78");
extern u32 DAT_01dadb7c asm("D_01dadb7c");
extern u32 DAT_01dadb80 asm("D_01dadb80");
extern u32 DAT_01dadb84 asm("D_01dadb84");
extern u32 DAT_01dadb88 asm("D_01dadb88");
extern u32 DAT_01dadb8c asm("D_01dadb8c");
extern u32 DAT_01dadb90 asm("D_01dadb90");
extern u32 DAT_01dadb94 asm("D_01dadb94");
extern u32 DAT_01dadb98 asm("D_01dadb98");
extern u32 DAT_01dadb9c asm("D_01dadb9c");
extern u32 DAT_01dadba0 asm("D_01dadba0");
extern u32 DAT_01dadba4 asm("D_01dadba4");
extern u32 DAT_01dadba8 asm("D_01dadba8");
extern u32 DAT_01dadbac asm("D_01dadbac");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
#define _auStack_90 (*(AnyCell*)&auStack_90)

// Ghidra decompile of 0x0022fb98, wrapped mechanically (ad/fallback.py)

void FUN_0022fb98_impl(float param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6) asm("func_0022fb98");
void FUN_0022fb98_impl(float param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6) {
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
  B4 auStack_90;
  B4 auStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (DAT_01dadb60 == '\0') {
    uStack_78 = DAT_0037123c;
    uStack_68 = DAT_00371240;
    uStack_64 = 0;
    uStack_80 = DAT_00371244;
    fStack_a0 = DAT_00371248;
    fStack_9c = (float)DAT_0037123c;
    auStack_8c = (B4)DAT_0037124c;
    uStack_6c = DAT_00371250;
    fStack_98 = (float)DAT_00371244;
    uStack_94 = DAT_00371240;
    auStack_90 = (B4)DAT_0037123c;
    (*(u32*)((u8*)&uStack_88 + 0)) = (float)DAT_0037123c;
    (*(u32*)((u8*)&uStack_88 + 4)) = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    uStack_70 = DAT_00371240;
    DAT_01dadb70 = DAT_00371248;
    DAT_01dadb74 = DAT_0037123c;
    DAT_01dadb78 = DAT_00371244;
    DAT_01dadb7c = DAT_00371240;
    DAT_01dadb80 = DAT_0037123c;
    DAT_01dadb84 = DAT_0037124c;
    DAT_01dadb88 = DAT_0037123c;
    DAT_01dadb8c = 0;
    DAT_01dadb90 = DAT_00371244;
    DAT_01dadb94 = 0;
    DAT_01dadb98 = DAT_0037123c;
    DAT_01dadb9c = 0;
    DAT_01dadba0 = DAT_00371240;
    DAT_01dadba4 = DAT_00371250;
    DAT_01dadba8 = DAT_00371240;
    DAT_01dadbac = 0;
    DAT_01dadb60 = '\x01';
    FUN_002fd188(0x230d70);
  }
  fStack_9c = param_1 * param_1;
  uStack_94 = DAT_00371254;
  fStack_a0 = fStack_9c * param_1;
  (*(u32*)((u8*)&auVar7 + 4)) = fStack_9c;
  (*(u32*)((u8*)&auVar7 + 0)) = fStack_a0;
  (*(u32*)((u8*)&auVar7 + 8)) = param_1;
  (*(u32*)((u8*)&auVar7 + 12)) = DAT_00371254;
  auVar7 = _lqc2(auVar7);
  (*(u32*)((u8*)&auVar3 + 4)) = DAT_01dadb74;
  (*(u32*)((u8*)&auVar3 + 0)) = DAT_01dadb70;
  (*(u32*)((u8*)&auVar3 + 8)) = DAT_01dadb78;
  (*(u32*)((u8*)&auVar3 + 12)) = DAT_01dadb7c;
  auVar3 = _lqc2(auVar3);
  (*(u32*)((u8*)&auVar4 + 4)) = DAT_01dadb84;
  (*(u32*)((u8*)&auVar4 + 0)) = DAT_01dadb80;
  (*(u32*)((u8*)&auVar4 + 8)) = DAT_01dadb88;
  (*(u32*)((u8*)&auVar4 + 12)) = DAT_01dadb8c;
  auVar4 = _lqc2(auVar4);
  (*(u32*)((u8*)&auVar5 + 4)) = DAT_01dadb94;
  (*(u32*)((u8*)&auVar5 + 0)) = DAT_01dadb90;
  (*(u32*)((u8*)&auVar5 + 8)) = DAT_01dadb98;
  (*(u32*)((u8*)&auVar5 + 12)) = DAT_01dadb9c;
  auVar5 = _lqc2(auVar5);
  (*(u32*)((u8*)&auVar6 + 4)) = DAT_01dadba4;
  (*(u32*)((u8*)&auVar6 + 0)) = DAT_01dadba0;
  (*(u32*)((u8*)&auVar6 + 8)) = DAT_01dadba8;
  (*(u32*)((u8*)&auVar6 + 12)) = DAT_01dadbac;
  auVar6 = _lqc2(auVar6);
  _vmulabc(auVar3,auVar7);
  _vmaddabc(auVar4,auVar7);
  _vmaddabc(auVar5,auVar7);
  auVar3 = _vmaddbc(auVar6,auVar7);
  auVar3 = _sqc2(auVar3);
  if (&fStack_a0 == (float *)auStack_90) {
    uStack_70 = param_3[2];
    fStack_98 = param_1;
  }
  else {
    auStack_90 = (*(u32*)((u8*)&auVar3 + 0));
    auStack_8c = (*(u32*)((u8*)&auVar3 + 4));
    (*(u32*)((u8*)&uStack_88 + 0)) = (*(u32*)((u8*)&auVar3 + 8));
    (*(u32*)((u8*)&uStack_88 + 4)) = (*(u32*)((u8*)&auVar3 + 12));
    fStack_a0 = (float)auStack_90;
    fStack_9c = (float)auStack_8c;
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
  _auStack_90 = (*(u64*)((u8*)&auVar1 + 0)) << 0x20;
  (*(u32*)((u8*)&uStack_88 + 0)) = (float)*param_5;
  (*(u32*)((u8*)&uStack_88 + 4)) = *param_6;
  auStack_90 = (B4)*param_3;
  uVar2 = FUN_0022f8f0(&fStack_a0,auStack_90);
  *param_2 = uVar2;
  uVar2 = FUN_0022f8f0(&fStack_a0,&uStack_80);
  param_2[1] = uVar2;
  uVar2 = FUN_0022f8f0(&fStack_a0,&uStack_70);
  param_2[2] = uVar2;
  return;
}

