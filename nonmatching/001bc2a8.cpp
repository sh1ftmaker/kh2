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

s32 FUN_001a1de0(...) asm("func_001a1de0");
s32 FUN_001a6598(...) asm("func_001a6598");
s32 FUN_001b58a8(...) asm("func_001b58a8");
s32 FUN_001b5b20(...) asm("func_001b5b20");
s32 FUN_001b8ff8(...) asm("func_001b8ff8");
s32 FUN_001b91d0(...) asm("func_001b91d0");
s32 FUN_001bb4a0(...) asm("func_001bb4a0");
s32 FUN_001bbec0(...) asm("func_001bbec0");
s32 FUN_001bc050(...) asm("func_001bc050");
s32 FUN_001bc2a8(...) asm("_ZN2YS12COMMAND_SLOT9GetStatusEPKNS_12COMMAND_ELEMEPNS_3OBJEPKNS_6TARGETE");
s32 FUN_001bc568(...) asm("func_001bc568");
s32 FUN_001bf140(...) asm("func_001bf140");
s32 FUN_001c8ab0(...) asm("func_001c8ab0");
s32 FUN_001c8db8(...) asm("func_001c8db8");
s32 FUN_001c9c00(...) asm("func_001c9c00");
extern u32 LAB_001bc328 asm("D_001bc328");
extern u32 LAB_001bc440 asm("D_001bc440");
extern u32 LAB_001bc46c asm("D_001bc46c");
extern u32 LAB_001bc4fc asm("D_001bc4fc");

// Ghidra decompile of 0x001bc2a8, wrapped mechanically (ad/fallback.py)

ulong FUN_001bc2a8_impl(undefined8 param_1,long param_2) asm("_ZN2YS12COMMAND_SLOT9GetStatusEPKNS_12COMMAND_ELEMEPNS_3OBJEPKNS_6TARGETE");
ulong FUN_001bc2a8_impl(undefined8 param_1,long param_2) {
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  uVar6 = 0;
  lVar3 = 0;
  if ((param_2 != 0) && ((*(uint *)((int)param_2 + 0x588) & 0x80) != 0)) {
    lVar3 = param_2;
  }
  iVar5 = (int)param_1;
  uVar4 = (ulong)*(ushort *)(iVar5 + 2);
  iVar7 = (int)lVar3;
  if (uVar4 == 0x51) {
LAB_001bc4fc:
    uVar6 = FUN_001b5b20(lVar3,param_1,0);
  }
  else {
    if (uVar4 < 0x52) {
      if (uVar4 == 4) {
LAB_001bc46c:
        lVar2 = FUN_001bc568(param_1,lVar3);
        if (lVar2 == 0) {
          uVar6 = 5;
        }
        goto LAB_001bc328;
      }
      if (uVar4 < 5) {
        if (uVar4 == 1) {
          if (lVar3 == 0) {
            uVar6 = 5;
          }
          else if (*(int *)(iVar7 + 0xaf0) == 0) {
            uVar6 = 5;
          }
          goto LAB_001bc328;
        }
        if (uVar4 < 2) {
          if (uVar4 == 0) {
            uVar6 = 5;
          }
          goto LAB_001bc328;
        }
        if ((uVar4 != 2) || (lVar3 == 0)) goto LAB_001bc328;
        lVar2 = FUN_001a1de0(*(undefined4 *)(iVar7 + 0x48c),param_2);
        if (lVar2 == 0) {
          if (*(int *)(*(int *)(iVar7 + 0x48c) + 0x180) < (int)(uint)*(byte *)(iVar5 + 0x1c)) {
            lVar2 = FUN_001a6598(*(undefined2 *)(iVar5 + 4));
            uVar6 = uVar4;
            if (lVar2 == 0) {
              uVar6 = 5;
            }
          }
        }
        else {
          uVar6 = 5;
        }
        lVar2 = FUN_001bbec0();
      }
      else {
        if (uVar4 != 0x37) {
          if (0x37 < uVar4) {
            if (uVar4 != 0x48) goto LAB_001bc328;
            uVar6 = 5;
            lVar2 = FUN_001bc050(param_1,param_2);
            if (lVar2 == 0) {
              uVar6 = 0;
            }
            goto LAB_001bc46c;
          }
          if (uVar4 != 5) goto LAB_001bc328;
          lVar2 = FUN_001c9c00(param_1,param_2);
          uVar6 = uVar4;
          if (lVar2 != 0) {
            uVar6 = 0;
          }
        }
LAB_001bc440:
        lVar2 = FUN_001c8db8(0x351ec0,0);
      }
    }
    else {
      if (uVar4 != 0x13c) {
        if (uVar4 < 0x13d) {
          if (uVar4 < 0x67) goto LAB_001bc328;
          if (uVar4 < 0x69) {
            uVar6 = 5;
            goto LAB_001bc328;
          }
          if (uVar4 != 0x7f) goto LAB_001bc328;
          goto LAB_001bc440;
        }
        if (uVar4 == 0x1c4) {
          lVar2 = FUN_001a1de0(*(undefined4 *)(iVar7 + 0x48c));
          if (lVar2 == 0) {
            if (*(int *)(*(int *)(iVar7 + 0x48c) + 0x180) < (int)(uint)*(byte *)(iVar5 + 0x1c)) {
              uVar6 = 2;
            }
          }
          else {
            uVar6 = 5;
          }
          goto LAB_001bc328;
        }
        if (uVar4 < 0x1c5) {
          if (uVar4 == 0x14a) {
            uVar6 = 5;
            lVar2 = FUN_001bb4a0(param_1,param_2);
            if (lVar2 == 0) {
              uVar6 = 0;
            }
          }
          goto LAB_001bc328;
        }
        if (uVar4 != 0x2c3) goto LAB_001bc328;
        goto LAB_001bc4fc;
      }
      lVar2 = FUN_001c8ab0();
      if (lVar2 != 2) {
        uVar6 = 5;
        goto LAB_001bc328;
      }
      lVar2 = FUN_001b58a8();
    }
    if (lVar2 != 0) {
      uVar6 = 5;
    }
  }
LAB_001bc328:
  lVar2 = FUN_001b8ff8(param_1,param_2);
  if (lVar2 == 0) {
    if (lVar3 == 0) {
      uVar1 = *(undefined1 *)(iVar5 + 0x2e);
    }
    else {
      lVar3 = FUN_001b91d0(param_1,*(undefined4 *)(iVar7 + 0xb50));
      if (lVar3 != 0) {
        return 5;
      }
      uVar1 = *(undefined1 *)(iVar5 + 0x2e);
    }
    lVar3 = FUN_001bf140(*(undefined4 *)(iVar7 + 0xb44),uVar1);
    if (lVar3 == 0) {
      return uVar6;
    }
  }
  return 5;
}

