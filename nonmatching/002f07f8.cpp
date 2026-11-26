// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01e2c0c0 asm("D_01e2c0c0");
extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");
extern "C" u32 func_0011a900(u32, u32) asm("func_0011a900");

// 0x002f07f8 func_002f07f8
u32 func_002f07f8(u32 a0) asm("_ZN2kn35trap_chickenlittle_get_shoot_targetEP8BD_VALUE");
u32 func_002f07f8(u32 a0) {
    u8 frame[16];
    u32 v0;
    v0 = func_0011a900((u32)frame, func_0010c7e8(*(u32*)((*(u32*)(a0) + 4))));
    if (((u32)frame != (u32)&D_01e2c0c0)) {
        *(Q16*)((u32)&D_01e2c0c0) = *(Q16*)((u32)frame);
    }
    *(u32*)(a0) = (u32)&D_01e2c0c0;
    return v0;
}
