// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036d850 asm("D_0036d850");
extern "C" u32 func_002ff1a4(u32, u32) asm("func_002ff1a4");
extern "C" u32 func_002ff8b0() asm("func_002ff8b0");

// 0x001ae010 func_001ae010
u32 func_001ae010() asm("func_001ae010");
u32 func_001ae010() {
    u8 frame[16];
    u32 v0;
    u32 s1;
    u32 s2;
    *(u32*)(((u32)frame + 4)) = *(u32*)(((u32)&D_0036d850 + 4));
    *(u32*)((u32)frame) = *(u32*)(&D_0036d850);
    v0 = func_002ff8b0();
    if (((s32)(v0) != 0)) {
        s1 = (u32)frame;
        s2 = 0;
        do {
            if (((s32)(func_002ff1a4(v0 + 1, *(u32*)(s1))) == 0)) {
                return 1;
            }
            s1 = (s1 + 4);
            s2 = (s2 + 1);
        } while (((s32)(s2) < (s32)(2)));
    }
    return 0;
}
