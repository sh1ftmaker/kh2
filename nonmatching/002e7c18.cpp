// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_002e9d08(u32, u32, u32, u32, u32, u32, u32) asm("func_002e9d08");

// 0x002e7c18 func_002e7c18
u32 func_002e7c18(u32 a0) asm("_ZN2Ts27trap_target_seracher_searchEP8BD_VALUE");
u32 func_002e7c18(u32 a0) {
    u8 frame[32];
    *(Q16*)((u32)frame) = *(Q16*)(*(u32*)((a0 + 0xc)));
    *(Q16*)(((u32)frame + 0x10)) = *(Q16*)(*(u32*)((a0 + 8)));
    return func_002e9d08(*(u32*)(a0), *(u32*)((a0 + 4)), (u32)frame + 0x10, (u32)frame, (u32)(0) < (u32)(*(u32*)((a0 + 0x10))), (u32)(0) < (u32)(*(u32*)((a0 + 0x14))), (u32)(0) < (u32)(*(u32*)((a0 + 0x18))));
}
