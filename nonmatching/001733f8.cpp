// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350990 asm("D_00350990");
extern "C" f32 func_001024a8(u32) asm("func_001024a8");

// 0x001733f8 func_001733f8
void func_001733f8(u32 a0) asm("_ZN2YS30trap_bg_set_belt_conveyor_taskEP4TASK");
void func_001733f8(u32 a0) {
    u32 t6;
    t6 = *(u32*)((a0 + 4));
    *(u32*)((a0 + 4)) = (*(u32*)((a0 + 4)) + -1);
    if (((s32)(t6) <= 0)) {
        *(f32*)(&D_00350990) = *(f32*)((a0 + 8));
        *(f32*)(((u32)&D_00350990 + 4)) = *(f32*)((a0 + 0xc));
        *(f32*)(((u32)&D_00350990 + 8)) = *(f32*)((a0 + 0x10));
        *(u32*)(((u32)&D_00350990 + 0xc)) = 0;
        func_001024a8(a0);
        return;
    } else {
        return;
    }
}
