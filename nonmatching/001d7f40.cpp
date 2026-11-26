// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001d7f40 func_001d7f40
u32 func_001d7f40(u32 a0, u32 a1) asm("func_001d7f40");
u32 func_001d7f40(u32 a0, u32 a1) {
    u32 t5;
    u32 t7;
    u32 t7_0;
    if (((s32)(*(u32*)(a0)) > 0)) {
        t5 = 0;
        t7 = *(u8*)((a0 + 4));
        do {
            if ((*(u8*)(((a0 + (t5 * 0x44)) + 4)) == a1)) {
                return t5;
            }
            t7_0 = *(u8*)(((a0 + (t5 * 0x44)) + 4));
            t5 = (t5 + 1);
            t7 = t7_0;
        } while (((s32)(t5) < (s32)(*(u32*)(a0))));
    }
    return 0xffffffff;
}
