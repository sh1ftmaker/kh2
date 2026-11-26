// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3b38 asm("D_004f3b38");
extern "C" void func_00160940(u32, u32, f32) asm("func_00160940");

// 0x00161248 func_00161248
void func_00161248(u32 a0, f32 fa0) asm("func_00161248");
void func_00161248(u32 a0, f32 fa0) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_004f3b38) : *(u32*)((s0 + 0x80))), (s0 = a0), ((s32)(a0) != 0)) {
        func_00160940(a0, a0, fa0);
    }
    return;
}
