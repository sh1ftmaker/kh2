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

s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_001395f8(...) asm("func_001395f8");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00236ca8(...) asm("func_00236ca8");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa38(...) asm("func_0023aa38");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023c4b8(...) asm("func_0023c4b8");
s32 FUN_0023f1b0(...) asm("func_0023f1b0");
s32 FUN_00242848(...) asm("func_00242848");
s32 FUN_00256c40(...) asm("func_00256c40");
s32 FUN_00256cc0(...) asm("func_00256cc0");
s32 FUN_00256e30(...) asm("func_00256e30");
s32 FUN_00256e80(...) asm("func_00256e80");
s32 FUN_00256ea8(...) asm("func_00256ea8");
s32 FUN_00256ef0(...) asm("func_00256ef0");
s32 FUN_00257050(...) asm("func_00257050");
s32 FUN_00257070(...) asm("func_00257070");
s32 FUN_002570a0(...) asm("func_002570a0");
s32 FUN_002570f0(...) asm("func_002570f0");
s32 FUN_00257130(...) asm("func_00257130");
s32 FUN_00257140(...) asm("func_00257140");
s32 FUN_00257158(...) asm("func_00257158");
s32 FUN_00257770(...) asm("func_00257770");
s32 FUN_0025f7f0(...) asm("func_0025f7f0");
s32 FUN_00261ce8(...) asm("func_00261ce8");
s32 FUN_00263c60(...) asm("func_00263c60");
s32 FUN_002677d8(...) asm("func_002677d8");
s32 FUN_002678a8(...) asm("func_002678a8");
s32 FUN_00267e00(...) asm("_ZN2Tz7CmEquip10SetupEquipEv");
s32 FUN_00268b30(...) asm("func_00268b30");
s32 FUN_00268c68(...) asm("func_00268c68");
s32 FUN_002691c8(...) asm("func_002691c8");
s32 FUN_00269508(...) asm("func_00269508");
s32 FUN_002695a0(...) asm("func_002695a0");
s32 FUN_00269658(...) asm("func_00269658");
s32 FUN_00269a60(...) asm("func_00269a60");
s32 FUN_00269e20(...) asm("func_00269e20");
s32 FUN_00269ef8(...) asm("func_00269ef8");
s32 FUN_00269f58(...) asm("func_00269f58");
s32 FUN_00269fc0(...) asm("func_00269fc0");
s32 FUN_0026a060(...) asm("func_0026a060");
s32 FUN_0026a5a0(...) asm("func_0026a5a0");
s32 FUN_0026a900(...) asm("func_0026a900");
s32 FUN_0026a9f8(...) asm("func_0026a9f8");
s32 FUN_0026b0f8(...) asm("func_0026b0f8");
s32 FUN_0026b200(...) asm("func_0026b200");
s32 FUN_0026b448(...) asm("func_0026b448");
s32 FUN_0026b860(...) asm("func_0026b860");
s32 FUN_00277178(...) asm("func_00277178");
s32 FUN_00281198(...) asm("func_00281198");
s32 FUN_002817d8(...) asm("func_002817d8");
s32 FUN_00281b30(...) asm("func_00281b30");
s32 FUN_00281d48(...) asm("func_00281d48");
s32 FUN_00281e20(...) asm("func_00281e20");
s32 FUN_00281e70(...) asm("func_00281e70");
s32 FUN_00281f18(...) asm("func_00281f18");
s32 FUN_00281f20(...) asm("func_00281f20");
s32 FUN_00281f30(...) asm("func_00281f30");
s32 FUN_00282240(...) asm("func_00282240");
s32 FUN_00282620(...) asm("func_00282620");
s32 FUN_00282cb8(...) asm("func_00282cb8");
s32 FUN_00282d70(...) asm("func_00282d70");
s32 FUN_002831e0(...) asm("func_002831e0");
s32 FUN_00283ab8(...) asm("func_00283ab8");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287bd0(...) asm("func_00287bd0");
s32 FUN_00287c00(...) asm("func_00287c00");
s32 FUN_00287c10(...) asm("func_00287c10");
s32 FUN_00287c30(...) asm("func_00287c30");
s32 FUN_00287c90(...) asm("func_00287c90");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00287cd0(...) asm("func_00287cd0");
s32 FUN_00287da0(...) asm("func_00287da0");
s32 FUN_00287df0(...) asm("func_00287df0");
s32 FUN_00287f90(...) asm("func_00287f90");
s32 FUN_00288018(...) asm("func_00288018");
s32 FUN_00288040(...) asm("func_00288040");
s32 FUN_00288d80(...) asm("func_00288d80");
s32 FUN_00288e08(...) asm("func_00288e08");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_00289310(...) asm("func_00289310");
s32 FUN_00289380(...) asm("func_00289380");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028af88(...) asm("func_0028af88");
s32 FUN_0028af90(...) asm("func_0028af90");
s32 FUN_0028afa8(...) asm("func_0028afa8");
s32 FUN_0028b038(...) asm("func_0028b038");
s32 FUN_0028b040(...) asm("func_0028b040");
s32 FUN_0028b218(...) asm("func_0028b218");
s32 FUN_0028b248(...) asm("func_0028b248");
s32 FUN_0028bae0(...) asm("func_0028bae0");
s32 FUN_0028d068(...) asm("func_0028d068");
s32 FUN_0028d8c0(...) asm("func_0028d8c0");
s32 FUN_0028d980(...) asm("func_0028d980");
s32 FUN_0028dcc0(...) asm("func_0028dcc0");
s32 FUN_0028f4d8(...) asm("func_0028f4d8");
s32 FUN_0028f6f0(...) asm("func_0028f6f0");
s32 FUN_0028f7e8(...) asm("func_0028f7e8");
s32 FUN_0028f878(...) asm("func_0028f878");
s32 FUN_0028f930(...) asm("func_0028f930");
s32 FUN_0028fa98(...) asm("func_0028fa98");
s32 FUN_0028fb28(...) asm("func_0028fb28");
s32 FUN_002911f8(...) asm("func_002911f8");
s32 FUN_00291288(...) asm("func_00291288");
extern AnyCell DAT_0035ef64 asm("D_0035ef64");
extern AnyCell DAT_0035ef68 asm("D_0035ef68");
extern AnyCell DAT_0035ef6c asm("D_0035ef6c");
extern AnyCell DAT_0035f010 asm("D_0035f010");
extern AnyCell DAT_0035f018 asm("D_0035f018");
extern AnyCell DAT_0035f01c asm("D_0035f01c");
extern AnyCell DAT_0035f03c asm("D_0035f03c");
extern AnyCell DAT_0035f04c asm("D_0035f04c");
extern AnyCell DAT_0035f0ec asm("D_0035f0ec");
extern AnyCell DAT_0035f3d4 asm("D_0035f3d4");
extern AnyCell DAT_003736c0 asm("D_003736c0");
extern AnyCell DAT_003736f8 asm("D_003736f8");
extern AnyCell DAT_00373768 asm("D_00373768");
extern AnyCell DAT_00373788 asm("D_00373788");
extern AnyCell LAB_00267e68 asm("D_00267e68");
extern AnyCell LAB_00267ea0 asm("D_00267ea0");
extern AnyCell LAB_00268258 asm("D_00268258");
extern AnyCell LAB_00268358 asm("D_00268358");
extern AnyCell PTR_DAT_0037379c asm("D_0037379c");
extern AnyCell PTR_DAT_003737b8 asm("D_003737b8");
extern AnyCell PTR_DAT_003737cc asm("D_003737cc");
extern AnyCell PTR_DAT_003737e8 asm("D_003737e8");
extern AnyCell PTR_DAT_00373800 asm("D_00373800");

// Ghidra decompile of 0x00267e00, wrapped mechanically (ad/fallback.py)

void FUN_00267e00_impl(void) asm("_ZN2Tz7CmEquip10SetupEquipEv");
void FUN_00267e00_impl(void) {
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  undefined2 *puVar16;
  undefined *puVar17;
  undefined2 *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  undefined2 auStack_90 [4];
  B8 auStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_5c;
  
  lVar5 = FUN_00289380(DAT_0035f01c);
  lVar6 = FUN_00287cd0();
  if (lVar6 == 2) {
    lVar22 = 0;
    lVar6 = FUN_00287c10();
    uVar19 = (int)lVar6 - 1;
    uVar12 = 1;
    if (uVar19 < 2) {
LAB_00267e68:
      lVar22 = FUN_0028f930(uVar12);
    }
    else if (lVar6 == 0x10) {
      uVar12 = 0xffffffffffffffff;
      goto LAB_00267e68;
    }
    if (1 < uVar19) {
      if (lVar22 == 0) {
        lVar7 = FUN_00256ef0();
        lVar22 = 0;
        if (lVar7 == 0) goto LAB_00267ea0;
      }
      lVar22 = 1;
    }
LAB_00267ea0:
    lVar7 = FUN_00269f58();
    if (((lVar7 != 0) || (lVar22 != 0)) || (lVar22 = FUN_002911f8(DAT_0035f018), lVar22 != 0)) {
      if ((lVar5 == -1) && (lVar5 = FUN_00289310(DAT_0035f01c), lVar5 == 0)) {
        return;
      }
      FUN_00287f90(0);
      if (1 < uVar19) {
        FUN_00256ea8();
      }
      FUN_00269ef8();
      FUN_00291288(DAT_0035f018);
      if (lVar6 != 1) {
        if (lVar6 != 0x10) {
          return;
        }
        FUN_0028f878();
        return;
      }
      FUN_0028f7e8(1);
      return;
    }
    sVar2 = FUN_00287c10();
    FUN_00287c30();
    FUN_0028d068(0x754a,0xffffffffffffffff);
    if (sVar2 == 1) {
      FUN_0028f7e8(1);
      FUN_0026b448();
      FUN_0025f7f0(0xffffffffffffffff);
      return;
    }
    if (sVar2 == 2) {
      uVar12 = FUN_00257070(1);
      FUN_00261ce8(uVar12);
      FUN_002678a8();
      return;
    }
    if (sVar2 == 0x10) {
      uVar12 = FUN_00257070(1);
      FUN_00277178(0x10,uVar12);
      return;
    }
    iVar13 = 0;
    psVar15 = &DAT_003736c0;
    do {
      iVar13 = iVar13 + 1;
      if (*psVar15 == sVar2) break;
      psVar15 = psVar15 + 1;
    } while (iVar13 < 6);
    iVar13 = 0;
    iStack_6c = FUN_00257770();
    iStack_70 = FUN_00287bc0();
    iStack_74 = FUN_002570a0(2);
    iStack_7c = FUN_00269508(iStack_74);
    puVar16 = (undefined2 *)((int)&PTR_DAT_003737e8 + iStack_7c * 2);
    do {
      uVar1 = *puVar16;
      puVar18 = auStack_90 + iVar13 * 4;
      iVar14 = 3;
      do {
        *puVar18 = uVar1;
        iVar14 = iVar14 + -1;
        puVar18 = puVar18 + 1;
      } while (-1 < iVar14);
      iVar13 = iVar13 + 1;
      puVar16 = puVar16 + 5;
    } while (iVar13 < 2);
    iStack_68 = iStack_7c << 1;
    uVar12 = FUN_00257070(1);
    iVar13 = FUN_00281198(DAT_0035f010,uVar12);
    FUN_00282240(DAT_0035f0ec,iVar13 + 1,*(undefined2 *)(&DAT_003736f8 + iStack_68));
    if (iStack_70 == 9) {
      FUN_00282620(DAT_0035f0ec);
      FUN_00282d70(DAT_0035f0ec);
    }
    uStack_64 = iStack_70 - 5;
    FUN_00282cb8(DAT_0035f0ec,iStack_7c);
    lVar5 = FUN_00281f18(DAT_0035f0ec);
    iStack_78 = (int)lVar5;
    if (uStack_64 < 2) {
      if (lVar5 == 0) {
        iStack_78 = 1;
      }
    }
    else {
      iStack_78 = iStack_78 + 1;
    }
    FUN_0028f4d8(2,0xffffffffffffffff,0);
    iStack_80 = DAT_0035f3d4;
    FUN_0028d8c0(iStack_6c,DAT_0035f3d4,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
                 *(undefined2 *)(iStack_7c * 6 + 0x373798),
                 *(undefined2 *)((int)&PTR_DAT_0037379c + iStack_7c * 6),0);
    iVar21 = iStack_6c + 0x660;
    iStack_80 = iStack_80 + 1;
    FUN_0028d980(iVar21,iStack_80,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
                 *(undefined2 *)((int)&PTR_DAT_003737b8 + iStack_68),0xffffffffffffffff,
                 0xffffffffffffffff);
    iVar13 = iStack_6c;
    iVar20 = iStack_6c + 0x5ef0;
    FUN_00139620(iVar21);
    uStack_60 = (uint)(iStack_78 < 9);
    FUN_0028dcc0(iVar21,iStack_6c);
    uVar12 = FUN_00257130();
    iVar14 = 8;
    if (uStack_60 != 0) {
      iVar14 = iStack_78;
    }
    iVar3 = FUN_00281f30(uVar12);
    uVar12 = FUN_00257130();
    iVar4 = FUN_00281f20(uVar12);
    puVar16 = (undefined2 *)(iStack_74 * 6 + iVar4);
    uVar12 = FUN_00257158(*puVar16,*(undefined1 *)(puVar16 + 1),*(char *)((int)puVar16 + 3) != '\0')
    ;
    uVar12 = FUN_00257140(uVar12);
    FUN_0028d980(iVar20,iStack_80 + 1,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,uVar12,
                 0xffffffffffffffff,0xffffffffffffffff);
    *(int *)(iVar13 + 0x6088) = iVar3 + iStack_74 * 0x50 + 0x10;
    FUN_0028dcc0(iVar20,iVar21);
    FUN_00139620(iVar20);
    FUN_001395f8(iVar20);
    FUN_00268b30(iStack_80);
    if (0 < iVar14) {
      iStack_5c = iStack_80 + 2;
      iVar13 = iStack_6c + 0x87d0;
      iVar20 = 0;
      do {
        FUN_00288d80(DAT_0035f01c,iVar20,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0xffffffffffffffff,
                     auStack_90,auStack_88);
        uVar12 = FUN_002891b8(DAT_0035f01c,iVar20);
        iVar21 = (int)uVar12 + 0x18;
        uVar8 = FUN_0023aa78(iVar21);
        uVar9 = FUN_0023aa18(iVar21);
        uVar10 = FUN_0023aa38(iVar21);
        FUN_00288e08(DAT_0035f01c,iVar20,0,uVar8);
        FUN_00139620(uVar12);
        iVar21 = iVar20 + 1;
        *(code **)((int)uVar12 + 0x1b4) = FUN_0026a9f8;
        uVar8 = FUN_002891b8(DAT_0035f01c,iVar20);
        FUN_0028dcc0(uVar8,iStack_6c);
        FUN_0028d8c0(iVar13,iStack_5c,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,DAT_0035ef6c,
                     0xffffffffffffffff,0);
        FUN_0028dcc0(iVar13,uVar12);
        FUN_00138c68(iVar13,uVar9,uVar10);
        iVar13 = iVar13 + 0x198;
        iVar20 = iVar21;
      } while (iVar21 < iVar14);
    }
    if (uStack_64 < 2) {
      iVar20 = 0;
      uVar1 = *(undefined2 *)((int)&PTR_DAT_00373800 + iStack_68);
      iVar13 = iStack_6c;
      if (0 < iVar14) {
        do {
          iVar3 = iVar13 + 0xd30;
          FUN_0028d980(iVar3,iStack_80,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,uVar1,
                       0xffffffffffffffff,0xffffffffffffffff);
          iVar21 = FUN_0023aa78(iVar13 + 0xd48);
          FUN_00138c10(iVar3,DAT_0035ef6c);
          FUN_00138c68(iVar3,0,iVar21 * iVar20);
          iVar20 = iVar20 + 1;
          FUN_00139620(iVar3);
          FUN_0028dcc0(iVar3,iStack_6c);
          FUN_001395f8(iVar3);
          *(undefined4 *)(iVar13 + 0xee0) = 2;
          iVar13 = iVar13 + 0x1b4;
        } while (iVar20 < iVar14);
      }
    }
    uVar12 = FUN_0023f1b0(DAT_0035f03c);
    iVar13 = 8;
    if (uStack_60 != 0) {
      iVar13 = iStack_78;
    }
    uVar12 = FUN_0023c4b8(uVar12,DAT_0035ef68);
    iVar14 = FUN_0023f1b0(DAT_0035f03c);
    uVar8 = FUN_00236ca8(*(undefined4 *)(iVar14 + 0x28),DAT_0035ef64);
    uVar9 = FUN_002570f0();
    FUN_0028bae0(DAT_0035f04c,iStack_80,uVar12,uVar8,uVar9,iStack_78,iVar13,iStack_6c);
    iStack_80 = DAT_0035f3d4;
    iVar13 = iStack_6c + 0xb350;
    FUN_0028d980(iVar13,DAT_0035f3d4,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,
                 *(undefined2 *)(iStack_7c * 6 + 0x3737c8),
                 *(undefined2 *)((int)&PTR_DAT_003737cc + iStack_7c * 6),0xffffffffffffffff);
    FUN_002817d8(0x753f,DAT_0035ef68,DAT_0035ef64,DAT_0035f03c,0,0,0);
    FUN_00281e70(iVar13);
    FUN_002677d8();
    if (uStack_60 == 0) {
      FUN_0028af90(DAT_0035f01c,iStack_78);
    }
    FUN_00268c68();
    FUN_0028b218(DAT_0035f01c,1);
    FUN_0028b248(DAT_0035f01c,8);
    if (((iStack_70 == 9) && (lVar5 = FUN_00283ab8(0), lVar5 != 0)) ||
       ((iStack_70 == 6 && (lVar5 = FUN_00283ab8(3), lVar5 != 0)))) {
      uVar11 = FUN_0028af88(DAT_0035f01c);
      FUN_0028af18(DAT_0035f01c,uVar11 | 0x400);
      FUN_00256cc0(0xcbdd,0xffffffffffffffff,0xffffffffffffffff);
    }
    FUN_00287cc0(0);
    FUN_0026a5a0();
    FUN_0026a900();
    return;
  }
  if (((lVar5 != -1) || (lVar22 = FUN_00289310(DAT_0035f01c), lVar22 != 0)) &&
     (lVar22 = FUN_00269fc0(), lVar22 == 0)) {
    FUN_0026a060();
    FUN_00256e30();
    FUN_0028fa98(0xffffffffffffffff);
  }
  if ((lVar6 == 0) && (lVar6 = FUN_00269fc0(), lVar6 != 0)) {
    FUN_00269a60();
    FUN_00287c90(1);
  }
  lVar6 = FUN_0028afa8(DAT_0035f01c);
  uVar12 = FUN_00289310(DAT_0035f01c);
  uVar12 = FUN_00287df0(lVar5,uVar12,1,0x26b8f0,1);
  lVar22 = FUN_00242848(uVar12);
  if (lVar22 != 0) goto switchD_00268158_caseD_ffffffff;
  switch((int)lVar5) {
  case -0xb:
  case -10:
    FUN_0026b448();
    FUN_0026b860(lVar5 == -10);
    FUN_00263c60();
    FUN_0028f6f0(1);
    FUN_00269e20();
    FUN_00256c40();
    FUN_00281b30();
    FUN_00287cc0(2);
    FUN_00287c00(2);
    uVar12 = 0;
    uVar8 = 0;
    goto LAB_00268258;
  default:
    if ((lVar5 < 0) || (lVar6 <= lVar5)) break;
    iVar13 = FUN_00269508(lVar5);
    sVar2 = (&DAT_003736c0)[iVar13];
    if (sVar2 == 6) {
      iVar13 = FUN_002695a0(lVar5);
      puVar17 = &DAT_00373788;
    }
    else {
      iVar13 = FUN_00269508(lVar5);
      puVar17 = &DAT_00373768;
    }
    FUN_0028fb28(2,*(undefined2 *)(puVar17 + iVar13 * 2));
    FUN_00256e80();
    FUN_00263c60();
    FUN_00269e20();
    FUN_00287c90(1);
    goto LAB_00268358;
  case -7:
    uVar12 = FUN_0028b040(DAT_0035f01c);
    lVar5 = FUN_00269508(uVar12);
    uVar12 = FUN_00287bc0();
    FUN_00287bd0(0x25,0);
    if (lVar5 == 4) {
      uVar8 = 0;
    }
    else {
      if (lVar5 != 1) break;
      uVar8 = 3;
    }
    FUN_002831e0(uVar8,uVar12);
    break;
  case -6:
    lVar5 = FUN_0026b200();
    if (lVar5 == 0) {
      FUN_0026b0f8();
      FUN_00269658();
    }
    else {
      FUN_002691c8();
      FUN_00287bd0(3,0);
    }
    break;
  case -5:
    FUN_0026b448();
    FUN_00263c60();
    FUN_0028f6f0(1);
    FUN_0028f6f0(0);
    FUN_00269e20();
    FUN_00256e80();
    FUN_00256c40();
    FUN_00281b30();
    FUN_00287cc0(2);
    sVar2 = 0x10;
    goto LAB_00268358;
  case -4:
    FUN_00291288(DAT_0035f018);
    FUN_0026b448();
    FUN_00256c40();
    uVar12 = FUN_002891e8(DAT_0035f01c);
    uVar8 = FUN_0028b038(DAT_0035f01c);
    FUN_00257050(2,uVar12,uVar8);
    FUN_00287da0();
    break;
  case -2:
    FUN_00263c60();
    FUN_0028f6f0(1);
    FUN_00269e20();
    FUN_00256c40();
    FUN_00281b30();
    FUN_00287cc0(2);
    sVar2 = 1;
LAB_00268358:
    FUN_00287c00(sVar2);
    uVar12 = FUN_002891e8(DAT_0035f01c);
    uVar8 = FUN_0028b038(DAT_0035f01c);
LAB_00268258:
    FUN_00257050(2,uVar12,uVar8);
    break;
  case -1:
    break;
  }
switchD_00268158_caseD_ffffffff:
  lVar5 = FUN_00287cd0();
  if (lVar5 == 1) {
    FUN_00281d48();
    FUN_00281e20();
  }
  lVar5 = FUN_00288040();
  if (lVar5 == 0) {
    return;
  }
  FUN_00288018();
  return;
}

