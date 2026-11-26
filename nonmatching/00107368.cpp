// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x00107368 kn::Camera::getPosition(kn::FVector&) const
void lift_00107368(u32 a0, u32 a1) asm("_ZNK2kn6Camera11getPositionERNS_7FVectorE");
void lift_00107368(u32 a0, u32 a1) {
    if ((a1 != (a0 + 0x50))) {
        *(Q16*)(a1) = *(Q16*)((a0 + 0x50));
    }
    return;
}
