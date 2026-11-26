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

s32 FUN_0016af58(...) asm("func_0016af58");
s32 FUN_0016bba8(...) asm("func_0016bba8");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190878(...) asm("func_00190878");
s32 FUN_00190f80(...) asm("_ZN2YS6TARGET18search_auto_lockonEPNS_6PLAYEREf");
s32 FUN_00191c20(...) asm("func_00191c20");
s32 FUN_0019bb58(...) asm("func_0019bb58");
s32 FUN_0019bc38(...) asm("func_0019bc38");
s32 FUN_001b9bc8(...) asm("func_001b9bc8");
s32 FUN_002f8870(...) asm("func_002f8870");
extern u32 DAT_0036cd4c asm("D_0036cd4c");
extern u32 DAT_0036cd50 asm("D_0036cd50");
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vaddq)
_GHIDRA_ANY(_vdiv)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulq)
_GHIDRA_ANY(_vnop)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x00190f80, wrapped mechanically (ad/fallback.py)

void FUN_00190f80_impl(float param_1,undefined8 param_2,undefined8 param_3) asm("_ZN2YS6TARGET18search_auto_lockonEPNS_6PLAYEREf");
void FUN_00190f80_impl(float param_1,undefined8 param_2,undefined8 param_3) {
  int iVar1;
  Q16 *pauVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_vc6;
  Q16 in_vf0;
  Q16 auVar14;
  Q16 auVar15;
  undefined4 uVar16;
  Q16 auStack_b0;
  B4 auStack_a0;
  float fStack_9c;
  float fStack_98;
  Q16 auStack_90;
  Q16 auStack_80;
  
  fVar12 = 0.0;
  iVar1 = *(int *)((int)param_3 + 0x130);
  fVar9 = *(float *)(iVar1 + 0x60);
  fVar10 = *(float *)(iVar1 + 100);
  fVar7 = (float)FUN_00191c20();
  if (DAT_0036cd4c < fVar7) {
    fVar10 = fVar10 * fVar7;
    fVar9 = fVar9 * fVar7;
  }
  lVar4 = 0;
  FUN_00190128(param_2);
  while (lVar4 = FUN_001b9bc8(lVar4), lVar4 != 0) {
    lVar5 = FUN_0019bc38(lVar4);
    if ((lVar5 != 0) && (lVar5 = FUN_0019bb58(lVar4), fVar7 = DAT_0036cd4c, lVar5 != 0)) {
      fVar11 = 0.0;
      lVar5 = 0;
      fVar13 = DAT_0036cd50;
      while( true ) {
        lVar5 = FUN_0016bba8(lVar4,3,lVar5);
        if (lVar5 == 0) break;
        if ((*(ushort *)((undefined1 *)lVar5 + 2) & 1) == 0) {
          FUN_0018a818(auStack_a0,lVar4);
          pauVar2 = (Q16 *)FUN_0016c028(param_3);
          auVar14 = _lqc2(auStack_90);
          auVar15 = _lqc2(*pauVar2);
          auVar14 = _vsub(auVar14,auVar15);
          auStack_80 = _sqc2(auVar14);
          fVar6 = (float)(*(u32*)((u8*)&auStack_b0 + 4));
          if (auStack_b0 != auStack_80) {
            (*(u32*)((u8*)&auStack_b0 + 4)) = (*(u32*)((u8*)&auStack_80 + 4));
            fVar6 = (float)(*(u32*)((u8*)&auStack_b0 + 4));
            auStack_b0 = auStack_80;
          }
          (*(u32*)((u8*)&auStack_b0 + 4)) = 0;
          auVar14 = _lqc2(auStack_b0);
          auVar15 = _vmul(auVar14,auVar14);
          auVar15 = _vaddbc(auVar15,auVar15);
          auVar15 = _vaddbc(auVar15,auVar15);
          _vsqrt(auVar15);
          uVar16 = _vwaitq();
          uVar3 = _cfc2(in_vc6);
          auVar15 = _vaddq(in_vf0,uVar16);
          _vnop();
          _vdiv(in_vf0,0,auVar15,0);
          uVar16 = _vwaitq();
          auVar14 = _vmulq(auVar14,uVar16);
          auStack_b0 = _sqc2(auVar14);
          if ((param_1 <= fVar11) ||
             (((fVar9 - fStack_98 <= fVar6 && (fVar6 <= fVar10 + fStack_98)) &&
              ((float)uVar3 - fStack_9c <= param_1)))) {
            fVar8 = (float)FUN_002f8870();
            fVar6 = *(float *)(iVar1 + 0x6c);
            FUN_0016af58(auStack_80,param_3);
            auVar14 = _lqc2(auStack_80);
            auVar15 = _lqc2(auStack_b0);
            auVar14 = _vmul(auVar14,auVar15);
            auVar14 = _vaddbc(auVar14,auVar14);
            auVar14 = _vaddbc(auVar14,auVar14);
            auVar14 = _qmfc2((*(u32*)((u8*)&auVar14 + 0)));
            fVar6 = ((float)uVar3 + fVar8 * fVar6) *
                    ((fVar7 - (*(u32*)((u8*)&auVar14 + 0))) * fVar13 * (fVar7 - *(float *)(iVar1 + 0x70)) +
                    *(float *)(iVar1 + 0x70));
            if ((*(int *)param_2 == 0) || (fVar6 < fVar12)) {
              FUN_00190878(param_2,lVar4,*(undefined1 *)lVar5);
              fVar12 = fVar6;
            }
          }
        }
      }
    }
  }
  return;
}

