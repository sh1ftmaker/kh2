// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00365c48 asm("D_00365c48");
extern "C" u32 D_003785f8 asm("D_003785f8");
extern "C" void func_00315440() asm("func_00315440");
extern "C" void func_00316d18(u32, u32) asm("func_00316d18");

// 0x003155c0 func_003155c0
void func_003155c0() asm("func_003155c0");
void func_003155c0() {
    func_00316d18((u32)&D_003785f8, *(u32*)((*(u32*)(&D_00365c48) + 0xc)));
    func_00315440();
}
