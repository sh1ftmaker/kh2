// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00362dc8 asm("D_00362dc8");
extern "C" u32 func_002cea28(u32) asm("func_002cea28");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_002e70b0(u32) asm("func_002e70b0");

// 0x002e0ec8 func_002e0ec8
u32 func_002e0ec8(u32 a0) asm("func_002e0ec8");
u32 func_002e0ec8(u32 a0) {
    u32 s0;
    *(u32*)(a0) = (u32)&D_00362dc8;
    if (((s32)(*(u32*)((a0 + 0x70))) != 0)) {
        s0 = *(u32*)((a0 + 0x70));
        func_002e70b0(*(u32*)((a0 + 0x70)));
        func_00106420(s0);
    }
    return func_002cea28(a0);
}
