// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e5a0 asm("D_0036e5a0");

// 0x001d5ec0 func_001d5ec0
void func_001d5ec0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001d5ec0");
void func_001d5ec0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 a2_0;
    u32 a2_1;
    u32 a2_2;
    u32 t5;
    u32 t6;
    u32 t4;
    u32 t5_3;
    a2_0 = (a2 * 0xa);
    a2_1 = (a2_0 + ((u32)&D_0036e5a0 + -0xa));
    a2_2 = (a2_1 + (a3 << 1));
    if (((s32)(a1) > 0)) {
        t5 = 0;
        do {
            t6 = *(u16*)(a0);
            t4 = *(u16*)((a2_2 + -2));
            if (((t6 & 0x7fff) == t4)) {
                *(u16*)(a0) = ((t6 & 0xffff8000) | (*(u16*)(a2_2) & 0x7fff));
                return;
            }
            t5_3 = (t5 + 1);
            a0 = (a0 + 2);
            t5 = t5_3;
        } while (((s32)(((s32)(t5_3) < (s32)(a1))) != 0));
        return;
    } else {
        return;
    }
}
