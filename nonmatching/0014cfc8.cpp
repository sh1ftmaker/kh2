// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e04 asm("D_00349e04");
extern "C" u32 D_00349e08 asm("D_00349e08");
extern "C" u32 func_0014ce60() asm("func_0014ce60");
extern "C" void func_0014ce20(u32) asm("func_0014ce20");
extern "C" void func_0014ce30(u32) asm("func_0014ce30");

// 0x0014cfc8 func_0014cfc8
u32 func_0014cfc8() asm("func_0014cfc8");
u32 func_0014cfc8() {
    u32 v0;
    func_0014ce20(1);
    func_0014ce30(1);
    v0 = func_0014ce60();
    *(u32*)(&D_00349e04) = 0;
    *(u32*)(&D_00349e08) = 0;
    return v0;
}
