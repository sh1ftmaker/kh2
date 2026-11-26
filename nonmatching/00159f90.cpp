// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034aa44 asm("D_0034aa44");

// 0x00159f90 func_00159f90
// minilink-rodata 0x0036b380   (float literals live here in the original)
f32 func_00159f90(u32 a0, u32 a1) asm("func_00159f90");
f32 func_00159f90(u32 a0, u32 a1) {
    f32 f0;
    f32 f0_0;
    *(u32*)(&D_0034aa44) = 0;
    if (((s32)((a1 & 4)) != 0)) {
        *(f32*)(&D_0034aa44) = 0.3490658402442932f;
        f0_0 = 0.3490658402442932f;
    } else {
        if (((s32)((a1 & 8)) != 0)) {
            *(f32*)(&D_0034aa44) = -0.3490658402442932f;
            f0 = -0.3490658402442932f;
        }
        f0_0 = f0;
    }
    return f0_0;
}
