// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00372c30 asm("D_00372c30");

// 0x00259510 func_00259510
void func_00259510(u32 a0) asm("_ZN2Tz6CmComm10GetPadIconEi");
void func_00259510(u32 a0) {
    u32 t4;
    u32 t6;
    if ((*(s16*)(&D_00372c30) != 0xffffffff)) {
        t4 = 0;
        t6 = (u32)&D_00372c30;
        do {
            if ((*(s16*)(t6) == a0)) {
                t4 = (t4 + 1);
                return;
            }
            t4 = (t4 + 1);
            t6 = ((t4 << 2) + (u32)&D_00372c30);
            t6 = ((t4 << 2) + (u32)&D_00372c30);
        } while ((*(s16*)(t6) != 0xffffffff));
        return;
    } else {
        return;
    }
}
