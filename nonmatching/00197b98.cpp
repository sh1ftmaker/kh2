// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035037c asm("D_0035037c");
extern "C" u32 func_002283f8() asm("func_002283f8");

// 0x00197b98 YS::EVENT::GetRestTime()
// minilink-rodata 0x0036d0a8   (float literals live here in the original)
f32 lift_00197b98() asm("_ZN2YS5EVENT11GetRestTimeEv");
f32 lift_00197b98() {
    f32 f0;
    f32 f0_0;
    if (((s32)(*(u32*)(&D_0035037c)) != 0)) {
        if ((*(u32*)((*(u32*)(&D_0035037c) + 0x30)) == 8)) {
            f0 = (f32)((s32)(func_002283f8()));
        } else {
            f0 = 3600.0f;
        }
        f0_0 = f0;
    } else {
        f0_0 = 0.0f;
    }
    return f0_0;
}
