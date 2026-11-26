// FIXME(lane): not matching; origin: permute (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eda8 asm("D_0035eda8");
extern "C" u32 D_0035edc4 asm("D_0035edc4");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287da0() asm("func_00287da0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" void func_002426a0(u32) asm("func_002426a0");
extern "C" void func_0024ba58() asm("func_0024ba58");
extern "C" void func_0024bbb0() asm("func_0024bbb0");
extern "C" void func_0024c6a0() asm("func_0024c6a0");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");

// 0x0024be68 func_0024be68
void func_0024be68() asm("_ZN2Tz4HBTE7CtrlTopEv");
void func_0024be68() {
    u32 s2;
    u32 v0;
    u32 v0_0;
    s2 = func_00287cd0();
    v0 = func_00289380(*(u32*)(&D_0035eda8));
    if (((s32)(*(u8*)(&D_0035edc4)) == 0)) {
        if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035eda8))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035eda8), 0)) == 0)) {
                func_002426a0(0);
                func_0024bbb0();
            }
        }
        if (((s32)(s2) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035eda8), 0)) != 0)) {
                func_00287c90(1);
                func_0024c6a0();
            }
        }
        func_00287df0(v0, func_00289310(*(u32*)(&D_0035eda8)), 1, 0, 1);
        v0_0 = (v0 + 4);
        switch (v0_0) {
        case 0:
        case 2:
            func_00287da0();
            return;
        case 4:
        case 5:
        case 6:
            func_0024ba58();
            func_00287bd0(1, 0);
            func_00287cc0(0);
            return;
        case 1:
        case 3:
        default:
            return;
        }
    } else {
        return;
    }
}
