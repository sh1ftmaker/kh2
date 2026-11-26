// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2fe48 asm("D_01e2fe48");
extern "C" u32 func_002f6310(u32) asm("func_002f6310");

// 0x002f63e0 func_002f63e0
u32 func_002f63e0(u32 a0) asm("func_002f63e0");
u32 func_002f63e0(u32 a0) {
    u32 a1_0;
    u32 a0_1;
    u32 v1;
    u32 v0;
    u32 v0_2;
    a1_0 = *(u32*)((func_002f6310(a0) + 0x7c));
    if (((s32)(a1_0) != 0)) {
        a0_1 = (a0 * 0x334);
        v1 = *(u32*)((a0_1 + ((u32)&D_01e2fe48 + 8)));
        if ((a1_0 == v1)) {
            v0 = 0;
        } else {
            *(u32*)((a0_1 + ((u32)&D_01e2fe48 + 8))) = a1_0;
            v0 = 1;
        }
        v0_2 = v0;
    } else {
        v0_2 = 0;
    }
    return v0_2;
}
