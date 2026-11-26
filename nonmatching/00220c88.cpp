// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00222898(u32, u32, u32) asm("func_00222898");
extern "C" void func_002f3f88(u32, u32) asm("func_002f3f88");

// 0x00220c88 func_00220c88
u32 func_00220c88() asm("func_00220c88");
u32 func_00220c88() {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    loc_0 = v0;
    func_002f3f88(v0 + 0x1e0, *(u32*)((v0 + 0x1f4)));
    v0_0 = func_00222898(v0 + 0xa0, v0, v0 + 0x1e0);
    *(u32*)((v0 + 0x1f4)) = (*(u32*)((v0 + 0x1f4)) + *(u32*)((v0 + 0x204)));
    *(u32*)((v0 + 0x20c)) = (*(u32*)((v0 + 0x20c)) + -1);
    return v0_0;
}
