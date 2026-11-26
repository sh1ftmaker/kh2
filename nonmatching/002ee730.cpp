// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363848 asm("D_00363848");

// 0x002ee730 func_002ee730
void func_002ee730(u32 a0) asm("func_002ee730");
void func_002ee730(u32 a0) {
    *(u32*)(a0) = (u32)&D_00363848;
    *(u32*)((a0 + 4)) = 0;
    *(u8*)((a0 + 8)) = 0x4d;
    *(u32*)((a0 + 0x14)) = 2;
    *(u32*)((a0 + 0x18)) = 0x222e0;
    *(u32*)((a0 + 0x1c)) = 0;
    *(u32*)((a0 + 0x20)) = 0;
    *(u32*)((a0 + 0x24)) = 0;
    *(u32*)((a0 + 0x28)) = 0x1000;
}
