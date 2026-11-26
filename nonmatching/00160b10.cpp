// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3b40 asm("D_004f3b40");

// 0x00160b10 func_00160b10
void func_00160b10(u32 a0) asm("func_00160b10");
void func_00160b10(u32 a0) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_004f3b40) : *(u32*)((s0 + 0x84))), (s0 = a0), ((s32)(a0) != 0)) {
        if (((s32)((*(u32*)((a0 + 0x180)) & 4)) != 0)) {
            continue;
        }
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 8))))(a0);
    }
    *(u32*)(&D_004f3b40) = 0;
    *(u32*)(((u32)&D_004f3b40 + 4)) = 0;
    return;
}
