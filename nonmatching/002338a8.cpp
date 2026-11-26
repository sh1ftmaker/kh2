// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002338a8 func_002338a8
// minilink-rodata 0x003713ac   (float literals live here in the original)
f32 func_002338a8(u32 a0, f32 fa0) asm("func_002338a8");
f32 func_002338a8(u32 a0, f32 fa0) {
    u32 loc_0;
    f32 f0;
    f32 f0_0;
    loc_0 = a0;
    if (!((fa0 == 1.0f))) {
        if (((s32)((a0 >> 0x18)) >= 0)) {
            f0 = (f32)((s32)((a0 >> 0x18)));
        } else {
            f0 = ((f32)((s32)((((a0 >> 0x18) & 1) | (a0 >> 0x19)))) + (f32)((s32)((((a0 >> 0x18) & 1) | (a0 >> 0x19)))));
        }
        if (((u32)((s32)((f0 * fa0))) >= (u32)(0x100))) {
            *(u8*)(((u32)&loc_0 + 3)) = 0xffffffff;
        } else {
            *(u8*)(((u32)&loc_0 + 3)) = (s32)((f0 * fa0));
        }
        f0_0 = (f0 * fa0);
    } else {
        f0_0 = 1.0f;
    }
    return f0_0;
}
