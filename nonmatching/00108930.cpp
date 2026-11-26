// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00108930 func_00108930
u32 func_00108930(u32 a0, u32 a1) asm("_ZN2kn9DrawParam13getPartsColorEi");
u32 func_00108930(u32 a0, u32 a1) {
    u32 t6;
    u32 t6_0;
    u32 t7;
    t6 = *(u32*)((a0 + 0x2c));
    if (((s32)(t6) != 0)) {
        if (((s32)(a1) >= 0)) {
            if (((s32)(((s32)(a1) < (s32)(0x20))) != 0)) {
                t6_0 = *(u32*)(t6);
                if (((s32)(t6_0) != 0)) {
                    do {
                        if (((s32)((t6_0 & (1 << a1))) != 0)) {
                            return (t6 + 4);
                        }
                        t7 = *(u32*)((t6 + 8));
                        t6 = (t6 + 8);
                        t6_0 = t7;
                    } while (((s32)(t7) != 0));
                }
            }
        }
    }
    return (a0 + 4);
}
