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

s32 FUN_001058e8(...) asm("func_001058e8");
s32 FUN_00189200(...) asm("func_00189200");
s32 FUN_001a80c8(...) asm("func_001a80c8");
s32 FUN_002570a0(...) asm("func_002570a0");
s32 FUN_002793b0(...) asm("_ZN2Tz9CmAbility18GetFormAbilityInfoEv");
s32 FUN_0027aed8(...) asm("func_0027aed8");
s32 FUN_002859a0(...) asm("func_002859a0");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_0028b040(...) asm("func_0028b040");
extern AnyCell DAT_0035f01c asm("D_0035f01c");
extern AnyCell DAT_0035f230 asm("D_0035f230");
extern AnyCell LAB_00279570 asm("D_00279570");
extern AnyCell LAB_002795dc asm("D_002795dc");

// Ghidra decompile of 0x002793b0, wrapped mechanically (ad/fallback.py)

void FUN_002793b0_impl(void) asm("_ZN2Tz9CmAbility18GetFormAbilityInfoEv");
void FUN_002793b0_impl(void) {
  bool bVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  short *psVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iStack_60;
  int aiStack_5c [3];
  
  iVar4 = FUN_002859a0();
  lVar3 = FUN_00287bc0();
  if (lVar3 == 0xf) {
    uVar7 = FUN_0028b040(DAT_0035f01c);
  }
  else {
    uVar7 = FUN_002570a0(0xf);
  }
  FUN_0027aed8(uVar7,&iStack_60,aiStack_5c);
  if (iStack_60 == 1) {
    iVar5 = 0;
    uVar14 = 0;
    uVar11 = (int)*DAT_0035f230;
    do {
      if (((uVar11 & 1) != 0) &&
         (bVar1 = aiStack_5c[0] == iVar5, iVar5 = iVar5 + 1, uVar12 = uVar14, bVar1)) break;
      uVar14 = uVar14 + 1;
      uVar11 = (int)*DAT_0035f230 >> (uVar14 & 0x1f);
      uVar12 = 0xffffffff;
    } while ((int)uVar14 < 0x10);
    iVar15 = 0;
    iVar5 = FUN_001058e8();
    iVar5 = FUN_00189200(iVar5 + 0x24f0,uVar12);
    uVar11 = uVar12 - 1;
    if (uVar12 != 7) {
      uVar11 = uVar12;
    }
    iVar16 = (int)*(char *)((int)DAT_0035f230 + 7);
    do {
      iVar13 = iVar16 * 8;
      if ((*(ushort *)(iVar5 + 8) & 0x7fff) != 0) {
        DAT_0035f230[iVar16 * 4 + 6] = *(ushort *)(iVar5 + 8) & 0x7fff;
        *(byte *)(DAT_0035f230 + iVar16 * 4 + 7) = (byte)((ushort)*(undefined2 *)(iVar5 + 8) >> 0xf)
        ;
        *(char *)((int)DAT_0035f230 + iVar13 + 0xf) = (char)iVar15;
        iVar6 = FUN_001a80c8(DAT_0035f230[iVar16 * 4 + 6]);
        bVar10 = *(byte *)(iVar6 + 6);
        if (bVar10 < 3) {
          if (bVar10 == 0) {
            uVar9 = 2;
LAB_002795dc:
            *(undefined1 *)(DAT_0035f230 + iVar16 * 4 + 8) = uVar9;
          }
          else {
            *(undefined1 *)(DAT_0035f230 + iVar16 * 4 + 8) = 0;
          }
        }
        else if (bVar10 == 3) {
          uVar9 = 1;
          goto LAB_002795dc;
        }
        iVar6 = 0;
        psVar8 = (short *)((uVar11 - 1) * 0x60 + iVar4 + 0x5f0);
        *(undefined1 *)((int)DAT_0035f230 + iVar13 + 0x11) = 0;
        *(undefined1 *)(DAT_0035f230 + iVar16 * 4 + 9) = 0xff;
        sVar2 = *psVar8;
        while (psVar8 = psVar8 + 1, sVar2 != DAT_0035f230[iVar16 * 4 + 6]) {
          iVar6 = iVar6 + 1;
          if (0x2f < iVar6) goto LAB_00279570;
          sVar2 = *psVar8;
        }
        if (iVar6 < 0x30) {
          bVar10 = (byte)iVar6 | 0x80;
        }
        else {
LAB_00279570:
          bVar10 = 0xff;
        }
        *(byte *)((int)DAT_0035f230 + iVar13 + 0x13) = bVar10;
        iVar16 = iVar16 + 1;
      }
      iVar15 = iVar15 + 1;
      iVar5 = iVar5 + 2;
    } while (iVar15 < 0x18);
    *(char *)((int)DAT_0035f230 + 7) = (char)iVar16;
  }
  return;
}

