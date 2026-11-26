// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_001902a8(u32, u32) asm("func_001902a8");

// 0x00190388 func_00190388
u32 func_00190388(u32 a0, u32 a1) asm("_ZNK2YS6TARGET7get_posEv");
u32 func_00190388(u32 a0, u32 a1) {
    u8 frame[32];
    *(u32*)(((u32)frame + 0xc)) = 0;
    func_001902a8(a1, (u32)frame);
    *(Q16*)(a0) = *(Q16*)(((u32)frame + 0x10));
    return a0;
}
