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
#define _GHIDRA_BYTES(NAME, N, AL) struct __attribute__((aligned(AL))) NAME {     u8 b[N];     NAME() {}     template <class T> NAME(const T &v) { *(T*)b = v; }     template <class T> NAME &operator=(const T &v) { *(T*)b = v; return *this; }     template <class T> bool operator==(const T &o) const { return (s64)*this == (s64)o; }     template <class T> bool operator!=(const T &o) const { return (s64)*this != (s64)o; }     template <class T> operator T*() const { return (T*)b; }     operator s64() const { return *(s64*)b; }     u8 &operator[](int i) { return b[i]; }     u8 *operator+(int o) const { return (u8*)b + o; } };
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
    operator Q16() const { return *(const Q16*)this; }
    operator B12() const { return *(const B12*)this; }
    operator B8() const { return *(const B8*)this; }
    operator B4() const { return *(const B4*)this; }
    template <class T> AnyCell &operator=(const T &v) { *(T*)this = v; return *this; }
    AnyCell &operator=(const AnyCell &v) { w = v.w; return *this; }
    template <class T> bool operator==(T *p) const { return *(T* const*)this == p; }
    template <class T> bool operator!=(T *p) const { return *(T* const*)this != p; }
    bool operator==(s64 v) const { return *(const s32*)this == v; }
    bool operator!=(s64 v) const { return *(const s32*)this != v; }
    bool operator==(const AnyCell &o) const { return w == o.w; }
    bool operator!=(const AnyCell &o) const { return w != o.w; }
    bool operator==(const AnyPtr &o) const { return (s64)*this == (s64)o; }
    bool operator!=(const AnyPtr &o) const { return (s64)*this != (s64)o; }
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
inline AnyPtr operator+(s64 v, const AnyPtr &p) { return p + v; }
inline AnyCell operator+(s64 v, const AnyCell &c) { return c + v; }
inline AnyCell operator-(s64 v, const AnyCell &c) { AnyCell r; r.w = (u32)v - c.w; return r; }
inline AnyCell operator*(s64 v, const AnyCell &c) { return c * v; }
inline AnyCell operator&(s64 v, const AnyCell &c) { return c & v; }
inline AnyCell operator|(s64 v, const AnyCell &c) { return c | v; }
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
inline bool operator==(const AnyCell &, const AnyVal &) { return false; }
inline bool operator!=(const AnyCell &, const AnyVal &) { return false; }
#define _GHIDRA_ANY(F) static inline AnyVal F() { AnyVal r; return r; } template <class A> static inline AnyVal F(const A &) { AnyVal r; return r; } template <class A, class B> static inline AnyVal F(const A &, const B &) { AnyVal r; return r; } template <class A, class B, class C> static inline AnyVal F(const A &, const B &, const C &) { AnyVal r; return r; } template <class A, class B, class C, class D> static inline AnyVal F(const A &, const B &, const C &, const D &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E, class G> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &, const G &) { AnyVal r; return r; }

s32 FUN_0013f9e0(...) asm("_ZN2dk9ObjCamera9collisionERKN2kn7FVectorES4_RS2_bb");
s32 FUN_001422a0(...) asm("func_001422a0");
s32 FUN_00143d10(...) asm("func_00143d10");
s32 FUN_00143e50(...) asm("func_00143e50");
s32 FUN_00143f28(...) asm("func_00143f28");
s32 FUN_0015a8a0(...) asm("func_0015a8a0");
s32 FUN_0015a8d0(...) asm("func_0015a8d0");
extern u32 DAT_0036adc0 asm("D_0036adc0");
extern u32 DAT_0036adc4 asm("D_0036adc4");
extern u32 DAT_0036adc8 asm("D_0036adc8");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vmulbc)
_GHIDRA_ANY(_vsub)
#define _auStack_d0 (*(AnyCell*)&auStack_d0)
static AnyCell x01;

// Ghidra decompile of 0x0013f9e0, wrapped mechanically (ad/fallback.py)

undefined4 FUN_0013f9e0_impl(Q16 *param_1,undefined8 *param_2,Q16 *param_3,char param_4, char param_5) asm("_ZN2dk9ObjCamera9collisionERKN2kn7FVectorES4_RS2_bb");
undefined4 FUN_0013f9e0_impl(Q16 *param_1,undefined8 *param_2,Q16 *param_3,char param_4, char param_5) {
  Q16 auVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Q16 auVar5;
  Q16 auVar6;
  undefined2 auStack_120 [8];
  float afStack_110 [2];
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float afStack_f0 [2];
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  B12 auStack_d0;
  undefined4 uStack_c4;
  Q16 auStack_c0;
  Q16 auStack_b0;
  Q16 auStack_a0;
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float afStack_70 [2];
  float fStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  
  uVar3 = 0;
  iStack_60 = 0;
  iStack_5c = 0;
  if ((undefined8 *)&uStack_100 != param_2) {
    uStack_f8 = *(undefined4 *)(param_2 + 1);
    uStack_f4 = *(undefined4 *)((int)param_2 + 0xc);
    uStack_100 = (undefined4)*param_2;
    uStack_fc = (undefined4)((ulong)*param_2 >> 0x20);
  }
  if ((Q16 *)afStack_f0 != param_3) {
    fStack_e8 = *(float *)(*param_3 + 8);
    uStack_e4 = *(undefined4 *)(*param_3 + 0xc);
    afStack_f0[0] = (float)*(undefined8 *)*param_3;
    afStack_f0[1] = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  }
  if (param_4 == '\x01') {
    FUN_0015a8a0(&uStack_100);
    lVar2 = FUN_0015a8d0(&uStack_100,(Q16 *)afStack_110);
    if (lVar2 != 0) {
      if (param_3 != (Q16 *)afStack_110) {
        *(float *)*param_3 = afStack_110[0];
        *(float *)(*param_3 + 4) = afStack_110[1];
        *(float *)(*param_3 + 8) = fStack_108;
        *(undefined4 *)(*param_3 + 0xc) = uStack_104;
      }
      if ((Q16 *)afStack_f0 != (Q16 *)afStack_110) {
        afStack_f0[0] = afStack_110[0];
        afStack_f0[1] = afStack_110[1];
        fStack_e8 = fStack_108;
        uStack_e4 = uStack_104;
      }
      uVar3 = 1;
    }
  }
  lVar2 = FUN_00143d10(&uStack_100,(Q16 *)afStack_110,auStack_120,&iStack_60);
  if (lVar2 != 0) {
    lVar2 = 0;
    if (iStack_60 == 0) {
      FUN_00143e50(auStack_d0,auStack_120[0],1);
      if (&uStack_e0 != (undefined4 *)auStack_d0) {
        uStack_e0 = (*(AnyCell*)((u8*)&auStack_d0 + 0));
        uStack_dc = (*(AnyCell*)((u8*)&auStack_d0 + 4));
        uStack_d8 = (*(AnyCell*)((u8*)&auStack_d0 + 8));
        uStack_d4 = uStack_c4;
      }
      lVar2 = FUN_00143f28(auStack_120[0],1);
    }
    else {
      FUN_001422a0(auStack_d0,*(undefined4 *)(iStack_60 + 4),auStack_120[0]);
      if (&uStack_e0 != (undefined4 *)auStack_d0) {
        uStack_d8 = (*(AnyCell*)((u8*)&auStack_d0 + 8));
        uStack_d4 = uStack_c4;
        uStack_e0 = (*(AnyCell*)((u8*)&auStack_d0 + 0));
        uStack_dc = (*(AnyCell*)((u8*)&auStack_d0 + 4));
      }
    }
    if (lVar2 == 5) {
      if (&auStack_c0 != param_1) {
        auStack_c0 = *param_1;
      }
      if (&auStack_b0 != param_3) {
        (*(AnyCell*)((u8*)&auStack_b0 + 8)) = *(undefined4 *)(*param_3 + 8);
        (*(AnyCell*)((u8*)&auStack_b0 + 12)) = *(undefined4 *)(*param_3 + 0xc);
        (*(AnyCell*)((u8*)&auStack_b0 + 0)) = (undefined4)*(undefined8 *)*param_3;
        (*(AnyCell*)((u8*)&auStack_b0 + 4)) = (undefined4)((ulong)*(undefined8 *)*param_3 >> 0x20);
      }
      if (&auStack_a0 != &auStack_c0) {
        (*(AnyCell*)((u8*)&auStack_a0 + 0)) = (*(AnyCell*)((u8*)&auStack_c0 + 0));
        (*(AnyCell*)((u8*)&auStack_a0 + 4)) = (*(AnyCell*)((u8*)&auStack_c0 + 4));
        (*(AnyCell*)((u8*)&auStack_a0 + 8)) = (*(AnyCell*)((u8*)&auStack_c0 + 8));
      }
      (*(AnyCell*)((u8*)&auVar5 + 4)) = (*(AnyCell*)((u8*)&auStack_b0 + 4));
      (*(AnyCell*)((u8*)&auVar5 + 0)) = (*(AnyCell*)((u8*)&auStack_b0 + 0));
      (*(AnyCell*)((u8*)&auVar5 + 8)) = (*(AnyCell*)((u8*)&auStack_b0 + 8));
      (*(AnyCell*)((u8*)&auVar5 + 12)) = (*(AnyCell*)((u8*)&auStack_b0 + 12));
      auVar5 = _lqc2(auVar5);
      auVar6 = _lqc2(auStack_c0);
      auVar5 = _vsub(auVar5,auVar6);
      _auStack_d0 = _sqc2(auVar5);
      if (&fStack_90 == (float *)auStack_d0) {
        afStack_110[0] = *(float *)*param_1;
      }
      else {
        fStack_90 = (*(AnyCell*)((u8*)&auStack_d0 + 0));
        uStack_8c = (*(AnyCell*)((u8*)&auStack_d0 + 4));
        fStack_88 = (float)(*(AnyCell*)((u8*)&auStack_d0 + 8));
        afStack_110[0] = *(float *)*param_1;
      }
      afStack_110[0] = afStack_110[0] + fStack_90;
      (*(AnyCell*)((u8*)&auStack_a0 + 12)) = DAT_0036adc0;
      uStack_84 = DAT_0036adc0;
      fStack_108 = *(float *)(*param_1 + 8) + fStack_88;
      if ((undefined8 *)&uStack_80 != param_2) {
        uStack_78 = *(undefined4 *)(param_2 + 1);
        uStack_74 = *(undefined4 *)((int)param_2 + 0xc);
        uStack_80 = (undefined4)*param_2;
        uStack_7c = (undefined4)((ulong)*param_2 >> 0x20);
      }
      if ((Q16 *)afStack_70 != (Q16 *)afStack_110) {
        uStack_64 = uStack_104;
        afStack_70[0] = afStack_110[0];
        fStack_68 = fStack_108;
      }
      FUN_00143d10(&uStack_80,(Q16 *)afStack_110,auStack_120,&iStack_60);
      iStack_5c = 1;
    }
    uVar3 = DAT_0036adc4;
    if (param_5 != '\x01') {
      uVar3 = DAT_0036adc8;
    }
    uVar4 = DAT_0036adc8;
    if (iStack_5c != 1) {
      uVar4 = uVar3;
    }
    (*(AnyCell*)((u8*)&auVar1 + 4)) = uStack_dc;
    (*(AnyCell*)((u8*)&auVar1 + 0)) = uStack_e0;
    (*(AnyCell*)((u8*)&auVar1 + 8)) = uStack_d8;
    (*(AnyCell*)((u8*)&auVar1 + 12)) = uStack_d4;
    auVar5 = _lqc2(auVar1);
    auVar6 = _qmtc2(uVar4);
    auVar5 = _vmulbc(auVar5,auVar6);
    auVar5 = _sqc2(auVar5);
    (*(AnyCell*)((u8*)&auVar6 + 4)) = afStack_110[1];
    (*(AnyCell*)((u8*)&auVar6 + 0)) = afStack_110[0];
    (*(AnyCell*)((u8*)&auVar6 + 8)) = fStack_108;
    (*(AnyCell*)((u8*)&auVar6 + 12)) = uStack_104;
    auVar6 = _lqc2(auVar6);
    auVar5 = _lqc2(auVar5);
    auVar5 = _vadd(auVar6,auVar5);
    auVar5 = _sqc2(auVar5);
    uVar3 = 1;
    if (param_3 != &auStack_c0) {
      (*(AnyCell*)((u8*)&auStack_c0 + 8)) = (*(AnyCell*)((u8*)&auVar5 + 8));
      (*(AnyCell*)((u8*)&auStack_c0 + 12)) = (*(AnyCell*)((u8*)&auVar5 + 12));
      *(int *)*param_3 = (*(AnyCell*)((u8*)&auVar5 + 0));
      *(int *)(*param_3 + 4) = (*(AnyCell*)((u8*)&auVar5 + 4));
      *(undefined4 *)(*param_3 + 8) = (*(AnyCell*)((u8*)&auStack_c0 + 8));
      *(undefined4 *)(*param_3 + 0xc) = (*(AnyCell*)((u8*)&auStack_c0 + 12));
      uVar3 = 1;
    }
  }
  return uVar3;
}

