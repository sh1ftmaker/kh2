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
s32 FUN_002e1178(...) asm("_Z16wtarget_002e1178jjjj");
s32 FUN_002e71a0(...) asm("func_002e71a0");
extern u32 DAT_00362d70 asm("D_00362d70");
extern u32 DAT_00375ed0 asm("D_00375ed0");
_GHIDRA_ANY(SUB168)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_pextlw)
_GHIDRA_ANY(_pextuw)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x002e1178, wrapped mechanically (ad/fallback.py)

void FUN_002e1178_impl(int param_1) asm("_Z16wtarget_002e1178jjjj");
void FUN_002e1178_impl(int param_1) {
  int iVar1;
  undefined8 uVar2;
  Q16 auVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 auVar6;
  Q16 auVar7;
  Q16 *pauVar8;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar9;
  Q16 auVar10;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = FUN_00106a18(1);
  FUN_00106de8(DAT_00362d70 * DAT_00375ed0,uVar2,1);
  FUN_00106c08(uVar2);
  iVar1 = FUN_00106a60(1);
  pauVar8 = (Q16 *)(iVar1 + 0x10);
  FUN_002e71a0(auStack_60,*(undefined4 *)(param_1 + 0x70),
               *(undefined1 *)(*(int *)(param_1 + 100) + 8),1);
  if (pauVar8 != (Q16 *)auStack_60) {
    *(undefined4 *)*pauVar8 = auStack_60[0];
    *(undefined4 *)(iVar1 + 0x14) = auStack_60[1];
    *(undefined4 *)(iVar1 + 0x18) = auStack_60[2];
    *(undefined4 *)(iVar1 + 0x1c) = auStack_60[3];
    *(undefined4 *)(iVar1 + 0x20) = uStack_50;
    *(undefined4 *)(iVar1 + 0x24) = uStack_4c;
    *(undefined4 *)(iVar1 + 0x28) = uStack_48;
    *(undefined4 *)(iVar1 + 0x2c) = uStack_44;
    *(undefined4 *)(iVar1 + 0x30) = uStack_40;
    *(undefined4 *)(iVar1 + 0x34) = uStack_3c;
    *(undefined4 *)(iVar1 + 0x38) = uStack_38;
    *(undefined4 *)(iVar1 + 0x3c) = uStack_34;
    *(undefined4 *)(iVar1 + 0x40) = uStack_30;
    *(undefined4 *)(iVar1 + 0x44) = uStack_2c;
    *(undefined4 *)(iVar1 + 0x48) = uStack_28;
    *(undefined4 *)(iVar1 + 0x4c) = uStack_24;
  }
  auVar4 = _qmfc2(in_vf0w);
  auVar10 = _lqc2(*(Q16 *)(iVar1 + 0x40));
  auVar5 = _pextlw(SUB168(*(Q16 *)(iVar1 + 0x20),0),SUB168(*pauVar8,0));
  auVar6 = _pextuw(*(Q16 *)(iVar1 + 0x20),*pauVar8);
  auVar7 = _pextlw((*(u64*)((u8*)&auVar4 + 0)),SUB168(*(Q16 *)(iVar1 + 0x30),0));
  auVar4 = _pextuw(auVar4,*(Q16 *)(iVar1 + 0x30));
  auVar3 = _pcpyld(auVar7,auVar5);
  auVar5 = _pcpyud(auVar5,auVar7);
  auVar6 = _pcpyld(auVar4,auVar6);
  auVar4 = _qmtc2((*(u32*)((u8*)&auVar3 + 0)));
  auVar7 = _qmtc2((*(u32*)((u8*)&auVar5 + 0)));
  auVar9 = _qmtc2((*(u32*)((u8*)&auVar6 + 0)));
  _vmulabc(auVar4,auVar10);
  _vmaddabc(auVar7,auVar10);
  auVar7 = _vmaddbc(auVar9,auVar10);
  (*(B12*)((u8*)&auVar4 + 4)) = in_register_00004104;
  (*(u32*)((u8*)&auVar4 + 0)) = in_vf0w;
  auVar4 = _vsub(auVar4,auVar7);
  *(int *)*pauVar8 = (*(u32*)((u8*)&auVar3 + 0));
  *(int *)(iVar1 + 0x14) = (*(u32*)((u8*)&auVar3 + 4));
  *(int *)(iVar1 + 0x18) = (*(u32*)((u8*)&auVar3 + 8));
  *(int *)(iVar1 + 0x1c) = (*(u32*)((u8*)&auVar3 + 12));
  *(int *)(iVar1 + 0x20) = (*(u32*)((u8*)&auVar5 + 0));
  *(int *)(iVar1 + 0x24) = (*(u32*)((u8*)&auVar5 + 4));
  *(int *)(iVar1 + 0x28) = (*(u32*)((u8*)&auVar5 + 8));
  *(int *)(iVar1 + 0x2c) = (*(u32*)((u8*)&auVar5 + 12));
  *(int *)(iVar1 + 0x30) = (*(u32*)((u8*)&auVar6 + 0));
  *(int *)(iVar1 + 0x34) = (*(u32*)((u8*)&auVar6 + 4));
  *(int *)(iVar1 + 0x38) = (*(u32*)((u8*)&auVar6 + 8));
  *(int *)(iVar1 + 0x3c) = (*(u32*)((u8*)&auVar6 + 12));
  auVar4 = _sqc2(auVar4);
  *(Q16 *)(iVar1 + 0x40) = auVar4;
  return;
}

