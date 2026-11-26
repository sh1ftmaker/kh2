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

s32 FUN_00106a60(...) asm("func_00106a60");
s32 FUN_00107330(...) asm("func_00107330");
s32 FUN_00107368(...) asm("func_00107368");
s32 FUN_001074b8(...) asm("func_001074b8");
s32 FUN_0011b6a8(...) asm("func_0011b6a8");
s32 FUN_002f1480(...) asm("_ZN2dk5Shake4calcEf");
s32 FUN_002f40a0(...) asm("func_002f40a0");
s32 FUN_002fea18(...) asm("func_002fea18");
extern u32 DAT_00349e10 asm("D_00349e10");
extern u32 DAT_00376248 asm("D_00376248");
extern u32 DAT_0037624c asm("D_0037624c");
extern u32 DAT_00376250 asm("D_00376250");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
#define _auStack_50 (*(AnyCell*)&auStack_50)

// Ghidra decompile of 0x002f1480, wrapped mechanically (ad/fallback.py)

bool FUN_002f1480_impl(float param_1,float *param_2) asm("_ZN2dk5Shake4calcEf");
bool FUN_002f1480_impl(float param_1,float *param_2) {
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Q16 auVar11;
  Q16 auVar12;
  Q16 auVar13;
  Q16 auVar14;
  Q16 auVar15;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  Q16 auStack_a0;
  Q16 auStack_90;
  Q16 auStack_80;
  Q16 auStack_70;
  Q16 auStack_60;
  B8 auStack_50;
  float fStack_48;
  float fStack_44;
  
  fVar1 = DAT_00376248;
  fVar10 = DAT_0037624c;
  iVar2 = FUN_002fea18();
  fVar5 = *param_2;
  fVar8 = fVar5 * fVar10;
  iVar3 = FUN_002fea18();
  fVar9 = ((float)iVar3 / fVar1) * param_2[1] - param_2[1] * fVar10;
  iVar3 = FUN_002fea18();
  fVar9 = fVar9 * param_1;
  fVar6 = param_2[2];
  uVar4 = FUN_00106a60(1);
  FUN_00107368(uVar4,auStack_60);
  uVar7 = FUN_001074b8(uVar4);
  uStack_a4 = DAT_00376250;
  fStack_b0 = (((float)iVar2 / fVar1) * fVar5 - fVar8) * param_1;
  fStack_ac = fVar9;
  fStack_a8 = (((float)iVar3 / fVar1) * fVar6 - fVar6 * fVar10) * param_1;
  FUN_0011b6a8(auStack_a0);
  FUN_002f40a0(uVar7,auStack_a0,auStack_a0);
  (*(u32*)((u8*)&auVar11 + 4)) = fStack_ac;
  (*(u32*)((u8*)&auVar11 + 0)) = fStack_b0;
  (*(u32*)((u8*)&auVar11 + 8)) = fStack_a8;
  (*(u32*)((u8*)&auVar11 + 12)) = uStack_a4;
  auVar15 = _lqc2(auVar11);
  auVar11 = _lqc2(auStack_a0);
  auVar12 = _lqc2(auStack_90);
  auVar13 = _lqc2(auStack_80);
  auVar14 = _lqc2(auStack_70);
  _vmulabc(auVar11,auVar15);
  _vmaddabc(auVar12,auVar15);
  _vmaddabc(auVar13,auVar15);
  auVar11 = _vmaddbc(auVar14,auVar15);
  auVar11 = _sqc2(auVar11);
  if (&fStack_b0 != (float *)auStack_50) {
    (*(u32*)((u8*)&auStack_50 + 0)) = (*(u32*)((u8*)&auVar11 + 0));
    (*(u32*)((u8*)&auStack_50 + 4)) = (*(u32*)((u8*)&auVar11 + 4));
    fStack_48 = (*(u32*)((u8*)&auVar11 + 8));
    fStack_44 = (*(u32*)((u8*)&auVar11 + 12));
    fStack_b0 = (float)(*(u32*)((u8*)&auStack_50 + 0));
    fStack_ac = (float)(*(u32*)((u8*)&auStack_50 + 4));
    fStack_a8 = fStack_48;
    uStack_a4 = fStack_44;
  }
  auVar11 = _lqc2(auStack_60);
  (*(u32*)((u8*)&auVar12 + 4)) = fStack_ac;
  (*(u32*)((u8*)&auVar12 + 0)) = fStack_b0;
  (*(u32*)((u8*)&auVar12 + 8)) = fStack_a8;
  (*(u32*)((u8*)&auVar12 + 12)) = uStack_a4;
  auVar12 = _lqc2(auVar12);
  auVar11 = _vadd(auVar11,auVar12);
  _auStack_50 = _sqc2(auVar11);
  if (param_2 + 8 == (float *)auStack_50) {
    fVar8 = param_2[8];
  }
  else {
    param_2[8] = (float)(*(u32*)((u8*)&auStack_50 + 0));
    param_2[9] = (float)(*(u32*)((u8*)&auStack_50 + 4));
    param_2[10] = fStack_48;
    param_2[0xb] = fStack_44;
    fVar8 = param_2[8];
  }
  FUN_00107330(fVar8,param_2[9],param_2[10],uVar4);
  fVar8 = param_2[5] + DAT_00349e10;
  param_2[5] = fVar8;
  return fVar8 < param_2[4];
}

