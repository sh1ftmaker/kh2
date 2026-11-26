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
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_00185da8(...) asm("func_00185da8");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190140(...) asm("func_00190140");
s32 FUN_00191218(...) asm("_ZN2YS6TARGET13search_btlnpcEPNS_3OBJEf");
s32 FUN_0019bb58(...) asm("func_0019bb58");
s32 FUN_0019bc38(...) asm("func_0019bc38");
extern u32 LAB_00191260 asm("D_00191260");
extern u32 LAB_001912c8 asm("D_001912c8");
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x00191218, wrapped mechanically (ad/fallback.py)

void FUN_00191218_impl(float param_1,undefined8 param_2,undefined8 param_3) asm("_ZN2YS6TARGET13search_btlnpcEPNS_3OBJEf");
void FUN_00191218_impl(float param_1,undefined8 param_2,undefined8 param_3) {
  long lVar1;
  int iVar2;
  Q16 *pauVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 in_vc6;
  Q16 auVar10;
  Q16 auVar11;
  B12 auStack_90;
  undefined4 uStack_84;
  Q16 auStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Q16 auStack_60;
  
  lVar5 = 0;
  uStack_84 = 0;
  fVar9 = 0.0;
  FUN_00190128();
LAB_00191260:
  do {
    do {
      lVar5 = FUN_00185da8(lVar5);
      iVar2 = (int)lVar5;
      if (lVar5 == 0) {
        return;
      }
      lVar1 = FUN_0019bc38(lVar5);
    } while (lVar1 == 0);
    lVar1 = FUN_0019bb58(lVar5);
    lVar7 = 0;
  } while (lVar1 == 0);
LAB_001912c8:
  do {
    lVar7 = FUN_0016bba8(lVar5,3,lVar7);
    if (lVar7 == 0) goto LAB_00191260;
    if ((*(ushort *)((byte *)lVar7 + 2) & 1) == 0) {
      FUN_0018a818(auStack_90,lVar5,lVar7);
      pauVar3 = (Q16 *)FUN_0016c028(param_3);
      auVar10 = _lqc2(auStack_80);
      auVar11 = _lqc2(*pauVar3);
      auVar10 = _vsub(auVar10,auVar11);
      auStack_60 = _sqc2(auVar10);
      if (&uStack_70 != (undefined4 *)auStack_60) {
        uStack_70 = (*(u32*)((u8*)&auStack_60 + 0));
        uStack_6c = (*(u32*)((u8*)&auStack_60 + 4));
        uStack_68 = (*(u32*)((u8*)&auStack_60 + 8));
        uStack_64 = (*(u32*)((u8*)&auStack_60 + 12));
      }
      (*(u32*)((u8*)&auVar10 + 4)) = uStack_6c;
      (*(u32*)((u8*)&auVar10 + 0)) = uStack_70;
      (*(u32*)((u8*)&auVar10 + 8)) = uStack_68;
      (*(u32*)((u8*)&auVar10 + 12)) = uStack_64;
      auVar10 = _lqc2(auVar10);
      auVar10 = _vmul(auVar10,auVar10);
      auVar10 = _vaddbc(auVar10,auVar10);
      auVar10 = _vaddbc(auVar10,auVar10);
      _vsqrt(auVar10);
      _vwaitq();
      uVar4 = _cfc2(in_vc6);
      fVar8 = (float)uVar4;
      if ((*(uint *)(iVar2 + 0x588) & 0x400) != 0) {
        fVar8 = fVar8 - param_1;
      }
      lVar1 = FUN_00190140(param_2);
      piVar6 = (int *)param_2;
      if (lVar1 == 0) {
        *piVar6 = iVar2;
      }
      else {
        if (fVar9 <= fVar8) goto LAB_001912c8;
        *piVar6 = iVar2;
      }
      piVar6[1] = (uint)*(byte *)lVar7;
      fVar9 = fVar8;
    }
  } while( true );
}

