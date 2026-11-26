// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034aa70 asm("D_0034aa70");
extern "C" u32 D_004f3604 asm("D_004f3604");
extern "C" f32 func_00190128(u32, u32) asm("func_00190128");

// 0x0015a768 func_0015a768(int, int)
// minilink-rodata 0x0036b3a8   (float literals live here in the original)
f32 lift_0015a768(u32 a0, u32 a1) asm("_Z13func_0015a768ii");
f32 lift_0015a768(u32 a0, u32 a1) {
    f32 f0;
    f32 f0_0;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_004f3604) = 0.05235987529158592f;
            f0 = 0.05235987529158592f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                func_00190128((u32)&D_0034aa70, a1);
                f0 = func_00190128((u32)&D_0034aa70, a1);
            }
        }
        f0_0 = f0;
    }
    return f0_0;
}
