// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2aa80 asm("D_01e2aa80");
extern "C" void func_002bbf68(u32, u32) asm("func_002bbf68");

// 0x002bc518 func_002bc518
void func_002bc518(u32 a0) asm("func_002bc518");
void func_002bc518(u32 a0) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_01e2aa80) : *(u32*)((s0 + 0x1c))), (s0 = a0), ((s32)(a0) != 0)) {
        if ((*(u8*)((a0 + 0x31)) != 3)) {
            continue;
        }
        func_002bbf68(a0, 1);
    }
    return;
}
