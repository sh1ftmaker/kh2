// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a400 asm("D_0034a400");
extern "C" u32 D_0034a408 asm("D_0034a408");
extern "C" void func_002bc358(u32, u32) asm("func_002bc358");

// 0x0014eda8 func_0014eda8
void func_0014eda8() asm("_ZN2dk9POLYGONSE7destroyEv");
void func_0014eda8() {
    u32 s1;
    u32 t7;
    u32 s0;
    if (((s32)(*(u32*)(&D_0034a400)) > 0)) {
        s1 = 0;
        t7 = *(u32*)((u32)&D_0034a408);
        s0 = (u32)&D_0034a408;
        do {
            if ((*(u32*)((s0 + (s1 * 4))) != 0xffffffff)) {
                func_002bc358(*(u32*)((s0 + (s1 * 4))), 1);
            }
            s1 = (s1 + 1);
            t7 = ((s32)(s1) < (s32)(*(u32*)(&D_0034a400)));
        } while ((t7 != 0));
    }
    return;
}
