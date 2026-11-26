// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2e4 asm("D_0035f2e4");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_00285d18(u32) asm("func_00285d18");

// 0x00285d58 func_00285d58
u32 func_00285d58(u32 a0) asm("func_00285d58");
u32 func_00285d58(u32 a0) {
    u32 s0;
    u32 t7;
    u32 v0;
    if (((s32)(a0) >= 0)) {
        v0 = ((u32)(0) < (u32)((*(u32*)((((a0 >> 5) << 2) + *(u32*)(&D_0035f2e4))) & (1 << (a0 & 0x1f)))));
    } else {
        s0 = 0;
        t7 = *(u32*)(&D_0035f2e4);
        do {
            if (((*(u32*)((((s0 >> 5) << 2) + t7)) & (1 << (s0 & 0x1f))) != 0)) {
                if (((s32)(func_00285d18(*(u8*)((func_001a80c8(s0) + 2)))) != 0)) {
                    return 1;
                }
            }
            s0 = (s0 + 1);
            t7 = *(u32*)(&D_0035f2e4);
        } while (((s32)(t7) != 0));
        v0 = 0;
    }
    return v0;
}
