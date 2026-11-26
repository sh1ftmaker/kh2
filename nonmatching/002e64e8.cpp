// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002e64e8 func_002e64e8
u32 func_002e64e8(u8 a0, u8 a1, u32 a2) asm("func_002e64e8");
u32 func_002e64e8(u8 a0, u8 a1, u32 a2) {
    u32 a2_0;
    u32 t5;
    if (((s32)(*(u32*)((a2 + 0xc))) > 0)) {
        a2_0 = (a2 + 0x10);
        t5 = 0;
        do {
            if ((*(u8*)(a2_0) == a0)) {
                if ((*(u8*)((a2_0 + 1)) == a1)) {
                    return t5;
                }
            }
            a2_0 = (a2_0 + *(u32*)((a2_0 + 0xc)));
            t5 = (t5 + 1);
        } while (((s32)(((s32)(t5) < (s32)(*(u32*)((a2 + 0xc))))) != 0));
    }
    return 0xffffffff;
}
