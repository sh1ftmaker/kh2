// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00222978(u32, f32) asm("func_00222978");

// 0x002225a8 func_002225a8
// minilink-rodata 0x00370bcc   (float literals live here in the original)
void func_002225a8(u32 a0) asm("func_002225a8");
void func_002225a8(u32 a0) {
    f32 acc;
    f32 acc_0;
    f32 f6;
    f32 acc_1;
    f32 acc_2;
    f32 f20;
    f32 f20_3;
    acc = (*(f32*)((a0 + 0x10)) * *(f32*)((a0 + 0x10)));
    acc_0 = (*(f32*)((a0 + 0x10)) * *(f32*)(a0));
    f6 = ((acc + (*(f32*)((a0 + 0x14)) * *(f32*)((a0 + 0x14)))) + (*(f32*)((a0 + 0x18)) * *(f32*)((a0 + 0x18))));
    acc_1 = (*(f32*)(a0) * *(f32*)(a0));
    acc_2 = (acc_1 + (*(f32*)((a0 + 4)) * *(f32*)((a0 + 4))));
    f20 = ((acc_0 + (*(f32*)((a0 + 0x14)) * *(f32*)((a0 + 4)))) + (*(f32*)((a0 + 0x18)) * *(f32*)((a0 + 8))));
    f20_3 = (f20 + f20);
    if (!((((f20_3 * f20_3) - ((f6 * 4.0f) * ((acc_2 + (*(f32*)((a0 + 8)) * *(f32*)((a0 + 8)))) - (*(f32*)((a0 + 0x20)) * *(f32*)((a0 + 0x20)))))) < 0.0f))) {
        *(f32*)((a0 + 0x24)) = ((-(f20_3) - func_00222978(a0, (f20_3 * f20_3) - ((f6 * 4.0f) * ((acc_2 + (*(f32*)((a0 + 8)) * *(f32*)((a0 + 8)))) - (*(f32*)((a0 + 0x20)) * *(f32*)((a0 + 0x20))))))) / (f6 + f6));
    }
    return;
}
