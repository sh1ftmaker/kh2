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

s32 FUN_00138c10(...) asm("func_00138c10");
s32 FUN_00139d78(...) asm("func_00139d78");
s32 FUN_00276638(...) asm("func_00276638");
s32 FUN_002766d0(...) asm("func_002766d0");
s32 FUN_00287bc0(...) asm("func_00287bc0");
s32 FUN_002891e8(...) asm("func_002891e8");
s32 FUN_0028b040(...) asm("func_0028b040");
s32 FUN_00294000(...) asm("func_00294000");
s32 FUN_002943b0(...) asm("func_002943b0");
s32 FUN_0029eaa8(...) asm("_ZN2Tz5JmDic13UpdateNewMarkEv");
s32 FUN_002a9d68(...) asm("func_002a9d68");
s32 FUN_002aa048(...) asm("func_002aa048");
extern u32 DAT_0035f200 asm("D_0035f200");
extern u32 DAT_0035f5ac asm("D_0035f5ac");

// Ghidra decompile of 0x0029eaa8, wrapped mechanically (ad/fallback.py)

void FUN_0029eaa8_impl(void) asm("_ZN2Tz5JmDic13UpdateNewMarkEv");
void FUN_0029eaa8_impl(void) {
  short sVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  iVar3 = FUN_002a9d68();
  iVar4 = FUN_002766d0();
  if (*(char *)(DAT_0035f5ac + 5) != '\0') {
    iVar5 = FUN_00294000(3);
    lVar7 = FUN_00287bc0();
    switch((int)lVar7) {
    case 0xf:
    case 0x12:
    case 0x15:
      iVar6 = FUN_0028b040(DAT_0035f200);
      break;
    case 0x10:
    case 0x13:
    case 0x16:
      iVar6 = FUN_00276638(0xf);
      break;
    default:
      goto switchD_0029eb1c_caseD_11;
    }
    sVar1 = *(short *)(iVar6 * 2 + DAT_0035f5ac + 8);
    lVar2 = FUN_002943b0(iVar5 + 0x10 + sVar1 * 0x24);
    if (lVar2 != 0) {
      if ((*(uint *)(((uint)(int)sVar1 >> 5) * 4 + iVar3) & 1 << ((int)sVar1 & 0x1fU)) != 0) {
        return;
      }
      FUN_002aa048(sVar1);
      if (lVar7 != 0x12) {
        if (lVar7 < 0x13) {
          if (lVar7 != 0xf) {
            return;
          }
        }
        else if (lVar7 != 0x15) {
          return;
        }
      }
      iVar3 = FUN_002891e8(DAT_0035f200);
      iVar3 = iVar4 + iVar3 * 0x198 + 0xa998;
      lVar7 = FUN_00139d78(iVar3);
      if (lVar7 != 0) {
        FUN_00138c10(iVar3,0x5d);
        return;
      }
      return;
    }
  }
switchD_0029eb1c_caseD_11:
  return;
}

