// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00350790 asm("D_00350790");
extern "C" u32 func_001c16f0(u32, u32) asm("func_001c16f0");
extern "C" void func_001a53d0(u32, u32, u32) asm("func_001a53d0");

// 0x001a5a48 ctarget0_001a5a48()
u32 lift_001a5a48() asm("_Z17ctarget0_001a5a48v");
u32 lift_001a5a48() {
    u32 s0;
    u32 t7;
    u32 v0_0;
    s0 = 0;
    t7 = *(u32*)(&D_00350790);
    while ((v0_0 = func_001c16f0(*(u32*)((t7 + 0x9f4)), s0)), (s0 = v0_0), ((s32)(v0_0) != 0)) {
        if (((*(u32*)((v0_0 + 0x28)) & 1) == 0)) {
            t7 = (*(u32*)((v0_0 + 0x28)) & 1);
            continue;
        }
        func_001a53d0(*(u32*)(&D_00350790), *(u32*)(&D_0034e948), v0_0);
        t7 = *(u32*)(&D_00350790);
    }
    return v0_0;
}
