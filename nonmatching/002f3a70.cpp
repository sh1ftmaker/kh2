// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_002f3490(u32) asm("func_002f3490");

// 0x002f3a70 func_002f3a70
u32 func_002f3a70(u32 a0) asm("func_002f3a70");
u32 func_002f3a70(u32 a0) {
    u32 v0;
    func_002f3490(a0);
    *(u32*)((a0 + 0x20)) = 0;
    v0 = *(u32*)(a0);
    *(u32*)(a0) = ((((v0 & 0xfffffff3) | 4) & 0xfffffffe) | 0x100);
    return ((((v0 & 0xfffffff3) | 4) & 0xfffffffe) | 0x100);
}
