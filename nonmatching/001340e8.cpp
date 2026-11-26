// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347cb4 asm("D_00347cb4");
extern "C" u32 func_00134020() asm("func_00134020");
extern "C" u32 func_001341e8() asm("func_001341e8");
extern "C" void func_00134030() asm("func_00134030");

// 0x001340e8 func_001340e8(void*)
void lift_001340e8() asm("_Z13func_001340e8Pv");
void lift_001340e8() {
    u32 t7;
    u32 v0;
    u32 t7_0;
    if (((s32)(func_001341e8()) >= 0)) {
        while ((v0 = func_00134020()), (t7 = 0x10000000), ((s32)(v0) != 0)) {
            func_00134030();
        }
        t7_0 = t7;
    } else {
        func_00134030();
        *(u8*)(&D_00347cb4) = 0;
        t7_0 = 0x10000000;
    }
    *(u32*)((t7_0 | 0x3010)) = 0;
    return;
}
