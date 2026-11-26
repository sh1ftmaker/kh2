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
s32 FUN_00236ca8(...) asm("func_00236ca8");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023c4b8(...) asm("func_0023c4b8");
s32 FUN_0023f1b0(...) asm("func_0023f1b0");
s32 FUN_00276348(...) asm("func_00276348");
s32 FUN_00276608(...) asm("func_00276608");
s32 FUN_00276620(...) asm("func_00276620");
s32 FUN_00276678(...) asm("func_00276678");
s32 FUN_002766b0(...) asm("func_002766b0");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00276e78(...) asm("func_00276e78");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028afd0(...) asm("func_0028afd0");
s32 FUN_0028b218(...) asm("func_0028b218");
s32 FUN_0028b248(...) asm("func_0028b248");
s32 FUN_0028bae0(...) asm("func_0028bae0");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028f4d8(...) asm("func_0028f4d8");
s32 FUN_0028f930(...) asm("func_0028f930");
s32 FUN_0029ee68(...) asm("_ZN2Tz7JmAnsem8SetupTopEv");
s32 FUN_0029fbf0(...) asm("func_0029fbf0");
s32 FUN_0029fcb0(...) asm("func_0029fcb0");
s32 FUN_002a03a0(...) asm("func_002a03a0");
s32 FUN_002a03d0(...) asm("func_002a03d0");
extern AnyCell DAT_0035f148 asm("D_0035f148");
extern AnyCell DAT_0035f14c asm("D_0035f14c");
extern AnyCell DAT_0035f200 asm("D_0035f200");
extern AnyCell DAT_0035f210 asm("D_0035f210");
extern AnyCell DAT_0035f214 asm("D_0035f214");
extern AnyCell DAT_0035f3d4 asm("D_0035f3d4");
extern AnyCell DAT_0035f5d0 asm("D_0035f5d0");
static AnyCell n;
static AnyCell x01;

// Ghidra decompile of 0x0029ee68, wrapped mechanically (ad/fallback.py)

void FUN_0029ee68_impl(void) asm("_ZN2Tz7JmAnsem8SetupTopEv");
void FUN_0029ee68_impl(void) {
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  char cVar12;
  long lVar13;
  undefined2 auStack_70 [4];
  B8 auStack_68;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  
  uVar4 = FUN_00276348();
  uVar3 = FUN_002766d0();
  iVar11 = (int)uVar3;
  FUN_0029fbf0();
  lVar13 = FUN_0028f930(0);
  if (lVar13 == 0) {
    FUN_0028f4d8(0,0xffffffffffffffff,0);
  }
  iVar8 = 0;
  iVar6 = 0;
  do {
    iVar5 = 3;
    puVar7 = (undefined2 *)((int)auStack_70 + iVar6);
    do {
      *puVar7 = 2;
      iVar5 = iVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (-1 < iVar5);
    iVar8 = iVar8 + 1;
    iVar6 = iVar8 * 8;
  } while (iVar8 < 2);
  iStack_5c = iVar11 + 0x4c8;
  iVar6 = DAT_0035f3d4 + -1;
  FUN_00276e78();
  FUN_0028d8c0(uVar3,iVar6,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x5a,0xffffffffffffffff,0);
  FUN_00139620(uVar3);
  FUN_0028dcc0(uVar3,uVar4);
  FUN_0028d8c0(iStack_5c,iVar6,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x5f,0xffffffffffffffff,0);
  FUN_00139620(iStack_5c);
  FUN_0028dcc0(iStack_5c,uVar4);
  iStack_60 = FUN_0023aa78(iVar11 + 0x18);
  lVar13 = 10;
  if ((long)*DAT_0035f5d0 < 10) {
    lVar13 = (long)*DAT_0035f5d0;
  }
  if (0 < lVar13) {
    iStack_54 = DAT_0035f3d4 + 1;
    uStack_58 = 0x60000008;
    iVar11 = iVar11 + 0xa998;
    iVar6 = 0;
    lVar9 = 0;
    do {
      FUN_00288d80(DAT_0035f200,lVar9,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0xffffffffffffffff,
                   auStack_70,auStack_68);
      lVar10 = (long)((int)lVar9 + 1);
      uVar4 = FUN_002891b8(DAT_0035f200,lVar9);
      FUN_00139620(uVar4);
      FUN_0028dcc0(uVar4,uVar3);
      FUN_00138c68(uVar4,0,iVar6);
      *(undefined4 *)((int)uVar4 + 0x1ac) = 3;
      iVar6 = iVar6 + iStack_60;
      *(undefined4 *)((int)uVar4 + 0x1a4) = uStack_58;
      FUN_001395f8(uVar4);
      FUN_0028d8c0(iVar11,iStack_54,DAT_0035f14c,DAT_0035f148,DAT_0035f210,2,0xffffffffffffffff,0);
      FUN_0028dcc0(iVar11,uVar4);
      iVar11 = iVar11 + 0x198;
      lVar9 = lVar10;
    } while (lVar10 < lVar13);
  }
  cVar1 = *DAT_0035f5d0;
  uVar4 = FUN_00287bc0();
  uVar4 = FUN_00276608(uVar4);
  FUN_002891f0(DAT_0035f200,uVar4,0,0xffffffffffffffff,0xffffffffffffffff);
  FUN_0028af90(DAT_0035f200,cVar1);
  uVar4 = FUN_00287bc0();
  uVar4 = FUN_00276620(uVar4);
  FUN_0028afd0(DAT_0035f200,uVar4);
  if ('\x01' < cVar1) {
    FUN_0028b218(DAT_0035f200,1);
    FUN_0028b248(DAT_0035f200,10);
  }
  iVar11 = DAT_0035f3d4;
  cVar12 = '\n';
  if ('\n' < cVar1) {
    cVar12 = cVar1;
  }
  uVar4 = FUN_0023f1b0(DAT_0035f210);
  uVar4 = FUN_0023c4b8(uVar4,DAT_0035f14c);
  iVar6 = FUN_0023f1b0(DAT_0035f210);
  uVar3 = FUN_00236ca8(*(undefined4 *)(iVar6 + 0x28),DAT_0035f148);
  uVar2 = FUN_00276678();
  FUN_0028bae0(DAT_0035f214,iVar11,uVar4,uVar3,uVar2,cVar12,10,iStack_5c);
  FUN_0029fcb0();
  FUN_002a03d0();
  FUN_002a03a0();
  FUN_002766b0(1);
  FUN_00287cc0(0);
  return;
}

