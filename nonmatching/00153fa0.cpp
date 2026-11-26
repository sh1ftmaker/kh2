// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" u32 func_00138748(u32) asm("func_00138748");
extern "C" u32 func_001541d8(u32, u32, u32, u32, u32, u32) asm("func_001541d8");
extern "C" u32 func_00154288(u32, u32, u32) asm("func_00154288");
extern "C" void func_001391c8(u32, u32, u32) asm("func_001391c8");

// 0x00153fa0 func_00153fa0
u32 func_00153fa0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2dk4FACE6createEiiPN2YS3OBJEiii");
u32 func_00153fa0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    *(u32*)((a0 + 0x340)) = a2;
    loc_0 = 0;
    if ((func_001541d8(a0, (u32)&loc_0, a3, a3, a4, a5) == 1)) {
        v0 = func_001386e0(a0, a1, loc_0, a0 + 0x1a0, func_00154288(a0, a4, a5), a5);
        v0_1 = v0;
    } else {
        func_001391c8(a0, a1, a5);
        v0_0 = func_00138748(a0);
        v0_1 = v0_0;
    }
    return v0_1;
}
