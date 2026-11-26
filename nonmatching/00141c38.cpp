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

s32 FUN_00141c38(...) asm("_ZN2dk11OctCollFile13selectPolygonEiRNS_7SAabboxERti");
s32 FUN_00145580(...) asm("func_00145580");
s32 FUN_0031b940(...) asm("func_0031b940");
extern u32 LAB_00141dcc asm("D_00141dcc");

// Ghidra decompile of 0x00141c38, wrapped mechanically (ad/fallback.py)

void FUN_00141c38_impl(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5) asm("_ZN2dk11OctCollFile13selectPolygonEiRNS_7SAabboxERti");
void FUN_00141c38_impl(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5) {
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  short *psVar15;
  
  iVar11 = (int)param_1;
  psVar15 = (short *)(*(int *)(iVar11 + 4) + param_2 * 0x20);
  lVar6 = FUN_00145580(psVar15 + 8,param_3);
  if (lVar6 != 0) {
    uVar2 = psVar15[0xf];
    uVar12 = (uint)(ushort)psVar15[0xe];
    if (uVar12 < uVar2) {
      iVar13 = (uint)(ushort)psVar15[0xe] * 0x14;
      do {
        iVar9 = *(int *)(iVar11 + 8) + iVar13;
        if ((*(char *)(iVar9 + 0x10) != '\0') && (lVar6 = FUN_00145580(iVar9,param_3), lVar6 != 0))
        {
          uVar10 = (uint)*(ushort *)(iVar9 + 0xc);
          uVar3 = *(ushort *)(iVar9 + 0xe);
          if (uVar10 < uVar3) {
            iVar9 = *(int *)(iVar11 + 0xc);
            do {
              iVar9 = iVar9 + uVar10 * 0x10;
              puVar7 = (uint *)(*(int *)(iVar11 + 0x14) + (uint)*(ushort *)(iVar9 + 0xe) * 4);
              if (*(char *)(iVar11 + 0xd0) == '\x01') {
                uVar8 = *puVar7;
                bVar5 = (uVar8 & *(uint *)(iVar11 + 0x40)) != *(uint *)(iVar11 + 0x44);
              }
              else {
                uVar8 = *puVar7;
                bVar5 = (uVar8 & *(uint *)(iVar11 + 0x40)) == *(uint *)(iVar11 + 0x44);
              }
              if (bVar5) {
                bVar5 = false;
                if ((*(char *)(iVar11 + 0xd3) != '\0') && (*(char *)(iVar11 + 0xd2) != '\0')) {
                  bVar5 = (uVar8 & 0xf) == 5;
                }
                if (bVar5) {
                  uVar4 = *(ushort *)(iVar9 + 0xc);
                }
                else {
                  lVar6 = FUN_0031b940(param_1,param_5);
                  if (lVar6 == 0) goto LAB_00141dcc;
                  uVar4 = *(ushort *)(iVar9 + 0xc);
                }
                if ((uVar4 == 0xffff) ||
                   (lVar6 = FUN_00145580(*(int *)(iVar11 + 0x1c) + (uint)uVar4 * 0xc,param_3),
                   lVar6 != 0)) {
                  puVar14 = (ushort *)param_4;
                  if (0x3fe < *puVar14) {
                    return;
                  }
                  *(short *)((uint)*puVar14 * 2 + *(int *)(iVar11 + 0x3c)) = (short)uVar10;
                  *puVar14 = *puVar14 + 1;
                }
              }
LAB_00141dcc:
              uVar10 = uVar10 + 1;
              if ((int)(uint)uVar3 <= (int)uVar10) break;
              iVar9 = *(int *)(iVar11 + 0xc);
            } while( true );
          }
        }
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 0x14;
      } while ((int)uVar12 < (int)(uint)uVar2);
    }
    iVar11 = 0;
    sVar1 = *psVar15;
    while (psVar15 = psVar15 + 1, sVar1 != -1) {
      iVar11 = iVar11 + 1;
      FUN_00141c38(param_1,sVar1,param_3,param_4,param_5);
      if (7 < iVar11) {
        return;
      }
      sVar1 = *psVar15;
    }
  }
  return;
}

