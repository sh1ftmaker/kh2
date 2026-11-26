// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00347ce0 asm("D_00347ce0");

// 0x00135670 func_00135670
void func_00135670(u32 a0) asm("func_00135670");
void func_00135670(u32 a0) {
    if ((a0 != (u32)&D_00347ce0)) {
        *(Q16*)(a0) = *(Q16*)((u32)&D_00347ce0);
    }
    return;
}
