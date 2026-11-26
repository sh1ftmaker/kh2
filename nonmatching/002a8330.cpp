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

s32 FUN_00105c30(...) asm("func_00105c30");
s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_0014ca80(...) asm("func_0014ca80");
s32 FUN_00192048(...) asm("func_00192048");
s32 FUN_00192b30(...) asm("func_00192b30");
s32 FUN_00192c40(...) asm("func_00192c40");
s32 FUN_00192c90(...) asm("func_00192c90");
s32 FUN_00192cc0(...) asm("func_00192cc0");
s32 FUN_001d56c8(...) asm("func_001d56c8");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_0028b038(...) asm("func_0028b038");
s32 FUN_0028be78(...) asm("func_0028be78");
s32 FUN_0028de08(...) asm("func_0028de08");
s32 FUN_00295430(...) asm("func_00295430");
s32 FUN_002954e0(...) asm("func_002954e0");
s32 FUN_002a7f20(...) asm("func_002a7f20");
s32 FUN_002a8330(...) asm("_ZN2Tz10JmMiniGame10UpdateListEv");
s32 FUN_002a8920(...) asm("func_002a8920");
s32 FUN_002ab100(...) asm("func_002ab100");
s32 FUN_002ab180(...) asm("func_002ab180");
s32 FUN_002fde18(...) asm("func_002fde18");
extern AnyCell DAT_0035f200 asm("D_0035f200");
extern AnyCell DAT_0035f214 asm("D_0035f214");
extern AnyCell DAT_0035f600 asm("D_0035f600");
extern AnyCell DAT_0035f604 asm("D_0035f604");
extern AnyCell DAT_00374c2c asm("D_00374c2c");
extern AnyCell DAT_00374c30 asm("D_00374c30");
extern AnyCell LAB_002a84a4 asm("D_002a84a4");
extern AnyCell LAB_002a8588 asm("D_002a8588");
extern AnyCell LAB_002a8674 asm("D_002a8674");

// Ghidra decompile of 0x002a8330, wrapped mechanically (ad/fallback.py)

void FUN_002a8330_impl(void) asm("_ZN2Tz10JmMiniGame10UpdateListEv");
void FUN_002a8330_impl(void) {
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  B4 auStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  iVar12 = 0;
  iVar13 = 9;
  iStack_60 = FUN_002766d0();
  uVar7 = FUN_0028b038(DAT_0035f200);
  FUN_0028be78(DAT_0035f214,uVar7);
  FUN_002fde18(DAT_0035f604 + 0x2210,0,0x140);
  FUN_002fde18(iStack_60 + 0x110a0,0,0x280);
  iVar10 = iStack_60 + 0xa998;
  do {
    iVar13 = iVar13 + -1;
    iVar9 = DAT_0035f604 + iVar12;
    iVar12 = iVar12 + 0x368;
    FUN_00138c10(iVar9,2);
    *(undefined4 *)(iVar9 + 0x198) = 0;
    FUN_00138c10(iVar10,2);
    iVar10 = iVar10 + 0x198;
  } while (-1 < iVar13);
  iVar10 = *DAT_0035f600;
  if (10 < iVar10) {
    iVar10 = 10;
  }
  iVar12 = 0;
  if (0 < iVar10) {
    iVar9 = (int)uVar7 << 2;
    iVar13 = iStack_60;
    do {
      uVar8 = *(undefined2 *)((int)DAT_0035f600 + iVar9 + 4);
      iVar11 = DAT_0035f604 + iVar12 * 0x368;
      if (*(short *)((int)DAT_0035f600 + iVar9 + 6) < 0) {
        FUN_00138c10(iVar11,0x66);
        uVar7 = FUN_00295430(uVar8,1);
        lVar1 = FUN_002954e0(uVar8);
        if (lVar1 == 0) {
          uVar3 = FUN_0028de08(uVar7,iVar13 + 0x110a0,0x40);
          *(undefined4 *)(iVar11 + 0x198) = uVar3;
        }
        else {
          uVar3 = FUN_00192048(uVar7);
          *(undefined4 *)(iVar11 + 0x198) = uVar3;
        }
      }
      else {
        iVar4 = FUN_002a7f20();
        pbVar5 = (byte *)FUN_001d56c8(*(undefined2 *)(iVar4 + 6));
        FUN_00138c10(iVar11,0x6c);
        uVar8 = *(undefined2 *)(iVar4 + 2);
        lVar1 = FUN_002a8920(*(undefined2 *)(iVar4 + 6));
        if (lVar1 == 0) {
          uVar3 = FUN_0028de08(uVar8,iVar13 + 0x110a0,0x40);
          *(undefined4 *)(iVar11 + 0x198) = uVar3;
        }
        else {
          uVar3 = FUN_00192048(uVar8);
          *(undefined4 *)(iVar11 + 0x198) = uVar3;
        }
        iVar11 = DAT_0035f604 + iVar12 * 0x20 + 0x2210;
        if (*pbVar5 < 2) {
          uVar7 = FUN_00192048(0x4b71);
          FUN_00192c90(uVar7,iVar11);
          if (*pbVar5 == 0) goto LAB_002a84a4;
        }
        else {
          if (*pbVar5 == 4) {
            uVar7 = FUN_00192048(*(undefined2 *)(iVar4 + 4));
            iVar4 = FUN_00192c40(uVar7,iVar11);
            FUN_0014ca80(*(undefined4 *)(pbVar5 + 4),auStack_70,&uStack_6c,&uStack_68,&uStack_64);
            FUN_00192cc0(iVar11 + iVar4,0x374c18,uStack_6c,uStack_68,uStack_64);
            goto LAB_002a8588;
          }
          lVar1 = FUN_00105c30();
          if (lVar1 == 1) {
LAB_002a8674:
            bVar2 = true;
          }
          else {
            lVar1 = FUN_00105c30();
            bVar2 = false;
            if (lVar1 == 8) goto LAB_002a8674;
          }
          if (bVar2) {
            uVar7 = FUN_00192cc0(iVar11,0x374c28,*(undefined4 *)(pbVar5 + 4));
            uVar8 = 0x4b80;
            iVar6 = FUN_00192b30(uVar7);
            if (*pbVar5 != 2) {
              uVar8 = *(undefined2 *)(iVar4 + 4);
            }
          }
          else {
            if (*pbVar5 == 2) {
              uVar7 = FUN_00192048(0x4b80);
              iVar4 = FUN_00192c40(uVar7,iVar11);
              FUN_00192cc0(iVar11 + iVar4,0x374c28,*(undefined4 *)(pbVar5 + 4));
              goto LAB_002a8588;
            }
            uVar7 = FUN_00192cc0(iVar11,0x374c28,*(undefined4 *)(pbVar5 + 4));
            iVar6 = FUN_00192b30(uVar7);
            uVar8 = *(undefined2 *)(iVar4 + 4);
          }
          uVar7 = FUN_00192048(uVar8);
          FUN_00192c90(uVar7,iVar11 + iVar6);
        }
LAB_002a8588:
        lVar1 = FUN_002ab100(*(undefined2 *)((int)DAT_0035f600 + iVar9 + 6));
        if (lVar1 != 0) {
          lVar1 = FUN_002ab180(*(undefined2 *)((int)DAT_0035f600 + iVar9 + 6));
          uVar3 = DAT_00374c2c;
          if (lVar1 != 0) {
            uVar3 = DAT_00374c30;
          }
          FUN_00138c10(iStack_60 + iVar12 * 0x198 + 0xa998,uVar3);
        }
      }
LAB_002a84a4:
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 0x40;
      iVar9 = iVar9 + 4;
    } while (iVar12 < iVar10);
  }
  return;
}

