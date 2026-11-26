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
s32 FUN_00274cf0(...) asm("func_00274cf0");
s32 FUN_00275b60(...) asm("func_00275b60");
s32 FUN_00275dd0(...) asm("func_00275dd0");
s32 FUN_00276150(...) asm("func_00276150");
s32 FUN_00276220(...) asm("func_00276220");
s32 FUN_00276358(...) asm("func_00276358");
s32 FUN_00276368(...) asm("func_00276368");
s32 FUN_00276398(...) asm("func_00276398");
s32 FUN_002765e8(...) asm("func_002765e8");
s32 FUN_00276888(...) asm("func_00276888");
s32 FUN_00276dc0(...) asm("func_00276dc0");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287c00(...) asm("func_00287c00");
s32 FUN_00287c30(...) asm("func_00287c30");
s32 FUN_00287c90(...) asm("func_00287c90");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00287cd0(...) asm("func_00287cd0");
s32 FUN_00287da0(...) asm("func_00287da0");
s32 FUN_00287df0(...) asm("func_00287df0");
s32 FUN_00287f90(...) asm("func_00287f90");
s32 FUN_00288018(...) asm("func_00288018");
s32 FUN_00288040(...) asm("func_00288040");
s32 FUN_00289310(...) asm("func_00289310");
s32 FUN_00289380(...) asm("func_00289380");
s32 FUN_0028acc8(...) asm("func_0028acc8");
s32 FUN_0028af18(...) asm("func_0028af18");
s32 FUN_0028fb28(...) asm("func_0028fb28");
s32 FUN_002925c0(...) asm("func_002925c0");
s32 FUN_00292630(...) asm("func_00292630");
s32 FUN_002945e8(...) asm("func_002945e8");
s32 FUN_00295868(...) asm("func_00295868");
s32 FUN_00296168(...) asm("_ZN2Tz8JmReport7ControlEv");
s32 FUN_00296b08(...) asm("func_00296b08");
s32 FUN_00296da8(...) asm("func_00296da8");
s32 FUN_00297050(...) asm("func_00297050");
s32 FUN_00297e68(...) asm("func_00297e68");
s32 FUN_002995e8(...) asm("func_002995e8");
s32 FUN_002a0908(...) asm("func_002a0908");
s32 FUN_002a21b0(...) asm("func_002a21b0");
s32 FUN_002a2600(...) asm("func_002a2600");
s32 FUN_002a77a0(...) asm("func_002a77a0");
s32 FUN_002a8ac8(...) asm("func_002a8ac8");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 LAB_00296478 asm("D_00296478");

// Ghidra decompile of 0x00296168, wrapped mechanically (ad/fallback.py)

void FUN_00296168_impl(void) asm("_ZN2Tz8JmReport7ControlEv");
void FUN_00296168_impl(void) {
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_40;
  undefined4 auStack_3c [3];
  
  lVar1 = FUN_00289380(DAT_0035f200);
  lVar2 = FUN_00287cd0();
  uVar3 = FUN_00287bc0();
  if (lVar2 == 2) {
    lVar2 = FUN_00276368();
    if (((lVar2 != 0) || (lVar2 = FUN_0028acc8(DAT_0035f200), lVar2 != 0)) ||
       (lVar2 = FUN_00276888(), lVar2 != 0)) {
      if (lVar1 == -1) {
        return;
      }
      FUN_00287f90(0);
      FUN_00295868();
      return;
    }
    lVar1 = FUN_00292630();
    if (lVar1 != 0) {
      return;
    }
    FUN_00295868();
    FUN_00287c30();
    lVar1 = FUN_00287bc0();
    FUN_0028af18(DAT_0035f200,0x73);
    FUN_00274cf0(lVar1);
    FUN_002925c0();
    uVar3 = FUN_00276358();
    FUN_00276220(uVar3,0);
    if (lVar1 == 0) {
      FUN_002945e8();
      return;
    }
    if (lVar1 == 0xd) {
      FUN_002995e8();
      return;
    }
    if (lVar1 == 3) {
      FUN_00297050();
      return;
    }
    if (lVar1 == 4) {
      FUN_00297e68();
      return;
    }
    if ((lVar1 != 7) && (lVar1 != 9)) {
      if (lVar1 == 8) {
        FUN_002a2600();
        return;
      }
      if ((lVar1 == 6) || (lVar1 == 0xc)) {
        FUN_002a0908(0xffffffffffffffff);
        return;
      }
      if (lVar1 == 0xb) {
        FUN_002a77a0();
        return;
      }
      if (lVar1 != 10) {
        return;
      }
      FUN_002a8ac8();
      return;
    }
    FUN_002a21b0();
    return;
  }
  FUN_00296b08();
  if (((lVar1 != -1) || (lVar4 = FUN_00289310(DAT_0035f200), lVar4 != 0)) &&
     (lVar4 = FUN_00276398(), lVar4 == 0)) {
    FUN_00276220(0,2);
    FUN_00275b60();
  }
  if ((lVar2 == 0) && (lVar2 = FUN_00276398(), lVar2 != 0)) {
    FUN_00287c90(1);
  }
  uVar5 = FUN_00289310(DAT_0035f200);
  uVar5 = FUN_00287df0(lVar1,uVar5,1,0x296f28,1);
  lVar2 = FUN_00242848(uVar5);
  if (lVar2 != 0) goto switchD_00296410_caseD_ffffffff;
  switch((int)lVar1) {
  case -9:
  case -8:
    FUN_00276150(uVar3,&uStack_40,auStack_3c);
    if (lVar1 == -8) {
      uStack_40 = auStack_3c[0];
    }
    FUN_00276220(lVar1 != -8,1);
    FUN_00276dc0();
    goto LAB_00296478;
  default:
    uVar5 = FUN_00296da8(lVar1);
    FUN_00276220(0,1);
    FUN_0028fb28(0,*(undefined2 *)((int)uVar5 * 2 + 0x374758));
    switch(uVar5) {
    case 0:
      uVar5 = 6;
      break;
    case 1:
      uVar5 = 3;
      break;
    case 2:
      uVar5 = 4;
      break;
    case 3:
      uVar5 = 7;
      break;
    case 4:
      uVar5 = 8;
      break;
    case 5:
      uVar5 = 9;
      break;
    case 6:
      uVar5 = 10;
      break;
    case 7:
      uVar5 = 0xb;
      break;
    default:
      uVar5 = 0xc;
    }
    FUN_00287c00(uVar5);
    FUN_00275dd0();
    FUN_00276dc0();
    FUN_00287cc0(2);
    FUN_002765e8(uVar3,lVar1,0);
    break;
  case -4:
    FUN_00287da0();
    break;
  case -2:
    FUN_00276220(1,1);
    FUN_00276dc0();
    uStack_40 = 0;
LAB_00296478:
    FUN_00287c00(uStack_40);
    FUN_00287cc0(2);
    break;
  case -1:
    break;
  }
switchD_00296410_caseD_ffffffff:
  lVar1 = FUN_00288040();
  if (lVar1 != 0) {
    FUN_00288018();
  }
  return;
}

