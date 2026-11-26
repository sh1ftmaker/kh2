// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c608c0 asm("D_01c608c0");

// 0x00188470 func_00188470
void func_00188470(u32 a0, u32 a1, f32 fa0) asm("func_00188470");
void func_00188470(u32 a0, u32 a1, f32 fa0) {
    u32 t6;
    u32 t5;
    t6 = 0;
    t5 = (u32)&D_01c608c0;
    do {
        if ((*(u32*)((t5 + (t6 * 0xc))) == 0)) {
            *(u32*)((t5 + (t6 * 0xc))) = a1;
            *(u32*)(((t5 + (t6 * 0xc)) + 4)) = *(u32*)((a0 + 0x88));
            *(f32*)(((t5 + (t6 * 0xc)) + 8)) = fa0;
            return;
        }
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(0x40))) != 0));
    return;
}
