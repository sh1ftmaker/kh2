// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00124c48 func_00124c48
u32 func_00124c48(u32 a0, u32 a1) asm("func_00124c48");
u32 func_00124c48(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    u32 v0;
    u32 t4;
    u32 t7_0;
    u32 t6_1;
    t6 = *(u32*)((a0 + 4));
    t7 = *(u32*)((t6 + 0xc));
    v0 = ((s32)(t7) != 0) ? (t6 + *(u32*)((t6 + 8))) : 0;
    if (((s32)(v0) != 0)) {
        t4 = *(u32*)(v0);
        if ((t4 != 0xffffffff)) {
            do {
                if ((t4 == a1)) {
                    return v0;
                }
                t7_0 = *(u32*)((v0 + 4));
                t6_1 = *(u32*)(((v0 + 0x10) + (t7_0 << 4)));
                t4 = t6_1;
                v0 = ((v0 + 0x10) + (t7_0 << 4));
            } while ((t6_1 != 0xffffffff));
        }
    }
    return 0;
}
