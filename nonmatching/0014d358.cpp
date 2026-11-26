// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0014d298 asm("D_0014d298");
extern "C" u32 D_00349e48 asm("D_00349e48");
extern "C" u32 func_00305420(u32) asm("func_00305420");
extern "C" u32 func_00305620(u32, u32, u32, u32) asm("func_00305620");
extern "C" u32 func_00306760(u32, u32) asm("func_00306760");

// 0x0014d358 func_0014d358
void func_0014d358(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_0014d358");
void func_0014d358(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s1;
    u32 s0;
    u32 a0_0;
    u32 v0;
    u32 v0_1;
    s1 = 0;
    s0 = (u32)&D_00349e48;
    a0_0 = 0;
    do {
        if ((*(u32*)(((s0 + (s1 * 0x58)) + 0x50)) == 0)) {
            *(u32*)(((s0 + (s1 * 0x58)) + 0x50)) = a2;
            *(u32*)(((s0 + (s1 * 0x58)) + 0x54)) = a3;
            v0 = func_00305620((a0_0 + (s1 * 0x58)) + ((u32)&D_00349e48 + 0x34), a1, a2, a3);
            *(u32*)(((s0 + (s1 * 0x58)) + 8)) = (u32)&D_0014d298;
            *(u32*)(((s0 + (s1 * 0x58)) + 0xc)) = a0;
            *(u32*)(((s0 + (s1 * 0x58)) + 0x10)) = a1;
            *(u32*)(((s0 + (s1 * 0x58)) + 0x18)) = ((s1 + 1) + 0x28);
            *(u32*)(((s0 + (s1 * 0x58)) + 0x4c)) = v0;
            v0_1 = func_00305420((s0 + (s1 * 0x58)) + 4);
            *(u32*)((s0 + (s1 * 0x58))) = v0_1;
            func_00306760(v0_1, s1 + 1);
            return;
        }
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(2))) != 0));
    return;
}
