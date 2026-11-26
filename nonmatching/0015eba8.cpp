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

s32 FUN_00142c90(...) asm("func_00142c90");
s32 FUN_001492e0(...) asm("func_001492e0");
s32 FUN_0015c2a0(...) asm("func_0015c2a0");
s32 FUN_0015eba8(...) asm("_ZN2dk3Map6createEPNS_7MapFileEP9ALLOCATORby");
s32 FUN_0015f288(...) asm("func_0015f288");
s32 FUN_0015f8d8(...) asm("func_0015f8d8");
s32 FUN_001612b8(...) asm("func_001612b8");
s32 FUN_001dddd0(...) asm("func_001dddd0");
s32 FUN_001de228(...) asm("func_001de228");
extern AnyCell DAT_0034c70c asm("D_0034c70c");
extern AnyCell DAT_0034c710 asm("D_0034c710");
extern AnyCell DAT_0034c738 asm("D_0034c738");
extern AnyCell DAT_0036b468 asm("D_0036b468");
_GHIDRA_ANY(_sqc2)

// Ghidra decompile of 0x0015eba8, wrapped mechanically (ad/fallback.py)

void FUN_0015eba8_impl(undefined8 param_1,undefined8 param_2,undefined1 param_3,ulong param_4) asm("_ZN2dk3Map6createEPNS_7MapFileEP9ALLOCATORby");
void FUN_0015eba8_impl(undefined8 param_1,undefined8 param_2,undefined1 param_3,ulong param_4) {
  bool bVar1;
  int iVar2;
  int iVar3;
  Q16 auVar4;
  Q16 auVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  Q16 in_vf0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_0015f288();
  DAT_0034c710 = param_4;
  FUN_001612b8(param_2,param_1);
  uVar10 = 0x15ec08;
  FUN_00142c90(param_1,param_2,param_3,param_4);
  uVar6 = DAT_0036b468;
  auVar4 = _sqc2(in_vf0);
  auVar5 = _sqc2(in_vf0);
  iVar2 = *(int *)((int)param_1 + 0x6c);
  bVar1 = iVar2 == 1;
  uStack_98 = (*(AnyCell*)((u8*)&auVar4 + 8));
  uStack_94 = (*(AnyCell*)((u8*)&auVar4 + 12));
  uStack_88 = (*(AnyCell*)((u8*)&auVar5 + 8));
  uStack_84 = (*(AnyCell*)((u8*)&auVar5 + 12));
  if (bVar1) {
    uVar7 = (**(code **)*DAT_0034c738)(DAT_0034c738,0x2f0,uVar10);
    uStack_68 = uStack_98;
    uStack_64 = uStack_94;
    uStack_58 = uStack_88;
    uStack_54 = uStack_84;
    uStack_50 = uVar6;
    uStack_4c = uVar6;
    uStack_48 = uVar6;
    uStack_44 = uVar6;
    uVar10 = 0x15eca0;
    uStack_70 = (*(AnyCell*)((u8*)&auVar4 + 0));
    uStack_6c = (*(AnyCell*)((u8*)&auVar4 + 4));
    uStack_60 = (*(AnyCell*)((u8*)&auVar5 + 0));
    uStack_5c = (*(AnyCell*)((u8*)&auVar5 + 4));
    FUN_0015f8d8(uVar7,0,&uStack_70,&uStack_60,&uStack_50,0,0);
  }
  iVar3 = *(int *)((int)param_1 + 0x70);
  if (iVar3 == 1) {
    uVar10 = (**(code **)*DAT_0034c738)(DAT_0034c738,0x2f0,uVar10);
    uStack_68 = uStack_98;
    uStack_64 = uStack_94;
    uStack_58 = uStack_88;
    uStack_54 = uStack_84;
    uStack_50 = uVar6;
    uStack_4c = uVar6;
    uStack_48 = uVar6;
    uStack_44 = uVar6;
    uStack_70 = (*(AnyCell*)((u8*)&auVar4 + 0));
    uStack_6c = (*(AnyCell*)((u8*)&auVar4 + 4));
    uStack_60 = (*(AnyCell*)((u8*)&auVar5 + 0));
    uStack_5c = (*(AnyCell*)((u8*)&auVar5 + 4));
    FUN_0015f8d8(uVar10,bVar1,&uStack_70,&uStack_60,&uStack_50,bVar1,1);
  }
  FUN_0015c2a0(iVar2 + iVar3,param_4);
  DAT_0034c70c = 0;
  lVar8 = FUN_001492e0(param_1);
  if (lVar8 != 0) {
    uVar10 = FUN_001492e0(param_1);
    uVar9 = 1;
    FUN_001dddd0(0x34c6f0,uVar10);
    lVar8 = 0;
    DAT_0034c70c = 1;
    do {
      if ((param_4 & uVar9) != 0) {
        FUN_001de228(0x34c6f0,lVar8,1,2,0,0);
      }
      lVar8 = (long)((int)lVar8 + 1);
      uVar9 = 1L << lVar8;
    } while (lVar8 < 0x40);
  }
  return;
}

