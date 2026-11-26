// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363da8 asm("D_00363da8");
extern "C" u32 D_00363e00 asm("D_00363e00");
extern "C" u32 D_00364f50 asm("D_00364f50");
extern "C" u32 func_002f6fc0(u32) asm("func_002f6fc0");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_00305640(u32) asm("func_00305640");

// 0x002f7118 func_002f7118
u32 func_002f7118() asm("func_002f7118");
u32 func_002f7118() {
    u32 loc_0;
    u32 s0;
    u32 v0;
    u32 v0_0;
    if (((s32)(func_002f6fc0(2)) == 0)) {
        v0_0 = 0;
    } else {
        loc_0 = 0;
        if (((s32)(func_003094b8((u32)&D_00364f50, 0xe, 0, 0, 0, (u32)&D_00363e00, 4, 0)) < 0)) {
            func_00305640(*(u32*)(&D_00363da8));
            v0 = 0;
        } else {
            s0 = *(u32*)(((u32)&D_00363e00 | 0x20000000));
            func_00305640(*(u32*)(&D_00363da8));
            v0 = s0;
        }
        v0_0 = v0;
    }
    return v0_0;
}
