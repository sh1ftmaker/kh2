// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00145c68 func_00145c68
void func_00145c68(u32 a0, u8 a1) asm("func_00145c68");
void func_00145c68(u32 a0, u8 a1) {
    u32 t4;
    u32 t5;
    u32 t7;
    u32 t7_0;
    if (((s32)(*(u32*)((a0 + 0x14))) > 0)) {
        t4 = 0;
        t5 = *(u32*)((a0 + 0x14));
        t7 = *(u32*)((a0 + 8));
        do {
            if ((*(u8*)(((t4 + *(u32*)((a0 + 8))) + 1)) == a1)) {
                *(u8*)((t4 + *(u32*)((a0 + 8)))) = 1;
            }
            t7_0 = (t4 + *(u32*)((a0 + 8)));
            t4 = (t4 + 0x1c);
            t5 = (t5 + -1);
            t7 = t7_0;
        } while ((t5 != 0));
    }
    return;
}
