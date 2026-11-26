// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e348 asm("D_01d9e348");
extern "C" u32 func_001dc010(u32, u32) asm("func_001dc010");

// 0x001dddd0 ryj::PAX::init(void*)
u32 lift_001dddd0(u32 a0, u32 a1) asm("_ZN3ryj3PAX4initEPv");
u32 lift_001dddd0(u32 a0, u32 a1) {
    u32 v0;
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 4)) = (a1 + 0x10);
    v0 = func_001dc010(a0 + 8, *(u32*)((a1 + 0xc)) + a1);
    if ((*(u32*)(((u32)&D_01d9e348 + 4)) == 0)) {
        *(u32*)(((u32)&D_01d9e348 + 4)) = a0;
        *(u32*)(&D_01d9e348) = a0;
        *(u32*)((a0 + 0x14)) = 0;
    } else {
        *(u32*)((*(u32*)(((u32)&D_01d9e348 + 4)) + 0x14)) = a0;
        *(u32*)((a0 + 0x14)) = 0;
        *(u32*)(((u32)&D_01d9e348 + 4)) = a0;
    }
    return v0;
}
