// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00294000(u32) asm("func_00294000");

// 0x002953c8 Tz::JmWorldSel::GetId2Info(int)
u32 lift_002953c8(u32 a0) asm("_ZN2Tz10JmWorldSel10GetId2InfoEi");
u32 lift_002953c8(u32 a0) {
    u32 v0;
    u32 t4;
    u32 t5;
    u32 v0_0;
    u32 t3;
    u32 t6;
    u32 t3_1;
    u32 v0_2;
    v0 = func_00294000(0);
    t4 = *(u32*)((v0 + 8));
    if (((s32)(t4) > 0)) {
        t5 = 0;
        do {
            v0_0 = (t5 << 4);
            t3 = (v0 + 0x10);
            t5 = (t5 + 1);
            t6 = *(s8*)((v0_0 + t3));
            if ((t6 == a0)) {
                v0 = v0_0;
                break;
            }
            v0 = (t5 << 4);
        } while (((s32)(((s32)(t5) < (s32)(t4))) != 0));
        t3_1 = t3;
    } else {
        t3_1 = (v0 + 0x10);
        v0 = 0;
    }
    v0_2 = (t3_1 + v0);
    return v0_2;
}
