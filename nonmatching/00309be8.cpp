// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366170 asm("D_00366170");
extern "C" u32 D_00366174 asm("D_00366174");
extern "C" u32 D_00378100 asm("D_00378100");
extern "C" u32 D_00378110 asm("D_00378110");
extern "C" u32 func_00305620(u32) asm("func_00305620");

// 0x00309be8 func_00309be8
void func_00309be8() asm("func_00309be8");
void func_00309be8() {
    u8 frame[32];
    if ((*(u32*)(&D_00366170) == 0xffffffff)) {
        *(u32*)(((u32)frame + 4)) = 1;
        *(u32*)(((u32)frame + 8)) = 1;
        *(u32*)(((u32)frame + 0x14)) = (u32)&D_00378100;
        *(u32*)(&D_00366170) = func_00305620((u32)frame);
        *(u32*)(((u32)frame + 0x14)) = (u32)&D_00378110;
        *(u32*)(&D_00366174) = func_00305620((u32)frame);
    }
    return;
}
