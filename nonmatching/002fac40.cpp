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
// by its use site (uint*, char, float, ...); AnyCell reads/writes as whatever that is, and
// arithmetic / deref / index / address-of on it yield further untyped values.
struct AnyCell;
struct AnyPtr {
    void *p;
    template <class T> operator T*() const { return (T*)p; }
    AnyCell &operator*() const { return *(AnyCell*)p; }
    AnyCell &operator[](int i) const;
    operator s64() const { return (s64)(u32)(unsigned long)p; }
    AnyPtr operator+(s64 o) const { AnyPtr r; r.p = (u8*)p + o; return r; }
    AnyPtr operator-(s64 o) const { AnyPtr r; r.p = (u8*)p - o; return r; }
    template <class T> bool operator==(T *q) const { return p == (void*)q; }
    template <class T> bool operator!=(T *q) const { return p != (void*)q; }
    bool operator==(s64 v) const { return (s64)*this == v; }
    bool operator!=(s64 v) const { return (s64)*this != v; }
};
struct AnyCell {
    u32 w;
    template <class T> operator T() const { return *(const T*)this; }
    operator s64() const { return *(const s32*)this; }
    template <class T> AnyCell &operator=(const T &v) { *(T*)this = v; return *this; }
    AnyCell &operator=(const AnyCell &v) { w = v.w; return *this; }
    template <class T> bool operator==(T *p) const { return *(T* const*)this == p; }
    template <class T> bool operator!=(T *p) const { return *(T* const*)this != p; }
    bool operator==(s64 v) const { return *(const s32*)this == v; }
    bool operator!=(s64 v) const { return *(const s32*)this != v; }
    bool operator==(const AnyCell &o) const { return w == o.w; }
    bool operator!=(const AnyCell &o) const { return w != o.w; }
    bool operator<(const AnyCell &o) const { return (s32)w < (s32)o.w; }
    bool operator>(const AnyCell &o) const { return (s32)w > (s32)o.w; }
    bool operator<=(const AnyCell &o) const { return (s32)w <= (s32)o.w; }
    bool operator>=(const AnyCell &o) const { return (s32)w >= (s32)o.w; }
    AnyCell &operator*() const { return **(AnyCell* const*)this; }
    AnyCell &operator[](int i) const { return (*(AnyCell* const*)this)[i]; }
    AnyPtr operator&() const { AnyPtr r; r.p = (void*)this; return r; }
    AnyCell operator+(s64 v) const { AnyCell r; r.w = w + (u32)v; return r; }
    AnyCell operator-(s64 v) const { AnyCell r; r.w = w - (u32)v; return r; }
    AnyCell operator*(s64 v) const { AnyCell r; r.w = w * (u32)v; return r; }
    AnyCell operator&(s64 v) const { AnyCell r; r.w = w & (u32)v; return r; }
    AnyCell operator|(s64 v) const { AnyCell r; r.w = w | (u32)v; return r; }
    AnyCell operator^(s64 v) const { AnyCell r; r.w = w ^ (u32)v; return r; }
    AnyCell operator<<(s64 v) const { AnyCell r; r.w = w << (u32)v; return r; }
    AnyCell operator>>(s64 v) const { AnyCell r; r.w = w >> (u32)v; return r; }
    template <class T> AnyCell &operator+=(const T &v) { w += (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator-=(const T &v) { w -= (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator|=(const T &v) { w |= (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator&=(const T &v) { w &= (u32)(s64)v; return *this; }
    AnyCell &operator++() { ++w; return *this; }
    AnyCell &operator--() { --w; return *this; }
    AnyCell operator++(int) { AnyCell r = *this; ++w; return r; }
    AnyCell operator--(int) { AnyCell r = *this; --w; return r; }
    AnyCell operator()() const { return *this; }
    template <class A> AnyCell operator()(const A &) const { return *this; }
    template <class A, class B> AnyCell operator()(const A &, const B &) const { return *this; }
    template <class A, class B, class C> AnyCell operator()(const A &, const B &, const C &) const { return *this; }
    template <class A, class B, class C, class D> AnyCell operator()(const A &, const B &, const C &, const D &) const { return *this; }
    template <class A, class B, class C, class D, class E> AnyCell operator()(const A &, const B &, const C &, const D &, const E &) const { return *this; }
    template <class A, class B, class C, class D, class E, class F> AnyCell operator()(const A &, const B &, const C &, const D &, const E &, const F &) const { return *this; }
};
inline AnyCell &AnyPtr::operator[](int i) const { return ((AnyCell*)p)[i]; }
template <class T> inline bool operator==(T *p, const AnyCell &c) { return c == p; }
template <class T> inline bool operator!=(T *p, const AnyCell &c) { return c != p; }
template <class T> inline bool operator==(T *p, const AnyPtr &c) { return c == p; }
template <class T> inline bool operator!=(T *p, const AnyPtr &c) { return c != p; }
inline bool operator==(s64 v, const AnyCell &c) { return c == v; }
inline bool operator!=(s64 v, const AnyCell &c) { return c != v; }
inline bool operator<(const AnyCell &c, s64 v) { return (s64)c < v; }
inline bool operator>(const AnyCell &c, s64 v) { return (s64)c > v; }
inline bool operator<=(const AnyCell &c, s64 v) { return (s64)c <= v; }
inline bool operator>=(const AnyCell &c, s64 v) { return (s64)c >= v; }
inline bool operator<(s64 v, const AnyCell &c) { return v < (s64)c; }
inline bool operator>(s64 v, const AnyCell &c) { return v > (s64)c; }
inline bool operator<=(s64 v, const AnyCell &c) { return v <= (s64)c; }
inline bool operator>=(s64 v, const AnyCell &c) { return v >= (s64)c; }
typedef u8 BADSPACEBASE;
// Generic stand-in result for Ghidra intrinsics (_lqc2, _vadd..., CONCAT44, SUB168, ...):
// converts to whatever the use site needs. Mechanical, never a match, always compiles.
struct AnyVal {
    template <class T> operator T() const { T t; return t; }
    operator s64() const { return 0; }
    template <class T> bool operator==(const T &) const { return false; }
    template <class T> bool operator!=(const T &) const { return false; }
    template <class T> bool operator<(const T &) const { return false; }
    template <class T> bool operator>(const T &) const { return false; }
    operator Q16() const { Q16 q; return q; }
    operator B12() const { B12 q; return q; }
    operator B8() const { B8 q; return q; }
    operator B4() const { B4 q; return q; }
};
#define _GHIDRA_ANY(F) static inline AnyVal F() { AnyVal r; return r; } template <class A> static inline AnyVal F(const A &) { AnyVal r; return r; } template <class A, class B> static inline AnyVal F(const A &, const B &) { AnyVal r; return r; } template <class A, class B, class C> static inline AnyVal F(const A &, const B &, const C &) { AnyVal r; return r; } template <class A, class B, class C, class D> static inline AnyVal F(const A &, const B &, const C &, const D &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E, class G> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &, const G &) { AnyVal r; return r; }

s32 FUN_002f8888(...) asm("func_002f8888");
s32 FUN_002fac40(...) asm("func_002fac40");
s32 FUN_002fb850(...) asm("func_002fb850");
extern AnyCell DAT_003776e0 asm("D_003776e0");
extern AnyCell DAT_003776f0 asm("D_003776f0");
extern AnyCell DAT_0037772c asm("D_0037772c");
extern AnyCell DAT_00377730 asm("D_00377730");
extern AnyCell DAT_00377734 asm("D_00377734");
extern AnyCell DAT_00377738 asm("D_00377738");
extern AnyCell DAT_0037773c asm("D_0037773c");
extern AnyCell DAT_00377740 asm("D_00377740");
extern AnyCell LAB_002fad78 asm("D_002fad78");
extern AnyCell LAB_002faeac asm("D_002faeac");
extern AnyCell LAB_002faed8 asm("D_002faed8");
extern AnyCell LAB_002fb18c asm("D_002fb18c");
extern AnyCell LAB_002fb384 asm("D_002fb384");

// Ghidra decompile of 0x002fac40, wrapped mechanically (ad/fallback.py)

/* WARNING: Type propagation algorithm not settling */

uint FUN_002fac40_impl(float *param_1,float *param_2,int param_3,int param_4,int param_5,int param_6) asm("func_002fac40");
uint FUN_002fac40_impl(float *param_1,float *param_2,int param_3,int param_4,int param_5,int param_6) {
  int iVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uStack_1b4;
  uint auStack_1b0 [20];
  float afStack_160 [20];
  float afStack_110 [19];
  float afStack_c4 [21];
  float *pfStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  
  iVar17 = param_3 + -3;
  if (param_3 + -3 < 0) {
    iVar17 = param_3 + 4;
  }
  iVar17 = iVar17 >> 3;
  if (iVar17 < 0) {
    iVar17 = 0;
  }
  iVar15 = param_4 + -1;
  iStack_6c = param_5;
  iVar14 = *(int *)(&DAT_003776e0 + param_5 * 4);
  param_3 = param_3 + iVar17 * -8;
  pfStack_70 = param_2;
  iStack_68 = param_6;
  iVar16 = param_3 + -8;
  iVar8 = iVar17 - iVar15;
  if (-1 < iVar15 + iVar14) {
    iVar4 = iVar15 + iVar14 + 1;
    piVar11 = (int *)(iVar8 * 4 + param_6);
    pfVar9 = afStack_160;
    do {
      fVar19 = 0.0;
      if (-1 < iVar8) {
        fVar19 = (float)*piVar11;
      }
      *pfVar9 = fVar19;
      iVar4 = iVar4 + -1;
      piVar11 = piVar11 + 1;
      iVar8 = iVar8 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  uStack_64 = (uint)(iVar14 < 0);
  iVar8 = iVar14;
  if (iVar14 >= 0) {
    iVar1 = (int)auStack_1b0 + iVar15 * 4;
    pfVar9 = afStack_c4;
    do {
      pfVar9 = pfVar9 + 1;
      fVar19 = 0.0;
      if (-1 < iVar15) {
        pfVar10 = (float *)(iVar1 + 0x50);
        iVar5 = param_4;
        pfVar12 = param_1;
        do {
          fVar20 = *pfVar12;
          iVar5 = iVar5 + -1;
          fVar18 = *pfVar10;
          pfVar12 = pfVar12 + 1;
          pfVar10 = pfVar10 + -1;
          fVar19 = fVar19 + fVar20 * fVar18;
        } while (iVar5 != 0);
      }
      *pfVar9 = fVar19;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar4 <= iVar14);
  }
LAB_002fad78:
  iVar4 = iVar8;
  fVar19 = afStack_c4[iVar4 + 1];
  if (0 < iVar4) {
    pfVar9 = afStack_c4 + iVar4;
    puVar7 = auStack_1b0;
    iVar8 = iVar4;
    do {
      iVar8 = iVar8 + -1;
      fVar18 = *pfVar9;
      pfVar9 = pfVar9 + -1;
      fVar20 = fVar19 - (float)(int)(fVar19 * DAT_0037772c) * DAT_00377730;
      fVar19 = fVar18 + (float)(int)(fVar19 * DAT_0037772c);
      *puVar7 = (int)fVar20;
      puVar7 = puVar7 + 1;
    } while (0 < iVar8);
  }
  iVar8 = 0;
  fVar19 = (float)FUN_002fb850(fVar19,iVar16);
  fVar18 = (float)FUN_002f8888(fVar19 * DAT_00377734);
  fVar19 = fVar19 - fVar18 * DAT_00377738;
  uVar21 = (uint)fVar19;
  fVar19 = fVar19 - (float)(int)uVar21;
  if (iVar16 < 1) {
    if (iVar16 == 0) {
      iVar8 = (int)(&uStack_1b4)[iVar4] >> 8;
    }
    else if (DAT_0037773c <= fVar19) {
      iVar8 = 2;
    }
  }
  else {
    iVar8 = (int)(&uStack_1b4)[iVar4] >> (8U - iVar16 & 0x1f);
    uVar21 = uVar21 + iVar8;
    uVar6 = (&uStack_1b4)[iVar4] - (iVar8 << (8U - iVar16 & 0x1f));
    (&uStack_1b4)[iVar4] = uVar6;
    iVar8 = (int)uVar6 >> (7U - iVar16 & 0x1f);
  }
  if (0 < iVar8) {
    uVar21 = uVar21 + 1;
    bVar2 = false;
    puVar7 = auStack_1b0;
    iVar1 = iVar4;
    if (0 < iVar4) {
      do {
        uVar6 = *puVar7;
        uVar13 = 0xff - uVar6;
        if (bVar2) {
LAB_002faeac:
          *puVar7 = uVar13;
        }
        else {
          uVar13 = 0x100 - uVar6;
          if (uVar6 != 0) {
            bVar2 = true;
            goto LAB_002faeac;
          }
        }
        iVar1 = iVar1 + -1;
        puVar7 = puVar7 + 1;
      } while (iVar1 != 0);
    }
    if (0 < iVar16) {
      if (iVar16 == 1) {
        uVar6 = (&uStack_1b4)[iVar4] & 0x7f;
      }
      else {
        if (iVar16 != 2) goto LAB_002faed8;
        uVar6 = (&uStack_1b4)[iVar4] & 0x3f;
      }
      (&uStack_1b4)[iVar4] = uVar6;
    }
LAB_002faed8:
    if ((iVar8 == 2) && (fVar19 = DAT_00377740 - fVar19, bVar2)) {
      fVar18 = (float)FUN_002fb850(iVar16);
      fVar19 = fVar19 - fVar18;
    }
  }
  iVar1 = iVar4 + -1;
  if (fVar19 != 0.0) goto LAB_002fb384;
  uVar6 = 0;
  if (iVar14 <= iVar1) {
    uVar6 = 0;
    puVar7 = (uint *)((int)auStack_1b0 + iVar1 * 4);
    do {
      iVar1 = iVar1 + -1;
      uVar6 = uVar6 | *puVar7;
      puVar7 = puVar7 + -1;
    } while (iVar14 <= iVar1);
  }
  if (uVar6 == 0) {
    iVar8 = 1;
    if (*(int *)((int)auStack_1b0 + (iVar14 + -1) * 4) == 0) {
      puVar7 = &uStack_1b4 + iVar14;
      do {
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + 1;
      } while (*puVar7 == 0);
    }
    iVar8 = iVar4 + iVar8;
    iVar1 = iVar4 + 1;
    if (iVar1 <= iVar8) {
      pfVar9 = afStack_160 + iVar15 + iVar1;
      iVar5 = (int)auStack_1b0 + (iVar15 + iVar1) * 4;
      pfVar12 = afStack_c4 + iVar4 + 2;
      piVar11 = (int *)((iVar17 + iVar1) * 4 + iStack_68);
      do {
        fVar19 = 0.0;
        *pfVar9 = (float)*piVar11;
        if (-1 < iVar15) {
          pfVar3 = (float *)(iVar5 + 0x50);
          pfVar10 = param_1;
          iVar4 = param_4;
          do {
            fVar20 = *pfVar10;
            iVar4 = iVar4 + -1;
            fVar18 = *pfVar3;
            pfVar10 = pfVar10 + 1;
            pfVar3 = pfVar3 + -1;
            fVar19 = fVar19 + fVar20 * fVar18;
          } while (iVar4 != 0);
        }
        *pfVar12 = fVar19;
        iVar1 = iVar1 + 1;
        pfVar9 = pfVar9 + 1;
        piVar11 = piVar11 + 1;
        pfVar12 = pfVar12 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar1 <= iVar8);
    }
    goto LAB_002fad78;
  }
  if (fVar19 == 0.0) {
    iVar4 = iVar4 + -1;
    piVar11 = (int *)((int)auStack_1b0 + iVar4 * 4);
    param_3 = param_3 + -0x10;
    iVar17 = *piVar11;
    while (iVar17 == 0) {
      piVar11 = piVar11 + -1;
      iVar4 = iVar4 + -1;
      param_3 = param_3 + -8;
      iVar17 = *piVar11;
    }
  }
  else {
LAB_002fb384:
    fVar19 = (float)FUN_002fb850(fVar19,-iVar16);
    if (DAT_00377730 <= fVar19) {
      iVar17 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(int *)((int)auStack_1b0 + iVar17) =
           (int)(fVar19 - (float)(int)(fVar19 * DAT_0037772c) * DAT_00377730);
      *(int *)((int)auStack_1b0 + iVar4 * 4) = (int)(float)(int)(fVar19 * DAT_0037772c);
    }
    else {
      *(int *)((int)auStack_1b0 + iVar4 * 4) = (int)fVar19;
      param_3 = iVar16;
    }
  }
  fVar19 = (float)FUN_002fb850(DAT_00377740,param_3);
  if (-1 < iVar4) {
    piVar11 = (int *)((int)auStack_1b0 + iVar4 * 4);
    iVar17 = iVar4;
    do {
      iVar17 = iVar17 + -1;
      fVar18 = fVar19 * (float)*piVar11;
      fVar19 = fVar19 * DAT_0037772c;
      piVar11[0x3c] = (int)fVar18;
      piVar11 = piVar11 + -1;
    } while (-1 < iVar17);
    if (-1 < iVar4) {
      iVar15 = (int)auStack_1b0 + iVar4 * 4;
      iVar17 = iVar4;
      do {
        fVar19 = 0.0;
        iVar16 = 0;
        if (uStack_64 == 0) {
          iVar1 = iVar4 - iVar17;
          if (-1 < iVar1) {
            pfVar12 = (float *)(iVar15 + 0xf0);
            fVar18 = DAT_003776f0;
            pfVar9 = &DAT_003776f0;
            while( true ) {
              iVar16 = iVar16 + 1;
              fVar20 = *pfVar12;
              pfVar9 = pfVar9 + 1;
              pfVar12 = pfVar12 + 1;
              fVar19 = fVar19 + fVar18 * fVar20;
              if ((iVar14 < iVar16) || (iVar1 < iVar16)) break;
              fVar18 = *pfVar9;
            }
          }
        }
        else {
          iVar1 = iVar4 - iVar17;
        }
        iVar15 = iVar15 + -4;
        iVar17 = iVar17 + -1;
        afStack_110[iVar1] = fVar19;
      } while (-1 < iVar17);
    }
  }
  if (iStack_6c < 3) {
    if (iStack_6c < 1) {
      if (iStack_6c == 0) {
        fVar19 = 0.0;
        if (-1 < iVar4) {
          pfVar9 = afStack_110 + iVar4;
          do {
            iVar4 = iVar4 + -1;
            fVar19 = fVar19 + *pfVar9;
            pfVar9 = pfVar9 + -1;
          } while (-1 < iVar4);
        }
        if (iVar8 != 0) {
          fVar19 = -fVar19;
        }
        *pfStack_70 = fVar19;
      }
      goto LAB_002fb18c;
    }
    afStack_110[1] = 0.0;
    if (-1 < iVar4) {
      pfVar9 = afStack_110 + iVar4;
      iVar17 = iVar4;
      do {
        iVar17 = iVar17 + -1;
        afStack_110[1] = afStack_110[1] + *pfVar9;
        pfVar9 = pfVar9 + -1;
      } while (-1 < iVar17);
    }
    fVar19 = afStack_110[1];
    if (iVar8 != 0) {
      fVar19 = -afStack_110[1];
    }
    *pfStack_70 = fVar19;
    afStack_110[1] = afStack_110[0] - afStack_110[1];
    if (0 < iVar4) {
      pfVar9 = afStack_110;
      do {
        pfVar9 = pfVar9 + 1;
        iVar4 = iVar4 + -1;
        afStack_110[1] = afStack_110[1] + *pfVar9;
      } while (iVar4 != 0);
    }
    if (iVar8 != 0) {
      afStack_110[1] = -afStack_110[1];
    }
  }
  else {
    if (iStack_6c != 3) goto LAB_002fb18c;
    if (0 < iVar4) {
      iVar14 = (int)auStack_1b0 + iVar4 * 4;
      iVar17 = iVar4;
      do {
        fVar19 = *(float *)(iVar14 + 0x9c);
        iVar17 = iVar17 + -1;
        fVar18 = fVar19 + *(float *)(iVar14 + 0xa0);
        *(float *)(iVar14 + 0x9c) = fVar18;
        *(float *)(iVar14 + 0xa0) = *(float *)(iVar14 + 0xa0) + (fVar19 - fVar18);
        iVar14 = iVar14 + -4;
      } while (0 < iVar17);
    }
    if (1 < iVar4) {
      iVar14 = (int)auStack_1b0 + iVar4 * 4;
      iVar17 = iVar4;
      do {
        fVar19 = *(float *)(iVar14 + 0x9c);
        iVar17 = iVar17 + -1;
        fVar18 = fVar19 + *(float *)(iVar14 + 0xa0);
        *(float *)(iVar14 + 0x9c) = fVar18;
        *(float *)(iVar14 + 0xa0) = *(float *)(iVar14 + 0xa0) + (fVar19 - fVar18);
        iVar14 = iVar14 + -4;
      } while (1 < iVar17);
    }
    fVar19 = 0.0;
    if (1 < iVar4) {
      pfVar9 = afStack_110 + iVar4;
      do {
        iVar4 = iVar4 + -1;
        fVar19 = fVar19 + *pfVar9;
        pfVar9 = pfVar9 + -1;
      } while (1 < iVar4);
    }
    if (iVar8 == 0) {
      pfStack_70[2] = fVar19;
      *pfStack_70 = afStack_110[0];
      pfStack_70[1] = afStack_110[1];
      goto LAB_002fb18c;
    }
    afStack_110[1] = -afStack_110[1];
    pfStack_70[2] = -fVar19;
    *pfStack_70 = -afStack_110[0];
  }
  pfStack_70[1] = afStack_110[1];
LAB_002fb18c:
  return uVar21 & 7;
}

