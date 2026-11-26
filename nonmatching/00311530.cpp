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

s32 FUN_00308150(...) asm("func_00308150");
s32 FUN_0030f468(...) asm("func_0030f468");
s32 FUN_00311530(...) asm("func_00311530");
extern u32 DAT_00367770 asm("D_00367770");
extern u32 DAT_00367774 asm("D_00367774");
extern u32 DAT_00367778 asm("D_00367778");
extern u32 DAT_0036777c asm("D_0036777c");
extern undefined *PTR_DAT_00367780 asm("D_00367780");
extern undefined *PTR_DAT_00367784 asm("D_00367784");
extern undefined *PTR_DAT_00367788 asm("D_00367788");
s32 RFU086_WaitEvnetFlag(...) asm("func_00311450");
_GHIDRA_ANY(SYNC)
static AnyCell Wired;

// Ghidra decompile of 0x00311530, wrapped mechanically (ad/fallback.py)

long FUN_00311530_impl(void) asm("func_00311530");
long FUN_00311530_impl(void) {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar5 = DAT_00367770 + DAT_00367774;
  FUN_00308150(0x378418,DAT_00367770 + -1,DAT_00367770,iVar5 + -1,iVar5,iVar5 + DAT_00367778 + -1);
  Wired = 0;
  SYNC(0x10);
  lVar8 = (long)DAT_00367770;
  lVar9 = 0;
  if (0x30 < lVar8) {
    FUN_00308150(0x378450);
    FUN_0030f468(1);
  }
  if (lVar9 < lVar8) {
    uVar4 = *(undefined4 *)PTR_DAT_00367780;
    puVar6 = (undefined4 *)PTR_DAT_00367780;
    while( true ) {
      puVar1 = puVar6 + 1;
      puVar2 = puVar6 + 2;
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 4;
      RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
      lVar9 = (long)((int)lVar9 + 1);
      if (lVar8 <= lVar9) break;
      uVar4 = *puVar6;
    }
  }
  lVar8 = (long)((int)lVar9 + DAT_00367774);
  if (0x30 < lVar8) {
    FUN_00308150(0x378468);
    FUN_0030f468(1);
  }
  if (lVar9 < lVar8) {
    uVar4 = *(undefined4 *)PTR_DAT_00367784;
    puVar6 = (undefined4 *)PTR_DAT_00367784;
    while( true ) {
      puVar1 = puVar6 + 1;
      puVar2 = puVar6 + 2;
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 4;
      RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
      lVar9 = (long)((int)lVar9 + 1);
      if (lVar8 <= lVar9) break;
      uVar4 = *puVar6;
    }
  }
  Wired = (int)lVar9;
  SYNC(0x10);
  DAT_0036777c = Wired;
  if (0 < DAT_00367778) {
    lVar8 = (long)(Wired + DAT_00367778);
    if (0x30 < lVar8) {
      FUN_00308150(0x378480);
      FUN_0030f468(1);
    }
    if (lVar9 < lVar8) {
      uVar4 = *(undefined4 *)PTR_DAT_00367788;
      puVar6 = (undefined4 *)PTR_DAT_00367788;
      while( true ) {
        puVar1 = puVar6 + 1;
        puVar2 = puVar6 + 2;
        puVar3 = puVar6 + 3;
        puVar6 = puVar6 + 4;
        RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
        lVar9 = (long)((int)lVar9 + 1);
        if (lVar8 <= lVar9) break;
        uVar4 = *puVar6;
      }
    }
  }
  iVar5 = (int)lVar9 * 0x2000;
  lVar8 = (long)iVar5;
  if (lVar9 < 0x30) {
    iVar5 = iVar5 + -0x20000000;
    do {
      lVar7 = (long)((int)lVar9 + 1);
      RFU086_WaitEvnetFlag(lVar9,0,iVar5,0,0);
      iVar5 = iVar5 + 0x2000;
      lVar9 = lVar7;
    } while (lVar7 < 0x30);
  }
  return lVar8;
}

