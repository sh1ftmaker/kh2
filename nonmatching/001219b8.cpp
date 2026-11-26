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

s32 FUN_00108ae0(...) asm("func_00108ae0");
s32 FUN_00109670(...) asm("func_00109670");
s32 FUN_00109ea8(...) asm("func_00109ea8");
s32 FUN_00109f58(...) asm("func_00109f58");
s32 FUN_0010ae90(...) asm("func_0010ae90");
s32 FUN_001217a0(...) asm("func_001217a0");
s32 FUN_001219b8(...) asm("_ZN2kn8ModelSKL10setTexfadeEPNS_16Vif1PacketBufferEiPNS_9DrawParamEPNS_13AnimationWorkEbPNS_7TextureES8_");
s32 FUN_00134408(...) asm("func_00134408");
s32 FUN_00134428(...) asm("func_00134428");
s32 FUN_00134450(...) asm("func_00134450");
extern AnyCell DAT_0036a978 asm("D_0036a978");
extern AnyCell DAT_0036a980 asm("D_0036a980");
extern AnyCell DAT_0036a988 asm("D_0036a988");
extern AnyCell DAT_0036a998 asm("D_0036a998");
extern AnyCell _PTR_DAT_0036a970 asm("D_0036a970");
extern AnyCell _PTR_DAT_0036a990 asm("D_0036a990");
extern AnyCell _PTR_DAT_0036a9a0 asm("D_0036a9a0");

// Ghidra decompile of 0x001219b8, wrapped mechanically (ad/fallback.py)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001219b8_impl(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4, undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8) asm("_ZN2kn8ModelSKL10setTexfadeEPNS_16Vif1PacketBufferEiPNS_9DrawParamEPNS_13AnimationWorkEbPNS_7TextureES8_");
void FUN_001219b8_impl(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4, undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8) {
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  FUN_001217a0();
  FUN_00134408();
  FUN_00134428(0x4c,0x40140);
  FUN_00134428(0x4e,*(ulong *)(param_4 + 0x18) | 0x100000000);
  FUN_00134428(0x47,0x30003);
  FUN_00134428(8,5);
  FUN_00134428(0x18,0x780000007800);
  FUN_00134428(0x40,_PTR_DAT_0036a970);
  FUN_00134428(0x42,0x8000000044);
  FUN_00134428(0,0x56);
  FUN_00134428(1,DAT_0036a978);
  FUN_00134428(2,0);
  FUN_00134428(5,0x78007800);
  FUN_00134428(2,DAT_0036a980);
  FUN_00134428(5,0x88008800);
  FUN_00134450(1);
  FUN_001217a0(param_1,param_2,param_3,param_5,param_8);
  FUN_00134408();
  FUN_00134428(0x4c,DAT_0036a988);
  FUN_00134428(8,5);
  FUN_00134428(0,0x56);
  FUN_00134428(1,(long)(int)(uint)(*(byte *)(param_4 + 0x28) >> 1) << 0x18 | _PTR_DAT_0036a990);
  FUN_00134428(2,0);
  FUN_00134428(5,0x78007800);
  FUN_00134428(2,DAT_0036a980);
  FUN_00134428(5,0x88008800);
  FUN_00134428(0x18,0x730000007000);
  FUN_00134428(0x40,DAT_0036a998);
  FUN_00134428(6,_PTR_DAT_0036a9a0);
  FUN_00134450(1);
  iVar6 = (int)param_1;
  if (param_6 == '\0') {
    uVar1 = FUN_00109f58(7,*(undefined4 *)(*(int *)(iVar6 + 4) + 4),*(undefined1 *)(param_4 + 7));
    uVar2 = FUN_00109ea8(7,*(undefined4 *)(*(int *)(iVar6 + 4) + 4),*(undefined1 *)(param_4 + 7));
    uVar3 = FUN_0010ae90();
    uVar4 = *(ulong *)(param_4 + 0x10);
    uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffeffffffff;
  }
  else {
    uVar1 = FUN_00109f58(0xb,*(undefined4 *)(*(int *)(iVar6 + 4) + 4),*(undefined1 *)(param_4 + 7));
    uVar2 = FUN_00109ea8(0xb,*(undefined4 *)(*(int *)(iVar6 + 4) + 4),*(undefined1 *)(param_4 + 7));
    uVar3 = FUN_0010ae90();
    uVar5 = *(ulong *)(param_4 + 0x18) | 0x100000000;
    uVar4 = *(ulong *)(param_4 + 0x10) | 0xff00000000000000;
  }
  FUN_00108ae0(uVar3,0xf,uVar4,uVar5,uVar2,uVar1,0,0);
  FUN_00109670();
  return;
}

