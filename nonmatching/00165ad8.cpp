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

s32 FUN_001424c0(...) asm("func_001424c0");
s32 FUN_00142b70(...) asm("func_00142b70");
s32 FUN_00165ad8(...) asm("_ZN2dk6ObjOcc13collisionDownEPNS_14CollisionParamERf");
s32 FUN_00165ef0(...) asm("func_00165ef0");
s32 FUN_0031b9e0(...) asm("func_0031b9e0");
extern u32 DAT_0036b4ec asm("D_0036b4ec");
extern u32 LAB_00165d90 asm("D_00165d90");

// Ghidra decompile of 0x00165ad8, wrapped mechanically (ad/fallback.py)

int FUN_00165ad8_impl(undefined8 *param_1,float *param_2) asm("_ZN2dk6ObjOcc13collisionDownEPNS_14CollisionParamERf");
int FUN_00165ad8_impl(undefined8 *param_1,float *param_2) {
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  fVar7 = DAT_0036b4ec;
  lVar4 = 0;
  iVar5 = 0;
  *param_2 = DAT_0036b4ec;
  FUN_0031b9e0(&uStack_d0);
  uVar6 = *(undefined4 *)((int)param_1 + 0x34);
  do {
    while( true ) {
      do {
        lVar4 = FUN_00165ef0(lVar4);
        if (lVar4 == 0) {
          if (iVar5 == 1) {
            if (param_1 != (undefined8 *)&uStack_d0) {
              *(undefined4 *)param_1 = uStack_d0;
              *(undefined4 *)((int)param_1 + 4) = uStack_cc;
              *(undefined4 *)(param_1 + 1) = uStack_c8;
              *(undefined4 *)((int)param_1 + 0xc) = uStack_c4;
            }
            if (param_1 + 2 != (undefined8 *)&uStack_c0) {
              *(undefined4 *)(param_1 + 2) = uStack_c0;
              *(undefined4 *)((int)param_1 + 0x14) = uStack_bc;
              *(undefined4 *)(param_1 + 3) = uStack_b8;
              *(undefined4 *)((int)param_1 + 0x1c) = uStack_b4;
            }
            if (param_1 + 4 != (undefined8 *)&uStack_b0) {
              *(undefined4 *)(param_1 + 4) = uStack_b0;
              *(undefined4 *)((int)param_1 + 0x24) = uStack_ac;
              *(undefined4 *)(param_1 + 5) = uStack_a8;
              *(undefined4 *)((int)param_1 + 0x2c) = uStack_a4;
            }
            if (param_1 + 6 != (undefined8 *)&uStack_a0) {
              *(undefined4 *)(param_1 + 6) = uStack_a0;
              *(undefined4 *)((int)param_1 + 0x34) = uStack_9c;
              *(undefined4 *)(param_1 + 7) = uStack_98;
              *(undefined4 *)((int)param_1 + 0x3c) = uStack_94;
            }
            if (param_1 + 8 != (undefined8 *)&uStack_90) {
              *(undefined4 *)(param_1 + 8) = uStack_90;
              *(undefined4 *)((int)param_1 + 0x44) = uStack_8c;
              *(undefined4 *)(param_1 + 9) = uStack_88;
              *(undefined4 *)((int)param_1 + 0x4c) = uStack_84;
            }
            if (param_1 + 10 != (undefined8 *)&uStack_80) {
              *(undefined4 *)(param_1 + 10) = uStack_80;
              *(undefined4 *)((int)param_1 + 0x54) = uStack_7c;
              *(undefined4 *)(param_1 + 0xb) = uStack_78;
              *(undefined4 *)((int)param_1 + 0x5c) = uStack_74;
            }
            *(undefined2 *)(param_1 + 0xc) = uStack_70;
            *(undefined4 *)(param_1 + 0x10) = uStack_50;
            *(undefined2 *)((int)param_1 + 0x62) = uStack_6e;
            *(undefined2 *)((int)param_1 + 100) = uStack_6c;
            *(undefined2 *)((int)param_1 + 0x66) = uStack_6a;
            *(undefined4 *)(param_1 + 0xd) = uStack_68;
            *(undefined4 *)((int)param_1 + 0x6c) = uStack_64;
            *(undefined4 *)(param_1 + 0xe) = uStack_60;
            *(undefined4 *)((int)param_1 + 0x74) = uStack_5c;
            *(undefined4 *)(param_1 + 0xf) = uStack_58;
            *(undefined4 *)((int)param_1 + 0x7c) = uStack_54;
          }
          return iVar5;
        }
        piVar3 = (int *)lVar4;
      } while (((*piVar3 == *(int *)((int)param_1 + 0x7c)) ||
               (lVar2 = FUN_00142b70(piVar3[1]), lVar2 != 0)) ||
              (lVar2 = FUN_001424c0(piVar3[1],param_1), lVar2 == 0));
      *(int **)(param_1 + 0xf) = piVar3;
      if ((param_1[0xe] & 0x100000000) != 0) break;
      if (*(float *)((int)param_1 + 0x34) < fVar7) {
        if ((undefined8 *)&uStack_d0 != param_1) {
          uStack_c8 = *(undefined4 *)(param_1 + 1);
          uStack_c4 = *(undefined4 *)((int)param_1 + 0xc);
          uStack_d0 = (undefined4)*param_1;
          uStack_cc = (undefined4)((ulong)*param_1 >> 0x20);
        }
        if ((undefined8 *)&uStack_c0 != param_1 + 2) {
          uVar1 = param_1[2];
          uStack_b8 = *(undefined4 *)(param_1 + 3);
          uStack_b4 = *(undefined4 *)((int)param_1 + 0x1c);
          uStack_c0 = (undefined4)uVar1;
          uStack_bc = (undefined4)((ulong)uVar1 >> 0x20);
        }
        if ((undefined8 *)&uStack_b0 != param_1 + 4) {
          uVar1 = param_1[4];
          uStack_a8 = *(undefined4 *)(param_1 + 5);
          uStack_a4 = *(undefined4 *)((int)param_1 + 0x2c);
          uStack_b0 = (undefined4)uVar1;
          uStack_ac = (undefined4)((ulong)uVar1 >> 0x20);
        }
        if ((undefined8 *)&uStack_a0 != param_1 + 6) {
          uVar1 = param_1[6];
          uStack_98 = *(undefined4 *)(param_1 + 7);
          uStack_94 = *(undefined4 *)((int)param_1 + 0x3c);
          uStack_a0 = (undefined4)uVar1;
          uStack_9c = (undefined4)((ulong)uVar1 >> 0x20);
        }
        if ((undefined8 *)&uStack_90 != param_1 + 8) {
          uVar1 = param_1[8];
          uStack_88 = *(undefined4 *)(param_1 + 9);
          uStack_84 = *(undefined4 *)((int)param_1 + 0x4c);
          uStack_90 = (undefined4)uVar1;
          uStack_8c = (undefined4)((ulong)uVar1 >> 0x20);
        }
        if ((undefined8 *)&uStack_80 == param_1 + 10) {
          uStack_60 = *(undefined4 *)(param_1 + 0xe);
        }
        else {
          uVar1 = param_1[10];
          uStack_78 = *(undefined4 *)(param_1 + 0xb);
          uStack_74 = *(undefined4 *)((int)param_1 + 0x5c);
          uStack_80 = (undefined4)uVar1;
          uStack_7c = (undefined4)((ulong)uVar1 >> 0x20);
          uStack_60 = *(undefined4 *)(param_1 + 0xe);
        }
        iVar5 = 1;
        uStack_5c = *(undefined4 *)((int)param_1 + 0x74);
        uStack_70 = *(undefined2 *)(param_1 + 0xc);
        uStack_6e = *(undefined2 *)((int)param_1 + 0x62);
        uStack_6c = *(undefined2 *)((int)param_1 + 100);
        uStack_6a = *(undefined2 *)((int)param_1 + 0x66);
        uStack_68 = *(undefined4 *)(param_1 + 0xd);
        uStack_64 = *(undefined4 *)((int)param_1 + 0x6c);
        uStack_58 = *(undefined4 *)(param_1 + 0xf);
        uStack_54 = *(undefined4 *)((int)param_1 + 0x7c);
        uStack_50 = *(undefined4 *)(param_1 + 0x10);
        fVar7 = *(float *)((int)param_1 + 0x34);
LAB_00165d90:
        *(undefined4 *)((int)param_1 + 0x34) = uVar6;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x34) = uVar6;
      }
    }
    if (*(float *)(param_1 + 0xd) < *param_2) {
      *param_2 = *(float *)(param_1 + 0xd);
      goto LAB_00165d90;
    }
    *(undefined4 *)((int)param_1 + 0x34) = uVar6;
  } while( true );
}

