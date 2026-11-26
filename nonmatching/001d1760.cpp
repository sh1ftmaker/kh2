// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001d1760 func_001d1760
u32 func_001d1760(u32 a0, u32 a1) asm("func_001d1760");
u32 func_001d1760(u32 a0, u32 a1) {
    u32 v0;
    if (((s32)(*(u32*)((a0 + 0x1c))) > 0)) {
        if (((s32)(((s32)(*(u32*)((a0 + 0x1c))) < (s32)(*(u32*)((a0 + 0x14))))) != 0)) {
            if (((s32)(*(u32*)((a0 + 0x1c))) < (s32)(a1))) {
                v0 = 0;
            } else {
                v0 = 1;
            }
            return v0;
        } else {
            if (((s32)(((s32)(a1) < (s32)(*(u32*)((a0 + 0x1c))))) == 0)) {
                return 1;
            } else {
                return 0;
            }
        }
    } else {
        return 0;
    }
}
