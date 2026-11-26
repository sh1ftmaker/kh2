// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" u32 func_001de2e0(u32, u32, u32, u32, u32) asm("func_001de2e0");

// 0x001a3b48 YS::EFFECT::CategoryStart(ryj::PAX*, unsigned long long, kn::FVector const&, int, int, int)
u32 lift_001a3b48(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2YS6EFFECT13CategoryStartEPN3ryj3PAXEyRKN2kn7FVectorEiii");
u32 lift_001a3b48(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 t7;
    v0 = func_001de2e0(a0, a1, a2, a3, a4);
    if (((s32)(v0) >= 0)) {
        v0_0 = func_001de168(a0, v0, a3, a4, a5, 0);
        if (((s32)(v0_0) != 0)) {
            v0_1 = func_001dc5f8(v0_0);
            if ((v0_1 != a2)) {
                *(Q16*)(v0_1) = *(Q16*)(a2);
            }
        }
        t7 = v0_0;
    } else {
        t7 = 0;
    }
    return t7;
}
