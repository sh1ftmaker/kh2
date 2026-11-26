// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x001a49a0 func_001a49a0
void func_001a49a0(u32 a0, u32 a1, u32 a2) asm("func_001a49a0");
void func_001a49a0(u32 a0, u32 a1, u32 a2) {
    if (((a0 + 0xe0) != a1)) {
        *(Q16*)((a0 + 0xe0)) = *(Q16*)(a1);
    }
    if (((a0 + 0xf0) != a2)) {
        *(Q16*)((a0 + 0xf0)) = *(Q16*)(a2);
    }
    *(u32*)((a0 + 4)) = (*(u32*)((a0 + 4)) | 0x20);
    return;
}
