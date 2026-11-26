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

s32 FUN_001085a8(...) asm("func_001085a8");
s32 FUN_00108730(...) asm("func_00108730");
s32 FUN_00108930(...) asm("func_00108930");
s32 FUN_00108c00(...) asm("func_00108c00");
s32 FUN_00108eb8(...) asm("func_00108eb8");
s32 FUN_00109008(...) asm("func_00109008");
s32 FUN_00109360(...) asm("func_00109360");
s32 FUN_001093c8(...) asm("func_001093c8");
s32 FUN_001094e0(...) asm("func_001094e0");
s32 FUN_00109690(...) asm("func_00109690");
s32 FUN_00109708(...) asm("func_00109708");
s32 FUN_00109788(...) asm("func_00109788");
s32 FUN_001097e8(...) asm("func_001097e8");
s32 FUN_00109ea8(...) asm("func_00109ea8");
s32 FUN_00109f58(...) asm("func_00109f58");
s32 FUN_0010aba8(...) asm("func_0010aba8");
s32 FUN_0010ae90(...) asm("func_0010ae90");
s32 FUN_0010aed8(...) asm("func_0010aed8");
s32 FUN_001219b8(...) asm("func_001219b8");
s32 FUN_00121cc8(...) asm("_ZN2kn8ModelSKL10drawNormalEPNS_16ProjectionCameraEPPN3Axa11DMA_SET_TAGEPNS_9DrawParamEPcPNS_13AnimationWorkEbPNS_7FMatrixE");
s32 FUN_00132018(...) asm("func_00132018");
s32 FUN_00132390(...) asm("func_00132390");
s32 FUN_00132c98(...) asm("func_00132c98");
s32 FUN_00132cd0(...) asm("func_00132cd0");
s32 FUN_00132d00(...) asm("func_00132d00");
s32 FUN_00132d30(...) asm("func_00132d30");
s32 FUN_00132d60(...) asm("func_00132d60");
s32 FUN_00132d90(...) asm("func_00132d90");
s32 FUN_00133078(...) asm("func_00133078");
s32 FUN_001333f8(...) asm("func_001333f8");
s32 FUN_001334a8(...) asm("func_001334a8");
s32 FUN_00133bb8(...) asm("func_00133bb8");
s32 FUN_00133c60(...) asm("func_00133c60");
s32 FUN_001344f8(...) asm("func_001344f8");
s32 FUN_00134c00(...) asm("func_00134c00");
extern AnyCell DAT_0036a9a8 asm("D_0036a9a8");
extern AnyCell DAT_0036a9ac asm("D_0036a9ac");
extern AnyCell DAT_0036a9b0 asm("D_0036a9b0");
extern AnyCell DAT_003a99f0 asm("D_003a99f0");
extern AnyCell DAT_003a99f4 asm("D_003a99f4");
extern AnyCell DAT_303ec000 asm("D_303ec000");
extern AnyCell LAB_00122230 asm("D_00122230");
extern AnyCell LAB_00122590 asm("D_00122590");
extern AnyCell LAB_001225f4 asm("D_001225f4");
extern AnyCell LAB_0012289c asm("D_0012289c");
extern AnyCell LAB_00122f44 asm("D_00122f44");
extern AnyCell LAB_00122f60 asm("D_00122f60");
_GHIDRA_ANY(CONCAT44)
static AnyCell NAN;

// Ghidra decompile of 0x00121cc8, wrapped mechanically (ad/fallback.py)

/* WARNING: Removing unreachable block (ram,0x00122d90) */
/* WARNING: Removing unreachable block (ram,0x00122b20) */

undefined4 FUN_00121cc8_impl(int param_1,ulong *param_2,undefined4 *param_3,undefined8 param_4,int param_5, undefined4 param_6,uint param_7,long param_8) asm("_ZN2kn8ModelSKL10drawNormalEPNS_16ProjectionCameraEPPN3Axa11DMA_SET_TAGEPNS_9DrawParamEPcPNS_13AnimationWorkEbPNS_7FMatrixE");
undefined4 FUN_00121cc8_impl(int param_1,ulong *param_2,undefined4 *param_3,undefined8 param_4,int param_5, undefined4 param_6,uint param_7,long param_8) {
  char cVar1;
  byte bVar2;
  uint *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  short *psVar10;
  undefined4 uVar11;
  ulong *puVar12;
  float *pfVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  ulong uVar26;
  undefined4 in_t3_udw;
  undefined4 in_register_000000bc;
  ulong uVar27;
  long lVar28;
  byte *pbVar29;
  uint uVar30;
  int iVar31;
  undefined4 *puVar32;
  int iVar33;
  uint *puVar34;
  int iVar35;
  undefined4 *puVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  undefined4 auStack_170 [32];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int iStack_d0;
  undefined4 *puStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint *puStack_b8;
  int iStack_b4;
  undefined8 *puStack_b0;
  float *pfStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  short *psStack_a0;
  short *psStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  uint *puStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 *puStack_6c;
  uint uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_c0 = param_7 & 0xff;
  iVar33 = 0;
  iStack_d0 = param_1;
  puStack_cc = param_3;
  iStack_c8 = param_5;
  uStack_c4 = param_6;
  uStack_bc = FUN_0010ae90();
  iStack_b4 = 0;
  puVar34 = (uint *)param_4;
  puStack_b8 = *(uint **)(iStack_d0 + 4);
  lVar15 = 0;
  if ((*puVar34 & 0x10000) != 0) {
    lVar15 = param_8;
  }
  puStack_b0 = (undefined8 *)lVar15;
  if ((lVar15 != 0) || (pfStack_ac = (float *)param_8, (*(uint *)(iStack_d0 + 0xc) & 2) == 0)) {
    pfStack_ac = (float *)0x0;
  }
  uStack_a8 = 0;
  if ((puStack_b8[2] & 1) != 0) {
    uStack_a8 = puVar34[0xc];
  }
  puVar36 = auStack_170;
  iVar35 = 0;
  puStack_6c = puVar36;
  do {
    uVar11 = FUN_00108930(param_4,iVar35);
    iVar35 = iVar35 + 1;
    *puVar36 = uVar11;
    puVar36 = puVar36 + 1;
  } while (iVar35 < 0x20);
  iVar35 = 0;
  puVar3 = puStack_b8;
  if (0 < (int)puStack_b8[7]) {
    do {
      pbVar29 = (byte *)(iStack_c8 + iVar35);
      iVar35 = iVar35 + 1;
      if ((*pbVar29 & 0xf) != 0) {
        uVar30 = puVar3[8];
        cVar1 = *(char *)(*(int *)((uVar30 >> 4 & 0x7c) + (int)puStack_6c) + 3);
        if ((cVar1 != '\0') &&
           (((iVar33 = iVar33 + 1, (uVar30 & 1) != 0 || (-1 < cVar1)) || ((*pbVar29 & 4) != 0)))) {
          iStack_b4 = iStack_b4 + 1;
        }
      }
      puVar3 = puVar3 + 8;
    } while (iVar35 < (int)puStack_b8[7]);
  }
  uVar11 = 1;
  if (iVar33 != 0) {
    uStack_a4 = FUN_001344f8();
    psStack_9c = (short *)0x0;
    psStack_a0 = (short *)puVar34[9];
    iStack_98 = 0;
    if ((psStack_a0 != (short *)0x0) && (*psStack_a0 == -1)) {
      psStack_9c = (short *)((int)psStack_a0 + *(int *)(psStack_a0 + 4));
      iStack_98 = (int)psStack_a0 + *(int *)(psStack_a0 + 6);
      psStack_a0 = psStack_9c;
    }
    FUN_00109360(uStack_a4,2);
    puVar12 = (ulong *)FUN_00108730(param_4,uStack_a4);
    if ((psStack_a0 == (short *)0x0) && (lVar15 = FUN_0010aba8(), lVar15 == 10)) {
      *(undefined4 *)(puVar12 + 7) = DAT_0036a9a8;
    }
    else if (puStack_b0 == (undefined8 *)0x0) {
      if (uStack_a8 == 0) {
        if (pfStack_ac != (float *)0x0) {
          pfVar13 = (float *)FUN_00133bb8(uStack_a4,4,0x1000101,0x6c04400a);
          fVar38 = DAT_0036a9ac;
          fStack_e4 = DAT_0036a9ac;
          fStack_f0 = DAT_0036a9ac;
          fStack_ec = DAT_0036a9ac;
          fStack_e8 = DAT_0036a9ac;
          if (pfVar13 != &fStack_f0) {
            *pfVar13 = DAT_0036a9ac;
            pfVar13[1] = fVar38;
            pfVar13[2] = fVar38;
            pfVar13[3] = fVar38;
          }
          if (pfVar13 + 4 != pfStack_ac) {
            uVar16 = *(undefined8 *)pfStack_ac;
            fVar38 = pfStack_ac[2];
            fVar39 = pfStack_ac[3];
            pfVar13[4] = (float)uVar16;
            pfVar13[5] = (float)((ulong)uVar16 >> 0x20);
            pfVar13[6] = fVar38;
            pfVar13[7] = fVar39;
          }
          if (pfVar13 + 8 != pfStack_ac + 4) {
            uVar16 = *(undefined8 *)(pfStack_ac + 4);
            fVar38 = pfStack_ac[6];
            fVar39 = pfStack_ac[7];
            pfVar13[8] = (float)uVar16;
            pfVar13[9] = (float)((ulong)uVar16 >> 0x20);
            pfVar13[10] = fVar38;
            pfVar13[0xb] = fVar39;
          }
          if (pfVar13 + 0xc != pfStack_ac + 8) {
            uVar16 = *(undefined8 *)(pfStack_ac + 8);
            fVar38 = pfStack_ac[10];
            fVar39 = pfStack_ac[0xb];
            pfVar13[0xc] = (float)uVar16;
            pfVar13[0xd] = (float)((ulong)uVar16 >> 0x20);
            pfVar13[0xe] = fVar38;
            pfVar13[0xf] = fVar39;
          }
        }
      }
      else if (pfStack_ac == (float *)0x0) {
        FUN_00134c00(uStack_a8,uStack_a4);
      }
    }
    else {
      puVar14 = (undefined8 *)FUN_00133bb8(uStack_a4,4,0x1000101,0x6c04400a);
      if (puVar14 == puStack_b0) {
        uVar19 = *puVar12;
      }
      else {
        uVar16 = *puStack_b0;
        uVar11 = *(undefined4 *)(puStack_b0 + 1);
        uVar20 = *(undefined4 *)((int)puStack_b0 + 0xc);
        uVar17 = puStack_b0[2];
        uVar24 = *(undefined4 *)(puStack_b0 + 3);
        uVar21 = *(undefined4 *)((int)puStack_b0 + 0x1c);
        uVar18 = puStack_b0[4];
        uVar23 = *(undefined4 *)(puStack_b0 + 5);
        uVar25 = *(undefined4 *)((int)puStack_b0 + 0x2c);
        uVar6 = puStack_b0[6];
        in_t3_udw = *(undefined4 *)(puStack_b0 + 7);
        in_register_000000bc = *(undefined4 *)((int)puStack_b0 + 0x3c);
        *(int *)puVar14 = (int)uVar16;
        *(int *)((int)puVar14 + 4) = (int)((ulong)uVar16 >> 0x20);
        *(undefined4 *)(puVar14 + 1) = uVar11;
        *(undefined4 *)((int)puVar14 + 0xc) = uVar20;
        *(int *)(puVar14 + 2) = (int)uVar17;
        *(int *)((int)puVar14 + 0x14) = (int)((ulong)uVar17 >> 0x20);
        *(undefined4 *)(puVar14 + 3) = uVar24;
        *(undefined4 *)((int)puVar14 + 0x1c) = uVar21;
        *(int *)(puVar14 + 4) = (int)uVar18;
        *(int *)((int)puVar14 + 0x24) = (int)((ulong)uVar18 >> 0x20);
        *(undefined4 *)(puVar14 + 5) = uVar23;
        *(undefined4 *)((int)puVar14 + 0x2c) = uVar25;
        *(int *)(puVar14 + 6) = (int)uVar6;
        *(int *)((int)puVar14 + 0x34) = (int)((ulong)uVar6 >> 0x20);
        *(undefined4 *)(puVar14 + 7) = in_t3_udw;
        *(undefined4 *)((int)puVar14 + 0x3c) = in_register_000000bc;
        uVar19 = *puVar12;
      }
      psStack_a0 = (short *)0x0;
      *puVar12 = uVar19 & 0xfc007fffffffffff | (uVar19 >> 0x2f & 0x7ff | 0x50) << 0x2f;
      *(undefined **)puVar12 = &DAT_303ec000;
    }
    if (puVar12 + 10 != param_2) {
      uVar19 = *param_2;
      uVar7 = param_2[1];
      uVar11 = *(undefined4 *)((int)param_2 + 0xc);
      uVar26 = param_2[2];
      uVar8 = param_2[3];
      uVar20 = *(undefined4 *)((int)param_2 + 0x1c);
      uVar27 = param_2[4];
      uVar9 = param_2[5];
      uVar24 = *(undefined4 *)((int)param_2 + 0x2c);
      uVar5 = param_2[6];
      in_t3_udw = (undefined4)param_2[7];
      in_register_000000bc = *(undefined4 *)((int)param_2 + 0x3c);
      *(int *)(puVar12 + 10) = (int)uVar19;
      *(int *)((int)puVar12 + 0x54) = (int)(uVar19 >> 0x20);
      *(int *)(puVar12 + 0xb) = (int)uVar7;
      *(undefined4 *)((int)puVar12 + 0x5c) = uVar11;
      *(int *)(puVar12 + 0xc) = (int)uVar26;
      *(int *)((int)puVar12 + 100) = (int)(uVar26 >> 0x20);
      *(int *)(puVar12 + 0xd) = (int)uVar8;
      *(undefined4 *)((int)puVar12 + 0x6c) = uVar20;
      *(int *)(puVar12 + 0xe) = (int)uVar27;
      *(int *)((int)puVar12 + 0x74) = (int)(uVar27 >> 0x20);
      *(int *)(puVar12 + 0xf) = (int)uVar9;
      *(undefined4 *)((int)puVar12 + 0x7c) = uVar24;
      *(int *)(puVar12 + 0x10) = (int)uVar5;
      *(int *)((int)puVar12 + 0x84) = (int)(uVar5 >> 0x20);
      *(undefined4 *)(puVar12 + 0x11) = in_t3_udw;
      *(undefined4 *)((int)puVar12 + 0x8c) = in_register_000000bc;
    }
    if ((psStack_a0 != (short *)0x0) && (iStack_98 == 0)) {
      iStack_94 = (int)psStack_a0 + *(int *)(psStack_a0 + 10);
      lVar15 = FUN_00109788(uStack_a4,iStack_94);
      if (lVar15 != 0) {
        FUN_00109708(uStack_a4);
      }
      iVar33 = 0;
      uVar16 = FUN_00132018(psStack_a0);
      FUN_00133078(uStack_c4,0x3a99f0,0xf000,*(undefined2 *)((int)puStack_b8 + 0x12),uVar16);
      uVar22 = (uint)*(ushort *)((int)puStack_b8 + 0x12);
      uVar30 = uVar22;
      while (uVar30 != 0) {
        iVar35 = (&DAT_003a99f0)[iVar33 * 2];
        iStack_94 = (int)psStack_a0 +
                    *(int *)(psStack_a0 + 10) +
                    (uint)*(byte *)((int)psStack_a0 + iVar33 + *(int *)(psStack_a0 + 8)) * 0x90 +
                    0x90;
        if (iVar35 == 0) {
          puVar36 = (undefined4 *)0x0;
        }
        else {
          puVar36 = (undefined4 *)((int)&DAT_003a99f0 + (&DAT_003a99f4)[iVar33 * 2]);
        }
        if ((puVar36 != (undefined4 *)0x0) && (0 < iVar35)) {
          iStack_90 = iVar33 * 0xa0;
          piStack_84 = &DAT_003a99f0 + iVar33 * 2;
          do {
            uVar11 = *puVar36;
            lVar15 = FUN_00132d90(uVar11,0);
            psVar10 = psStack_a0;
            if (lVar15 == 0) {
              *piStack_84 = *piStack_84 + -1;
              if (1 < iVar35) {
                *puVar36 = puVar36[iVar35 + -1];
                puVar36 = puVar36 + -1;
              }
            }
            else {
              iVar31 = *(int *)(psStack_a0 + 0xc) + iStack_90;
              uVar16 = FUN_00132c98(uVar11);
              uVar17 = FUN_00132cd0(uVar11);
              uStack_8c = FUN_00132d00(uVar11);
              uStack_88 = FUN_00132d30(uVar11);
              uVar18 = FUN_00132d60(uVar11);
              FUN_00132d90(uVar11,0);
              uVar19 = *(ulong *)((int)psVar10 + iVar31 + 0x70);
              FUN_001097e8(uVar16,(long)(*(ulong *)(iStack_94 + 0x20) & 0x3fff00000000) >> 0x20,
                           (long)((uVar19 & 0xfc000) << 0x12) >> 0x20,uVar17,uStack_8c,uStack_88,
                           uVar18,(long)((uVar19 & 0x3f00000) << 0xc) >> 0x20);
            }
            iVar35 = iVar35 + -1;
            puVar36 = puVar36 + 1;
          } while (0 < iVar35);
          uVar22 = (uint)*(ushort *)((int)puStack_b8 + 0x12);
        }
        iVar33 = iVar33 + 1;
        uVar30 = (uint)(iVar33 < (int)uVar22);
      }
    }
    puStack_80 = puVar34 + 1;
    iVar33 = 0;
    uStack_70 = 0xffffffff;
    uVar11 = *(undefined4 *)(*(int *)(iStack_d0 + 4) + 4);
    uVar16 = FUN_0010aba8();
    uStack_78 = FUN_00109f58(uVar16,uVar11,*(undefined1 *)((int)puVar34 + 7));
    fStack_e0 = -NAN;
    uVar30 = puStack_b8[7];
    puVar36 = puStack_cc;
    if (0 < (int)uVar30) {
      do {
        if ((*(byte *)(iStack_c8 + iVar33) & 0xf) != 0) {
          uVar22 = puStack_b8[iVar33 * 8 + 8];
          puVar3 = *(uint **)((uVar22 >> 4 & 0x7c) + (int)puStack_6c);
          bVar2 = *(byte *)((int)puVar3 + 3);
          if ((bVar2 != 0) && ((*(byte *)(iStack_c8 + iVar33) & 4) == 0)) {
            uVar37 = (uint)bVar2;
            if ((*puVar34 & 0x10) == 0) {
              iVar35 = (uint)bVar2 << 0x18;
              if (((uVar22 & 1) == 0) &&
                 (iVar31 = iVar35 >> 0x18, iVar35 = uVar37 << 0x18, iVar31 < 0))
              goto joined_r0x00122fc8;
            }
            else {
              iVar35 = uVar37 << 0x18;
              if (((char)bVar2 < '\0') && (iVar35 = uVar37 << 0x18, (uVar22 & 1) == 0)) {
joined_r0x00122fc8:
                iVar35 = uVar37 << 0x18;
                if (uStack_c0 == 1) goto LAB_00122230;
              }
            }
            if (((iVar35 >> 0x18 < 0) || (uStack_c0 != 0)) &&
               (((*(int *)(*(int *)(iStack_d0 + 4) + 4) != 1 &&
                 ((puStack_b8[iVar33 * 8 + 8] >> 0x15 & 1) == 0)) ||
                (((puStack_b8[iVar33 * 8 + 8] & 1) == 0 || (uStack_c0 != 0)))))) {
              FUN_00133bb8(uStack_a4,0,0x11000000,0x13000000);
              fStack_f0 = 5.60519e-45;
              fStack_e4 = 0.0;
              if ((*puVar34 & 8) == 0) {
                fStack_f0 = 0.0;
              }
              fStack_e8 = 0.0;
              fStack_ec = 0.0;
              if ((*puVar34 & 4) != 0) {
                fStack_f0 = (float)((uint)fStack_f0 | 1);
              }
              if (puStack_b0 != (undefined8 *)0x0) {
                fStack_f0 = (float)((uint)fStack_f0 | 0x4000);
              }
              if (uStack_a8 == 0) {
                if ((pfStack_ac != (float *)0x0) && ((puStack_b8[iVar33 * 8 + 8] >> 0x1d & 1) != 0))
                {
                  fStack_f0 = (float)((uint)fStack_f0 | 0x20);
                }
LAB_00122f60:
                if (uStack_a8 != 0) {
                  uVar30 = puStack_b8[iVar33 * 8 + 8];
LAB_00122f44:
                  if ((uVar30 >> 0x1e & 1) == 0) {
                    fStack_f0 = (float)((uint)fStack_f0 | 0x10);
                  }
                }
              }
              else {
                if (pfStack_ac == (float *)0x0) goto LAB_00122f60;
                uVar30 = puStack_b8[iVar33 * 8 + 8];
                if ((uVar30 >> 0x1d & 1) == 0) goto LAB_00122f44;
                fStack_f0 = (float)((uint)fStack_f0 | 0x20);
              }
              if (puStack_80 != puVar3) {
                FUN_001085a8(uStack_a4,puVar3);
                fStack_f0 = (float)((uint)fStack_f0 | 8);
                puStack_80 = puVar3;
                if (((*puVar34 & 0x10) == 0) ||
                   (uVar30 = puStack_b8[iVar33 * 8 + 8] >> 6 & 0x1f,
                   9 < uVar30 - 10 && 9 < uVar30 - 0x14)) {
                  uVar16 = FUN_0010aba8();
                  uVar16 = FUN_00109f58(uVar16,*(undefined4 *)(*(int *)(iStack_d0 + 4) + 4),
                                        *(byte *)((int)puVar3 + 3));
                  uVar17 = FUN_0010aba8();
                  uVar17 = FUN_00109ea8(uVar17,*(undefined4 *)(*(int *)(iStack_d0 + 4) + 4),
                                        *(byte *)((int)puVar3 + 3));
                  uVar26 = (ulong)(byte)*puVar3 | 0x3f80000000000000 |
                           (ulong)*(byte *)((int)puVar3 + 2) << 0x10 |
                           (ulong)*(byte *)((int)puVar3 + 1) << 8 |
                           (ulong)*(byte *)((int)puVar3 + 3) << 0x18;
                  uVar11 = 0x2c;
                  uVar19 = 0;
                }
                else {
                  if ((puStack_b8[iVar33 * 8 + 8] >> 6 & 0x1f) < 0x14) {
                    bVar4 = *(byte *)((int)puVar3 + 3) < 0x60;
                  }
                  else {
                    bVar4 = *(byte *)((int)puVar3 + 3) < 0x20;
                  }
                  if (bVar4) {
                    uVar19 = *(ulong *)(puVar34 + 6) | 0x100000000;
                  }
                  else {
                    uVar19 = *(ulong *)(puVar34 + 6) & 0xfffffffeffffffff;
                  }
                  uVar16 = FUN_0010aba8();
                  uVar16 = FUN_00109f58(uVar16,*(undefined4 *)(*(int *)(iStack_d0 + 4) + 4),
                                        *(byte *)((int)puVar3 + 3));
                  uVar26 = (ulong)(byte)*puVar3 | 0x3f80000000000000 |
                           (ulong)*(byte *)((int)puVar3 + 2) << 0x10 |
                           (ulong)*(byte *)((int)puVar3 + 1) << 8 |
                           (ulong)*(byte *)((int)puVar3 + 3) << 0x18;
                  uVar11 = 0x2e;
                  uVar17 = 0x5000d;
                }
                FUN_00108c00(uStack_bc,uVar11,0,uVar19,uVar17,uVar16,0,uVar26);
              }
              puVar3 = puStack_b8;
              uVar30 = puStack_b8[iVar33 * 8 + 8] >> 0x16 & 0x1f;
              if (((uVar30 == 0) || (psStack_a0 == (short *)0x0)) ||
                 (lVar15 = FUN_00132390(uStack_c4,0,2,0xffffffffffffffff,uVar30 - 1),
                 psVar10 = psStack_a0, lVar15 == 0)) {
LAB_00122590:
                lVar28 = CONCAT44(fStack_ec,fStack_f0);
              }
              else {
                iVar35 = *(int *)(psStack_a0 + 0xc) + puVar3[iVar33 * 8 + 9] * 0xa0;
                uVar19 = *(ulong *)((int)psStack_a0 + iVar35 + 0x80) & 3;
                if ((uVar19 == 0) || (lVar28 = CONCAT44(fStack_ec,fStack_f0), uVar19 == 3)) {
                  fStack_f0 = (float)((uint)fStack_f0 | 2);
                  uVar16 = FUN_0010aed8((uint)(*(ulong *)((int)psStack_a0 + iVar35 + 0x70) >> 0x1a)
                                        & 0xf);
                  fStack_e8 = (float)FUN_001333f8(lVar15,((uint)(*(ulong *)((int)psVar10 +
                                                                           iVar35 + 0x80) >> 4) &
                                                         0x3ff) + 1,uVar16);
                  uVar16 = FUN_0010aed8((uint)(*(ulong *)((int)psVar10 + iVar35 + 0x70) >> 0x1e) &
                                        0xf);
                  fStack_e4 = (float)FUN_001334a8(lVar15,((uint)((ulong)*(undefined8 *)
                                                                         ((int)psVar10 +
                                                                         iVar35 + 0x80) >> 0x18) &
                                                         0x3ff) + 1,uVar16);
                  goto LAB_00122590;
                }
              }
              if ((lVar28 != CONCAT44(fStack_dc,fStack_e0)) ||
                 (bVar4 = false, CONCAT44(fStack_e4,fStack_e8) != CONCAT44(fStack_d4,fStack_d8))) {
                bVar4 = true;
              }
              if (bVar4) {
LAB_001225f4:
                FUN_001093c8(uStack_a4,fStack_f0,0,fStack_ec,fStack_e8,fStack_e4);
                psVar10 = psStack_a0;
                if ((((uint)fStack_f0 & 0x20) == 0) || (psStack_a0 == (short *)0x0)) {
                  if ((((uint)fStack_f0 & 0x10) != 0) &&
                     ((pfStack_ac != (float *)0x0 && (((uint)fStack_e0 & 0x10) == 0)))) {
                    FUN_00134c00(uStack_a8,uStack_a4);
                  }
                }
                else {
                  iVar35 = *(int *)(psStack_a0 + 0xc) + puStack_b8[iVar33 * 8 + 9] * 0xa0;
                  uVar19 = FUN_0010aed8((uint)(*(ulong *)((int)psStack_a0 + iVar35 + 0x70) >> 0x1a)
                                        & 0xf);
                  uVar26 = FUN_0010aed8((uint)(*(ulong *)((int)psVar10 + iVar35 + 0x70) >> 0x1e) &
                                        0xf);
                  uVar27 = *(ulong *)((int)psVar10 + iVar35 + 0x80);
                  uVar30 = (uint)(uVar27 >> 0x18);
                  if (((uVar27 & 3) == 0) || ((uVar27 & 3) == 3)) {
                    uVar22 = (uint)(uVar27 >> 4);
                    uVar37 = 0;
                    uStack_60 = 0;
                  }
                  else {
                    uVar37 = (uint)(uVar27 >> 4) & 0x3ff;
                    uStack_60 = uVar30 & 0x3ff;
                    uVar22 = (uint)(uVar27 >> 0xe);
                    uVar30 = (uint)(uVar27 >> 0x22);
                  }
                  uVar22 = ((uVar22 & 0x3ff) - uVar37) + 1;
                  uVar30 = ((uVar30 & 0x3ff) - uStack_60) + 1;
                  iVar35 = (int)uVar19;
                  iVar31 = (int)uVar26;
                  uStack_58 = in_t3_udw;
                  uStack_54 = in_register_000000bc;
                  if ((uStack_a8 == 0) || (iStack_5c = 0, ((uint)fStack_e0 & 0x20) != 0)) {
                    iStack_5c = 0;
                    pfVar13 = (float *)FUN_00133bb8(uStack_a4,1,0x1000101,0x6c01400a);
                    if ((long)uVar19 < 0) {
                      fVar38 = (float)(uVar19 & 0xffffffff);
                    }
                    else {
                      fVar38 = (float)iVar35;
                    }
                    *pfVar13 = ((float)uVar22 * DAT_0036a9ac) / fVar38;
                    if ((long)uVar26 < 0) {
                      fVar38 = (float)(uVar26 & 0xffffffff);
                    }
                    else {
                      fVar38 = (float)iVar31;
                    }
                    pfVar13[1] = ((float)uVar30 * DAT_0036a9ac) / fVar38;
                    if ((long)uVar19 < 0) {
                      fVar38 = (float)(uVar19 & 0xffffffff);
                    }
                    else {
                      fVar38 = (float)iVar35;
                    }
                    pfVar13[2] = ((float)uVar37 * DAT_0036a9b0 + (float)uVar22 * DAT_0036a9ac) /
                                 fVar38;
                    if (iStack_5c < 0) {
                      fVar38 = (float)uStack_60;
                    }
                    else {
                      fVar38 = (float)(int)uStack_60;
                    }
                    if ((long)uVar26 < 0) {
                      fVar39 = (float)(uVar26 & 0xffffffff);
                    }
                    else {
                      fVar39 = (float)iVar31;
                    }
                    pfVar13[3] = (fVar38 * DAT_0036a9b0 + (float)uVar30 * DAT_0036a9ac) / fVar39;
                    in_t3_udw = uStack_58;
                    in_register_000000bc = uStack_54;
                  }
                  else {
                    pfVar13 = (float *)FUN_00133bb8(uStack_a4,4,0x1000101,0x6c04400a);
                    if ((long)uVar19 < 0) {
                      fVar38 = (float)(uVar19 & 0xffffffff);
                    }
                    else {
                      fVar38 = (float)iVar35;
                    }
                    *pfVar13 = ((float)uVar22 * DAT_0036a9ac) / fVar38;
                    if ((long)uVar26 < 0) {
                      fVar38 = (float)(uVar26 & 0xffffffff);
                    }
                    else {
                      fVar38 = (float)iVar31;
                    }
                    pfVar13[1] = ((float)uVar30 * DAT_0036a9ac) / fVar38;
                    if ((long)uVar19 < 0) {
                      fVar38 = (float)(uVar19 & 0xffffffff);
                    }
                    else {
                      fVar38 = (float)iVar35;
                    }
                    pfVar13[2] = ((float)uVar37 * DAT_0036a9b0 + (float)uVar22 * DAT_0036a9ac) /
                                 fVar38;
                    if (iStack_5c < 0) {
                      fVar38 = (float)uStack_60;
                    }
                    else {
                      fVar38 = (float)(int)uStack_60;
                    }
                    if ((long)uVar26 < 0) {
                      fVar39 = (float)(uVar26 & 0xffffffff);
                    }
                    else {
                      fVar39 = (float)iVar31;
                    }
                    pfVar13[3] = (fVar38 * DAT_0036a9b0 + (float)uVar30 * DAT_0036a9ac) / fVar39;
                    if (pfVar13 + 4 != pfStack_ac) {
                      uVar16 = *(undefined8 *)pfStack_ac;
                      fVar38 = pfStack_ac[2];
                      fVar39 = pfStack_ac[3];
                      pfVar13[4] = (float)uVar16;
                      pfVar13[5] = (float)((ulong)uVar16 >> 0x20);
                      pfVar13[6] = fVar38;
                      pfVar13[7] = fVar39;
                    }
                    if (pfVar13 + 8 != pfStack_ac + 4) {
                      uVar16 = *(undefined8 *)(pfStack_ac + 4);
                      fVar38 = pfStack_ac[6];
                      fVar39 = pfStack_ac[7];
                      pfVar13[8] = (float)uVar16;
                      pfVar13[9] = (float)((ulong)uVar16 >> 0x20);
                      pfVar13[10] = fVar38;
                      pfVar13[0xb] = fVar39;
                    }
                    in_t3_udw = uStack_58;
                    in_register_000000bc = uStack_54;
                    if (pfVar13 + 0xc != pfStack_ac + 8) {
                      uVar16 = *(undefined8 *)(pfStack_ac + 8);
                      fVar38 = pfStack_ac[10];
                      fVar39 = pfStack_ac[0xb];
                      pfVar13[0xc] = (float)uVar16;
                      pfVar13[0xd] = (float)((ulong)uVar16 >> 0x20);
                      pfVar13[0xe] = fVar38;
                      pfVar13[0xf] = fVar39;
                    }
                  }
                }
                if (&fStack_e0 != &fStack_f0) {
                  fStack_e0 = fStack_f0;
                  fStack_dc = fStack_ec;
                  fStack_d8 = fStack_e8;
                  fStack_d4 = fStack_e4;
                }
LAB_0012289c:
                puVar3 = puStack_b8;
                if (psStack_a0 != (short *)0x0) {
                  if (iStack_98 == 0) {
                    iVar31 = (int)psStack_a0 +
                             *(int *)(psStack_a0 + 10) +
                             (uint)*(byte *)((int)psStack_a0 +
                                            puStack_b8[iVar33 * 8 + 9] + *(int *)(psStack_a0 + 8)) *
                             0x90 + 0x90;
                    lVar15 = FUN_00109788(uStack_a4,iVar31);
                    bVar4 = lVar15 != 0;
                    iVar35 = (&DAT_003a99f0)[puVar3[iVar33 * 8 + 9] * 2];
                    if (iVar35 == 0) {
                      puVar32 = (undefined4 *)0x0;
                    }
                    else {
                      puVar32 = (undefined4 *)
                                ((int)&DAT_003a99f0 + (&DAT_003a99f4)[puVar3[iVar33 * 8 + 9] * 2]);
                    }
                    if ((puVar32 != (undefined4 *)0x0) && (0 < iVar35)) {
                      bVar4 = true;
                      uVar11 = *puVar32;
                      while( true ) {
                        iVar35 = iVar35 + -1;
                        uVar16 = FUN_00132c98(uVar11);
                        FUN_00133c60(uStack_a4,uVar16,0,0,0);
                        uVar16 = FUN_00132c98(*puVar32);
                        puVar32 = puVar32 + 1;
                        FUN_001094e0(iVar31,uVar16);
                        if (iVar35 < 1) break;
                        uVar11 = *puVar32;
                      }
                    }
                    puVar3 = puStack_b8;
                    if (puStack_b8[iVar33 * 8 + 9] == uStack_70) {
                      if (bVar4) {
                        FUN_00109690(uStack_a4);
                      }
                    }
                    else {
                      FUN_00133c60(uStack_a4,
                                   (int)psStack_a0 +
                                   *(int *)(psStack_a0 + 0xc) + puStack_b8[iVar33 * 8 + 9] * 0xa0,0,
                                   0,0);
                      uStack_70 = puVar3[iVar33 * 8 + 9];
                    }
                  }
                  else {
                    FUN_001219b8(iStack_d0,uStack_a4,iVar33,param_4,uStack_c4,uStack_c0,psStack_9c,
                                 iStack_98);
                  }
                }
              }
              else {
                if (((uint)fStack_f0 & 0x20) == 0) goto LAB_0012289c;
                if (psStack_a0 != (short *)0x0) {
                  if (puStack_b8[iVar33 * 8 + 9] != uStack_70) goto LAB_001225f4;
                  goto LAB_0012289c;
                }
              }
              if (uStack_c0 != 0) {
                if ((puStack_b8[iVar33 * 8 + 8] >> 0x1b & 1) == 0) {
                  uVar16 = uStack_78;
                  if ((puStack_b8[iVar33 * 8 + 8] >> 0x1c & 1) != 0) {
                    uVar16 = 0x8000000042;
                  }
                }
                else {
                  uVar16 = 0x8000000048;
                }
                FUN_00108eb8(uStack_bc,uVar16);
                FUN_00109008(uStack_bc);
              }
              FUN_00133c60(uStack_a4,*puVar36,0,0,0);
              uVar30 = puStack_b8[7];
            }
          }
        }
LAB_00122230:
        iVar33 = iVar33 + 1;
        puVar36 = puVar36 + 1;
      } while (iVar33 < (int)uVar30);
    }
    uVar11 = 1;
    if ((uStack_c0 == 0) && (uVar11 = 0, iStack_b4 == 0)) {
      uVar11 = 1;
    }
  }
  return uVar11;
}

