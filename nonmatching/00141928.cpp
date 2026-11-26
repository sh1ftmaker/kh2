// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00141928 func_00141928
void func_00141928(u32 a0, u8 a1) asm("func_00141928");
void func_00141928(u32 a0, u8 a1) {
    u32 t4;
    u32 t5;
    u32 t7;
    u32 t7_0;
    if (((s32)(*(u32*)((a0 + 0x24))) > 0)) {
        t4 = 0;
        t5 = *(u32*)((a0 + 0x24));
        t7 = *(u32*)((a0 + 8));
        do {
            if ((*(u8*)(((t4 + *(u32*)((a0 + 8))) + 0x11)) == a1)) {
                *(u8*)(((t4 + *(u32*)((a0 + 8))) + 0x10)) = 1;
            }
            t7_0 = (t4 + *(u32*)((a0 + 8)));
            t4 = (t4 + 0x14);
            t5 = (t5 + -1);
            t7 = t7_0;
        } while ((t5 != 0));
    }
    return;
}
