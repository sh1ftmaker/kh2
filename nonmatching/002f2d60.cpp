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

s32 FUN_002f2d60(...) asm("func_002f2d60");
s32 FUN_003080d0(...) asm("func_003080d0");
extern u32 DAT_00363c78 asm("D_00363c78");
extern u32 DAT_00363c7c asm("D_00363c7c");
extern u32 DAT_10005004 asm("D_10005004");
extern u32 DAT_10005008 asm("D_10005008");
extern u32 DAT_1000500c asm("D_1000500c");
extern u32 LAB_002f2f30 asm("D_002f2f30");
extern u32 LAB_002f3108 asm("D_002f3108");
extern u32 LAB_002f3158 asm("D_002f3158");
extern u32 LAB_002f3160 asm("D_002f3160");
extern u32 _DAT_00363c70 asm("D_00363c70");
extern AnyCell s_sceGsExecStoreImage__DMA_Ch_1__G_00376668 asm("D_00376668");
extern AnyCell s_sceGsExecStoreImage__Enough_data_003766a8 asm("D_003766a8");
s32 GsGetIMR(...) asm("func_00305940");
s32 GsPutIMR(...) asm("func_00305960");
extern u32 REG_DMAC_1_VIF1_CHCR asm("D_10009000");
extern u32 REG_DMAC_1_VIF1_MADR asm("D_10009010");
extern u32 REG_DMAC_1_VIF1_QWC asm("D_10009020");
extern u32 REG_GIF_CTRL asm("D_10003000");
extern u32 REG_GS_BUSDIR asm("D_12001040");
extern u32 REG_GS_CSR asm("D_12001000");
extern u32 REG_VIF1_FBRST asm("D_10003c10");
extern u32 REG_VIF1_FIFO asm("D_10005000");
extern u32 REG_VIF1_STAT asm("D_10003c00");

// Ghidra decompile of 0x002f2d60, wrapped mechanically (ad/fallback.py)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002f2d60_impl(uint param_1,uint param_2) asm("func_002f2d60");
undefined4 FUN_002f2d60_impl(uint param_1,uint param_2) {
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar6 = 0;
  uVar15 = 0;
  uVar20 = 0;
  uVar5 = 0;
  uVar19 = 0;
  uVar7 = (uint)*(undefined8 *)(param_1 + 0x40);
  uVar18 = uVar7 & 0xfff;
  uVar17 = (uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) & 0xfff;
  uVar13 = 0;
  switch((uint)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x18) & 0x3f) {
  case 0:
  case 0x30:
    uVar15 = uVar18 * uVar17 * 4;
    uVar5 = (int)uVar15 >> 4;
    uVar15 = uVar15 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 3 & 0x1ffc;
      iVar6 = (int)(uVar18 * uVar13) >> 2;
LAB_002f2f30:
      iVar6 = ((iVar6 - uVar20) - uVar5) + -1;
      goto switchD_002f2df4_caseD_3;
    }
    break;
  case 1:
  case 0x31:
    uVar15 = uVar18 * uVar17 * 3;
    uVar5 = (int)uVar15 >> 4;
    uVar15 = uVar15 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 0xf & 0x1ff0;
      iVar6 = ((((int)(uVar18 * uVar13 * 3) >> 4) - uVar20) - uVar5) + -1;
      goto switchD_002f2df4_caseD_3;
    }
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    uVar15 = uVar18 * uVar17 * 2;
    uVar5 = (int)uVar15 >> 4;
    uVar15 = uVar15 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar18 * uVar13) >> 3;
      goto LAB_002f2f30;
    }
    break;
  default:
    goto switchD_002f2df4_caseD_3;
  case 0x13:
  case 0x1b:
    uVar5 = (int)(uVar18 * uVar17) >> 4;
    uVar15 = uVar18 * uVar17 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar18 * uVar13) >> 4;
      goto LAB_002f2f30;
    }
    break;
  case 0x14:
  case 0x24:
  case 0x2c:
    uVar5 = (int)(uVar18 * uVar17) >> 5;
    uVar15 = (int)(uVar18 * uVar17) >> 1 & 0xf;
    uVar20 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar15 != 0) {
      uVar13 = uVar17 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar18 * uVar13) >> 5;
      goto LAB_002f2f30;
    }
  }
  iVar6 = 0;
  uVar13 = uVar17;
switchD_002f2df4_caseD_3:
  if (uVar15 != 0) {
    *(ulong *)(param_1 + 0x40 | 0x20000000) = (long)(int)(uVar7 & 0xfff) | (ulong)uVar13 << 0x20;
  }
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar19;
    uVar19 = uVar19 + 1;
    if (bVar1) goto LAB_002f3108;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar9 = GsGetIMR();
  uVar10 = GsPutIMR(uVar9 | 0x200);
  REG_GS_CSR = 2;
  REG_DMAC_1_VIF1_QWC = 7;
  if ((param_1 & 0x70000000) == 0x70000000) {
    param_1 = param_1 & 0xfffffff | 0x80000000;
  }
  else {
    param_1 = param_1 & 0xfffffff;
  }
  REG_DMAC_1_VIF1_MADR = param_1;
  REG_DMAC_1_VIF1_CHCR = 0x101;
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar19;
    uVar19 = uVar19 + 1;
    if (bVar1) {
LAB_002f3108:
      FUN_003080d0(0x376600);
      return 0xffffffff;
    }
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar9 = REG_GS_CSR;
  while ((uVar9 & 2) == 0) {
    bVar1 = 0x1000000 < uVar19;
    uVar19 = uVar19 + 1;
    if (bVar1) {
      FUN_003080d0(0x376638);
      REG_VIF1_FIFO = (int)_DAT_00363c70;
      DAT_10005004 = (int)((ulong)_DAT_00363c70 >> 0x20);
      DAT_10005008 = DAT_00363c78;
      DAT_1000500c = DAT_00363c7c;
      return 0xffffffff;
    }
    uVar9 = REG_GS_CSR;
  }
  REG_VIF1_STAT = 0x800000;
  REG_GS_BUSDIR = 1;
  if (uVar20 != 0) {
    REG_DMAC_1_VIF1_QWC = uVar20;
    if ((param_2 & 0x70000000) == 0x70000000) {
      uVar7 = param_2 & 0xfffffff | 0x80000000;
    }
    else {
      uVar7 = param_2 & 0xfffffff;
    }
    REG_DMAC_1_VIF1_MADR = uVar7;
    REG_DMAC_1_VIF1_CHCR = 0x100;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar7 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar19;
      uVar19 = uVar19 + 1;
      if (bVar1) {
        pcVar12 = s_sceGsExecStoreImage__DMA_Ch_1__G_00376668;
        goto LAB_002f3160;
      }
      uVar7 = REG_DMAC_1_VIF1_CHCR;
    }
  }
  iVar14 = 0;
  if (uVar5 != 0) {
    puVar16 = (undefined4 *)(uVar20 * 0x10 + param_2);
    do {
      uVar7 = REG_VIF1_STAT;
      while ((uVar7 & 0x1f000000) == 0) {
        bVar1 = 0x1000000 < uVar19;
        uVar19 = uVar19 + 1;
        if (bVar1) goto LAB_002f3158;
        uVar7 = REG_VIF1_STAT;
      }
      uVar2 = REG_VIF1_FIFO;
      uVar3 = DAT_10005008;
      uVar4 = DAT_1000500c;
      iVar14 = iVar14 + 1;
      *puVar16 = (int)uVar2;
      puVar16[1] = (int)((ulong)uVar2 >> 0x20);
      puVar16[2] = uVar3;
      puVar16[3] = uVar4;
      puVar16 = puVar16 + 4;
    } while (iVar14 < (int)uVar5);
  }
  if (uVar15 != 0) {
    uVar7 = REG_VIF1_STAT;
    while ((uVar7 & 0x1f000000) == 0) {
      bVar1 = 0x1000000 < uVar19;
      uVar19 = uVar19 + 1;
      if (bVar1) {
LAB_002f3158:
        pcVar12 = s_sceGsExecStoreImage__Enough_data_003766a8;
LAB_002f3160:
        FUN_003080d0(pcVar12);
        REG_GS_CSR = 0x100;
        REG_GS_BUSDIR = 0;
        REG_GIF_CTRL = 1;
        REG_VIF1_FBRST = 1;
        return 0xffffffff;
      }
      uVar7 = REG_VIF1_STAT;
    }
    iVar14 = 0;
    uVar2 = REG_VIF1_FIFO;
    uStack_88 = DAT_10005008;
    uStack_84 = DAT_1000500c;
    uStack_90 = (int)uVar2;
    uStack_8c = (int)((ulong)uVar2 >> 0x20);
    if (uVar15 != 0) {
      do {
        puVar8 = (undefined1 *)((int)&uStack_90 + iVar14);
        puVar11 = (undefined1 *)((uVar20 + uVar5) * 0x10 + param_2 + iVar14);
        iVar14 = iVar14 + 1;
        *puVar11 = *puVar8;
      } while (iVar14 < (int)uVar15);
    }
    iVar14 = 0;
    if (0 < iVar6) {
      do {
        uVar15 = REG_VIF1_STAT;
        while ((uVar15 & 0x1f000000) == 0) {
          bVar1 = 0x1000000 < uVar19;
          uVar19 = uVar19 + 1;
          if (bVar1) goto LAB_002f3158;
          uVar15 = REG_VIF1_STAT;
        }
        uVar2 = REG_VIF1_FIFO;
        uStack_88 = DAT_10005008;
        uStack_84 = DAT_1000500c;
        iVar14 = iVar14 + 1;
        uStack_90 = (undefined4)uVar2;
        uStack_8c = (undefined4)((ulong)uVar2 >> 0x20);
      } while (iVar14 < iVar6);
    }
  }
  REG_VIF1_STAT = 0;
  REG_GS_BUSDIR = 0;
  GsPutIMR(uVar10);
  REG_GS_CSR = 2;
  REG_VIF1_FIFO = (int)_DAT_00363c70;
  DAT_10005004 = (int)((ulong)_DAT_00363c70 >> 0x20);
  DAT_10005008 = DAT_00363c78;
  DAT_1000500c = DAT_00363c7c;
  return 0;
}

