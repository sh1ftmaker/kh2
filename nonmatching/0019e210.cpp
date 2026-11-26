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
s32 FUN_0016bc98(...) asm("func_0016bc98");
s32 FUN_0018a550(...) asm("func_0018a550");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190878(...) asm("func_00190878");
s32 FUN_0019bdc8(...) asm("func_0019bdc8");
s32 FUN_0019c4f8(...) asm("func_0019c4f8");
s32 FUN_0019dbc0(...) asm("func_0019dbc0");
s32 FUN_0019df08(...) asm("func_0019df08");
s32 FUN_0019e210(...) asm("_ZN2YS11RC_SEARCHER9check_objEPNS_3OBJE");
s32 FUN_0019e5f8(...) asm("func_0019e5f8");
s32 FUN_0019e698(...) asm("func_0019e698");
extern u32 LAB_0019e2ac asm("D_0019e2ac");
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

// Ghidra decompile of 0x0019e210, wrapped mechanically (ad/fallback.py)

void FUN_0019e210_impl(undefined8 param_1,undefined8 param_2) asm("_ZN2YS11RC_SEARCHER9check_objEPNS_3OBJE");
void FUN_0019e210_impl(undefined8 param_1,undefined8 param_2) {
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined4 in_vc6;
  Q16 in_vf0;
  Q16 auVar10;
  Q16 auVar11;
  undefined4 uVar12;
  Q16 auStack_c0;
  Q16 auStack_b0;
  Q16 auStack_a0;
  undefined1 auStack_90 [32];
  Q16 auStack_70;
  Q16 *pauStack_60;
  int iStack_5c;
  
  lVar9 = FUN_0019c4f8(param_2);
  if (lVar9 == 0) {
    pauStack_60 = (Q16 *)((int)param_1 + 0x40);
    lVar9 = 0;
    while( true ) {
      lVar9 = FUN_0016bc98(param_2,0x4020,lVar9);
      puVar5 = (undefined1 *)lVar9;
      if (lVar9 == 0) break;
      if (puVar5[4] == '\x05') {
        uVar8 = (uint)*(ushort *)(puVar5 + 2);
        if (uVar8 == 0x83) {
          iVar2 = *(int *)((int)param_2 + 0x81c);
          if (iVar2 != 0) {
            uVar8 = (uint)*(ushort *)(iVar2 + 0x2c);
          }
          goto LAB_0019e2ac;
        }
        uVar1 = *puVar5;
      }
      else {
        uVar8 = *(uint *)((int)param_2 + 0xaa4);
LAB_0019e2ac:
        uVar1 = *puVar5;
      }
      lVar6 = FUN_0019bdc8(param_2,uVar8,uVar1);
      if (lVar6 != 0) {
        lVar6 = FUN_0019e5f8(param_1,uVar8);
        if (lVar6 != 0) {
          FUN_0018a818(auStack_c0,param_2);
          lVar3 = FUN_0018a550(auStack_c0,(int)param_1 + 0x30);
          if (lVar3 != 0) {
            auVar10 = _lqc2(auStack_b0);
            auVar11 = _lqc2(*pauStack_60);
            auVar10 = _vsub(auVar10,auVar11);
            auVar10 = _sqc2(auVar10);
            (*(u64*)((u8*)&auStack_a0 + 8)) = (*(u64*)((u8*)&auVar10 + 8));
            (*(u32*)((u8*)&auStack_a0 + 0)) = (*(u32*)((u8*)&auVar10 + 0));
            (*(u32*)((u8*)&auStack_a0 + 4)) = 0;
            auVar10 = _lqc2(auStack_a0);
            auVar11 = _vmul(auVar10,auVar10);
            auVar11 = _vaddbc(auVar11,auVar11);
            auVar11 = _vaddbc(auVar11,auVar11);
            _vsqrt(auVar11);
            uVar12 = _vwaitq();
            uVar7 = _cfc2(in_vc6);
            auVar11 = _vaddq(in_vf0,uVar12);
            _vnop();
            _vdiv(in_vf0,0,auVar11,0);
            uVar12 = _vwaitq();
            auVar10 = _vmulq(auVar10,uVar12);
            auStack_a0 = _sqc2(auVar10);
            iStack_5c = (int)(float)uVar7;
            uVar1 = *puVar5;
            FUN_00190128(auStack_90);
            FUN_00190878(auStack_90,param_2,uVar1);
            uVar7 = FUN_0019e698(param_1,lVar6);
            FUN_0016af58(auStack_70,param_2);
            uVar4 = FUN_0019df08(param_1,lVar6,auStack_90,auStack_70,iStack_5c);
            FUN_0019dbc0(param_1,*(undefined2 *)lVar6,auStack_90,uVar7,uVar4);
          }
        }
      }
    }
  }
  return;
}

