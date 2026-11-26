// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00341708 asm("D_00341708");

// 0x00111d98 wtarget_00111d98(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00111d98(u32 a0) asm("_Z16wtarget_00111d98jjjj");
void lift_00111d98(u32 a0) {
    u32 t4;
    u32 t5;
    u32 t3;
    u32 t7;
    t4 = (u32)&D_00341708;
    t5 = 0;
    do {
        if ((t5 != 0)) {
            if ((*(u32*)(t4) == a0)) {
                t3 = 1;
                t7 = (t5 + 1);
                do {
                    t3 = (t3 + 1);
                    t7 = (((s32)(t7) % 3) << 2);
                    if (((s32)(((s32)(t7) % 3)) != 0)) {
                        t7 = (t7 + (u32)&D_00341708);
                        if (((s32)(*(u32*)(t7)) != 0)) {
                            return;
                        }
                    }
                    t7 = (t5 + t3);
                } while (((s32)(((s32)(t3) < (s32)(3))) != 0));
            }
        }
        t5 = (t5 + 1);
        t4 = (t4 + 4);
    } while (((s32)(((s32)(t5) < (s32)(3))) != 0));
    return;
}
