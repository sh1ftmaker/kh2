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

s32 FUN_00233e60(...) asm("func_00233e60");
s32 FUN_00233e70(...) asm("func_00233e70");
s32 FUN_00234570(...) asm("func_00234570");
s32 FUN_002348a8(...) asm("func_002348a8");
s32 FUN_00240ba0(...) asm("func_00240ba0");
s32 FUN_00240be0(...) asm("func_00240be0");
s32 FUN_00242848(...) asm("func_00242848");
s32 FUN_0025dba8(...) asm("func_0025dba8");
s32 FUN_0025dfb0(...) asm("_ZN2Tz6CmLoad16CtrlErrorConfirmEv");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_00287bd0(...) asm("func_00287bd0");
s32 FUN_00287c00(...) asm("func_00287c00");
s32 FUN_00287c10(...) asm("func_00287c10");
s32 FUN_00287c30(...) asm("func_00287c30");
s32 FUN_00287cc0(...) asm("func_00287cc0");
s32 FUN_00287cd0(...) asm("func_00287cd0");
s32 FUN_00287d20(...) asm("func_00287d20");
s32 FUN_00287df0(...) asm("func_00287df0");
s32 FUN_00288018(...) asm("func_00288018");
s32 FUN_00288040(...) asm("func_00288040");
s32 FUN_00289310(...) asm("func_00289310");
s32 FUN_00289380(...) asm("func_00289380");
s32 FUN_0028abe0(...) asm("func_0028abe0");
s32 FUN_0028acc8(...) asm("func_0028acc8");
s32 FUN_0028ae28(...) asm("func_0028ae28");
s32 FUN_0028f6f0(...) asm("func_0028f6f0");
s32 FUN_0028f7e8(...) asm("func_0028f7e8");
s32 FUN_002b4ee0(...) asm("func_002b4ee0");
s32 FUN_002b4f50(...) asm("func_002b4f50");
s32 FUN_002b4fb8(...) asm("func_002b4fb8");
s32 FUN_002b50e8(...) asm("func_002b50e8");
s32 FUN_002b50f8(...) asm("func_002b50f8");
s32 FUN_002b5108(...) asm("func_002b5108");
s32 FUN_002b5188(...) asm("func_002b5188");
s32 FUN_002b5558(...) asm("func_002b5558");
s32 FUN_002b55e0(...) asm("func_002b55e0");
s32 FUN_002b5af0(...) asm("func_002b5af0");
extern u32 DAT_0035f0b3 asm("D_0035f0b3");
extern u32 DAT_0035f650 asm("D_0035f650");
extern u32 LAB_0025e1e8 asm("D_0025e1e8");
extern u32 LAB_0025e2e0 asm("D_0025e2e0");

// Ghidra decompile of 0x0025dfb0, wrapped mechanically (ad/fallback.py)

void FUN_0025dfb0_impl(void) asm("_ZN2Tz6CmLoad16CtrlErrorConfirmEv");
void FUN_0025dfb0_impl(void) {
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_00287cd0();
  if (lVar2 == 2) {
    lVar2 = FUN_00289380(DAT_0035f650);
    lVar3 = FUN_00287c10();
    if (lVar3 == 2) {
      lVar4 = FUN_0028acc8(DAT_0035f650);
    }
    else {
      lVar4 = FUN_002b4fb8();
    }
    if (lVar4 != 0) {
      if ((lVar2 == -1) && (lVar2 = FUN_00289310(DAT_0035f650), lVar2 == 0)) {
        return;
      }
      if (lVar3 == 2) {
        FUN_0028abe0(DAT_0035f650);
        return;
      }
      FUN_002b4f50();
      return;
    }
    bVar1 = 1;
    if ((int)lVar3 - 1U < 2) {
      bVar1 = FUN_002b55e0();
      bVar1 = bVar1 ^ 1;
    }
    if (bVar1 != 0) {
      if (lVar3 == 1) {
        FUN_00233e70(0);
        lVar2 = FUN_00233e60();
        if (lVar2 == 0) {
          return;
        }
      }
      FUN_00287c30();
      FUN_00287d20(0);
      lVar2 = FUN_00287bc0();
      if (lVar2 == 1) {
        FUN_002b5af0();
        FUN_0028f7e8(1);
        FUN_0025dba8();
      }
      else if (lVar2 == 0xc) {
        FUN_002b5188(0x373110,1);
      }
      else if (lVar2 == 2) {
        FUN_00240be0();
      }
      FUN_00288018();
    }
    DAT_0035f0b3 = 1;
    return;
  }
  lVar3 = FUN_00233e70(0);
  if (lVar3 == 0) {
    if (DAT_0035f0b3 != '\0') {
      uVar5 = FUN_00240ba0();
      lVar3 = FUN_002348a8(uVar5,0);
      if (lVar3 != 3) {
        lVar2 = FUN_00287bc0();
        if (lVar2 == 5) {
          FUN_002b5108(0x8a89,uVar5);
          FUN_00287c00(2);
          FUN_0028abe0(DAT_0035f650);
          FUN_002b5558();
          FUN_00287cc0(2);
        }
LAB_0025e1e8:
        FUN_00234570(uVar5,0);
        return;
      }
      lVar3 = FUN_00287bc0();
      if (lVar3 != 5) {
        FUN_002b5108(0xb85d,uVar5);
        uVar6 = FUN_00287cd0();
        FUN_00287bd0(5,uVar6);
        goto LAB_0025e1e8;
      }
      FUN_00234570(uVar5,0);
    }
    FUN_002b50f8();
  }
  lVar3 = FUN_002b50e8();
  if (lVar3 != 0) {
    return;
  }
  if (lVar2 == 0) {
    lVar3 = FUN_0028ae28(DAT_0035f650,0);
    lVar2 = -1;
    if (lVar3 != 0) {
      FUN_00287cc0(1);
      lVar2 = -1;
    }
  }
  else {
    lVar2 = FUN_00289380(DAT_0035f650);
  }
  lVar3 = FUN_00287bc0();
  uVar5 = FUN_00289310(DAT_0035f650);
  uVar5 = FUN_00287df0(lVar2,uVar5,0,0,1);
  lVar4 = FUN_00242848(uVar5);
  if ((lVar4 == 0) && (lVar2 != -1)) {
    if (lVar2 < 0) {
      if (lVar2 != -2) goto LAB_0025e2e0;
    }
    else if (lVar2 != 0) goto LAB_0025e2e0;
    if (lVar3 == 10) {
      FUN_00287c00(0xc);
    }
    else {
      FUN_002b5558();
      FUN_00287c00(1);
      FUN_0028f6f0(1);
    }
    FUN_002b4ee0();
    FUN_00287cc0(2);
  }
LAB_0025e2e0:
  lVar2 = FUN_00288040();
  if (lVar2 == 0) {
    return;
  }
  FUN_00288018();
  return;
}

