// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d48da0 asm("D_01d48da0");

// 0x001ba028 YS::OBJ::is_valid()
u32 lift_001ba028(u32 a0) asm("_ZN2YS3OBJ8is_validEv");
u32 lift_001ba028(u32 a0) {
    u32 t6;
    u32 t7;
    t6 = 0;
    while ((t7 = (t6 == 0) ? *(u32*)(&D_01d48da0) : *(u32*)((t6 + 0x8b4))), (t6 = t7), ((s32)(t7) != 0)) {
        if ((t7 == a0)) {
            return 1;
        }
    }
    return 0;
}
