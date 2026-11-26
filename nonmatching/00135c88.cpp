// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00135c88 func_00135c88
u32 func_00135c88(u32 a0, u32 a1) asm("_ZN2kn11ObjObserver8getIndexEPN2YS3OBJE");
u32 func_00135c88(u32 a0, u32 a1) {
    u32 t5;
    u32 t7;
    u32 t7_0;
    if (((s32)(*(u32*)((a0 + 0xc))) > 0)) {
        t5 = 0;
        t7 = *(u32*)((a0 + 0x10));
        do {
            if ((*(u32*)(((a0 + (t5 * 4)) + 0x10)) == a1)) {
                return t5;
            }
            t7_0 = *(u32*)(((a0 + (t5 * 4)) + 0x10));
            t5 = (t5 + 1);
            t7 = t7_0;
        } while (((s32)(t5) < (s32)(*(u32*)((a0 + 0xc)))));
    }
    return 0xffffffff;
}
