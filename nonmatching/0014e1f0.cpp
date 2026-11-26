// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349f00 asm("D_00349f00");
extern "C" u32 func_0014dc08(u32) asm("func_0014dc08");
extern "C" u32 func_0014dd10(u32) asm("func_0014dd10");
extern "C" void func_00166930(u32, u32) asm("func_00166930");

// 0x0014e1f0 func_0014e1f0(int, int)
u32 lift_0014e1f0(u32 a0, u32 a1) asm("_Z13func_0014e1f0ii");
u32 lift_0014e1f0(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00166930((u32)&D_00349f00 + 0x2e0, a1);
            v0 = func_0014dc08((u32)&D_00349f00 + 0x2f0);
            *(u8*)(((u32)&D_00349f00 + 0x4d0)) = 0xffffff80;
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            v0_2 = func_0014dd10((u32)&D_00349f00 + 0x2f0);
            v0_1 = v0_2;
        }
    }
    return v0_1;
}
