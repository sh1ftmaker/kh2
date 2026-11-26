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

s32 FUN_0011b6a8(...) asm("func_0011b6a8");
s32 FUN_0011b720(...) asm("func_0011b720");
s32 FUN_0013f648(...) asm("func_0013f648");
s32 FUN_00159790(...) asm("_ZN2dk10TalkCamera10calcCameraEPNS_9ObjCameraE");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_0017ce10(...) asm("func_0017ce10");
s32 FUN_001904f0(...) asm("func_001904f0");
s32 FUN_002f8ad0(...) asm("func_002f8ad0");
extern u32 DAT_0034aa11 asm("D_0034aa11");
extern u32 DAT_0034aa18 asm("D_0034aa18");
extern u32 DAT_0036b364 asm("D_0036b364");
extern u32 DAT_004f3600 asm("D_004f3600");
_GHIDRA_ANY(CONCAT44)
_GHIDRA_ANY(ZEXT416)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_pextlw)
_GHIDRA_ANY(_pextuw)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vsub)
#define _auStack_50 (*(AnyCell*)&auStack_50)
static AnyCell x01;

// Ghidra decompile of 0x00159790, wrapped mechanically (ad/fallback.py)

void FUN_00159790_impl(undefined8 param_1) asm("_ZN2dk10TalkCamera10calcCameraEPNS_9ObjCameraE");
void FUN_00159790_impl(undefined8 param_1) {
  Q16 auVar1;
  Q16 auVar2;
  Q16 auVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 auVar6;
  Q16 auVar7;
  Q16 auVar8;
  Q16 auVar9;
  undefined4 *puVar10;
  Q16 auVar11;
  Q16 *pauVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar16;
  Q16 auVar17;
  Q16 auVar18;
  Q16 auVar19;
  Q16 auVar20;
  Q16 auVar21;
  B4 auStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  Q16 auStack_110;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  Q16 auStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  Q16 auStack_d0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  Q16 auStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  Q16 auStack_90;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Q16 auStack_60;
  B8 auStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar13 = (int)param_1;
  pauVar12 = (Q16 *)(iVar13 + 0x80);
  uStack_114 = 0;
  FUN_001904f0(0x34aa18,auStack_120);
  if (pauVar12 != &auStack_110) {
    *(undefined4 *)*pauVar12 = (*(AnyCell*)((u8*)&auStack_110 + 0));
    *(undefined4 *)(iVar13 + 0x84) = (*(AnyCell*)((u8*)&auStack_110 + 4));
    *(undefined4 *)(iVar13 + 0x88) = (*(AnyCell*)((u8*)&auStack_110 + 8));
    *(undefined4 *)(iVar13 + 0x8c) = (*(AnyCell*)((u8*)&auStack_110 + 12));
  }
  if (DAT_0034aa11 == '\x01') {
    puVar10 = (undefined4 *)FUN_0016c028(*(undefined4 *)(iVar13 + 0x44));
    if (&auStack_f0 != pauVar12) {
      (*(AnyCell*)((u8*)&auStack_f0 + 0)) = *(undefined4 *)*pauVar12;
      (*(AnyCell*)((u8*)&auStack_f0 + 4)) = *(undefined4 *)(iVar13 + 0x84);
      (*(AnyCell*)((u8*)&auStack_f0 + 8)) = *(undefined4 *)(iVar13 + 0x88);
      (*(AnyCell*)((u8*)&auStack_f0 + 12)) = *(undefined4 *)(iVar13 + 0x8c);
    }
    if (&uStack_e0 != puVar10) {
      uStack_e0 = *puVar10;
      uStack_dc = puVar10[1];
      uStack_d8 = puVar10[2];
      uStack_d4 = puVar10[3];
    }
    if (&auStack_d0 != &auStack_f0) {
      (*(AnyCell*)((u8*)&auStack_d0 + 0)) = (*(AnyCell*)((u8*)&auStack_f0 + 0));
      (*(AnyCell*)((u8*)&auStack_d0 + 4)) = (*(AnyCell*)((u8*)&auStack_f0 + 4));
      (*(AnyCell*)((u8*)&auStack_d0 + 8)) = (*(AnyCell*)((u8*)&auStack_f0 + 8));
    }
    (*(AnyCell*)((u8*)&auVar3 + 4)) = uStack_dc;
    (*(AnyCell*)((u8*)&auVar3 + 0)) = uStack_e0;
    (*(AnyCell*)((u8*)&auVar3 + 8)) = uStack_d8;
    (*(AnyCell*)((u8*)&auVar3 + 12)) = uStack_d4;
    auVar16 = _lqc2(auVar3);
    (*(AnyCell*)((u8*)&auVar2 + 4)) = (*(AnyCell*)((u8*)&auStack_f0 + 4));
    (*(AnyCell*)((u8*)&auVar2 + 0)) = (*(AnyCell*)((u8*)&auStack_f0 + 0));
    (*(AnyCell*)((u8*)&auVar2 + 8)) = (*(AnyCell*)((u8*)&auStack_f0 + 8));
    (*(AnyCell*)((u8*)&auVar2 + 12)) = (*(AnyCell*)((u8*)&auStack_f0 + 12));
    auVar17 = _lqc2(auVar2);
    auVar16 = _vsub(auVar16,auVar17);
    auStack_b0 = _sqc2(auVar16);
    if (&uStack_c0 != (undefined4 *)auStack_b0) {
      uStack_c0 = (*(AnyCell*)((u8*)&auStack_b0 + 0));
      uStack_bc = (*(AnyCell*)((u8*)&auStack_b0 + 4));
      uStack_b8 = (*(AnyCell*)((u8*)&auStack_b0 + 8));
    }
    (*(AnyCell*)((u8*)&auStack_d0 + 12)) = DAT_0036b364;
    uStack_b4 = DAT_0036b364;
    if (&uStack_100 != &uStack_c0) {
      uStack_100 = uStack_c0;
      uStack_fc = uStack_bc;
      uStack_f8 = uStack_b8;
      uStack_f4 = DAT_0036b364;
    }
    uVar14 = FUN_002f8ad0(uStack_100,uStack_f8);
    uVar14 = FUN_0017ce10(uVar14);
    auStack_b0 = ZEXT416((uint)fStack_11c) << 0x40;
    FUN_0011b6a8(&uStack_a0);
    FUN_0011b720(uVar14,&uStack_a0);
    auVar21 = _lqc2(auStack_b0);
    (*(AnyCell*)((u8*)&auVar6 + 4)) = uStack_9c;
    (*(AnyCell*)((u8*)&auVar6 + 0)) = uStack_a0;
    (*(AnyCell*)((u8*)&auVar6 + 8)) = uStack_98;
    (*(AnyCell*)((u8*)&auVar6 + 12)) = uStack_94;
    auVar16 = _lqc2(auVar6);
    auVar17 = _lqc2(auStack_90);
    (*(AnyCell*)((u8*)&auVar7 + 4)) = fStack_7c;
    (*(AnyCell*)((u8*)&auVar7 + 0)) = uStack_80;
    (*(AnyCell*)((u8*)&auVar7 + 8)) = uStack_78;
    (*(AnyCell*)((u8*)&auVar7 + 12)) = uStack_74;
    auVar18 = _lqc2(auVar7);
    (*(AnyCell*)((u8*)&auVar9 + 4)) = uStack_6c;
    (*(AnyCell*)((u8*)&auVar9 + 0)) = uStack_70;
    (*(AnyCell*)((u8*)&auVar9 + 8)) = uStack_68;
    (*(AnyCell*)((u8*)&auVar9 + 12)) = uStack_64;
    auVar19 = _lqc2(auVar9);
    _vmulabc(auVar16,auVar21);
    _vmaddabc(auVar17,auVar21);
    _vmaddabc(auVar18,auVar21);
    auVar16 = _vmaddbc(auVar19,auVar21);
    auVar16 = _sqc2(auVar16);
    if (&uStack_100 != (undefined4 *)auStack_60) {
      (*(AnyCell*)((u8*)&auStack_60 + 0)) = (*(AnyCell*)((u8*)&auVar16 + 0));
      (*(AnyCell*)((u8*)&auStack_60 + 4)) = (*(AnyCell*)((u8*)&auVar16 + 4));
      (*(AnyCell*)((u8*)&auStack_60 + 8)) = (*(AnyCell*)((u8*)&auVar16 + 8));
      (*(AnyCell*)((u8*)&auStack_60 + 12)) = (*(AnyCell*)((u8*)&auVar16 + 12));
      uStack_100 = (*(AnyCell*)((u8*)&auStack_60 + 0));
      uStack_fc = (*(AnyCell*)((u8*)&auStack_60 + 4));
      uStack_f8 = (*(AnyCell*)((u8*)&auStack_60 + 8));
      uStack_f4 = (*(AnyCell*)((u8*)&auStack_60 + 12));
    }
    auVar16 = _lqc2(*pauVar12);
    (*(AnyCell*)((u8*)&auVar1 + 4)) = uStack_fc;
    (*(AnyCell*)((u8*)&auVar1 + 0)) = uStack_100;
    (*(AnyCell*)((u8*)&auVar1 + 8)) = uStack_f8;
    (*(AnyCell*)((u8*)&auVar1 + 12)) = uStack_f4;
    auVar17 = _lqc2(auVar1);
    auVar16 = _vadd(auVar16,auVar17);
    auStack_60 = _sqc2(auVar16);
    if ((undefined4 *)(iVar13 + 0x60) == (undefined4 *)auStack_60) {
      fVar15 = *(float *)(iVar13 + 100);
    }
    else {
      *(undefined4 *)(iVar13 + 0x60) = (*(AnyCell*)((u8*)&auStack_60 + 0));
      *(undefined4 *)(iVar13 + 100) = (*(AnyCell*)((u8*)&auStack_60 + 4));
      *(undefined4 *)(iVar13 + 0x68) = (*(AnyCell*)((u8*)&auStack_60 + 8));
      *(undefined4 *)(iVar13 + 0x6c) = (*(AnyCell*)((u8*)&auStack_60 + 12));
      fVar15 = *(float *)(iVar13 + 100);
    }
    *(float *)(iVar13 + 100) = fVar15 - fStack_118;
  }
  else {
    if (&uStack_100 != (undefined4 *)(DAT_0034aa18 + 0x6b0)) {
      uStack_100 = *(undefined4 *)(DAT_0034aa18 + 0x6b0);
      uStack_fc = *(undefined4 *)(DAT_0034aa18 + 0x6b4);
      uStack_f8 = *(undefined4 *)(DAT_0034aa18 + 0x6b8);
      uStack_f4 = *(undefined4 *)(DAT_0034aa18 + 0x6bc);
      (*(AnyCell*)((u8*)&auStack_f0 + 8)) = *(undefined4 *)(DAT_0034aa18 + 0x6c8);
      (*(AnyCell*)((u8*)&auStack_f0 + 12)) = *(undefined4 *)(DAT_0034aa18 + 0x6cc);
      uStack_d8 = *(undefined4 *)(DAT_0034aa18 + 0x6d8);
      uStack_d4 = *(undefined4 *)(DAT_0034aa18 + 0x6dc);
      (*(AnyCell*)((u8*)&auStack_d0 + 8)) = *(undefined4 *)(DAT_0034aa18 + 0x6e8);
      (*(AnyCell*)((u8*)&auStack_d0 + 12)) = *(undefined4 *)(DAT_0034aa18 + 0x6ec);
      (*(AnyCell*)((u8*)&auStack_f0 + 0)) = (undefined4)*(undefined8 *)(DAT_0034aa18 + 0x6c0);
      (*(AnyCell*)((u8*)&auStack_f0 + 4)) = (undefined4)((ulong)*(undefined8 *)(DAT_0034aa18 + 0x6c0) >> 0x20);
      uStack_e0 = (undefined4)*(undefined8 *)(DAT_0034aa18 + 0x6d0);
      uStack_dc = (undefined4)((ulong)*(undefined8 *)(DAT_0034aa18 + 0x6d0) >> 0x20);
      (*(AnyCell*)((u8*)&auStack_d0 + 0)) = (undefined4)*(undefined8 *)(DAT_0034aa18 + 0x6e0);
      (*(AnyCell*)((u8*)&auStack_d0 + 4)) = (undefined4)((ulong)*(undefined8 *)(DAT_0034aa18 + 0x6e0) >> 0x20);
    }
    if (&uStack_c0 != &uStack_100) {
      uStack_c0 = uStack_100;
      uStack_bc = uStack_fc;
      uStack_b8 = uStack_f8;
      uStack_b4 = uStack_f4;
      (*(AnyCell*)((u8*)&auStack_b0 + 4)) = (*(AnyCell*)((u8*)&auStack_f0 + 4));
      (*(AnyCell*)((u8*)&auStack_b0 + 0)) = (*(AnyCell*)((u8*)&auStack_f0 + 0));
      (*(AnyCell*)((u8*)&auStack_b0 + 8)) = (*(AnyCell*)((u8*)&auStack_f0 + 8));
      (*(AnyCell*)((u8*)&auStack_b0 + 12)) = (*(AnyCell*)((u8*)&auStack_f0 + 12));
      uStack_a0 = uStack_e0;
      uStack_9c = uStack_dc;
      uStack_98 = uStack_d8;
      uStack_94 = uStack_d4;
      (*(AnyCell*)((u8*)&auStack_90 + 4)) = (*(AnyCell*)((u8*)&auStack_d0 + 4));
      (*(AnyCell*)((u8*)&auStack_90 + 0)) = (*(AnyCell*)((u8*)&auStack_d0 + 0));
      (*(AnyCell*)((u8*)&auStack_90 + 8)) = (*(AnyCell*)((u8*)&auStack_d0 + 8));
      (*(AnyCell*)((u8*)&auStack_90 + 12)) = (*(AnyCell*)((u8*)&auStack_d0 + 12));
    }
    auStack_60 = ZEXT416((uint)-fStack_11c) << 0x40;
    (*(AnyCell*)((u8*)&auVar18 + 8)) = uStack_b8;
    (*(AnyCell*)((u8*)&auVar18 + 0)) = CONCAT44(uStack_bc,uStack_c0);
    (*(AnyCell*)((u8*)&auVar18 + 12)) = uStack_b4;
    (*(AnyCell*)((u8*)&auVar19 + 4)) = uStack_9c;
    (*(AnyCell*)((u8*)&auVar19 + 0)) = uStack_a0;
    (*(AnyCell*)((u8*)&auVar19 + 8)) = uStack_98;
    (*(AnyCell*)((u8*)&auVar19 + 12)) = uStack_94;
    auVar16 = _qmfc2(in_vf0w);
    auVar20 = _lqc2(auStack_90);
    auVar17 = _pextlw((*(AnyCell*)((u8*)&auStack_b0 + 0)),CONCAT44(uStack_bc,uStack_c0));
    auVar21 = _pextuw(auStack_b0,auVar18);
    auVar11 = _pextlw((*(AnyCell*)((u8*)&auVar16 + 0)),CONCAT44(uStack_9c,uStack_a0));
    auVar16 = _pextuw(auVar16,auVar19);
    auVar18 = _pcpyld(auVar11,auVar17);
    auStack_b0 = _pcpyud(auVar17,auVar11);
    auVar19 = _pcpyld(auVar16,auVar21);
    uStack_c0 = (*(AnyCell*)((u8*)&auVar18 + 0));
    auVar16 = _qmtc2(uStack_c0);
    auVar17 = _qmtc2((*(AnyCell*)((u8*)&auStack_b0 + 0)));
    uStack_a0 = (*(AnyCell*)((u8*)&auVar19 + 0));
    auVar21 = _qmtc2(uStack_a0);
    _vmulabc(auVar16,auVar20);
    _vmaddabc(auVar17,auVar20);
    auVar17 = _vmaddbc(auVar21,auVar20);
    (*(B12*)((u8*)&auVar16 + 4)) = in_register_00004104;
    (*(AnyCell*)((u8*)&auVar16 + 0)) = in_vf0w;
    auVar16 = _vsub(auVar16,auVar17);
    uStack_bc = (*(AnyCell*)((u8*)&auVar18 + 4));
    uStack_b8 = (*(AnyCell*)((u8*)&auVar18 + 8));
    uStack_b4 = (*(AnyCell*)((u8*)&auVar18 + 12));
    uStack_9c = (*(AnyCell*)((u8*)&auVar19 + 4));
    uStack_98 = (*(AnyCell*)((u8*)&auVar19 + 8));
    uStack_94 = (*(AnyCell*)((u8*)&auVar19 + 12));
    auStack_90 = _sqc2(auVar16);
    (*(AnyCell*)((u8*)&auVar17 + 4)) = (*(AnyCell*)((u8*)&auStack_110 + 4));
    (*(AnyCell*)((u8*)&auVar17 + 0)) = (*(AnyCell*)((u8*)&auStack_110 + 0));
    (*(AnyCell*)((u8*)&auVar17 + 8)) = (*(AnyCell*)((u8*)&auStack_110 + 8));
    (*(AnyCell*)((u8*)&auVar17 + 12)) = (*(AnyCell*)((u8*)&auStack_110 + 12));
    auVar21 = _lqc2(auVar17);
    auVar16 = _lqc2(auVar18);
    auVar17 = _lqc2(auStack_b0);
    auVar18 = _lqc2(auVar19);
    auVar19 = _lqc2(auStack_90);
    _vmulabc(auVar16,auVar21);
    _vmaddabc(auVar17,auVar21);
    _vmaddabc(auVar18,auVar21);
    auVar16 = _vmaddbc(auVar19,auVar21);
    auVar16 = _sqc2(auVar16);
    if (&uStack_70 != (undefined4 *)auStack_50) {
      (*(AnyCell*)((u8*)&auStack_50 + 0)) = (*(AnyCell*)((u8*)&auVar16 + 0));
      (*(AnyCell*)((u8*)&auStack_50 + 4)) = (*(AnyCell*)((u8*)&auVar16 + 4));
      uStack_48 = (*(AnyCell*)((u8*)&auVar16 + 8));
      uStack_44 = (*(AnyCell*)((u8*)&auVar16 + 12));
      uStack_70 = (*(AnyCell*)((u8*)&auStack_50 + 0));
      uStack_6c = (*(AnyCell*)((u8*)&auStack_50 + 4));
      uStack_68 = uStack_48;
      uStack_64 = uStack_44;
    }
    (*(AnyCell*)((u8*)&auVar21 + 4)) = uStack_6c;
    (*(AnyCell*)((u8*)&auVar21 + 0)) = uStack_70;
    (*(AnyCell*)((u8*)&auVar21 + 8)) = uStack_68;
    (*(AnyCell*)((u8*)&auVar21 + 12)) = uStack_64;
    auVar16 = _lqc2(auVar21);
    auVar17 = _lqc2(auStack_60);
    auVar16 = _vadd(auVar16,auVar17);
    auVar16 = _sqc2(auVar16);
    if (&uStack_80 != (undefined4 *)auStack_50) {
      (*(AnyCell*)((u8*)&auStack_50 + 0)) = (*(AnyCell*)((u8*)&auVar16 + 0));
      (*(AnyCell*)((u8*)&auStack_50 + 4)) = (*(AnyCell*)((u8*)&auVar16 + 4));
      uStack_48 = (*(AnyCell*)((u8*)&auVar16 + 8));
      uStack_44 = (*(AnyCell*)((u8*)&auVar16 + 12));
      uStack_80 = (*(AnyCell*)((u8*)&auStack_50 + 0));
      uStack_78 = uStack_48;
      uStack_74 = uStack_44;
      fStack_7c = (float)(*(AnyCell*)((u8*)&auStack_50 + 4));
    }
    fStack_7c = fStack_7c - fStack_118;
    (*(AnyCell*)((u8*)&auVar8 + 4)) = fStack_7c;
    (*(AnyCell*)((u8*)&auVar8 + 0)) = uStack_80;
    (*(AnyCell*)((u8*)&auVar8 + 8)) = uStack_78;
    (*(AnyCell*)((u8*)&auVar8 + 12)) = uStack_74;
    auVar21 = _lqc2(auVar8);
    (*(AnyCell*)((u8*)&auVar11 + 4)) = uStack_fc;
    (*(AnyCell*)((u8*)&auVar11 + 0)) = uStack_100;
    (*(AnyCell*)((u8*)&auVar11 + 8)) = uStack_f8;
    (*(AnyCell*)((u8*)&auVar11 + 12)) = uStack_f4;
    auVar16 = _lqc2(auVar11);
    (*(AnyCell*)((u8*)&auVar20 + 4)) = (*(AnyCell*)((u8*)&auStack_f0 + 4));
    (*(AnyCell*)((u8*)&auVar20 + 0)) = (*(AnyCell*)((u8*)&auStack_f0 + 0));
    (*(AnyCell*)((u8*)&auVar20 + 8)) = (*(AnyCell*)((u8*)&auStack_f0 + 8));
    (*(AnyCell*)((u8*)&auVar20 + 12)) = (*(AnyCell*)((u8*)&auStack_f0 + 12));
    auVar17 = _lqc2(auVar20);
    (*(AnyCell*)((u8*)&auVar4 + 4)) = uStack_dc;
    (*(AnyCell*)((u8*)&auVar4 + 0)) = uStack_e0;
    (*(AnyCell*)((u8*)&auVar4 + 8)) = uStack_d8;
    (*(AnyCell*)((u8*)&auVar4 + 12)) = uStack_d4;
    auVar18 = _lqc2(auVar4);
    (*(AnyCell*)((u8*)&auVar5 + 4)) = (*(AnyCell*)((u8*)&auStack_d0 + 4));
    (*(AnyCell*)((u8*)&auVar5 + 0)) = (*(AnyCell*)((u8*)&auStack_d0 + 0));
    (*(AnyCell*)((u8*)&auVar5 + 8)) = (*(AnyCell*)((u8*)&auStack_d0 + 8));
    (*(AnyCell*)((u8*)&auVar5 + 12)) = (*(AnyCell*)((u8*)&auStack_d0 + 12));
    auVar19 = _lqc2(auVar5);
    _vmulabc(auVar16,auVar21);
    _vmaddabc(auVar17,auVar21);
    _vmaddabc(auVar18,auVar21);
    auVar16 = _vmaddbc(auVar19,auVar21);
    _auStack_50 = _sqc2(auVar16);
    if ((undefined4 *)(iVar13 + 0x60) != (undefined4 *)auStack_50) {
      *(undefined4 *)(iVar13 + 0x60) = (*(AnyCell*)((u8*)&auStack_50 + 0));
      *(undefined4 *)(iVar13 + 100) = (*(AnyCell*)((u8*)&auStack_50 + 4));
      *(undefined4 *)(iVar13 + 0x68) = uStack_48;
      *(undefined4 *)(iVar13 + 0x6c) = uStack_44;
    }
  }
  uVar14 = DAT_004f3600;
  *(undefined4 *)(iVar13 + 0x34) = 0;
  *(undefined4 *)(iVar13 + 0x30) = uVar14;
  FUN_0013f648(param_1);
  return;
}

