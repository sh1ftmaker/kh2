// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00289b30(u32, u32, u32) asm("func_00289b30");
extern "C" u32 func_0028b1c0(u32, u32) asm("func_0028b1c0");

// 0x0028afd0 func_0028afd0
void func_0028afd0(u32 a0, u32 a1) asm("_ZN2Tz6Select12SetSelectTopEi");
void func_0028afd0(u32 a0, u32 a1) {
    *(u16*)((a0 + 0x12)) = a1;
    if (((s32)(*(u8*)((a0 + 0x25))) == 0)) {
        if (((s32)(func_0028b1c0(a0, ((s32)((a1 << 0x10)) >> 0x10) + *(s16*)(a0))) != 0)) {
            func_00289b30(a0, a0, a0 + 0x12);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
