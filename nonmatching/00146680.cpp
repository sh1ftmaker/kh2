// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x00146680 func_00146680
void func_00146680(u32 a0, u32 a1) asm("func_00146680");
void func_00146680(u32 a0, u32 a1) {
    if ((a0 != a1)) {
        *(Q16*)(a0) = *(Q16*)(a1);
        *(Q16*)((a0 + 0x10)) = *(Q16*)((a1 + 0x10));
        *(Q16*)((a0 + 0x20)) = *(Q16*)((a1 + 0x20));
        *(Q16*)((a0 + 0x30)) = *(Q16*)((a1 + 0x30));
    }
    return;
}
