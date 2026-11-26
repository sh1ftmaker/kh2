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

s32 FUN_00106a60(...) asm("func_00106a60");
s32 FUN_001070e8(...) asm("func_001070e8");
s32 FUN_00147810(...) asm("_ZN2dk11OctDrawFile18calcCameraRelativeEPNS_11ObjDrawListE");
extern undefined *PTR_FUN_0033cc50 asm("D_0033cc50");
_GHIDRA_ANY(SUB128)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_pcpyld)
_GHIDRA_ANY(_pcpyud)
_GHIDRA_ANY(_pextlw)
_GHIDRA_ANY(_pextuw)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x00147810, wrapped mechanically (ad/fallback.py)

void FUN_00147810_impl(undefined8 param_1,int param_2) asm("_ZN2dk11OctDrawFile18calcCameraRelativeEPNS_11ObjDrawListE");
void FUN_00147810_impl(undefined8 param_1,int param_2) {
  int iVar1;
  undefined4 *puVar2;
  Q16 auVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 auVar6;
  Q16 *pauVar7;
  Q16 auVar8;
  undefined4 in_vf0w;
  B12 in_register_00004104;
  Q16 auVar9;
  Q16 auVar10;
  Q16 auVar11;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [32];
  undefined **appuStack_f0 [4];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  Q16 auStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  Q16 auStack_60;
  Q16 auStack_50;
  Q16 auStack_40;
  Q16 auStack_30;
  Q16 auStack_20;
  
  if (((*(uint *)(param_2 + 0xf8) & 0x1000) != 0) && (*(int *)(param_2 + 0x120) == 0)) {
    iVar1 = FUN_00106a60(1);
    appuStack_f0[0] = &PTR_FUN_0033cc50;
    uStack_a0 = *(undefined4 *)(iVar1 + 0x50);
    uStack_9c = *(undefined4 *)(iVar1 + 0x54);
    uStack_98 = *(undefined4 *)(iVar1 + 0x58);
    uStack_94 = *(undefined4 *)(iVar1 + 0x5c);
    uStack_90 = *(undefined4 *)(iVar1 + 0x60);
    uStack_8c = *(undefined4 *)(iVar1 + 100);
    uStack_88 = *(undefined4 *)(iVar1 + 0x68);
    uStack_84 = *(undefined4 *)(iVar1 + 0x6c);
    uStack_80 = *(undefined4 *)(iVar1 + 0x70);
    uStack_7c = *(undefined4 *)(iVar1 + 0x74);
    uStack_78 = *(undefined4 *)(iVar1 + 0x78);
    uStack_74 = *(undefined4 *)(iVar1 + 0x7c);
    uStack_70 = *(undefined4 *)(iVar1 + 0x80);
    auVar4 = _qmfc2(in_vf0w);
    auVar10 = _lqc2(*(Q16 *)(iVar1 + 0x40));
    auVar5 = _pextlw(SUB128(*(B12 *)*(Q16 *)(iVar1 + 0x20),0),
                     SUB128(*(B12 *)*(Q16 *)(iVar1 + 0x10),0));
    auVar6 = _pextuw(*(Q16 *)(iVar1 + 0x20),*(Q16 *)(iVar1 + 0x10));
    auVar8 = _pextlw((*(AnyCell*)((u8*)&auVar4 + 0)),
                     SUB128(*(B12 *)*(Q16 *)(iVar1 + 0x30),0));
    auVar4 = _pextuw(auVar4,*(Q16 *)(iVar1 + 0x30));
    auVar3 = _pcpyld(auVar8,auVar5);
    auVar5 = _pcpyud(auVar5,auVar8);
    auVar6 = _pcpyld(auVar4,auVar6);
    uStack_e0 = (*(AnyCell*)((u8*)&auVar3 + 0));
    auVar4 = _qmtc2(uStack_e0);
    uStack_d0 = (*(AnyCell*)((u8*)&auVar5 + 0));
    auVar8 = _qmtc2(uStack_d0);
    uStack_c0 = (*(AnyCell*)((u8*)&auVar6 + 0));
    auVar9 = _qmtc2(uStack_c0);
    _vmulabc(auVar4,auVar10);
    _vmaddabc(auVar8,auVar10);
    auVar8 = _vmaddbc(auVar9,auVar10);
    (*(B12*)((u8*)&auVar4 + 4)) = in_register_00004104;
    (*(AnyCell*)((u8*)&auVar4 + 0)) = in_vf0w;
    auVar4 = _vsub(auVar4,auVar8);
    uStack_dc = (*(AnyCell*)((u8*)&auVar3 + 4));
    uStack_d8 = (*(AnyCell*)((u8*)&auVar3 + 8));
    uStack_d4 = (*(AnyCell*)((u8*)&auVar3 + 12));
    uStack_cc = (*(AnyCell*)((u8*)&auVar5 + 4));
    uStack_c8 = (*(AnyCell*)((u8*)&auVar5 + 8));
    uStack_c4 = (*(AnyCell*)((u8*)&auVar5 + 12));
    uStack_bc = (*(AnyCell*)((u8*)&auVar6 + 4));
    uStack_b8 = (*(AnyCell*)((u8*)&auVar6 + 8));
    uStack_b4 = (*(AnyCell*)((u8*)&auVar6 + 12));
    auStack_b0 = _sqc2(auVar4);
    pauVar7 = (Q16 *)(param_2 + 0xc0);
    auVar11 = _lqc2(*pauVar7);
    auVar4 = _lqc2(auVar3);
    auVar8 = _lqc2(auVar5);
    auVar9 = _lqc2(auVar6);
    auVar10 = _lqc2(auStack_b0);
    _vmulabc(auVar4,auVar11);
    _vmaddabc(auVar8,auVar11);
    _vmaddabc(auVar9,auVar11);
    auVar4 = _vmaddbc(auVar10,auVar11);
    auStack_60 = _sqc2(auVar4);
    if ((Q16 *)auStack_110 != &auStack_60) {
      (*(AnyCell*)((u8*)&auStack_110 + 0)) = (*(AnyCell*)((u8*)&auStack_60 + 0));
      (*(AnyCell*)((u8*)&auStack_110 + 4)) = (*(AnyCell*)((u8*)&auStack_60 + 4));
      (*(AnyCell*)((u8*)&auStack_110 + 8)) = (*(AnyCell*)((u8*)&auStack_60 + 8));
      (*(AnyCell*)((u8*)&auStack_110 + 12)) = (*(AnyCell*)((u8*)&auStack_60 + 12));
    }
    puVar2 = (undefined4 *)(param_2 + 0x40);
    if (&uStack_150 != puVar2) {
      uStack_150 = *puVar2;
      uStack_14c = *(undefined4 *)(param_2 + 0x44);
      uStack_148 = *(undefined4 *)(param_2 + 0x48);
      uStack_144 = *(undefined4 *)(param_2 + 0x4c);
      uStack_140 = *(undefined4 *)(param_2 + 0x50);
      uStack_13c = *(undefined4 *)(param_2 + 0x54);
      uStack_138 = *(undefined4 *)(param_2 + 0x58);
      uStack_134 = *(undefined4 *)(param_2 + 0x5c);
      uStack_130 = *(undefined4 *)(param_2 + 0x60);
      uStack_12c = *(undefined4 *)(param_2 + 100);
      uStack_128 = *(undefined4 *)(param_2 + 0x68);
      uStack_124 = *(undefined4 *)(param_2 + 0x6c);
      uStack_120 = *(undefined4 *)(param_2 + 0x70);
      uStack_11c = *(undefined4 *)(param_2 + 0x74);
      uStack_118 = *(undefined4 *)(param_2 + 0x78);
      uStack_114 = *(undefined4 *)(param_2 + 0x7c);
    }
    auVar4 = _lqc2(auVar3);
    auVar9 = _lqc2(auVar5);
    auVar10 = _lqc2(auVar6);
    auVar11 = _lqc2(auStack_b0);
    (*(AnyCell*)((u8*)&auVar3 + 4)) = uStack_14c;
    (*(AnyCell*)((u8*)&auVar3 + 0)) = uStack_150;
    (*(AnyCell*)((u8*)&auVar3 + 8)) = uStack_148;
    (*(AnyCell*)((u8*)&auVar3 + 12)) = uStack_144;
    auVar3 = _lqc2(auVar3);
    (*(AnyCell*)((u8*)&auVar5 + 4)) = uStack_13c;
    (*(AnyCell*)((u8*)&auVar5 + 0)) = uStack_140;
    (*(AnyCell*)((u8*)&auVar5 + 8)) = uStack_138;
    (*(AnyCell*)((u8*)&auVar5 + 12)) = uStack_134;
    auVar5 = _lqc2(auVar5);
    (*(AnyCell*)((u8*)&auVar6 + 4)) = uStack_12c;
    (*(AnyCell*)((u8*)&auVar6 + 0)) = uStack_130;
    (*(AnyCell*)((u8*)&auVar6 + 8)) = uStack_128;
    (*(AnyCell*)((u8*)&auVar6 + 12)) = uStack_124;
    auVar6 = _lqc2(auVar6);
    (*(AnyCell*)((u8*)&auVar8 + 4)) = uStack_11c;
    (*(AnyCell*)((u8*)&auVar8 + 0)) = uStack_120;
    (*(AnyCell*)((u8*)&auVar8 + 8)) = uStack_118;
    (*(AnyCell*)((u8*)&auVar8 + 12)) = uStack_114;
    auVar8 = _lqc2(auVar8);
    _vmulabc(auVar4,auVar3);
    _vmaddabc(auVar9,auVar3);
    _vmaddabc(auVar10,auVar3);
    auVar3 = _vmaddbc(auVar11,auVar3);
    _vmulabc(auVar4,auVar5);
    _vmaddabc(auVar9,auVar5);
    _vmaddabc(auVar10,auVar5);
    auVar5 = _vmaddbc(auVar11,auVar5);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar9,auVar6);
    _vmaddabc(auVar10,auVar6);
    auVar6 = _vmaddbc(auVar11,auVar6);
    _vmulabc(auVar4,auVar8);
    _vmaddabc(auVar9,auVar8);
    _vmaddabc(auVar10,auVar8);
    auVar4 = _vmaddbc(auVar11,auVar8);
    auStack_50 = _sqc2(auVar3);
    auStack_40 = _sqc2(auVar5);
    auStack_30 = _sqc2(auVar6);
    auStack_20 = _sqc2(auVar4);
    if (&uStack_150 != (undefined4 *)auStack_50) {
      uStack_150 = (*(AnyCell*)((u8*)&auStack_50 + 0));
      uStack_14c = (*(AnyCell*)((u8*)&auStack_50 + 4));
      uStack_148 = (*(AnyCell*)((u8*)&auStack_50 + 8));
      uStack_144 = (*(AnyCell*)((u8*)&auStack_50 + 12));
      uStack_140 = (*(AnyCell*)((u8*)&auStack_40 + 0));
      uStack_13c = (*(AnyCell*)((u8*)&auStack_40 + 4));
      uStack_138 = (*(AnyCell*)((u8*)&auStack_40 + 8));
      uStack_134 = (*(AnyCell*)((u8*)&auStack_40 + 12));
      uStack_130 = (*(AnyCell*)((u8*)&auStack_30 + 0));
      uStack_12c = (*(AnyCell*)((u8*)&auStack_30 + 4));
      uStack_128 = (*(AnyCell*)((u8*)&auStack_30 + 8));
      uStack_124 = (*(AnyCell*)((u8*)&auStack_30 + 12));
      uStack_120 = (*(AnyCell*)((u8*)&auStack_20 + 0));
      uStack_11c = (*(AnyCell*)((u8*)&auStack_20 + 4));
      uStack_118 = (*(AnyCell*)((u8*)&auStack_20 + 8));
      uStack_114 = (*(AnyCell*)((u8*)&auStack_20 + 12));
    }
    if (puVar2 != &uStack_150) {
      *puVar2 = uStack_150;
      *(undefined4 *)(param_2 + 0x44) = uStack_14c;
      *(undefined4 *)(param_2 + 0x48) = uStack_148;
      *(undefined4 *)(param_2 + 0x4c) = uStack_144;
      *(undefined4 *)(param_2 + 0x50) = uStack_140;
      *(undefined4 *)(param_2 + 0x54) = uStack_13c;
      *(undefined4 *)(param_2 + 0x58) = uStack_138;
      *(undefined4 *)(param_2 + 0x5c) = uStack_134;
      *(undefined4 *)(param_2 + 0x60) = uStack_130;
      *(undefined4 *)(param_2 + 100) = uStack_12c;
      *(undefined4 *)(param_2 + 0x68) = uStack_128;
      *(undefined4 *)(param_2 + 0x6c) = uStack_124;
      *(undefined4 *)(param_2 + 0x70) = uStack_120;
      *(undefined4 *)(param_2 + 0x74) = uStack_11c;
      *(undefined4 *)(param_2 + 0x78) = uStack_118;
      *(undefined4 *)(param_2 + 0x7c) = uStack_114;
    }
    if (pauVar7 != (Q16 *)auStack_110) {
      *(undefined4 *)*pauVar7 = (*(AnyCell*)((u8*)&auStack_110 + 0));
      *(undefined4 *)(param_2 + 0xc4) = (*(AnyCell*)((u8*)&auStack_110 + 4));
      *(undefined4 *)(param_2 + 200) = (*(AnyCell*)((u8*)&auStack_110 + 8));
      *(undefined4 *)(param_2 + 0xcc) = (*(AnyCell*)((u8*)&auStack_110 + 12));
    }
    FUN_001070e8(appuStack_f0);
  }
  return;
}

