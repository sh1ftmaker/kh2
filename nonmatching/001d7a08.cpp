// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001d7b10(u32, u32) asm("func_001d7b10");

// 0x001d7a08 wtarget_001d7a08(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001d7a08(u32 a0, u32 a1) asm("_Z16wtarget_001d7a08jjjj");
void lift_001d7a08(u32 a0, u32 a1) {
    u32 t5;
    t5 = 3;
    do {
        if ((*(u32*)((a0 + 4)) == a1)) {
            *(u32*)((a0 + 4)) = 0;
            func_001d7b10(a0, a1);
            return;
        }
        t5 = (t5 + -1);
        a0 = (a0 + 8);
    } while (((s32)(t5) >= 0));
    return;
}
