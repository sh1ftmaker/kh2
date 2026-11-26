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

s32 FUN_0016bba8(...) asm("func_0016bba8");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190388(...) asm("func_00190388");
s32 FUN_00190878(...) asm("func_00190878");
s32 FUN_001913d8(...) asm("_ZN2YS6TARGET10change_dirEPNS_6PLAYERERKN2kn7FVectorE");
s32 FUN_00191c20(...) asm("func_00191c20");
s32 FUN_0019bc38(...) asm("func_0019bc38");
s32 FUN_001b9bc8(...) asm("func_001b9bc8");
extern u32 DAT_00352130 asm("D_00352130");
extern u32 DAT_0036cd54 asm("D_0036cd54");
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
#define _auStack_70 (*(AnyCell*)&auStack_70)

// Ghidra decompile of 0x001913d8, wrapped mechanically (ad/fallback.py)

undefined8 FUN_001913d8_impl(undefined8 param_1,undefined8 param_2,undefined8 param_3,Q16 *param_4) asm("_ZN2YS6TARGET10change_dirEPNS_6PLAYERERKN2kn7FVectorE");
undefined8 FUN_001913d8_impl(undefined8 param_1,undefined8 param_2,undefined8 param_3,Q16 *param_4) {
  float fVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined4 in_vc6;
  Q16 in_vf0;
  Q16 auVar9;
  Q16 auVar10;
  undefined4 uVar11;
  Q16 auStack_e0;
  Q16 auStack_d0;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  float fStack_ac;
  B4 auStack_a0;
  float fStack_9c;
  Q16 auStack_90;
  Q16 auStack_80;
  B8 auStack_70;
  float fStack_68;
  undefined4 uStack_64;
  
  iVar2 = 0;
  fVar7 = (float)FUN_00191c20();
  fVar7 = *(float *)(DAT_00352130 + 0x4c) * fVar7;
  FUN_00190388(auStack_e0,param_2);
  (**(code **)(*(int *)param_3 + 0x9c))(auStack_d0,param_3);
  FUN_00190128(&iStack_c0);
  while (iVar2 = FUN_001b9bc8(iVar2), iVar2 != 0) {
    lVar3 = FUN_0019bc38(iVar2);
    fVar1 = DAT_0036cd54;
    if (lVar3 != 0) {
      lVar3 = 0;
      while (lVar3 = FUN_0016bba8(iVar2,3,lVar3), lVar3 != 0) {
        pbVar5 = (byte *)lVar3;
        if (((*(ushort *)(pbVar5 + 2) & 1) == 0) &&
           ((iVar2 != *(int *)param_2 || ((uint)*pbVar5 != ((int *)param_2)[1])))) {
          FUN_0018a818(auStack_a0,iVar2,lVar3);
          auVar9 = _lqc2(auStack_90);
          auVar10 = _lqc2(auStack_d0);
          auVar9 = _vsub(auVar9,auVar10);
          auStack_80 = _sqc2(auVar9);
          auVar9 = _lqc2(auStack_80);
          auVar9 = _vmul(auVar9,auVar9);
          auVar9 = _vaddbc(auVar9,auVar9);
          auVar9 = _vaddbc(auVar9,auVar9);
          _vsqrt(auVar9);
          _vwaitq();
          uVar4 = _cfc2(in_vc6);
          if ((float)uVar4 - fStack_9c <= fVar7) {
            auVar9 = _lqc2(auStack_90);
            auVar10 = _lqc2(auStack_e0);
            auVar9 = _vsub(auVar9,auVar10);
            auVar9 = _sqc2(auVar9);
            fStack_68 = (*(u32*)((u8*)&auVar9 + 8));
            fVar8 = -fStack_68;
            uStack_64 = (*(u32*)((u8*)&auVar9 + 12));
            auStack_70 = (*(u64*)((u8*)&auVar9 + 0));
            fStack_68 = 0.0;
            (*(u32*)((u8*)&auStack_70 + 0)) = (*(u32*)((u8*)&auVar9 + 0));
            (*(u32*)((u8*)&auStack_70 + 4)) = fVar8;
            auVar9 = _lqc2(_auStack_70);
            auVar10 = _vmul(auVar9,auVar9);
            auVar10 = _vaddbc(auVar10,auVar10);
            auVar10 = _vaddbc(auVar10,auVar10);
            _vsqrt(auVar10);
            uVar11 = _vwaitq();
            uVar4 = _cfc2(in_vc6);
            auVar10 = _vaddq(in_vf0,uVar11);
            _vnop();
            _vdiv(in_vf0,0,auVar10,0);
            uVar11 = _vwaitq();
            auVar9 = _vmulq(auVar9,uVar11);
            _auStack_70 = _sqc2(auVar9);
            fVar8 = (float)uVar4 - fStack_9c;
            auVar9 = _lqc2(_auStack_70);
            auVar10 = _lqc2(*param_4);
            auVar9 = _vmul(auVar9,auVar10);
            auVar9 = _vaddbc(auVar9,auVar9);
            auVar9 = _vaddbc(auVar9,auVar9);
            auVar9 = _qmfc2((*(u32*)((u8*)&auVar9 + 0)));
            if ((fVar1 <= (*(u32*)((u8*)&auVar9 + 0))) && ((iStack_c0 == 0 || (fVar8 < fStack_ac)))) {
              FUN_00190878(&iStack_c0,iVar2,*pbVar5);
              fStack_ac = fVar8;
            }
          }
        }
      }
    }
  }
  piVar6 = (int *)param_1;
  *piVar6 = iStack_c0;
  piVar6[1] = iStack_bc;
  piVar6[2] = iStack_b8;
  piVar6[3] = iStack_b4;
  piVar6[4] = iStack_b0;
  return param_1;
}

