// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003726d0 asm("D_003726d0");

// 0x00253330 func_00253330
void func_00253330(u32 a0) asm("func_00253330");
void func_00253330(u32 a0) {
    u32 t1;
    u32 t2;
    u32 t3;
    if (((s32)(*(s16*)(&D_003726d0)) >= 0)) {
        t1 = (u32)&D_003726d0;
        t2 = 0;
        t3 = 0;
        do {
            t2 = (t2 + 1);
            t3 = (t2 << 4);
        } while (((s32)(*(s16*)(((t2 << 4) + t1))) >= 0));
    }
    return;
}
