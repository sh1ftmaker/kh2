// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f620 asm("D_0035f620");
extern "C" u32 func_00294000(u32) asm("func_00294000");

// 0x002ad7d0 func_002ad7d0
u32 func_002ad7d0(u32 a0) asm("_ZN2Tz10JmComplete11isQuestCompEi");
u32 func_002ad7d0(u32 a0) {
    u32 v0;
    u32 t4;
    v0 = func_00294000(8);
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        t4 = 0;
        do {
            if (((s32)(a0) < 0) || (*(u16*)(((v0 + (t4 * 0x10)) + 0x10)) == a0)) {
                if (((*(u32*)((((t4 >> 5) << 2) + (*(u32*)(&D_0035f620) + 0x94))) & (1 << (t4 & 0x1f))) == 0)) {
                    return 0;
                }
            }
            t4 = (t4 + 1);
        } while (((s32)(((s32)(t4) < (s32)(*(u32*)((v0 + 8))))) != 0));
    }
    return 1;
}
