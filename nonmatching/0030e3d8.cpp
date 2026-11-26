// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e38c48 asm("D_01e38c48");
extern "C" u32 D_01e38e40 asm("D_01e38e40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" u32 func_0030dd70(u32) asm("func_0030dd70");
extern "C" u32 func_0030de70() asm("func_0030de70");
extern "C" void func_002ff6f0(u32, u32, u32) asm("func_002ff6f0");

// 0x0030e3d8 func_0030e3d8
u32 func_0030e3d8(u32 a0) asm("func_0030e3d8");
u32 func_0030e3d8(u32 a0) {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(func_0030dd70(a0)) >= 0)) {
        v0 = func_0030de70();
        if ((v0 != 0)) {
            v0 = 0xfffefffc;
        } else {
            func_002ff6f0((u32)&D_01e38c48, a0, 0xfc);
            *(u8*)((((u32)&D_01e38c48 + -8) + 0x103)) = 0;
            *(u32*)((u32)frame) = 0;
            v0_0 = func_003094b8((u32)&D_01e38e40, 9, 0, (u32)&D_01e38c48 + -8, 0x200, (u32)&D_01e38c48 + -8, 4, 0);
            v0_0 = ((s32)(v0_0) < 0) ? 0xfffeffff : *(u32*)(((u32)&D_01e38c48 + -8));
            v0 = v0_0;
        }
        v0_1 = v0;
    } else {
        v0_1 = 0xffff0000;
    }
    return v0_1;
}
