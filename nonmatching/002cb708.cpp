// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2be18 asm("D_01e2be18");
extern "C" u32 func_00325320(u32, u32) asm("func_00325320");
extern "C" void func_00105110(u32) asm("func_00105110");

// 0x002cb708 Ti::Path::~Path()
u32 lift_002cb708(u32 a0) asm("_ZN2Ti4PathD1Ev");
u32 lift_002cb708(u32 a0) {
    func_00105110(*(u32*)((a0 + 0x80)));
    return func_00325320((u32)&D_01e2be18, a0);
}
