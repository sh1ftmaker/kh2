// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00288fd8 func_00288fd8
void func_00288fd8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00288fd8");
void func_00288fd8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 a1_0;
    u32 t5;
    u32 t6;
    u32 a1_1;
    u32 t5_2;
    a1_0 = (a1 << 2);
    t5 = 3;
    t6 = (a1 << 3);
    do {
        t5 = (t5 + -1);
        *(u16*)((t6 + *(u32*)((a0 + 0x2c)))) = a2;
        t6 = (t6 + 2);
    } while (((s32)(t5) >= 0));
    a1_1 = (a1_0 << 1);
    t5_2 = 3;
    do {
        a1_1 = (a1_1 + 2);
        if (((s32)(a3) == 0)) {
            a3 = a2;
        }
        t5_2 = (t5_2 + -1);
        *(u16*)((a1_1 + *(u32*)((a0 + 0x30)))) = a3;
    } while (((s32)(t5_2) >= 0));
    return;
}
