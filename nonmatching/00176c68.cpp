// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" void func_001dc840(u32) asm("func_001dc840");

// 0x00176c68 func_00176c68
void func_00176c68(u32 a0) asm("func_00176c68");
void func_00176c68(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0xae4))) != 0)) {
        *(f32*)((a0 + 0xae8)) = (*(f32*)((a0 + 0xae8)) - *(f32*)(&D_00349e10));
        if (((s32)((*(u32*)((a0 + 0x160)) & 0x4000)) != 0) || ((*(f32*)((a0 + 0xae8)) - *(f32*)(&D_00349e10)) <= 0.0f)) {
            func_001dc840(*(u32*)((a0 + 0xae4)));
            *(u32*)((a0 + 0xae4)) = 0;
        }
    }
    return;
}
