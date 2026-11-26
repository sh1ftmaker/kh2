// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001317a8 func_001317a8
// minilink-rodata 0x0036abec   (float literals live here in the original)
f32 func_001317a8(u32 a0, f32 fa0) asm("func_001317a8");
f32 func_001317a8(u32 a0, f32 fa0) {
    return (((s32)((((s32)((s32)((((fa0 * *(f32*)((*(u32*)((a0 + 4)) + 0x58))) / 60.0f) + 0.5f))) < (s32)(0)) ? 0 : (s32)((((fa0 * *(f32*)((*(u32*)((a0 + 4)) + 0x58))) / 60.0f) + 0.5f)))) < (s32)(*(u32*)((*(u32*)((a0 + 4)) + 0x24)))) ? (((s32)((s32)((((fa0 * *(f32*)((*(u32*)((a0 + 4)) + 0x58))) / 60.0f) + 0.5f))) < (s32)(0)) ? 0 : (s32)((((fa0 * *(f32*)((*(u32*)((a0 + 4)) + 0x58))) / 60.0f) + 0.5f))) : (*(u32*)((*(u32*)((a0 + 4)) + 0x24)) + -1));
}
