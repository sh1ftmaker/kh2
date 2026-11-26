// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001e78e0 func_001e78e0
void func_001e78e0(u32 a0) asm("func_001e78e0");
void func_001e78e0(u32 a0) {
    u32 t4;
    u32 s0;
    u32 t7;
    u32 t7_0;
    t4 = *(u32*)((a0 + 0x64));
    if (((s32)(t4) > 0)) {
        s0 = 0;
        t7 = *(u32*)((a0 + 0x78));
        do {
            t7_0 = *(u32*)((*(u32*)(((s0 << 2) + *(u32*)((a0 + 0x78)))) + 0x18));
            if (((s32)(t7_0) != 0)) {
                ((void(*)(u32))(t7_0))(a0);
                t4 = *(u32*)((a0 + 0x64));
            }
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(t4));
        } while ((t7 != 0));
    }
    return;
}
