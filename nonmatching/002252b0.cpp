// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01dad910 asm("D_01dad910");
extern "C" u32 func_00136b78(u32, u32) asm("func_00136b78");
extern "C" u32 func_00225540() asm("func_00225540");

// 0x002252b0 func_002252b0
void func_002252b0() asm("func_002252b0");
void func_002252b0() {
    if (((s32)(func_00225540()) != 0)) {
        if ((*(u32*)(&D_01dad910) != 0xffffffff)) {
            func_00136b78(0, *(u32*)(&D_01dad910));
        }
        if ((*(u32*)(((u32)&D_01dad910 + 4)) != 0xffffffff)) {
            func_00136b78(1, *(u32*)(((u32)&D_01dad910 + 4)));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
