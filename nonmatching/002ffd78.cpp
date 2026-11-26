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

s32 FUN_002ff3fc(...) asm("func_002ff3fc");
s32 FUN_002ffc08(...) asm("func_002ffc08");
s32 FUN_002ffc50(...) asm("func_002ffc50");
s32 FUN_002ffd78(...) asm("func_002ffd78");
s32 FUN_003012d8(...) asm("func_003012d8");
s32 FUN_00301480(...) asm("func_00301480");
s32 FUN_003015f8(...) asm("func_003015f8");
s32 FUN_003037e8(...) asm("func_003037e8");
s32 FUN_00303958(...) asm("func_00303958");
s32 FUN_00303988(...) asm("func_00303988");
s32 FUN_00304d68(...) asm("func_00304d68");
s32 FUN_00304db0(...) asm("func_00304db0");
s32 FUN_00312db8(...) asm("func_00312db8");
s32 FUN_00313498(...) asm("func_00313498");
s32 FUN_003142e0(...) asm("func_003142e0");
extern u32 DAT_003660b4 asm("D_003660b4");
extern u32 DAT_00377928 asm("D_00377928");
extern u32 DAT_00377930 asm("D_00377930");
extern u32 LAB_002ffe8c asm("D_002ffe8c");
extern u32 LAB_002ffeac asm("D_002ffeac");
extern u32 LAB_002fff20 asm("D_002fff20");
extern u32 LAB_002fff30 asm("D_002fff30");
extern u32 LAB_002fff64 asm("D_002fff64");
extern u32 LAB_002fff6c asm("D_002fff6c");
extern u32 LAB_003000cc asm("D_003000cc");
extern u32 LAB_0030012c asm("D_0030012c");
extern u32 LAB_00300278 asm("D_00300278");
extern u32 LAB_00300440 asm("D_00300440");
extern u32 LAB_0030046c asm("D_0030046c");
extern u32 LAB_00300b0c asm("D_00300b0c");
extern u32 LAB_00300cd4 asm("D_00300cd4");
extern u32 LAB_00300cf8 asm("D_00300cf8");
extern u32 LAB_00300cfc asm("D_00300cfc");
extern u32 LAB_00300d08 asm("D_00300d08");
extern u32 LAB_00300e24 asm("D_00300e24");
extern u32 LAB_00300eac asm("D_00300eac");
extern u32 LAB_0030128c asm("D_0030128c");
extern u32 LAB_003012c0 asm("D_003012c0");
extern undefined *PTR_DAT_00365c48 asm("D_00365c48");
extern AnyCell s_0123456789ABCDEF_00377938 asm("D_00377938");
extern AnyCell s_0123456789abcdef_00377960 asm("D_00377960");
extern AnyCell s_QX_0000000000000000bug_in_vfprin_003778e6 asm("D_003778e6");
extern AnyCell s__null__00377978 asm("D_00377978");
static AnyCell l;

// Ghidra decompile of 0x002ffd78, wrapped mechanically (ad/fallback.py)

/* WARNING: Type propagation algorithm not settling */

int FUN_002ffd78_impl(undefined4 param_1,int param_2,char *param_3,ulong *param_4) asm("func_002ffd78");
int FUN_002ffd78_impl(undefined4 param_1,int param_2,char *param_3,ulong *param_4) {
  ushort uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char acStack_280 [16];
  Q16 auStack_270;
  int *piStack_260;
  int iStack_25c;
  int iStack_258;
  int aiStack_250 [16];
  char acStack_210 [347];
  char cStack_b5;
  char acStack_b4 [4];
  char cStack_b0;
  undefined1 uStack_af;
  int iStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  ulong *puStack_88;
  uint uStack_84;
  int iStack_80;
  char *pcStack_7c;
  int iStack_78;
  ulong uStack_70;
  int iStack_68;
  char *pcStack_64;
  char *pcStack_60;
  uint uStack_5c;
  
  uStack_90 = param_1;
  iStack_8c = param_2;
  puStack_88 = param_4;
  piVar4 = (int *)FUN_003037e8();
  iStack_78 = *piVar4;
  uVar1 = *(ushort *)(iStack_8c + 0xc);
  uStack_70 = 0;
  iStack_68 = 0;
  pcStack_60 = (char *)0x0;
  uStack_9c = 0;
  if (((uVar1 & 8) == 0) || (*(int *)(iStack_8c + 0x10) == 0)) {
    lVar7 = FUN_003015f8(iStack_8c);
    if (lVar7 != 0) {
      return -1;
    }
    uVar1 = *(ushort *)(iStack_8c + 0xc);
  }
  piStack_260 = aiStack_250;
  if (((uVar1 & 0x1a) == 10) && (-1 < *(short *)(iStack_8c + 0xe))) {
    iVar5 = FUN_002ffc50(iStack_8c,param_3,puStack_88);
    return iVar5;
  }
  iStack_258 = 0;
  iStack_25c = 0;
  iStack_80 = 0;
  pcVar12 = param_3;
  piVar4 = piStack_260;
LAB_002ffe8c:
  lVar7 = FUN_00303958(PTR_DAT_00365c48,&iStack_a0,param_3,DAT_003660b4,&uStack_9c);
  if (0 < lVar7) goto LAB_003012c0;
  goto LAB_002ffeac;
LAB_003012c0:
  param_3 = param_3 + (int)lVar7;
  if (iStack_a0 == 0x25) {
    param_3 = param_3 + -1;
LAB_002ffeac:
    iVar5 = (int)param_3 - (int)pcVar12;
    if (iVar5 != 0) {
      piVar4[1] = iVar5;
      *piVar4 = (int)pcVar12;
      piVar4 = piVar4 + 2;
      iStack_25c = iStack_25c + 1;
      iStack_258 = iStack_258 + iVar5;
      if (7 < iStack_25c) {
        lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
        piVar4 = aiStack_250;
        if (lVar8 != 0) goto LAB_00300278;
      }
      iStack_80 = iStack_80 + iVar5;
    }
    param_3 = param_3 + 1;
    if (0 < lVar7) {
      acStack_280[0] = '\0';
      uStack_84 = 0;
      pcStack_64 = (char *)0x0;
      cVar10 = *param_3;
      pcStack_7c = (char *)0x0;
LAB_002fff20:
      pcVar6 = (char *)0xffffffff;
      do {
        param_3 = param_3 + 1;
        lVar7 = (long)(int)cVar10;
LAB_002fff30:
        pcVar12 = param_3;
        switch((int)lVar7) {
        case 0x20:
          cVar10 = ' ';
          if (acStack_280[0] == '\0') {
LAB_002fff6c:
            acStack_280[0] = cVar10;
          }
LAB_002fff64:
          cVar10 = *param_3;
          break;
        default:
          pcVar13 = acStack_210;
          if (lVar7 == 0) goto LAB_0030128c;
          acStack_210[0] = (char)lVar7;
          acStack_280[0] = '\0';
          pcVar6 = (char *)0x1;
          goto LAB_0030012c;
        case 0x23:
          cVar10 = *param_3;
          uStack_84 = uStack_84 | 1;
          break;
        case 0x2a:
          pcStack_7c = *(char **)puStack_88;
          puStack_88 = puStack_88 + 1;
          if (-1 < (int)pcStack_7c) goto LAB_002fff64;
          pcStack_7c = (char *)-(int)pcStack_7c;
        case 0x2d:
          cVar10 = *param_3;
          uStack_84 = uStack_84 | 4;
          break;
        case 0x2b:
          cVar10 = '+';
          goto LAB_002fff6c;
        case 0x2e:
          cVar10 = *param_3;
          lVar7 = (long)cVar10;
          param_3 = param_3 + 1;
          if (lVar7 == 0x2a) {
            pcVar6 = *(char **)puStack_88;
            puStack_88 = puStack_88 + 1;
            if (-2 < (int)pcVar6) goto LAB_002fff64;
            cVar10 = *param_3;
            goto LAB_002fff20;
          }
          pcVar6 = (char *)0x0;
          while ((int)cVar10 - 0x30U < 10) {
            iVar5 = (int)lVar7;
            cVar10 = *param_3;
            lVar7 = (long)cVar10;
            pcVar6 = (char *)(((int)pcVar6 * 10 + iVar5) - 0x30);
            param_3 = param_3 + 1;
          }
          if ((int)pcVar6 < -1) {
            pcVar6 = (char *)0xffffffff;
          }
          goto LAB_002fff30;
        case 0x30:
          cVar10 = *param_3;
          uStack_84 = uStack_84 | 0x80;
          break;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          goto switchD_002fff50_caseD_31;
        case 0x44:
          uStack_84 = uStack_84 | 0x10;
        case 100:
        case 0x69:
          if ((uStack_84 & 0x10) == 0) {
            if ((uStack_84 & 0x40) == 0) {
              uVar9 = (ulong)(int)(uint)*puStack_88;
            }
            else {
              uVar9 = (ulong)(short)(ushort)*puStack_88;
            }
          }
          else {
            uVar9 = *puStack_88;
          }
          iVar5 = 1;
          if ((long)uVar9 < 0) {
            uVar9 = -uVar9;
            acStack_280[0] = '-';
          }
LAB_003000cc:
          puStack_88 = puStack_88 + 1;
          if (-1 < (int)pcVar6) {
            uStack_84 = uStack_84 & 0xffffff7f;
          }
          pcVar13 = acStack_b4;
          pcStack_64 = pcVar6;
          if ((uVar9 == 0) && (pcVar6 == (char *)0x0)) {
            pcVar6 = acStack_280 + -(int)pcVar13;
            if (iVar5 != 0) goto LAB_00300cfc;
            if ((uStack_84 & 1) != 0) {
              pcVar13 = &cStack_b5;
              cStack_b5 = '0';
            }
            goto LAB_00300cf8;
          }
          if (iVar5 == 1) goto joined_r0x00300d4c;
          if (iVar5 == 0) goto LAB_00300d08;
          if (iVar5 == 2) goto LAB_00300cd4;
          pcVar13 = s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x22;
          pcVar6 = (char *)FUN_002ff3fc(0x377908);
          goto LAB_0030012c;
        case 0x45:
        case 0x47:
        case 0x65:
        case 0x66:
        case 0x67:
          if (pcVar6 == (char *)0xffffffff) {
            pcVar14 = (char *)0x6;
          }
          else {
            pcVar14 = pcVar6;
            if (((lVar7 == 0x67) || (lVar7 == 0x47)) && (pcVar6 == (char *)0x0)) {
              pcVar14 = (char *)0x1;
            }
          }
          if ((uStack_84 & 8) == 0) {
            uStack_70 = *puStack_88;
          }
          else {
            uStack_70 = *puStack_88;
          }
          puStack_88 = puStack_88 + 1;
          lVar8 = FUN_00304d68(uStack_70);
          if (lVar8 == 0) {
            lVar8 = FUN_00304db0(uStack_70);
            if (lVar8 == 0) {
              uStack_84 = uStack_84 | 0x100;
              pcVar13 = (char *)FUN_003012d8(uStack_90,uStack_70,pcVar14,uStack_84,acStack_280 + 1,
                                             &pcStack_98,lVar7,&iStack_94);
              if (((lVar7 == 0x67) || (lVar8 = lVar7, lVar7 == 0x47)) &&
                 (((int)pcStack_98 < -3 || (lVar8 = 0x67, (int)pcVar14 < (int)pcStack_98)))) {
                lVar8 = 0x65;
                if (lVar7 != 0x67) {
                  lVar8 = 0x45;
                }
              }
              if (lVar8 < 0x66) {
                pcStack_98 = pcStack_98 + -1;
                iStack_68 = FUN_00301480(auStack_270,pcStack_98,lVar8);
                if ((1 < iStack_94) ||
                   (pcVar6 = (char *)(iStack_68 + iStack_94), (uStack_84 & 1) != 0)) {
                  pcVar6 = (char *)(iStack_68 + iStack_94) + 1;
                }
              }
              else if (lVar8 == 0x66) {
                pcVar6 = pcVar14 + 2;
                if ((0 < (int)pcStack_98) &&
                   ((pcVar14 != (char *)0x0 || (pcVar6 = pcStack_98, (uStack_84 & 1) != 0)))) {
                  pcVar6 = pcStack_98 + (int)pcVar14 + 1;
                }
              }
              else if ((int)pcStack_98 < iStack_94) {
                if ((int)pcStack_98 < 1) {
                  pcVar6 = (char *)((iStack_94 - (int)pcStack_98) + 2);
                }
                else {
                  pcVar6 = (char *)(iStack_94 + 1);
                }
              }
              else {
                pcVar6 = pcStack_98;
                if ((uStack_84 & 1) != 0) {
                  pcVar6 = pcStack_98 + 1;
                }
              }
              lVar7 = lVar8;
              if (acStack_280[1] != '\0') {
                acStack_280[0] = '-';
              }
            }
            else {
              pcVar6 = (char *)0x3;
              pcVar13 = (char *)0x377958;
            }
          }
          else {
            lVar8 = FUN_003142e0(uStack_70,0);
            if (lVar8 < 0) {
              acStack_280[0] = '-';
            }
            pcVar6 = (char *)0x3;
            pcVar13 = (char *)0x377950;
          }
          goto LAB_0030012c;
        case 0x4c:
          cVar10 = *param_3;
          uStack_84 = uStack_84 | 8;
          break;
        case 0x4f:
          uStack_84 = uStack_84 | 0x10;
        case 0x6f:
          if ((uStack_84 & 0x10) == 0) {
            if ((uStack_84 & 0x40) == 0) {
              uVar9 = (ulong)(uint)*puStack_88;
            }
            else {
              uVar9 = (ulong)(ushort)*puStack_88;
            }
          }
          else {
            uVar9 = *puStack_88;
          }
          iVar5 = 0;
LAB_00300e24:
          acStack_280[0] = '\0';
          goto LAB_003000cc;
        case 0x55:
          uStack_84 = uStack_84 | 0x10;
        case 0x75:
          if ((uStack_84 & 0x10) == 0) {
            if ((uStack_84 & 0x40) == 0) {
              uVar9 = (ulong)(uint)*puStack_88;
            }
            else {
              uVar9 = (ulong)(ushort)*puStack_88;
            }
          }
          else {
            uVar9 = *puStack_88;
          }
          iVar5 = 1;
          goto LAB_00300e24;
        case 0x58:
          pcStack_60 = s_0123456789ABCDEF_00377938;
          goto LAB_00300eac;
        case 99:
          pcVar13 = acStack_210;
          pcVar6 = (char *)0x1;
          acStack_210[0] = (char)*puStack_88;
          puStack_88 = puStack_88 + 1;
          acStack_280[0] = '\0';
          goto LAB_0030012c;
        case 0x68:
          cVar10 = *param_3;
          uStack_84 = uStack_84 | 0x40;
          break;
        case 0x6c:
          cVar10 = *param_3;
          if (cVar10 != 'l') {
            uStack_84 = uStack_84 | 0x10;
            break;
          }
          param_3 = param_3 + 1;
          uStack_84 = uStack_84 | 0x10;
          goto LAB_002fff64;
        case 0x6e:
          if ((uStack_84 & 0x10) == 0) {
            if ((uStack_84 & 0x40) == 0) {
              **(int **)puStack_88 = iStack_80;
            }
            else {
              **(undefined2 **)puStack_88 = (short)iStack_80;
            }
          }
          else {
            **(long **)puStack_88 = (long)iStack_80;
          }
          puStack_88 = puStack_88 + 1;
          goto LAB_002ffe8c;
        case 0x70:
          lVar7 = 0x78;
          uVar9 = (ulong)(int)(uint)*puStack_88;
          pcStack_60 = s_0123456789abcdef_00377960;
          iVar5 = 2;
          uStack_84 = uStack_84 | 2;
          goto LAB_00300e24;
        case 0x71:
          cVar10 = *param_3;
          uStack_84 = uStack_84 | 0x10;
          break;
        case 0x73:
          pcVar13 = *(char **)puStack_88;
          if (pcVar13 == (char *)0x0) {
            pcVar13 = s__null__00377978;
          }
          if ((int)pcVar6 < 0) {
            puStack_88 = puStack_88 + 1;
            pcVar6 = (char *)FUN_002ff3fc(pcVar13,0);
          }
          else {
            puStack_88 = puStack_88 + 1;
            lVar8 = FUN_00303988(pcVar13,0,pcVar6);
            if ((lVar8 != 0) &&
               (pcVar14 = (char *)((int)lVar8 - (int)pcVar13), (int)pcVar14 <= (int)pcVar6)) {
              acStack_280[0] = '\0';
              pcVar6 = pcVar14;
              goto LAB_0030012c;
            }
          }
          acStack_280[0] = '\0';
          goto LAB_0030012c;
        case 0x78:
          pcStack_60 = s_0123456789abcdef_00377960;
LAB_00300eac:
          if ((uStack_84 & 0x10) == 0) {
            if ((uStack_84 & 0x40) == 0) {
              uVar9 = (ulong)(uint)*puStack_88;
            }
            else {
              uVar9 = (ulong)(ushort)*puStack_88;
            }
          }
          else {
            uVar9 = *puStack_88;
          }
          iVar5 = 2;
          if (((uStack_84 & 1) != 0) && (iVar5 = 2, uVar9 != 0)) {
            uStack_84 = uStack_84 | 2;
          }
          goto LAB_00300e24;
        }
      } while( true );
    }
LAB_0030128c:
    if (iStack_258 != 0) {
      FUN_002ffc08(iStack_8c,&piStack_260);
    }
LAB_00300278:
    iVar5 = -1;
    if ((*(ushort *)(iStack_8c + 0xc) & 0x40) == 0) {
      iVar5 = iStack_80;
    }
    return iVar5;
  }
  goto LAB_002ffe8c;
joined_r0x00300d4c:
  while (9 < uVar9) {
    cVar10 = FUN_00313498(uVar9,10);
    pcVar13 = pcVar13 + -1;
    *pcVar13 = cVar10 + '0';
    uVar9 = FUN_00312db8(uVar9,10);
  }
  pcVar13 = pcVar13 + -1;
  *pcVar13 = (char)uVar9 + '0';
LAB_00300cf8:
  pcVar6 = acStack_280 + -(int)pcVar13;
LAB_00300cfc:
  pcVar6 = pcVar6 + 0x1cc;
LAB_0030012c:
  pcVar14 = pcVar6;
  if ((int)pcVar6 < (int)pcStack_64) {
    pcVar14 = pcStack_64;
  }
  if (acStack_280[0] == '\0') {
    if ((uStack_84 & 2) != 0) {
      pcVar14 = pcVar14 + 2;
    }
  }
  else {
    pcVar14 = pcVar14 + 1;
  }
  uStack_5c = uStack_84 & 0x84;
  if (uStack_5c == 0) {
    iVar5 = (int)pcStack_7c - (int)pcVar14;
    if (0 < iVar5) {
      if (0x10 < iVar5) {
        piVar4[1] = 0x10;
        while( true ) {
          *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 2);
          piVar4 = piVar4 + 2;
          iStack_25c = iStack_25c + 1;
          iStack_258 = iStack_258 + 0x10;
          if (7 < iStack_25c) {
            lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
            piVar4 = aiStack_250;
            if (lVar8 != 0) goto LAB_00300278;
          }
          iVar5 = iVar5 + -0x10;
          if (iVar5 < 0x11) break;
          piVar4[1] = 0x10;
        }
      }
      piVar4[1] = iVar5;
      *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 2);
      iStack_258 = iStack_258 + iVar5;
      iStack_25c = iStack_25c + 1;
      piVar4 = piVar4 + 2;
      if (7 < iStack_25c) {
        lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
        if (lVar8 != 0) goto LAB_00300278;
        piVar4 = aiStack_250;
      }
    }
  }
  if (acStack_280[0] == '\0') {
    if ((uStack_84 & 2) != 0) {
      uStack_af = (undefined1)lVar7;
      cStack_b0 = '0';
      piVar4[1] = 2;
      *piVar4 = (int)&cStack_b0;
      iStack_258 = iStack_258 + 2;
      iStack_25c = iStack_25c + 1;
      piVar4 = piVar4 + 2;
      if (7 < iStack_25c) {
        lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
        goto joined_r0x00300ca8;
      }
    }
  }
  else {
    *piVar4 = (int)acStack_280;
    piVar4[1] = 1;
    piVar4 = piVar4 + 2;
    iStack_25c = iStack_25c + 1;
    iStack_258 = iStack_258 + 1;
    if (7 < iStack_25c) {
      lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
joined_r0x00300ca8:
      piVar4 = aiStack_250;
      if (lVar8 != 0) goto LAB_00300278;
    }
  }
  if (uStack_5c == 0x80) {
    iVar5 = (int)pcStack_7c - (int)pcVar14;
    if (0 < iVar5) {
      if (0x10 < iVar5) {
        piVar4[1] = 0x10;
        while( true ) {
          *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
          piVar4 = piVar4 + 2;
          iStack_25c = iStack_25c + 1;
          iStack_258 = iStack_258 + 0x10;
          if (7 < iStack_25c) {
            lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
            piVar4 = aiStack_250;
            if (lVar8 != 0) goto LAB_00300278;
          }
          iVar5 = iVar5 + -0x10;
          if (iVar5 < 0x11) break;
          piVar4[1] = 0x10;
        }
      }
      piVar4[1] = iVar5;
      *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
      iStack_258 = iStack_258 + iVar5;
      iStack_25c = iStack_25c + 1;
      piVar4 = piVar4 + 2;
      if (7 < iStack_25c) {
        lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
        piVar4 = aiStack_250;
        if (lVar8 != 0) goto LAB_00300278;
      }
    }
  }
  iVar5 = (int)pcStack_64 - (int)pcVar6;
  if (0 < iVar5) {
    if (0x10 < iVar5) {
      piVar4[1] = 0x10;
      while( true ) {
        *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
        piVar4 = piVar4 + 2;
        iStack_25c = iStack_25c + 1;
        iStack_258 = iStack_258 + 0x10;
        if (7 < iStack_25c) {
          lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
          piVar4 = aiStack_250;
          if (lVar8 != 0) goto LAB_00300278;
        }
        iVar5 = iVar5 + -0x10;
        if (iVar5 < 0x11) break;
        piVar4[1] = 0x10;
      }
    }
    piVar4[1] = iVar5;
    *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
    iStack_258 = iStack_258 + iVar5;
    iStack_25c = iStack_25c + 1;
    piVar4 = piVar4 + 2;
    if (7 < iStack_25c) {
      lVar8 = FUN_002ffc08(iStack_8c,&piStack_260);
      piVar4 = aiStack_250;
      if (lVar8 != 0) goto LAB_00300278;
    }
  }
  if ((uStack_84 & 0x100) == 0) {
    piVar4[1] = (int)pcVar6;
    *piVar4 = (int)pcVar13;
    piVar4 = piVar4 + 2;
    iStack_258 = iStack_258 + (int)pcVar6;
LAB_00300440:
    iStack_25c = iStack_25c + 1;
    if (iStack_25c < 8) goto LAB_0030046c;
    lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
  }
  else {
    if (0x65 < lVar7) {
      lVar7 = FUN_003142e0(uStack_70,0);
      iVar5 = iStack_94;
      pcVar6 = pcStack_98;
      if (lVar7 == 0) {
        piVar4[1] = 1;
        *piVar4 = (int)&DAT_00377928;
        iStack_258 = iStack_258 + 1;
        iStack_25c = iStack_25c + 1;
        piVar4 = piVar4 + 2;
        if (7 < iStack_25c) {
          lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
          piVar4 = aiStack_250;
          if (lVar7 != 0) goto LAB_00300278;
        }
        iVar5 = iStack_78;
        if ((iStack_94 <= (int)pcStack_98) && ((uStack_84 & 1) == 0)) goto LAB_0030046c;
        piVar4[1] = 1;
        *piVar4 = iVar5;
        piVar4 = piVar4 + 2;
        iStack_25c = iStack_25c + 1;
        iStack_258 = iStack_258 + 1;
        if (7 < iStack_25c) {
          lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
          piVar4 = aiStack_250;
          if (lVar7 != 0) goto LAB_00300278;
        }
        iVar5 = iStack_94 + -1;
        if (iVar5 < 1) goto LAB_0030046c;
        if (0x10 < iVar5) {
          piVar4[1] = 0x10;
          while( true ) {
            *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
            piVar4 = piVar4 + 2;
            iStack_25c = iStack_25c + 1;
            iStack_258 = iStack_258 + 0x10;
            if (7 < iStack_25c) {
              lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
              piVar4 = aiStack_250;
              if (lVar7 != 0) goto LAB_00300278;
            }
            iVar5 = iVar5 + -0x10;
            if (iVar5 < 0x11) break;
            piVar4[1] = 0x10;
          }
        }
        piVar4[1] = iVar5;
        *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
        piVar4 = piVar4 + 2;
        iStack_258 = iStack_258 + iVar5;
      }
      else {
        if ((int)pcStack_98 < 1) {
          piVar4[1] = 1;
          *piVar4 = (int)&DAT_00377928;
          iStack_258 = iStack_258 + 1;
          iStack_25c = iStack_25c + 1;
          piVar4 = piVar4 + 2;
          if (7 < iStack_25c) {
            lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
            piVar4 = aiStack_250;
            if (lVar7 != 0) goto LAB_00300278;
          }
          iVar5 = iStack_78;
          if ((pcStack_98 == (char *)0x0) && (iStack_94 == 0)) goto LAB_0030046c;
          piVar4[1] = 1;
          *piVar4 = iVar5;
          iStack_258 = iStack_258 + 1;
          iStack_25c = iStack_25c + 1;
          piVar4 = piVar4 + 2;
          if (7 < iStack_25c) {
            lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
            piVar4 = aiStack_250;
            if (lVar7 != 0) goto LAB_00300278;
          }
          iVar5 = -(int)pcStack_98;
          if (0 < iVar5) {
            if (0x10 < iVar5) {
              piVar4[1] = 0x10;
              while( true ) {
                *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
                piVar4 = piVar4 + 2;
                iStack_25c = iStack_25c + 1;
                iStack_258 = iStack_258 + 0x10;
                if (7 < iStack_25c) {
                  lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
                  piVar4 = aiStack_250;
                  if (lVar7 != 0) goto LAB_00300278;
                }
                iVar5 = iVar5 + -0x10;
                if (iVar5 < 0x11) break;
                piVar4[1] = 0x10;
              }
            }
            piVar4[1] = iVar5;
            *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
            iStack_258 = iStack_258 + iVar5;
            iStack_25c = iStack_25c + 1;
            piVar4 = piVar4 + 2;
            if (7 < iStack_25c) {
              lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
              piVar4 = aiStack_250;
              if (lVar7 != 0) goto LAB_00300278;
            }
          }
          iVar5 = iStack_94;
          *piVar4 = (int)pcVar13;
        }
        else {
          if (iStack_94 <= (int)pcStack_98) {
            piVar4[1] = iStack_94;
            *piVar4 = (int)pcVar13;
            piVar4 = piVar4 + 2;
            iStack_25c = iStack_25c + 1;
            iStack_258 = iStack_258 + iVar5;
            if (7 < iStack_25c) {
              lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
              if (lVar7 != 0) goto LAB_00300278;
              piVar4 = aiStack_250;
              iVar5 = iStack_94;
            }
            iVar5 = (int)pcStack_98 - iVar5;
            if (0 < iVar5) {
              if (0x10 < iVar5) {
                piVar4[1] = 0x10;
                while( true ) {
                  *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
                  piVar4 = piVar4 + 2;
                  iStack_25c = iStack_25c + 1;
                  iStack_258 = iStack_258 + 0x10;
                  if (7 < iStack_25c) {
                    lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
                    piVar4 = aiStack_250;
                    if (lVar7 != 0) goto LAB_00300278;
                  }
                  iVar5 = iVar5 + -0x10;
                  if (iVar5 < 0x11) break;
                  piVar4[1] = 0x10;
                }
              }
              piVar4[1] = iVar5;
              *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
              iStack_258 = iStack_258 + iVar5;
              iStack_25c = iStack_25c + 1;
              piVar4 = piVar4 + 2;
              if (7 < iStack_25c) {
                lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
                piVar4 = aiStack_250;
                if (lVar7 != 0) goto LAB_00300278;
              }
            }
            if ((uStack_84 & 1) == 0) goto LAB_0030046c;
            piVar4[1] = 1;
            *piVar4 = (int)&DAT_00377930;
            piVar4 = piVar4 + 2;
            iStack_258 = iStack_258 + 1;
            goto LAB_00300440;
          }
          piVar4[1] = (int)pcStack_98;
          *piVar4 = (int)pcVar13;
          piVar4 = piVar4 + 2;
          iStack_25c = iStack_25c + 1;
          iStack_258 = iStack_258 + (int)pcVar6;
          if (7 < iStack_25c) {
            lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
            if (lVar7 != 0) goto LAB_00300278;
            piVar4 = aiStack_250;
            pcVar6 = pcStack_98;
          }
          piVar4[1] = 1;
          *piVar4 = (int)&DAT_00377930;
          iStack_258 = iStack_258 + 1;
          iStack_25c = iStack_25c + 1;
          piVar4 = piVar4 + 2;
          if (7 < iStack_25c) {
            lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
            piVar4 = aiStack_250;
            if (lVar7 != 0) goto LAB_00300278;
          }
          iVar5 = iStack_94;
          pcVar3 = pcStack_98;
          *piVar4 = (int)(pcVar13 + (int)pcVar6);
          iVar5 = iVar5 - (int)pcVar3;
        }
        piVar4[1] = iVar5;
        piVar4 = piVar4 + 2;
        iStack_258 = iStack_258 + iVar5;
      }
      goto LAB_00300440;
    }
    if ((iStack_94 < 2) && ((uStack_84 & 1) == 0)) {
      *piVar4 = (int)pcVar13;
      piVar4[1] = 1;
      piVar4 = piVar4 + 2;
      iStack_25c = iStack_25c + 1;
      iStack_258 = iStack_258 + 1;
      if (7 < iStack_25c) {
        lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
joined_r0x00300b00:
        piVar4 = aiStack_250;
        if (lVar7 != 0) goto LAB_00300278;
      }
    }
    else {
      cStack_b0 = *pcVar13;
      uStack_af = 0x2e;
      piVar4[1] = 2;
      *piVar4 = (int)&cStack_b0;
      iStack_258 = iStack_258 + 2;
      iStack_25c = iStack_25c + 1;
      piVar4 = piVar4 + 2;
      if (7 < iStack_25c) {
        lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
        piVar4 = aiStack_250;
        if (lVar7 != 0) goto LAB_00300278;
      }
      lVar7 = FUN_003142e0(uStack_70,0);
      iVar5 = iStack_94;
      if (lVar7 == 0) {
        iVar5 = iStack_94 + -1;
        if (iVar5 < 1) goto LAB_00300b0c;
        if (0x10 < iVar5) {
          piVar4[1] = 0x10;
          while( true ) {
            *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
            piVar4 = piVar4 + 2;
            iStack_25c = iStack_25c + 1;
            iStack_258 = iStack_258 + 0x10;
            if (7 < iStack_25c) {
              lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
              piVar4 = aiStack_250;
              if (lVar7 != 0) goto LAB_00300278;
            }
            iVar5 = iVar5 + -0x10;
            if (iVar5 < 0x11) break;
            piVar4[1] = 0x10;
          }
        }
        piVar4[1] = iVar5;
        *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 0x12);
        iStack_258 = iStack_258 + iVar5;
      }
      else {
        *piVar4 = (int)(pcVar13 + 1);
        piVar4[1] = iVar5 + -1;
        iStack_258 = iStack_258 + iVar5 + -1;
      }
      iStack_25c = iStack_25c + 1;
      piVar4 = piVar4 + 2;
      if (7 < iStack_25c) {
        lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
        goto joined_r0x00300b00;
      }
    }
LAB_00300b0c:
    iVar5 = iStack_68;
    piVar4[1] = iStack_68;
    *piVar4 = (int)auStack_270;
    iStack_258 = iStack_258 + iVar5;
    iStack_25c = iStack_25c + 1;
    piVar4 = piVar4 + 2;
    if (iStack_25c < 8) goto LAB_0030046c;
    lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
  }
  piVar4 = aiStack_250;
  if (lVar7 != 0) goto LAB_00300278;
LAB_0030046c:
  if ((uStack_84 & 4) != 0) {
    iVar5 = (int)pcStack_7c - (int)pcVar14;
    if (0 < iVar5) {
      if (iVar5 < 0x11) {
        piVar4[1] = iVar5;
      }
      else {
        piVar4[1] = 0x10;
        while( true ) {
          *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 2);
          piVar4 = piVar4 + 2;
          iStack_25c = iStack_25c + 1;
          iStack_258 = iStack_258 + 0x10;
          if (7 < iStack_25c) {
            lVar7 = FUN_002ffc08(iStack_8c,&piStack_260);
            piVar4 = aiStack_250;
            if (lVar7 != 0) goto LAB_00300278;
          }
          iVar5 = iVar5 + -0x10;
          if (iVar5 < 0x11) break;
          piVar4[1] = 0x10;
        }
        piVar4[1] = iVar5;
      }
      iStack_25c = iStack_25c + 1;
      *piVar4 = (int)(s_QX_0000000000000000bug_in_vfprin_003778e6 + 2);
      iStack_258 = iStack_258 + iVar5;
      if ((7 < iStack_25c) && (lVar7 = FUN_002ffc08(iStack_8c,&piStack_260), lVar7 != 0))
      goto LAB_00300278;
    }
  }
  pcVar6 = pcStack_7c;
  if ((int)pcStack_7c <= (int)pcVar14) {
    pcVar6 = pcVar14;
  }
  iStack_80 = iStack_80 + (int)pcVar6;
  if ((iStack_258 != 0) && (lVar7 = FUN_002ffc08(iStack_8c,&piStack_260), lVar7 != 0))
  goto LAB_00300278;
  iStack_25c = 0;
  piVar4 = aiStack_250;
  goto LAB_002ffe8c;
LAB_00300d08:
  do {
    pcVar14 = pcVar13;
    pcVar13 = pcVar14 + -1;
    cVar10 = ((byte)uVar9 & 7) + 0x30;
    uVar9 = uVar9 >> 3;
    *pcVar13 = cVar10;
  } while (uVar9 != 0);
  if ((uStack_84 & 1) == 0) goto LAB_00300cf8;
  pcVar6 = acStack_280 + -(int)pcVar13;
  if (cVar10 != '0') {
    pcVar13 = pcVar14 + -2;
    *pcVar13 = '0';
    goto LAB_00300cf8;
  }
  goto LAB_00300cfc;
LAB_00300cd4:
  do {
    uVar2 = (uint)uVar9;
    pcVar13 = pcVar13 + -1;
    uVar9 = uVar9 >> 4;
    *pcVar13 = pcStack_60[uVar2 & 0xf];
  } while (uVar9 != 0);
  goto LAB_00300cf8;
switchD_002fff50_caseD_31:
  iVar5 = 0;
  while( true ) {
    iVar11 = (int)lVar7;
    cVar10 = *param_3;
    lVar7 = (long)cVar10;
    pcStack_7c = (char *)((iVar5 + iVar11) - 0x30);
    param_3 = param_3 + 1;
    if (9 < (int)cVar10 - 0x30U) break;
    iVar5 = (int)pcStack_7c * 10;
  }
  goto LAB_002fff30;
}

