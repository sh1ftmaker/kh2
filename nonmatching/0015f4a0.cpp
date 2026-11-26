// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c6f0 asm("D_0034c6f0");
extern "C" u32 D_0034c70c asm("D_0034c70c");
extern "C" u32 D_0034c710 asm("D_0034c710");
extern "C" u32 func_00143228() asm("func_00143228");
extern "C" u32 func_0015c4a0(u32) asm("func_0015c4a0");
extern "C" u32 func_001de3d8(u32, u32) asm("func_001de3d8");

// 0x0015f4a0 func_0015f4a0
u32 func_0015f4a0() asm("_ZN2dk3Map7hideAllEv");
u32 func_0015f4a0() {
    u32 v0;
    u32 s0;
    u32 t7;
    u32 v0_0;
    u32 v0_1;
    v0 = func_00143228();
    s0 = 0;
    t7 = *(u64*)(&D_0034c710);
    do {
        if (((*(u64*)(&D_0034c710) & ((u64)(1) << s0)) != 0)) {
            v0_0 = func_0015c4a0(s0);
            if ((*(u8*)(&D_0034c70c) == 1)) {
                v0_1 = func_001de3d8((u32)&D_0034c6f0, s0);
                v0_0 = v0_1;
            }
            v0 = v0_0;
        }
        s0 = (s0 + 1);
        t7 = ((s32)(s0) < (s32)(0x40));
    } while ((t7 != 0));
    return v0;
}
