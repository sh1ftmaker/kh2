// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d48cc8 asm("D_01d48cc8");
extern "C" void func_001b8450(u32, u32, u32) asm("func_001b8450");

// 0x001b8680 func_001b8680
u32 func_001b8680(u32 a0, u32 a1) asm("func_001b8680");
u32 func_001b8680(u32 a0, u32 a1) {
    u32 t6;
    u32 t6_0;
    u32 t7;
    u32 s0;
    u32 s0_1;
    u32 s0_2;
    t6 = *(u32*)(((u32)&D_01d48cc8 + 0xc0));
    t6_0 = (t6 + -1);
    *(u32*)(((u32)&D_01d48cc8 + 0xc0)) = t6_0;
    t7 = (t6_0 << 2);
    s0 = *(u32*)(((t7 + (u32)&D_01d48cc8) + 0xa0));
    s0_1 = (s0 * 0x14);
    s0_2 = (s0_1 + (u32)&D_01d48cc8);
    func_001b8450(s0_2, a0, a1);
    return s0_2;
}
