// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350b30 asm("D_00350b30");
extern "C" u32 func_001aa388(u32, u32) asm("func_001aa388");
extern "C" void func_001ac078(u32, u32, u32, u32) asm("func_001ac078");
extern "C" void func_001ac970(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_001ac970");

// 0x001ad430 func_001ad430
u32 func_001ad430(u32 a0, u32 a1) asm("_ZN2YS11WINDOW_TALKC1Ei");
u32 func_001ad430(u32 a0, u32 a1) {
    u32 s0;
    func_001ac970(a0, 3, 5, a1, 0, 0x100, 0x150, 0);
    *(u32*)(a0) = (u32)&D_00350b30;
    *(u32*)((a0 + 0x64)) = 3;
    *(u32*)((a0 + 0x68)) = 0;
    s0 = (a0 + 0xc);
    func_001ac078(a0 + 0x4ac, 1, 1, 0);
    return func_001aa388(s0, *(u32*)((s0 + 0xc)));
}
