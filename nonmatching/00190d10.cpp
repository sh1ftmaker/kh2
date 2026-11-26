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
s32 FUN_0017ce10(...) asm("func_0017ce10");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190388(...) asm("func_00190388");
s32 FUN_00190d10(...) asm("_ZN2YS6TARGET6changeEPNS_6PLAYEREf");
s32 FUN_00191c20(...) asm("func_00191c20");
s32 FUN_0019bc38(...) asm("func_0019bc38");
s32 FUN_001b9bc8(...) asm("func_001b9bc8");
s32 FUN_002f8ad0(...) asm("func_002f8ad0");
extern u32 DAT_00352130 asm("D_00352130");
extern u32 DAT_0036cd48 asm("D_0036cd48");
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
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

// Ghidra decompile of 0x00190d10, wrapped mechanically (ad/fallback.py)

undefined8 FUN_00190d10_impl(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4) asm("_ZN2YS6TARGET6changeEPNS_6PLAYEREf");
undefined8 FUN_00190d10_impl(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4) {
  float fVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 in_vc6;
  Q16 in_vf0;
  Q16 auVar12;
  Q16 auVar13;
  undefined4 uVar14;
  Q16 auStack_c0;
  Q16 auStack_b0;
  Q16 auStack_a0;
  int iStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  float fStack_7c;
  B4 auStack_70;
  float fStack_6c;
  Q16 auStack_60;
  
  fVar7 = (float)FUN_00191c20();
  fVar8 = *(float *)(DAT_00352130 + 0x4c);
  (**(code **)(*(int *)param_4 + 0x9c))(auStack_c0,param_4);
  FUN_00190388(auStack_a0,param_3);
  auVar12 = _lqc2(auStack_a0);
  auVar13 = _lqc2(auStack_c0);
  auVar12 = _vsub(auVar12,auVar13);
  auStack_b0 = _sqc2(auVar12);
  iVar2 = 0;
  fVar9 = (float)FUN_002f8ad0((*(u32*)((u8*)&auStack_b0 + 0)),(*(u32*)((u8*)&auStack_b0 + 8)));
  FUN_00190128(&iStack_90);
  while (iVar2 = FUN_001b9bc8(iVar2), iVar2 != 0) {
    lVar3 = FUN_0019bc38(iVar2);
    fVar1 = DAT_0036cd48;
    if (lVar3 != 0) {
      fVar11 = 0.0;
      lVar3 = 0;
      while (lVar3 = FUN_0016bba8(iVar2,3,lVar3), lVar3 != 0) {
        pbVar5 = (byte *)lVar3;
        if (((*(ushort *)(pbVar5 + 2) & 1) == 0) &&
           ((iVar2 != *(int *)param_3 || ((uint)*pbVar5 != ((int *)param_3)[1])))) {
          FUN_0018a818(auStack_70,iVar2,lVar3);
          auVar12 = _lqc2(auStack_60);
          auVar13 = _lqc2(auStack_c0);
          auVar12 = _vsub(auVar12,auVar13);
          auVar12 = _sqc2(auVar12);
          auVar12 = _lqc2(auVar12);
          auVar13 = _vmul(auVar12,auVar12);
          auVar13 = _vaddbc(auVar13,auVar13);
          auVar13 = _vaddbc(auVar13,auVar13);
          _vsqrt(auVar13);
          uVar14 = _vwaitq();
          uVar4 = _cfc2(in_vc6);
          auVar13 = _vaddq(in_vf0,uVar14);
          _vnop();
          _vdiv(in_vf0,0,auVar13,0);
          uVar14 = _vwaitq();
          auVar12 = _vmulq(auVar12,uVar14);
          auStack_a0 = _sqc2(auVar12);
          if ((((*(uint *)(iVar2 + 0x588) & 0x400) != 0) && (fVar1 <= fVar7)) ||
             ((float)uVar4 - fStack_6c <= fVar8 * fVar7)) {
            fVar10 = (float)FUN_002f8ad0((*(u32*)((u8*)&auStack_a0 + 0)),(*(u32*)((u8*)&auStack_a0 + 8)));
            fVar10 = (float)FUN_0017ce10(fVar10 - fVar9);
            fVar10 = fVar10 * param_1;
            if ((fVar11 < fVar10) && ((iStack_90 == 0 || (fVar10 < fStack_7c)))) {
              uStack_8c = (uint)*pbVar5;
              iStack_90 = iVar2;
              fStack_7c = fVar10;
            }
          }
        }
      }
    }
  }
  piVar6 = (int *)param_2;
  *piVar6 = iStack_90;
  piVar6[1] = uStack_8c;
  piVar6[2] = iStack_88;
  piVar6[3] = iStack_84;
  piVar6[4] = iStack_80;
  return param_2;
}

