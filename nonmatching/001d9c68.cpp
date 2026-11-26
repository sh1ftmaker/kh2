// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001d9c68 func_001d9c68
u32 func_001d9c68(u32 a0) asm("func_001d9c68");
u32 func_001d9c68(u32 a0) {
    u32 t5;
    u32 t6;
    t5 = 0;
    t6 = a0;
    do {
        t5 = (t5 + 1);
        t6 = ((s32)(t5) < (s32)(5));
        if ((*(u8*)(t6) != 1)) {
            return 0;
        }
        t6 = (a0 + t5);
    } while (((s32)(t6) != 0));
    return 1;
}
