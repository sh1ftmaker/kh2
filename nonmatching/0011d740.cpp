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
    bool operator==(const AnyPtr &o) const { return (s64)*this == (s64)o; }
    bool operator!=(const AnyPtr &o) const { return (s64)*this != (s64)o; }
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
inline AnyPtr operator+(s64 v, const AnyPtr &p) { return p + v; }
inline AnyCell operator+(s64 v, const AnyCell &c) { return c + v; }
inline AnyCell operator-(s64 v, const AnyCell &c) { AnyCell r; r.w = (u32)v - c.w; return r; }
inline AnyCell operator*(s64 v, const AnyCell &c) { return c * v; }
inline AnyCell operator&(s64 v, const AnyCell &c) { return c & v; }
inline AnyCell operator|(s64 v, const AnyCell &c) { return c | v; }
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
inline bool operator==(const AnyCell &, const AnyVal &) { return false; }
inline bool operator!=(const AnyCell &, const AnyVal &) { return false; }
#define _GHIDRA_ANY(F) static inline AnyVal F() { AnyVal r; return r; } template <class A> static inline AnyVal F(const A &) { AnyVal r; return r; } template <class A, class B> static inline AnyVal F(const A &, const B &) { AnyVal r; return r; } template <class A, class B, class C> static inline AnyVal F(const A &, const B &, const C &) { AnyVal r; return r; } template <class A, class B, class C, class D> static inline AnyVal F(const A &, const B &, const C &, const D &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E, class G> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &, const G &) { AnyVal r; return r; }

s32 FUN_00108698(...) asm("func_00108698");
s32 FUN_00108998(...) asm("func_00108998");
s32 FUN_0010a918(...) asm("func_0010a918");
s32 FUN_0010ab08(...) asm("func_0010ab08");
s32 FUN_0010ae90(...) asm("func_0010ae90");
s32 FUN_0011d740(...) asm("func_0011d740");
s32 FUN_0011f120(...) asm("func_0011f120");
s32 FUN_0011f1a8(...) asm("func_0011f1a8");
s32 FUN_00124748(...) asm("func_00124748");
s32 FUN_00134408(...) asm("func_00134408");
s32 FUN_00134428(...) asm("func_00134428");
s32 FUN_00134450(...) asm("func_00134450");
extern u32 DAT_0036a918 asm("D_0036a918");
extern u32 DAT_0036a920 asm("D_0036a920");
extern u32 LAB_0011d9fc asm("D_0011d9fc");
extern u32 LAB_0011daec asm("D_0011daec");
extern u32 LAB_0011dc40 asm("D_0011dc40");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_qmtc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
_GHIDRA_ANY(_vmulbc)

// Ghidra decompile of 0x0011d740, wrapped mechanically (ad/fallback.py)

void FUN_0011d740_impl(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4, undefined8 *param_5,Q16 *param_6,int *param_7,long param_8) asm("func_0011d740");
void FUN_0011d740_impl(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4, undefined8 *param_5,Q16 *param_6,int *param_7,long param_8) {
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  Q16 auVar12;
  Q16 auVar13;
  Q16 auVar14;
  Q16 auVar15;
  Q16 auVar16;
  Q16 auVar17;
  Q16 auVar18;
  Q16 auVar19;
  Q16 auVar20;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  Q16 auStack_120;
  Q16 auStack_110;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_cc;
  int iStack_c4;
  Q16 auStack_b0;
  Q16 auStack_a0;
  Q16 auStack_90;
  Q16 auStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *puStack_68;
  undefined4 uStack_64;
  
  uStack_70 = param_2;
  uStack_6c = param_4;
  puStack_68 = param_5;
  uStack_64 = FUN_0010ae90();
  puVar11 = (uint *)param_3;
  if (param_7 != (int *)0x0) {
    FUN_0010a918(param_8);
    FUN_00108698(&uStack_f0);
    uVar3 = DAT_0036a920;
    uStack_e0 = 0x20140;
    if (param_8 != 1) {
      if (param_8 < 2) {
        uStack_e0 = 0x10140;
        if (param_8 != 0) {
          uStack_e0 = 0;
        }
      }
      else {
        uStack_e0 = 0x40140;
        if (param_8 != 2) {
          uStack_e0 = 0;
        }
      }
    }
    uStack_d8 = 0x30000148;
    if (param_8 != 1) {
      if (param_8 < 2) {
        uStack_d8 = 0x30000142;
        if (param_8 != 0) {
          uStack_d8 = 0;
        }
      }
      else {
        uStack_d8 = 0x30000160;
        if (param_8 != 2) {
          uStack_d8 = 0;
        }
      }
    }
    uVar10 = *puVar11;
    uStack_f0 = 2;
    if ((uVar10 & 1) == 0) {
      uStack_ec = 0;
      uStack_eb = 0;
      uStack_ea = 0;
    }
    uStack_e9 = *(undefined1 *)((int)puVar11 + 7);
    iVar8 = *param_7;
    if (iVar8 != 0) {
      do {
        if (&uStack_130 != (undefined8 *)(iVar8 + 0x40)) {
          uVar7 = *(undefined8 *)(iVar8 + 0x40);
          uStack_128 = *(undefined4 *)(iVar8 + 0x48);
          uStack_124 = *(undefined4 *)(iVar8 + 0x4c);
          auStack_120 = *(Q16 *)(iVar8 + 0x50);
          auStack_110 = *(Q16 *)(iVar8 + 0x60);
          uStack_f8 = *(undefined4 *)(iVar8 + 0x78);
          uStack_f4 = *(undefined4 *)(iVar8 + 0x7c);
          (*(AnyCell*)((u8*)&uStack_130 + 0)) = (undefined4)uVar7;
          (*(AnyCell*)((u8*)&uStack_130 + 4)) = (undefined4)((ulong)uVar7 >> 0x20);
          uStack_100 = (undefined4)*(undefined8 *)(iVar8 + 0x70);
          uStack_fc = (undefined4)((ulong)*(undefined8 *)(iVar8 + 0x70) >> 0x20);
        }
        auVar12 = _lqc2(auStack_120);
        auVar14 = _qmtc2(uVar3);
        auVar12 = _vmulbc(auVar12,auVar14);
        auStack_120 = _sqc2(auVar12);
        auVar12 = _lqc2(auStack_110);
        auVar14 = _qmtc2(uVar3);
        auVar12 = _vmulbc(auVar12,auVar14);
        auStack_110 = _sqc2(auVar12);
        auVar13 = _lqc2(*param_6);
        auVar15 = _lqc2(param_6[1]);
        auVar16 = _lqc2(param_6[2]);
        auVar17 = _lqc2(param_6[3]);
        (*(AnyCell*)((u8*)&auVar12 + 4)) = (*(AnyCell*)((u8*)&uStack_130 + 4));
        (*(AnyCell*)((u8*)&auVar12 + 0)) = (undefined4)uStack_130;
        (*(AnyCell*)((u8*)&auVar12 + 8)) = uStack_128;
        (*(AnyCell*)((u8*)&auVar12 + 12)) = uStack_124;
        auVar12 = _lqc2(auVar12);
        auVar18 = _lqc2(auStack_120);
        auVar19 = _lqc2(auStack_110);
        (*(AnyCell*)((u8*)&auVar14 + 4)) = uStack_fc;
        (*(AnyCell*)((u8*)&auVar14 + 0)) = uStack_100;
        (*(AnyCell*)((u8*)&auVar14 + 8)) = uStack_f8;
        (*(AnyCell*)((u8*)&auVar14 + 12)) = uStack_f4;
        auVar20 = _lqc2(auVar14);
        _vmulabc(auVar13,auVar12);
        _vmaddabc(auVar15,auVar12);
        _vmaddabc(auVar16,auVar12);
        auVar12 = _vmaddbc(auVar17,auVar12);
        _vmulabc(auVar13,auVar18);
        _vmaddabc(auVar15,auVar18);
        _vmaddabc(auVar16,auVar18);
        auVar14 = _vmaddbc(auVar17,auVar18);
        _vmulabc(auVar13,auVar19);
        _vmaddabc(auVar15,auVar19);
        _vmaddabc(auVar16,auVar19);
        auVar18 = _vmaddbc(auVar17,auVar19);
        _vmulabc(auVar13,auVar20);
        _vmaddabc(auVar15,auVar20);
        _vmaddabc(auVar16,auVar20);
        auVar13 = _vmaddbc(auVar17,auVar20);
        auStack_b0 = _sqc2(auVar12);
        auStack_a0 = _sqc2(auVar14);
        auStack_90 = _sqc2(auVar18);
        auStack_80 = _sqc2(auVar13);
        if (&uStack_130 == (undefined8 *)auStack_b0) {
          piVar9 = (int *)*param_7;
        }
        else {
          (*(AnyCell*)((u8*)&uStack_130 + 0)) = (*(AnyCell*)((u8*)&auStack_b0 + 0));
          (*(AnyCell*)((u8*)&uStack_130 + 4)) = (*(AnyCell*)((u8*)&auStack_b0 + 4));
          uStack_128 = (*(AnyCell*)((u8*)&auStack_b0 + 8));
          uStack_124 = (*(AnyCell*)((u8*)&auStack_b0 + 12));
          uStack_100 = (*(AnyCell*)((u8*)&auStack_80 + 0));
          uStack_fc = (*(AnyCell*)((u8*)&auStack_80 + 4));
          uStack_f8 = (*(AnyCell*)((u8*)&auStack_80 + 8));
          uStack_f4 = (*(AnyCell*)((u8*)&auStack_80 + 12));
          piVar9 = (int *)*param_7;
          auStack_120 = auStack_a0;
          auStack_110 = auStack_90;
        }
        iVar8 = *piVar9;
        piVar4 = *(int **)(iVar8 + 0x14);
        if (*(int *)piVar4[1] == -1) {
          piVar4 = (int *)FUN_00124748(piVar4,0);
          if (piVar4 == (int *)0x0) {
            piVar4 = *(int **)(iVar8 + 0x14);
          }
          piVar9 = (int *)*param_7;
          bVar1 = *(byte *)((int)piVar9 + 0xf);
        }
        else {
          bVar1 = *(byte *)((int)piVar9 + 0xf);
        }
        iStack_c4 = piVar9[0xd];
        uStack_e9 = (undefined1)((int)((uint)bVar1 * (uint)*(byte *)((int)puVar11 + 7)) >> 7);
        if ((*puVar11 & 1) == 0) {
          lVar6 = (**(code **)(*piVar4 + 0x50))
                            (piVar4,&uStack_130,*(undefined4 *)(iVar8 + 0x108),&uStack_f0,
                             *(undefined4 *)(iVar8 + 0x104),*(undefined4 *)(param_1 + 0x38),0,0);
          if (lVar6 == 0) {
            uVar2 = *(undefined4 *)(iVar8 + 0x104);
            pcVar5 = *(code **)(*piVar4 + 0x50);
            goto LAB_0011d9fc;
          }
        }
        else {
          uStack_cc = *(undefined4 *)(iVar8 + 0x34);
          lVar6 = (**(code **)(*piVar4 + 0x4c))
                            (piVar4,&uStack_130,*(undefined4 *)(iVar8 + 0x108),&uStack_f0,
                             *(undefined4 *)(iVar8 + 0x104),*(undefined4 *)(param_1 + 0x38),0,0);
          if (lVar6 == 0) {
            uVar2 = *(undefined4 *)(iVar8 + 0x104);
            pcVar5 = *(code **)(*piVar4 + 0x4c);
LAB_0011d9fc:
            (*pcVar5)(piVar4,&uStack_130,*(undefined4 *)(iVar8 + 0x108),&uStack_f0,uVar2,
                      *(undefined4 *)(param_1 + 0x38),1,0);
          }
        }
        param_7 = param_7 + 1;
        iVar8 = *param_7;
      } while (iVar8 != 0);
      uVar10 = *puVar11;
    }
    if ((uVar10 & 1) == 0) {
      FUN_0010ab08(param_8);
    }
    FUN_00134408();
    FUN_00134428(0x4c,0x800d8);
    FUN_00134428(0x4e,0x31000070);
    FUN_00134428(0x47,0x5000d);
    FUN_00134428(0x18,0x730000007000);
    FUN_00134428(0x40,DAT_0036a918);
    FUN_00134450(1);
  }
  FUN_00108998(uStack_64);
  FUN_00134408();
  if ((*puVar11 & 1) == 0) {
    uVar7 = 0x5dc00a900;
    if (param_8 == 1) goto LAB_0011daec;
    if (1 < param_8) {
      uVar7 = 0x620012c00;
LAB_0011dc40:
      if (param_8 != 2) {
        uVar7 = 0;
      }
      goto LAB_0011daec;
    }
    uVar7 = 0x598006840;
  }
  else {
    uVar7 = 0x5dc00a800;
    if (param_8 == 1) goto LAB_0011daec;
    if (1 < param_8) {
      uVar7 = 0x620012800;
      goto LAB_0011dc40;
    }
    uVar7 = 0x598006800;
  }
  if (param_8 != 0) {
    uVar7 = 0;
  }
LAB_0011daec:
  FUN_00134428(6,uVar7);
  FUN_00134428(0x42,0x8000000044);
  FUN_00134428(0x4c,*(undefined8 *)(puVar11 + 4));
  FUN_00134428(0x4e,*(ulong *)(puVar11 + 6) | 0xff00000000000000);
  FUN_00134428(0x47,0x5000d);
  FUN_00134450(1);
  *(undefined1 *)((int)puVar11 + 7) = 0x80;
  FUN_0011f120(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x104));
  (**(code **)(**(int **)(param_1 + 0x14) + 0x34))
            (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x104),uStack_6c);
  if (&uStack_130 == puStack_68) {
    piVar9 = *(int **)(param_1 + 0x14);
  }
  else {
    uStack_128 = *(undefined4 *)(puStack_68 + 1);
    uStack_124 = *(undefined4 *)((int)puStack_68 + 0xc);
    auStack_120 = *(Q16 *)(puStack_68 + 2);
    auStack_110 = *(Q16 *)(puStack_68 + 4);
    uStack_f8 = *(undefined4 *)(puStack_68 + 7);
    uStack_f4 = *(undefined4 *)((int)puStack_68 + 0x3c);
    (*(AnyCell*)((u8*)&uStack_130 + 0)) = (undefined4)*puStack_68;
    (*(AnyCell*)((u8*)&uStack_130 + 4)) = (undefined4)((ulong)*puStack_68 >> 0x20);
    uStack_100 = (undefined4)puStack_68[6];
    uStack_fc = (undefined4)((ulong)puStack_68[6] >> 0x20);
    piVar9 = *(int **)(param_1 + 0x14);
  }
  lVar6 = (**(code **)(*piVar9 + 0x58))
                    (piVar9,uStack_70,*(undefined4 *)(param_1 + 0x108),param_3,
                     *(undefined4 *)(param_1 + 0x104),0,&uStack_130);
  if (lVar6 == 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x58))
              (*(int **)(param_1 + 0x14),uStack_70,*(undefined4 *)(param_1 + 0x108),param_3,
               *(undefined4 *)(param_1 + 0x104),1,&uStack_130);
    uVar3 = *(undefined4 *)(param_1 + 0x104);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x104);
  }
  FUN_0011f1a8(*(undefined4 *)(param_1 + 0x14),uVar3);
  return;
}

