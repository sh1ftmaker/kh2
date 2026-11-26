// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e0c asm("D_00349e0c");
extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_00349e14 asm("D_00349e14");
extern "C" u32 D_00349e18 asm("D_00349e18");
extern "C" u32 D_00349e1c asm("D_00349e1c");

// 0x0014ce88 wtarget_0014ce88(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036b0f0   (float literals live here in the original)
f32 lift_0014ce88() asm("_Z16wtarget_0014ce88jjjj");
f32 lift_0014ce88() {
    u32 t6;
    f32 f0;
    f32 f1;
    u32 t5;
    u32 t7;
    f32 f2;
    f32 f1_0;
    t6 = *(u32*)(&D_00349e1c);
    *(u32*)(&D_00349e10) = 0;
    if (((s32)((t6 + 1)) > 0)) {
        f0 = *(f32*)(&D_00349e10);
        f1 = 1.0f;
        t5 = 0x350000;
        t7 = (t6 + 1);
        do {
            f0 = (f0 + f1);
            t7 = (t7 + -1);
        } while (((s32)(t7) != 0));
        *(f32*)((t5 + -0x61f0)) = f0;
    }
    f2 = *(f32*)(&D_00349e10);
    *(f32*)(&D_00349e14) = f2;
    f1_0 = *(f32*)(&D_00349e0c);
    *(f32*)(&D_00349e10) = (f2 * f1_0);
    *(f32*)(&D_00349e18) = (1.0f / (f2 * f1_0));
    return (1.0f / (f2 * f1_0));
}
