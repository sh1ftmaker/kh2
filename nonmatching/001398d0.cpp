// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" void func_00139570(u32) asm("func_00139570");

// 0x001398d0 func_001398d0(int)
void lift_001398d0(u32 a0) asm("_Z13func_001398d0i");
void lift_001398d0(u32 a0) {
    u32 s0;
    u32 a0_0;
    s0 = 0;
    while ((a0_0 = ((s32)(s0) != 0) ? *(u32*)((s0 + 4)) : *(u32*)((*(u32*)(&D_00347f80) + 4))), (s0 = a0_0), ((s32)(a0_0) != 0)) {
        if ((*(u32*)((a0_0 + 0x10)) != a0)) {
            continue;
        }
        func_00139570(a0_0);
    }
    return;
}
