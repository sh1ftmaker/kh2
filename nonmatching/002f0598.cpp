// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_0017c4c8(u32, u32) asm("func_0017c4c8");

// 0x002f0598 wtarget_002f0598(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_002f0598(u32 a0, u32 a1) asm("_Z16wtarget_002f0598jjjj");
u32 lift_002f0598(u32 a0, u32 a1) {
    Q16 loc_0;
    loc_0 = *(Q16*)(a1);
    func_0017c4c8(a0, (u32)&loc_0);
    return func_0016bd60(a0, 0x3f);
}
