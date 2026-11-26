// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00363550 asm("D_00363550");
extern "C" u32 D_01e2c060 asm("D_01e2c060");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" void func_002eb6f8(u32, u32, f32) asm("func_002eb6f8");

// 0x002eca38 func_002eca38
u32 func_002eca38(u32 a0, u32 a1) asm("_ZN2Ts25ACTION_SKATEBOARDRIDEEDGE5startEPN2YS3OBJE");
u32 func_002eca38(u32 a0, u32 a1) {
    u32 v0;
    func_002eb6f8(a1, 0x10d, 0.0f);
    *(f32*)(&D_01e2c060) = 0.0f;
    v0 = func_0016c028(a1);
    if ((v0 != (u32)&D_00363550)) {
        *(Q16*)((u32)&D_00363550) = *(Q16*)(v0);
    }
    return v0;
}
