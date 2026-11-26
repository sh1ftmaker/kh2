// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f620 asm("D_0035f620");
extern "C" u32 D_0035f628 asm("D_0035f628");
extern "C" u32 D_0035f62c asm("D_0035f62c");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_002a99c8(u32) asm("func_002a99c8");

// 0x002ad6e8 Tz::JmComplete::CheckQuest()
void lift_002ad6e8() asm("_ZN2Tz10JmComplete10CheckQuestEv");
void lift_002ad6e8() {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 t7;
    u32 t7_0;
    u32 s1_1;
    v0 = func_00294000(8);
    *(u32*)(&D_0035f628) = (*(u32*)(&D_0035f628) + *(u32*)((v0 + 8)));
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        s0 = (v0 + 0x10);
        s1 = 0;
        do {
            if ((func_002a99c8(s0) == 2)) {
                t7 = (*(u32*)(&D_0035f620) + 0x94);
                t7_0 = (t7 + ((s1 >> 5) << 2));
                *(u32*)(t7_0) = (*(u32*)(t7_0) | (1 << (s1 & 0x1f)));
                *(u32*)(&D_0035f62c) = (*(u32*)(&D_0035f62c) + 1);
            }
            s1_1 = (s1 + 1);
            s0 = (s0 + 0x10);
            s1 = s1_1;
        } while (((s32)(((s32)(s1_1) < (s32)(*(u32*)((v0 + 8))))) != 0));
    }
    return;
}
