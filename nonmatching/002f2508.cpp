// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_12001000 asm("D_12001000");
extern "C" u32 func_002f1fa8() asm("func_002f1fa8");
extern "C" u32 func_00305b40() asm("func_00305b40");
extern "C" void func_00305ab0() asm("func_00305ab0");

// 0x002f2508 func_002f2508(int)
u32 lift_002f2508() asm("_Z13func_002f2508i");
u32 lift_002f2508() {
    u32 s0;
    u32 v0;
    u32 s0_0;
    u32 v0_1;
    u32 v0_2;
    if (((s32)(*(u32*)((func_002f1fa8() + 8))) == 0)) {
        s0 = func_002f1fa8();
        func_00305ab0();
        v0 = (*(s16*)(s0) == 1) ? (s32)((u64)(((*(u64*)((u32)&D_12001000) >> 0xd) & 1))) : 1;
        v0_2 = v0;
    } else {
        s0_0 = func_002f1fa8();
        if ((*(s16*)(s0_0) == 1)) {
            v0_1 = (s32)((u64)((((s32)(func_00305b40()) >> 0xd) & 1)));
        } else {
            v0_1 = 1;
        }
        v0_2 = v0_1;
    }
    return v0_2;
}
