// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f404 asm("D_0035f404");
extern "C" u32 D_0035f40c asm("D_0035f40c");

// 0x0028d068 wtarget_0028d068(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0028d068(u32 a0, u32 a1) asm("_Z16wtarget_0028d068jjjj");
void lift_0028d068(u32 a0, u32 a1) {
    u32 t7;
    u32 t5;
    u32 t4;
    u32 t3;
    if (((s32)(a1) < 0)) {
        if (((s32)(*(u32*)(&D_0035f404)) > 0)) {
            t7 = *(u32*)(&D_0035f40c);
            t5 = 0;
            t4 = 0x360000;
            t3 = 0x360000;
            do {
                *(u32*)(((t5 << 2) + *(u32*)((t4 + -0xbf4)))) = a0;
                t5 = (t5 + 1);
                t7 = ((s32)(t5) < (s32)(*(u32*)((t3 + -0xbfc))));
            } while ((t7 != 0));
        }
        return;
    } else {
        *(u32*)(((a1 << 2) + *(u32*)(&D_0035f40c))) = a0;
        return;
    }
}
