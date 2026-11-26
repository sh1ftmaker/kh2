// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036616c asm("D_0036616c");
extern "C" u32 D_00378188 asm("D_00378188");
extern "C" u32 func_00305620(u32) asm("func_00305620");

// 0x0030a278 func_0030a278
u32 func_0030a278() asm("func_0030a278");
u32 func_0030a278() {
    u8 frame[32];
    u32 v0;
    u32 v0_0;
    if ((*(u32*)(&D_0036616c) == 0xffffffff)) {
        *(u32*)(((u32)frame + 4)) = 1;
        *(u32*)(((u32)frame + 8)) = 1;
        *(u32*)(((u32)frame + 0x14)) = (u32)&D_00378188;
        v0 = func_00305620((u32)frame);
        *(u32*)(&D_0036616c) = v0;
        v0_0 = v0;
    } else {
        v0_0 = *(u32*)(&D_0036616c);
    }
    return v0_0;
}
