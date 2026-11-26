// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x0010f9f0 func_0010f9f0
void func_0010f9f0(u32 a0, u32 a1, u8 a2) asm("_ZN2kn6Friend11setMovementERKNS_7FVectorEb");
void func_0010f9f0(u32 a0, u32 a1, u8 a2) {
    u32 t7;
    if (((a0 + 0xc00) != a1)) {
        *(Q16*)((a0 + 0xc00)) = *(Q16*)(a1);
    }
    if (((s32)(a2) != 0)) {
        *(u32*)((a0 + 0xb7c)) |= 0x80;
    } else {
        *(u32*)((a0 + 0xb7c)) &= 0xffffff7f;
    }
    return;
}
