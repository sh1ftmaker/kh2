// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2aa80 asm("D_01e2aa80");

// 0x002bc7a8 func_002bc7a8
u32 func_002bc7a8(u32 a0) asm("_ZN5SOUND10getLinkNumEi");
u32 func_002bc7a8(u32 a0) {
    u32 v0;
    u32 t5;
    u32 t7;
    v0 = 0;
    t5 = 0;
    while ((t7 = ((s32)(t5) != 0) ? *(u32*)((t5 + 0x1c)) : *(u32*)(&D_01e2aa80)), (t5 = t7), ((s32)(t7) != 0)) {
        v0 = ((*(u8*)((t7 + 0x31)) ^ a0) ? v0 : (v0 + 1));
    }
    return v0;
}
