// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00188b68 YS::PARTRAM::add_ability(int, bool)
void lift_00188b68(u32 a0, u32 a1, u8 a2) asm("_ZN2YS7PARTRAM11add_abilityEib");
void lift_00188b68(u32 a0, u32 a1, u8 a2) {
    u32 t6;
    t6 = 0;
    do {
        if (((*(u16*)((((a0 + (t6 * 2)) + 0x50) + 4)) & 0x7fff) == 0)) {
            *(u16*)((((a0 + (t6 * 2)) + 0x50) + 4)) = ((a1 & 0x7fff) | (((u32)(0) < (u32)(a2)) << 0xf));
            return;
        }
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(0x50))) != 0));
    return;
}
