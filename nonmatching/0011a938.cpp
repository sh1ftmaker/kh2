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

s32 FUN_00106a18(...) asm("func_00106a18");
s32 FUN_00106a60(...) asm("func_00106a60");
s32 FUN_001070a0(...) asm("func_001070a0");
s32 FUN_00112d90(...) asm("func_00112d90");
s32 FUN_0011a938(...) asm("_ZN2kn13ChickenLittle18get_nearest_targetEPN2YS6TARGETEff");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_00190140(...) asm("func_00190140");
s32 FUN_001901c0(...) asm("func_001901c0");
s32 FUN_00190388(...) asm("func_00190388");
s32 FUN_00190730(...) asm("func_00190730");
s32 FUN_0019c410(...) asm("func_0019c410");
s32 FUN_002f8870(...) asm("func_002f8870");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmfc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vaddbc)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmove)
_GHIDRA_ANY(_vmul)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vmulbc)
_GHIDRA_ANY(_vsub)

// Ghidra decompile of 0x0011a938, wrapped mechanically (ad/fallback.py)

void FUN_0011a938_impl(float param_1,float param_2,int param_3,undefined8 param_4) asm("_ZN2kn13ChickenLittle18get_nearest_targetEPN2YS6TARGETEff");
void FUN_0011a938_impl(float param_1,float param_2,int param_3,undefined8 param_4) {
  undefined8 uVar1;
  long lVar2;
  Q16 auVar3;
  Q16 auVar4;
  Q16 auVar5;
  Q16 auVar6;
  long lVar7;
  Q16 *pauVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Q16 in_vf0;
  Q16 auVar13;
  Q16 auVar14;
  Q16 auVar15;
  Q16 auVar16;
  Q16 auVar17;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_c4;
  Q16 auStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  Q16 auStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  Q16 auStack_70;
  
  FUN_00190128(param_4);
  uVar1 = FUN_00106a18(0);
  fVar10 = (float)FUN_001070a0(uVar1);
  lVar7 = FUN_00106a60(0);
  pauVar8 = (Q16 *)((int)lVar7 + 0x10);
  if (lVar7 == 0) {
    pauVar8 = (Q16 *)0x0;
  }
  auVar3 = *pauVar8;
  auVar4 = pauVar8[1];
  auVar14 = pauVar8[1];
  auVar5 = pauVar8[2];
  auVar15 = pauVar8[2];
  auVar6 = pauVar8[3];
  auVar16 = pauVar8[3];
  FUN_00190128(&uStack_f0);
  uStack_c4 = 0;
  auVar17 = _lqc2(*(Q16 *)(param_3 + 0x40));
  auVar13 = _lqc2(auVar3);
  auVar14 = _lqc2(auVar14);
  auVar15 = _lqc2(auVar15);
  auVar16 = _lqc2(auVar16);
  _vmulabc(auVar13,auVar17);
  _vmaddabc(auVar14,auVar17);
  _vmaddabc(auVar15,auVar17);
  _vmaddbc(auVar16,in_vf0);
  auVar14 = _vmove(in_vf0);
  auStack_b0 = _sqc2(auVar14);
  auVar14 = _lqc2(auStack_b0);
  auVar15 = _qmtc2(fVar10 / (float)(*(AnyCell*)((u8*)&auStack_b0 + 8)));
  auVar14 = _vmulbc(auVar14,auVar15);
  auStack_90 = _sqc2(auVar14);
  if (&uStack_a0 != (undefined4 *)auStack_90) {
    uStack_a0 = (*(AnyCell*)((u8*)&auStack_90 + 0));
    uStack_9c = (*(AnyCell*)((u8*)&auStack_90 + 4));
    uStack_98 = (*(AnyCell*)((u8*)&auStack_90 + 8));
    uStack_94 = (*(AnyCell*)((u8*)&auStack_90 + 12));
  }
  FUN_00190128(&uStack_f0);
  lVar7 = 0;
  fVar12 = param_2 * param_2 + param_1 * param_1;
  while (lVar7 = FUN_00190730(&uStack_f0,lVar7), lVar7 != 0) {
    lVar2 = FUN_00112d90(&uStack_f0);
    if (((lVar2 != 0) && (lVar2 = FUN_001901c0(&uStack_f0), lVar2 != 0)) &&
       (lVar2 = FUN_0019c410(uStack_f0), lVar2 == 0)) {
      FUN_00190388(auStack_70,&uStack_f0);
      auVar17 = _lqc2(auStack_70);
      auVar14 = _lqc2(auVar3);
      auVar15 = _lqc2(auVar4);
      auVar16 = _lqc2(auVar5);
      auVar13 = _lqc2(auVar6);
      _vmulabc(auVar14,auVar17);
      _vmaddabc(auVar15,auVar17);
      _vmaddabc(auVar16,auVar17);
      _vmaddbc(auVar13,in_vf0);
      auVar14 = _vmove(in_vf0);
      auStack_90 = _sqc2(auVar14);
      auVar14 = _lqc2(auStack_90);
      auVar15 = _qmtc2(fVar10 / (float)(*(AnyCell*)((u8*)&auStack_90 + 8)));
      auVar14 = _vmulbc(auVar14,auVar15);
      auVar14 = _sqc2(auVar14);
      if (&uStack_80 != (undefined4 *)auStack_70) {
        uStack_80 = (*(AnyCell*)((u8*)&auVar14 + 0));
        uStack_7c = (*(AnyCell*)((u8*)&auVar14 + 4));
        uStack_78 = (*(AnyCell*)((u8*)&auVar14 + 8));
        uStack_74 = (*(AnyCell*)((u8*)&auVar14 + 12));
      }
      (*(AnyCell*)((u8*)&auVar15 + 4)) = uStack_7c;
      (*(AnyCell*)((u8*)&auVar15 + 0)) = uStack_80;
      (*(AnyCell*)((u8*)&auVar15 + 8)) = uStack_78;
      (*(AnyCell*)((u8*)&auVar15 + 12)) = uStack_74;
      auVar15 = _lqc2(auVar15);
      (*(AnyCell*)((u8*)&auVar14 + 4)) = uStack_9c;
      (*(AnyCell*)((u8*)&auVar14 + 0)) = uStack_a0;
      (*(AnyCell*)((u8*)&auVar14 + 8)) = uStack_98;
      (*(AnyCell*)((u8*)&auVar14 + 12)) = uStack_94;
      auVar14 = _lqc2(auVar14);
      auVar14 = _vsub(auVar15,auVar14);
      auStack_70 = _sqc2(auVar14);
      fVar11 = (float)FUN_002f8870((*(AnyCell*)((u8*)&auStack_70 + 0)));
      if (fVar11 <= param_1) {
        fVar11 = (float)FUN_002f8870((*(AnyCell*)((u8*)&auStack_70 + 4)));
        if (fVar11 <= param_2) {
          (*(AnyCell*)((u8*)&auStack_70 + 8)) = 0;
          auVar14 = _lqc2(auStack_70);
          auVar14 = _vmul(auVar14,auVar14);
          auVar14 = _vaddbc(auVar14,auVar14);
          auVar14 = _vaddbc(auVar14,auVar14);
          auVar14 = _qmfc2((*(AnyCell*)((u8*)&auVar14 + 0)));
          fVar11 = (*(AnyCell*)((u8*)&auVar14 + 0));
          lVar2 = FUN_00190140(param_4);
          if ((lVar2 == 0) || (fVar11 < fVar12)) {
            puVar9 = (undefined4 *)param_4;
            puVar9[1] = uStack_ec;
            *puVar9 = uStack_f0;
            puVar9[2] = uStack_e8;
            puVar9[3] = uStack_e4;
            puVar9[4] = uStack_e0;
            fVar12 = fVar11;
          }
        }
      }
    }
  }
  return;
}

