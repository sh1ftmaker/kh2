// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0019b3d0 func_0019b3d0
u32 func_0019b3d0(u32 a0, u32 a1) asm("func_0019b3d0");
u32 func_0019b3d0(u32 a0, u32 a1) {
    u32 s1;
    u32 s0;
    if ((*(u8*)(*(u32*)((a0 + 8))) == 6)) {
        s1 = 0;
        while ((s0 = (s1 == 0) ? *(u32*)((a0 + 0xc)) : *(u32*)((s1 + 0x60))), (s1 = s0), ((s32)(s0) != 0)) {
            if (((s32)(*(u16*)((*(u32*)((s0 + 0x6c)) + 0x2c))) != 0)) {
                continue;
            }
            if (((s32)(((u32(*)(u32, u32))(*(u32*)((*(u32*)(s0) + 8))))(s0, a1)) != 0)) {
                return s0;
            }
        }
    }
    return 0;
}
