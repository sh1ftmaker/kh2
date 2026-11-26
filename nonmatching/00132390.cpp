// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00132390 func_00132390
u32 func_00132390(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_00132390");
u32 func_00132390(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 t7;
    if (((s32)(a0) != 0)) {
        if ((a0 != a1)) {
            t7 = *(u32*)(a0);
            do {
                if (((s32)(((u32(*)(u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0xc))))(a0, a2, a3, a4, a4)) != 0)) {
                    return a0;
                }
                if ((*(u32*)((a0 + 0x1c)) == 0)) {
                    break;
                }
                a0 = *(u32*)((a0 + 0x1c));
                t7 = a0;
            } while ((a0 != a1));
        }
    }
    return 0;
}
