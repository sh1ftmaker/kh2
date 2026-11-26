// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x0011a918 func_0011a918
void func_0011a918(u32 a0, u32 a1) asm("_ZN2kn13ChickenLittle16set_shoot_targetERKNS_7FVectorE");
void func_0011a918(u32 a0, u32 a1) {
    if (((a0 + 0x40) != a1)) {
        *(Q16*)((a0 + 0x40)) = *(Q16*)(a1);
    }
    return;
}
