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

s32 FUN_00308a80(...) asm("func_00308a80");
s32 FUN_00309d60(...) asm("func_00309d60");
s32 FUN_00309e50(...) asm("func_00309e50");
s32 FUN_0030a2d0(...) asm("func_0030a2d0");
s32 FUN_0030a300(...) asm("func_0030a300");
s32 FUN_0030a3f8(...) asm("func_0030a3f8");
s32 FUN_0030b470(...) asm("func_0030b470");
extern u32 DAT_003660e0 asm("D_003660e0");
extern u32 DAT_00366160 asm("D_00366160");
extern u32 DAT_00366164 asm("D_00366164");
extern u32 DAT_00366174 asm("D_00366174");
extern u32 DAT_01e37248 asm("D_01e37248");
extern u32 DAT_01e37280 asm("D_01e37280");
extern u32 DAT_01e37284 asm("D_01e37284");
extern u32 DAT_01e37288 asm("D_01e37288");
extern u32 DAT_01e3728c asm("D_01e3728c");
extern u32 DAT_01e37290 asm("D_01e37290");
extern u32 DAT_01e37694 asm("D_01e37694");
extern u32 DAT_01e37698 asm("D_01e37698");
extern u32 DAT_01e3769c asm("D_01e3769c");
extern u32 DAT_21e37ec0 asm("D_21e37ec0");
extern u32 LAB_0030b610 asm("D_0030b610");
extern AnyCell s_SceStdioIoctlSema_00378218 asm("D_00378218");
s32 CreateSema(...) asm("func_00305620");
s32 DeleteSema(...) asm("func_00305630");
s32 SignalSema(...) asm("func_00305640");
s32 WaitSema(...) asm("func_00305660");

// Ghidra decompile of 0x0030b470, wrapped mechanically (ad/fallback.py)

undefined4 FUN_0030b470_impl(undefined8 param_1,long param_2,undefined8 *param_3) asm("func_0030b470");
undefined4 FUN_0030b470_impl(undefined8 param_1,long param_2,undefined8 *param_3) {
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  B4 auStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  char *pcStack_9c;
  undefined4 auStack_90 [4];
  
  lVar2 = FUN_00309e50();
  FUN_0030a2d0(5);
  DAT_01e37248 = param_3;
  if (DAT_00366164 == 0) {
    FUN_0030a3f8();
  }
  if ((lVar2 == 0) || (puVar9 = (undefined4 *)lVar2, puVar9[1] == 0)) {
    FUN_0030a300();
    return 0xfffffff7;
  }
  DAT_01e37694 = 0;
  DAT_01e37698 = 0;
  if (param_2 == 2) {
    *(undefined4 *)param_3 = *(undefined4 *)(DAT_00366160 * 0x440 + 0x1e37f10U | 0x20000000);
  }
  else if (param_2 < 3) {
    if (param_2 != 1) {
      DAT_01e3728c = *puVar9;
LAB_0030b610:
      (*(AnyCell*)((u8*)&DAT_01e37290 + 0)) = (undefined4)param_2;
      if (param_3 == (undefined8 *)0x0) {
        DAT_01e3769c = 0;
      }
      else {
        puVar6 = (undefined8 *)((int)&DAT_01e37290 + 4);
        DAT_01e3769c = 0x400;
        if ((((uint)param_3 | 0x1e37294) & 7) == 0) {
          puVar1 = param_3 + 0x80;
          do {
            uVar3 = param_3[1];
            uVar7 = param_3[2];
            uVar8 = param_3[3];
            *puVar6 = *param_3;
            puVar6[1] = uVar3;
            puVar6[2] = uVar7;
            puVar6[3] = uVar8;
            param_3 = param_3 + 4;
            puVar6 = puVar6 + 4;
          } while (param_3 != puVar1);
        }
        else {
          puVar1 = param_3 + 0x80;
          do {
            uVar3 = param_3[1];
            uVar7 = param_3[2];
            uVar8 = param_3[3];
            *puVar6 = *param_3;
            puVar6[1] = uVar3;
            puVar6[2] = uVar7;
            puVar6[3] = uVar8;
            param_3 = param_3 + 4;
            puVar6 = puVar6 + 4;
          } while (param_3 != puVar1);
        }
      }
      uStack_ac = 1;
      pcStack_9c = s_SceStdioIoctlSema_00378218;
      uStack_a8 = 0;
      uVar3 = CreateSema(auStack_b0);
      DAT_01e37288 = 4;
      DAT_01e37280 = (undefined4)uVar3;
      DAT_01e37284 = auStack_90;
      FUN_00308a80(0x1e37280,0x420);
      lVar2 = FUN_00309d60(0x1e38980,5,0,0x1e37280,0x420,0x1e37ec0,4,0);
      iVar5 = DAT_21e37ec0;
      if (lVar2 < 0) {
        DeleteSema(uVar3);
        FUN_0030a300();
        return 0xfffffff5;
      }
      FUN_0030a300();
      if (iVar5 == 0) {
        DeleteSema(uVar3);
        return 0xfffffff5;
      }
      WaitSema(uVar3);
      DeleteSema(uVar3);
      return auStack_90[0];
    }
    WaitSema(DAT_00366174);
    iVar5 = 0;
    if (DAT_003660e0 == -1) {
      piVar4 = &DAT_003660e0;
      iVar5 = 1;
      while ((piVar4 = piVar4 + 1, iVar5 < 0x20 && (*piVar4 == -1))) {
        iVar5 = iVar5 + 1;
      }
    }
    if (iVar5 == 0x20) {
      *(undefined4 *)DAT_01e37248 = 0;
    }
    else {
      *(undefined4 *)DAT_01e37248 = 1;
    }
    SignalSema(DAT_00366174);
  }
  else {
    if (param_2 != 3) {
      DAT_01e3728c = *puVar9;
      goto LAB_0030b610;
    }
    *param_3 = *(undefined8 *)(DAT_00366160 * 0x440 + 0x1e37f10U | 0x20000000);
  }
  FUN_0030a300();
                    /* WARNING: Read-only address (ram,0x21e37ec0) is written */
  return 0;
}

