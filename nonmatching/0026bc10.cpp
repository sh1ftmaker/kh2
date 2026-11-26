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

s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_001a8c78(...) asm("func_001a8c78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_00256b68(...) asm("func_00256b68");
s32 FUN_00257708(...) asm("func_00257708");
s32 FUN_0026bc10(...) asm("_ZN2Tz7CmParty5SetupEv");
s32 FUN_0026c048(...) asm("func_0026c048");
s32 FUN_0026c140(...) asm("func_0026c140");
s32 FUN_0026cb38(...) asm("func_0026cb38");
s32 FUN_00281100(...) asm("func_00281100");
s32 FUN_00281140(...) asm("func_00281140");
s32 FUN_00281180(...) asm("func_00281180");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_00288e08(...) asm("func_00288e08");
s32 FUN_00288f48(...) asm("func_00288f48");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028af88(...) asm("func_0028af88");
s32 FUN_0028b1b0(...) asm("func_0028b1b0");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028d980(...) asm("func_0028d980");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028f4d8(...) asm("func_0028f4d8");
s32 FUN_002937c0(...) asm("func_002937c0");
s32 FUN_00293bc0(...) asm("func_00293bc0");
extern AnyCell DAT_0035ef64 asm("D_0035ef64");
extern AnyCell DAT_0035ef68 asm("D_0035ef68");
extern AnyCell DAT_0035f010 asm("D_0035f010");
extern AnyCell DAT_0035f01c asm("D_0035f01c");
extern AnyCell DAT_0035f024 asm("D_0035f024");
extern AnyCell DAT_0035f03c asm("D_0035f03c");
extern AnyCell DAT_0035f0f4 asm("D_0035f0f4");
extern AnyCell DAT_0035f0fc asm("D_0035f0fc");
extern AnyCell DAT_0035f3d4 asm("D_0035f3d4");
extern AnyCell DAT_0037382c asm("D_0037382c");
extern AnyCell DAT_00373830 asm("D_00373830");

// Ghidra decompile of 0x0026bc10, wrapped mechanically (ad/fallback.py)

void FUN_0026bc10_impl(void) asm("_ZN2Tz7CmParty5SetupEv");
void FUN_0026bc10_impl(void) {
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  puVar2 = (undefined4 *)FUN_00293bc0();
  *DAT_0035f0fc = *puVar2;
  FUN_002937c0();
  FUN_00288f48(DAT_0035f01c,0x40,0x80,0,0);
  FUN_00288f48(DAT_0035f024,0x40,0x80,0,0);
  FUN_0028f4d8(0,0xffffffffffffffff,0);
  uVar5 = FUN_00256b68(1);
  FUN_0028d8c0(uVar5,0x753d,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0x138,0x139,0);
  for (iVar9 = 0; iVar3 = FUN_00281100(DAT_0035f010), uVar1 = DAT_0035f3d4, iVar9 < iVar3;
      iVar9 = iVar9 + 1) {
    iVar15 = iVar9 << 3;
    iVar3 = 3;
    do {
      iVar3 = iVar3 + -1;
      iVar10 = iVar15 + DAT_0035f0f4;
      iVar15 = iVar15 + 2;
      *(ushort *)(iVar10 + 0xec8) = (iVar9 == 3) + 0x13b;
    } while (-1 < iVar3);
  }
  DAT_0035f3d4 = 0x753e;
  iVar9 = 0;
  iVar3 = 0;
  do {
    iVar10 = iVar9 + 1;
    lVar6 = FUN_00281180(DAT_0035f010,iVar9);
    iVar15 = iVar3;
    if (lVar6 != 0) {
      iVar9 = DAT_0035f0f4 + iVar3 * 8 + 0xec8;
      FUN_00288d80(DAT_0035f01c,iVar3,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0xffffffffffffffff,
                   iVar9,iVar9);
      uVar7 = FUN_002891b8(DAT_0035f01c,iVar3);
      FUN_00138c10(uVar7,*(undefined2 *)(iVar3 * 8 + DAT_0035f0f4 + 0xecc));
      iVar9 = FUN_002891b8(DAT_0035f01c,iVar3);
      *(undefined4 *)(iVar9 + 0x188) = 0xffffffff;
      FUN_00288e08(DAT_0035f01c,iVar3,0xffffffffffffffff,0);
      iVar15 = iVar3 + 1;
      uVar7 = FUN_002891b8(DAT_0035f01c,iVar3);
      FUN_0028dcc0(uVar7,uVar5);
    }
    iVar9 = iVar10;
    iVar3 = iVar15;
  } while (iVar10 < 4);
  if (0 < iVar15) {
    iVar3 = 0;
    iVar9 = 0;
    do {
      if ((iVar9 == 0) || (lVar6 = FUN_001a8c78(puVar2,iVar9), uVar4 = DAT_00373830, lVar6 != 0)) {
        uVar4 = DAT_0037382c;
      }
      FUN_0028d980(DAT_0035f0f4 + iVar3 + 0x7f8,0x753e,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,uVar4,
                   0xffffffffffffffff,0xffffffffffffffff);
      iVar10 = FUN_0023aa98(DAT_0035f0f4 + iVar3 + 0x810);
      FUN_00138c68(DAT_0035f0f4 + iVar3 + 0x7f8,iVar10 * iVar9,0);
      FUN_0028dcc0(DAT_0035f0f4 + iVar3 + 0x7f8,uVar5);
      iVar11 = iVar9 + 1;
      *(undefined4 *)(DAT_0035f0f4 + iVar3 + 0x9a8) = 2;
      iVar10 = DAT_0035f0f4 + iVar3;
      uVar4 = FUN_00281140(DAT_0035f010,iVar9);
      *(undefined4 *)(iVar10 + 0x990) = uVar4;
      iVar3 = iVar3 + 0x1b4;
      iVar9 = iVar11;
    } while (iVar11 < iVar15);
  }
  iVar9 = 0;
  uVar13 = iVar15 < 2 ^ 1;
  DAT_0035f3d4 = uVar1;
  if (uVar13 != 0) {
    uVar14 = 1;
    uVar12 = 1;
    if (1 < iVar15) {
      do {
        lVar6 = FUN_001a8c78(puVar2,uVar12);
        if (lVar6 == 0) {
          lVar6 = FUN_001a8c78(puVar2,uVar13);
          if (lVar6 != 0) {
            uVar13 = uVar12;
          }
        }
        else {
          uVar14 = uVar14 | 1 << (uVar12 & 0x1f);
          iVar9 = iVar9 + 1;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar15);
    }
    FUN_0028b1b0(DAT_0035f01c,uVar14);
  }
  FUN_002891f0(DAT_0035f01c,uVar13,0,0xffffffffffffffff,0xffffffffffffffff);
  if ((iVar15 < 3) || (iVar15 - iVar9 < 3)) {
    uVar8 = FUN_0028af88(DAT_0035f01c);
    FUN_0028af18(DAT_0035f01c,uVar8 & 0xffffffffffffffec);
    FUN_00257708(1);
  }
  FUN_00287cc0(0);
  FUN_0026c140();
  lVar6 = FUN_00287bc0();
  if (lVar6 == 0x14) {
    FUN_0026c048();
  }
  FUN_0026cb38();
  return;
}

