// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001a22b0 func_001a22b0
u32 func_001a22b0(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZNK2YS5SHEET22adjust_element_abilityEiPKS0_PKNS_11ATTACKPARAME");
u32 func_001a22b0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 a3_0;
    u32 t7;
    u32 t7_1;
    u32 t7_2;
    if (((s32)(a2) != 0)) {
        a3_0 = *(u8*)((a3 + 9));
        if ((a3_0 != 2)) {
            if (((s32)(((s32)(a3_0) < (s32)(3))) != 0)) {
                if ((a3_0 != 1)) {
                    return a1;
                } else {
                    t7 = *(u16*)((a2 + 0x210));
                    return ((s32)(((a1 * t7) + 0x63)) / 0x64);
                }
            } else {
                if ((a3_0 != 3)) {
                    return a1;
                } else {
                    t7_1 = *(u16*)((a2 + 0x214));
                    return ((s32)(((a1 * t7_1) + 0x63)) / 0x64);
                }
            }
        } else {
            t7_2 = *(u16*)((a2 + 0x212));
            return ((s32)(((a1 * t7_2) + 0x63)) / 0x64);
        }
    } else {
        return a1;
    }
}
