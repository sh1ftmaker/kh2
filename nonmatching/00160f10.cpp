// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3b38 asm("D_004f3b38");
extern "C" void func_001604d8(u32) asm("func_001604d8");

// 0x00160f10 func_00160f10
void func_00160f10(u32 a0) asm("func_00160f10");
void func_00160f10(u32 a0) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_004f3b38) : *(u32*)((s0 + 0x80))), (s0 = a0), ((s32)(a0) != 0)) {
        if ((*(u32*)((a0 + 0x1a8)) != a0)) {
            continue;
        }
        func_001604d8(a0);
    }
    return;
}
