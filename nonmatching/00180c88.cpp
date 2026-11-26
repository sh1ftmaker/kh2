// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017f488(u32, u32) asm("func_0017f488");
extern "C" u32 func_001802d8(u32, u32, u32, u32, u32, u32) asm("func_001802d8");

// 0x00180c88 func_00180c88
void func_00180c88(u32 a0, u32 a1) asm("func_00180c88");
void func_00180c88(u32 a0, u32 a1) {
    if (((s32)(*(u32*)((a0 + 0x100))) == 0)) {
        func_0017f488(a0, a1);
        return;
    } else {
        func_001802d8(*(u32*)((a0 + 0xfc)), *(u32*)((a0 + 0x100)), *(u32*)((a0 + 0xf0)), *(u32*)((a0 + 8)), a1, 0);
        return;
    }
}
