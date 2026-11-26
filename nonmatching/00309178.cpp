// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00309178 func_00309178
void func_00309178(u32 a0, u32 a1) asm("func_00309178");
void func_00309178(u32 a0, u32 a1) {
    u32 a1_0;
    u32 v1;
    u32 v0;
    u32 v1_1;
    if (((s32)(*(u32*)((a1 + 0x28))) != 0)) {
        a1_0 = *(u32*)((a1 + 0x28));
        v1 = *(u32*)((*(u32*)((a1 + 0x28)) + 8));
        do {
            if ((*(u32*)((a1_0 + 8)) != 0)) {
                v0 = *(u32*)(*(u32*)((a1_0 + 8)));
                v1_1 = *(u32*)((a1_0 + 8));
                do {
                    if ((*(u32*)(v1_1) == a0)) {
                        return;
                    }
                    v0 = *(u32*)(v1_1);
                    v1_1 = *(u32*)((v1_1 + 0x38));
                } while ((v1_1 != 0));
            }
            a1_0 = *(u32*)((a1_0 + 0x14));
            v1 = v1_1;
        } while ((a1_0 != 0));
        return;
    } else {
        return;
    }
}
