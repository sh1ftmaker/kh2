// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d28 asm("D_00347d28");
extern "C" void func_00136840() asm("func_00136840");
extern "C" void func_001369d0() asm("func_001369d0");

// 0x00136a18 func_00136a18
void func_00136a18() asm("func_00136a18");
void func_00136a18() {
    func_00136840();
    func_001369d0();
    *(u8*)(&D_00347d28) = 1;
    return;
}
