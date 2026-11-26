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

s32 FUN_0010a7d8(...) asm("func_0010a7d8");
s32 FUN_0010a828(...) asm("func_0010a828");
s32 FUN_0010a8a8(...) asm("func_0010a8a8");
s32 FUN_001432f0(...) asm("func_001432f0");
s32 FUN_0015c4b8(...) asm("func_0015c4b8");
s32 FUN_0015cb18(...) asm("func_0015cb18");
s32 FUN_0015cbb8(...) asm("func_0015cbb8");
s32 FUN_0015cc50(...) asm("func_0015cc50");
s32 FUN_0015cc60(...) asm("func_0015cc60");
s32 FUN_0015cc80(...) asm("func_0015cc80");
s32 FUN_0015efa0(...) asm("_ZN2dk3Map8setColorEhhh");
s32 FUN_0015f268(...) asm("func_0015f268");
s32 FUN_001611a8(...) asm("func_001611a8");
s32 FUN_001dc670(...) asm("func_001dc670");
s32 FUN_001dc9e0(...) asm("func_001dc9e0");
s32 FUN_001dd1b0(...) asm("func_001dd1b0");
s32 FUN_001dd1c8(...) asm("func_001dd1c8");
s32 FUN_001dd1e8(...) asm("func_001dd1e8");
s32 FUN_001de4b0(...) asm("func_001de4b0");
extern u32 DAT_0034c70c asm("D_0034c70c");
extern u32 DAT_0036b46c asm("D_0036b46c");

// Ghidra decompile of 0x0015efa0, wrapped mechanically (ad/fallback.py)

void FUN_0015efa0_impl(byte param_1,byte param_2,byte param_3) asm("_ZN2dk3Map8setColorEhhh");
void FUN_0015efa0_impl(byte param_1,byte param_2,byte param_3) {
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  float *pfVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte abStack_6d [13];
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  undefined8 uVar5;
  
  lVar10 = FUN_0015f268();
  if (lVar10 == 0) {
    bStack_5d = 0x80;
    fVar13 = (float)param_1 * DAT_0036b46c;
    fVar15 = (float)param_3 * DAT_0036b46c;
    fVar14 = (float)param_2 * DAT_0036b46c;
    bStack_60 = param_1;
    bStack_5f = param_2;
    bStack_5e = param_3;
    FUN_0015cb18(&bStack_70,&bStack_6f,&bStack_6e,abStack_6d);
    uVar9 = (int)((uint)bStack_70 * (uint)bStack_60) >> 7;
    uVar8 = (int)((uint)bStack_6f * (uint)bStack_5f) >> 7;
    bStack_70 = (byte)uVar9;
    uVar7 = (int)((uint)bStack_6e * (uint)bStack_5e) >> 7;
    bStack_6f = (byte)uVar8;
    uVar6 = (int)((uint)abStack_6d[0] * (uint)bStack_5d) >> 7;
    bStack_6e = (byte)uVar7;
    abStack_6d[0] = (byte)uVar6;
    FUN_0015cbb8(uVar9 & 0xff,uVar8 & 0xff,uVar7 & 0xff,uVar6 & 0xff);
    FUN_0015c4b8();
    pbVar2 = (byte *)FUN_0015cc60();
    uVar5 = FUN_0015cc50();
    pbVar3 = (byte *)uVar5;
    bStack_70 = (byte)((int)((uint)*pbVar2 * (uint)bStack_60) >> 7);
    bStack_6f = (byte)((int)((uint)pbVar2[1] * (uint)bStack_5f) >> 7);
    bStack_6e = (byte)((int)((uint)pbVar2[2] * (uint)bStack_5e) >> 7);
    *pbVar3 = bStack_70;
    abStack_6d[0] = (byte)((int)((uint)abStack_6d[0] * (uint)bStack_5d) >> 7);
    pbVar3[1] = bStack_6f;
    pbVar3[2] = bStack_6e;
    pbVar3[3] = 0x80;
    lVar10 = FUN_0015cc80(uVar5);
    if (lVar10 == 0) {
      FUN_0010a8a8(*(undefined4 *)(pbVar3 + 0xc),*(undefined4 *)(pbVar3 + 0x10));
      FUN_0010a828(*(undefined4 *)(pbVar3 + 4),*(undefined4 *)(pbVar3 + 8));
      FUN_0010a7d8(*pbVar3,pbVar3[1],pbVar3[2]);
      fVar12 = *(float *)(pbVar3 + 0xc);
    }
    else {
      fVar12 = *(float *)(pbVar3 + 0xc);
    }
    lVar10 = 0;
    FUN_001dd1e8((int)fVar12 & 0xff,(int)*(float *)(pbVar3 + 0x10) & 0xff);
    FUN_001dd1b0(*(undefined4 *)(pbVar3 + 4),*(undefined4 *)(pbVar3 + 8));
    FUN_001dd1c8(*pbVar3,pbVar3[1],pbVar3[2]);
    FUN_001432f0(param_1,param_2,param_3);
    FUN_001611a8(param_1,param_2,param_3);
    if (DAT_0034c70c == '\x01') {
      iVar11 = 0;
      do {
        while (lVar10 = FUN_001de4b0(0x34c6f0,iVar11,lVar10), lVar10 != 0) {
          lVar1 = FUN_001dc9e0(lVar10);
          if (lVar1 != 0) {
            pfVar4 = (float *)FUN_001dc670(lVar10);
            pfVar4[2] = fVar15;
            *pfVar4 = fVar13;
            pfVar4[1] = fVar14;
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x40);
    }
  }
  return;
}

