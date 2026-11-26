// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0018a970(u32, u32) asm("func_0018a970");
extern "C" void func_001902a8(u32, u32) asm("func_001902a8");

// 0x001906f0 YS::TARGET::get_dist(kn::FVector const&)
u32 lift_001906f0(u32 a0, u32 a1) asm("_ZN2YS6TARGET8get_distERKN2kn7FVectorE");
u32 lift_001906f0(u32 a0, u32 a1) {
    u8 frame[48];
    *(u32*)(((u32)frame + 0xc)) = 0;
    func_001902a8(a0, (u32)frame);
    *(Q16*)(((u32)frame + 0x20)) = *(Q16*)(a1);
    return func_0018a970((u32)frame, (u32)frame + 0x20);
}
