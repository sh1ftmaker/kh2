// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x001391a8 func_001391a8
void func_001391a8(u32 a0, u32 a1) asm("_ZN2dk8Sprite3D6setPosERKN2kn7FVectorE");
void func_001391a8(u32 a0, u32 a1) {
    if (((a0 + 0x1a0) != a1)) {
        *(Q16*)((a0 + 0x1a0)) = *(Q16*)(a1);
    }
    return;
}
