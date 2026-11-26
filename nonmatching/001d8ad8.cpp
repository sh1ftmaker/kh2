// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001bb4a0() asm("func_001bb4a0");
extern "C" u32 func_001bbcb0(u32, u8) asm("func_001bbcb0");

// 0x001d8ad8 func_001d8ad8
u32 func_001d8ad8(u32 a0, u8 a1) asm("_ZN2YS7MISSION12WarningCountEib");
u32 func_001d8ad8(u32 a0, u8 a1) {
    u32 s0;
    u32 v0;
    u32 t7;
    u8 t7_0;
    u32 v0_1;
    u32 v0_2;
    s0 = (func_001bbcb0(a0, a1) + (a0 * 0x38));
    v0 = func_001bb4a0();
    if (((s32)(v0) != 0)) {
        t7 = *(u32*)((s0 + 0xf4));
        t7_0 = (t7 & 1);
        if ((t7_0 != 0)) {
            if (((s32)(a1) != 0)) {
                if (((t7 & 8) == 0)) {
                    v0_1 = ((u32(*)(u32))(*(u32*)((*(u32*)((s0 + 0xe8)) + 0xc))))(s0 + 0xe8);
                    v0 = v0_1;
                }
            } else {
                if (((t7 & 8) != 0)) {
                    v0_2 = ((u32(*)(u32))(*(u32*)((*(u32*)((s0 + 0xe8)) + 0x10))))(s0 + 0xe8);
                    v0 = v0_2;
                }
            }
        }
    }
    return v0;
}
