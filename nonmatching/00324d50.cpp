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

s32 FUN_00324d50(...) asm("func_00324d50");
extern undefined *PTR_LAB_0035eae8 asm("D_0035eae8");

// Ghidra decompile of 0x00324d50, wrapped mechanically (ad/fallback.py)

void FUN_00324d50_impl(undefined4 *param_1,int param_2) asm("func_00324d50");
void FUN_00324d50_impl(undefined4 *param_1,int param_2) {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar1;
  *param_1 = &PTR_LAB_0035eae8;
  param_1[2] = uVar2;
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar3;
  param_1[0x11] = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x12] = *(undefined4 *)(param_2 + 0x48);
  param_1[0x13] = uVar2;
  param_1[0x14] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x19] = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x6c);
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  uVar6 = *(undefined4 *)(param_2 + 0x7c);
  uVar5 = *(undefined4 *)(param_2 + 0x80);
  uVar7 = *(undefined4 *)(param_2 + 0x84);
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x1b] = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar4;
  param_1[0x1e] = uVar3;
  param_1[0x1f] = uVar6;
  param_1[0x20] = uVar5;
  param_1[0x21] = uVar7;
  param_1[0x22] = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  param_1[0x28] = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x2a] = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  uVar1 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa4);
  param_1[0x2b] = *(undefined4 *)(param_2 + 0xac);
  param_1[0x23] = uVar2;
  param_1[0x24] = uVar1;
  param_1[0x25] = uVar3;
  param_1[0x26] = uVar4;
  param_1[0x27] = uVar5;
  param_1[0x29] = uVar6;
  return;
}

