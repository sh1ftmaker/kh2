// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001c0410 func_001c0410
void func_001c0410(u32 a0, u32 a1, u32 a2) asm("_ZN2YS12ATTACK_CHECK19hit_interval_attackEPNS_6ATTACKEPKNS_11ATTACKPARAME");
void func_001c0410(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    t6 = 0;
    do {
        if (((s32)(*(u32*)((a0 + 0x30))) == 0)) {
            *(u32*)((a0 + 0x30)) = *(u32*)((a1 + 0x1c));
            *(f32*)((a0 + 0x34)) = (f32)((s32)(*(u16*)((a2 + 0x26))));
            return;
        }
        a0 = (a0 + 8);
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(4))) != 0));
    return;
}
