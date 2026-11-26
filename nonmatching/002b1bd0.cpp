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
s32 FUN_00239558(...) asm("func_00239558");
s32 FUN_002a9d68(...) asm("func_002a9d68");
s32 FUN_002b1bd0(...) asm("_ZN2Tz8JmPuzzle11UpdatePieceEb");
s32 FUN_002b23e0(...) asm("func_002b23e0");
s32 FUN_002b28b0(...) asm("func_002b28b0");
extern u32 DAT_0035f634 asm("D_0035f634");
extern u32 DAT_0035f638 asm("D_0035f638");
extern u32 DAT_00374cc8 asm("D_00374cc8");
extern u32 DAT_00374cd0 asm("D_00374cd0");
extern u32 DAT_00374cd1 asm("D_00374cd1");

// Ghidra decompile of 0x002b1bd0, wrapped mechanically (ad/fallback.py)

void FUN_002b1bd0_impl(uint param_1) asm("_ZN2Tz8JmPuzzle11UpdatePieceEb");
void FUN_002b1bd0_impl(uint param_1) {
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  B8 auStack_80;
  B8 auStack_78;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  
  uStack_70 = param_1 & 0xff;
  iStack_6c = 0;
  puVar5 = (uint *)FUN_002b23e0(0xffffffffffffffff);
  iStack_64 = FUN_002a9d68();
  uVar6 = *puVar5 >> 0x1b & 1;
  iVar7 = uVar6 * 4;
  sVar4 = *(short *)(&DAT_00374cc8 + uVar6 * 2);
  cVar1 = (&DAT_00374cd0)[iVar7];
  iStack_68 = (int)(char)(&DAT_00374cd1)[iVar7];
  if ('\0' < (char)(&DAT_00374cd1)[iVar7]) {
    iStack_60 = 0;
    do {
      iVar7 = iStack_60;
      lVar11 = 0;
      if (0 < (long)cVar1) {
        iVar10 = iStack_60 * 0x198;
        do {
          uVar6 = iVar7 + (int)lVar11;
          if (((*(uint *)(DAT_0035f638 + (uVar6 >> 5) * 4 + 0x2c) & 1 << (uVar6 & 0x1f)) != 0) ||
             (uStack_70 != 0)) {
            iVar9 = DAT_0035f634 + iVar10;
            iVar8 = ((uint)*(byte *)((int)puVar5 + 2) * 0x30 + uVar6) * 4 + iStack_64;
            cVar2 = *(char *)(iVar8 + 0x1e8);
            uVar3 = *(undefined1 *)(iVar8 + 0x1e9);
            if (cVar2 < '\0') {
              FUN_00138c10(iVar9,0);
            }
            else {
              if ((long)*(int *)(iVar9 + 0x184) == (long)sVar4) {
                uVar6 = *puVar5;
              }
              else {
                FUN_00138c10(iVar9,(long)sVar4);
                uVar6 = *puVar5;
              }
              FUN_002b28b0(uVar6 >> 0x1b & 1,cVar2,uVar3,auStack_80);
              FUN_00239558(iVar9 + 0x18,auStack_80,auStack_78);
            }
          }
          lVar11 = (long)((int)lVar11 + 1);
          iVar10 = iVar10 + 0x198;
        } while (lVar11 < cVar1);
      }
      iStack_6c = iStack_6c + 1;
      iStack_60 = iStack_60 + cVar1;
    } while (iStack_6c < iStack_68);
  }
  iVar7 = DAT_0035f638;
  *(undefined4 *)(DAT_0035f638 + 0x30) = 0;
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  return;
}

