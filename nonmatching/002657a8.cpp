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

s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_002657a8(...) asm("_ZN2Tz6CmStat13UpdateTopListEv");
s32 FUN_00265c78(...) asm("func_00265c78");
s32 FUN_00266df8(...) asm("func_00266df8");
s32 FUN_002670a0(...) asm("func_002670a0");
s32 FUN_0028b040(...) asm("func_0028b040");
s32 FUN_002fde18(...) asm("func_002fde18");
extern u32 DAT_0035ef6c asm("D_0035ef6c");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 DAT_0035f0e4 asm("D_0035f0e4");
extern u32 DAT_00373500 asm("D_00373500");
extern undefined *PTR_LAB_00373344 asm("D_00373344");

// Ghidra decompile of 0x002657a8, wrapped mechanically (ad/fallback.py)

void FUN_002657a8_impl(void) asm("_ZN2Tz6CmStat13UpdateTopListEv");
void FUN_002657a8_impl(void) {
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int aiStack_70 [4];
  int iStack_60;
  int *piStack_5c;
  int iStack_58;
  
  iVar10 = 0x13;
  iStack_60 = FUN_00257770();
  aiStack_70[0] = 0;
  aiStack_70[1] = 0;
  iVar6 = iStack_60 + 0x3610;
  FUN_002fde18(DAT_0035f0e4 + 0x524,0,0x280);
  do {
    iVar10 = iVar10 + -1;
    FUN_00138c10(iVar6,DAT_0035ef6c);
    *(undefined4 *)(iVar6 + 0x198) = 0;
    iVar6 = iVar6 + 0x1b4;
  } while (-1 < iVar10);
  uVar1 = FUN_0028b040(DAT_0035f01c);
  uVar5 = FUN_002670a0(uVar1);
  FUN_00266df8(uVar5);
  if (uVar5 < 10) {
                    /* WARNING: Could not recover jumptable at 0x00265860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_00373344)[(int)uVar5])();
    return;
  }
  iVar6 = 0;
  iStack_58 = 0;
  iVar10 = 0;
  piStack_5c = aiStack_70;
  do {
    iVar11 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar7 = iStack_58 + iStack_60;
    do {
      if ((*(uint *)(DAT_0035f0e4 + 0x18) & 1 << (iVar10 + iVar8 & 0x1fU)) != 0) {
        FUN_00138c10(iVar7 + 0x3610,(&DAT_00373500)[*(short *)(iVar9 + *piStack_5c + 4) * 2]);
        iVar2 = FUN_0023aa98(iVar7 + 0x3628);
        iVar3 = FUN_0023aa78(iVar7 + 0x3628);
        FUN_00138c68(iVar7 + 0x3610,iVar6 * iVar2,iVar11 * iVar3);
        iVar11 = iVar11 + 1;
        uVar4 = FUN_00192048(*(undefined2 *)(iVar9 + *piStack_5c));
        *(undefined4 *)(iVar7 + 0x37a8) = uVar4;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 6;
      iVar7 = iVar7 + 0x1b4;
    } while (iVar8 < 10);
    iVar6 = iVar6 + 1;
    iVar10 = iVar10 + 10;
    piStack_5c = piStack_5c + 1;
    iStack_58 = iStack_58 + 0x1108;
  } while (iVar6 < 2);
  FUN_00265c78();
  return;
}

