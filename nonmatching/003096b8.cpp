// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x003096b8 func_003096b8
u32 func_003096b8(u32 a0) asm("func_003096b8");
u32 func_003096b8(u32 a0) {
    if (((s32)(*(u32*)(a0)) != 0)) {
        if ((*(u32*)((a0 + 4)) == *(u32*)((*(u32*)(a0) + 0x18)))) {
            if (((s32)((*(u32*)((*(u32*)(a0) + 0x10)) & 1)) == 0)) {
                return 0;
            } else {
                return 1;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
