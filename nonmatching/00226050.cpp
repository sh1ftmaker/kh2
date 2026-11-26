// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035dd08 asm("D_0035dd08");

// 0x00226050 func_00226050
void func_00226050(u32 a0) asm("func_00226050");
void func_00226050(u32 a0) {
    u32 t4;
    u32 t5;
    u32 t7;
    u32 t7_0;
    t4 = (u32)&D_0035dd08;
    t5 = 0;
    t7 = *(u32*)((u32)&D_0035dd08);
    do {
        if (((s32)(*(u32*)(t4)) == 0)) {
            *(u32*)(((t5 << 2) + (u32)&D_0035dd08)) = a0;
            return;
        }
        t7_0 = *(u32*)(t4);
        t4 = (t4 + 4);
        t5 = (t5 + 1);
        t7 = t7_0;
    } while (((s32)(t5) < (s32)(0x40)));
    *(u32*)(((t5 << 2) + (u32)&D_0035dd08)) = a0;
    return;
}
