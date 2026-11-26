// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" void func_001700e8(u32, u32) asm("func_001700e8");

// 0x001703a8 wtarget_001703a8(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001703a8(u32 a0) asm("_Z16wtarget_001703a8jjjj");
void lift_001703a8(u32 a0) {
    u32 a0_0;
    u32 s1;
    a0_0 = *(u32*)(&D_0034dca0);
    while (((s32)(a0_0) != 0)) {
        s1 = *(u32*)((a0_0 + 0x3c));
        if ((*(u32*)((a0_0 + 0x28)) == a0)) {
            func_001700e8(a0_0, 1);
        }
        a0_0 = s1;
    }
    return;
}
