// FIXME(lane): not matching; origin: permute (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00243f48 asm("D_00243f48");
extern "C" u32 D_0035ece8 asm("D_0035ece8");
extern "C" u32 D_0035ed0c asm("D_0035ed0c");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287da0() asm("func_00287da0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" void func_00243cd8() asm("func_00243cd8");
extern "C" void func_00243e30() asm("func_00243e30");
extern "C" void func_00244988() asm("func_00244988");
extern "C" void func_00244c30() asm("func_00244c30");
extern "C" void func_002535b0(u32) asm("func_002535b0");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" void func_00288658(u32, u32) asm("func_00288658");
extern "C" void func_00288670(u32) asm("func_00288670");

// 0x00244148 func_00244148
void func_00244148() asm("_ZN2Tz4HEFT7CtrlTopEv");
void func_00244148() {
    u32 s2;
    u32 v0;
    u32 v0_0;
    s2 = func_00287cd0();
    v0 = func_00289380(*(u32*)(&D_0035ece8));
    if (((s32)(*(u8*)(&D_0035ed0c)) == 0)) {
        if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035ece8))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ece8), 0)) == 0)) {
                func_00243e30();
            }
        }
        if (((s32)(s2) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ece8), 0)) != 0)) {
                func_00287c90(1);
                func_00244c30();
            }
        }
        func_00287df0(v0, func_00289310(*(u32*)(&D_0035ece8)), 1, 0, 1);
        v0_0 = (v0 + 6);
        switch (v0_0) {
        case 0:
            func_00244988();
            func_002535b0(3);
            func_00288658(2, 0x64);
            func_00288670((u32)&D_00243f48);
            func_00287da0();
            return;
        case 2:
        case 4:
            func_00287da0();
            return;
        case 6:
        case 7:
            func_00243cd8();
            func_00287bd0(1, 0);
            func_00287cc0(0);
            return;
        case 1:
        case 3:
        case 5:
        default:
            return;
        }
    } else {
        return;
    }
}
