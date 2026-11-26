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

s32 FUN_0014aa58(...) asm("func_0014aa58");
s32 FUN_0014aa80(...) asm("func_0014aa80");
s32 FUN_0014abd8(...) asm("func_0014abd8");
s32 FUN_001991a8(...) asm("func_001991a8");
s32 FUN_002d1260(...) asm("func_002d1260");
s32 FUN_002d7698(...) asm("_ZN2Ti12MGHachimitsu11run_commandEv");
s32 FUN_002daa00(...) asm("func_002daa00");
s32 FUN_002e34d8(...) asm("func_002e34d8");
extern u32 LAB_002d77d8 asm("D_002d77d8");
extern u32 LAB_002d77e4 asm("D_002d77e4");
extern u32 LAB_002d77e8 asm("D_002d77e8");
extern u32 LAB_002d7828 asm("D_002d7828");

// Ghidra decompile of 0x002d7698, wrapped mechanically (ad/fallback.py)

void FUN_002d7698_impl(int param_1) asm("_ZN2Ti12MGHachimitsu11run_commandEv");
void FUN_002d7698_impl(int param_1) {
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  iVar10 = 0;
  iVar3 = FUN_002e34d8(param_1 + 0xbc,*(undefined4 *)(param_1 + 0xa8));
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  uVar11 = (uint)*(byte *)(iVar3 + 10);
  if (uVar11 != 0) {
    do {
      iVar8 = iVar3 + iVar10 * 0xc;
      iVar9 = *(int *)(iVar8 + 0x40);
      if (iVar9 < 0) {
        return;
      }
      bVar2 = false;
      fVar12 = (float)iVar9;
      fVar13 = *(float *)(param_1 + 0xac);
      iVar9 = (*(int *)(iVar8 + 0x44) - iVar9) * 2 + 2;
      if ((fVar12 <= fVar13) && (fVar13 <= (float)*(int *)(iVar8 + 0x44))) {
        bVar2 = true;
      }
      bVar6 = false;
      if ((*(float *)(param_1 + 0xb0) < fVar12) && (fVar12 <= fVar13)) {
        bVar6 = true;
      }
      if (bVar2) {
        bVar1 = *(byte *)(iVar8 + 0x48);
        uVar7 = (uint)bVar1;
        if (uVar7 == 1) {
          *(byte *)(param_1 + 0xc0) = bVar1;
        }
        else if ((bVar1 != 0) && (uVar7 - 6 < 3)) {
          *(uint *)(param_1 + 0xc4) = uVar7 - 6;
        }
      }
      if (!bVar6) goto LAB_002d77e4;
      switch(*(undefined1 *)(iVar8 + 0x48)) {
      case 2:
        uVar4 = FUN_0014abd8();
        uVar5 = 0;
        goto LAB_002d77d8;
      case 3:
        uVar4 = FUN_0014abd8();
        uVar5 = 0;
        goto LAB_002d7828;
      case 4:
        uVar4 = FUN_0014abd8();
        uVar5 = 1;
LAB_002d77d8:
        FUN_0014aa58(uVar4,iVar9,uVar5);
        break;
      case 5:
        uVar4 = FUN_0014abd8();
        uVar5 = 1;
LAB_002d7828:
        FUN_0014aa80(uVar4,iVar9,uVar5);
        bVar2 = iVar10 + 1 < (int)uVar11;
        goto LAB_002d77e8;
      case 0xb:
        uVar4 = FUN_002d1260();
        FUN_002daa00(uVar4,*(undefined1 *)(iVar8 + 0x49));
        bVar2 = iVar10 + 1 < (int)uVar11;
        goto LAB_002d77e8;
      case 0xc:
        if (*(char *)(param_1 + 0x90) != '\0') goto LAB_002d77e4;
        FUN_001991a8(0x15,0);
        *(undefined1 *)(param_1 + 0x90) = 1;
      }
LAB_002d77e4:
      bVar2 = iVar10 + 1 < (int)uVar11;
LAB_002d77e8:
      iVar10 = iVar10 + 1;
    } while (bVar2);
  }
  return;
}

