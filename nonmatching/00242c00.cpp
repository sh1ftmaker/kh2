// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001058e8(u32) asm("func_001058e8");
extern "C" u32 func_00242b58() asm("func_00242b58");
extern "C" u32 func_00242b88(u32) asm("func_00242b88");
extern "C" u32 func_00242bd0() asm("func_00242bd0");

// 0x00242c00 func_00242c00
void func_00242c00(u32 a0) asm("_ZN2Tz6Config19SetRightStickCameraEb");
void func_00242c00(u32 a0) {
    u32 v0;
    u32 t7;
    v0 = (func_001058e8(a0) + 0x41a0);
    t7 = *(u32*)((v0 + 4));
    *(u32*)((v0 + 4)) = ((t7 & 0xffffffdf) | (((u32)((a0 & 0xff)) < (u32)(1)) << 5));
    if (((s32)(func_00242bd0()) == 0)) {
        if (((s32)(func_00242b58()) == 0)) {
            func_00242b88(1);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
