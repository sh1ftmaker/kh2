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

s32 FUN_0010eed8(...) asm("func_0010eed8");
s32 FUN_0010f660(...) asm("func_0010f660");
s32 FUN_0010ff08(...) asm("func_0010ff08");
s32 FUN_001144e8(...) asm("func_001144e8");
s32 FUN_00115848(...) asm("_ZN2kn6Friend11stitch_execEv");
s32 FUN_00116798(...) asm("func_00116798");
s32 FUN_00117808(...) asm("func_00117808");
s32 FUN_0016bd60(...) asm("func_0016bd60");
s32 FUN_0017ce80(...) asm("func_0017ce80");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_001917c0(...) asm("func_001917c0");
s32 FUN_001b58a8(...) asm("func_001b58a8");
extern u32 DAT_00341708 asm("D_00341708");
extern u32 DAT_00349e10 asm("D_00349e10");
extern u32 LAB_00115aa0 asm("D_00115aa0");
extern u32 LAB_00115b14 asm("D_00115b14");
extern undefined *_PTR_FUN_0036a760 asm("D_0036a760");
extern undefined *_PTR_LAB_0036a768 asm("D_0036a768");
_GHIDRA_ANY(ZEXT816)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vmulbc)
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x00115848, wrapped mechanically (ad/fallback.py)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115848_impl(undefined8 param_1) asm("_ZN2kn6Friend11stitch_execEv");
void FUN_00115848_impl(undefined8 param_1) {
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  Q16 in_vf0;
  Q16 auVar14;
  Q16 auVar15;
  Q16 auStack_70;
  Q16 aauStack_60[2];
  undefined4 auStack_40 [4];
  
  piVar4 = DAT_00341708;
  FUN_0016bd60(param_1,3);
  iVar11 = (int)param_1;
  uVar1 = *(uint *)(iVar11 + 0x160);
  if ((((uVar1 & 4) != 0) || ((uVar1 & 8) != 0)) || (bVar3 = false, (uVar1 & 0x10) != 0)) {
    bVar3 = true;
  }
  if ((!bVar3) && ((uVar1 & 0x40000000) == 0)) goto LAB_00115b14;
  if (((uVar1 & 4) != 0) || (((uVar1 & 8) != 0 || (bVar3 = false, (uVar1 & 0x10) != 0)))) {
    bVar3 = true;
  }
  if (bVar3) {
    if (-1 < (int)*(uint *)(iVar11 + 0xb7c)) {
      *(uint *)(iVar11 + 0xb7c) = *(uint *)(iVar11 + 0xb7c) | 0x80000000;
    }
    if ((*(uint *)(*(int *)(iVar11 + 0xb60) + 0x630) & 1) == 0) {
      auStack_70 = ZEXT816(0);
      FUN_00117808(*(int *)(iVar11 + 0xb60),auStack_70);
      *(uint *)(*(int *)(iVar11 + 0xb60) + 0x630) = *(uint *)(*(int *)(iVar11 + 0xb60) + 0x630) | 1;
    }
  }
  FUN_00116798(*(undefined4 *)(iVar11 + 0xb60));
  auVar14 = _vsub(in_vf0,in_vf0);
  auVar14 = _sqc2(auVar14);
  *(Q16 *)(*(int *)(iVar11 + 0xb60) + 0x660) = auVar14;
  bVar3 = false;
  lVar5 = FUN_001917c0();
  if (((lVar5 != 0) && (lVar5 = FUN_001b58a8(), lVar5 == 0)) &&
     (*(float *)(*(int *)(*(int *)(iVar11 + 0xb60) + 0x14) + 0x10) <
      (float)*(int *)(*(int *)(iVar11 + 0xb60) + 0x788))) {
    fVar12 = (float)FUN_0010f660();
    bVar3 = fVar12 < *(float *)(*(int *)(*(int *)(iVar11 + 0xb60) + 0x14) + 0x14);
    *(undefined4 *)(*(int *)(iVar11 + 0xb60) + 0x788) = 0;
  }
  if (bVar3) {
    piVar2 = (int *)piVar4[0x123];
    if (piVar2[0x60] * piVar2[1] < *piVar2 * piVar2[0x61]) {
      uVar13 = *(undefined4 *)(iVar11 + 0xb60);
      uVar6 = _PTR_FUN_0036a760;
    }
    else {
      uVar13 = *(undefined4 *)(iVar11 + 0xb60);
      uVar6 = _PTR_LAB_0036a768;
    }
    uVar6 = FUN_001144e8(uVar13,uVar6);
    FUN_00190128(aauStack_60);
    auStack_40[0] = 0;
    FUN_00190128(aauStack_60);
    FUN_0010eed8(param_1,0,0);
    *(uint *)(iVar11 + 0xb7c) = *(uint *)(iVar11 + 0xb7c) & 0xfffffffb;
    iVar10 = (int)uVar6;
    iVar9 = (int)*(uint *)(iVar10 + 8) >> 1;
    if ((*(uint *)(iVar10 + 8) & 1) == 0) {
      pcVar8 = *(code **)(iVar10 + 4);
      iVar7 = *(int *)(iVar11 + 0xb60);
    }
    else {
      iVar7 = *(int *)(iVar11 + 0xb60);
      pcVar8 = *(code **)((*(uint *)(iVar10 + 4) & 0xfffffffc) + *(int *)(iVar7 + iVar9));
    }
    (*pcVar8)(iVar7 + iVar9,uVar6,aauStack_60,auStack_40,0);
    FUN_0010eed8(param_1,uVar6,0);
  }
  else {
    iVar9 = *(int *)(iVar11 + 0xc60);
    FUN_0010ff08(param_1);
    if (iVar9 == *(int *)(iVar11 + 0xc60)) {
      if ((*(uint *)(iVar11 + 0xb7c) & 4) != 0) goto LAB_00115aa0;
      iVar9 = *(int *)(iVar11 + 0xb60);
    }
    else {
      iVar9 = *(int *)(iVar11 + 0xb60);
    }
    *(int *)(iVar9 + 0x788) = *(int *)(iVar9 + 0x788) + 1;
  }
LAB_00115aa0:
  iVar9 = *(int *)(iVar11 + 0xb60);
  uVar13 = FUN_0017ce80(*(undefined4 *)(iVar9 + 0x64c),*(undefined4 *)(iVar9 + 0x65c),
                        *(float *)(iVar9 + 0x62c) * DAT_00349e10);
  iVar9 = *(int *)(iVar11 + 0xb60);
  auVar14 = _lqc2(*(Q16 *)(iVar9 + 0x660));
  auVar15 = _qmtc2(*(undefined4 *)(iVar9 + 0x66c));
  auVar14 = _vmulbc(auVar14,auVar15);
  aauStack_60[0] = _sqc2(auVar14);
  auVar14 = _lqc2(aauStack_60[0]);
  auVar15 = _qmtc2(DAT_00349e10);
  auVar14 = _vmulbc(auVar14,auVar15);
  auStack_70 = _sqc2(auVar14);
  auVar14 = _lqc2(*(Q16 *)(iVar9 + 0x640));
  auVar15 = _lqc2(auStack_70);
  auVar14 = _vadd(auVar14,auVar15);
  auVar14 = _sqc2(auVar14);
  *(Q16 *)(iVar9 + 0x640) = auVar14;
  *(undefined4 *)(*(int *)(iVar11 + 0xb60) + 0x64c) = uVar13;
LAB_00115b14:
  if ((*(int *)piVar4[0x123] < ((int *)piVar4[0x123])[1]) &&
     (*(float *)(*(int *)(iVar11 + 0xb60) + 0x674) =
           *(float *)(*(int *)(iVar11 + 0xb60) + 0x674) - DAT_00349e10,
     *(float *)(*(int *)(iVar11 + 0xb60) + 0x674) <= 0.0)) {
    (**(code **)(*piVar4 + 0x78))(piVar4,1,0,0);
    *(undefined4 *)(*(int *)(iVar11 + 0xb60) + 0x674) =
         *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0xb60) + 0x14) + 4);
  }
  return;
}

