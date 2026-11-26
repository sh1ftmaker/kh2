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

s32 FUN_00103570(...) asm("func_00103570");
s32 FUN_001063f0(...) asm("func_001063f0");
s32 FUN_0014a4b0(...) asm("func_0014a4b0");
s32 FUN_00233ce0(...) asm("func_00233ce0");
s32 FUN_00239700(...) asm("func_00239700");
s32 FUN_0023fd40(...) asm("func_0023fd40");
s32 FUN_00240b90(...) asm("func_00240b90");
s32 FUN_00287b18(...) asm("func_00287b18");
s32 FUN_002889f0(...) asm("func_002889f0");
s32 FUN_00288be8(...) asm("func_00288be8");
s32 FUN_00288f48(...) asm("func_00288f48");
s32 FUN_0028b9b0(...) asm("func_0028b9b0");
s32 FUN_0028d068(...) asm("func_0028d068");
s32 FUN_0028d140(...) asm("func_0028d140");
s32 FUN_002b4440(...) asm("_ZN2Tz8CmSLBase4InitEv");
s32 FUN_002fde18(...) asm("func_002fde18");
s32 FUN_0031a838(...) asm("func_0031a838");
extern AnyCell DAT_0032ba14 asm("D_0032ba14");
extern AnyCell DAT_00347f80 asm("D_00347f80");
extern AnyCell DAT_0035f3d4 asm("D_0035f3d4");
extern AnyCell DAT_0035f64c asm("D_0035f64c");
extern AnyCell DAT_0035f650 asm("D_0035f650");
extern AnyCell DAT_0035f654 asm("D_0035f654");
extern AnyCell DAT_0035f658 asm("D_0035f658");
extern AnyCell DAT_0035f65c asm("D_0035f65c");
extern AnyCell DAT_0035f660 asm("D_0035f660");
extern AnyCell DAT_0035f664 asm("D_0035f664");
extern AnyCell DAT_0035f668 asm("D_0035f668");
extern AnyCell DAT_0035f66c asm("D_0035f66c");
extern AnyCell DAT_0035f670 asm("D_0035f670");
extern AnyCell DAT_0035f674 asm("D_0035f674");
extern AnyCell DAT_0035f678 asm("D_0035f678");
extern AnyCell DAT_0035f67c asm("D_0035f67c");
extern AnyCell DAT_0035f680 asm("D_0035f680");
extern AnyCell DAT_0035f690 asm("D_0035f690");
extern AnyCell DAT_0035f6c0 asm("D_0035f6c0");
extern AnyCell DAT_0035f6c4 asm("D_0035f6c4");
extern AnyCell DAT_0035f6c8 asm("D_0035f6c8");
extern AnyCell DAT_0035f6d0 asm("D_0035f6d0");
extern AnyCell PTR_LAB_00347e40 asm("D_00347e40");
extern AnyCell PTR_LAB_00347e60 asm("D_00347e60");
extern AnyCell PTR_LAB_00347f98 asm("D_00347f98");
extern AnyCell PTR_LAB_0035f360 asm("D_0035f360");

// Ghidra decompile of 0x002b4440, wrapped mechanically (ad/fallback.py)

void FUN_002b4440_impl(void) asm("_ZN2Tz8CmSLBase4InitEv");
void FUN_002b4440_impl(void) {
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  FUN_0014a4b0();
  uVar1 = FUN_00103570();
  FUN_0023fd40(uVar1);
  FUN_00240b90(0);
  FUN_00233ce0();
  FUN_00287b18(0x19,3);
  DAT_0035f664 = 0;
  DAT_0035f654 = (undefined4 *)0x0;
  DAT_0035f668 = 0;
  DAT_0035f670 = 0;
  DAT_0035f66c = 0;
  DAT_0035f678 = 0;
  DAT_0035f674 = 0;
  DAT_0035f6d0 = 0;
  DAT_0035f67c = 0;
  FUN_0028d068(0x7571,0xffffffffffffffff);
  iVar2 = 3;
  puVar4 = &DAT_0035f680;
  do {
    *puVar4 = 0;
    iVar2 = iVar2 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar2);
  iVar2 = 0;
  iVar5 = 0;
  do {
    iVar3 = 3;
    puVar4 = (undefined4 *)((int)&DAT_0035f690 + iVar5);
    do {
      *puVar4 = 0;
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar3);
    iVar2 = iVar2 + 1;
    iVar5 = iVar2 * 0x10;
  } while (iVar2 < 3);
  uVar1 = FUN_00288be8(0x38);
  FUN_002889f0(uVar1,4,1);
  DAT_0035f64c = (undefined4)uVar1;
  uVar1 = FUN_00288be8(0x38);
  FUN_002889f0(uVar1,2,0);
  DAT_0035f650 = (undefined4)uVar1;
  FUN_00288f48(uVar1,0x80,0x40,0,0);
  puVar4 = (undefined4 *)
           (**(code **)**(undefined4 **)(DAT_00347f80 + 0x14))
                     (*(undefined4 **)(DAT_00347f80 + 0x14),0x1b4,0);
  *puVar4 = &PTR_LAB_00347e60;
  puVar4[3] = 0;
  FUN_00239700(puVar4 + 6);
  puVar4[0x66] = 0;
  *puVar4 = &PTR_LAB_00347e40;
  DAT_0035f654 = puVar4;
  puVar4 = (undefined4 *)
           (**(code **)**(undefined4 **)(DAT_00347f80 + 0x14))
                     (*(undefined4 **)(DAT_00347f80 + 0x14),0x198,0);
  *puVar4 = &PTR_LAB_00347e60;
  puVar4[3] = 0;
  FUN_00239700(puVar4 + 6);
  DAT_0035f658 = puVar4;
  uVar1 = FUN_00103570();
  DAT_0035f65c = FUN_001063f0(0xe0,uVar1);
  uVar1 = FUN_00103570();
  uVar6 = 0x2b466c;
  DAT_0035f660 = FUN_001063f0(0xa0,uVar1);
  uVar1 = (**(code **)*DAT_0032ba14)(DAT_0032ba14,0x34,uVar6);
  FUN_0028b9b0(uVar1);
  DAT_0035f678 = (undefined4)uVar1;
  uVar1 = (**(code **)**(undefined4 **)(DAT_00347f80 + 0x14))
                    (*(undefined4 **)(DAT_00347f80 + 0x14),0x1bc,0);
  FUN_0028d140(uVar1);
  DAT_0035f67c = (undefined4)uVar1;
  puVar4 = (undefined4 *)
           (**(code **)**(undefined4 **)(DAT_00347f80 + 0x14))
                     (*(undefined4 **)(DAT_00347f80 + 0x14),0x1cc,0);
  *puVar4 = &PTR_LAB_00347f98;
  FUN_0031a838(puVar4 + 3);
  *puVar4 = &PTR_LAB_00347e60;
  FUN_00239700(puVar4 + 6);
  puVar4[0x66] = 0;
  *puVar4 = &PTR_LAB_0035f360;
  DAT_0035f6c0 = puVar4;
  uVar1 = FUN_00103570();
  DAT_0035f6c4 = FUN_001063f0(0x200,uVar1);
  uVar1 = FUN_00103570();
  DAT_0035f6c8 = FUN_001063f0(0x200,uVar1);
  FUN_002fde18(DAT_0035f6c4,0,0x200);
  FUN_002fde18(DAT_0035f6c8,0,0x200);
  DAT_0035f3d4 = 0x755d;
  return;
}

