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

s32 FUN_0016bba8(...) asm("func_0016bba8");
s32 FUN_0016bc20(...) asm("func_0016bc20");
s32 FUN_0016c028(...) asm("func_0016c028");
s32 FUN_0018a550(...) asm("func_0018a550");
s32 FUN_0018a818(...) asm("func_0018a818");
s32 FUN_0019c5d0(...) asm("func_0019c5d0");
s32 FUN_0019c768(...) asm("func_0019c768");
s32 FUN_001b9bc8(...) asm("func_001b9bc8");
s32 FUN_002cf270(...) asm("func_002cf270");
s32 FUN_002df198(...) asm("func_002df198");
s32 FUN_002dfe38(...) asm("func_002dfe38");
s32 FUN_002e0230(...) asm("_ZN2Ti21ACTION_PO_JUMP_PLAYER15check_collisionEPN2YS3OBJE");
extern u32 DAT_00375e90 asm("D_00375e90");
extern u32 DAT_00375e94 asm("D_00375e94");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vadd)
_GHIDRA_ANY(_vmulbc)
_GHIDRA_ANY(_vsub)
#define _auStack_100 (*(AnyCell*)&auStack_100)
#define _auStack_f0 (*(AnyCell*)&auStack_f0)

// Ghidra decompile of 0x002e0230, wrapped mechanically (ad/fallback.py)

int FUN_002e0230_impl(int param_1,undefined8 param_2) asm("_ZN2Ti21ACTION_PO_JUMP_PLAYER15check_collisionEPN2YS3OBJE");
int FUN_002e0230_impl(int param_1,undefined8 param_2) {
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  Q16 *pauVar9;
  float fVar10;
  Q16 auVar11;
  Q16 auVar12;
  Q16 auVar13;
  Q16 auVar14;
  Q16 auStack_180;
  Q16 auStack_170;
  undefined4 auStack_160 [16];
  Q16 auStack_120;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  B8 auStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  B8 auStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  Q16 auStack_e0;
  int aiStack_d0 [4];
  undefined8 uStack_c0;
  int aiStack_b8 [18];
  undefined8 *puStack_70;
  int iStack_6c;
  
  pauVar9 = (Q16 *)(param_1 + 0x70);
  auVar14 = *pauVar9;
  auVar12 = *pauVar9;
  aiStack_b8[0xe] = param_1;
  puVar1 = (undefined8 *)FUN_0016c028(param_2);
  (*(u32*)((u8*)&auStack_180 + 8)) = *(undefined4 *)(puVar1 + 1);
  (*(u32*)((u8*)&auStack_180 + 12)) = *(undefined4 *)((int)puVar1 + 0xc);
  (*(u32*)((u8*)&auStack_180 + 0)) = (undefined4)*puVar1;
  (*(u32*)((u8*)&auStack_180 + 4)) = (undefined4)((ulong)*puVar1 >> 0x20);
  lVar2 = FUN_0016bba8(param_2,6,0);
  if (lVar2 == 0) {
    return 0;
  }
  puVar8 = auStack_120;
  FUN_0018a818(puVar8,param_2,lVar2);
  iVar4 = 1;
  puVar7 = auStack_160;
  do {
    (*(u32*)((u8*)&auVar11 + 4)) = (*(u32*)((u8*)&auStack_180 + 4));
    (*(u32*)((u8*)&auVar11 + 0)) = (*(u32*)((u8*)&auStack_180 + 0));
    (*(u32*)((u8*)&auVar11 + 8)) = (*(u32*)((u8*)&auStack_180 + 8));
    (*(u32*)((u8*)&auVar11 + 12)) = (*(u32*)((u8*)&auStack_180 + 12));
    auVar11 = _lqc2(auVar11);
    auVar13 = _lqc2(auVar12);
    auVar11 = _vsub(auVar11,auVar13);
    auStack_e0 = _sqc2(auVar11);
    auVar11 = _lqc2(auStack_e0);
    auVar13 = _qmtc2((float)iVar4 / DAT_00375e90);
    auVar11 = _vmulbc(auVar11,auVar13);
    auVar11 = _sqc2(auVar11);
    auVar11 = _lqc2(auVar11);
    auVar13 = _lqc2(auVar14);
    auVar11 = _vadd(auVar11,auVar13);
    auVar11 = _sqc2(auVar11);
    if (puVar7 != (undefined4 *)auStack_100) {
      fStack_f8 = (*(u32*)((u8*)&auVar11 + 8));
      uStack_f4 = (*(u32*)((u8*)&auVar11 + 12));
      *puVar7 = (*(u32*)((u8*)&auVar11 + 0));
      puVar7[1] = (*(u32*)((u8*)&auVar11 + 4));
      puVar7[2] = fStack_f8;
      puVar7[3] = uStack_f4;
    }
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 4;
  } while (iVar4 < 5);
  iVar6 = (int)lVar2;
  iVar4 = 1;
  (*(u32*)((u8*)&auStack_100 + 4)) = (float)((int)*(short *)(iVar6 + 10) - (int)*(short *)(iVar6 + 0xe));
  (*(u32*)((u8*)&auStack_100 + 0)) = (float)(int)*(short *)(iVar6 + 8);
  fStack_f8 = (float)(int)*(short *)(iVar6 + 0xc);
  uStack_f4 = DAT_00375e94;
  iVar6 = 0x10;
  do {
    puVar7 = (undefined4 *)((int)aiStack_d0 + iVar6);
    auVar12 = _lqc2(*(Q16 *)(auStack_170 + iVar6));
    auVar14 = _lqc2(_auStack_100);
    auVar12 = _vadd(auVar12,auVar14);
    _auStack_f0 = _sqc2(auVar12);
    if (puVar7 != (undefined4 *)auStack_f0) {
      *puVar7 = (*(u32*)((u8*)&auStack_f0 + 0));
      *(int *)((int)aiStack_d0 + iVar6 + 4) = (*(u32*)((u8*)&auStack_f0 + 4));
      *(undefined4 *)((int)aiStack_d0 + iVar6 + 8) = uStack_e8;
      *(undefined4 *)((int)aiStack_d0 + iVar6 + 0xc) = uStack_e4;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar4 * 0x10;
  } while (iVar4 < 5);
  fVar10 = 0.0;
  iVar4 = 0;
  lVar2 = 0;
  do {
    do {
      if ((iVar4 != 0) || (lVar2 = FUN_001b9bc8(lVar2), lVar2 == 0)) {
        if ((iVar4 != 0) &&
           (((lVar2 != 0 && (lVar3 = FUN_002df198(aiStack_b8[0xe]), lVar3 == 0)) &&
            (*(float *)(aiStack_b8[0xe] + 0x28) < 0.0)))) {
          FUN_002dfe38(fVar10,aiStack_b8[0xe],param_2,lVar2,*(undefined4 *)((int)lVar2 + 0xb14));
        }
        piVar5 = aiStack_b8 + 0xe;
        if (pauVar9 != &auStack_180) {
          *(undefined4 *)*pauVar9 = (*(u32*)((u8*)&auStack_180 + 0));
          *(undefined4 *)(param_1 + 0x74) = (*(u32*)((u8*)&auStack_180 + 4));
          *(undefined4 *)(param_1 + 0x78) = (*(u32*)((u8*)&auStack_180 + 8));
          *(undefined4 *)(param_1 + 0x7c) = (*(u32*)((u8*)&auStack_180 + 12));
          piVar5 = aiStack_b8 + 0xe;
        }
        for (; aiStack_d0 != piVar5; piVar5 = piVar5 + -4) {
        }
        for (; auStack_170 != puVar8; puVar8 = puVar8 + -0x10) {
        }
        return iVar4;
      }
      lVar3 = FUN_0019c768(lVar2);
    } while (((lVar3 != 0) || (lVar3 = FUN_0019c5d0(lVar2), lVar3 != 0)) ||
            ((*(char *)(*(int *)((int)lVar2 + 8) + 5) != '\x16' ||
             ((lVar3 = FUN_002cf270((int)lVar2 + 0xaf0,4), lVar3 != 0 ||
              (lVar3 = FUN_0016bc20(lVar2,2,0xffffffffffffffff), lVar3 == 0))))));
    uStack_f4 = 0;
    FUN_0018a818(auStack_100,lVar2,lVar3);
    puVar1 = &uStack_c0;
    aiStack_b8[0xf] = 1;
    do {
      iStack_6c = (int)puVar1 >> 0x1f;
      if ((undefined8 *)&uStack_110 != puVar1) {
        uStack_108 = *(undefined4 *)(puVar1 + 1);
        uStack_104 = *(undefined4 *)((int)puVar1 + 0xc);
        uStack_110 = (undefined4)*puVar1;
        uStack_10c = (undefined4)((ulong)*puVar1 >> 0x20);
      }
      puStack_70 = puVar1;
      lVar3 = FUN_0018a550(puVar8,auStack_100);
      if (lVar3 != 0) {
        iVar4 = 1;
        fVar10 = (float)(*(u32*)((u8*)&auStack_f0 + 4)) - fStack_f8;
        break;
      }
      aiStack_b8[0xf] = aiStack_b8[0xf] + 1;
      puVar1 = puStack_70 + 2;
    } while (aiStack_b8[0xf] < 5);
  } while( true );
}

