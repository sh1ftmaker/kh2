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

s32 FUN_001386e0(...) asm("func_001386e0");
s32 FUN_00138c68(...) asm("func_00138c68");
s32 FUN_00138d60(...) asm("func_00138d60");
s32 FUN_001391c8(...) asm("func_001391c8");
s32 FUN_00139570(...) asm("func_00139570");
s32 FUN_00139620(...) asm("func_00139620");
s32 FUN_00139660(...) asm("func_00139660");
s32 FUN_00139688(...) asm("func_00139688");
s32 FUN_001396b0(...) asm("func_001396b0");
s32 FUN_001708f8(...) asm("func_001708f8");
s32 FUN_001e09a0(...) asm("func_001e09a0");
s32 FUN_002369a0(...) asm("func_002369a0");
s32 FUN_00236ca8(...) asm("func_00236ca8");
s32 FUN_00239700(...) asm("func_00239700");
s32 FUN_0023aa18(...) asm("func_0023aa18");
s32 FUN_0023aa58(...) asm("func_0023aa58");
s32 FUN_0023aa78(...) asm("func_0023aa78");
s32 FUN_0023aa98(...) asm("func_0023aa98");
s32 FUN_0023c008(...) asm("func_0023c008");
s32 FUN_0023c4b8(...) asm("func_0023c4b8");
s32 FUN_0023eea0(...) asm("func_0023eea0");
s32 FUN_0023ef50(...) asm("func_0023ef50");
s32 FUN_0023f0c8(...) asm("func_0023f0c8");
s32 FUN_0023f1b0(...) asm("func_0023f1b0");
s32 FUN_0023f800(...) asm("func_0023f800");
s32 FUN_0023f848(...) asm("func_0023f848");
s32 FUN_0023f908(...) asm("func_0023f908");
s32 FUN_0023f948(...) asm("func_0023f948");
s32 FUN_0023fa08(...) asm("func_0023fa08");
s32 FUN_002beb90(...) asm("func_002beb90");
s32 FUN_002c1c88(...) asm("func_002c1c88");
s32 FUN_002c5238(...) asm("func_002c5238");
s32 FUN_002c90c8(...) asm("_ZN2dk16WM_GLANDING_INFOC1Ei");
s32 FUN_002c9e90(...) asm("func_002c9e90");
s32 FUN_0031a260(...) asm("func_0031a260");
s32 FUN_0031a838(...) asm("func_0031a838");
extern u32 DAT_00361e00 asm("D_00361e00");
extern u32 DAT_003757d8 asm("D_003757d8");
extern undefined *PTR_FUN_00361e10 asm("D_00361e10");
extern undefined *PTR_LAB_00347e40 asm("D_00347e40");
extern undefined *PTR_LAB_00347e60 asm("D_00347e60");
extern undefined *PTR_LAB_00347f98 asm("D_00347f98");
extern undefined *PTR_LAB_0035eb98 asm("D_0035eb98");

// Ghidra decompile of 0x002c90c8, wrapped mechanically (ad/fallback.py)

void FUN_002c90c8_impl(undefined8 param_1,int param_2) asm("_ZN2dk16WM_GLANDING_INFOC1Ei");
void FUN_002c90c8_impl(undefined8 param_1,int param_2) {
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined1 auStack_b0 [32];
  int aiStack_90 [4];
  undefined4 auStack_80 [4];
  B8 auStack_70;
  int aiStack_68 [2];
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  int iStack_58;
  int *piStack_54;
  
  puVar8 = (undefined4 *)param_1;
  puVar8[3] = 0;
  *puVar8 = &PTR_FUN_00361e10;
  puVar8[6] = 0;
  puVar8[7] = &PTR_LAB_00347f98;
  puStack_60 = puVar8 + 0x2f;
  puStack_5c = puVar8 + 0x9c;
  puVar10 = puVar8 + 0x102;
  iVar12 = 2;
  FUN_0031a838(puVar8 + 10);
  puVar8[7] = &PTR_LAB_0035eb98;
  FUN_002369a0(puVar8 + 0xd);
  FUN_0023c008(puVar8 + 0x13);
  puVar8[0x2f] = &PTR_LAB_00347f98;
  FUN_0031a838(puVar8 + 0x32);
  puVar8[0x2f] = &PTR_LAB_00347e60;
  FUN_00239700(puVar8 + 0x35);
  puStack_60[0x66] = 0;
  puVar8[0x9f] = 0;
  puVar8[0x9c] = &PTR_LAB_00347e60;
  puVar8[0x2f] = &PTR_LAB_00347e40;
  FUN_00239700(puVar8 + 0xa2);
  do {
    puVar10[3] = 0;
    *puVar10 = &PTR_LAB_00347e60;
    iVar12 = iVar12 + -1;
    FUN_00239700(puVar10 + 6);
    puVar10 = puVar10 + 0x66;
  } while (iVar12 != -1);
  puVar10 = puVar8 + 0x234;
  iVar12 = 2;
  do {
    puVar10[3] = 0;
    *puVar10 = &PTR_LAB_00347e60;
    iVar12 = iVar12 + -1;
    FUN_00239700(puVar10 + 6);
    puVar10 = puVar10 + 0x66;
  } while (iVar12 != -1);
  puVar10 = puVar8 + 0x366;
  iVar12 = 2;
  do {
    puVar10[3] = 0;
    *puVar10 = &PTR_LAB_00347e60;
    iVar12 = iVar12 + -1;
    FUN_00239700(puVar10 + 6);
    puVar10 = puVar10 + 0x66;
  } while (iVar12 != -1);
  puVar10 = puVar8 + 0x498;
  iVar12 = 2;
  do {
    iVar11 = 2;
    puVar9 = puVar10;
    do {
      puVar9[3] = 0;
      *puVar9 = &PTR_LAB_00347e60;
      iVar11 = iVar11 + -1;
      FUN_00239700(puVar9 + 6);
      puVar9 = puVar9 + 0x66;
    } while (iVar11 != -1);
    iVar12 = iVar12 + -1;
    puVar10 = puVar10 + 0x132;
  } while (iVar12 != -1);
  puVar10 = puVar8 + 0x82e;
  iVar12 = 2;
  do {
    puVar10[3] = 0;
    *puVar10 = &PTR_LAB_00347e60;
    iVar12 = iVar12 + -1;
    FUN_00239700(puVar10 + 6);
    puVar10 = puVar10 + 0x66;
  } while (iVar12 != -1);
  puVar10 = puVar8 + 7;
  uVar5 = FUN_002beb90();
  uVar2 = FUN_001708f8(uVar5,0xffffffffffffffff);
  puVar8[0x961] = uVar2;
  puVar8[0x962] = param_2;
  piVar14 = aiStack_90;
  DAT_00361e00 = puVar8;
  FUN_0023f800(auStack_b0);
  FUN_0023fa08(auStack_b0,puVar8[0x961]);
  uVar5 = FUN_0023f948(auStack_b0,0);
  uVar6 = FUN_0023f908(auStack_b0,0);
  uVar7 = FUN_002c9e90(param_1,0);
  FUN_0023eea0(puVar10,0x7581,uVar5,uVar6,uVar7,0);
  iVar11 = 0;
  FUN_0023ef50(puVar10);
  uVar5 = FUN_002c9e90(param_1,2);
  FUN_0023f0c8(puVar10,uVar5);
  FUN_00139570(puVar10);
  uVar5 = FUN_0023f1b0(puVar10);
  uVar5 = FUN_0023c4b8(uVar5,1);
  iVar12 = FUN_0023f1b0(puVar10);
  uVar2 = FUN_00236ca8(*(undefined4 *)(iVar12 + 0x28),1);
  puVar8[0x960] = uVar2;
  do {
    iVar11 = iVar11 + 1;
    iVar12 = FUN_001e09a0(0x33bc10,param_2 + -1,iVar11,0);
    *piVar14 = iVar12;
    piVar14 = piVar14 + 1;
  } while (iVar11 < 3);
  iVar12 = 0;
  puVar10 = auStack_80;
  do {
    iVar12 = iVar12 + 1;
    uVar2 = FUN_001e09a0(0x33bc10,param_2 + -1,iVar12,1);
    *puVar10 = uVar2;
    puVar10 = puVar10 + 1;
  } while (iVar12 < 3);
  puVar8[0x963] = 0;
  if (*(char *)(aiStack_90[0] + 0x1e) != '\0') {
    uVar2 = 2;
    if (*(char *)(aiStack_90[2] + 0x1e) == '\0') {
      uVar2 = 1;
    }
    puVar8[0x963] = uVar2;
  }
  uVar6 = FUN_002c1c88(puVar8[0x962]);
  FUN_00138d60(puStack_60,0x7585,uVar5,puVar8[0x960],
               *(undefined2 *)(&DAT_003757d8 + puVar8[0x963] * 2),uVar6,0xc9);
  puStack_60[0x6c] = 2;
  FUN_00139620();
  puStack_60[0x62] = (int)*(short *)(puVar8[0x963] * 2 + 0x3757e8);
  uVar6 = 0x96;
  if (puVar8[0x963] == 0) {
    uVar6 = 0x95;
  }
  FUN_001386e0(puStack_5c,0x7586,uVar5,puVar8[0x960],uVar6,0xc9);
  puStack_5c[99] = puStack_60;
  FUN_001396b0(puStack_5c);
  if (puStack_5c[99] != 0) {
    puStack_5c[100] = 0;
    FUN_001396b0(puStack_5c);
    if (puStack_5c[100] != 0) {
      FUN_0031a260(puStack_5c,0);
    }
  }
  FUN_00139660(puStack_5c);
  FUN_00139688(puStack_5c);
  uVar6 = FUN_0023aa18(puVar8 + 0xa2);
  FUN_00138c68(puStack_5c,uVar6,0);
  FUN_001396b0(puStack_5c);
  iVar12 = FUN_0023aa58(puVar8 + 0xa2);
  puStack_60[0x68] = 0;
  puStack_60[0x67] = -iVar12 / 2;
  if (puVar8[0x963] != 0) {
    iStack_58 = 2;
    iVar12 = 0;
    if (puVar8[0x963] != 1) {
      iStack_58 = 3;
    }
    if (iStack_58 != 0) {
      piStack_54 = aiStack_90;
      iVar11 = 0;
      do {
        puVar10 = puVar8 + iVar11 * 0x66 + 0x102;
        FUN_001386e0(puVar10,0x7587,uVar5,puVar8[0x960],
                     *(undefined2 *)((uint)*(byte *)(*piStack_54 + 0x1b) * 2 + 0x3757f0),0xc9);
        puVar8[iVar11 * 0x66 + 0x165] = puStack_60;
        FUN_001396b0(puVar10);
        if (puVar8[iVar11 * 0x66 + 0x165] != 0) {
          puVar8[iVar11 * 0x66 + 0x166] = 0;
          FUN_001396b0(puVar10);
          if (puVar8[iVar11 * 0x66 + 0x166] != 0) {
            FUN_0031a260(puVar10,0);
          }
        }
        puVar10 = puVar8 + iVar11 * 0x66 + 0x102;
        FUN_00139660(puVar10);
        FUN_00139688(puVar10);
        FUN_00138c68(puVar10,0,iVar12);
        FUN_001396b0(puVar10);
        puVar10 = puVar8 + iVar11 * 0x66 + 0x234;
        if (*(char *)(piStack_54[4] + 0x1e) != '\0') {
          FUN_001386e0(puVar10,0x7587,uVar5,puVar8[0x960],0x78,0xc9);
          puVar8[iVar11 * 0x66 + 0x297] = puStack_60;
          FUN_001396b0(puVar10);
          if (puVar8[iVar11 * 0x66 + 0x297] != 0) {
            puVar8[iVar11 * 0x66 + 0x298] = 0;
            FUN_001396b0(puVar10);
            if (puVar8[iVar11 * 0x66 + 0x298] != 0) {
              FUN_0031a260(puVar10,0);
            }
          }
          puVar10 = puVar8 + iVar11 * 0x66 + 0x234;
          puVar9 = puVar8 + iVar11 * 0x66 + 0x366;
          FUN_00139660(puVar10);
          FUN_00139688(puVar10);
          FUN_00138c68(puVar10,0,iVar12);
          FUN_001396b0(puVar10);
          FUN_001386e0(puVar9,0x7587,uVar5,puVar8[0x960],
                       *(undefined2 *)((uint)*(byte *)(piStack_54[4] + 0x1b) * 2 + 0x3757f0),0xc9);
          puVar8[iVar11 * 0x66 + 0x3c9] = puStack_60;
          FUN_001396b0(puVar9);
          if (puVar8[iVar11 * 0x66 + 0x3c9] != 0) {
            puVar8[iVar11 * 0x66 + 0x3ca] = 0;
            FUN_001396b0(puVar9);
            if (puVar8[iVar11 * 0x66 + 0x3ca] != 0) {
              FUN_0031a260(puVar9,0);
            }
          }
          puVar10 = puVar8 + iVar11 * 0x66 + 0x366;
          FUN_00138c68(puVar10,0x5a,iVar12);
          FUN_00139660(puVar10);
          FUN_00139688(puVar10);
          FUN_001396b0(puVar10);
        }
        iVar3 = FUN_002c5238((int)*(float *)(*piStack_54 + 0x20),3,auStack_70);
        puVar10 = puVar8 + iVar11 * 0x66 + 0x82e;
        FUN_001386e0(puVar10,0x7588,uVar5,puVar8[0x960],0x90,0xc9);
        puVar8[iVar11 * 0x66 + 0x891] = puStack_60;
        FUN_001396b0(puVar10);
        if (puVar8[iVar11 * 0x66 + 0x891] != 0) {
          puVar8[iVar11 * 0x66 + 0x892] = 0;
          FUN_001396b0(puVar10);
          if (puVar8[iVar11 * 0x66 + 0x892] != 0) {
            FUN_0031a260(puVar10,0);
          }
        }
        puVar10 = puVar8 + iVar11 * 0x66 + 0x82e;
        FUN_00139660(puVar10);
        FUN_00139688(puVar10);
        FUN_00138c68(puVar10,0,iVar12);
        FUN_001396b0(puVar10);
        iVar4 = FUN_0023aa98(puVar8 + iVar11 * 0x66 + 0x834);
        if (0 < iVar3) {
          piVar14 = aiStack_68;
          puVar10 = puVar8 + iVar11 * 0x132 + 0x498;
          iVar13 = -iVar4;
          do {
            iVar1 = *piVar14;
            piVar14 = piVar14 + -1;
            FUN_001386e0(puVar10,0x7588,uVar5,puVar8[0x960],iVar1 + 0x86,0xc9);
            puVar10[99] = puStack_60;
            FUN_001396b0(puVar10);
            if (puVar10[99] != 0) {
              puVar10[100] = 0;
              FUN_001396b0(puVar10);
              if (puVar10[100] != 0) {
                FUN_0031a260(puVar10,0);
              }
            }
            iVar3 = iVar3 + -1;
            FUN_00139660(puVar10);
            FUN_00139688(puVar10);
            FUN_00138c68(puVar10,iVar13,iVar12);
            FUN_001396b0(puVar10);
            puVar10 = puVar10 + 0x66;
            iVar13 = iVar13 - iVar4;
          } while (iVar3 != 0);
        }
        piStack_54 = piStack_54 + 1;
        iVar3 = iVar11 + 1;
        iVar11 = FUN_0023aa78(puVar8 + iVar11 * 0x66 + 0x108);
        iVar12 = iVar12 + iVar11;
        iVar11 = iVar3;
      } while (iVar3 < iStack_58);
    }
  }
  FUN_001391c8(param_1,0x7582,0xc9);
  FUN_0023f848(auStack_b0);
  return;
}

