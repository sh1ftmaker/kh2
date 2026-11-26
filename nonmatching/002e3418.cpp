// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002e3418 wtarget_002e3418(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002e3418(u32 a0, u32 a1, u32 a2, u32 a3) asm("_Z16wtarget_002e3418jjjj");
void lift_002e3418(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 a0_0;
    u32 t1;
    u32 t5;
    u32 t7;
    if (((s32)(*(u32*)((a0 + 8))) != 0)) {
        if (((s32)(*(u32*)((a0 + 8))) > 0)) {
            a0_0 = (a0 + 0x10);
            t1 = 0;
            do {
                if ((*(u8*)((a0_0 + 1)) == a3)) {
                    if (((s32)((*(u16*)((a0_0 + 2)) & 0xffff)) != 0)) {
                        t5 = 0;
                        t7 = *(u16*)((a0_0 + 4));
                        do {
                            if ((*(u16*)(((a0_0 + (t5 * 8)) + 4)) == a1)) {
                                if ((*(u16*)((((a0_0 + (t5 * 8)) + 4) + 4)) == a2)) {
                                    return;
                                }
                            }
                            t5 = (t5 + 1);
                            t7 = ((s32)(t5) < (s32)((*(u16*)((a0_0 + 2)) & 0xffff)));
                        } while ((t7 != 0));
                    }
                }
                a0_0 = ((a0_0 + ((*(u16*)((a0_0 + 2)) & 0xffff) << 3)) + 4);
                t1 = (t1 + 1);
            } while (((s32)(((s32)(t1) < (s32)(*(u32*)((a0 + 8))))) != 0));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
