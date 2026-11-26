// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x0016b070 wtarget_0016b070(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0016b070(u32 a0, u32 a1) asm("_Z16wtarget_0016b070jjjj");
void lift_0016b070(u32 a0, u32 a1) {
    if (((a0 + 0x550) != a1)) {
        *(Q16*)((a0 + 0x550)) = *(Q16*)(a1);
    }
    *(f32*)((a0 + 0x55c)) = *(f32*)((a1 + 4));
    *(u32*)((a0 + 0x7f8)) = (*(u32*)((a0 + 0x7f8)) | 8);
    return;
}
