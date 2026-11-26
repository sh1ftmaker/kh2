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

s32 FUN_0016bc20(...) asm("func_0016bc20");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_0018a550(...) asm("func_0018a550");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_001b9bc8(...) asm("func_001b9bc8");
s32 FUN_002cf270(...) asm("func_002cf270");
s32 FUN_002cf280(...) asm("func_002cf280");
s32 FUN_002d8d68(...) asm("_ZN2Ti12MGHachimitsu15check_collisionEPN2YS3OBJERKN2kn7FMatrixES7_");
s32 FUN_002e42d8(...) asm("func_002e42d8");
s32 FUN_002e44b8(...) asm("func_002e44b8");
s32 FUN_002e4588(...) asm("func_002e4588");
s32 FUN_002e47a8(...) asm("func_002e47a8");
extern u32 DAT_00375c90 asm("D_00375c90");
extern u32 DAT_00375c94 asm("D_00375c94");
extern u32 DAT_00375c98 asm("D_00375c98");
extern u32 LAB_002d9094 asm("D_002d9094");
_GHIDRA_ANY(CONCAT71)
_GHIDRA_ANY(SUB168)
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_pextlw)
_GHIDRA_ANY(_pextuw)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vmulbc)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)
#define _auStack_b0 (*(AnyCell*)&auStack_b0)

// Ghidra decompile of 0x002d8d68, wrapped mechanically (ad/fallback.py)

int FUN_002d8d68_impl(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4) asm("_ZN2Ti12MGHachimitsu15check_collisionEPN2YS3OBJERKN2kn7FMatrixES7_");
int FUN_002d8d68_impl(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4) {
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Q16 *pauVar11;
  Q16 *pauVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 in_vc6;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar22;
  Q16 auVar23;
  Q16 auVar24;
  Q16 auVar25;
  Q16 auVar26;
  Q16 auVar27;
  Q16 auVar28;
  Q16 auVar29;
  Q16 auStack_2a0;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  Q16 auStack_280;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 auStack_260 [64];
  undefined4 auStack_220 [15];
  undefined4 auStack_1e4 [49];
  Q16 auStack_120;
  Q16 auStack_110;
  Q16 auStack_100;
  Q16 auStack_f0;
  Q16 auStack_e0;
  Q16 auStack_d0;
  Q16 auStack_c0;
  B8 auStack_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  Q16 auStack_a0;
  B12 auStack_90;
  undefined4 uStack_84;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  int iStack_68;
  
  iVar18 = (int)param_4;
  uStack_70 = param_2;
  FUN_002e42d8(auStack_2a0,param_4);
  uStack_290 = *(undefined4 *)(iVar18 + 0x30);
  uStack_28c = *(undefined4 *)(iVar18 + 0x34);
  uStack_288 = *(undefined4 *)(iVar18 + 0x38);
  uStack_284 = *(undefined4 *)(iVar18 + 0x3c);
  puStack_6c = auStack_280;
  FUN_002e42d8(puStack_6c,param_3);
  auVar23 = *(Q16 *)((int)param_3 + 0x30);
  uStack_270 = (*(u32*)((u8*)&auVar23 + 0));
  uStack_26c = (*(u32*)((u8*)&auVar23 + 4));
  uStack_268 = (*(u32*)((u8*)&auVar23 + 8));
  uStack_264 = (*(u32*)((u8*)&auVar23 + 12));
  lVar13 = FUN_0016bc20(uStack_70,2,0xffffffffffffffff);
  fVar1 = DAT_00375c90;
  iStack_68 = (int)lVar13;
  if (lVar13 == 0) {
    FUN_002e44b8(puStack_6c);
    FUN_002e44b8(auStack_2a0);
    iVar18 = 0;
  }
  else {
    iVar18 = 1;
    FUN_0018a818(auStack_120,uStack_70,iStack_68);
    puVar19 = auStack_1e4;
    puVar16 = auStack_220;
    uVar21 = DAT_00375c94;
    do {
      FUN_002e47a8((float)iVar18 / fVar1,auStack_c0,auStack_2a0,puStack_6c);
      FUN_002e4588(auStack_100,auStack_c0);
      auVar22 = auStack_d0;
      auVar23 = auStack_100;
      if (puVar16 != (undefined4 *)auStack_100) {
        uVar3 = (*(u32*)((u8*)&auStack_f0 + 0));
        uVar4 = (*(u32*)((u8*)&auStack_f0 + 4));
        uVar5 = (*(u32*)((u8*)&auStack_f0 + 8));
        uVar6 = (*(u32*)((u8*)&auStack_f0 + 12));
        uVar7 = (*(u32*)((u8*)&auStack_e0 + 0));
        uVar8 = (*(u32*)((u8*)&auStack_e0 + 4));
        uVar9 = (*(u32*)((u8*)&auStack_e0 + 8));
        uVar10 = (*(u32*)((u8*)&auStack_e0 + 12));
        *puVar16 = (*(u32*)((u8*)&auStack_100 + 0));
        puVar16[1] = (*(u32*)((u8*)&auVar23 + 4));
        puVar16[2] = (*(u32*)((u8*)&auVar23 + 8));
        puVar16[3] = (*(u32*)((u8*)&auVar23 + 12));
        puVar16[4] = uVar3;
        puVar16[5] = uVar4;
        puVar16[6] = uVar5;
        puVar16[7] = uVar6;
        puVar16[8] = uVar7;
        puVar16[9] = uVar8;
        puVar16[10] = uVar9;
        puVar16[0xb] = uVar10;
        puVar16[0xc] = (*(u32*)((u8*)&auVar22 + 0));
        puVar16[0xd] = (*(u32*)((u8*)&auVar22 + 4));
        puVar16[0xe] = (*(u32*)((u8*)&auVar22 + 8));
        puVar16[0xf] = (*(u32*)((u8*)&auVar22 + 12));
      }
      FUN_002e44b8(auStack_c0);
      fVar2 = DAT_00375c98;
      (*(u32*)((u8*)&auVar25 + 4)) = uStack_26c;
      (*(u32*)((u8*)&auVar25 + 0)) = uStack_270;
      (*(u32*)((u8*)&auVar25 + 8)) = uStack_268;
      (*(u32*)((u8*)&auVar25 + 12)) = uStack_264;
      auVar22 = _lqc2(auVar25);
      (*(u32*)((u8*)&auVar23 + 4)) = uStack_28c;
      (*(u32*)((u8*)&auVar23 + 0)) = uStack_290;
      (*(u32*)((u8*)&auVar23 + 8)) = uStack_288;
      (*(u32*)((u8*)&auVar23 + 12)) = uStack_284;
      auVar23 = _lqc2(auVar23);
      auVar23 = _vsub(auVar22,auVar23);
      auStack_e0 = _sqc2(auVar23);
      auVar23 = _lqc2(auStack_e0);
      auVar22 = _qmtc2((float)iVar18 / fVar1);
      auVar23 = _vmulbc(auVar23,auVar22);
      auStack_f0 = _sqc2(auVar23);
      auVar23 = _lqc2(auStack_f0);
      (*(u32*)((u8*)&auVar22 + 4)) = uStack_28c;
      (*(u32*)((u8*)&auVar22 + 0)) = uStack_290;
      (*(u32*)((u8*)&auVar22 + 8)) = uStack_288;
      (*(u32*)((u8*)&auVar22 + 12)) = uStack_284;
      auVar22 = _lqc2(auVar22);
      auVar23 = _vadd(auVar23,auVar22);
      auVar23 = _sqc2(auVar23);
      auStack_100 = auVar23;
      if (puVar16 + 0xc == (undefined4 *)auStack_100) {
        *puVar19 = uVar21;
      }
      else {
        puVar16[0xc] = (*(u32*)((u8*)&auVar23 + 0));
        puVar16[0xd] = (*(u32*)((u8*)&auVar23 + 4));
        puVar16[0xe] = (*(u32*)((u8*)&auVar23 + 8));
        puVar16[0xf] = (*(u32*)((u8*)&auVar23 + 12));
        *puVar19 = uVar21;
      }
      iVar18 = iVar18 + 1;
      puVar16 = puVar16 + 0x10;
      puVar19 = puVar19 + 0x10;
    } while (iVar18 < 5);
    puVar16 = (undefined4 *)auStack_b0;
    iVar18 = 3;
    (*(u32*)((u8*)&auStack_b0 + 0)) = (float)(int)*(short *)(iStack_68 + 8);
    fStack_a8 = (float)(int)*(short *)(iStack_68 + 0xc);
    uStack_a4 = DAT_00375c94;
    pauVar11 = (Q16 *)auStack_220;
    (*(u32*)((u8*)&auStack_b0 + 4)) = (float)(int)*(short *)(iStack_68 + 10);
    puVar19 = (undefined4 *)auStack_f0;
    do {
      auVar29 = _lqc2(_auStack_b0);
      auVar23 = _lqc2(*pauVar11);
      auVar22 = _lqc2(pauVar11[1]);
      auVar25 = _lqc2(pauVar11[2]);
      auVar27 = _lqc2(pauVar11[3]);
      _vmulabc(auVar23,auVar29);
      _vmaddabc(auVar22,auVar29);
      _vmaddabc(auVar25,auVar29);
      auVar23 = _vmaddbc(auVar27,auVar29);
      auVar23 = _sqc2(auVar23);
      auStack_a0 = auVar23;
      if (puVar19 != (undefined4 *)auStack_a0) {
        *puVar19 = (*(u32*)((u8*)&auVar23 + 0));
        puVar19[1] = (*(u32*)((u8*)&auVar23 + 4));
        puVar19[2] = (*(u32*)((u8*)&auVar23 + 8));
        puVar19[3] = (*(u32*)((u8*)&auVar23 + 12));
      }
      pauVar11 = pauVar11 + 4;
      iVar18 = iVar18 + -1;
      puVar19 = puVar19 + 4;
    } while (-1 < iVar18);
    iVar18 = 3;
    pauVar11 = (Q16 *)auStack_260;
    do {
      pauVar12 = pauVar11 + 4;
      auVar23 = _qmfc2(in_vf0w);
      auVar28 = _lqc2(pauVar11[7]);
      auVar22 = _pextlw(SUB168(pauVar11[5],0),SUB168(*pauVar12,0));
      auVar25 = _pextuw(pauVar11[5],*pauVar12);
      auVar27 = _pextlw((*(u64*)((u8*)&auVar23 + 0)),SUB168(pauVar11[6],0));
      auVar29 = _pextuw(auVar23,pauVar11[6]);
      auVar23 = _pcpyld(auVar27,auVar22);
      auVar22 = _pcpyud(auVar22,auVar27);
      auVar25 = _pcpyld(auVar29,auVar25);
      auVar27 = _qmtc2((*(u32*)((u8*)&auVar23 + 0)));
      auVar24 = _qmtc2((*(u32*)((u8*)&auVar22 + 0)));
      auVar26 = _qmtc2((*(u32*)((u8*)&auVar25 + 0)));
      _vmulabc(auVar27,auVar28);
      _vmaddabc(auVar24,auVar28);
      auVar24 = _vmaddbc(auVar26,auVar28);
      (*(B12*)((u8*)&auVar27 + 4)) = in_register_00004104;
      (*(u32*)((u8*)&auVar27 + 0)) = in_vf0w;
      auVar27 = _vsub(auVar27,auVar24);
      *(int *)*pauVar12 = (*(u32*)((u8*)&auVar23 + 0));
      *(int *)(pauVar11[4] + 4) = (*(u32*)((u8*)&auVar23 + 4));
      *(int *)(pauVar11[4] + 8) = (*(u32*)((u8*)&auVar23 + 8));
      *(int *)(pauVar11[4] + 0xc) = (*(u32*)((u8*)&auVar23 + 12));
      *(int *)pauVar11[5] = (*(u32*)((u8*)&auVar22 + 0));
      *(int *)(pauVar11[5] + 4) = (*(u32*)((u8*)&auVar22 + 4));
      *(int *)(pauVar11[5] + 8) = (*(u32*)((u8*)&auVar22 + 8));
      *(int *)(pauVar11[5] + 0xc) = (*(u32*)((u8*)&auVar22 + 12));
      *(int *)pauVar11[6] = (*(u32*)((u8*)&auVar25 + 0));
      *(int *)(pauVar11[6] + 4) = (*(u32*)((u8*)&auVar25 + 4));
      *(int *)(pauVar11[6] + 8) = (*(u32*)((u8*)&auVar25 + 8));
      *(int *)(pauVar11[6] + 0xc) = (*(u32*)((u8*)&auVar25 + 12));
      auVar23 = _sqc2(auVar27);
      pauVar11[7] = auVar23;
      iVar18 = iVar18 + -1;
      pauVar11 = pauVar12;
    } while (-1 < iVar18);
    iVar18 = 0;
    lVar13 = 0;
LAB_002d9094:
    lVar13 = FUN_001b9bc8(lVar13);
    if (lVar13 != 0) {
      piVar17 = (int *)lVar13;
      (*(u64*)((u8*)&auVar29 + 0)) = (ulong)piVar17[2];
      if (*(char *)(piVar17[2] + 5) == '\x15') {
        lVar14 = FUN_002cf270(piVar17 + 700,0x40);
        if (lVar14 == 0) {
          pauVar11 = (Q16 *)FUN_0016c028(lVar13);
          pauVar12 = (Q16 *)FUN_0016c028(uStack_70);
          auVar23 = _lqc2(*pauVar11);
          auVar22 = _lqc2(*pauVar12);
          auVar23 = _vsub(auVar23,auVar22);
          _auStack_b0 = _sqc2(auVar23);
          auVar23 = _lqc2(_auStack_b0);
          auVar23 = _vmul(auVar23,auVar23);
          auVar23 = _vaddbc(auVar23,auVar23);
          auVar23 = _vaddbc(auVar23,auVar23);
          _vsqrt(auVar23);
          _vwaitq();
          uVar15 = _cfc2(in_vc6);
          if (((float)uVar15 <= fVar2) &&
             (lVar14 = FUN_0016bc20(lVar13,6,0xffffffffffffffff), lVar14 != 0)) {
            uStack_84 = 0;
            iVar20 = 1;
            FUN_0018a818(auStack_90,lVar13,lVar14);
            pauVar11 = &auStack_f0;
            do {
              if (&auStack_110 != pauVar11) {
                auVar23 = *pauVar11;
                (*(u32*)((u8*)&auStack_110 + 0)) = (*(u32*)((u8*)&auVar23 + 0));
                (*(u32*)((u8*)&auStack_110 + 4)) = (*(u32*)((u8*)&auVar23 + 4));
                (*(u32*)((u8*)&auStack_110 + 8)) = (*(u32*)((u8*)&auVar23 + 8));
                (*(u32*)((u8*)&auStack_110 + 12)) = (*(u32*)((u8*)&auVar23 + 12));
              }
              lVar14 = FUN_0018a550(auStack_120,auStack_90);
              if ((lVar14 != 0) && ((*(u64*)((u8*)&auVar29 + 0)) = (long)piVar17[0x1fe] & 4, (*(u64*)((u8*)&auVar29 + 0)) == 0)) {
                iVar18 = iVar18 + 1;
                FUN_002cf280(piVar17 + 700,0x100,0);
                (*(u64*)((u8*)&auVar29 + 0)) = (ulong)(int)*(code **)(*piVar17 + 0x20);
                (**(code **)(*piVar17 + 0x20))(lVar13);
                break;
              }
              iVar20 = iVar20 + 1;
              (*(u64*)((u8*)&auVar29 + 0)) = CONCAT71(0,iVar20 < 5);
              pauVar11 = pauVar11 + 1;
            } while ((*(u64*)((u8*)&auVar29 + 0)) != 0);
          }
        }
      }
      goto LAB_002d9094;
    }
    for (; (*(u64*)((u8*)&auVar29 + 0)) = (ulong)(int)auStack_120, (undefined4 *)auStack_100 != puVar16;
        puVar16 = puVar16 + -4) {
    }
    do {
      lVar13 = (*(u64*)((u8*)&auVar29 + 0));
      (*(u64*)((u8*)&auVar29 + 0)) = (ulong)((*(u32*)((u8*)&auVar29 + 0)) + -0x40);
    } while ((int)auStack_260 != lVar13);
    FUN_002e44b8(puStack_6c);
    FUN_002e44b8(auStack_2a0);
  }
  return iVar18;
}

