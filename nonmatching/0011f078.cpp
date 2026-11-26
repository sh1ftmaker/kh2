// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0011f078 func_0011f078
u32 func_0011f078(u32 a0, u32 a1) asm("func_0011f078");
u32 func_0011f078(u32 a0, u32 a1) {
    u32 s0;
    u32 t7;
    s0 = 0;
    t7 = *(u32*)(a0);
    while (((s32)(((s32)(s0) < (s32)(((u32(*)(u32, u32))(*(u32*)((t7 + 0x30))))(a0, a1)))) != 0)) {
        if (((*(u8*)((a1 + s0)) & 4) != 0)) {
            return 1;
        }
        s0 = (s0 + 1);
        t7 = *(u32*)(a0);
    }
    return 0;
}
