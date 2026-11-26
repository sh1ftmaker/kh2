// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_001a4ff8(u32, u32) asm("func_001a4ff8");

// 0x001c7950 YS::PRIZEEFFECT::can_get(YS::BTLOBJ*, float, float)
void lift_001c7950(u32 a0, u32 a1) asm("_ZN2YS11PRIZEEFFECT7can_getEPNS_6BTLOBJEff");
void lift_001c7950(u32 a0, u32 a1) {
    Q16 loc_0;
    if (((s32)((*(u32*)((a0 + 0x28)) & 1)) != 0)) {
        loc_0 = *(Q16*)(a0);
        *(f32*)(((u32)&loc_0 + 4)) = (*(f32*)(((u32)&loc_0 + 4)) + *(f32*)((*(u32*)((a0 + 0x4c)) + 4)));
        func_001a4ff8(a1, (u32)&loc_0);
    }
    return;
}
