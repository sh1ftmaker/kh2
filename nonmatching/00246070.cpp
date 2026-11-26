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

s32 FUN_001d7940(...) asm("func_001d7940");
s32 FUN_00246070(...) asm("_ZN2Tz4HECO7CtrlSelEv");
s32 FUN_00246840(...) asm("func_00246840");
s32 FUN_00246868(...) asm("func_00246868");
s32 FUN_002468e8(...) asm("func_002468e8");
s32 FUN_002469a0(...) asm("func_002469a0");
s32 FUN_002474e0(...) asm("func_002474e0");
s32 FUN_00287bd0(...) asm("func_00287bd0");
s32 FUN_00287c90(...) asm("func_00287c90");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00287cd0(...) asm("func_00287cd0");
s32 FUN_00287da0(...) asm("func_00287da0");
s32 FUN_00287df0(...) asm("func_00287df0");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_00289310(...) asm("func_00289310");
s32 FUN_00289380(...) asm("func_00289380");
s32 FUN_0028aa40(...) asm("func_0028aa40");
s32 FUN_0028ab20(...) asm("func_0028ab20");
s32 FUN_0028abe0(...) asm("func_0028abe0");
s32 FUN_0028acc8(...) asm("func_0028acc8");
s32 FUN_0028ae28(...) asm("func_0028ae28");
s32 FUN_002b4388(...) asm("func_002b4388");
extern AnyCell DAT_0035ed20 asm("D_0035ed20");
extern AnyCell DAT_0035ed24 asm("D_0035ed24");
extern AnyCell DAT_0035ed38 asm("D_0035ed38");
extern AnyCell DAT_0035ed40 asm("D_0035ed40");
extern AnyCell DAT_00371ca8 asm("D_00371ca8");
extern AnyCell DAT_00371cb0 asm("D_00371cb0");
_GHIDRA_ANY(CONCAT22)
static AnyCell a;

// Ghidra decompile of 0x00246070, wrapped mechanically (ad/fallback.py)

void FUN_00246070_impl(void) asm("_ZN2Tz4HECO7CtrlSelEv");
void FUN_00246070_impl(void) {
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  puVar10 = &uStack_50;
  lVar5 = FUN_00287cd0();
  lVar6 = FUN_00289380(DAT_0035ed24);
  if (lVar5 == 2) {
    lVar5 = FUN_0028acc8(DAT_0035ed24);
    if (lVar5 == 0) {
      iVar1 = FUN_00246868();
      uVar7 = FUN_002891e8(DAT_0035ed20);
      iVar2 = FUN_002469a0(uVar7);
      puVar3 = (undefined8 *)(iVar2 * 0x24 + iVar1);
      if (((uint)puVar3 & 7) == 0) {
        uStack_50 = *puVar3;
        uStack_48 = puVar3[1];
        uStack_40 = puVar3[2];
        uStack_38 = puVar3[3];
        uStack_30 = *(undefined4 *)(puVar3 + 4);
      }
      else {
        puVar4 = puVar3 + 4;
        do {
          uVar9 = puVar3[1];
          *puVar10 = *puVar3;
          puVar10[1] = uVar9;
          puVar3 = puVar3 + 2;
          puVar10 = puVar10 + 2;
        } while (puVar3 != puVar4);
        *(undefined4 *)puVar10 = *(undefined4 *)puVar3;
      }
      lVar5 = FUN_002474e0(uVar7);
      if (lVar5 != 0) {
        iVar1 = FUN_002469a0(uVar7);
        lVar5 = FUN_00246840();
        if (lVar5 == 0) {
          puVar11 = &DAT_00371ca8;
        }
        else {
          puVar11 = &DAT_00371cb0;
        }
        (*(AnyCell*)((u8*)&uStack_38 + 0)) = CONCAT22((puVar11[iVar1] != '\a') + 0xfcc,(undefined2)uStack_38);
      }
      FUN_002b4388(DAT_0035ed38,&uStack_50,0);
      FUN_00287bd0(0,0);
      FUN_00287cc0(1);
      return;
    }
    if ((lVar6 == -1) && (lVar5 = FUN_00289310(DAT_0035ed24), lVar5 == 0)) {
      return;
    }
    FUN_0028abe0(DAT_0035ed24);
switchD_002462b4_caseD_fffffffc:
;
  }
  else {
    if (((lVar6 != -1) || (lVar8 = FUN_00289310(DAT_0035ed24), lVar8 != 0)) &&
       (lVar8 = FUN_0028ae28(DAT_0035ed24,0), lVar8 == 0)) {
      FUN_0028ab20(DAT_0035ed24);
    }
    if ((lVar5 == 0) && (lVar5 = FUN_0028ae28(DAT_0035ed24,0), lVar5 != 0)) {
      FUN_00287c90(1);
    }
    uVar7 = FUN_00289310(DAT_0035ed24);
    FUN_00287df0(lVar6,uVar7,0,0,1);
    switch((int)lVar6) {
    case 0:
      uVar7 = FUN_002891e8(DAT_0035ed20);
      uVar9 = FUN_002469a0(uVar7);
      FUN_002468e8(uVar9,*(char *)((int)uVar7 + DAT_0035ed40 + 0x3948) + 1);
      FUN_001d7940();
      FUN_00287da0();
      break;
    default:
      goto switchD_002462b4_caseD_fffffffc;
    case -2:
    case 1:
      FUN_0028aa40(DAT_0035ed24);
      FUN_00287c90(1);
    }
  }
  return;
}

