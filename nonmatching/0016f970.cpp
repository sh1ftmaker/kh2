// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dc98 asm("D_0034dc98");
extern "C" u32 D_004f6440 asm("D_004f6440");
extern "C" u32 D_01c5f460 asm("D_01c5f460");
extern "C" u32 func_00106178(u32, u32) asm("func_00106178");

// 0x0016f970 func_0016f970
void func_0016f970() asm("_ZN2YS10CACHE_BUFF4InitEv");
void func_0016f970() {
    u32 t7;
    u32 t6;
    *(u32*)(&D_0034dc98) = func_00106178((u32)&D_004f6440, 0x4000);
    t7 = 6;
    t6 = (u32)&D_01c5f460;
    do {
        *(u32*)((t6 + ((t7 - 6) * -4))) = 0;
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    *(u32*)(((u32)&D_01c5f460 + 4)) = 0xe0000;
    *(u32*)(((u32)&D_01c5f460 + 0x14)) = 0x300000;
    *(u32*)(((u32)&D_01c5f460 + 0x18)) = 0xc0000;
    return;
}
