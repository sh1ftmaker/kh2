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
// by its use site (uint*, char, float, ...); AnyCell reads/writes as whatever that is.
struct AnyCell {
    u32 w;
    template <class T> operator T() const { return *(const T*)this; }
    operator s64() const { return *(const s32*)this; }
    template <class T> AnyCell &operator=(const T &v) { *(T*)this = v; return *this; }
    template <class T> bool operator==(T *p) const { return *(T* const*)this == p; }
    template <class T> bool operator!=(T *p) const { return *(T* const*)this != p; }
    bool operator==(s64 v) const { return *(const s32*)this == v; }
    bool operator!=(s64 v) const { return *(const s32*)this != v; }
    u8 &operator[](int i) { return ((u8*)this)[i]; }
};
// Generic stand-in result for Ghidra intrinsics (_lqc2, _vadd..., CONCAT44, SUB168, ...):
// converts to whatever the use site needs. Mechanical, never a match, always compiles.
struct AnyVal {
    template <class T> operator T() const { T t; return t; }
    operator s64() const { return 0; }
    operator Q16() const { Q16 q; return q; }
    operator B12() const { B12 q; return q; }
    operator B8() const { B8 q; return q; }
    operator B4() const { B4 q; return q; }
};
#define _GHIDRA_ANY(F) static inline AnyVal F() { AnyVal r; return r; } template <class A> static inline AnyVal F(const A &) { AnyVal r; return r; } template <class A, class B> static inline AnyVal F(const A &, const B &) { AnyVal r; return r; } template <class A, class B, class C> static inline AnyVal F(const A &, const B &, const C &) { AnyVal r; return r; } template <class A, class B, class C, class D> static inline AnyVal F(const A &, const B &, const C &, const D &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &) { AnyVal r; return r; } template <class A, class B, class C, class D, class E, class G> static inline AnyVal F(const A &, const B &, const C &, const D &, const E &, const G &) { AnyVal r; return r; }

s32 FUN_002fd160(...) asm("func_002fd160");
s32 FUN_00311aa0(...) asm("func_00311aa0");
s32 FUN_00311dd0(...) asm("func_00311dd0");
s32 FUN_003125c0(...) asm("func_003125c0");
s32 FUN_00316f38(...) asm("func_00316f38");
s32 FUN_00316f70(...) asm("func_00316f70");
s32 FUN_003172f0(...) asm("func_003172f0");
extern u32 LAB_0031732c asm("D_0031732c");
extern u32 LAB_00317360 asm("D_00317360");
extern u32 LAB_0031736c asm("D_0031736c");
extern u32 LAB_00317388 asm("D_00317388");
extern u32 LAB_00317390 asm("D_00317390");
extern u32 LAB_003173d0 asm("D_003173d0");
extern u32 LAB_00317494 asm("D_00317494");
extern u32 LAB_0031749c asm("D_0031749c");
extern u32 LAB_0031764c asm("D_0031764c");
extern u32 LAB_003176b4 asm("D_003176b4");
extern u32 LAB_003176e0 asm("D_003176e0");
extern u32 LAB_0031779c asm("D_0031779c");

// Ghidra decompile of 0x003172f0, wrapped mechanically (ad/fallback.py)

ulong FUN_003172f0_impl(ulong *param_1,ulong *param_2,int param_3,undefined8 param_4) asm("func_003172f0");
ulong FUN_003172f0_impl(ulong *param_1,ulong *param_2,int param_3,undefined8 param_4) {
  byte bVar1;
  bool bVar2;
  short sVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong auStack_278 [68];
  ulong uStack_58;
  B8 auStack_50;
  ulong uStack_48;
  long alStack_40 [2];
  
  uVar11 = 1;
  auStack_278[3] = param_4;
  if (param_2 <= param_1) {
LAB_00317390:
    if (-1 < (int)(uVar11 - 1)) {
      return auStack_278[uVar11 + 2];
    }
switchD_00317350_caseD_4:
                    /* WARNING: Subroutine does not return */
    FUN_002fd160();
  }
  bVar1 = (byte)*param_1;
LAB_0031732c:
  uVar9 = (uint)bVar1;
  puVar10 = (ulong *)((int)param_1 + 1);
  if (0x93 < uVar9 - 3) goto switchD_00317350_caseD_4;
  uVar12 = uVar11;
  switch(uVar9) {
  case 3:
  case 0xc:
    uVar9 = *(uint *)puVar10;
    puVar10 = (ulong *)((int)param_1 + 5);
    goto LAB_00317360;
  case 4:
  case 5:
  case 7:
  case 0x16:
  case 0x18:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x91:
  case 0x93:
  case 0x95:
    goto switchD_00317350_caseD_4;
  case 6:
  case 0x19:
  case 0x1f:
  case 0x20:
  case 0x23:
  case 0x94:
    uVar12 = uVar11 - 1;
    if ((int)uVar12 < 0) goto switchD_00317350_caseD_4;
    auStack_278[0x43] = auStack_278[uVar11 + 2];
    if (uVar9 != 0x1f) {
      puVar7 = (ulong *)auStack_278[0x43];
      if (0x1f < uVar9) {
        if (uVar9 == 0x23) {
          puVar10 = (ulong *)FUN_00316f38(puVar10,alStack_40);
          auStack_278[0x43] = auStack_278[0x43] + alStack_40[0];
        }
        else {
          if (uVar9 < 0x24) {
            if (uVar9 == 0x20) {
              auStack_278[0x43] = ~auStack_278[0x43];
              goto LAB_0031736c;
            }
            goto switchD_00317350_caseD_4;
          }
          if (uVar9 != 0x94) goto switchD_00317350_caseD_4;
          bVar1 = *(byte *)puVar10;
          puVar10 = (ulong *)((int)param_1 + 2);
          if (bVar1 != 2) {
            if (bVar1 < 3) {
              if (bVar1 == 1) {
                auStack_278[0x43] = (ulong)(byte)*puVar7;
                break;
              }
            }
            else {
              if (bVar1 == 4) goto LAB_0031779c;
              if (bVar1 == 8) {
                auStack_278[0x43] = *puVar7;
                goto LAB_0031736c;
              }
            }
            goto switchD_00317350_caseD_4;
          }
          auStack_278[0x43] = (ulong)(ushort)*puVar7;
        }
        break;
      }
      if (uVar9 == 6) {
LAB_0031779c:
        uVar9 = (uint)*puVar7;
        uVar11 = uVar12;
        goto LAB_00317360;
      }
      if (uVar9 != 0x19) goto switchD_00317350_caseD_4;
      if (-1 < (long)auStack_278[0x43]) goto LAB_0031736c;
    }
    auStack_278[0x43] = -auStack_278[0x43];
    break;
  case 8:
    auStack_278[0x43] = (ulong)*(byte *)puVar10;
    goto LAB_003173d0;
  case 9:
    auStack_278[0x43] = (ulong)(char)*(byte *)puVar10;
LAB_003173d0:
    puVar10 = (ulong *)((int)param_1 + 2);
    goto LAB_0031736c;
  case 10:
    auStack_278[0x43] = (ulong)*(ushort *)puVar10;
    puVar10 = (ulong *)((int)param_1 + 3);
    break;
  case 0xb:
    sVar3 = *(short *)puVar10;
    puVar10 = (ulong *)((int)param_1 + 3);
    auStack_278[0x43] = (ulong)sVar3;
    break;
  case 0xd:
    auStack_278[0x43] = (ulong)(int)*(uint *)puVar10;
    puVar10 = (ulong *)((int)param_1 + 5);
    break;
  case 0xe:
  case 0xf:
    auStack_278[0x43] = *puVar10;
    puVar10 = (ulong *)((int)param_1 + 9);
    goto LAB_0031736c;
  case 0x10:
    puVar10 = (ulong *)FUN_00316f38(puVar10,auStack_278 + 0x43);
    goto LAB_0031736c;
  case 0x11:
    puVar10 = (ulong *)FUN_00316f70(puVar10,&uStack_58);
    auStack_278[0x43] = uStack_58;
    break;
  case 0x12:
    iVar8 = uVar11 << 3;
    if (0 < (int)uVar11) goto LAB_00317494;
    goto switchD_00317350_caseD_4;
  case 0x13:
    uVar11 = uVar11 - 1;
    if (-1 < (int)uVar11) goto LAB_00317388;
    goto switchD_00317350_caseD_4;
  case 0x14:
    if (1 < (int)uVar11) {
      auStack_278[0x43] = auStack_278[uVar11 + 1];
      goto LAB_0031749c;
    }
    goto switchD_00317350_caseD_4;
  case 0x15:
    bVar1 = *(byte *)puVar10;
    uStack_48 = (ulong)bVar1;
    uVar5 = uStack_48;
    puVar10 = (ulong *)((int)param_1 + 2);
    if ((long)(ulong)bVar1 < (long)(int)(uVar11 - 1)) {
      (*(u32*)((u8*)&uStack_48 + 0)) = (uint)bVar1;
      iVar8 = (uVar11 - (uint)uStack_48) * 8;
      uStack_48 = uVar5;
LAB_00317494:
      auStack_278[0x43] = *(ulong *)((int)auStack_278 + iVar8 + 0x10);
LAB_0031749c:
      goto LAB_0031736c;
    }
    goto switchD_00317350_caseD_4;
  case 0x17:
    if (2 < (int)uVar11) {
      uVar5 = auStack_278[uVar11 + 2];
      uVar6 = auStack_278[uVar11];
      auStack_278[uVar11 + 2] = auStack_278[uVar11 + 1];
      auStack_278[uVar11] = uVar5;
      auStack_278[uVar11 + 1] = uVar6;
      goto switchD_00317350_caseD_96;
    }
    goto switchD_00317350_caseD_4;
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x21:
  case 0x22:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
    uVar12 = uVar11 - 2;
    if ((int)uVar12 < 0) goto switchD_00317350_caseD_4;
    uVar6 = auStack_278[uVar11 + 2];
    uVar5 = auStack_278[uVar11 + 1];
    iVar8 = (int)uVar6;
    switch(uVar9) {
    case 0x1a:
      auStack_278[0x43] = uVar5 & uVar6;
      break;
    case 0x1b:
      auStack_278[0x43] = FUN_00311dd0();
      goto LAB_0031736c;
    case 0x1c:
      auStack_278[0x43] = uVar5 - uVar6;
      break;
    case 0x1d:
      auStack_278[0x43] = FUN_003125c0();
      goto LAB_0031736c;
    case 0x1e:
      auStack_278[0x43] = FUN_00311aa0();
      goto LAB_0031736c;
    default:
      goto switchD_00317350_caseD_4;
    case 0x21:
      auStack_278[0x43] = uVar5 | uVar6;
      break;
    case 0x22:
      auStack_278[0x43] = uVar5 + uVar6;
      break;
    case 0x24:
      auStack_278[0x43] = uVar5 << (long)iVar8;
      break;
    case 0x25:
      auStack_278[0x43] = uVar5 >> (long)iVar8;
      break;
    case 0x26:
      auStack_278[0x43] = (long)uVar5 >> (long)iVar8;
      break;
    case 0x27:
      auStack_278[0x43] = uVar5 ^ uVar6;
      break;
    case 0x29:
      auStack_278[0x43] = (ulong)(uVar6 == uVar5);
      break;
    case 0x2a:
      bVar2 = (long)uVar6 < (long)uVar5;
      goto LAB_0031764c;
    case 0x2b:
      auStack_278[0x43] = (ulong)((long)uVar5 < (long)uVar6);
      break;
    case 0x2c:
      bVar2 = (long)uVar5 < (long)uVar6;
LAB_0031764c:
      auStack_278[0x43] = (ulong)bVar2 ^ 1;
      break;
    case 0x2d:
      auStack_278[0x43] = (ulong)((long)uVar6 < (long)uVar5);
      break;
    case 0x2e:
      auStack_278[0x43] = (ulong)(uVar6 != uVar5);
    }
    break;
  case 0x28:
    uVar9 = uVar11 - 1;
    if (-1 < (int)uVar9) {
      sVar3 = *(short *)puVar10;
      iVar8 = uVar11 + 2;
      uStack_48 = (long)sVar3;
      uVar5 = uStack_48;
      puVar10 = (ulong *)((int)param_1 + 3);
      uVar11 = uVar9;
      uStack_48 = uVar5;
      if (auStack_278[iVar8] != 0) {
        (*(u32*)((u8*)&uStack_48 + 0)) = (uint)sVar3;
        puVar10 = (ulong *)((int)puVar10 + (uint)uStack_48);
      }
      goto switchD_00317350_caseD_96;
    }
    goto switchD_00317350_caseD_4;
  case 0x2f:
    uStack_48 = (long)*(short *)puVar10;
    uVar5 = uStack_48;
    (*(u32*)((u8*)&uStack_48 + 0)) = (uint)*(short *)puVar10;
    puVar10 = (ulong *)((int)param_1 + (uint)uStack_48 + 3);
    uStack_48 = uVar5;
    goto switchD_00317350_caseD_96;
  default:
    uVar9 = bVar1 - 0x30;
LAB_00317360:
    auStack_278[0x43] = (ulong)uVar9;
    uVar12 = uVar11;
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    iVar8 = bVar1 - 0x50;
    goto LAB_003176b4;
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
    puVar10 = (ulong *)FUN_00316f70(puVar10,&uStack_48);
    iVar8 = uVar9 - 0x70;
    goto LAB_003176e0;
  case 0x90:
    puVar10 = (ulong *)FUN_00316f38(puVar10,auStack_50);
    iVar8 = (*(u32*)((u8*)&auStack_50 + 0));
LAB_003176b4:
    auStack_278[0x43] = **(ulong **)(iVar8 * 4 + param_3);
    goto LAB_0031736c;
  case 0x92:
    uVar4 = FUN_00316f38(puVar10,auStack_50);
    puVar10 = (ulong *)FUN_00316f70(uVar4,&uStack_48);
    iVar8 = (*(u32*)((u8*)&auStack_50 + 0));
LAB_003176e0:
    auStack_278[0x43] = **(long **)(iVar8 * 4 + param_3) + uStack_48;
    goto LAB_0031749c;
  case 0x96:
    goto switchD_00317350_caseD_96;
  }
LAB_0031736c:
  if (0x3f < uVar12) goto switchD_00317350_caseD_4;
  auStack_278[uVar12 + 4] = auStack_278[0x43];
  uVar11 = uVar12 + 1;
switchD_00317350_caseD_96:
LAB_00317388:
  if (param_2 <= puVar10) goto LAB_00317390;
  bVar1 = (byte)*puVar10;
  param_1 = puVar10;
  goto LAB_0031732c;
}

