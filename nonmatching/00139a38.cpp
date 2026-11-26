// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" void func_001396d0(u32) asm("func_001396d0");

// 0x00139a38 func_00139a38
void func_00139a38(u32 a0) asm("_ZN2dk5Obj2D13setPauseGroupEi");
void func_00139a38(u32 a0) {
    u32 s0;
    u32 a0_0;
    s0 = 0;
    while ((a0_0 = ((s32)(s0) != 0) ? *(u32*)((s0 + 4)) : *(u32*)((*(u32*)(&D_00347f80) + 4))), (s0 = a0_0), ((s32)(a0_0) != 0)) {
        if ((*(u32*)((a0_0 + 0x10)) != a0)) {
            continue;
        }
        func_001396d0(a0_0);
    }
    return;
}
