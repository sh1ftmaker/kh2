// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_001d9e30(u32) asm("func_001d9e30");
extern "C" u32 func_002764b0(u32) asm("func_002764b0");

// 0x002ac748 Tz::JmNewInfo::isPuzzleInfoNew(int)
u32 lift_002ac748(u32 a0) asm("_ZN2Tz9JmNewInfo15isPuzzleInfoNewEi");
u32 lift_002ac748(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = 0;
    do {
        v0 = func_001d9e30(s0);
        if (((s32)(v0) == 0)) {
            return 0;
        }
        if (((s32)(a0) >= 0)) {
            if ((func_002764b0(*(u8*)((v0 + 4))) != a0)) {
                s0 = v0;
                continue;
            }
        }
        s0 = v0;
    } while (((s32)((*(u32*)((((*(u32*)(&D_0035f610) + (*(u8*)(v0) << 3)) + ((*(u8*)((v0 + 1)) >> 5) << 2)) + 0x194)) & (1 << (*(u8*)((v0 + 1)) & 0x1f)))) == 0));
    return 1;
}
