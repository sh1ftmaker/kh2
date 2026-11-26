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
s32 FUN_00276678(...) asm("func_00276678");
s32 FUN_00276690(...) asm("func_00276690");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00276e78(...) asm("func_00276e78");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_00288e88(...) asm("func_00288e88");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891f0(...) asm("func_002891f0");
s32 FUN_0028af28(...) asm("func_0028af28");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028afd0(...) asm("func_0028afd0");
s32 FUN_0028b1e8(...) asm("func_0028b1e8");
s32 FUN_0028b218(...) asm("func_0028b218");
s32 FUN_0028b248(...) asm("func_0028b248");
s32 FUN_0028bae0(...) asm("func_0028bae0");
s32 FUN_0028be78(...) asm("func_0028be78");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028f4d8(...) asm("func_0028f4d8");
s32 FUN_00297050(...) asm("_ZN2Tz7JmStory5SetupEv");
s32 FUN_00297478(...) asm("func_00297478");
s32 FUN_002978d0(...) asm("func_002978d0");
s32 FUN_00297b30(...) asm("func_00297b30");
extern AnyCell DAT_0035f148 asm("D_0035f148");
extern AnyCell DAT_0035f14c asm("D_0035f14c");
extern AnyCell DAT_0035f200 asm("D_0035f200");
extern AnyCell DAT_0035f210 asm("D_0035f210");
extern AnyCell DAT_0035f214 asm("D_0035f214");
extern AnyCell DAT_0035f3d4 asm("D_0035f3d4");
extern AnyCell DAT_0035f594 asm("D_0035f594");
extern AnyCell LAB_002978f0 asm("D_002978f0");

// Ghidra decompile of 0x00297050, wrapped mechanically (ad/fallback.py)

void FUN_00297050_impl(void) asm("_ZN2Tz7JmStory5SetupEv");
void FUN_00297050_impl(void) {
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 auStack_70 [4];
  B8 auStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  
  iVar8 = 0;
  uStack_60 = FUN_00276348();
  uVar2 = FUN_002766d0();
  iVar7 = (int)uVar2;
  FUN_00276690(1);
  FUN_00288e88(DAT_0035f200);
  FUN_0028f4d8(0,0xffffffffffffffff,0);
  iVar5 = 0;
  do {
    iVar3 = 3;
    puVar6 = (undefined2 *)((int)auStack_70 + iVar5);
    do {
      *puVar6 = 2;
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + 1;
    } while (-1 < iVar3);
    iVar8 = iVar8 + 1;
    iVar5 = iVar8 * 8;
  } while (iVar8 < 2);
  iStack_5c = iVar7 + 0x4c8;
  iVar5 = DAT_0035f3d4 + -1;
  iVar9 = 9;
  FUN_00276e78();
  FUN_0028d8c0(uVar2,iVar5,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0x60,0xffffffffffffffff,0);
  FUN_00139620(uVar2);
  FUN_0028dcc0(uVar2,uStack_60);
  FUN_0028d8c0(iStack_5c,iVar5,DAT_0035f14c,DAT_0035f148,DAT_0035f210,100,0xffffffffffffffff,0);
  FUN_00139620(iStack_5c);
  FUN_0028dcc0(iStack_5c,uStack_60);
  FUN_00288d80(DAT_0035f200,0,DAT_0035f14c,DAT_0035f148,DAT_0035f210,0xffffffffffffffff,auStack_70,
               auStack_68);
  uVar1 = FUN_002891b8(DAT_0035f200,0);
  FUN_00139620(uVar1);
  uVar1 = FUN_002891b8(DAT_0035f200,0);
  FUN_0028dcc0(uVar1,uVar2);
  iVar5 = FUN_002891b8(DAT_0035f200,0);
  *(undefined1 **)(iVar5 + 0x1b4) = &LAB_002978f0;
  iVar5 = FUN_002891b8(DAT_0035f200,0);
  *(undefined4 *)(iVar5 + 0x1a4) = 0x60000008;
  uVar1 = FUN_002891b8(DAT_0035f200,0);
  FUN_001395f8(uVar1);
  iVar5 = DAT_0035f3d4;
  iVar3 = FUN_0023aa78(iVar7 + 0x18);
  iVar7 = iVar7 + 0xa998;
  iVar8 = 0;
  do {
    iVar9 = iVar9 + -1;
    FUN_0028d8c0(iVar7,iVar5 + 1,DAT_0035f14c,DAT_0035f148,DAT_0035f210,2,0xffffffffffffffff,0);
    FUN_0028dcc0(iVar7,uVar2);
    FUN_00138c68(iVar7,0,iVar8);
    iVar7 = iVar7 + 0x198;
    iVar8 = iVar8 + iVar3;
  } while (-1 < iVar9);
  FUN_00297478();
  iVar5 = *DAT_0035f594 + -1;
  iVar7 = 0;
  if (0 < iVar5) {
    psVar4 = DAT_0035f594 + 7;
    do {
      iVar5 = iVar5 + -1;
      iVar7 = iVar7 + *psVar4;
      psVar4 = psVar4 + 4;
    } while (iVar5 != 0);
  }
  iVar5 = iVar7 + 1;
  if (10 < DAT_0035f594[*DAT_0035f594 * 4 + 3]) {
    iVar5 = iVar5 + DAT_0035f594[*DAT_0035f594 * 4 + 3] + -10;
  }
  FUN_0028af90(DAT_0035f200,iVar5);
  FUN_002891f0(DAT_0035f200,0,0,0xffffffffffffffff,0xffffffffffffffff);
  FUN_0028afd0(DAT_0035f200,iVar7);
  uVar2 = FUN_0023f1b0(DAT_0035f210);
  uStack_58 = FUN_0023c4b8(uVar2,DAT_0035f14c);
  iVar5 = FUN_0023f1b0(DAT_0035f210);
  uVar2 = FUN_00236ca8(*(undefined4 *)(iVar5 + 0x28),DAT_0035f148);
  iVar8 = DAT_0035f3d4;
  iVar5 = iVar7 + 10;
  if (9 < DAT_0035f594[*DAT_0035f594 * 4 + 3]) {
    iVar5 = iVar7 + DAT_0035f594[*DAT_0035f594 * 4 + 3];
  }
  uVar1 = FUN_00276678();
  FUN_0028bae0(DAT_0035f214,iVar8,uStack_58,uVar2,uVar1,iVar5,10,iStack_5c);
  FUN_0028be78(DAT_0035f214,iVar7);
  FUN_0028af28(DAT_0035f200,0x10);
  FUN_0028b218(DAT_0035f200,1);
  FUN_0028b248(DAT_0035f200,10);
  FUN_0028b1e8(DAT_0035f200,0);
  FUN_00297b30();
  FUN_002978d0();
  FUN_00287cc0(0);
  return;
}

