// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002e4a90 func_002e4a90
void func_002e4a90(u32 a0) asm("func_002e4a90");
void func_002e4a90(u32 a0) {
    u32 t6;
    u32 t7;
    u32 a0_0;
    u32 t7_1;
    if ((a0 != 0xffffee80)) {
        t6 = (a0 + 0x1180);
        t7 = (a0 + 0x4750);
        do {
            t7 = (t7 + -0x10);
        } while ((t6 != t7));
    }
    if ((a0 != 0xfffffff0)) {
        a0_0 = (a0 + 0xf70);
        t7_1 = (a0 + 0x10);
        do {
            a0_0 = (a0_0 + -0x60);
        } while ((t7_1 != a0_0));
    }
    return;
}
