// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00362eb8 asm("D_00362eb8");
extern "C" u32 func_002cea28(u32) asm("func_002cea28");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_002e70b0(u32) asm("func_002e70b0");

// 0x002e2298 func_002e2298
u32 func_002e2298(u32 a0) asm("func_002e2298");
u32 func_002e2298(u32 a0) {
    u32 s0;
    *(u32*)(a0) = (u32)&D_00362eb8;
    if (((s32)(*(u32*)((a0 + 0x6c))) != 0)) {
        s0 = *(u32*)((a0 + 0x6c));
        func_002e70b0(*(u32*)((a0 + 0x6c)));
        func_00106420(s0);
    }
    return func_002cea28(a0);
}
