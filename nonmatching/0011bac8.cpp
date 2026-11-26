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

s32 FUN_0011bac8(...) asm("func_0011bac8");
s32 FUN_0011c050(...) asm("func_0011c050");
s32 FUN_002f8ab8(...) asm("func_002f8ab8");
s32 FUN_002f8ad0(...) asm("func_002f8ad0");
extern u32 DAT_0036a8dc asm("D_0036a8dc");
extern u32 DAT_0036a8e0 asm("D_0036a8e0");
extern u32 DAT_0036a8e4 asm("D_0036a8e4");
extern u32 DAT_0036a8e8 asm("D_0036a8e8");
extern u32 DAT_0036a8ec asm("D_0036a8ec");
_GHIDRA_ANY(SQRT)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmul)

// Ghidra decompile of 0x0011bac8, wrapped mechanically (ad/fallback.py)

void FUN_0011bac8_impl(float *param_1,float *param_2) asm("func_0011bac8");
void FUN_0011bac8_impl(float *param_1,float *param_2) {
  Q16 auVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Q16 auVar8;
  Q16 auVar9;
  Q16 auVar10;
  undefined4 uStack_44;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  fVar7 = param_1[2];
  fVar2 = DAT_0036a8dc;
  if ((fVar7 < DAT_0036a8dc) || (fVar2 = DAT_0036a8e0, DAT_0036a8e0 < fVar7)) {
    fVar6 = *param_1;
    fVar7 = fVar2;
  }
  else {
    fVar6 = *param_1;
  }
  if (DAT_0036a8e4 < SQRT(param_1[1] * param_1[1] + fVar6 * fVar6)) {
    fStack_28 = (float)FUN_002f8ad0();
    fStack_2c = (float)FUN_002f8ab8(-fVar7);
    fStack_30 = (float)FUN_002f8ad0(param_1[6],param_1[10]);
  }
  else {
    if (0.0 < fVar7) {
      fStack_30 = (float)FUN_002f8ad0(-param_1[4],param_1[5]);
      fStack_30 = fStack_30 * DAT_0036a8e8;
      fStack_2c = (float)FUN_002f8ab8(-fVar7);
    }
    else {
      fStack_30 = (float)FUN_002f8ad0(param_1[4],param_1[5]);
      fStack_30 = fStack_30 * DAT_0036a8e8;
      fStack_2c = (float)FUN_002f8ab8(-fVar7);
    }
    fStack_28 = fStack_30;
    if (fVar7 < 0.0) {
      fStack_28 = -fStack_30;
    }
  }
  fVar2 = (float)FUN_0011c050(fStack_30 - *param_2);
  fVar7 = (float)FUN_0011c050(fStack_2c - param_2[1]);
  fVar6 = (float)FUN_0011c050(fStack_28 - param_2[2]);
  fStack_28 = fStack_28 + DAT_0036a8ec;
  fStack_2c = DAT_0036a8ec - fStack_2c;
  fVar3 = (float)FUN_0011c050((fStack_30 + DAT_0036a8ec) - *param_2);
  fVar4 = (float)FUN_0011c050(fStack_2c - param_2[1]);
  fVar5 = (float)FUN_0011c050(fStack_28 - param_2[2]);
  (*(AnyCell*)((u8*)&auVar8 + 4)) = fVar7;
  (*(AnyCell*)((u8*)&auVar8 + 0)) = fVar2;
  (*(AnyCell*)((u8*)&auVar8 + 8)) = fVar6;
  (*(AnyCell*)((u8*)&auVar8 + 12)) = uStack_44;
  auVar8 = _lqc2(auVar8);
  (*(AnyCell*)((u8*)&auVar9 + 4)) = fVar7;
  (*(AnyCell*)((u8*)&auVar9 + 0)) = fVar2;
  (*(AnyCell*)((u8*)&auVar9 + 8)) = fVar6;
  (*(AnyCell*)((u8*)&auVar9 + 12)) = uStack_44;
  auVar9 = _lqc2(auVar9);
  auVar8 = _vmul(auVar8,auVar9);
  auVar8 = _vaddbc(auVar8,auVar8);
  auVar8 = _vaddbc(auVar8,auVar8);
  auVar8 = _qmfc2((*(AnyCell*)((u8*)&auVar8 + 0)));
  (*(AnyCell*)((u8*)&auVar10 + 4)) = fVar4;
  (*(AnyCell*)((u8*)&auVar10 + 0)) = fVar3;
  (*(AnyCell*)((u8*)&auVar10 + 8)) = fVar5;
  (*(AnyCell*)((u8*)&auVar10 + 12)) = uStack_34;
  auVar9 = _lqc2(auVar10);
  (*(AnyCell*)((u8*)&auVar1 + 4)) = fVar4;
  (*(AnyCell*)((u8*)&auVar1 + 0)) = fVar3;
  (*(AnyCell*)((u8*)&auVar1 + 8)) = fVar5;
  (*(AnyCell*)((u8*)&auVar1 + 12)) = uStack_34;
  auVar10 = _lqc2(auVar1);
  auVar9 = _vmul(auVar9,auVar10);
  auVar9 = _vaddbc(auVar9,auVar9);
  auVar9 = _vaddbc(auVar9,auVar9);
  auVar9 = _qmfc2((*(AnyCell*)((u8*)&auVar9 + 0)));
  if ((*(AnyCell*)((u8*)&auVar8 + 0)) <= (*(AnyCell*)((u8*)&auVar9 + 0))) {
    *param_2 = fVar2 + *param_2;
    param_2[1] = fVar7 + param_2[1];
    param_2[2] = fVar6 + param_2[2];
  }
  else {
    param_2[2] = fVar5 + param_2[2];
    *param_2 = fVar3 + *param_2;
    param_2[1] = fVar4 + param_2[1];
  }
  return;
}

