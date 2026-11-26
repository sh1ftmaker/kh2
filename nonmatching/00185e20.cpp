// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00185da8(u32) asm("func_00185da8");
extern "C" void func_0016c568(u32, u32, f32) asm("func_0016c568");

// 0x00185e20 YS::ENEMY::StopStartAll(int)
u32 lift_00185e20(u32 a0) asm("_ZN2YS5ENEMY12StopStartAllEi");
u32 lift_00185e20(u32 a0) {
    u32 s0;
    u32 v0_0;
    s0 = 0;
    while ((v0_0 = func_00185da8(s0)), (s0 = v0_0), ((s32)(v0_0) != 0)) {
        func_0016c568(v0_0, a0, 0.0f);
    }
    return v0_0;
}
