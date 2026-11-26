// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00294000(u32, u8) asm("func_00294000");
extern "C" u32 func_002941d8(u32) asm("func_002941d8");
extern "C" u32 func_00295158(u32) asm("func_00295158");

// 0x00295270 func_00295270
u32 func_00295270(u32 a0, u8 a1) asm("_ZN2Tz10JmWorldSel15UpdateWorldNameEv");
u32 func_00295270(u32 a0, u8 a1) {
    u32 s0;
    u32 s2;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    s0 = (func_00294000(0, a1) + 0x10);
    s2 = (s0 + (func_00295158(a0) << 4));
    if (((s32)(a1) != 0)) {
        v0 = func_002941d8(s2);
        v0 = (v0 != 0) ? *(u16*)((s2 + 0xc)) : *(u16*)((s2 + 6));
        v0_1 = v0;
    } else {
        v0_0 = func_002941d8(s2);
        v0_0 = (v0_0 != 0) ? *(u16*)((s2 + 0xa)) : *(u16*)((s2 + 4));
        v0_1 = v0_0;
    }
    return v0_1;
}
