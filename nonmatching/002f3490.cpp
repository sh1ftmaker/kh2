// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003767d0 asm("D_003767d0");
extern "C" u32 D_00ffffff asm("D_00ffffff");
extern "C" void func_002f3c28(u32) asm("func_002f3c28");
extern "C" void func_003080d0(u32) asm("func_003080d0");

// 0x002f3490 func_002f3490
void func_002f3490(u32 a0) asm("func_002f3490");
void func_002f3490(u32 a0) {
    u32 s1;
    if (((s32)((*(u32*)(a0) & 0x100)) != 0)) {
        s1 = (u32)&D_00ffffff;
        do {
            if (((s32)(s1) < 0)) {
                func_003080d0((u32)&D_003767d0);
                func_002f3c28(a0);
            }
            s1 = (s1 + -1);
        } while (((s32)((*(u32*)(a0) & 0x100)) != 0));
    }
    return;
}
