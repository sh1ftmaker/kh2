// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_002ed630(u32) asm("func_002ed630");
extern "C" void func_002ed720(u32) asm("func_002ed720");

// 0x002ed830 u_call4_002ed830(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0037619c   (float literals live here in the original)
f32 lift_002ed830(u32 a0) asm("_Z16u_call4_002ed830jjjj");
f32 lift_002ed830(u32 a0) {
    f32 f0;
    func_002ed630(a0);
    func_002ed720(a0);
    if (!((*(f32*)((a0 + 0x58)) < 0.0f))) {
        *(u8*)((a0 + 0x15)) = (s32)(((*(f32*)((a0 + 0x58)) * 0.125f) * 128.0f));
        f0 = ((*(f32*)((a0 + 0x58)) * 0.125f) * 128.0f);
    } else {
        f0 = 0.0f;
    }
    return f0;
}
