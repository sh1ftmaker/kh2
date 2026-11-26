// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016bba8(u32, u32, u32) asm("func_0016bba8");

// 0x0016bc20 func_0016bc20
u32 func_0016bc20(u32 a0, u32 a1, u32 a2) asm("func_0016bc20");
u32 func_0016bc20(u32 a0, u32 a1, u32 a2) {
    u32 v0_0;
    do {
        v0_0 = func_0016bba8(a0, a1, 0);
        if ((v0_0 == 0)) {
            break;
        }
        if ((a2 == 0xffffffff)) {
            break;
        }
    } while ((*(u8*)(v0_0) != a2));
    return v0_0;
}
