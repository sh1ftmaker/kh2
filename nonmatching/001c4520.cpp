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

s32 FUN_001050d8(...) asm("func_001050d8");
s32 FUN_001a7610(...) asm("func_001a7610");
s32 FUN_001c4498(...) asm("func_001c4498");
s32 FUN_001c4520(...) asm("_ZN2YS13CROWD_M_EX6606CreateEPKNS_8OBJENTRYERKN2kn7FVectorEf");
s32 FUN_001c4e30(...) asm("func_001c4e30");
s32 FUN_001db888(...) asm("func_001db888");
s32 FUN_001dba18(...) asm("func_001dba18");
s32 FUN_001dbc58(...) asm("func_001dbc58");
extern u32 DAT_00351604 asm("D_00351604");
extern u32 DAT_00351608 asm("D_00351608");
extern u32 DAT_0035160c asm("D_0035160c");
extern u32 DAT_003638d0 asm("D_003638d0");
extern u32 DAT_0036de3c asm("D_0036de3c");
extern u32 DAT_0036de40 asm("D_0036de40");
extern u32 DAT_0036de44 asm("D_0036de44");
extern u32 DAT_0036de48 asm("D_0036de48");
extern u32 DAT_0036de4c asm("D_0036de4c");
extern u32 DAT_0036de50 asm("D_0036de50");
extern u32 DAT_0036de54 asm("D_0036de54");
extern u32 DAT_0036de58 asm("D_0036de58");
extern u32 DAT_0036de5c asm("D_0036de5c");

// Ghidra decompile of 0x001c4520, wrapped mechanically (ad/fallback.py)

int FUN_001c4520_impl(undefined8 param_1,float *param_2) asm("_ZN2YS13CROWD_M_EX6606CreateEPKNS_8OBJENTRYERKN2kn7FVectorEf");
int FUN_001c4520_impl(undefined8 param_1,float *param_2) {
  uint uVar1;
  float fVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  
  lVar3 = FUN_001dba18();
  iStack_6c = (int)lVar3;
  if (lVar3 == 0) {
    uVar4 = FUN_001050d8(0xa00);
    FUN_001c4498(uVar4,param_1);
    iStack_6c = (int)uVar4;
    DAT_00351604 = 0x1e;
    DAT_00351608 = 0;
    DAT_0035160c = 0;
  }
  fVar2 = DAT_0036de3c;
  iStack_68 = *(int *)(iStack_6c + 0x9f4);
  iVar7 = iStack_68 + 0x14;
  iStack_70 = 0;
  fVar10 = DAT_0036de3c;
  do {
    iVar6 = 0;
    fVar8 = (float)iStack_70 * DAT_0036de3c - DAT_0036de40;
    do {
      uVar1 = DAT_003638d0 * 0x10dcd;
      fStack_7c = param_2[1];
      DAT_003638d0 = DAT_003638d0 * 0x1c587629;
      fStack_80 = *param_2 + fVar8 + (float)uVar1 * DAT_0036de44 * fVar2;
      uStack_74 = 0;
      fStack_78 = param_2[2] +
                  ((float)iVar6 * fVar10 - DAT_0036de40) +
                  (float)DAT_003638d0 * DAT_0036de44 * DAT_0036de3c;
      uVar4 = 0x1c46f0;
      FUN_001a7610(DAT_0036de48,DAT_0036de4c,&fStack_80,&fStack_80,4);
      DAT_003638d0 = DAT_003638d0 * 0x10dcd;
      uStack_74 = DAT_0036de54;
      iVar6 = iVar6 + 1;
      fVar9 = DAT_0036de58 + (float)DAT_003638d0 * DAT_0036de44 * DAT_0036de50;
      fStack_7c = fStack_7c - (fVar9 + DAT_0036de5c);
      uVar4 = FUN_001db888(iVar7,0x60,uVar4);
      FUN_001dbc58(uVar4,iStack_68,&fStack_80,0x1d49580);
      iVar5 = (int)uVar4;
      *(code **)(iVar5 + 0x54) = FUN_001c4e30;
      *(int *)(iVar5 + 0x58) = (int)fVar9;
      DAT_003638d0 = DAT_003638d0 * 0x10dcd;
      *(char *)(iVar5 + 0x51) = (char)(((ulong)DAT_003638d0 << 3) >> 0x20);
      DAT_00351604 = DAT_00351604 + 1;
    } while (iVar6 < 7);
    iStack_70 = iStack_70 + 1;
  } while (iStack_70 < 7);
  return iStack_6c;
}

