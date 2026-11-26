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

s32 FUN_00276568(...) asm("func_00276568");
s32 FUN_00294000(...) asm("func_00294000");
s32 FUN_00294408(...) asm("func_00294408");
s32 FUN_002a18d0(...) asm("_ZN2Tz9JmDiagram11GetCharaIdxEii");
extern AnyCell DAT_0035f5d4 asm("D_0035f5d4");
static AnyCell x10;

// Ghidra decompile of 0x002a18d0, wrapped mechanically (ad/fallback.py)

void FUN_002a18d0_impl(long param_1,char param_2) asm("_ZN2Tz9JmDiagram11GetCharaIdxEii");
void FUN_002a18d0_impl(long param_1,char param_2) {
  bool bVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_1 == 0) {
    if (param_2 < '\0') {
      pcVar2 = (char *)FUN_00276568();
      param_2 = *pcVar2;
    }
  }
  else {
    param_2 = '\x10';
  }
  bVar1 = false;
  iVar7 = -1;
  iVar8 = 0;
  DAT_0035f5d4[2] = param_2;
  iVar3 = FUN_00294000(5);
  iVar5 = *(int *)(iVar3 + 8);
  iVar9 = iVar3 + 0x10;
  iVar10 = iVar9;
  if (0 < iVar5) {
    do {
      if (*(char *)(iVar10 + 4) == param_2) {
        if (!bVar1) {
          bVar1 = true;
        }
        if (*(char *)(iVar10 + 6) == '\0') {
          lVar4 = FUN_00294408(iVar10);
          if (lVar4 == 0) break;
          iVar5 = *(int *)(iVar3 + 8);
          iVar7 = iVar8;
        }
      }
      else if (bVar1) break;
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar8 < iVar5);
  }
  lVar4 = 0;
  iVar10 = 0;
  iVar5 = iVar7 * 0xc + iVar9;
  puVar6 = (undefined8 *)(iVar3 + *(int *)(iVar5 + 8));
  if ('\0' < *(char *)(iVar5 + 5)) {
    do {
      if (*(char *)((int)puVar6 + 6) != '\0') {
        iVar7 = iVar10 * 8;
        iVar10 = iVar10 + 1;
        *(undefined8 *)(DAT_0035f5d4 + iVar7 + 0x50) = *puVar6;
      }
      lVar4 = (long)((int)lVar4 + 1);
      puVar6 = puVar6 + 1;
    } while (lVar4 < *(char *)(iVar5 + 5));
  }
  iVar5 = *(int *)(iVar3 + 8);
  bVar1 = false;
  iVar8 = 0;
  iVar7 = iVar9;
  if (0 < iVar5) {
    do {
      if (*(char *)(iVar7 + 4) == param_2) {
        if (!bVar1) {
          bVar1 = true;
        }
        if (*(char *)(iVar7 + 6) != '\0') {
          lVar4 = FUN_00294408(iVar7);
          if (lVar4 == 0) {
            iVar5 = *(int *)(iVar3 + 8);
          }
          else {
            lVar4 = 0;
            puVar6 = (undefined8 *)(iVar3 + *(int *)(iVar7 + 8));
            if ('\0' < *(char *)(iVar7 + 5)) {
              do {
                if (*(char *)((int)puVar6 + 6) != '\0') {
                  iVar5 = iVar10 * 8;
                  iVar10 = iVar10 + 1;
                  *(undefined8 *)(DAT_0035f5d4 + iVar5 + 0x50) = *puVar6;
                }
                lVar4 = (long)((int)lVar4 + 1);
                puVar6 = puVar6 + 1;
              } while (lVar4 < *(char *)(iVar9 + 5));
            }
            iVar5 = *(int *)(iVar3 + 8);
          }
        }
      }
      else if (bVar1) break;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0xc;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 < iVar5);
  }
  *DAT_0035f5d4 = (char)iVar10;
  return;
}

