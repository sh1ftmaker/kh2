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
s32 FUN_0023f070(...) asm("func_0023f070");
s32 FUN_0023f0c0(...) asm("func_0023f0c0");
s32 FUN_002749f0(...) asm("func_002749f0");
s32 FUN_00275180(...) asm("_ZN2Tz6Jiminy7ControlEv");
s32 FUN_00276438(...) asm("func_00276438");
s32 FUN_00276fa8(...) asm("func_00276fa8");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287d68(...) asm("func_00287d68");
s32 FUN_00287db0(...) asm("func_00287db0");
s32 FUN_00287dc0(...) asm("func_00287dc0");
s32 FUN_00288088(...) asm("func_00288088");
s32 FUN_00288750(...) asm("func_00288750");
s32 FUN_002887c8(...) asm("func_002887c8");
s32 FUN_00294b80(...) asm("func_00294b80");
s32 FUN_00296168(...) asm("func_00296168");
s32 FUN_002968d8(...) asm("func_002968d8");
s32 FUN_00297630(...) asm("func_00297630");
s32 FUN_00298410(...) asm("func_00298410");
s32 FUN_00298988(...) asm("func_00298988");
s32 FUN_00299e70(...) asm("func_00299e70");
s32 FUN_0029b378(...) asm("func_0029b378");
s32 FUN_0029ba88(...) asm("func_0029ba88");
s32 FUN_0029c098(...) asm("func_0029c098");
s32 FUN_0029c5c8(...) asm("func_0029c5c8");
s32 FUN_0029f220(...) asm("func_0029f220");
s32 FUN_0029f938(...) asm("func_0029f938");
s32 FUN_002a0cb8(...) asm("func_002a0cb8");
s32 FUN_002a23a0(...) asm("func_002a23a0");
s32 FUN_002a2818(...) asm("func_002a2818");
s32 FUN_002a52b0(...) asm("func_002a52b0");
s32 FUN_002a5a90(...) asm("func_002a5a90");
s32 FUN_002a6be0(...) asm("func_002a6be0");
s32 FUN_002a7a60(...) asm("func_002a7a60");
s32 FUN_002a8d98(...) asm("func_002a8d98");
s32 FUN_002af010(...) asm("func_002af010");
extern u32 DAT_0035f140 asm("D_0035f140");
extern u32 DAT_0035f210 asm("D_0035f210");
extern u32 DAT_0035f222 asm("D_0035f222");
extern u32 LAB_002752a8 asm("D_002752a8");
static AnyCell x01;

// Ghidra decompile of 0x00275180, wrapped mechanically (ad/fallback.py)

undefined4 FUN_00275180_impl(void) asm("_ZN2Tz6Jiminy7ControlEv");
undefined4 FUN_00275180_impl(void) {
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00276fa8();
  FUN_00287d68();
  FUN_00276438();
  lVar3 = FUN_00287db0();
  if (lVar3 != 0) {
    uVar4 = FUN_00287dc0();
    lVar3 = FUN_00139d78(uVar4);
    if (lVar3 != 0) {
      return 0;
    }
    lVar3 = FUN_00139d78(DAT_0035f210);
    if (lVar3 != 0) {
      return 0;
    }
    FUN_002749f0();
    if ((DAT_0035f140 & 4) != 0) {
      if (DAT_0035f222 != '\0') {
        return 0;
      }
      lVar3 = FUN_002887c8();
      if (lVar3 != 0) {
        DAT_0035f222 = '\x01';
        FUN_00288750(0x2766c0);
      }
    }
    if (DAT_0035f222 != '\0') {
      return 0;
    }
    FUN_001039f8();
    return 1;
  }
  lVar3 = FUN_00139d78(DAT_0035f210);
  if ((lVar3 == 0) || (sVar1 = FUN_0023f0c0(DAT_0035f210), sVar1 == *(short *)(iVar2 + 4))) {
LAB_002752a8:
    uVar4 = FUN_00287bc0();
    switch(uVar4) {
    case 0:
      FUN_00294b80();
      break;
    case 1:
      FUN_002968d8();
      break;
    case 2:
      FUN_00296168();
      break;
    case 3:
      FUN_00297630();
      break;
    case 4:
      FUN_00298410();
      break;
    case 5:
      FUN_00298988();
      break;
    case 6:
    case 0xc:
    case 0x28:
      FUN_002a0cb8();
      break;
    case 7:
    case 9:
    case 0x1a:
    case 0x22:
      FUN_002a23a0();
      break;
    case 8:
      FUN_002a2818();
      break;
    case 10:
    case 0x23:
      FUN_002a8d98();
      break;
    case 0xb:
    case 0x24:
      FUN_002a7a60();
      break;
    case 0xd:
      FUN_00299e70();
      break;
    case 0xe:
      FUN_0029b378();
      break;
    case 0xf:
    case 0x12:
    case 0x15:
      FUN_0029ba88();
      break;
    case 0x10:
    case 0x13:
    case 0x16:
      FUN_0029c098();
      break;
    case 0x11:
    case 0x14:
    case 0x17:
      FUN_0029c5c8();
      break;
    case 0x18:
      FUN_0029f220();
      break;
    case 0x19:
      FUN_0029f938();
      break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      FUN_002af010();
      break;
    case 0x25:
      FUN_002a52b0();
      break;
    case 0x26:
      FUN_002a5a90();
      break;
    case 0x27:
      FUN_002a6be0();
      break;
    default:
      goto switchD_002752cc_default;
    }
  }
  else {
    lVar3 = FUN_00288088();
    if (lVar3 != 0) {
      FUN_0023f070(DAT_0035f210,*(undefined2 *)(iVar2 + 4),0xffffffffffffffff);
      goto LAB_002752a8;
    }
switchD_002752cc_default:
;
  }
  return 0;
}

