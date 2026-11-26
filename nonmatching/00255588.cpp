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

s32 FUN_001039f8(...) asm("func_001039f8");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_0013a368(...) asm("func_0013a368");
s32 FUN_0013a4b8(...) asm("func_0013a4b8");
s32 FUN_001688b8(...) asm("func_001688b8");
s32 FUN_001a8bd0(...) asm("func_001a8bd0");
s32 FUN_0023f070(...) asm("func_0023f070");
s32 FUN_0023f0c0(...) asm("func_0023f0c0");
s32 FUN_00254f80(...) asm("func_00254f80");
s32 FUN_00255588(...) asm("_ZN2Tz5CmTop7ControlEv");
s32 FUN_00255900(...) asm("func_00255900");
s32 FUN_00256aa0(...) asm("func_00256aa0");
s32 FUN_00256f18(...) asm("func_00256f18");
s32 FUN_0025fb48(...) asm("func_0025fb48");
s32 FUN_00260418(...) asm("func_00260418");
s32 FUN_00260ce0(...) asm("func_00260ce0");
s32 FUN_002612c8(...) asm("func_002612c8");
s32 FUN_00261668(...) asm("func_00261668");
s32 FUN_002618d8(...) asm("func_002618d8");
s32 FUN_002648b8(...) asm("func_002648b8");
s32 FUN_00265018(...) asm("func_00265018");
s32 FUN_00267e00(...) asm("func_00267e00");
s32 FUN_00268db8(...) asm("func_00268db8");
s32 FUN_002691f8(...) asm("func_002691f8");
s32 FUN_002693a8(...) asm("func_002693a8");
s32 FUN_0026c470(...) asm("func_0026c470");
s32 FUN_0026c818(...) asm("func_0026c818");
s32 FUN_0026c9f0(...) asm("func_0026c9f0");
s32 FUN_0026f0a0(...) asm("func_0026f0a0");
s32 FUN_0026f920(...) asm("func_0026f920");
s32 FUN_0026ff78(...) asm("func_0026ff78");
s32 FUN_002708c0(...) asm("func_002708c0");
s32 FUN_00277938(...) asm("func_00277938");
s32 FUN_00278318(...) asm("func_00278318");
s32 FUN_00278dd0(...) asm("func_00278dd0");
s32 FUN_0027c700(...) asm("func_0027c700");
s32 FUN_00283230(...) asm("func_00283230");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287d68(...) asm("func_00287d68");
s32 FUN_00287db0(...) asm("func_00287db0");
s32 FUN_00287dc0(...) asm("func_00287dc0");
s32 FUN_00288088(...) asm("func_00288088");
s32 FUN_00290420(...) asm("func_00290420");
s32 FUN_00290580(...) asm("func_00290580");
s32 FUN_00293668(...) asm("func_00293668");
s32 FUN_002936e8(...) asm("func_002936e8");
s32 FUN_002936f8(...) asm("func_002936f8");
s32 FUN_002938e0(...) asm("func_002938e0");
s32 FUN_002938f0(...) asm("func_002938f0");
s32 FUN_00293948(...) asm("func_00293948");
s32 FUN_00293b70(...) asm("func_00293b70");
extern u32 DAT_0035f03c asm("D_0035f03c");
extern u32 DAT_0035f048 asm("D_0035f048");
extern u32 DAT_0035f060 asm("D_0035f060");

// Ghidra decompile of 0x00255588, wrapped mechanically (ad/fallback.py)

undefined4 FUN_00255588_impl(void) asm("_ZN2Tz5CmTop7ControlEv");
undefined4 FUN_00255588_impl(void) {
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_00287d68();
  FUN_00256f18();
  lVar2 = FUN_00287db0();
  if (lVar2 == 0) {
    lVar2 = FUN_00290580(DAT_0035f048);
    if (lVar2 != 0) {
      FUN_00290420(DAT_0035f048);
    }
    lVar2 = FUN_00139d78(DAT_0035f03c);
    if ((lVar2 != 0) && (lVar2 = FUN_0023f0c0(DAT_0035f03c), lVar2 != 1)) {
      lVar2 = FUN_00288088();
      if (lVar2 == 0) goto switchD_00255768_caseD_22;
      FUN_0023f070(DAT_0035f03c,1,0xffffffffffffffff);
    }
    uVar3 = FUN_00287bc0();
    switch(uVar3) {
    case 0:
      FUN_00255900();
      break;
    case 1:
      FUN_0025fb48();
      break;
    case 2:
      FUN_00267e00();
      break;
    case 3:
      FUN_002691f8();
      break;
    case 4:
      FUN_002693a8();
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      FUN_00268db8();
      break;
    case 10:
      FUN_00260418();
      break;
    case 0xb:
      FUN_00260ce0();
      break;
    case 0xc:
      FUN_002612c8();
      break;
    case 0xd:
      FUN_00261668();
      break;
    case 0xe:
      FUN_002618d8();
      break;
    case 0xf:
      FUN_00277938();
      break;
    case 0x10:
      FUN_00278318();
      break;
    case 0x11:
    case 0x12:
    case 0x13:
      FUN_00278dd0();
      break;
    case 0x14:
      FUN_0026c470();
      break;
    case 0x15:
      FUN_0026c9f0();
      break;
    case 0x16:
      FUN_0026c818();
      break;
    case 0x17:
      FUN_002648b8();
      break;
    case 0x18:
      FUN_00265018();
      break;
    case 0x19:
      FUN_0026f0a0();
      break;
    case 0x1a:
    case 0x1b:
      FUN_0026f920();
      break;
    case 0x1c:
      FUN_0026ff78();
      break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      FUN_002708c0();
      break;
    default:
      goto switchD_00255768_caseD_22;
    case 0x24:
      FUN_0027c700();
      break;
    case 0x25:
      FUN_00283230();
    }
  }
  else {
    lVar2 = FUN_002938f0();
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_00287dc0();
    lVar2 = FUN_00139d78(uVar3);
    if (lVar2 != 0) {
      return 0;
    }
    lVar2 = FUN_00293948();
    if (((lVar2 == 0) || (lVar2 = FUN_00293b70(), lVar2 != 0)) ||
       (lVar2 = FUN_002936f8(), lVar2 == 0)) {
      lVar2 = FUN_002938e0();
      if ((lVar2 != 0) && (lVar2 = FUN_002938f0(), lVar2 == 0)) {
        return 0;
      }
      lVar2 = FUN_00293b70();
      if (lVar2 != 0) {
        return 0;
      }
      lVar2 = FUN_001688b8();
      if (lVar2 != 0) {
        return 0;
      }
      lVar2 = FUN_00293668();
      if (lVar2 != 0) {
        return 0;
      }
      lVar2 = FUN_00139d78(DAT_0035f03c);
      if (lVar2 != 0) {
        return 0;
      }
      lVar2 = FUN_0013a4b8();
      if (lVar2 != 0) {
        FUN_0013a368();
      }
      FUN_00256aa0();
      FUN_00254f80();
      puVar1 = (undefined4 *)FUN_001a8bd0(0xffffffffffffffff);
      DAT_0035f060 = *puVar1;
      FUN_001039f8();
      return 1;
    }
    FUN_002936e8();
switchD_00255768_caseD_22:
;
  }
  return 0;
}

