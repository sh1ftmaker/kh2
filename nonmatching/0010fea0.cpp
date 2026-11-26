// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00112720(u32) asm("func_00112720");

// 0x0010fea0 func_0010fea0
u32 func_0010fea0(u32 a0) asm("func_0010fea0");
u32 func_0010fea0(u32 a0) {
    u32 t6;
    u32 t7;
    u32 t7_0;
    if (((s32)(func_00112720(a0)) == 0)) {
        t6 = 1;
        t7 = *(u32*)((a0 + 0xc58));
        do {
            if ((*(u32*)((a0 + 0xc54)) != *(u32*)(((a0 + ((t6 - 1) * 4)) + 0xc58)))) {
                return 0;
            }
            t6 = (t6 + 1);
            t7 = ((s32)(t6) < (s32)(3));
        } while ((t7 != 0));
        t7_0 = *(u32*)((a0 + 0xc54));
    } else {
        t7_0 = 0;
    }
    return t7_0;
}
