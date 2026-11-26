// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d49320 asm("D_01d49320");
extern "C" u32 func_0014f578(u32) asm("func_0014f578");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001bb4a0(u32) asm("func_001bb4a0");

// 0x001bb958 func_001bb958
void func_001bb958(u32 a0) asm("func_001bb958");
void func_001bb958(u32 a0) {
    u32 a0_0;
    if (((s32)(a0) == 0)) {
        if (((s32)(func_001bb4a0(a0)) != 0)) {
            a0_0 = *(u16*)((*(u32*)((*(u32*)(&D_01d49320) + 8)) + 6));
            if (((s32)(a0_0) > 0)) {
                func_0014f578(func_00192048(a0_0));
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        if (((s32)(a0) > 0)) {
            func_0014f578(func_00192048(a0));
            return;
        } else {
            return;
        }
    }
}
