// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");
extern "C" void func_002d24e8(u32, u32) asm("func_002d24e8");

// 0x002d25f0 func_002d25f0
void func_002d25f0(u32 a0) asm("_ZN2Ti9MGOarashi13task_pre_execEP4TASK");
void func_002d25f0(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = 0;
    while ((v0 = func_001b9bc8(s0)), (s0 = v0), ((s32)(v0) != 0)) {
        if (((s32)((*(u32*)((s0 + 0x588)) & 0x8000000)) == 0)) {
            continue;
        }
        func_002d24e8(a0, v0);
    }
    return;
}
