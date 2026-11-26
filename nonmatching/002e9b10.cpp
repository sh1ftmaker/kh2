// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002e9b10 func_002e9b10
void func_002e9b10(u32 a0) asm("_ZN2Ts15TARGET_SEARCHERC1Ei");
void func_002e9b10(u32 a0) {
    u32 t6;
    u32 t3;
    u32 t4;
    u32 t5;
    t6 = (*(u8*)((a0 + 4)) + 1);
    *(u8*)((a0 + 4)) = t6;
    if (((s32)(((s32)((t6 & 0xff)) < (s32)(*(u32*)(a0)))) == 0)) {
        t3 = *(u32*)(a0);
        t4 = *(u8*)(a0);
        do {
            t5 = (t6 - t4);
            t6 = (t6 - t4);
        } while (((s32)(((s32)((t6 & 0xff)) < (s32)(t3))) == 0));
        *(u8*)((a0 + 4)) = t5;
    }
    return;
}
