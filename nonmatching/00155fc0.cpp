// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00155fc0 func_00155fc0
u32 func_00155fc0(u32 a0) asm("func_00155fc0");
u32 func_00155fc0(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x34))) != 0)) {
        switch (*(u8*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x1af))) {
        case 2:
            return 0x31;
        case 3:
            return 0x8b;
        case 0:
        case 1:
        case 4:
        default:
            return 0x19;
        }
    } else {
        return 0x19;
    }
}
