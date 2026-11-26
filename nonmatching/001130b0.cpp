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

s32 FUN_00112f88(...) asm("func_00112f88");
s32 FUN_001130b0(...) asm("_ZN2kn6Friend6strikeERKNS_7FVectorEPN2YS6TARGETEPNS4_6ATTACKEi");
s32 FUN_0016ac80(...) asm("func_0016ac80");
s32 FUN_0017d050(...) asm("func_0017d050");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_0018a970(...) asm("func_0018a970");
s32 FUN_0018ca10(...) asm("func_0018ca10");
s32 FUN_0018d940(...) asm("func_0018d940");
s32 FUN_0018db38(...) asm("func_0018db38");
s32 FUN_001c2c00(...) asm("func_001c2c00");
s32 FUN_001dc648(...) asm("func_001dc648");
extern u32 DAT_0036a578 asm("D_0036a578");
_GHIDRA_ANY(_cfc2)
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vaddq)
_GHIDRA_ANY(_vdiv)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulbc)
_GHIDRA_ANY(_vmulq)
_GHIDRA_ANY(_vnop)
_GHIDRA_ANY(_vsqrt)
_GHIDRA_ANY(_vsub)
_GHIDRA_ANY(_vwaitq)

// Ghidra decompile of 0x001130b0, wrapped mechanically (ad/fallback.py)

undefined4 FUN_001130b0_impl(Q16 *param_1,undefined8 param_2,undefined8 param_3,long param_4) asm("_ZN2kn6Friend6strikeERKNS_7FVectorEPN2YS6TARGETEPNS4_6ATTACKEi");
undefined4 FUN_001130b0_impl(Q16 *param_1,undefined8 param_2,undefined8 param_3,long param_4) {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 in_vc6;
  Q16 in_vf0;
  Q16 auVar7;
  Q16 auVar8;
  undefined4 uVar9;
  B12 auStack_b0;
  undefined4 uStack_a4;
  Q16 auStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  Q16 auStack_80;
  Q16 auStack_70;
  undefined4 uStack_60;
  
  lVar5 = 0;
  piVar1 = (int *)*(undefined4 *)param_2;
  uStack_60 = 0;
  lVar4 = FUN_0018d940(param_3,piVar1);
  if ((lVar4 != 0) && (lVar4 = FUN_00112f88(param_2), lVar4 != 0)) {
    uStack_a4 = 0;
    FUN_0018a818(auStack_b0,piVar1,lVar4);
    auVar7 = _lqc2(auStack_a0);
    auVar8 = _lqc2(*param_1);
    auVar7 = _vsub(auVar7,auVar8);
    auVar7 = _sqc2(auVar7);
    if (auStack_80 != auStack_70) {
      auStack_80 = auVar7;
    }
    auStack_70 = *param_1;
    uVar6 = FUN_0018a970(auStack_b0,auStack_70);
    auVar7 = _lqc2(auStack_80);
    auVar8 = _vmul(auVar7,auVar7);
    auVar8 = _vaddbc(auVar8,auVar8);
    auVar8 = _vaddbc(auVar8,auVar8);
    _vsqrt(auVar8);
    uVar9 = _vwaitq();
    _cfc2(in_vc6);
    auVar8 = _vaddq(in_vf0,uVar9);
    _vnop();
    _vdiv(in_vf0,0,auVar8,0);
    uVar9 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar9);
    auVar7 = _sqc2(auVar7);
    auVar7 = _lqc2(auVar7);
    auVar8 = _qmtc2(uVar6);
    auVar7 = _vmulbc(auVar7,auVar8);
    auStack_80 = _sqc2(auVar7);
    auVar7 = _lqc2(*param_1);
    auVar8 = _lqc2(auStack_80);
    auVar7 = _vadd(auVar7,auVar8);
    auStack_70 = _sqc2(auVar7);
    if (&uStack_90 != (undefined4 *)auStack_70) {
      uStack_90 = (*(AnyCell*)((u8*)&auStack_70 + 0));
      uStack_8c = (*(AnyCell*)((u8*)&auStack_70 + 4));
      uStack_88 = (*(AnyCell*)((u8*)&auStack_70 + 8));
    }
    uStack_84 = DAT_0036a578;
    lVar5 = FUN_0018db38(param_3,piVar1,*(undefined2 *)((int)lVar4 + 2),
                         *(undefined1 *)((int)lVar4 + 1));
    if (lVar5 == 0) {
      return uStack_60;
    }
    if ((*(uint *)((int)lVar5 + 0x18) & 1) == 0) {
      uStack_60 = 1;
      (**(code **)(*piVar1 + 100))(piVar1,lVar5);
      if (((-1 < param_4) && (iVar2 = *(int *)((int)param_3 + 8), iVar2 != 0)) &&
         (lVar4 = FUN_0016ac80(iVar2,param_4,&uStack_90,1,10000), lVar4 != 0)) {
        puVar3 = (undefined4 *)FUN_001dc648(lVar4);
        FUN_0017d050(auStack_70,auStack_80);
        if (puVar3 != (undefined4 *)auStack_70) {
          *puVar3 = (*(AnyCell*)((u8*)&auStack_70 + 0));
          puVar3[1] = (*(AnyCell*)((u8*)&auStack_70 + 4));
          puVar3[2] = (*(AnyCell*)((u8*)&auStack_70 + 8));
          puVar3[3] = (*(AnyCell*)((u8*)&auStack_70 + 12));
        }
        FUN_001c2c00(lVar4);
      }
    }
  }
  if (lVar5 != 0) {
    FUN_0018ca10(lVar5);
  }
  return uStack_60;
}

