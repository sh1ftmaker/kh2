// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00184a90(u32) asm("func_00184a90");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");

// 0x00173f68 func_00173f68
f32 func_00173f68(u32 a0) asm("_ZN2YS21trap_obj_float_heightEP8BD_VALUE");
f32 func_00173f68(u32 a0) {
    u32 s0;
    f32 f20;
    f32 f20_0;
    f32 f20_1;
    f32 f1;
    s0 = *(u32*)((*(u32*)(a0) + 4));
    f20 = func_00184a90(*(u32*)((*(u32*)(a0) + 4)));
    if ((0.0f < (f20 - *(f32*)((func_0016c028(s0) + 4))))) {
        f20_0 = (f20 - *(f32*)((func_0016c028(s0) + 4)));
        f20_1 = func_00184a90(s0);
        f1 = (f20_1 - *(f32*)((func_0016c028(s0) + 4)));
    } else {
        f1 = 0.0f;
    }
    *(f32*)(a0) = -(f1);
    return -(f1);
}
