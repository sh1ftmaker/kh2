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

s32 FUN_001386e0(...) asm("func_001386e0");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_002362b0(...) asm("func_002362b0");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023c4b8(...) asm("func_0023c4b8");
s32 FUN_0023f1b0(...) asm("func_0023f1b0");
s32 FUN_00276638(...) asm("func_00276638");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_00292a90(...) asm("func_00292a90");
s32 FUN_00293148(...) asm("func_00293148");
s32 FUN_0029da68(...) asm("func_0029da68");
s32 FUN_0029dda8(...) asm("func_0029dda8");
s32 FUN_0029de18(...) asm("_ZN2Tz5JmDic9UpdateGraEv");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f3d4 asm("D_0035f3d4");
extern u32 DAT_0035f5ac asm("D_0035f5ac");

// Ghidra decompile of 0x0029de18, wrapped mechanically (ad/fallback.py)

void FUN_0029de18_impl(void) asm("_ZN2Tz5JmDic9UpdateGraEv");
void FUN_0029de18_impl(void) {
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = FUN_002766d0();
  FUN_0029dda8();
  iVar8 = (int)uVar3;
  iVar7 = iVar8 + 0x4398;
  iVar2 = FUN_00276638(0xf);
  iVar2 = FUN_0029da68(*(undefined2 *)(iVar2 * 2 + DAT_0035f5ac + 8));
  uVar1 = *(undefined1 *)(iVar2 + 1);
  lVar4 = FUN_00292a90(uVar1);
  if ((lVar4 != 0) && (lVar4 = FUN_00139d78(iVar7), lVar4 == 0)) {
    iVar2 = DAT_0035f3d4 + 2;
    uVar5 = FUN_0023f1b0(DAT_0035f210);
    uVar5 = FUN_0023c4b8(uVar5,0);
    uVar6 = FUN_00293148(uVar1);
    FUN_002362b0(iVar8 + 0xdca0,uVar6);
    *(undefined1 *)(iVar8 + 0xde30) = 1;
    FUN_001386e0(iVar7,iVar2,uVar5,iVar8 + 0xdca0,1,0);
    *(undefined4 *)(iVar8 + 0x4520) = 2;
    FUN_00139620(iVar7);
    *(uint *)(iVar8 + 0x4468) = *(uint *)(iVar8 + 0x4468) | 8;
    *(undefined1 *)(iVar8 + 0x452d) = 1;
    FUN_0028dcc0(iVar7,uVar3);
    uVar3 = FUN_0023aa18(iVar8 + 0x18);
    uVar5 = FUN_0023aa38(iVar8 + 0x18);
    FUN_00138c68(iVar7,uVar3,uVar5);
    return;
  }
  return;
}

