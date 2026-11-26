// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d49350 asm("D_01d49350");

// 0x001c0150 func_001c0150
void func_001c0150(u32 a0, u32 a1) asm("func_001c0150");
void func_001c0150(u32 a0, u32 a1) {
    u32 t6;
    u32 t5;
    u32 t6_0;
    *(u32*)(a0) = a1;
    t6 = 7;
    do {
        *(u32*)(((a0 + ((t6 - 7) * -4)) + 4)) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    *(u32*)((a0 + 0x24)) = 0;
    *(u32*)((a0 + 0x28)) = 0;
    *(u32*)((a0 + 0x2c)) = 0;
    t5 = 0xffffffff;
    t6_0 = 3;
    do {
        *(u32*)(((a0 + ((t6_0 - 3) * -8)) + 0x30)) = 0;
        t6_0 = (t6_0 + -1);
    } while ((t6_0 != t5));
    if ((*(u32*)(((u32)&D_01d49350 + 4)) == 0)) {
        *(u32*)(((u32)&D_01d49350 + 4)) = a0;
        *(u32*)(&D_01d49350) = a0;
        *(u32*)((a0 + 0x50)) = 0;
        return;
    } else {
        *(u32*)((*(u32*)(((u32)&D_01d49350 + 4)) + 0x50)) = a0;
        *(u32*)((a0 + 0x50)) = 0;
        *(u32*)(((u32)&D_01d49350 + 4)) = a0;
        return;
    }
}
