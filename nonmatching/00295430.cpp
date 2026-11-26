// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00294000(u32, u8) asm("func_00294000");
extern "C" u32 func_002941d8(u32) asm("func_002941d8");

// 0x00295430 Tz::JmWorldSel::GetId2WorldName(int, bool)
u32 lift_00295430(u32 a0, u8 a1) asm("_ZN2Tz10JmWorldSel15GetId2WorldNameEib");
u32 lift_00295430(u32 a0, u8 a1) {
    u32 v0;
    u32 v0_0;
    u32 t7;
    u32 t6;
    u32 t5;
    u32 t5_1;
    u32 s0;
    u32 v0_2;
    u32 s0_3;
    u32 v0_4;
    v0 = func_00294000(0, a1);
    v0_0 = (v0 + 0x10);
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        t7 = *(s8*)(v0_0);
        t6 = v0_0;
        t5 = 0;
        do {
            if ((*(s8*)(t6) == a0)) {
                break;
            }
            t5_1 = (t5 + 1);
            t5 = t5_1;
            t6 = (t6 + 0x10);
            t7 = ((s32)(t5_1) < (s32)(*(u32*)((v0 + 8))));
        } while ((t7 != 0));
    }
    if (((s32)(a1) != 0)) {
        s0 = (v0_0 + (0xffffffff << 4));
        v0_2 = func_002941d8(s0);
        v0_2 = (v0_2 != 0) ? *(u16*)((s0 + 0xc)) : *(u16*)((s0 + 6));
        v0_0 = v0_2;
    } else {
        s0_3 = (v0_0 + (0xffffffff << 4));
        v0_4 = func_002941d8(s0_3);
        v0_4 = (v0_4 != 0) ? *(u16*)((s0_3 + 0xa)) : *(u16*)((s0_3 + 4));
        v0_0 = v0_4;
    }
    return v0_0;
}
