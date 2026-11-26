// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139598(u32) asm("func_00139598");

// 0x0013d1d0 func_0013d1d0
void func_0013d1d0(u32 a0) asm("func_0013d1d0");
void func_0013d1d0(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x29c))) != 0)) {
        if (((s32)((*(u32*)((*(u32*)((a0 + 0x29c)) + 0x20)) & 8)) != 0)) {
            func_00139598(a0 + 0x104);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
