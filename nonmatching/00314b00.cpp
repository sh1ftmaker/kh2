// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00314b00 func_00314b00
u32 func_00314b00(u32 a0, u32 a1) asm("func_00314b00");
u32 func_00314b00(u32 a0, u32 a1) {
    u32 t5;
    u32 t4;
    u32 t3;
    u32 t6;
    t5 = 0;
    t4 = 0;
    t3 = 0xffffff80;
    do {
        t4 = (((*(u8*)(a0) & 0x7f) << t5) | t4);
        t5 = (t5 + 7);
        t6 = (*(u8*)(a0) & t3);
        a0 = (a0 + 1);
    } while (((s32)(t6) != 0));
    *(u64*)(a1) = t4;
    return a0;
}
