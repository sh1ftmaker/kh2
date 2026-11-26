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

static u8 _ghidra_stack[0x2000];
s32 FUN_001069f8(...) asm("func_001069f8");
s32 FUN_0015d2e8(...) asm("func_0015d2e8");
s32 FUN_00162088(...) asm("func_00162088");
s32 FUN_0016b0d0(...) asm("func_0016b0d0");
s32 FUN_002311c0(...) asm("func_002311c0");
s32 FUN_00231390(...) asm("func_00231390");
s32 FUN_002314c0(...) asm("func_002314c0");
s32 FUN_00231500(...) asm("_ZN2sa5EVENT11camera_ctrlEv");
s32 FUN_00232328(...) asm("func_00232328");
extern AnyCell DAT_0035db20 asm("D_0035db20");
extern AnyCell DAT_0035db24 asm("D_0035db24");
extern AnyCell DAT_0035db28 asm("D_0035db28");
extern AnyCell DAT_0035db2c asm("D_0035db2c");
extern AnyCell DAT_0035db30 asm("D_0035db30");
extern AnyCell DAT_0035db34 asm("D_0035db34");
extern AnyCell DAT_0035db38 asm("D_0035db38");
extern AnyCell DAT_0035db3c asm("D_0035db3c");
extern AnyCell DAT_0035db40 asm("D_0035db40");
extern AnyCell DAT_0035db44 asm("D_0035db44");
extern AnyCell DAT_0035dce0 asm("D_0035dce0");
extern AnyCell DAT_0035dce4 asm("D_0035dce4");
extern AnyCell DAT_0035de0a asm("D_0035de0a");
extern AnyCell DAT_0035de0b asm("D_0035de0b");
extern AnyCell DAT_0035de10 asm("D_0035de10");
extern AnyCell DAT_0035de14 asm("D_0035de14");
extern AnyCell DAT_0035de15 asm("D_0035de15");
extern AnyCell DAT_0035de18 asm("D_0035de18");
extern AnyCell DAT_0035de1c asm("D_0035de1c");
extern AnyCell DAT_0035de20 asm("D_0035de20");
extern AnyCell DAT_003712ac asm("D_003712ac");
extern AnyCell DAT_003712b0 asm("D_003712b0");
extern AnyCell DAT_003712b4 asm("D_003712b4");
_GHIDRA_ANY(_lqc2)
_GHIDRA_ANY(_sqc2)
_GHIDRA_ANY(_vmaddabc)
_GHIDRA_ANY(_vmaddbc)
_GHIDRA_ANY(_vmulabc)
#define stack0x00000000 (*(AnyCell*)(_ghidra_stack + 0x1000 + (0)))
static AnyCell x01;

// Ghidra decompile of 0x00231500, wrapped mechanically (ad/fallback.py)

void FUN_00231500_impl(void) asm("_ZN2sa5EVENT11camera_ctrlEv");
void FUN_00231500_impl(void) {
  short sVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  Q16 auVar13;
  Q16 auVar14;
  Q16 auVar15;
  Q16 auVar16;
  Q16 auVar17;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  
  iVar9 = 0;
  iVar10 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  fStack_84 = DAT_003712ac;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  fStack_88 = 0.0;
  lVar4 = FUN_00162088();
  if (lVar4 == 1) {
    iVar7 = 0x7f;
    piVar8 = DAT_0035dce4;
    do {
      if ((*piVar8 != -1) && ((long)(short)piVar8[1] <= (long)DAT_0035de20)) {
        iVar9 = iVar9 + (uint)((long)DAT_0035de20 < (long)*(short *)((int)piVar8 + 6));
      }
      iVar7 = iVar7 + -1;
      piVar8 = piVar8 + 2;
    } while (-1 < iVar7);
  }
  iVar7 = 0;
  do {
    piVar8 = DAT_0035dce4 + iVar7 * 2;
    iVar3 = *piVar8;
    if (iVar3 != -1) {
      sVar1 = *(short *)((int)piVar8 + 6);
      sVar2 = (short)piVar8[1];
      lVar5 = FUN_00232328();
      lVar4 = (long)sVar1;
      if (lVar5 != 0) {
        lVar4 = (long)(sVar1 + -1);
      }
      if (((long)sVar2 <= (long)DAT_0035de20) && (DAT_0035de20 <= lVar4)) {
        lVar5 = FUN_00232328();
        fVar12 = 0.0;
        if (lVar5 != 0) {
          fVar12 = DAT_003712b0;
        }
        fVar12 = (DAT_0035de1c * DAT_003712b0 + fVar12) - (float)(int)sVar2;
        lVar5 = FUN_00232328();
        if ((lVar5 == 0) && (fVar11 = (float)((int)lVar4 - (int)sVar2), fVar11 < fVar12)) {
          fVar12 = fVar11;
        }
        FUN_002311c0(fVar12,&uStack_a0,*(undefined4 *)(iVar3 * 4 + DAT_0035dce0));
        lVar4 = FUN_00162088();
        uVar6 = 0;
        if ((lVar4 == 1) && (uVar6 = 1, iVar10 != iVar9 + -1)) {
          uVar6 = 0;
        }
        FUN_001069f8(uVar6);
        if ((DAT_0035de0a == '\x01') && (DAT_0035de10 == 1)) {
          FUN_00231390(fVar12,&uStack_a0,0x35de90);
          FUN_002314c0(&uStack_a0);
          DAT_0035db44 = fStack_84;
          DAT_0035db40 = -fStack_88;
          iVar3 = FUN_0016b0d0();
          DAT_0035db2c = DAT_003712ac;
          (*(AnyCell*)((u8*)&auVar15 + 4)) = DAT_0035db24;
          (*(AnyCell*)((u8*)&auVar15 + 0)) = DAT_0035db20;
          (*(AnyCell*)((u8*)&auVar15 + 8)) = DAT_0035db28;
          (*(AnyCell*)((u8*)&auVar15 + 12)) = DAT_003712ac;
          auVar17 = _lqc2(auVar15);
          auVar13 = _lqc2(*(Q16 *)(iVar3 + 0x40));
          auVar14 = _lqc2(*(Q16 *)(iVar3 + 0x50));
          auVar15 = _lqc2(*(Q16 *)(iVar3 + 0x60));
          auVar16 = _lqc2(*(Q16 *)(iVar3 + 0x70));
          _vmulabc(auVar13,auVar17);
          _vmaddabc(auVar14,auVar17);
          _vmaddabc(auVar15,auVar17);
          auVar13 = _vmaddbc(auVar16,auVar17);
          auVar13 = _sqc2(auVar13);
          if (&stack0x00000000 != (undefined1 *)0x35dba0) {
            uStack_78 = (*(AnyCell*)((u8*)&auVar13 + 8));
            DAT_0035db28 = uStack_78;
            fStack_74 = (*(AnyCell*)((u8*)&auVar13 + 12));
            DAT_0035db2c = fStack_74;
            DAT_0035db20 = (*(AnyCell*)((u8*)&auVar13 + 0));
            DAT_0035db24 = (*(AnyCell*)((u8*)&auVar13 + 4));
          }
          DAT_0035db3c = DAT_003712ac;
          (*(AnyCell*)((u8*)&auVar16 + 4)) = DAT_0035db34;
          (*(AnyCell*)((u8*)&auVar16 + 0)) = DAT_0035db30;
          (*(AnyCell*)((u8*)&auVar16 + 8)) = DAT_0035db38;
          (*(AnyCell*)((u8*)&auVar16 + 12)) = DAT_003712ac;
          auVar17 = _lqc2(auVar16);
          auVar13 = _lqc2(*(Q16 *)(iVar3 + 0x40));
          auVar14 = _lqc2(*(Q16 *)(iVar3 + 0x50));
          auVar15 = _lqc2(*(Q16 *)(iVar3 + 0x60));
          auVar16 = _lqc2(*(Q16 *)(iVar3 + 0x70));
          _vmulabc(auVar13,auVar17);
          _vmaddabc(auVar14,auVar17);
          _vmaddabc(auVar15,auVar17);
          auVar13 = _vmaddbc(auVar16,auVar17);
          auVar13 = _sqc2(auVar13);
          if (&stack0x00000000 != (undefined1 *)0x35dbb0) {
            uStack_78 = (*(AnyCell*)((u8*)&auVar13 + 8));
            DAT_0035db38 = uStack_78;
            fStack_74 = (*(AnyCell*)((u8*)&auVar13 + 12));
            DAT_0035db3c = fStack_74;
            DAT_0035db30 = (*(AnyCell*)((u8*)&auVar13 + 0));
            DAT_0035db34 = (*(AnyCell*)((u8*)&auVar13 + 4));
          }
        }
        else {
          FUN_002314c0(&uStack_a0);
          DAT_0035db40 = fStack_88;
          DAT_0035db44 = fStack_84;
          DAT_0035db2c = DAT_003712ac;
          (*(AnyCell*)((u8*)&auVar13 + 4)) = DAT_0035db24;
          (*(AnyCell*)((u8*)&auVar13 + 0)) = DAT_0035db20;
          (*(AnyCell*)((u8*)&auVar13 + 8)) = DAT_0035db28;
          (*(AnyCell*)((u8*)&auVar13 + 12)) = DAT_003712ac;
          auVar17 = _lqc2(auVar13);
          auVar13 = _lqc2(*DAT_0035de18);
          auVar14 = _lqc2(DAT_0035de18[1]);
          auVar15 = _lqc2(DAT_0035de18[2]);
          auVar16 = _lqc2(DAT_0035de18[3]);
          _vmulabc(auVar13,auVar17);
          _vmaddabc(auVar14,auVar17);
          _vmaddabc(auVar15,auVar17);
          auVar13 = _vmaddbc(auVar16,auVar17);
          auVar13 = _sqc2(auVar13);
          if (&stack0x00000000 != (undefined1 *)0x35dba0) {
            uStack_78 = (*(AnyCell*)((u8*)&auVar13 + 8));
            DAT_0035db28 = uStack_78;
            fStack_74 = (*(AnyCell*)((u8*)&auVar13 + 12));
            DAT_0035db2c = fStack_74;
            DAT_0035db20 = (*(AnyCell*)((u8*)&auVar13 + 0));
            DAT_0035db24 = (*(AnyCell*)((u8*)&auVar13 + 4));
          }
          DAT_0035db3c = DAT_003712ac;
          (*(AnyCell*)((u8*)&auVar14 + 4)) = DAT_0035db34;
          (*(AnyCell*)((u8*)&auVar14 + 0)) = DAT_0035db30;
          (*(AnyCell*)((u8*)&auVar14 + 8)) = DAT_0035db38;
          (*(AnyCell*)((u8*)&auVar14 + 12)) = DAT_003712ac;
          auVar17 = _lqc2(auVar14);
          auVar13 = _lqc2(*DAT_0035de18);
          auVar14 = _lqc2(DAT_0035de18[1]);
          auVar15 = _lqc2(DAT_0035de18[2]);
          auVar16 = _lqc2(DAT_0035de18[3]);
          _vmulabc(auVar13,auVar17);
          _vmaddabc(auVar14,auVar17);
          _vmaddabc(auVar15,auVar17);
          auVar13 = _vmaddbc(auVar16,auVar17);
          auVar13 = _sqc2(auVar13);
          if (&stack0x00000000 != (undefined1 *)0x35dbb0) {
            uStack_78 = (*(AnyCell*)((u8*)&auVar13 + 8));
            DAT_0035db38 = uStack_78;
            fStack_74 = (*(AnyCell*)((u8*)&auVar13 + 12));
            DAT_0035db3c = fStack_74;
            DAT_0035db30 = (*(AnyCell*)((u8*)&auVar13 + 0));
            DAT_0035db34 = (*(AnyCell*)((u8*)&auVar13 + 4));
          }
        }
        uStack_7c = DAT_0035db34;
        uStack_80 = DAT_0035db30;
        uStack_78 = DAT_0035db38;
        fStack_74 = DAT_0035db3c;
        uStack_70 = DAT_0035db20;
        uStack_6c = DAT_0035db24;
        uStack_68 = DAT_0035db28;
        fStack_64 = DAT_0035db2c;
        iVar10 = iVar10 + 1;
        FUN_0015d2e8(DAT_0035db40,DAT_0035db44 * DAT_003712b4,&uStack_70,&uStack_80,1,DAT_0035de14,
                     DAT_0035de15,DAT_0035de0b);
        FUN_001069f8(0);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x80);
  return;
}

