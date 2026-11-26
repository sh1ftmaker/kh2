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

s32 FUN_00108730(...) asm("func_00108730");
s32 FUN_00108eb8(...) asm("func_00108eb8");
s32 FUN_00109008(...) asm("func_00109008");
s32 FUN_00109360(...) asm("func_00109360");
s32 FUN_001093c8(...) asm("func_001093c8");
s32 FUN_001094e0(...) asm("func_001094e0");
s32 FUN_00109690(...) asm("func_00109690");
s32 FUN_00109708(...) asm("func_00109708");
s32 FUN_00109788(...) asm("func_00109788");
s32 FUN_001097e8(...) asm("func_001097e8");
s32 FUN_00109f58(...) asm("func_00109f58");
s32 FUN_0010aba8(...) asm("func_0010aba8");
s32 FUN_0010ae90(...) asm("func_0010ae90");
s32 FUN_0010aed8(...) asm("func_0010aed8");
s32 FUN_0011f7a8(...) asm("_ZN2kn7ModelBG10drawCommonEPNS_16ProjectionCameraEPNS_9DrawParamEPcPNS_13AnimationWorkEbPNS_7FMatrixE");
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
extern AnyCell DAT_0036a950 asm("D_0036a950");
extern AnyCell DAT_0036a954 asm("D_0036a954");
extern AnyCell DAT_003a99f0 asm("D_003a99f0");
extern AnyCell DAT_003a99f4 asm("D_003a99f4");
extern AnyCell DAT_303ec000 asm("D_303ec000");
extern AnyCell LAB_0011f8a8 asm("D_0011f8a8");
extern AnyCell LAB_0011fd10 asm("D_0011fd10");
extern AnyCell LAB_0011feac asm("D_0011feac");
extern AnyCell LAB_0011ff08 asm("D_0011ff08");
extern AnyCell LAB_0012014c asm("D_0012014c");
_GHIDRA_ANY(CONCAT44)
static AnyCell NAN;

// Ghidra decompile of 0x0011f7a8, wrapped mechanically (ad/fallback.py)

/* WARNING: Removing unreachable block (ram,0x001203fc) */
/* WARNING: Removing unreachable block (ram,0x001203a8) */

bool FUN_0011f7a8_impl(int param_1,ulong *param_2,uint *param_3,int param_4,undefined4 param_5, uint param_6,long param_7) asm("_ZN2kn7ModelBG10drawCommonEPNS_16ProjectionCameraEPNS_9DrawParamEPcPNS_13AnimationWorkEbPNS_7FMatrixE");
bool FUN_0011f7a8_impl(int param_1,ulong *param_2,uint *param_3,int param_4,undefined4 param_5, uint param_6,long param_7) {
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  float *pfVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  undefined4 *puVar36;
  uint uVar37;
  int iVar38;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int iStack_a0;
  uint *puStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 *puStack_78;
  float *pfStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  
  uStack_90 = param_6 & 0xff;
  iStack_a0 = param_1;
  puStack_9c = param_3;
  iStack_98 = param_4;
  uStack_94 = param_5;
  uStack_8c = FUN_0010ae90();
  iStack_80 = 0;
  iStack_88 = *(int *)(iStack_a0 + 4);
  lVar11 = 0;
  if ((*puStack_9c & 0x10000) != 0) {
    lVar11 = param_7;
  }
  iStack_7c = 0;
  puStack_78 = (undefined8 *)lVar11;
  if ((lVar11 != 0) || (pfStack_74 = (float *)param_7, (*(uint *)(iStack_a0 + 0xc) & 2) == 0)) {
    pfStack_74 = (float *)0x0;
  }
  iStack_84 = 0;
  iVar31 = iStack_88;
  if (*(ushort *)(iStack_88 + 0x10) != 0) {
    do {
      if ((*(byte *)(iStack_98 + iStack_84) & 0xf) != 0) {
        iStack_7c = iStack_7c + 1;
        if (*(uint *)(iVar31 + 0x28) < 0x10000) {
          if (uStack_90 == 0) {
LAB_0011f8a8:
            if ((puStack_78 == (undefined8 *)0x0) || ((*(uint *)(iVar31 + 0x2c) & 1) == 0)) {
              iStack_80 = iStack_80 + 1;
            }
          }
        }
        else if (uStack_90 != 0) goto LAB_0011f8a8;
      }
      iStack_84 = iStack_84 + 1;
      iVar31 = iVar31 + 0x10;
    } while (iStack_84 < (int)(uint)*(ushort *)(iStack_88 + 0x10));
  }
  bVar2 = iStack_7c == 0;
  if (iStack_80 != 0) {
    uStack_70 = FUN_001344f8();
    uStack_6c = puStack_9c[9];
    FUN_00109360(uStack_70,1);
    puVar8 = (ulong *)FUN_00108730(puStack_9c,uStack_70);
    if (puVar8 + 10 != param_2) {
      uVar28 = *param_2;
      uVar4 = param_2[1];
      uVar18 = *(undefined4 *)((int)param_2 + 0xc);
      uVar30 = param_2[2];
      uVar5 = param_2[3];
      uVar20 = *(undefined4 *)((int)param_2 + 0x1c);
      uVar29 = param_2[4];
      uVar6 = param_2[5];
      uVar22 = *(undefined4 *)((int)param_2 + 0x2c);
      uVar3 = param_2[6];
      uVar7 = param_2[7];
      uVar25 = *(undefined4 *)((int)param_2 + 0x3c);
      *(int *)(puVar8 + 10) = (int)uVar28;
      *(int *)((int)puVar8 + 0x54) = (int)(uVar28 >> 0x20);
      *(int *)(puVar8 + 0xb) = (int)uVar4;
      *(undefined4 *)((int)puVar8 + 0x5c) = uVar18;
      *(int *)(puVar8 + 0xc) = (int)uVar30;
      *(int *)((int)puVar8 + 100) = (int)(uVar30 >> 0x20);
      *(int *)(puVar8 + 0xd) = (int)uVar5;
      *(undefined4 *)((int)puVar8 + 0x6c) = uVar20;
      *(int *)(puVar8 + 0xe) = (int)uVar29;
      *(int *)((int)puVar8 + 0x74) = (int)(uVar29 >> 0x20);
      *(int *)(puVar8 + 0xf) = (int)uVar6;
      *(undefined4 *)((int)puVar8 + 0x7c) = uVar22;
      *(int *)(puVar8 + 0x10) = (int)uVar3;
      *(int *)((int)puVar8 + 0x84) = (int)(uVar3 >> 0x20);
      *(int *)(puVar8 + 0x11) = (int)uVar7;
      *(undefined4 *)((int)puVar8 + 0x8c) = uVar25;
    }
    if (puStack_78 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)FUN_00133bb8(uStack_70,4,0x1000101,0x6c04400a);
      if (puVar9 == puStack_78) {
        uVar28 = *puVar8;
      }
      else {
        uVar12 = *puStack_78;
        uVar18 = *(undefined4 *)(puStack_78 + 1);
        uVar20 = *(undefined4 *)((int)puStack_78 + 0xc);
        uVar13 = puStack_78[2];
        uVar22 = *(undefined4 *)(puStack_78 + 3);
        uVar25 = *(undefined4 *)((int)puStack_78 + 0x1c);
        uVar14 = puStack_78[4];
        uVar21 = *(undefined4 *)(puStack_78 + 5);
        uVar23 = *(undefined4 *)((int)puStack_78 + 0x2c);
        uVar15 = puStack_78[6];
        uVar24 = *(undefined4 *)(puStack_78 + 7);
        uVar26 = *(undefined4 *)((int)puStack_78 + 0x3c);
        *(int *)puVar9 = (int)uVar12;
        *(int *)((int)puVar9 + 4) = (int)((ulong)uVar12 >> 0x20);
        *(undefined4 *)(puVar9 + 1) = uVar18;
        *(undefined4 *)((int)puVar9 + 0xc) = uVar20;
        *(int *)(puVar9 + 2) = (int)uVar13;
        *(int *)((int)puVar9 + 0x14) = (int)((ulong)uVar13 >> 0x20);
        *(undefined4 *)(puVar9 + 3) = uVar22;
        *(undefined4 *)((int)puVar9 + 0x1c) = uVar25;
        *(int *)(puVar9 + 4) = (int)uVar14;
        *(int *)((int)puVar9 + 0x24) = (int)((ulong)uVar14 >> 0x20);
        *(undefined4 *)(puVar9 + 5) = uVar21;
        *(undefined4 *)((int)puVar9 + 0x2c) = uVar23;
        *(int *)(puVar9 + 6) = (int)uVar15;
        *(int *)((int)puVar9 + 0x34) = (int)((ulong)uVar15 >> 0x20);
        *(undefined4 *)(puVar9 + 7) = uVar24;
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar26;
        uVar28 = *puVar8;
      }
      uStack_6c = 0;
      *puVar8 = uVar28 & 0xfc007fffffffffff | (uVar28 >> 0x2f & 0x7ff | 0x50) << 0x2f;
      *(undefined **)puVar8 = &DAT_303ec000;
    }
    if (pfStack_74 != (float *)0x0) {
      pfVar10 = (float *)FUN_00133bb8(uStack_70,4,0x1000101,0x6c04400a);
      fVar17 = DAT_0036a950;
      fStack_b4 = DAT_0036a950;
      fStack_c0 = DAT_0036a950;
      fStack_bc = DAT_0036a950;
      fStack_b8 = DAT_0036a950;
      if (pfVar10 != &fStack_c0) {
        *pfVar10 = DAT_0036a950;
        pfVar10[1] = fVar17;
        pfVar10[2] = fVar17;
        pfVar10[3] = fVar17;
      }
      if (pfVar10 + 4 != pfStack_74) {
        uVar12 = *(undefined8 *)pfStack_74;
        fVar17 = pfStack_74[2];
        fVar19 = pfStack_74[3];
        pfVar10[4] = (float)uVar12;
        pfVar10[5] = (float)((ulong)uVar12 >> 0x20);
        pfVar10[6] = fVar17;
        pfVar10[7] = fVar19;
      }
      if (pfVar10 + 8 != pfStack_74 + 4) {
        uVar12 = *(undefined8 *)(pfStack_74 + 4);
        fVar17 = pfStack_74[6];
        fVar19 = pfStack_74[7];
        pfVar10[8] = (float)uVar12;
        pfVar10[9] = (float)((ulong)uVar12 >> 0x20);
        pfVar10[10] = fVar17;
        pfVar10[0xb] = fVar19;
      }
      if (pfVar10 + 0xc != pfStack_74 + 8) {
        uVar12 = *(undefined8 *)(pfStack_74 + 8);
        fVar17 = pfStack_74[10];
        fVar19 = pfStack_74[0xb];
        pfVar10[0xc] = (float)uVar12;
        pfVar10[0xd] = (float)((ulong)uVar12 >> 0x20);
        pfVar10[0xe] = fVar17;
        pfVar10[0xf] = fVar19;
      }
    }
    if (uStack_6c != 0) {
      iStack_68 = uStack_6c + *(int *)(uStack_6c + 0x14);
      lVar11 = FUN_00109788(uStack_70,iStack_68);
      if (lVar11 != 0) {
        FUN_00109708(uStack_70);
      }
      iStack_84 = 0;
      uVar12 = FUN_00132018(uStack_6c);
      FUN_00133078(uStack_94,0x3a99f0,0xf000,*(undefined2 *)(iStack_88 + 0x14),uVar12);
      iVar31 = *(int *)(uStack_6c + 0xc);
      if (0 < iVar31) {
        do {
          iVar38 = (&DAT_003a99f0)[iStack_84 * 2];
          iStack_68 = uStack_6c +
                      *(int *)(uStack_6c + 0x14) +
                      (uint)*(byte *)(uStack_6c + *(int *)(uStack_6c + 0x10) + iStack_84) * 0x90 +
                      0x90;
          if (iVar38 == 0) {
            puVar36 = (undefined4 *)0x0;
          }
          else {
            puVar36 = (undefined4 *)((int)&DAT_003a99f0 + (&DAT_003a99f4)[iStack_84 * 2]);
          }
          if ((puVar36 != (undefined4 *)0x0) && (0 < iVar38)) {
            iStack_64 = iStack_84 * 0xa0;
            piStack_60 = &DAT_003a99f0 + iStack_84 * 2;
            do {
              uVar18 = *puVar36;
              lVar11 = FUN_00132d90(uVar18,0);
              if (lVar11 == 0) {
                *piStack_60 = *piStack_60 + -1;
                if (1 < iVar38) {
                  *puVar36 = puVar36[iVar38 + -1];
                  puVar36 = puVar36 + -1;
                }
              }
              else {
                iVar31 = uStack_6c + *(int *)(uStack_6c + 0x18) + iStack_64;
                uVar12 = FUN_00132c98(uVar18);
                uVar13 = FUN_00132cd0(uVar18);
                uVar14 = FUN_00132d00(uVar18);
                uVar15 = FUN_00132d30(uVar18);
                uVar16 = FUN_00132d60(uVar18);
                FUN_00132d90(uVar18,0);
                uVar28 = *(ulong *)(iVar31 + 0x70);
                FUN_001097e8(uVar12,(long)(*(ulong *)(iStack_68 + 0x20) & 0x3fff00000000) >> 0x20,
                             (long)((uVar28 & 0xfc000) << 0x12) >> 0x20,uVar13,uVar14,uVar15,uVar16,
                             (long)((uVar28 & 0x3f00000) << 0xc) >> 0x20);
              }
              iVar38 = iVar38 + -1;
              puVar36 = puVar36 + 1;
            } while (0 < iVar38);
            iVar31 = *(int *)(uStack_6c + 0xc);
          }
          iStack_84 = iStack_84 + 1;
        } while (iStack_84 < iVar31);
      }
    }
    uVar34 = 0xffffffff;
    iStack_84 = 0;
    uVar18 = *(undefined4 *)(*(int *)(iStack_a0 + 4) + 4);
    uVar12 = FUN_0010aba8();
    uVar12 = FUN_00109f58(uVar12,uVar18,*(undefined1 *)((int)puStack_9c + 7));
    fStack_b0 = -NAN;
    uVar27 = (uint)*(ushort *)(iStack_88 + 0x10);
    if (uVar27 != 0) {
      do {
        bVar1 = *(byte *)(iStack_98 + iStack_84);
        if ((bVar1 & 0xf) != 0) {
          iVar38 = iStack_84 * 0x10;
          iVar31 = iVar38 + iStack_88;
          if (*(uint *)(iVar31 + 0x28) < 0x10000) {
            if (uStack_90 == 0) goto LAB_0011fd10;
          }
          else if (uStack_90 != 0) {
LAB_0011fd10:
            if ((puStack_78 == (undefined8 *)0x0) || ((*(uint *)(iVar31 + 0x2c) & 1) == 0)) {
              FUN_00133bb8(uStack_70,0,0x11000000,0x13000000);
              fStack_b4 = 0.0;
              bVar2 = (bVar1 & 0xf) != 1;
              fStack_b8 = 0.0;
              fStack_bc = 0.0;
              fStack_c0 = (float)(uint)bVar2;
              if (puStack_78 != (undefined8 *)0x0) {
                fStack_c0 = (float)(bVar2 | 0x4000);
              }
              if ((pfStack_74 != (float *)0x0) && ((*(ushort *)(iVar31 + 0x26) & 1) != 0)) {
                fStack_c0 = (float)((uint)fStack_c0 | 0x20);
              }
              uVar28 = (ulong)(uint)fStack_c0;
              if (((uint)fStack_c0 & 0x4000) == 0) {
                iVar31 = iVar38 + iStack_88;
                uVar27 = *(uint *)(iVar31 + 0x2c) >> 1 & 0x1f;
                uVar28 = (ulong)(uint)fStack_c0;
                if (uVar27 == 0) goto LAB_0011feac;
                uVar30 = CONCAT44(fStack_ac,fStack_b0);
                if (uStack_6c != 0) {
                  lVar11 = FUN_00132390(uStack_94,0,2,0xffffffffffffffff,uVar27 - 1);
                  if (lVar11 != 0) {
                    iVar31 = uStack_6c +
                             *(int *)(uStack_6c + 0x18) + (uint)*(ushort *)(iVar31 + 0x24) * 0xa0;
                    uVar30 = *(ulong *)(iVar31 + 0x80) & 3;
                    if ((uVar30 != 0) && (uVar28 = CONCAT44(fStack_bc,fStack_c0), uVar30 != 3))
                    goto LAB_0011feac;
                    fStack_c0 = (float)((uint)fStack_c0 | 2);
                    uVar13 = FUN_0010aed8((uint)(*(ulong *)(iVar31 + 0x70) >> 0x1a) & 0xf);
                    fStack_b8 = (float)FUN_001333f8(lVar11,((uint)(*(ulong *)(iVar31 + 0x80) >> 4) &
                                                           0x3ff) + 1,uVar13);
                    uVar13 = FUN_0010aed8((uint)(*(ulong *)(iVar31 + 0x70) >> 0x1e) & 0xf);
                    fStack_b4 = (float)FUN_001334a8(lVar11,((uint)((ulong)*(undefined8 *)
                                                                           (iVar31 + 0x80) >> 0x18)
                                                           & 0x3ff) + 1,uVar13);
                  }
                  uVar28 = CONCAT44(fStack_bc,fStack_c0);
                  goto LAB_0011feac;
                }
              }
              else {
LAB_0011feac:
                uVar30 = CONCAT44(fStack_ac,fStack_b0);
              }
              if ((uVar28 != uVar30) ||
                 (bVar2 = false, CONCAT44(fStack_b4,fStack_b8) != CONCAT44(fStack_a4,fStack_a8))) {
                bVar2 = true;
              }
              if (bVar2) {
LAB_0011ff08:
                FUN_001093c8(uStack_70,fStack_c0,0,fStack_bc,fStack_b8,fStack_b4);
                if ((((uint)fStack_c0 & 0x20) != 0) && (uStack_6c != 0)) {
                  iVar31 = uStack_6c +
                           *(int *)(uStack_6c + 0x18) +
                           (uint)*(ushort *)(iVar38 + iStack_88 + 0x24) * 0xa0;
                  uVar28 = FUN_0010aed8((uint)(*(ulong *)(iVar31 + 0x70) >> 0x1a) & 0xf);
                  uVar30 = FUN_0010aed8((uint)(*(ulong *)(iVar31 + 0x70) >> 0x1e) & 0xf);
                  uVar29 = *(ulong *)(iVar31 + 0x80);
                  uVar27 = (uint)(uVar29 >> 0x18);
                  if (((uVar29 & 3) == 0) || ((uVar29 & 3) == 3)) {
                    uVar32 = (uint)(uVar29 >> 4);
                    uVar35 = 0;
                    uVar37 = 0;
                  }
                  else {
                    uVar35 = (uint)(uVar29 >> 4) & 0x3ff;
                    uVar37 = uVar27 & 0x3ff;
                    uVar32 = (uint)(uVar29 >> 0xe);
                    uVar27 = (uint)(uVar29 >> 0x22);
                  }
                  uVar32 = ((uVar32 & 0x3ff) - uVar35) + 1;
                  uVar27 = ((uVar27 & 0x3ff) - uVar37) + 1;
                  pfVar10 = (float *)FUN_00133bb8(uStack_70,1,0x1000101,0x6c01400a);
                  if ((long)uVar28 < 0) {
                    fVar17 = (float)(uVar28 & 0xffffffff);
                  }
                  else {
                    fVar17 = (float)(int)uVar28;
                  }
                  *pfVar10 = ((float)uVar32 * DAT_0036a950) / fVar17;
                  if ((long)uVar30 < 0) {
                    fVar17 = (float)(uVar30 & 0xffffffff);
                  }
                  else {
                    fVar17 = (float)(int)uVar30;
                  }
                  pfVar10[1] = ((float)uVar27 * DAT_0036a950) / fVar17;
                  if ((long)uVar28 < 0) {
                    fVar17 = (float)(uVar28 & 0xffffffff);
                  }
                  else {
                    fVar17 = (float)(int)uVar28;
                  }
                  pfVar10[2] = ((float)uVar35 * DAT_0036a954 + (float)uVar32 * DAT_0036a950) /
                               fVar17;
                  if ((long)uVar30 < 0) {
                    fVar17 = (float)(uVar30 & 0xffffffff);
                  }
                  else {
                    fVar17 = (float)(int)uVar30;
                  }
                  pfVar10[3] = ((float)uVar37 * DAT_0036a954 + (float)uVar27 * DAT_0036a950) /
                               fVar17;
                }
                if (&fStack_b0 != &fStack_c0) {
                  fStack_b0 = fStack_c0;
                  fStack_ac = fStack_bc;
                  fStack_a8 = fStack_b8;
                  fStack_a4 = fStack_b4;
                }
LAB_0012014c:
                if (uStack_6c != 0) {
                  iVar31 = iVar38 + iStack_88;
                  iVar33 = uStack_6c +
                           *(int *)(uStack_6c + 0x14) +
                           (uint)*(byte *)(uStack_6c + *(int *)(uStack_6c + 0x10) +
                                          (uint)*(ushort *)(iVar31 + 0x24)) * 0x90 + 0x90;
                  lVar11 = FUN_00109788(uStack_70,iVar33);
                  bVar2 = lVar11 != 0;
                  uVar27 = (uint)*(ushort *)(iVar31 + 0x24);
                  iVar31 = (&DAT_003a99f0)[uVar27 * 2];
                  if (iVar31 == 0) {
                    puVar36 = (undefined4 *)0x0;
                  }
                  else {
                    puVar36 = (undefined4 *)((int)&DAT_003a99f0 + (&DAT_003a99f4)[uVar27 * 2]);
                  }
                  if ((puVar36 != (undefined4 *)0x0) && (0 < iVar31)) {
                    bVar2 = true;
                    uVar18 = *puVar36;
                    while( true ) {
                      iVar31 = iVar31 + -1;
                      uVar13 = FUN_00132c98(uVar18);
                      FUN_00133c60(uStack_70,uVar13,0,0,0);
                      uVar13 = FUN_00132c98(*puVar36);
                      puVar36 = puVar36 + 1;
                      FUN_001094e0(iVar33,uVar13);
                      if (iVar31 < 1) break;
                      uVar18 = *puVar36;
                    }
                  }
                  iVar31 = iVar38 + iStack_88;
                  uVar27 = (uint)*(ushort *)(iVar31 + 0x24);
                  if (uVar27 == uVar34) {
                    if (bVar2) {
                      FUN_00109690(uStack_70);
                    }
                  }
                  else {
                    FUN_00133c60(uStack_70,uStack_6c + *(int *)(uStack_6c + 0x18) + uVar27 * 0xa0,0,
                                 0,0);
                    uVar34 = (uint)*(ushort *)(iVar31 + 0x24);
                  }
                }
              }
              else {
                if (((uint)fStack_c0 & 0x20) == 0) goto LAB_0012014c;
                if (uStack_6c != 0) {
                  if (*(ushort *)(iVar38 + iStack_88 + 0x24) != uVar34) goto LAB_0011ff08;
                  goto LAB_0012014c;
                }
              }
              if (uStack_90 != 0) {
                uVar27 = *(uint *)(iVar38 + iStack_88 + 0x2c);
                if ((uVar27 >> 6 & 1) == 0) {
                  uVar13 = uVar12;
                  if ((uVar27 >> 7 & 1) != 0) {
                    uVar13 = 0x8000000042;
                  }
                }
                else {
                  uVar13 = 0x8000000048;
                }
                FUN_00108eb8(uStack_8c,uVar13);
                FUN_00109008(uStack_8c);
              }
              FUN_00133c60(uStack_70,iStack_88 + *(int *)(iVar38 + iStack_88 + 0x20),0,0,0);
              uVar27 = (uint)*(ushort *)(iStack_88 + 0x10);
            }
          }
        }
        iStack_84 = iStack_84 + 1;
      } while (iStack_84 < (int)uVar27);
    }
    bVar2 = iStack_7c <= iStack_80;
  }
  return bVar2;
}

