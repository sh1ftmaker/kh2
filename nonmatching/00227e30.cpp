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
s32 FUN_00170888(...) asm("func_00170888");
s32 FUN_00224b60(...) asm("func_00224b60");
s32 FUN_00224d48(...) asm("func_00224d48");
s32 FUN_00225328(...) asm("func_00225328");
s32 FUN_00225788(...) asm("func_00225788");
s32 FUN_00226050(...) asm("func_00226050");
s32 FUN_00226090(...) asm("func_00226090");
s32 FUN_00227e30(...) asm("_ZN2sa5EVENT10event_fileEP4TASK");
s32 FUN_0022ba08(...) asm("func_0022ba08");
s32 FUN_0022c9f0(...) asm("func_0022c9f0");
s32 FUN_0022d358(...) asm("func_0022d358");
s32 FUN_0022d3a8(...) asm("func_0022d3a8");
s32 FUN_0022d3b8(...) asm("func_0022d3b8");
s32 FUN_0022f528(...) asm("func_0022f528");
s32 FUN_00230838(...) asm("func_00230838");
s32 FUN_00230878(...) asm("func_00230878");
s32 FUN_00231928(...) asm("func_00231928");
s32 FUN_00232100(...) asm("func_00232100");
s32 FUN_00232110(...) asm("func_00232110");
s32 FUN_00232398(...) asm("func_00232398");
s32 FUN_00232a48(...) asm("func_00232a48");
extern u32 DAT_0035db18 asm("D_0035db18");
extern u32 DAT_0035db50 asm("D_0035db50");
extern u32 DAT_0035db58 asm("D_0035db58");
extern u32 DAT_0035dd04 asm("D_0035dd04");
extern u32 DAT_0035de24 asm("D_0035de24");
extern u32 DAT_0035de55 asm("D_0035de55");
extern u32 LAB_00227f2c asm("D_00227f2c");

// Ghidra decompile of 0x00227e30, wrapped mechanically (ad/fallback.py)

void FUN_00227e30_impl(undefined8 param_1) asm("_ZN2sa5EVENT10event_fileEP4TASK");
void FUN_00227e30_impl(undefined8 param_1) {
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  do {
    iVar4 = 0;
    iVar3 = 0;
    do {
      if ((&DAT_0035db50)[iVar3 * 3] == 0) goto LAB_00227f2c;
      puVar2 = (ushort *)((&DAT_0035db50)[iVar3 * 3] + (&DAT_0035db58)[iVar3 * 3]);
      uVar1 = *puVar2;
      iVar4 = iVar4 + 1;
      if (uVar1 == 0) {
        DAT_0035dd04 = 0;
        if (DAT_0035db18 != 0) {
          FUN_00226090();
          FUN_00170888(param_1);
        }
        FUN_00224d48();
        DAT_0035de24 = 1;
        do {
          FUN_00102448(param_1,0);
        } while( true );
      }
      switch(puVar2[1]) {
      default:
        goto switchD_00227ef8_caseD_0;
      case 1:
        FUN_0022f528(puVar2,param_1);
        goto switchD_00227ef8_caseD_0;
      case 8:
        FUN_0022d3b8();
        break;
      case 0xf:
        FUN_0022d358(param_1);
        break;
      case 0x10:
        FUN_0022d3a8(puVar2,param_1);
        break;
      case 0x13:
        FUN_00231928();
        DAT_0035de55 = 1;
switchD_00227ef8_caseD_0:
        break;
      case 0x1d:
        FUN_00230838();
        break;
      case 0x1e:
        FUN_00230878();
        break;
      case 0x23:
        FUN_00232398();
        break;
      case 0x24:
        FUN_00226050();
        break;
      case 0x2a:
        FUN_00232a48(puVar2,param_1);
        break;
      case 0x2e:
        FUN_00225328(puVar2,param_1);
        break;
      case 0x2f:
        FUN_00225788(puVar2,param_1);
        break;
      case 0x32:
        FUN_00224b60(puVar2,param_1);
        break;
      case 0x44:
        FUN_0022ba08(puVar2,param_1);
        break;
      case 0x46:
        FUN_00232110(puVar2,param_1);
        break;
      case 0x4c:
        FUN_00232100(puVar2,param_1);
        break;
      case 0x4e:
        FUN_0022c9f0();
      }
      (&DAT_0035db58)[iVar3 * 3] = (&DAT_0035db58)[iVar3 * 3] + (uint)uVar1;
LAB_00227f2c:
      iVar3 = iVar3 + 1;
    } while (iVar3 < 1);
    if (iVar4 == 0) {
      FUN_00102448(param_1,0);
    }
  } while( true );
}

