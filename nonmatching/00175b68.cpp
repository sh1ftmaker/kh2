// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00198690(u32) asm("func_00198690");
extern "C" void func_0016b010(u32, u32) asm("func_0016b010");

// 0x00175b68 YS::PARTY::_OVR_post_exec()
u32 lift_00175b68(u32 a0) asm("_ZN2YS5PARTY14_OVR_post_execEv");
u32 lift_00175b68(u32 a0) {
    Q16 loc_0;
    if (((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x84))))(a0)) != 0)) {
        loc_0 = *(Q16*)((a0 + 0x10));
        func_0016b010(a0, (u32)&loc_0);
    }
    return func_00198690(a0);
}
