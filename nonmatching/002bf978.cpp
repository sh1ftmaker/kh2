// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002be908(u32) asm("func_002be908");
extern "C" void func_002bf8f0(u32) asm("func_002bf8f0");

// 0x002bf978 func_002bf978
void func_002bf978() asm("func_002bf978");
void func_002bf978() {
    u32 s0;
    u32 v0;
    s0 = 0;
    while ((v0 = func_002be908(s0)), (s0 = v0), ((s32)(v0) != 0)) {
        if (((s32)((*(u32*)((s0 + 0x588)) & 0x80000000)) == 0)) {
            continue;
        }
        func_002bf8f0(v0);
    }
    return;
}
