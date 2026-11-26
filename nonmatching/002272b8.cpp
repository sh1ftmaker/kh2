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

s32 FUN_00102448(...) asm("func_00102448");
s32 FUN_001397d8(...) asm("func_001397d8");
s32 FUN_0014aa80(...) asm("func_0014aa80");
s32 FUN_0014abd8(...) asm("func_0014abd8");
s32 FUN_0014ac08(...) asm("func_0014ac08");
s32 FUN_0015cdb0(...) asm("func_0015cdb0");
s32 FUN_0015f278(...) asm("func_0015f278");
s32 FUN_00197800(...) asm("func_00197800");
s32 FUN_00197828(...) asm("func_00197828");
s32 FUN_00224ea0(...) asm("func_00224ea0");
s32 FUN_00224fa0(...) asm("func_00224fa0");
s32 FUN_002253a0(...) asm("func_002253a0");
s32 FUN_00225898(...) asm("func_00225898");
s32 FUN_002272b8(...) asm("_ZN2sa5EVENT10event_ctrlEP4TASK");
s32 FUN_00228378(...) asm("func_00228378");
s32 FUN_0022bc08(...) asm("func_0022bc08");
s32 FUN_0022bef8(...) asm("func_0022bef8");
s32 FUN_0022c530(...) asm("func_0022c530");
s32 FUN_0022c590(...) asm("func_0022c590");
s32 FUN_0022c7c0(...) asm("func_0022c7c0");
s32 FUN_0022c998(...) asm("func_0022c998");
s32 FUN_0022cae8(...) asm("func_0022cae8");
s32 FUN_0022cc38(...) asm("func_0022cc38");
s32 FUN_0022cd48(...) asm("func_0022cd48");
s32 FUN_0022ce00(...) asm("func_0022ce00");
s32 FUN_0022ce50(...) asm("func_0022ce50");
s32 FUN_0022cea0(...) asm("func_0022cea0");
s32 FUN_0022cf60(...) asm("func_0022cf60");
s32 FUN_0022d098(...) asm("func_0022d098");
s32 FUN_0022d1d8(...) asm("func_0022d1d8");
s32 FUN_0022d238(...) asm("func_0022d238");
s32 FUN_0022d288(...) asm("func_0022d288");
s32 FUN_0022d3c8(...) asm("func_0022d3c8");
s32 FUN_0022d598(...) asm("func_0022d598");
s32 FUN_0022d618(...) asm("func_0022d618");
s32 FUN_0022d728(...) asm("func_0022d728");
s32 FUN_0022d778(...) asm("func_0022d778");
s32 FUN_0022d880(...) asm("func_0022d880");
s32 FUN_0022d9b0(...) asm("func_0022d9b0");
s32 FUN_0022dd40(...) asm("func_0022dd40");
s32 FUN_0022dd80(...) asm("func_0022dd80");
s32 FUN_0022e3e8(...) asm("func_0022e3e8");
s32 FUN_0022e468(...) asm("func_0022e468");
s32 FUN_0022e4f0(...) asm("func_0022e4f0");
s32 FUN_0022e5f8(...) asm("func_0022e5f8");
s32 FUN_0022e818(...) asm("func_0022e818");
s32 FUN_0022ea28(...) asm("func_0022ea28");
s32 FUN_0022eb80(...) asm("func_0022eb80");
s32 FUN_0022ee30(...) asm("func_0022ee30");
s32 FUN_0022ef50(...) asm("func_0022ef50");
s32 FUN_0022efb8(...) asm("func_0022efb8");
s32 FUN_0022f018(...) asm("func_0022f018");
s32 FUN_0022f200(...) asm("func_0022f200");
s32 FUN_0022f280(...) asm("func_0022f280");
s32 FUN_0022f308(...) asm("func_0022f308");
s32 FUN_0022f7c0(...) asm("func_0022f7c0");
s32 FUN_002308c8(...) asm("func_002308c8");
s32 FUN_00230b50(...) asm("func_00230b50");
s32 FUN_00230d78(...) asm("func_00230d78");
s32 FUN_00231948(...) asm("func_00231948");
s32 FUN_00232070(...) asm("func_00232070");
s32 FUN_002322b8(...) asm("func_002322b8");
s32 FUN_002328c0(...) asm("func_002328c0");
s32 FUN_00232c88(...) asm("func_00232c88");
s32 FUN_00232d60(...) asm("func_00232d60");
s32 FUN_002332a8(...) asm("func_002332a8");
s32 FUN_00233410(...) asm("func_00233410");
s32 FUN_00233490(...) asm("func_00233490");
extern u32 DAT_0035db10 asm("D_0035db10");
extern u32 DAT_0035db50 asm("D_0035db50");
extern u32 DAT_0035db54 asm("D_0035db54");
extern u32 DAT_0035de24 asm("D_0035de24");
extern u32 DAT_0035de40 asm("D_0035de40");
extern u32 DAT_0035de44 asm("D_0035de44");
extern u32 DAT_0035de55 asm("D_0035de55");
extern u32 DAT_0035de56 asm("D_0035de56");
extern u32 LAB_002273d0 asm("D_002273d0");

// Ghidra decompile of 0x002272b8, wrapped mechanically (ad/fallback.py)

void FUN_002272b8_impl(undefined8 param_1) asm("_ZN2sa5EVENT10event_ctrlEP4TASK");
void FUN_002272b8_impl(undefined8 param_1) {
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  ushort *puVar4;
  int iVar5;
  
  do {
    while (DAT_0035de44 != '\x01') {
      FUN_00102448(param_1,0);
    }
    while (((DAT_0035db10 != 2 || (DAT_0035de24 == '\0')) ||
           (lVar2 = FUN_00197800(param_1), lVar2 == 0))) {
      FUN_00102448(param_1,0);
    }
    FUN_00197828((float)(DAT_0035de40 << 1),param_1);
    FUN_001397d8(0x10);
    lVar2 = FUN_00228378();
    if (lVar2 != 0) {
      FUN_0015f278();
      uVar3 = FUN_0014ac08();
      FUN_0014aa80(uVar3,0,0);
      uVar3 = FUN_0014abd8();
      FUN_0014aa80(uVar3,0,0);
    }
    DAT_0035db10 = 3;
    iVar5 = 0;
    if (DAT_0035de55 == '\x01') {
      FUN_0015cdb0();
    }
LAB_002273d0:
    if ((&DAT_0035db50)[iVar5 * 3] != 0) {
      puVar4 = (ushort *)((&DAT_0035db50)[iVar5 * 3] + (&DAT_0035db54)[iVar5 * 3]);
      uVar1 = *puVar4;
      if (uVar1 == 0) {
        DAT_0035de56 = 1;
        do {
          FUN_00102448(param_1,0);
        } while( true );
      }
      switch(puVar4[1]) {
      case 2:
        FUN_0022f7c0(puVar4,param_1);
      default:
        break;
      case 6:
        FUN_00230d78();
        break;
      case 9:
        FUN_0022dd80(puVar4,param_1);
        break;
      case 10:
        FUN_0022f018(puVar4,param_1);
        break;
      case 0xb:
        FUN_0022e3e8(puVar4,param_1);
        break;
      case 0xc:
        FUN_0022f200(puVar4,param_1);
        break;
      case 0xd:
        FUN_0022ef50(puVar4,param_1);
        break;
      case 0xe:
        FUN_0022efb8(puVar4,param_1);
        break;
      case 0x12:
        FUN_0022cc38(puVar4,param_1);
        break;
      case 0x15:
        FUN_0022d880(puVar4,param_1);
        break;
      case 0x16:
        FUN_0022d618(puVar4,param_1);
        break;
      case 0x17:
        FUN_0022cd48(puVar4,param_1);
        break;
      case 0x18:
        FUN_0022cea0(puVar4,param_1);
        break;
      case 0x19:
        FUN_0022f280(puVar4,param_1);
        break;
      case 0x1a:
        FUN_0022f308(puVar4,param_1);
        break;
      case 0x1b:
        FUN_00231948(puVar4,param_1);
        break;
      case 0x1c:
        FUN_0022e468(puVar4,param_1);
        break;
      case 0x1f:
        FUN_002308c8();
        break;
      case 0x20:
        FUN_0022d3c8(puVar4,param_1);
        break;
      case 0x21:
        FUN_0022e5f8(puVar4,param_1);
        break;
      case 0x22:
        FUN_0022d728(puVar4,param_1);
        break;
      case 0x27:
        FUN_0022cf60(puVar4,param_1);
        break;
      case 0x28:
        FUN_0022e818(puVar4,param_1);
        break;
      case 0x29:
        FUN_0022ea28(puVar4,param_1);
        break;
      case 0x2b:
        FUN_00232c88(puVar4,param_1);
        break;
      case 0x2c:
        FUN_002332a8(puVar4,param_1);
        break;
      case 0x2d:
        FUN_0022d9b0(puVar4,param_1);
        break;
      case 0x2e:
        FUN_002253a0(puVar4,param_1);
        break;
      case 0x30:
        FUN_00225898(puVar4,param_1);
        break;
      case 0x31:
        FUN_00232070(puVar4,param_1);
        break;
      case 0x33:
        FUN_00224fa0(puVar4,param_1);
        break;
      case 0x34:
        FUN_00224ea0(puVar4,param_1);
        break;
      case 0x35:
        FUN_0022cae8(puVar4,param_1);
        break;
      case 0x36:
        FUN_0022eb80(puVar4,param_1);
        break;
      case 0x37:
        FUN_0022ee30(puVar4,param_1);
        break;
      case 0x3a:
        FUN_0022e4f0(puVar4,param_1);
        break;
      case 0x3b:
        FUN_0022c998(puVar4,param_1);
        break;
      case 0x3c:
        FUN_0022c590(puVar4,param_1);
        break;
      case 0x3d:
        FUN_0022c530(puVar4,param_1);
        break;
      case 0x3f:
        FUN_0022dd40(puVar4,param_1);
        break;
      case 0x40:
        FUN_0022d598(puVar4,param_1);
        break;
      case 0x41:
        FUN_0022ce00(puVar4,param_1);
        break;
      case 0x42:
        FUN_00232d60(puVar4,param_1);
        break;
      case 0x43:
        FUN_0022ce50(puVar4,param_1);
        break;
      case 0x44:
        FUN_0022bc08(puVar4,param_1);
        break;
      case 0x45:
        FUN_00233410(puVar4,param_1);
        break;
      case 0x47:
        FUN_00230b50(puVar4,param_1);
        break;
      case 0x48:
        FUN_0022d098(puVar4,param_1);
        break;
      case 0x49:
        FUN_0022d1d8(puVar4,param_1);
        break;
      case 0x4a:
        FUN_002322b8(puVar4,param_1);
        break;
      case 0x4b:
        FUN_0022d238(puVar4,param_1);
        break;
      case 0x4d:
        FUN_0022d288(puVar4,param_1);
        break;
      case 0x4f:
        FUN_00233490(puVar4,param_1);
        break;
      case 0x50:
        FUN_0022bef8(puVar4,param_1);
        break;
      case 0x51:
        FUN_0022c7c0(puVar4,param_1);
        break;
      case 0x52:
        FUN_0022d778(puVar4,param_1);
        break;
      case 0x53:
        FUN_002328c0(puVar4,param_1);
      }
      (&DAT_0035db54)[iVar5 * 3] = (&DAT_0035db54)[iVar5 * 3] + (uint)uVar1;
    }
  } while (DAT_0035db10 != 3);
  iVar5 = iVar5 + 1;
  if (0 < iVar5) {
    iVar5 = 0;
  }
  goto LAB_002273d0;
}

