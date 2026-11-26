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

s32 FUN_002fd160(...) asm("func_002fd160");
s32 FUN_00311aa0(...) asm("func_00311aa0");
s32 FUN_00316e88(...) asm("func_00316e88");
s32 FUN_00316f38(...) asm("func_00316f38");
s32 FUN_00316f70(...) asm("func_00316f70");
s32 FUN_00316fc8(...) asm("func_00316fc8");
s32 FUN_00317868(...) asm("func_00317868");
extern u32 LAB_003178e8 asm("D_003178e8");
extern u32 LAB_00317904 asm("D_00317904");
extern u32 LAB_00317990 asm("D_00317990");
extern u32 LAB_0031799c asm("D_0031799c");
extern u32 LAB_003179a0 asm("D_003179a0");
extern u32 LAB_003179c4 asm("D_003179c4");
extern u32 LAB_00317a90 asm("D_00317a90");
extern u32 LAB_00317c04 asm("D_00317c04");
_GHIDRA_ANY(CONCAT44)

// Ghidra decompile of 0x00317868, wrapped mechanically (ad/fallback.py)

void FUN_00317868_impl(uint *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4) asm("func_00317868");
void FUN_00317868_impl(uint *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4) {
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined8 *puVar22;
  int iStack_90;
  undefined4 uStack_8c;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [5];
  
  piVar21 = &iStack_90;
  *(undefined4 *)(param_4 + 0x162) = 0;
  puVar20 = (undefined8 *)0x0;
  if (param_1 < param_2) {
    uVar18 = *(uint *)(param_4 + 0x166);
    iVar8 = (int)param_3;
    if (uVar18 < *(uint *)(iVar8 + 0x2c8)) {
      do {
        uVar5 = (ulong)(byte)*param_1;
        uVar11 = uVar5 & 0xc0;
        puVar19 = (uint *)((int)param_1 + 1);
        if (uVar11 == 0x40) {
          uVar5 = uVar5 & 0x3f;
          uVar6 = param_4[0x168];
          goto LAB_003178e8;
        }
        if (uVar11 == 0x80) {
          uStack_88 = uVar5 & 0x3f;
          puVar19 = (uint *)FUN_00316f38(puVar19,&iStack_90);
          lVar4 = FUN_00311aa0(CONCAT44(uStack_8c,iStack_90),param_4[0x167]);
          goto LAB_00317990;
        }
        if (uVar11 == 0xc0) {
          uStack_88 = uVar5 & 0x3f;
LAB_003179c4:
          *(undefined4 *)(param_4 + (int)uStack_88 * 2 + 1) = 0;
          goto switchD_003179ec_caseD_0;
        }
        switch((byte)*param_1) {
        case 0:
        case 7:
        case 8:
          break;
        case 1:
          uVar1 = *(undefined1 *)((int)param_4 + 0xb49);
          uVar6 = FUN_00316e88(uVar1,param_3);
          puVar19 = (uint *)FUN_00316fc8(uVar1,uVar6,puVar19,param_4 + 0x166);
          break;
        case 2:
          uVar5 = (ulong)*(byte *)puVar19;
          uVar6 = param_4[0x168];
          puVar19 = (uint *)((int)param_1 + 2);
          goto LAB_003178e8;
        case 3:
          uVar6 = param_4[0x168];
          uVar5 = (ulong)*(ushort *)puVar19;
          puVar19 = (uint *)((int)param_1 + 3);
          goto LAB_003178e8;
        case 4:
          uVar2 = *puVar19;
          uVar6 = param_4[0x168];
          puVar19 = (uint *)((int)param_1 + 5);
          uVar5 = (ulong)uVar2;
LAB_003178e8:
          iVar3 = FUN_00311aa0(uVar5,uVar6);
          *(uint *)(param_4 + 0x166) = uVar18 + iVar3;
          break;
        case 5:
          uVar6 = FUN_00316f38(puVar19,&uStack_88);
          puVar19 = (uint *)FUN_00316f38(uVar6,&iStack_90);
          uVar7 = param_4[0x167];
          uVar6 = CONCAT44(uStack_8c,iStack_90);
          goto LAB_00317a90;
        case 6:
          puVar19 = (uint *)FUN_00316f38(puVar19,&uStack_88);
          goto LAB_003179c4;
        case 9:
          uVar6 = FUN_00316f38(puVar19,&uStack_88);
          puVar19 = (uint *)FUN_00316f38(uVar6,&uStack_80);
          param_4[(int)uStack_88 * 2] = uStack_80;
          *(undefined4 *)(param_4 + (int)uStack_88 * 2 + 1) = 2;
          break;
        case 10:
          if (puVar20 == (undefined8 *)0x0) {
            puVar22 = (undefined8 *)((int)piVar21 + -0xb20);
            piVar21 = (int *)((int)piVar21 + -0xb20);
            puVar10 = puVar22;
          }
          else {
            puVar10 = puVar20;
            puVar20 = *(undefined8 **)(puVar20 + 0x162);
          }
          puVar16 = param_4;
          puVar17 = puVar10;
          do {
            puVar12 = puVar17;
            puVar15 = puVar16;
            uVar6 = puVar15[1];
            uVar7 = puVar15[2];
            uVar9 = puVar15[3];
            *puVar12 = *puVar15;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar9;
            puVar16 = puVar15 + 4;
            puVar17 = puVar12 + 4;
          } while (puVar16 != param_4 + 0x160);
          uVar6 = puVar15[5];
          uVar7 = puVar15[6];
          puVar12[4] = *puVar16;
          puVar12[5] = uVar6;
          puVar12[6] = uVar7;
          *(undefined8 **)(param_4 + 0x162) = puVar10;
          break;
        case 0xb:
          puVar10 = *(undefined8 **)(param_4 + 0x162);
          puVar16 = param_4;
          puVar17 = puVar10;
          do {
            puVar15 = puVar17;
            puVar12 = puVar16;
            uVar6 = puVar15[1];
            uVar7 = puVar15[2];
            uVar9 = puVar15[3];
            *puVar12 = *puVar15;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar9;
            puVar17 = puVar15 + 4;
            puVar16 = puVar12 + 4;
          } while (puVar17 != puVar10 + 0x160);
          uVar7 = puVar15[5];
          uVar6 = puVar15[6];
          puVar12[4] = *puVar17;
          puVar12[5] = uVar7;
          puVar12[6] = uVar6;
          *(undefined8 **)(puVar10 + 0x162) = puVar20;
          puVar20 = puVar10;
          break;
        case 0xc:
          uVar6 = FUN_00316f38(puVar19,param_4 + 0x164);
          puVar19 = (uint *)FUN_00316f38(uVar6,&iStack_90);
          *(undefined4 *)((int)param_4 + 0xb2c) = 1;
          param_4[0x163] = CONCAT44(uStack_8c,iStack_90);
          break;
        case 0xd:
          puVar19 = (uint *)FUN_00316f38(puVar19,param_4 + 0x164);
          goto LAB_00317c04;
        case 0xe:
          puVar19 = (uint *)FUN_00316f38(puVar19,&iStack_90);
          param_4[0x163] = CONCAT44(uStack_8c,iStack_90);
          break;
        case 0xf:
          iVar3 = FUN_00316f38(puVar19,&iStack_90);
          *(int *)(param_4 + 0x165) = iVar3;
          *(undefined4 *)((int)param_4 + 0xb2c) = 2;
          puVar19 = (uint *)(iVar3 + iStack_90);
          break;
        case 0x10:
          uVar6 = FUN_00316f38(puVar19,&uStack_88);
          iVar3 = FUN_00316f38(uVar6,&iStack_90);
          uVar13 = 3;
          plVar14 = param_4 + (int)uStack_88 * 2;
          puVar19 = (uint *)(iVar3 + iStack_90);
          *(int *)plVar14 = iVar3;
          goto LAB_003179a0;
        case 0x11:
          uVar6 = FUN_00316f38(puVar19,&uStack_88);
          puVar19 = (uint *)FUN_00316f70(uVar6,auStack_78);
          uVar7 = param_4[0x167];
          uVar6 = auStack_78[0];
LAB_00317a90:
          lVar4 = FUN_00311aa0(uVar6,uVar7);
LAB_00317990:
          plVar14 = param_4 + (int)uStack_88 * 2;
          *plVar14 = lVar4;
LAB_0031799c:
          uVar13 = 1;
LAB_003179a0:
          *(undefined4 *)(plVar14 + 1) = uVar13;
          break;
        case 0x12:
          uVar6 = FUN_00316f38(puVar19,param_4 + 0x164);
          puVar19 = (uint *)FUN_00316f70(uVar6,param_4 + 0x163);
LAB_00317c04:
          *(undefined4 *)((int)param_4 + 0xb2c) = 1;
          break;
        case 0x13:
          puVar19 = (uint *)FUN_00316f70(puVar19,param_4 + 0x163);
          break;
        default:
                    /* WARNING: Subroutine does not return */
          FUN_002fd160();
        case 0x2d:
          uStack_88 = 0x10;
          lVar4 = 0;
          do {
            uVar5 = uStack_88 + 1;
            param_4[(int)uStack_88 * 2] = lVar4;
            *(undefined4 *)(param_4 + (int)uStack_88 * 2 + 1) = 1;
            lVar4 = lVar4 + 4;
            uStack_88 = uVar5;
          } while (uVar5 < 0x20);
          goto LAB_00317904;
        case 0x2e:
          puVar19 = (uint *)FUN_00316f38(puVar19,iVar8 + 0x2e0);
          break;
        case 0x2f:
          uVar6 = FUN_00316f38(puVar19,&uStack_88);
          puVar19 = (uint *)FUN_00316f38(uVar6,&iStack_90);
          lVar4 = FUN_00311aa0(CONCAT44(uStack_8c,iStack_90),param_4[0x167]);
          plVar14 = param_4 + (int)uStack_88 * 2;
          *plVar14 = -lVar4;
          goto LAB_0031799c;
        }
switchD_003179ec_caseD_0:
LAB_00317904:
;
      } while ((puVar19 < param_2) &&
              (uVar18 = *(uint *)(param_4 + 0x166), param_1 = puVar19,
              uVar18 < *(uint *)(iVar8 + 0x2c8)));
    }
  }
  return;
}

