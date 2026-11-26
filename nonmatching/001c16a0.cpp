// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001dca30(u32, u32, u32) asm("func_001dca30");

// 0x001c16a0 func_001c16a0
void func_001c16a0(u32 a0, u32 a1) asm("func_001c16a0");
void func_001c16a0(u32 a0, u32 a1) {
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        if ((*(u32*)((a0 + 4)) != 1)) {
            return;
        } else {
            func_001dca30(*(u32*)(a0), *(u32*)((a0 + 0x30)), a1);
            return;
        }
    } else {
        func_001dca30(*(u32*)(a0), *(u32*)((a0 + 0x30)), a1);
        return;
    }
}
