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
#define _GHIDRA_BYTES(NAME, N, AL) struct __attribute__((aligned(AL))) NAME {     u8 b[N];     NAME() {}     template <class T> NAME(const T &v) { *(T*)b = v; }     template <class T> NAME &operator=(const T &v) { *(T*)b = v; return *this; }     template <class T> bool operator==(const T &o) const { return (s64)*this == (s64)o; }     template <class T> bool operator!=(const T &o) const { return (s64)*this != (s64)o; }     template <class T> operator T*() const { return (T*)b; }     operator s64() const { return *(s64*)b; }     u8 &operator[](int i) { return b[i]; }     u8 *operator+(int o) const { return (u8*)b + o; } };
_GHIDRA_BYTES(Q16, 16, 16)
_GHIDRA_BYTES(B12, 12, 4)
_GHIDRA_BYTES(B8, 8, 8)
_GHIDRA_BYTES(B4, 4, 4)
// Untyped global cell (used for DAT_ tokens on the second attempt): Ghidra types each DAT_
// by its use site (uint*, char, float, ...); AnyCell reads/writes as whatever that is, and
// arithmetic / deref / index / address-of on it yield further untyped values.
struct AnyCell;
struct AnyPtr {
    void *p;
    template <class T> operator T*() const { return (T*)p; }
    AnyCell &operator*() const { return *(AnyCell*)p; }
    AnyCell &operator[](int i) const;
    operator s64() const { return (s64)(u32)(unsigned long)p; }
    AnyPtr operator+(s64 o) const { AnyPtr r; r.p = (u8*)p + o; return r; }
    AnyPtr operator-(s64 o) const { AnyPtr r; r.p = (u8*)p - o; return r; }
    template <class T> bool operator==(T *q) const { return p == (void*)q; }
    template <class T> bool operator!=(T *q) const { return p != (void*)q; }
    bool operator==(s64 v) const { return (s64)*this == v; }
    bool operator!=(s64 v) const { return (s64)*this != v; }
};
struct AnyCell {
    u32 w;
    template <class T> operator T() const { return *(const T*)this; }
    operator s64() const { return *(const s32*)this; }
    operator Q16() const { return *(const Q16*)this; }
    operator B12() const { return *(const B12*)this; }
    operator B8() const { return *(const B8*)this; }
    operator B4() const { return *(const B4*)this; }
    template <class T> AnyCell &operator=(const T &v) { *(T*)this = v; return *this; }
    AnyCell &operator=(const AnyCell &v) { w = v.w; return *this; }
    template <class T> bool operator==(T *p) const { return *(T* const*)this == p; }
    template <class T> bool operator!=(T *p) const { return *(T* const*)this != p; }
    bool operator==(s64 v) const { return *(const s32*)this == v; }
    bool operator!=(s64 v) const { return *(const s32*)this != v; }
    bool operator==(const AnyCell &o) const { return w == o.w; }
    bool operator!=(const AnyCell &o) const { return w != o.w; }
    bool operator<(const AnyCell &o) const { return (s32)w < (s32)o.w; }
    bool operator>(const AnyCell &o) const { return (s32)w > (s32)o.w; }
    bool operator<=(const AnyCell &o) const { return (s32)w <= (s32)o.w; }
    bool operator>=(const AnyCell &o) const { return (s32)w >= (s32)o.w; }
    AnyCell &operator*() const { return **(AnyCell* const*)this; }
    AnyCell &operator[](int i) const { return (*(AnyCell* const*)this)[i]; }
    AnyPtr operator&() const { AnyPtr r; r.p = (void*)this; return r; }
    AnyCell operator+(s64 v) const { AnyCell r; r.w = w + (u32)v; return r; }
    AnyCell operator-(s64 v) const { AnyCell r; r.w = w - (u32)v; return r; }
    AnyCell operator*(s64 v) const { AnyCell r; r.w = w * (u32)v; return r; }
    AnyCell operator&(s64 v) const { AnyCell r; r.w = w & (u32)v; return r; }
    AnyCell operator|(s64 v) const { AnyCell r; r.w = w | (u32)v; return r; }
    AnyCell operator^(s64 v) const { AnyCell r; r.w = w ^ (u32)v; return r; }
    AnyCell operator<<(s64 v) const { AnyCell r; r.w = w << (u32)v; return r; }
    AnyCell operator>>(s64 v) const { AnyCell r; r.w = w >> (u32)v; return r; }
    template <class T> AnyCell &operator+=(const T &v) { w += (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator-=(const T &v) { w -= (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator|=(const T &v) { w |= (u32)(s64)v; return *this; }
    template <class T> AnyCell &operator&=(const T &v) { w &= (u32)(s64)v; return *this; }
    AnyCell &operator++() { ++w; return *this; }
    AnyCell &operator--() { --w; return *this; }
    AnyCell operator++(int) { AnyCell r = *this; ++w; return r; }
    AnyCell operator--(int) { AnyCell r = *this; --w; return r; }
    AnyCell operator()() const { return *this; }
    template <class A> AnyCell operator()(const A &) const { return *this; }
    template <class A, class B> AnyCell operator()(const A &, const B &) const { return *this; }
    template <class A, class B, class C> AnyCell operator()(const A &, const B &, const C &) const { return *this; }
    template <class A, class B, class C, class D> AnyCell operator()(const A &, const B &, const C &, const D &) const { return *this; }
    template <class A, class B, class C, class D, class E> AnyCell operator()(const A &, const B &, const C &, const D &, const E &) const { return *this; }
    template <class A, class B, class C, class D, class E, class F> AnyCell operator()(const A &, const B &, const C &, const D &, const E &, const F &) const { return *this; }
};
inline AnyCell &AnyPtr::operator[](int i) const { return ((AnyCell*)p)[i]; }
template <class T> inline bool operator==(T *p, const AnyCell &c) { return c == p; }
template <class T> inline bool operator!=(T *p, const AnyCell &c) { return c != p; }
template <class T> inline bool operator==(T *p, const AnyPtr &c) { return c == p; }
template <class T> inline bool operator!=(T *p, const AnyPtr &c) { return c != p; }
inline bool operator==(s64 v, const AnyCell &c) { return c == v; }
inline bool operator!=(s64 v, const AnyCell &c) { return c != v; }
inline bool operator<(const AnyCell &c, s64 v) { return (s64)c < v; }
inline bool operator>(const AnyCell &c, s64 v) { return (s64)c > v; }
inline bool operator<=(const AnyCell &c, s64 v) { return (s64)c <= v; }
inline bool operator>=(const AnyCell &c, s64 v) { return (s64)c >= v; }
inline bool operator<(s64 v, const AnyCell &c) { return v < (s64)c; }
inline bool operator>(s64 v, const AnyCell &c) { return v > (s64)c; }
inline bool operator<=(s64 v, const AnyCell &c) { return v <= (s64)c; }
inline bool operator>=(s64 v, const AnyCell &c) { return v >= (s64)c; }
typedef u8 BADSPACEBASE;

// Generic stand-in result for Ghidra intrinsics (_lqc2, _vadd..., CONCAT44, SUB168, ...):
// converts to whatever the use site needs. Mechanical, never a match, always compiles.
struct AnyVal {
    template <class T> operator T() const { T t; return t; }
    operator s64() const { return 0; }
    template <class T> bool operator==(const T &) const { return false; }
    template <class T> bool operator!=(const T &) const { return false; }
    template <class T> bool operator<(const T &) const { return false; }
    template <class T> bool operator>(const T &) const { return false; }
    operator Q16() const { Q16 q; return q; }
    operator B12() const { B12 q; return q; }
    operator B8() const { B8 q; return q; }
    operator B4() const { B4 q; return q; }
};
#define _GHIDRA_ANY(F) static inline AnyVal F() { AnyVal r; return r; } template <class A> static inline AnyVal F(const A &) { AnyVal r; return r; } template <class A, class B> static inline AnyVal F(const A &, const B &) { AnyVal r; return r; } template <class A, class B, class C> static inline AnyVal F(const A &, const B &, const C &) { AnyVal r; return r; } template <class A, class B, class C, class D> static inline AnyVal F(const A &, const B &, const C &, const D &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E, class G> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &, const G &) { AnyVal r; return r; }

s32 FUN_00100aa0(...) asm("func_00100aa0");
s32 FUN_00100b70(...) asm("func_00100b70");
s32 FUN_00100c40(...) asm("func_00100c40");
s32 FUN_00100ec8(...) asm("func_00100ec8");
s32 FUN_00101050(...) asm("func_00101050");
s32 FUN_00101848(...) asm("func_00101848");
s32 FUN_00101b98(...) asm("func_00101b98");
s32 FUN_002fd160(...) asm("func_002fd160");
s32 FUN_002fd3e8(...) asm("func_002fd3e8");
s32 FUN_002fd408(...) asm("func_002fd408");
extern u32 LAB_00100a78 asm("D_00100a78");
extern u32 LAB_00101934 asm("D_00101934");
extern u32 LAB_00101a28 asm("D_00101a28");

// Ghidra decompile of 0x00101848, wrapped mechanically (ad/fallback.py)

void FUN_00101848_impl(undefined8 param_1) asm("func_00101848");
void FUN_00101848_impl(undefined8 param_1) {
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int iVar13;
  undefined4 *puVar14;
  code *pcVar15;
  undefined4 *puStack_70;
  int iStack_6c;
  int iStack_60;
  
  iVar6 = (int)param_1;
  uVar12 = (ulong)(int)((uint)(*(ulong *)(iVar6 + 0x10) >> 0xb) & 0x1fffff);
  if (uVar12 == 0) {
    if ((*(ulong *)(iVar6 + 0x10) >> 1 & 1) == 0) {
      uVar12 = FUN_00100ec8(param_1,*(undefined4 *)(iVar6 + 0xc));
    }
    else {
      piVar9 = *(int **)(iVar6 + 0xc);
      iVar4 = *piVar9;
      uVar7 = 0;
      while (iVar4 != 0) {
        iVar4 = FUN_00100ec8(param_1,*piVar9);
        piVar9 = piVar9 + 1;
        uVar12 = (ulong)((int)uVar7 + iVar4);
        uVar7 = uVar12;
        iVar4 = *piVar9;
      }
    }
    uVar8 = *(ulong *)(iVar6 + 0x10);
    uVar7 = uVar8 & 0xffffffff000007ff | (uVar12 & 0x1fffff) << 0xb;
    *(ulong *)(iVar6 + 0x10) = uVar7;
    if ((long)(int)((uint)(uVar7 >> 0xb) & 0x1fffff) != uVar12) {
      *(ulong *)(iVar6 + 0x10) = uVar8 & 0xffffffff000007ff;
    }
    bVar2 = false;
    if (uVar12 != 0) goto LAB_00101934;
  }
  else {
LAB_00101934:
    iVar4 = (int)uVar12 * 4 + 8;
    lVar5 = FUN_002fd3e8(iVar4);
    puStack_70 = (undefined4 *)lVar5;
    if (lVar5 == 0) {
      bVar2 = false;
    }
    else {
      puStack_70[1] = 0;
      lVar5 = FUN_002fd3e8(iVar4);
      iStack_6c = (int)lVar5;
      if (lVar5 != 0) {
        *(undefined4 *)(iStack_6c + 4) = 0;
      }
      bVar2 = true;
    }
  }
  if (bVar2) {
    if ((*(ulong *)(iVar6 + 0x10) >> 1 & 1) == 0) {
      FUN_00101050(param_1,&puStack_70,*(undefined4 *)(iVar6 + 0xc));
    }
    else {
      piVar9 = *(int **)(iVar6 + 0xc);
      if (*piVar9 != 0) {
        iVar4 = *piVar9;
        while( true ) {
          FUN_00101050(param_1,&puStack_70,iVar4);
          piVar9 = piVar9 + 1;
          if (*piVar9 == 0) break;
          iVar4 = *piVar9;
        }
      }
    }
    if (puStack_70 == (undefined4 *)0x0) {
      uVar7 = *(ulong *)(iVar6 + 0x10);
    }
    else {
      if ((long)(int)puStack_70[1] != uVar12) goto LAB_00101a28;
      uVar7 = *(ulong *)(iVar6 + 0x10);
    }
    if ((uVar7 >> 2 & 1) == 0) {
      if ((uVar7 >> 3 & 0xff) == 0) {
        pcVar15 = (code *)&LAB_00100a78;
      }
      else {
        pcVar15 = FUN_00100aa0;
      }
    }
    else {
      pcVar15 = FUN_00100b70;
    }
    if (iStack_6c == 0) {
      FUN_00100c40(param_1,pcVar15,puStack_70);
    }
    else {
      FUN_00101b98(param_1,pcVar15);
      if ((long)(puStack_70[1] + *(int *)(iStack_6c + 4)) != uVar12) {
LAB_00101a28:
                    /* WARNING: Subroutine does not return */
        FUN_002fd160();
      }
      FUN_00100c40(param_1,pcVar15);
      puVar3 = puStack_70;
      iStack_60 = iStack_6c;
      iVar4 = *(int *)(iStack_6c + 4);
      if (iVar4 != 0) {
        iVar13 = puStack_70[1];
        puVar14 = (undefined4 *)(iVar4 * 4 + iStack_6c + 8);
        do {
          iVar4 = iVar4 + -1;
          puVar14 = puVar14 + -1;
          uVar1 = *puVar14;
          puVar10 = puVar3 + iVar13;
          puVar11 = puVar3 + iVar4 + iVar13 + 2;
          while ((iVar13 != 0 && (lVar5 = (*pcVar15)(param_1,puVar10[1],uVar1), 0 < lVar5))) {
            iVar13 = iVar13 + -1;
            *puVar11 = puVar10[1];
            puVar10 = puVar10 + -1;
            puVar11 = puVar11 + -1;
          }
          puVar3[iVar13 + iVar4 + 2] = uVar1;
        } while (iVar4 != 0);
        puVar3[1] = puVar3[1] + *(int *)(iStack_60 + 4);
      }
      FUN_002fd408(iStack_6c);
    }
    *puStack_70 = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 **)(iVar6 + 0xc) = puStack_70;
    *(ulong *)(iVar6 + 0x10) = *(ulong *)(iVar6 + 0x10) | 1;
  }
  return;
}

