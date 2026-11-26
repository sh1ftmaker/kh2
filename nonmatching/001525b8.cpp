// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a678 asm("D_0034a678");
extern "C" u32 D_0034a698 asm("D_0034a698");
extern "C" u32 func_00152508(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00152508");
extern "C" u32 func_00152598(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00152598");

// 0x001525b8 func_001525b8
u32 func_001525b8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001525b8");
u32 func_001525b8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    if (((s32)(a1) != 0)) {
        if ((a1 != 1)) {
            *(u32*)((a0 + 0x1c0)) = a6;
            v0_0 = 0;
        } else {
            v0 = func_00152598(a0, a6, a4, (u32)&D_0034a698, a4, a5, a6, a7);
            *(u32*)((a0 + 0x1c0)) = a6;
            v0_0 = v0;
        }
        v0_2 = v0_0;
    } else {
        v0_1 = func_00152598(a0, a6, a4, (u32)&D_0034a678, a4, a5, a6, a7);
        *(u32*)((a0 + 0x1c0)) = a6;
        v0_2 = v0_1;
    }
    *(u32*)((a0 + 0x1b4)) = a2;
    *(u32*)((a0 + 0x1b8)) = a4;
    *(u32*)((a0 + 0x1bc)) = a5;
    return func_00152508(a0, v0_2, a2, a3, a7, a5, a6, a7);
}
