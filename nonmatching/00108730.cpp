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

s32 FUN_00106a18(...) asm("func_00106a18");
s32 FUN_001070a8(...) asm("func_001070a8");
s32 FUN_00108730(...) asm("_ZN2kn9DrawParam9setPacketEPNS_16Vif1PacketBufferE");
s32 FUN_0010a8e0(...) asm("func_0010a8e0");
s32 FUN_0010aba8(...) asm("func_0010aba8");
s32 FUN_00133bb8(...) asm("func_00133bb8");
extern u32 DAT_00340eb0 asm("D_00340eb0");
extern u32 DAT_00340f18 asm("D_00340f18");
extern u32 DAT_00340f1c asm("D_00340f1c");
extern u32 DAT_00340f28 asm("D_00340f28");
extern u32 DAT_00340f2c asm("D_00340f2c");
extern u32 DAT_0036a170 asm("D_0036a170");
extern u32 DAT_0036a174 asm("D_0036a174");
extern u32 DAT_0036a178 asm("D_0036a178");
extern u32 DAT_0036a17c asm("D_0036a17c");
extern u32 DAT_01000404 asm("D_01000404");
extern u32 DAT_11000000 asm("D_11000000");
extern u32 LAB_00108818 asm("D_00108818");
extern undefined *PTR_DAT_00340f10 asm("D_00340f10");
extern undefined *PTR_DAT_00340f14 asm("D_00340f14");
extern undefined *PTR_DAT_00340f20 asm("D_00340f20");
extern undefined *PTR_DAT_00340f24 asm("D_00340f24");

// Ghidra decompile of 0x00108730, wrapped mechanically (ad/fallback.py)

ulong * FUN_00108730_impl(uint *param_1,undefined8 param_2) asm("_ZN2kn9DrawParam9setPacketEPNS_16Vif1PacketBufferE");
ulong * FUN_00108730_impl(uint *param_1,undefined8 param_2) {
  byte bVar1;
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong *puVar10;
  undefined4 uVar11;
  
  puVar2 = (undefined4 *)FUN_00133bb8(param_2,0xc,0x11000000,0x13000000);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = &DAT_01000404;
  puVar10 = (ulong *)(puVar2 + 4);
  puVar2[3] = 0x6c0a4000;
  puVar2[0x28] = in_zero_lo;
  puVar2[0x29] = in_zero_hi;
  puVar2[0x2a] = in_zero_udw;
  puVar2[0x2b] = in_register_0000000c;
  puVar2[0x2c] = 0x14000000;
  puVar2[0x2d] = &DAT_11000000;
  puVar2[0x2f] = 0;
  puVar2[0x2e] = 0x13000000;
  uVar9 = DAT_00340f28;
  uVar11 = DAT_00340f2c;
  puVar6 = PTR_DAT_00340f20;
  puVar8 = PTR_DAT_00340f24;
  if (param_1[9] == 0) {
    uVar9 = DAT_00340f18;
    uVar11 = DAT_00340f1c;
    puVar6 = PTR_DAT_00340f10;
    puVar8 = PTR_DAT_00340f14;
  }
  *(undefined **)puVar10 = puVar6;
  puVar2[5] = puVar8;
  puVar2[6] = uVar9;
  puVar2[7] = uVar11;
  uVar5 = *puVar10 & 0xffefffffffffffff;
  *puVar10 = uVar5;
  if (DAT_00340eb0 != '\x01') {
    lVar4 = FUN_0010aba8();
    if (lVar4 != 7) {
      uVar7 = (uint)(byte)param_1[1];
      goto LAB_00108818;
    }
    if ((*param_1 & 2) == 0) {
      uVar7 = (uint)(byte)param_1[1];
      goto LAB_00108818;
    }
    uVar5 = *puVar10;
  }
  *puVar10 = uVar5 & 0xfc007fffffffffff | (uVar5 >> 0x2f & 0x7ff | 0x20) << 0x2f;
  uVar7 = (uint)(byte)param_1[1];
LAB_00108818:
  puVar2[8] = uVar7;
  puVar2[9] = (uint)*(byte *)((int)param_1 + 5);
  puVar2[10] = (uint)*(byte *)((int)param_1 + 6);
  puVar2[0xb] = (uint)*(byte *)((int)param_1 + 7);
  if ((*param_1 & 2) == 0) {
    FUN_0010a8e0(puVar2 + 0xc);
  }
  else {
    puVar2[0xc] = 0;
    bVar1 = *(byte *)((int)param_1 + 0xb);
    puVar2[0xe] = 0;
    uVar9 = DAT_0036a170;
    puVar2[0xd] = (float)bVar1;
    puVar2[0xf] = uVar9;
  }
  uVar9 = DAT_0036a174;
  uVar3 = FUN_00106a18(1);
  puVar2[0x10] = uVar9;
  puVar2[0x11] = uVar9;
  puVar2[0x12] = DAT_0036a178;
  uVar11 = DAT_0036a17c;
  puVar2[0x13] = param_1[8];
  puVar2[0x15] = uVar11;
  puVar2[0x14] = uVar11;
  uVar11 = FUN_001070a8(uVar3);
  puVar2[0x17] = uVar9;
  puVar2[0x16] = uVar11;
  return puVar10;
}

