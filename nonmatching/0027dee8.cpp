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

s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023aa58(...) asm("func_0023aa58");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_00257140(...) asm("func_00257140");
s32 FUN_0027dee8(...) asm("_ZN2Tz10SimpleStat6CreateEiii");
s32 FUN_0027e920(...) asm("func_0027e920");
s32 FUN_0027eb10(...) asm("func_0027eb10");
s32 FUN_00281100(...) asm("func_00281100");
s32 FUN_00281140(...) asm("func_00281140");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028d980(...) asm("func_0028d980");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
extern u32 DAT_0035ef64 asm("D_0035ef64");
extern u32 DAT_0035ef68 asm("D_0035ef68");
extern u32 DAT_0035f010 asm("D_0035f010");
extern u32 DAT_0035f03c asm("D_0035f03c");
extern u32 DAT_0035f244 asm("D_0035f244");
extern u32 DAT_0035f248 asm("D_0035f248");
extern u32 DAT_0035f24c asm("D_0035f24c");
extern u32 DAT_0035f24d asm("D_0035f24d");
extern u32 DAT_0035f24e asm("D_0035f24e");
extern u32 DAT_00374044 asm("D_00374044");
extern u32 DAT_00374048 asm("D_00374048");
extern u32 DAT_00374070 asm("D_00374070");
extern u32 LAB_0027e484 asm("D_0027e484");
extern u32 LAB_0027e488 asm("D_0027e488");
extern undefined *PTR_DAT_0037404e asm("D_0037404e");
extern AnyCell u_Z______00374060 asm("D_00374060");
extern AnyCell u_fhji_00374054 asm("D_00374054");
static AnyCell x05;

// Ghidra decompile of 0x0027dee8, wrapped mechanically (ad/fallback.py)

void FUN_0027dee8_impl(char param_1,char param_2,int param_3) asm("_ZN2Tz10SimpleStat6CreateEiii");
void FUN_0027dee8_impl(char param_1,char param_2,int param_3) {
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  int iStack_8c;
  int iStack_88;
  
  FUN_0027e920();
  DAT_0035f24e = (char)param_3;
  DAT_0035f24c = param_1;
  DAT_0035f24d = param_2;
  if (param_3 == 4) {
    iStack_88 = FUN_00281100(DAT_0035f010);
  }
  else {
    iStack_88 = 1;
  }
  iStack_8c = 0;
  FUN_0028d8c0(DAT_0035f244,0x753b,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
               *(undefined2 *)((int)&PTR_DAT_0037404e + DAT_0035f24c * 6 + 2),
               u_fhji_00374054[DAT_0035f24c * 3],0);
  iVar1 = FUN_0023aa78(DAT_0035f244 + 0x18);
  iVar2 = FUN_0023aa98(DAT_0035f244 + 0x18);
  if (0 < iStack_88) {
    do {
      uVar3 = DAT_00374048;
      if (DAT_0035f24d != '\x05') {
        uVar3 = DAT_00374044;
      }
      FUN_0028d980(DAT_0035f248 + iStack_8c * 0x13fc,0x753c,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
                   uVar3,0xffffffffffffffff,0xffffffffffffffff);
      if (DAT_0035f24c == '\0') {
        iVar10 = 0;
        iVar9 = iStack_88 - iStack_8c;
      }
      else {
        iVar10 = iVar1 * (iStack_8c / 2);
        iVar9 = iStack_8c % 2;
      }
      lVar14 = (long)iStack_8c;
      iVar4 = iStack_8c * 0x13fc;
      FUN_00138c68(DAT_0035f248 + iVar4,iVar2 * iVar9,iVar10);
      FUN_00139620(DAT_0035f248 + iVar4);
      FUN_0028dcc0(DAT_0035f248 + iVar4,DAT_0035f244);
      if (param_3 != 4) {
        lVar14 = (long)DAT_0035f24e;
      }
      iVar9 = iStack_8c * 0x13fc;
      iVar15 = 0;
      iVar10 = DAT_0035f248 + iVar9;
      uVar3 = FUN_00281140(DAT_0035f010,lVar14);
      *(undefined4 *)(iVar10 + 0x198) = uVar3;
      *(undefined4 *)(DAT_0035f248 + iVar9 + 0x1b0) = 2;
      FUN_0028d8c0(DAT_0035f248 + iVar9 + 0x1b4,0x753c,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
                   u_Z______00374060[DAT_0035f24d],0xffffffffffffffff,0);
      FUN_00139620(DAT_0035f248 + iVar9 + 0x1b4);
      FUN_0028dcc0(DAT_0035f248 + iVar9 + 0x1b4);
      uVar3 = FUN_0023aa18(DAT_0035f248 + iVar9 + 0x1cc);
      iVar4 = FUN_0023aa38(DAT_0035f248 + iVar9 + 0x1cc);
      uVar5 = FUN_0023aa58(DAT_0035f248 + iVar9 + 0x1cc);
      iVar6 = FUN_0023aa78(DAT_0035f248 + iVar9 + 0x1cc);
      iVar10 = 3;
      if (DAT_0035f24d != '\0') {
        iVar10 = 1;
      }
      if (iVar10 != 0) {
        do {
          uVar8 = 0;
          uVar16 = 2;
          if ((DAT_0035f24d == '\0') && (uVar8 = 2, iVar15 != 0)) {
            uVar16 = 6;
            if (iVar15 == 1) {
              uVar16 = 4;
              uVar8 = 4;
            }
            else {
              uVar8 = 6;
            }
          }
          uVar8 = FUN_00257140(uVar8);
          iVar11 = iVar9 + iVar15 * 0x1b4;
          FUN_0028d980(iVar11 + DAT_0035f248 + 0x9ac,0x753c,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
                       uVar8,0xffffffffffffffff,0xffffffffffffffff);
          FUN_00139620(iVar11 + DAT_0035f248 + 0x9ac);
          FUN_00138c68(iVar11 + DAT_0035f248 + 0x9ac,0,iVar6 * iVar15);
          *(undefined4 *)(iVar11 + DAT_0035f248 + 0xb54) = uVar5;
          FUN_001395f8(iVar11 + DAT_0035f248 + 0x9ac);
          FUN_0028dcc0(iVar11 + DAT_0035f248 + 0x9ac,DAT_0035f248 + iVar9 + 0x1b4);
          iVar11 = DAT_0035f248;
          if (DAT_0035f24d == '\0') {
            uVar13 = DAT_00374070;
            if ((iVar15 != 0) && (uVar13 = 0xb9fd, iVar15 != 1)) {
              uVar13 = 0xb9fe;
            }
          }
          else {
            uVar13 = (&DAT_00374070)[DAT_0035f24d];
          }
          uVar7 = FUN_00192048(uVar13);
          iVar12 = iVar9 + iVar15 * 0x1b4;
          *(undefined4 *)(iVar12 + iVar11 + 0xb44) = uVar7;
          uVar8 = FUN_00257140(uVar16);
          FUN_0028d980(iVar12 + DAT_0035f248 + 0xec8,0x753c,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
                       uVar8,0xffffffffffffffff,0xffffffffffffffff);
          FUN_00139620(iVar12 + DAT_0035f248 + 0xec8);
          FUN_00138c68(iVar12 + DAT_0035f248 + 0xec8,uVar3,iVar6 * iVar15 + iVar4);
          *(undefined4 *)(iVar12 + DAT_0035f248 + 0x1070) = uVar5;
          FUN_001395f8(iVar12 + DAT_0035f248 + 0xec8);
          FUN_0028dcc0(iVar12 + DAT_0035f248 + 0xec8,DAT_0035f248 + iVar9 + 0x1b4);
          *(undefined1 *)(iVar15 * 8 + iVar9 + DAT_0035f248 + 0x13e4) = 0;
          *(int *)(iVar12 + DAT_0035f248 + 0x1060) = iVar9 + iVar15 * 8 + DAT_0035f248 + 0x13e4;
          *(undefined4 *)(iVar12 + DAT_0035f248 + 0x1078) = 1;
          FUN_0028dcc0(iVar12 + DAT_0035f248 + 0xec8,DAT_0035f248 + iVar9 + 0x1b4);
          iVar11 = iVar15;
          if (DAT_0035f24d < '\x05') {
            if (('\0' < DAT_0035f24d) || (DAT_0035f24d != '\0')) goto LAB_0027e484;
            lVar14 = 0x5f;
            if (iVar15 != 0) {
              iVar11 = iVar15 + -1;
              uVar8 = 0x62;
              if (iVar15 != 1) {
                uVar8 = 99;
              }
              goto LAB_0027e488;
            }
          }
          else {
            lVar14 = 0x61;
            uVar8 = 0x60;
            if (DAT_0035f24d != '\x05') {
LAB_0027e484:
              lVar14 = -1;
              uVar8 = 100;
            }
LAB_0027e488:
            if (-1 < lVar14) {
              iVar12 = iVar9 + iVar11 * 0x198;
              FUN_0028d8c0(iVar12 + DAT_0035f248 + 0x34c,0x753c,DAT_0035ef68,DAT_0035ef64,
                           DAT_0035f03c,lVar14,0xffffffffffffffff,0);
              FUN_00139620(iVar12 + DAT_0035f248 + 0x34c);
              FUN_00138c68(iVar12 + DAT_0035f248 + 0x34c,0,iVar6 * iVar15);
              FUN_0028dcc0(iVar12 + DAT_0035f248 + 0x34c,DAT_0035f248 + iVar9 + 0x1b4);
            }
            iVar11 = iVar9 + iVar11 * 0x198;
            FUN_0028d8c0(iVar11 + DAT_0035f248 + 0x67c,0x753d,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c
                         ,uVar8,0xffffffffffffffff,0);
            FUN_00139620(iVar11 + DAT_0035f248 + 0x67c);
            FUN_00138c68(iVar11 + DAT_0035f248 + 0x67c,0,iVar6 * iVar15);
            FUN_0028dcc0(iVar11 + DAT_0035f248 + 0x67c,DAT_0035f248 + iVar9 + 0x1b4);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar10);
      }
      iStack_8c = iStack_8c + 1;
    } while (iStack_8c < iStack_88);
  }
  FUN_0027eb10();
  return;
}

