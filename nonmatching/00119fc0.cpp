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

s32 FUN_0010da40(...) asm("func_0010da40");
s32 FUN_00112d90(...) asm("func_00112d90");
s32 FUN_00119f48(...) asm("func_00119f48");
s32 FUN_00119fc0(...) asm("_ZN2kn6Friend20searchEnemy_peterpanEPN2YS6TARGETES3_");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190140(...) asm("func_00190140");
s32 FUN_001901c0(...) asm("func_001901c0");
s32 FUN_00190730(...) asm("func_00190730");
extern u32 DAT_00341708 asm("D_00341708");
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x00119fc0, wrapped mechanically (ad/fallback.py)

void FUN_00119fc0_impl(undefined8 param_1,undefined8 param_2,int *param_3) asm("_ZN2kn6Friend20searchEnemy_peterpanEPN2YS6TARGETES3_");
void FUN_00119fc0_impl(undefined8 param_1,undefined8 param_2,int *param_3) {
  long lVar1;
  Q16 *pauVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_vc6;
  Q16 auVar9;
  Q16 auVar10;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  B4 auStack_b0;
  float fStack_ac;
  undefined4 uStack_a4;
  Q16 auStack_a0;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  Q16 auStack_70;
  
  lVar4 = 0;
  FUN_00190128(&iStack_d0);
  FUN_00190128(&iStack_d0);
  fVar7 = 0.0;
  uStack_a4 = 0;
  FUN_00190128(&iStack_90);
  FUN_00190128(&iStack_90);
  fVar8 = 0.0;
  while (lVar4 = FUN_00190730(&iStack_90,lVar4), lVar4 != 0) {
    lVar1 = FUN_00112d90(&iStack_90);
    if (((((lVar1 != 0) && (lVar1 = FUN_001901c0(&iStack_90), lVar1 != 0)) &&
         (*(int *)(iStack_90 + 0xc) != 0)) &&
        (((*(uint *)(*(int *)(iStack_90 + 0xc) + 8) & 0x40) != 0 &&
         ((*(uint *)(iStack_90 + 0x10c) & 0x20000) != 0)))) &&
       (*(int *)(iStack_90 + 0xae4) == DAT_00341708)) {
      FUN_0018a818(auStack_b0,iStack_90,lVar4);
      pauVar2 = (Q16 *)FUN_0016c028(param_1);
      auVar9 = _lqc2(auStack_a0);
      auVar10 = _lqc2(*pauVar2);
      auVar9 = _vsub(auVar9,auVar10);
      auStack_70 = _sqc2(auVar9);
      auVar9 = _lqc2(auStack_70);
      auVar9 = _vmul(auVar9,auVar9);
      auVar9 = _vaddbc(auVar9,auVar9);
      auVar9 = _vaddbc(auVar9,auVar9);
      _vsqrt(auVar9);
      _vwaitq();
      uVar3 = _cfc2(in_vc6);
      fVar6 = (float)uVar3 - fStack_ac;
      if ((fVar8 == fVar7) || (fVar6 < fVar8)) {
        iStack_d0 = iStack_90;
        iStack_cc = iStack_8c;
        iStack_c8 = iStack_88;
        iStack_c4 = iStack_84;
        iStack_c0 = iStack_80;
        fVar8 = fVar6;
      }
    }
  }
  lVar4 = FUN_00190140(&iStack_d0);
  if ((lVar4 == 0 || iStack_d0 == 0) &&
     (lVar4 = FUN_00119f48(*(undefined4 *)((int)param_1 + 0xb7c)), lVar4 != 0)) {
    FUN_0010da40(param_1,param_2,&iStack_d0);
  }
  lVar4 = FUN_00190140(&iStack_d0);
  if (lVar4 == 0 || iStack_d0 == 0) {
    piVar5 = (int *)param_2;
    iStack_c0 = piVar5[4];
    iStack_d0 = *piVar5;
    iStack_cc = piVar5[1];
    iStack_c8 = piVar5[2];
    iStack_c4 = piVar5[3];
  }
  lVar4 = FUN_00190140(&iStack_d0);
  if (lVar4 != 0 && iStack_d0 != 0) {
    param_3[4] = iStack_c0;
    *param_3 = iStack_d0;
    param_3[1] = iStack_cc;
    param_3[2] = iStack_c8;
    param_3[3] = iStack_c4;
  }
  return;
}

