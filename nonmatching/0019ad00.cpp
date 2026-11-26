// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0019ad00 func_0019ad00
u32 func_0019ad00(u32 a0, u32 a1) asm("func_0019ad00");
u32 func_0019ad00(u32 a0, u32 a1) {
    u32 t4;
    u32 t6;
    u32 t7;
    if (((s32)(*(u16*)((*(u32*)((a0 + 8)) + 4))) != 0)) {
        t4 = 0;
        t6 = *(u32*)((a0 + 8));
        t7 = (0 << 6);
        do {
            if ((*(u8*)(((t7 + t6) + 0x48)) == 2)) {
                if ((*(u8*)(((t7 + t6) + 0x5c)) == a1)) {
                    return 1;
                }
            }
            t4 = (t4 + 1);
            t6 = *(u32*)((a0 + 8));
            t7 = (t4 << 6);
        } while (((s32)(t7) != 0));
    }
    return 0;
}
