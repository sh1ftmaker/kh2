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

s32 FUN_00106a18(...) asm("func_00106a18");
s32 FUN_00106a60(...) asm("func_00106a60");
s32 FUN_00106c08(...) asm("func_00106c08");
s32 FUN_00106de8(...) asm("func_00106de8");
s32 FUN_001072d0(...) asm("func_001072d0");
s32 FUN_00197920(...) asm("func_00197920");
s32 FUN_002e27c8(...) asm("_Z16wtarget_002e27c8jjjj");
s32 FUN_002e71a0(...) asm("func_002e71a0");
extern u32 DAT_00362e60 asm("D_00362e60");
extern u32 DAT_00375f34 asm("D_00375f34");
_GHIDRA_ANY(SUB168)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_pextlw)
_GHIDRA_ANY(_pextuw)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x002e27c8, wrapped mechanically (ad/fallback.py)

void FUN_002e27c8_impl(int param_1) asm("_Z16wtarget_002e27c8jjjj");
void FUN_002e27c8_impl(int param_1) {
  long lVar1;
  undefined8 uVar2;
  Q16 auVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 *pauVar6;
  int iVar7;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar8;
  Q16 auVar9;
  Q16 auVar10;
  Q16 auVar11;
  undefined4 auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  Q16 auStack_40;
  Q16 auStack_30;
  
  lVar1 = FUN_00197920();
  if (lVar1 == 0) {
    uVar2 = FUN_00106a18(1);
    FUN_00106de8(DAT_00362e60 * DAT_00375f34,uVar2,1);
    FUN_00106c08(uVar2);
    uVar2 = FUN_00106a60(1);
    FUN_002e71a0(auStack_70,*(undefined4 *)(param_1 + 0x6c),
                 *(undefined1 *)(*(int *)(param_1 + 100) + 8),1);
    auVar8 = _lqc2(auStack_40);
    auVar9 = _lqc2(*(Q16 *)(param_1 + 0xf0));
    auVar8 = _vadd(auVar8,auVar9);
    auStack_40 = _sqc2(auVar8);
    iVar7 = (int)uVar2;
    pauVar6 = (Q16 *)(iVar7 + 0x10);
    if (pauVar6 != (Q16 *)auStack_70) {
      *(undefined4 *)*pauVar6 = auStack_70[0];
      *(undefined4 *)(iVar7 + 0x14) = auStack_70[1];
      *(undefined4 *)(iVar7 + 0x18) = auStack_70[2];
      *(undefined4 *)(iVar7 + 0x1c) = auStack_70[3];
      *(undefined4 *)(iVar7 + 0x20) = uStack_60;
      *(undefined4 *)(iVar7 + 0x24) = uStack_5c;
      *(undefined4 *)(iVar7 + 0x28) = uStack_58;
      *(undefined4 *)(iVar7 + 0x2c) = uStack_54;
      *(undefined4 *)(iVar7 + 0x30) = uStack_50;
      *(undefined4 *)(iVar7 + 0x34) = uStack_4c;
      *(undefined4 *)(iVar7 + 0x38) = uStack_48;
      *(undefined4 *)(iVar7 + 0x3c) = uStack_44;
      *(undefined4 *)(iVar7 + 0x40) = (*(u32*)((u8*)&auStack_40 + 0));
      *(undefined4 *)(iVar7 + 0x44) = (*(u32*)((u8*)&auStack_40 + 4));
      *(undefined4 *)(iVar7 + 0x48) = (*(u32*)((u8*)&auStack_40 + 8));
      *(undefined4 *)(iVar7 + 0x4c) = (*(u32*)((u8*)&auStack_40 + 12));
    }
    auVar8 = _lqc2(*(Q16 *)(iVar7 + 0x40));
    auVar9 = _lqc2(*(Q16 *)(iVar7 + 0x30));
    auVar8 = _vadd(auVar8,auVar9);
    auStack_30 = _sqc2(auVar8);
    FUN_001072d0(uVar2);
    auVar8 = _qmfc2(in_vf0w);
    auVar11 = _lqc2(*(Q16 *)(iVar7 + 0x40));
    auVar3 = _pextlw(SUB168(*(Q16 *)(iVar7 + 0x20),0),SUB168(*pauVar6,0));
    auVar4 = _pextuw(*(Q16 *)(iVar7 + 0x20),*pauVar6);
    auVar5 = _pextlw((*(u64*)((u8*)&auVar8 + 0)),SUB168(*(Q16 *)(iVar7 + 0x30),0));
    auVar8 = _pextuw(auVar8,*(Q16 *)(iVar7 + 0x30));
    auVar9 = _pcpyld(auVar5,auVar3);
    auVar3 = _pcpyud(auVar3,auVar5);
    auVar4 = _pcpyld(auVar8,auVar4);
    auVar8 = _qmtc2((*(u32*)((u8*)&auVar9 + 0)));
    auVar5 = _qmtc2((*(u32*)((u8*)&auVar3 + 0)));
    auVar10 = _qmtc2((*(u32*)((u8*)&auVar4 + 0)));
    _vmulabc(auVar8,auVar11);
    _vmaddabc(auVar5,auVar11);
    auVar5 = _vmaddbc(auVar10,auVar11);
    (*(B12*)((u8*)&auVar8 + 4)) = in_register_00004104;
    (*(u32*)((u8*)&auVar8 + 0)) = in_vf0w;
    auVar8 = _vsub(auVar8,auVar5);
    *(int *)*pauVar6 = (*(u32*)((u8*)&auVar9 + 0));
    *(int *)(iVar7 + 0x14) = (*(u32*)((u8*)&auVar9 + 4));
    *(int *)(iVar7 + 0x18) = (*(u32*)((u8*)&auVar9 + 8));
    *(int *)(iVar7 + 0x1c) = (*(u32*)((u8*)&auVar9 + 12));
    *(int *)(iVar7 + 0x20) = (*(u32*)((u8*)&auVar3 + 0));
    *(int *)(iVar7 + 0x24) = (*(u32*)((u8*)&auVar3 + 4));
    *(int *)(iVar7 + 0x28) = (*(u32*)((u8*)&auVar3 + 8));
    *(int *)(iVar7 + 0x2c) = (*(u32*)((u8*)&auVar3 + 12));
    *(int *)(iVar7 + 0x30) = (*(u32*)((u8*)&auVar4 + 0));
    *(int *)(iVar7 + 0x34) = (*(u32*)((u8*)&auVar4 + 4));
    *(int *)(iVar7 + 0x38) = (*(u32*)((u8*)&auVar4 + 8));
    *(int *)(iVar7 + 0x3c) = (*(u32*)((u8*)&auVar4 + 12));
    auVar8 = _sqc2(auVar8);
    *(Q16 *)(iVar7 + 0x40) = auVar8;
  }
  return;
}

