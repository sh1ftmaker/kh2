// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350cb0 asm("D_00350cb0");
extern "C" u32 func_002f7dc8() asm("func_002f7dc8");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x001adc48 func_001adc48
u32 func_001adc48(u32 a0) asm("func_001adc48");
u32 func_001adc48(u32 a0) {
    u32 t7;
    u32 v0;
    u32 v0_0;
    u32 t6;
    u32 t5;
    u32 t7_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    if ((a0 == 1)) {
        t7 = *(u32*)(&D_00350cb0);
        if (((s32)(t7) != 0)) {
            func_003058a0(0);
            if (((s32)(func_002f7dc8()) != 0)) {
                *(u32*)(((u32)&D_00350cb0 + 0x10)) = 0xffffffff;
                v0 = ((u32(*)(u32, u32, u32))(*(u32*)(&D_00350cb0)))(*(u32*)(((u32)&D_00350cb0 + 8)), *(u32*)(((u32)&D_00350cb0 + 0xc)), 0xffffffff);
                *(u32*)(&D_00350cb0) = 0;
                v0_2 = v0;
            } else {
                *(u32*)(((u32)&D_00350cb0 + 0x10)) = 0;
                v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(&D_00350cb0)))(*(u32*)(((u32)&D_00350cb0 + 8)), *(u32*)(((u32)&D_00350cb0 + 0xc)), 0);
                *(u32*)(&D_00350cb0) = 0;
                t6 = *(u32*)(((u32)&D_00350cb0 + 0xc));
                t5 = *(u32*)(((u32)&D_00350cb0 + 4));
                t7_1 = *(u32*)((t5 + 8));
                *(u32*)((t5 + 8)) = (t7_1 + ((t6 + 0x7ff) >> 0xb));
                v0_2 = v0_0;
            }
            v0_3 = v0_2;
        }
        v0_4 = v0_3;
    }
    return v0_4;
}
