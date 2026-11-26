// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c62140 asm("D_01c62140");

// 0x001995b8 func_001995b8
void func_001995b8(u32 a0, u32 a1) asm("func_001995b8");
void func_001995b8(u32 a0, u32 a1) {
    u32 t5;
    u32 t6;
    t5 = 0;
    for (;;) {
        t6 = (t5 == 0) ? *(u32*)(&D_01c62140) : *(u32*)((t5 + 0x14));
        if (((s32)(t6) == 0)) break;
        if ((*(u32*)((t6 + 0xc)) == a0)) {
            t5 = t6;
            continue;
        }
        t5 = t6;
    }
    return;
}
