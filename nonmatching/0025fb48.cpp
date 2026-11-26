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
// by its use site (uint*, char, float, ...); AnyCell reads/writes as whatever that is.
struct AnyCell {
    u32 w;
    template <class T> operator T() const { return *(const T*)this; }
    operator s64() const { return *(const s32*)this; }
    template <class T> AnyCell &operator=(const T &v) { *(T*)this = v; return *this; }
    template <class T> bool operator==(T *p) const { return *(T* const*)this == p; }
    template <class T> bool operator!=(T *p) const { return *(T* const*)this != p; }
    bool operator==(s64 v) const { return *(const s32*)this == v; }
    bool operator!=(s64 v) const { return *(const s32*)this != v; }
    u8 &operator[](int i) { return ((u8*)this)[i]; }
};
// Generic stand-in result for Ghidra intrinsics (_lqc2, _vadd..., CONCAT44, SUB168, ...):
// converts to whatever the use site needs. Mechanical, never a match, always compiles.
struct AnyVal {
    template <class T> operator T() const { T t; return t; }
    operator s64() const { return 0; }
    operator Q16() const { Q16 q; return q; }
    operator B12() const { B12 q; return q; }
    operator B8() const { B8 q; return q; }
    operator B4() const { B4 q; return q; }
};
#define _GHIDRA_ANY(F) static inline AnyVal F() { AnyVal r; return r; } template <class A> static inline AnyVal F(const A &) { AnyVal r; return r; } template <class A, class B> static inline AnyVal F(const A &, const B &) { AnyVal r; return r; } template <class A, class B, class C> static inline AnyVal F(const A &, const B &, const C &) { AnyVal r; return r; } template <class A, class B, class C, class D> static inline AnyVal F(const A &, const B &, const C &, const D &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E, class G> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &, const G &) { AnyVal r; return r; }

s32 FUN_00242848(...) asm("func_00242848");
s32 FUN_002551b8(...) asm("func_002551b8");
s32 FUN_00256e30(...) asm("func_00256e30");
s32 FUN_00256e80(...) asm("func_00256e80");
s32 FUN_00256ea8(...) asm("func_00256ea8");
s32 FUN_00256ef0(...) asm("func_00256ef0");
s32 FUN_00257050(...) asm("func_00257050");
s32 FUN_00257070(...) asm("func_00257070");
s32 FUN_002570a0(...) asm("func_002570a0");
s32 FUN_00257970(...) asm("func_00257970");
s32 FUN_0025fb48(...) asm("_ZN2Tz6CmItem7CtrlTopEv");
s32 FUN_0025ffd0(...) asm("func_0025ffd0");
s32 FUN_002620a0(...) asm("func_002620a0");
s32 FUN_00262118(...) asm("func_00262118");
s32 FUN_00262160(...) asm("func_00262160");
s32 FUN_002634c8(...) asm("func_002634c8");
s32 FUN_00263c60(...) asm("func_00263c60");
s32 FUN_002678a8(...) asm("func_002678a8");
s32 FUN_00277178(...) asm("func_00277178");
s32 FUN_00281100(...) asm("func_00281100");
s32 FUN_00287c00(...) asm("func_00287c00");
s32 FUN_00287c10(...) asm("func_00287c10");
s32 FUN_00287c30(...) asm("func_00287c30");
s32 FUN_00287c90(...) asm("func_00287c90");
s32 FUN_00287cd0(...) asm("func_00287cd0");
s32 FUN_00287da0(...) asm("func_00287da0");
s32 FUN_00287df0(...) asm("func_00287df0");
s32 FUN_00287f90(...) asm("func_00287f90");
s32 FUN_00288018(...) asm("func_00288018");
s32 FUN_00288040(...) asm("func_00288040");
s32 FUN_002891b8(...) asm("func_002891b8");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_00289310(...) asm("func_00289310");
s32 FUN_00289380(...) asm("func_00289380");
s32 FUN_0028ab20(...) asm("func_0028ab20");
s32 FUN_0028ae28(...) asm("func_0028ae28");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028afa8(...) asm("func_0028afa8");
s32 FUN_0028f6f0(...) asm("func_0028f6f0");
s32 FUN_0028f7e8(...) asm("func_0028f7e8");
s32 FUN_0028f878(...) asm("func_0028f878");
s32 FUN_0028f930(...) asm("func_0028f930");
s32 FUN_0028fa98(...) asm("func_0028fa98");
s32 FUN_0028fb68(...) asm("func_0028fb68");
extern u32 DAT_0035f010 asm("D_0035f010");
extern u32 DAT_0035f01c asm("D_0035f01c");
extern u32 LAB_0025fbd8 asm("D_0025fbd8");
extern u32 LAB_0025fe3c asm("D_0025fe3c");
extern u32 LAB_0025fedc asm("D_0025fedc");

// Ghidra decompile of 0x0025fb48, wrapped mechanically (ad/fallback.py)

void FUN_0025fb48_impl(void) asm("_ZN2Tz6CmItem7CtrlTopEv");
void FUN_0025fb48_impl(void) {
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_00289380(DAT_0035f01c);
  lVar4 = FUN_00287cd0();
  if (lVar4 == 2) {
    bVar1 = false;
    lVar4 = FUN_00287c10();
    lVar5 = FUN_00262160();
    if ((lVar5 != 0) || (lVar5 = FUN_00257970(), lVar5 != 0)) {
      bVar1 = true;
    }
    if (lVar4 != 2) {
      if (!bVar1) {
        lVar5 = FUN_00256ef0();
        bVar1 = false;
        if (lVar5 == 0) goto LAB_0025fbd8;
      }
      bVar1 = true;
    }
LAB_0025fbd8:
    if ((bVar1) || (((lVar4 == 0 || (lVar4 == 0xf)) && (lVar5 = FUN_0028f930(0), lVar5 != 0)))) {
      if ((iVar2 != -1) || (lVar5 = FUN_00289310(DAT_0035f01c), lVar5 != 0)) {
        FUN_00287f90(0);
        if (lVar4 != 2) {
          FUN_00256ea8();
        }
        FUN_00262118();
        if ((lVar4 == 0) || (lVar4 == 0xf)) {
          FUN_0028f878();
          return;
        }
      }
      return;
    }
    FUN_00287c30();
    FUN_0028af18(DAT_0035f01c,0x73);
    if (lVar4 == 0) {
      FUN_0028f7e8(0);
      FUN_002551b8();
      return;
    }
    if (lVar4 == 2) {
      FUN_002678a8();
      return;
    }
    if (lVar4 == 0xf) {
      lVar4 = FUN_002570a0(1);
      lVar5 = FUN_00281100(DAT_0035f010);
      if (lVar5 <= lVar4) {
        lVar4 = 0;
      }
      FUN_00277178(0xf,lVar4);
      return;
    }
    FUN_00256ea8();
    FUN_002634c8(0);
    FUN_00257050(10,0,0);
    FUN_0025ffd0();
    return;
  }
  if (((iVar2 != -1) || (lVar5 = FUN_00289310(DAT_0035f01c), lVar5 != 0)) &&
     (lVar5 = FUN_0028ae28(DAT_0035f01c,0), lVar5 == 0)) {
    FUN_0028ab20(DAT_0035f01c);
    FUN_00256e30();
    FUN_0028fa98(0xffffffffffffffff);
  }
  if ((lVar4 == 0) && (lVar4 = FUN_0028ae28(DAT_0035f01c,0), lVar4 != 0)) {
    FUN_00287c90(1);
  }
  iVar3 = FUN_0028afa8(DAT_0035f01c);
  uVar6 = FUN_00289310(DAT_0035f01c);
  uVar6 = FUN_00287df0(iVar2,uVar6,1,0x2638e0,1);
  lVar4 = FUN_00242848(uVar6);
  if (lVar4 != 0) goto LAB_0025fedc;
  if (iVar2 == -4) {
    lVar4 = FUN_00257070(1);
    lVar5 = FUN_002891e8(DAT_0035f01c);
    if (lVar5 != lVar4) {
      FUN_00257050(2,0,0);
    }
    uVar6 = FUN_002891e8(DAT_0035f01c);
    FUN_00257050(1,uVar6,0);
    FUN_00287da0();
    goto LAB_0025fedc;
  }
  if (iVar2 < -3) {
    if (iVar2 == -5) {
      FUN_00256e80();
      FUN_00263c60();
      FUN_0028f6f0(0);
      FUN_002620a0();
      FUN_00287c90(1);
      uVar7 = 0xf;
    }
    else {
LAB_0025fe3c:
      if ((iVar2 < 0) || (iVar3 <= iVar2)) goto LAB_0025fedc;
      if (iVar2 == iVar3 + -1) {
        uVar7 = 10;
        FUN_00256e80();
      }
      else {
        uVar7 = 2;
      }
      iVar2 = FUN_002891b8(DAT_0035f01c,iVar2);
      FUN_0028fb68(1,*(undefined4 *)(iVar2 + 0x198));
      FUN_00263c60();
      FUN_002620a0();
      FUN_00287c90(1);
    }
  }
  else {
    if (iVar2 != -2) {
      if (iVar2 == -1) goto LAB_0025fedc;
      goto LAB_0025fe3c;
    }
    FUN_00256e80();
    FUN_00263c60();
    FUN_0028f6f0(0);
    FUN_002620a0();
    FUN_00287c90(1);
    uVar7 = 0;
  }
  FUN_00287c00(uVar7);
  lVar4 = FUN_00257070(1);
  lVar5 = FUN_002891e8(DAT_0035f01c);
  if (lVar5 != lVar4) {
    FUN_00257050(2,0,0);
  }
  uVar6 = FUN_002891e8(DAT_0035f01c);
  FUN_00257050(1,uVar6,0);
LAB_0025fedc:
  lVar4 = FUN_00288040();
  if (lVar4 == 0) {
    return;
  }
  FUN_00288018();
  return;
}

