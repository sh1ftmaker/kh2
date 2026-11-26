// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c60cd8 asm("D_01c60cd8");
extern "C" u32 func_00186078(u32) asm("func_00186078");
extern "C" u32 func_001c0458(u32, u32) asm("func_001c0458");

// 0x0018e040 func_0018e040
u32 func_0018e040(u32 a0) asm("_ZN2YS6ATTACK7refreshEv");
u32 func_0018e040(u32 a0) {
    u32 s0;
    u32 v0_0;
    u32 s0_1;
    u32 a0_2;
    u32 v0;
    s0 = 0;
    while ((v0_0 = func_00186078(s0)), (s0 = v0_0), ((s32)(v0_0) != 0)) {
        func_001c0458(v0_0 + 0xa50, a0);
        if ((*(u32*)((s0 + 0xaac)) == a0)) {
            continue;
        }
    }
    s0_1 = 0;
    while ((a0_2 = (s0_1 == 0) ? *(u32*)(&D_01c60cd8) : *(u32*)((s0_1 + 0xc0))), (s0_1 = a0_2), ((s32)(a0_2) != 0)) {
        v0 = func_001c0458(a0_2 + 0x30, a0);
        v0_0 = v0;
    }
    return v0_0;
}
