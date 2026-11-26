// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002f35b0 func_002f35b0
u32 func_002f35b0(u32 a0, u32 a1) asm("func_002f35b0");
u32 func_002f35b0(u32 a0, u32 a1) {
    u32 v1;
    u32 v0;
    u32 v0_0;
    if (((s32)(a1) != 0)) {
        v1 = 0xffffffff;
        v0 = (a1 + -1);
        do {
            *(u8*)(a0) = 0;
            a0 = (a0 + 1);
            v0 = (v0 + -1);
        } while ((v0 != v1));
        v0_0 = v0;
    } else {
        v0_0 = (a1 + -1);
    }
    return v0_0;
}
