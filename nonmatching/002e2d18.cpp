// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 func_002e26c0(u32) asm("func_002e26c0");
extern "C" void func_002ceb08(u32) asm("func_002ceb08");

// 0x002e2d18 Ti::MG_EHSidecar::MoveToBeforePoint()
void lift_002e2d18() asm("_ZN2Ti12MG_EHSidecar17MoveToBeforePointEv");
void lift_002e2d18() {
    u32 s0;
    s0 = *(u32*)(&D_00361f60);
    if (((s32)(s0) != 0)) {
        func_002ceb08(s0);
    }
    func_002e26c0(s0);
    return;
}
