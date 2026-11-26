// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x00107300 func_00107300
void func_00107300(u32 a0, u32 a1, u32 a2, f32 fa0) asm("_ZN2kn6Camera6lookAtERKNS_7FVectorES3_f");
void func_00107300(u32 a0, u32 a1, u32 a2, f32 fa0) {
    if (((a0 + 0x50) != a1)) {
        *(Q16*)((a0 + 0x50)) = *(Q16*)(a1);
    }
    if (((a0 + 0x60) != a2)) {
        *(Q16*)((a0 + 0x60)) = *(Q16*)(a2);
    }
    *(f32*)((a0 + 0x80)) = fa0;
    return;
}
