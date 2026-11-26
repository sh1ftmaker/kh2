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
s32 FUN_001285f8(...) asm("func_001285f8");
s32 FUN_00128750(...) asm("func_00128750");
s32 FUN_00129060(...) asm("_ZN2kn16MotionPrototype014evalExpressionEPNS_8ModelObjEt");
s32 FUN_002f8420(...) asm("func_002f8420");
s32 FUN_002f87c0(...) asm("func_002f87c0");
s32 FUN_002f8870(...) asm("func_002f8870");
s32 FUN_002f8960(...) asm("func_002f8960");
s32 FUN_002f8a18(...) asm("func_002f8a18");
s32 FUN_002f8aa0(...) asm("func_002f8aa0");
s32 FUN_002f8ab8(...) asm("func_002f8ab8");
s32 FUN_002f8ae8(...) asm("func_002f8ae8");
s32 FUN_002f8b00(...) asm("func_002f8b00");
s32 FUN_002f8b18(...) asm("func_002f8b18");
s32 FUN_002f8b30(...) asm("func_002f8b30");
extern u32 DAT_00347b70 asm("D_00347b70");
extern u32 DAT_0036aa68 asm("D_0036aa68");
extern u32 DAT_0036aa6c asm("D_0036aa6c");
extern u32 DAT_0036aa70 asm("D_0036aa70");
extern u32 DAT_0036aa74 asm("D_0036aa74");
extern u32 LAB_001291a0 asm("D_001291a0");
extern u32 LAB_00129294 asm("D_00129294");
extern u32 LAB_00129590 asm("D_00129590");
extern u32 LAB_001296f4 asm("D_001296f4");
extern u32 LAB_00129718 asm("D_00129718");
_GHIDRA_ANY(SQRT)
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)
_GHIDRA_ANY(trap)
static AnyCell a;
static AnyCell b;
static AnyCell f;
static AnyCell n;
static AnyCell r;
static AnyCell t;
static AnyCell v;
static AnyCell x01;
static AnyCell x02;
static AnyCell x03;
static AnyCell x04;
static AnyCell x05;
static AnyCell x06;
static AnyCell x0e;
static AnyCell x0f;
static AnyCell x10;
static AnyCell x11;
static AnyCell x12;
static AnyCell x13;
static AnyCell x14;
static AnyCell x15;
static AnyCell x16;
static AnyCell x17;
static AnyCell x18;
static AnyCell x19;
static AnyCell x1a;
static AnyCell x1b;
static AnyCell x1c;
static AnyCell x1d;
static AnyCell x1e;
static AnyCell x1f;

// Ghidra decompile of 0x00129060, wrapped mechanically (ad/fallback.py)

float FUN_00129060_impl(undefined8 param_1,undefined8 param_2,uint param_3) asm("_ZN2kn16MotionPrototype014evalExpressionEPNS_8ModelObjEt");
float FUN_00129060_impl(undefined8 param_1,undefined8 param_2,uint param_3) {
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  Q16 *pauVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 in_vc6;
  Q16 auVar19;
  Q16 auVar20;
  Q16 auStack_70;
  undefined4 uStack_60;
  undefined4 auStack_5c [3];
  
  iVar11 = (int)param_1;
  iVar7 = *(int *)(iVar11 + 4);
  if (*(uint *)(iVar7 + 0x6c) <= (param_3 & 0xffff)) {
    return 0.0;
  }
  iVar12 = iVar7 + *(int *)(iVar7 + 0x68);
  puVar13 = (uint *)(iVar12 + (param_3 & 0xffff) * 0xc);
  cVar1 = (char)*puVar13;
  iVar14 = (int)param_2;
  fVar18 = 0.0;
  switch(cVar1) {
  case '\0':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_002f8960(fVar18 * DAT_0036aa68);
    break;
  case '\x01':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_002f87c0(fVar18 * DAT_0036aa68);
    return fVar18;
  case '\x02':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_002f8a18(fVar18 * DAT_0036aa68);
    return fVar18;
  case '\x03':
    uVar15 = FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_002f8ab8(uVar15);
    fVar18 = DAT_0036aa6c;
    goto LAB_001291a0;
  case '\x04':
    uVar15 = FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_002f8aa0(uVar15);
    fVar18 = DAT_0036aa6c;
    goto LAB_001291a0;
  case '\x05':
    uVar15 = FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_002f8420(uVar15);
    fVar18 = DAT_0036aa6c;
    goto LAB_001291a0;
  case '\x06':
    uVar15 = FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_002f8b18(uVar15);
    return fVar18;
  case '\a':
    uVar15 = FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_002f8ae8(uVar15);
    return fVar18;
  case '\b':
    uVar15 = FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_002f8870(uVar15);
    return fVar18;
  case '\t':
    uVar15 = FUN_00129060(param_1,param_2,(short)puVar13[2]);
    uVar16 = FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    fVar18 = (float)FUN_002f8b30(uVar15,uVar16);
    return fVar18;
  case '\n':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    return SQRT(fVar18);
  case '\v':
    fVar17 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    bVar5 = fVar17 < fVar18;
    goto LAB_00129294;
  case '\f':
    fVar17 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    bVar5 = fVar18 < fVar17;
LAB_00129294:
    if (bVar5) {
      return fVar17;
    }
    break;
  case '\r':
    fVar17 = 0.0;
    iVar11 = iVar12 + (uint)(ushort)puVar13[2] * 0xc;
    iVar14 = 0;
    if ((uint)*(ushort *)(iVar11 + 8) < *(uint *)(iVar7 + 0x6c)) {
      do {
        fVar18 = (float)FUN_00129060(param_1,param_2);
        iVar14 = iVar14 + 1;
        iVar11 = iVar12 + (uint)*(ushort *)(iVar11 + 10) * 0xc;
        fVar17 = fVar17 + fVar18;
      } while ((uint)*(ushort *)(iVar11 + 8) < *(uint *)(iVar7 + 0x6c));
    }
    fVar18 = (float)iVar14;
    goto code_r0x00129340;
  case '\x0e':
    fVar18 = (float)FUN_00129060(param_1,param_2,
                                 *(undefined2 *)((uint)(ushort)puVar13[2] * 0xc + iVar12 + 8));
    if (fVar18 == 0.0) {
      uVar2 = *(undefined2 *)
               ((uint)*(ushort *)
                       ((uint)*(ushort *)((uint)(ushort)puVar13[2] * 0xc + iVar12 + 10) * 0xc +
                        iVar12 + 10) * 0xc + iVar12 + 8);
    }
    else {
      uVar2 = *(undefined2 *)
               ((uint)*(ushort *)((uint)(ushort)puVar13[2] * 0xc + iVar12 + 10) * 0xc + iVar12 + 8);
    }
    fVar18 = (float)FUN_00129060(param_1,param_2,uVar2);
    return fVar18;
  case '\x0f':
  case '+':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (fVar18 * DAT_0036aa70) / *(float *)(iVar7 + 0x98);
    FUN_001285f8(fVar18,param_1,&uStack_60,auStack_5c);
    uVar9 = (uint)*(ushort *)((int)puVar13 + 10);
    if (uVar9 < *(uint *)(iVar7 + 0x34)) {
      iVar7 = iVar7 + *(int *)(iVar7 + 0x30) + uVar9 * 6;
    }
    else {
      iVar7 = iVar7 + *(int *)(iVar7 + 0x38) + (uVar9 - *(uint *)(iVar7 + 0x34)) * 6;
    }
    fVar18 = (float)FUN_00128750(fVar18,param_1,iVar7,uStack_60,auStack_5c[0]);
    if ((char)*puVar13 == '+') {
      fVar18 = fVar18 * DAT_0036aa6c;
    }
    break;
  case '\x10':
    uVar4 = (ushort)puVar13[2];
    uVar9 = (uint)uVar4 - (uint)*(ushort *)(iVar7 + 0x10);
    if (uVar4 < *(ushort *)(iVar7 + 0x10)) {
      iVar12 = *(int *)(iVar14 + 0x2c);
      uVar9 = (uint)uVar4;
    }
    else {
      iVar12 = *(int *)(iVar11 + 0x10);
    }
    uVar4 = *(ushort *)((int)puVar13 + 10);
    uVar10 = (uint)uVar4 - (uint)*(ushort *)(iVar7 + 0x10);
    if (uVar4 < *(ushort *)(iVar7 + 0x10)) {
      iVar7 = *(int *)(iVar14 + 0x2c);
      uVar10 = (uint)uVar4;
    }
    else {
      iVar7 = *(int *)(iVar11 + 0x10);
    }
    auVar19 = _lqc2(*(Q16 *)(iVar12 + uVar9 * 0x40 + 0x30));
    auVar20 = _lqc2(*(Q16 *)(iVar7 + uVar10 * 0x40 + 0x30));
    auVar19 = _vsub(auVar19,auVar20);
    auVar19 = _sqc2(auVar19);
    auVar19 = _lqc2(auVar19);
    auVar19 = _vmul(auVar19,auVar19);
    auVar19 = _vaddbc(auVar19,auVar19);
    auVar19 = _vaddbc(auVar19,auVar19);
    _vsqrt(auVar19);
    _vwaitq();
    uVar8 = _cfc2(in_vc6);
    return (float)uVar8;
  case '\x11':
    uVar15 = FUN_00129060(param_1,param_2,(short)puVar13[2]);
    uVar16 = FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    fVar18 = (float)FUN_002f8b00(uVar15,uVar16);
    return fVar18;
  case '\x12':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    fVar18 = fVar18 + fVar17;
    break;
  case '\x13':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    fVar18 = fVar18 - fVar17;
    break;
  case '\x14':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    fVar18 = fVar18 * fVar17;
    break;
  case '\x15':
    fVar17 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
code_r0x00129340:
    return fVar17 / fVar18;
  case '\x16':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    if ((int)fVar17 == 0) {
      trap(7);
    }
    fVar18 = (float)((int)fVar18 % (int)fVar17);
    break;
  case '\x17':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    bVar5 = fVar18 == fVar17;
    goto LAB_00129590;
  case '\x18':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    bVar5 = fVar17 < fVar18;
    goto LAB_00129590;
  case '\x19':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    bVar5 = fVar17 <= fVar18;
    goto LAB_00129590;
  case '\x1a':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    bVar5 = fVar18 < fVar17;
    goto LAB_00129590;
  case '\x1b':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
    bVar5 = fVar18 <= fVar17;
LAB_00129590:
    fVar18 = DAT_0036aa74;
    if (!bVar5) {
switchD_001290e0_caseD_29:
      fVar18 = 0.0;
    }
    break;
  case '\x1c':
    fVar18 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    if (fVar18 == 0.0) {
      fVar18 = 0.0;
    }
    else {
      fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10));
      fVar18 = DAT_0036aa74;
      if (fVar17 == 0.0) {
        fVar18 = 0.0;
      }
    }
    break;
  case '\x1d':
    fVar17 = (float)FUN_00129060(param_1,param_2,(short)puVar13[2]);
    fVar18 = DAT_0036aa74;
    if ((fVar17 == 0.0) &&
       (fVar17 = (float)FUN_00129060(param_1,param_2,*(undefined2 *)((int)puVar13 + 10)),
       fVar18 = DAT_0036aa74, fVar17 == 0.0)) {
      return 0.0;
    }
    break;
  case '\x1e':
    fVar18 = DAT_00347b70;
    break;
  case '\x1f':
    fVar18 = (float)puVar13[1];
    break;
  case ' ':
  case '!':
  case '\"':
    uVar4 = *(ushort *)((int)puVar13 + 2);
    if ((*puVar13 & 0x100) == 0) {
      uVar3 = *(ushort *)(iVar7 + 0x10);
      if (uVar4 < uVar3) {
        iVar7 = *(int *)(iVar14 + 0x28);
        goto LAB_001296f4;
      }
      iVar7 = *(int *)(iVar11 + 0xc);
LAB_00129718:
      iVar11 = ((uint)uVar4 - (uint)uVar3) * 0x40;
    }
    else {
      uVar3 = *(ushort *)(iVar7 + 0x10);
      if (uVar3 <= uVar4) {
        iVar7 = *(int *)(iVar11 + 0x10);
        goto LAB_00129718;
      }
      iVar7 = *(int *)(iVar14 + 0x2c);
LAB_001296f4:
      iVar11 = (uint)uVar4 << 6;
    }
    fVar18 = *(float *)(iVar7 + iVar11 + (cVar1 + -0x20) * 4 + 0x30);
    break;
  case '#':
  case '$':
  case '%':
    if ((*puVar13 & 0x100) == 0) {
      uVar4 = *(ushort *)((int)puVar13 + 2);
      if (uVar4 < *(ushort *)(iVar7 + 0x10)) {
        iVar7 = *(int *)(iVar14 + 0x20) + (uint)uVar4 * 0x10;
      }
      else {
        iVar7 = iVar7 + *(int *)(iVar7 + 0x18) +
                ((uint)uVar4 - (uint)*(ushort *)(iVar7 + 0x10)) * 0x40 + 0x20;
      }
      fVar18 = *(float *)(iVar7 + (cVar1 + -0x23) * 4);
      fVar17 = DAT_0036aa6c;
    }
    else {
      uVar4 = *(ushort *)((int)puVar13 + 2);
      if (uVar4 < *(ushort *)(iVar7 + 0x10)) {
        pauVar6 = (Q16 *)(*(int *)(iVar14 + 0x20) + (uint)uVar4 * 0x10);
      }
      else {
        pauVar6 = (Q16 *)
                  (iVar7 + *(int *)(iVar7 + 0x18) +
                   ((uint)uVar4 - (uint)*(ushort *)(iVar7 + 0x10)) * 0x40 + 0x20);
      }
      auStack_70 = *pauVar6;
      FUN_0011bac8(*(int *)(iVar11 + 8) + (uint)*(ushort *)((int)puVar13 + 2) * 0x40,auStack_70);
      fVar18 = *(float *)(auStack_70 + ((char)*puVar13 + -0x23) * 4);
      fVar17 = DAT_0036aa6c;
    }
LAB_001291a0:
    fVar18 = fVar18 * fVar17;
    break;
  case '&':
  case '\'':
  case '(':
    if ((*puVar13 & 0x100) == 0) {
      uVar4 = *(ushort *)((int)puVar13 + 2);
      if (uVar4 < *(ushort *)(iVar7 + 0x10)) {
        iVar7 = *(int *)(iVar14 + 0x1c) + (uint)uVar4 * 0x10;
      }
      else {
        iVar7 = iVar7 + *(int *)(iVar7 + 0x18) +
                ((uint)uVar4 - (uint)*(ushort *)(iVar7 + 0x10)) * 0x40 + 0x10;
      }
      fVar18 = *(float *)(iVar7 + (cVar1 + -0x26) * 4);
    }
    else {
      fVar18 = *(float *)(*(int *)(iVar11 + 0x14) + (uint)*(ushort *)((int)puVar13 + 2) * 0x10 +
                         (cVar1 + -0x26) * 4);
    }
    break;
  case ')':
  case '*':
    goto switchD_001290e0_caseD_29;
  }
  return fVar18;
}

