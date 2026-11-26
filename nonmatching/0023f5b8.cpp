// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" void func_00139d78(u32, u32) asm("func_00139d78");

// 0x0023f5b8 func_0023f5b8(int)
void lift_0023f5b8(u32 a0, u32 a1) asm("_Z13func_0023f5b8i");
void lift_0023f5b8(u32 a0, u32 a1) {
    func_00139d78(a0, a1);
    if (((s32)(a1) >= 0)) {
        if ((a1 != *(u32*)((a0 + 0x24)))) {
            *(u32*)((a0 + 0x20)) = func_00192048(a1);
            *(u32*)((a0 + 0x24)) = a1;
        }
    }
    return;
}
