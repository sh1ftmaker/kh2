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

s32 FUN_0010c9f8(...) asm("func_0010c9f8");
s32 FUN_0010eed8(...) asm("func_0010eed8");
s32 FUN_0010ef28(...) asm("func_0010ef28");
s32 FUN_0010f600(...) asm("func_0010f600");
s32 FUN_0010f648(...) asm("func_0010f648");
s32 FUN_0010f660(...) asm("func_0010f660");
s32 FUN_0010f8d0(...) asm("func_0010f8d0");
s32 FUN_0010fb10(...) asm("func_0010fb10");
s32 FUN_0010fea0(...) asm("func_0010fea0");
s32 FUN_0010ff08(...) asm("func_0010ff08");
s32 FUN_00110630(...) asm("func_00110630");
s32 FUN_00112570(...) asm("func_00112570");
s32 FUN_001137e0(...) asm("func_001137e0");
s32 FUN_001137e8(...) asm("func_001137e8");
s32 FUN_001137f0(...) asm("func_001137f0");
s32 FUN_00113808(...) asm("func_00113808");
s32 FUN_001142b0(...) asm("func_001142b0");
s32 FUN_0016b010(...) asm("func_0016b010");
s32 FUN_00190128(...) asm("func_00190128");
s32 FUN_001a1de0(...) asm("func_001a1de0");
extern undefined DAT_003a9618 asm("D_003a9618");
extern undefined DAT_003a9620 asm("D_003a9620");
extern undefined DAT_003a9624 asm("D_003a9624");
extern undefined LAB_00110188 asm("D_00110188");
extern undefined LAB_00110194 asm("D_00110194");
extern undefined LAB_001102b4 asm("D_001102b4");

// Ghidra decompile of 0x0010ff08, wrapped mechanically (ad/fallback.py)

void FUN_0010ff08_impl(undefined8 param_1) asm("func_0010ff08");
void FUN_0010ff08_impl(undefined8 param_1) {
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint *puVar9;
  code *pcVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  
  lVar6 = FUN_0010fb10();
  if (lVar6 != 0) {
    return;
  }
  lVar6 = FUN_0010f8d0(param_1);
  if (lVar6 != 0) {
    return;
  }
  iVar17 = (int)param_1;
  iVar2 = FUN_001137e0(*(undefined4 *)(iVar17 + 0xb60));
  iVar3 = FUN_001137e8(*(undefined4 *)(iVar17 + 0xb60));
  if (DAT_003a9618 == '\0') {
    iVar15 = 0x1f;
    puVar8 = &DAT_003a9624;
    puVar12 = &DAT_003a9620;
    do {
      iVar15 = iVar15 + -1;
      FUN_00190128(puVar8);
      puVar8 = puVar12 + 0x20;
      puVar12 = puVar12 + 0x1c;
    } while (iVar15 != -1);
    DAT_003a9618 = '\x01';
  }
  FUN_00190128(&uStack_a0);
  puVar9 = *(uint **)(iVar17 + 0xc60);
  if (puVar9 == (uint *)0x0) {
    uVar11 = *(uint *)(iVar17 + 0xb7c);
  }
  else {
    if ((*puVar9 & 0x200) != 0) {
      uStack_98 = *(undefined4 *)(iVar17 + 0x9fc);
      uStack_a0 = *(undefined4 *)(iVar17 + 0x9f4);
      *(uint *)(iVar17 + 0xb7c) = *(uint *)(iVar17 + 0xb7c) | 4;
      uStack_9c = *(undefined4 *)(iVar17 + 0x9f8);
      uStack_94 = *(undefined4 *)(iVar17 + 0xa00);
      uStack_90 = *(undefined4 *)(iVar17 + 0xa04);
      uStack_70 = *(undefined4 *)(iVar17 + 0xc64);
      if ((puVar9[2] & 1) == 0) {
        pcVar10 = (code *)puVar9[1];
        iVar15 = *(int *)(iVar17 + 0xb60);
      }
      else {
        iVar15 = *(int *)(iVar17 + 0xb60);
        pcVar10 = *(code **)((puVar9[1] & 0xfffffffc) + *(int *)(iVar15 + ((int)puVar9[2] >> 1)));
      }
      lVar6 = (*pcVar10)(iVar15 + ((int)puVar9[2] >> 1),puVar9,&uStack_a0,&uStack_70,1);
      puVar9 = *(uint **)(iVar17 + 0xc60);
      if (lVar6 != 0) {
        if ((puVar9[2] & 1) == 0) {
          pcVar10 = (code *)puVar9[1];
          iVar2 = *(int *)(iVar17 + 0xb60);
        }
        else {
          iVar2 = *(int *)(iVar17 + 0xb60);
          pcVar10 = *(code **)((puVar9[1] & 0xfffffffc) + *(int *)(iVar2 + ((int)puVar9[2] >> 1)));
        }
        (*pcVar10)(iVar2 + ((int)puVar9[2] >> 1),puVar9,&uStack_a0,&uStack_70,0);
        return;
      }
    }
    if (puVar9 == (uint *)0x0) {
      uVar11 = *(uint *)(iVar17 + 0xb7c);
    }
    else if ((*puVar9 & 2) == 0) {
      uVar11 = *(uint *)(iVar17 + 0xb7c);
    }
    else {
      lVar6 = FUN_0010f600(param_1);
      if (lVar6 == 0) {
        uVar11 = *(uint *)(iVar17 + 0xb7c);
      }
      else {
        fVar20 = (float)FUN_0010f660();
        fVar21 = (float)FUN_001142b0(*(undefined4 *)(iVar17 + 0xb60));
        if (fVar21 <= fVar20) {
          uVar11 = *(uint *)(iVar17 + 0xb7c);
        }
        else {
          lVar6 = FUN_001137f0(*(undefined4 *)(iVar17 + 0xb60));
          if (0 < lVar6) {
            uVar7 = FUN_0010f648(lVar6);
            puVar4 = (undefined4 *)FUN_00113808(*(undefined4 *)(iVar17 + 0xb60),uVar7);
            FUN_0010c9f8(*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4[4],param_1);
            *(undefined4 *)(iVar17 + 0xce8) = 0;
            goto LAB_00110188;
          }
          uVar11 = *(uint *)(iVar17 + 0xb7c);
        }
      }
    }
  }
  if (((uVar11 & 0x800) != 0) || (*(int *)(iVar17 + 0xce8) < 2)) {
    iStack_68 = 0;
    *(uint *)(iVar17 + 0xb7c) = uVar11 & 0xfffffffb;
    piVar19 = (int *)0x0;
    iVar15 = 0;
    iStack_6c = FUN_0010fea0(param_1);
    do {
      iVar16 = 0;
      iVar18 = 0;
      if (0 < iVar2) {
        do {
          iVar13 = iVar16 * 0x24 + iVar3;
          if (*(int *)(iVar13 + 4) != 0) {
            cVar14 = '\0';
            if (*(int *)(iVar13 + 0x1c) != -1) {
              iVar5 = FUN_00112570(param_1);
              cVar14 = *(char *)(iVar5 + *(int *)(iVar13 + 0x1c) + 1);
            }
            bVar1 = false;
            if (iVar15 == 0) {
              if (cVar14 == '\x02') {
LAB_001102b4:
                bVar1 = true;
              }
              else {
                iVar5 = iVar16 * 0x24 + iVar3;
                iVar13 = *(int *)(iVar5 + 0x10);
                if ((iVar13 != 0) && (0 < *(int *)(iVar13 + 8))) {
                  if (*(int *)(iVar17 + 0x48c) != 0) {
                    lVar6 = FUN_001a1de0();
                    bVar1 = lVar6 != 0;
                  }
                  if (((cVar14 == '\x01') && (*(int *)(iVar17 + 0x48c) != 0)) &&
                     (*(int *)(*(int *)(iVar17 + 0x48c) + 0x180) <
                      *(int *)(*(int *)(iVar5 + 0x10) + 8))) goto LAB_001102b4;
                }
              }
            }
            else {
              bVar1 = cVar14 != '\x02';
            }
            if (!bVar1) {
              FUN_00190128(&uStack_a0);
              iVar13 = iVar16 * 0x24 + iVar3;
              if ((*(uint *)(iVar13 + 8) & 1) == 0) {
                pcVar10 = *(code **)(iVar13 + 4);
                iVar5 = *(int *)(iVar17 + 0xb60);
              }
              else {
                iVar5 = *(int *)(iVar17 + 0xb60);
                pcVar10 = *(code **)((*(uint *)(iVar13 + 4) & 0xfffffffc) +
                                    *(int *)(iVar5 + ((int)*(uint *)(iVar13 + 8) >> 1)));
              }
              iVar13 = iVar16 * 0x24 + iVar3;
              lVar6 = (*pcVar10)(iVar5 + (*(int *)(iVar13 + 8) >> 1),iVar13,&uStack_a0,&uStack_70,1)
              ;
              if ((lVar6 != 0) && (iVar18 < 0x20)) {
                iVar5 = iVar18 * 0x1c;
                iVar18 = iVar18 + 1;
                *(int *)(&DAT_003a9620 + iVar5) = iVar13;
                *(undefined4 *)(iVar5 + 0x3a9634) = uStack_90;
                *(undefined4 *)(&DAT_003a9624 + iVar5) = uStack_a0;
                *(undefined4 *)(iVar5 + 0x3a9628) = uStack_9c;
                *(undefined4 *)(iVar5 + 0x3a962c) = uStack_98;
                *(undefined4 *)(iVar5 + 0x3a9630) = uStack_94;
                *(undefined4 *)(iVar5 + 0x3a9638) = uStack_70;
              }
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar2);
      }
      if (0 < iVar18) {
        iVar16 = FUN_0010f648(iVar18);
        piVar19 = (int *)(&DAT_003a9620 + iVar16 * 0x1c);
        if (*piVar19 == iStack_6c) {
          piVar19 = (int *)0x0;
          iStack_68 = 1;
        }
      }
      if (piVar19 != (int *)0x0) {
        iVar2 = *piVar19;
        if ((*(uint *)(iVar2 + 8) & 1) == 0) {
          pcVar10 = *(code **)(iVar2 + 4);
          iVar3 = *(int *)(iVar17 + 0xb60);
        }
        else {
          iVar3 = *(int *)(iVar17 + 0xb60);
          pcVar10 = *(code **)((*(uint *)(iVar2 + 4) & 0xfffffffc) +
                              *(int *)(iVar3 + ((int)*(uint *)(iVar2 + 8) >> 1)));
        }
        (*pcVar10)(iVar3 + (*(int *)(iVar2 + 8) >> 1),iVar2,piVar19 + 1,piVar19 + 6,0);
        if ((*(uint *)*piVar19 & 1) == 0) {
          FUN_0010ef28(param_1);
          *(int *)(iVar17 + 0xce8) = *(int *)(iVar17 + 0xce8) + 1;
        }
        else {
          *(undefined4 *)(iVar17 + 0xce8) = 0;
        }
        iVar2 = piVar19[6];
        iVar3 = *piVar19;
        goto LAB_00110194;
      }
      iVar15 = iVar15 + 1;
      if ((iStack_68 == 0) || (1 < iVar15)) {
        FUN_00110630(param_1);
        *(undefined4 *)(iVar17 + 0xc0c) = 0;
        *(undefined4 *)(iVar17 + 0xce8) = 0;
        FUN_0010eed8(param_1,0,0);
        uStack_78 = *(undefined4 *)(iVar17 + 0xc08);
        uStack_74 = *(undefined4 *)(iVar17 + 0xc0c);
        uStack_80 = (undefined4)*(undefined8 *)(iVar17 + 0xc00);
        uStack_7c = (undefined4)((ulong)*(undefined8 *)(iVar17 + 0xc00) >> 0x20);
        FUN_0016b010(param_1);
        return;
      }
    } while( true );
  }
  FUN_00110630(param_1);
  *(undefined4 *)(iVar17 + 0xce8) = 0;
LAB_00110188:
  iVar3 = 0;
  iVar2 = 0;
LAB_00110194:
  FUN_0010eed8(param_1,iVar3,iVar2);
  return;
}

