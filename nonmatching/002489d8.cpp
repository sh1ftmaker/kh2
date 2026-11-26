// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00249480 asm("D_00249480");
extern "C" u32 D_0035ed4c asm("D_0035ed4c");
extern "C" u32 D_0035ed68 asm("D_0035ed68");
extern "C" u32 func_002427d8(u32) asm("func_002427d8");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287da0(u32) asm("func_00287da0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" void func_002485c8() asm("func_002485c8");
extern "C" void func_00248720() asm("func_00248720");
extern "C" void func_002491d0() asm("func_002491d0");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c90(u32) asm("func_00287c90");

// 0x002489d8 func_002489d8
void func_002489d8() asm("_ZN2Tz4MUMI7CtrlTopEv");
void func_002489d8() {
    u32 s2;
    u32 v0;
    s2 = func_00287cd0();
    v0 = func_00289380(*(u32*)(&D_0035ed4c));
    if (((s32)(*(u8*)(&D_0035ed68)) == 0)) {
        if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035ed4c))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ed4c), 0)) == 0)) {
                func_00248720();
            }
        }
        if (((s32)(s2) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ed4c), 0)) != 0)) {
                func_00287c90(1);
                func_002491d0();
            }
        }
        switch (v0) {
        case -4:
        case -2:
            func_00287da0(func_00287df0(v0, func_00289310(*(u32*)(&D_0035ed4c)), 1, (u32)&D_00249480, 1));
            return;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            if (((s32)(func_002427d8(func_00287df0(v0, func_00289310(*(u32*)(&D_0035ed4c)), 1, (u32)&D_00249480, 1))) != 0)) {
                func_002485c8();
                func_00287bd0(1, 0);
                func_00287cc0(0);
                return;
            } else {
                return;
            }
            break;
        case -3:
        case -1:
        default:
            return;
        }
    } else {
        return;
    }
}
