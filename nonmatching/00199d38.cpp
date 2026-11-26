// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016ed50(u32, u32, u32) asm("func_0016ed50");
extern "C" u32 func_00199810(u32) asm("func_00199810");

// 0x00199d38 func_00199d38
u32 func_00199d38(u32 a0) asm("_ZN2YS10UNIT_GROUP12read_requestEv");
u32 func_00199d38(u32 a0) {
    u32 a0_0;
    u32 s0;
    u32 s1;
    u32 v0_1;
    u32 v0_2;
    u32 v0;
    if (((s32)(*(u16*)((*(u32*)((a0 + 8)) + 4))) != 0)) {
        a0_0 = *(u32*)((a0 + 8));
        s0 = (0 << 6);
        s1 = 0;
        do {
            a0_0 = (a0_0 + s0);
            s1 = (s1 + 1);
            a0_0 = (a0_0 + 0x2c);
            v0_1 = func_00199810(a0_0);
            if (((s32)(v0_1) != 0)) {
                v0_2 = func_0016ed50(*(u32*)(((s0 + *(u32*)((a0 + 8))) + 0x2c)), 0xffffffff, 0x1e);
                v0_1 = v0_2;
            }
            s0 = (s1 << 6);
            a0_0 = *(u32*)((a0 + 8));
        } while (((s32)(((s32)(s1) < (s32)(*(u16*)((*(u32*)((a0 + 8)) + 4))))) != 0));
        v0 = v0_1;
    }
    return v0;
}
