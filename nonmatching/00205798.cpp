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

s32 FUN_00205798(...) asm("func_00205798");
extern u32 DAT_00359a20 asm("D_00359a20");
extern u32 DAT_00370504 asm("D_00370504");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vmulbc)

// Ghidra decompile of 0x00205798, wrapped mechanically (ad/fallback.py)

void FUN_00205798_impl(undefined8 param_1,int param_2,Q16 *param_3,int param_4, Q16 *param_5,Q16 *param_6,Q16 *param_7) asm("func_00205798");
void FUN_00205798_impl(undefined8 param_1,int param_2,Q16 *param_3,int param_4, Q16 *param_5,Q16 *param_6,Q16 *param_7) {
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 auVar6;
  Q16 auVar7;
  Q16 auVar8;
  Q16 auVar9;
  Q16 auVar10;
  Q16 auVar11;
  Q16 auVar12;
  Q16 auVar13;
  Q16 auVar14;
  Q16 auVar15;
  Q16 auVar16;
  Q16 auVar17;
  Q16 auVar18;
  Q16 auVar19;
  Q16 auVar20;
  Q16 auVar21;
  Q16 auVar22;
  Q16 auVar23;
  
  *(undefined4 *)param_3[3] = 0;
  *(undefined4 *)(param_3[3] + 4) = 0;
  *(undefined4 *)(param_3[3] + 8) = 0;
  *(undefined4 *)(param_3[3] + 0xc) = 0;
  *(undefined4 *)param_3[2] = 0;
  *(undefined4 *)(param_3[2] + 4) = 0;
  *(undefined4 *)(param_3[2] + 8) = 0;
  *(undefined4 *)(param_3[2] + 0xc) = 0;
  *(undefined4 *)param_3[1] = 0;
  *(undefined4 *)(param_3[1] + 4) = 0;
  *(undefined4 *)(param_3[1] + 8) = 0;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  *(undefined4 *)*param_3 = 0;
  *(undefined4 *)(*param_3 + 4) = 0;
  *(undefined4 *)(*param_3 + 8) = 0;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  fVar3 = DAT_00370504;
  *(float *)(param_2 + 0x1c0) = *(float *)(param_6[3] + 4) * *(float *)(param_2 + 0x1b0);
  *(float *)(param_2 + 0x1c8) = *(float *)(param_6[3] + 8) * *(float *)(param_2 + 0x1b4);
  if (*(float *)(param_6[5] + 8) < fVar3) {
    auVar10 = _qmtc2(*(float *)(param_6[5] + 8));
    auVar13 = _lqc2(*(Q16 *)(param_2 + 0x1c0));
    auVar10 = _vmulbc(auVar13,auVar10);
    auVar10 = _sqc2(auVar10);
    *(Q16 *)(param_2 + 0x1c0) = auVar10;
  }
  *(float *)(param_3[3] + 0xc) = fVar3;
  *(undefined4 *)*param_3 = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_3[2] + 8) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_3[1] + 4) = *(undefined4 *)(param_2 + 0x1c8);
  if ((float)(int)*(short *)(param_6[2] + 0xe) != 0.0) {
    fVar3 = *(float *)(&DAT_00359a20 + ((uint)(int)*(short *)(param_6[2] + 0xe) >> 2 & 0x3ffc));
    *(float *)(param_2 + 0x144) = fVar3;
    uVar2 = *(undefined4 *)
             (&DAT_00359a20 + ((int)*(short *)(param_6[2] + 0xe) + 0x4000U >> 2 & 0x3ffc));
    *(float *)(param_2 + 0x150) = -fVar3;
    *(undefined4 *)(param_2 + 0x140) = uVar2;
    *(undefined4 *)(param_2 + 0x15c) = 0;
    *(undefined4 *)(param_2 + 0x154) = uVar2;
    *(undefined4 *)(param_2 + 0x148) = 0;
    *(undefined4 *)(param_2 + 0x14c) = 0;
    *(undefined4 *)(param_2 + 0x158) = 0;
    auVar10 = _lqc2(*(Q16 *)(param_2 + 0x140));
    auVar13 = _lqc2(*(Q16 *)(param_2 + 0x150));
    _lqc2(*(Q16 *)(param_2 + 0x160));
    _lqc2(*(Q16 *)(param_2 + 0x170));
    auVar4 = _lqc2(*param_3);
    auVar8 = _lqc2(param_3[1]);
    auVar5 = _lqc2(param_3[2]);
    auVar6 = _lqc2(param_3[3]);
    _vmulabc(auVar4,auVar10);
    auVar10 = _vmaddbc(auVar8,auVar10);
    _vmulabc(auVar4,auVar13);
    auVar13 = _vmaddbc(auVar8,auVar13);
    auVar10 = _sqc2(auVar10);
    *param_3 = auVar10;
    auVar10 = _sqc2(auVar13);
    param_3[1] = auVar10;
    auVar10 = _sqc2(auVar5);
    param_3[2] = auVar10;
    auVar10 = _sqc2(auVar6);
    param_3[3] = auVar10;
  }
  auVar10 = _lqc2(param_3[3]);
  auVar13 = _lqc2(*param_6);
  auVar10 = _vadd(auVar10,auVar13);
  auVar10 = _sqc2(auVar10);
  param_3[3] = auVar10;
  bVar1 = *(byte *)(param_4 + 0xcc);
  if (bVar1 == 1) {
    auVar10 = _lqc2(*param_3);
    auVar13 = _lqc2(param_3[1]);
    auVar4 = _lqc2(param_3[2]);
    auVar8 = _lqc2(param_3[3]);
    auVar9 = _lqc2(*param_7);
    auVar12 = _lqc2(param_7[1]);
    auVar14 = _lqc2(param_7[2]);
    auVar15 = _lqc2(param_7[3]);
    auVar16 = _lqc2(*(Q16 *)(param_2 + 0x80));
    auVar17 = _lqc2(*(Q16 *)(param_2 + 0x90));
    auVar18 = _lqc2(*(Q16 *)(param_2 + 0xa0));
    auVar19 = _lqc2(*(Q16 *)(param_2 + 0xb0));
    auVar20 = _lqc2(*(Q16 *)(param_2 + 0x100));
    auVar21 = _lqc2(*(Q16 *)(param_2 + 0x110));
    auVar22 = _lqc2(*(Q16 *)(param_2 + 0x120));
    auVar23 = _lqc2(*(Q16 *)(param_2 + 0x130));
    auVar5 = _lqc2(*(Q16 *)(param_2 + 0xc0));
    auVar6 = _lqc2(*(Q16 *)(param_2 + 0xd0));
    auVar7 = _lqc2(*(Q16 *)(param_2 + 0xe0));
    auVar11 = _lqc2(*(Q16 *)(param_2 + 0xf0));
    _vmulabc(auVar9,auVar20);
    _vmaddabc(auVar12,auVar20);
    _vmaddabc(auVar14,auVar20);
    auVar20 = _vmaddbc(auVar15,auVar20);
    _vmulabc(auVar9,auVar21);
    _vmaddabc(auVar12,auVar21);
    _vmaddabc(auVar14,auVar21);
    auVar21 = _vmaddbc(auVar15,auVar21);
    _vmulabc(auVar9,auVar22);
    _vmaddabc(auVar12,auVar22);
    _vmaddabc(auVar14,auVar22);
    auVar22 = _vmaddbc(auVar15,auVar22);
    _vmulabc(auVar9,auVar23);
    _vmaddabc(auVar12,auVar23);
    _vmaddabc(auVar14,auVar23);
    auVar15 = _vmaddbc(auVar15,auVar23);
    _vmulabc(auVar16,auVar20);
    _vmaddabc(auVar17,auVar20);
    _vmaddabc(auVar18,auVar20);
    auVar9 = _vmaddbc(auVar19,auVar20);
    _vmulabc(auVar16,auVar21);
    _vmaddabc(auVar17,auVar21);
    _vmaddabc(auVar18,auVar21);
    auVar12 = _vmaddbc(auVar19,auVar21);
    _vmulabc(auVar16,auVar22);
    _vmaddabc(auVar17,auVar22);
    _vmaddabc(auVar18,auVar22);
    auVar14 = _vmaddbc(auVar19,auVar22);
    _vmulabc(auVar16,auVar15);
    _vmaddabc(auVar17,auVar15);
    _vmaddabc(auVar18,auVar15);
    auVar15 = _vmaddbc(auVar19,auVar15);
    _vmulabc(auVar9,auVar8);
    _vmaddabc(auVar12,auVar8);
    _vmaddabc(auVar14,auVar8);
    auVar8 = _vmaddbc(auVar15,auVar8);
    _vmulabc(auVar5,auVar10);
    _vmaddabc(auVar6,auVar10);
    _vmaddabc(auVar7,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    _vmulabc(auVar5,auVar13);
    _vmaddabc(auVar6,auVar13);
    _vmaddabc(auVar7,auVar13);
    auVar13 = _vmaddbc(auVar11,auVar13);
    _vmulabc(auVar5,auVar4);
    _vmaddabc(auVar6,auVar4);
    _vmaddabc(auVar7,auVar4);
    auVar4 = _vmaddbc(auVar11,auVar4);
    _vmulabc(auVar5,auVar8);
    _vmaddabc(auVar6,auVar8);
    _vmaddabc(auVar7,auVar8);
    auVar8 = _vmaddbc(auVar11,auVar8);
    auVar10 = _sqc2(auVar10);
    *param_3 = auVar10;
    auVar10 = _sqc2(auVar13);
    param_3[1] = auVar10;
    auVar10 = _sqc2(auVar4);
    param_3[2] = auVar10;
    auVar10 = _sqc2(auVar8);
    param_3[3] = auVar10;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      auVar10 = _lqc2(*param_3);
      auVar13 = _lqc2(param_3[1]);
      auVar4 = _lqc2(param_3[2]);
      auVar8 = _lqc2(param_3[3]);
      auVar9 = _lqc2(*(Q16 *)(param_2 + 0x40));
      auVar12 = _lqc2(*(Q16 *)(param_2 + 0x50));
      auVar14 = _lqc2(*(Q16 *)(param_2 + 0x60));
      auVar15 = _lqc2(*(Q16 *)(param_2 + 0x70));
      auVar5 = _lqc2(*(Q16 *)(param_2 + 0xc0));
      auVar6 = _lqc2(*(Q16 *)(param_2 + 0xd0));
      auVar7 = _lqc2(*(Q16 *)(param_2 + 0xe0));
      auVar11 = _lqc2(*(Q16 *)(param_2 + 0xf0));
      _vmulabc(auVar9,auVar8);
      _vmaddabc(auVar12,auVar8);
      _vmaddabc(auVar14,auVar8);
      auVar8 = _vmaddbc(auVar15,auVar8);
      _vmulabc(auVar5,auVar10);
      _vmaddabc(auVar6,auVar10);
      _vmaddabc(auVar7,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      _vmulabc(auVar5,auVar13);
      _vmaddabc(auVar6,auVar13);
      _vmaddabc(auVar7,auVar13);
      auVar13 = _vmaddbc(auVar11,auVar13);
      _vmulabc(auVar5,auVar4);
      _vmaddabc(auVar6,auVar4);
      _vmaddabc(auVar7,auVar4);
      auVar4 = _vmaddbc(auVar11,auVar4);
      _vmulabc(auVar5,auVar8);
      _vmaddabc(auVar6,auVar8);
      _vmaddabc(auVar7,auVar8);
      auVar8 = _vmaddbc(auVar11,auVar8);
      auVar10 = _sqc2(auVar10);
      *param_3 = auVar10;
      auVar10 = _sqc2(auVar13);
      param_3[1] = auVar10;
      auVar10 = _sqc2(auVar4);
      param_3[2] = auVar10;
      auVar10 = _sqc2(auVar8);
      param_3[3] = auVar10;
    }
  }
  else {
    if (bVar1 == 2) {
      auVar10 = _lqc2(*param_3);
      auVar13 = _lqc2(param_3[1]);
      auVar4 = _lqc2(param_3[2]);
      auVar8 = _lqc2(param_3[3]);
      auVar9 = _lqc2(*param_7);
      auVar12 = _lqc2(param_7[1]);
      auVar14 = _lqc2(param_7[2]);
      auVar15 = _lqc2(param_7[3]);
      auVar16 = _lqc2(*(Q16 *)(param_2 + 0x80));
      auVar17 = _lqc2(*(Q16 *)(param_2 + 0x90));
      auVar18 = _lqc2(*(Q16 *)(param_2 + 0xa0));
      auVar19 = _lqc2(*(Q16 *)(param_2 + 0xb0));
      auVar20 = _lqc2(*param_5);
      auVar21 = _lqc2(param_5[1]);
      auVar22 = _lqc2(param_5[2]);
      auVar23 = _lqc2(param_5[3]);
      auVar5 = _lqc2(*(Q16 *)(param_2 + 0xc0));
      auVar6 = _lqc2(*(Q16 *)(param_2 + 0xd0));
      auVar7 = _lqc2(*(Q16 *)(param_2 + 0xe0));
      auVar11 = _lqc2(*(Q16 *)(param_2 + 0xf0));
      _vmulabc(auVar20,auVar9);
      _vmaddabc(auVar21,auVar9);
      _vmaddabc(auVar22,auVar9);
      auVar9 = _vmaddbc(auVar23,auVar9);
      _vmulabc(auVar20,auVar12);
      _vmaddabc(auVar21,auVar12);
      _vmaddabc(auVar22,auVar12);
      auVar12 = _vmaddbc(auVar23,auVar12);
      _vmulabc(auVar20,auVar14);
      _vmaddabc(auVar21,auVar14);
      _vmaddabc(auVar22,auVar14);
      auVar14 = _vmaddbc(auVar23,auVar14);
      _vmulabc(auVar20,auVar15);
      _vmaddabc(auVar21,auVar15);
      _vmaddabc(auVar22,auVar15);
      auVar15 = _vmaddbc(auVar23,auVar15);
      _vmulabc(auVar16,auVar9);
      _vmaddabc(auVar17,auVar9);
      _vmaddabc(auVar18,auVar9);
      auVar9 = _vmaddbc(auVar19,auVar9);
      _vmulabc(auVar16,auVar12);
      _vmaddabc(auVar17,auVar12);
      _vmaddabc(auVar18,auVar12);
      auVar12 = _vmaddbc(auVar19,auVar12);
      _vmulabc(auVar16,auVar14);
      _vmaddabc(auVar17,auVar14);
      _vmaddabc(auVar18,auVar14);
      auVar14 = _vmaddbc(auVar19,auVar14);
      _vmulabc(auVar16,auVar15);
      _vmaddabc(auVar17,auVar15);
      _vmaddabc(auVar18,auVar15);
      auVar15 = _vmaddbc(auVar19,auVar15);
      _vmulabc(auVar9,auVar8);
      _vmaddabc(auVar12,auVar8);
      _vmaddabc(auVar14,auVar8);
      auVar8 = _vmaddbc(auVar15,auVar8);
      _vmulabc(auVar5,auVar10);
      _vmaddabc(auVar6,auVar10);
      _vmaddabc(auVar7,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      _vmulabc(auVar5,auVar13);
      _vmaddabc(auVar6,auVar13);
      _vmaddabc(auVar7,auVar13);
      auVar13 = _vmaddbc(auVar11,auVar13);
      _vmulabc(auVar5,auVar4);
      _vmaddabc(auVar6,auVar4);
      _vmaddabc(auVar7,auVar4);
      auVar4 = _vmaddbc(auVar11,auVar4);
      _vmulabc(auVar5,auVar8);
      _vmaddabc(auVar6,auVar8);
      _vmaddabc(auVar7,auVar8);
      auVar8 = _vmaddbc(auVar11,auVar8);
      auVar10 = _sqc2(auVar10);
      *param_3 = auVar10;
      auVar10 = _sqc2(auVar13);
      param_3[1] = auVar10;
      auVar10 = _sqc2(auVar4);
      param_3[2] = auVar10;
      auVar10 = _sqc2(auVar8);
      param_3[3] = auVar10;
      return;
    }
    if (bVar1 == 3) {
      auVar8 = _lqc2(*param_7);
      auVar11 = _lqc2(param_7[1]);
      auVar14 = _lqc2(param_7[2]);
      auVar15 = _lqc2(param_7[3]);
      auVar16 = _lqc2(*(Q16 *)(param_2 + 0x80));
      auVar17 = _lqc2(*(Q16 *)(param_2 + 0x90));
      auVar18 = _lqc2(*(Q16 *)(param_2 + 0xa0));
      auVar19 = _lqc2(*(Q16 *)(param_2 + 0xb0));
      _vmulabc(auVar16,auVar8);
      auVar10 = _lqc2(*param_3);
      _vmaddabc(auVar17,auVar8);
      auVar13 = _lqc2(param_3[1]);
      _vmaddabc(auVar18,auVar8);
      auVar4 = _lqc2(param_3[2]);
      auVar9 = _vmaddbc(auVar19,auVar8);
      auVar8 = _lqc2(param_3[3]);
      _vmulabc(auVar16,auVar11);
      auVar5 = _lqc2(*(Q16 *)(param_2 + 0xc0));
      _vmaddabc(auVar17,auVar11);
      auVar6 = _lqc2(*(Q16 *)(param_2 + 0xd0));
      _vmaddabc(auVar18,auVar11);
      auVar7 = _lqc2(*(Q16 *)(param_2 + 0xe0));
      auVar12 = _vmaddbc(auVar19,auVar11);
      auVar11 = _lqc2(*(Q16 *)(param_2 + 0xf0));
      _vmulabc(auVar16,auVar14);
      _vmaddabc(auVar17,auVar14);
      _vmaddabc(auVar18,auVar14);
      auVar14 = _vmaddbc(auVar19,auVar14);
      _vmulabc(auVar16,auVar15);
      _vmaddabc(auVar17,auVar15);
      _vmaddabc(auVar18,auVar15);
      auVar15 = _vmaddbc(auVar19,auVar15);
      _vmulabc(auVar9,auVar8);
      _vmaddabc(auVar12,auVar8);
      _vmaddabc(auVar14,auVar8);
      auVar8 = _vmaddbc(auVar15,auVar8);
      _vmulabc(auVar5,auVar10);
      _vmaddabc(auVar6,auVar10);
      _vmaddabc(auVar7,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      _vmulabc(auVar5,auVar13);
      auVar10 = _sqc2(auVar10);
      *param_3 = auVar10;
      _vmaddabc(auVar6,auVar13);
      _vmaddabc(auVar7,auVar13);
      auVar10 = _vmaddbc(auVar11,auVar13);
      _vmulabc(auVar5,auVar4);
      auVar10 = _sqc2(auVar10);
      param_3[1] = auVar10;
      _vmaddabc(auVar6,auVar4);
      _vmaddabc(auVar7,auVar4);
      auVar10 = _vmaddbc(auVar11,auVar4);
      _vmulabc(auVar5,auVar8);
      auVar10 = _sqc2(auVar10);
      param_3[2] = auVar10;
      _vmaddabc(auVar6,auVar8);
      _vmaddabc(auVar7,auVar8);
      auVar10 = _vmaddbc(auVar11,auVar8);
      auVar10 = _sqc2(auVar10);
      param_3[3] = auVar10;
      return;
    }
  }
  return;
}

