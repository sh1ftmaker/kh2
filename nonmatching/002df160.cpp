// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002df160 func_002df160
f32 func_002df160(u32 a0) asm("func_002df160");
f32 func_002df160(u32 a0) {
    *(u32*)((a0 + 0x20)) = 0;
    *(f32*)((a0 + 0x24)) = *(f32*)((a0 + 0x18));
    *(f32*)((a0 + 0x2c)) = *(f32*)((a0 + 0x20));
    *(u8*)((a0 + 0x30)) = 0;
    *(u8*)((a0 + 0x31)) = 0;
    *(f32*)((a0 + 0x1c)) = *(f32*)((a0 + 0x18));
    *(f32*)((a0 + 0x28)) = *(f32*)((a0 + 0x20));
    return *(f32*)((a0 + 0x18));
}
