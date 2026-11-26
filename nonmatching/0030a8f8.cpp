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

s32 FUN_00309cd8(...) asm("func_00309cd8");
s32 FUN_00309d60(...) asm("func_00309d60");
s32 FUN_0030a2d0(...) asm("func_0030a2d0");
s32 FUN_0030a300(...) asm("func_0030a300");
s32 FUN_0030a3f8(...) asm("func_0030a3f8");
s32 FUN_0030a600(...) asm("func_0030a600");
s32 FUN_0030a8f8(...) asm("func_0030a8f8");
extern u32 DAT_00366164 asm("D_00366164");
extern u32 DAT_00366170 asm("D_00366170");
extern u32 DAT_01e37280 asm("D_01e37280");
extern u32 DAT_01e37284 asm("D_01e37284");
extern u32 DAT_01e37288 asm("D_01e37288");
extern u32 DAT_01e3728c asm("D_01e3728c");
extern u32 DAT_01e37290 asm("D_01e37290");
extern u32 DAT_01e37693 asm("D_01e37693");
extern u32 DAT_01e37694 asm("D_01e37694");
extern u32 DAT_21e37ec0 asm("D_21e37ec0");
extern AnyCell s_SceStdioOpenSema_003781a0 asm("D_003781a0");
s32 CreateSema(...) asm("func_00305620");
s32 DeleteSema(...) asm("func_00305630");
s32 SignalSema(...) asm("func_00305640");
s32 WaitSema(...) asm("func_00305660");

// Ghidra decompile of 0x0030a8f8, wrapped mechanically (ad/fallback.py)

int FUN_0030a8f8_impl(char *param_1,uint param_2,undefined4 param_3) asm("func_0030a8f8");
int FUN_0030a8f8_impl(char *param_1,uint param_2,undefined4 param_3) {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  B4 auStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  char *pcStack_12c;
  int aiStack_120 [4];
  
  FUN_0030a2d0(0);
  if (DAT_00366164 == 0) {
    FUN_0030a3f8();
  }
  lVar4 = FUN_0030a600();
  if (lVar4 == 0) {
    lVar4 = FUN_00309cd8();
    if (lVar4 == 0) {
      FUN_0030a300();
      iVar6 = -0x13;
    }
    else {
      (*(AnyCell*)((u8*)&DAT_01e37290 + 4)) = *param_1;
      iVar6 = 0;
      if ((*(AnyCell*)((u8*)&DAT_01e37290 + 4)) != '\0') {
        for (iVar6 = 1;
            (iVar6 < 0x400 &&
            (cVar1 = param_1[iVar6], *(char *)((int)&DAT_01e37290 + iVar6 + 4) = cVar1,
            cVar1 != '\0')); iVar6 = iVar6 + 1) {
        }
      }
      if (iVar6 == 0x400) {
        DAT_01e37693 = 0;
      }
      piVar7 = (int *)lVar4;
      iVar6 = (int)(piVar7 + -0x78e1e0) >> 4;
      DAT_01e3728c = param_2 & 0x7fffffff;
      uStack_13c = 1;
      pcStack_12c = s_SceStdioOpenSema_003781a0;
      uStack_138 = 0;
      (*(AnyCell*)((u8*)&DAT_01e37290 + 0)) = param_3;
      DAT_01e37694 = iVar6;
      uVar5 = CreateSema(auStack_140);
      DAT_01e37280 = (undefined4)uVar5;
      DAT_01e37288 = 4;
      DAT_01e37284 = aiStack_120;
      lVar4 = FUN_00309d60(0x1e38980,0,0,0x1e37280,0x418,0x1e37ec0,4,0);
      iVar3 = DAT_21e37ec0;
      if (lVar4 < 0) {
        DeleteSema(uVar5);
        FUN_0030a300();
        iVar6 = -0xb;
      }
      else {
        FUN_0030a300();
        if (iVar3 == 0) {
          DeleteSema(uVar5);
          iVar6 = -0xb;
        }
        else {
          WaitSema(uVar5);
          DeleteSema(uVar5);
          if (aiStack_120[0] < 0) {
            WaitSema(DAT_00366170);
            piVar7[1] = 0;
            SignalSema(DAT_00366170);
            iVar6 = aiStack_120[0];
          }
          else {
            WaitSema(DAT_00366170);
            uVar2 = DAT_00366170;
            piVar7[1] = piVar7[1] | param_2;
            *piVar7 = aiStack_120[0];
            SignalSema(uVar2);
          }
        }
      }
    }
  }
  else {
    FUN_0030a300();
    iVar6 = -0x10004;
  }
  return iVar6;
}

