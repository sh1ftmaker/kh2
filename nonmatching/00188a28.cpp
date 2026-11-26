// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00188a28 func_00188a28
void func_00188a28(u32 a0, u32 a1) asm("func_00188a28");
void func_00188a28(u32 a0, u32 a1) {
    u32 t5;
    u32 t5_0;
    u32 t7;
    if (((s32)((*(u8*)((a0 + 0x12)) & 0xff)) != 0)) {
        t5 = 0;
        do {
            if ((*(u16*)(((a0 + (t5 * 2)) + 0x34)) == 0)) {
                if ((*(u16*)(((a0 + (t5 * 2)) + 0x44)) == a1)) {
                    *(u16*)(((a0 + (t5 * 2)) + 0x34)) = a1;
                    return;
                }
                if (((s32)(*(u16*)(((a0 + (t5 * 2)) + 0x44))) == 0)) {
                    if (((s32)((*(u8*)((a0 + 0x12)) & 0xff)) != 0)) {
                        t5_0 = 0;
                        t7 = *(u16*)((a0 + 0x44));
                        do {
                            if ((*(u16*)(((a0 + (t5_0 * 2)) + 0x44)) == a1)) {
                                *(u16*)(((a0 + (t5 * 2)) + 0x44)) = a1;
                                *(u16*)(((a0 + (t5 * 2)) + 0x34)) = a1;
                                return;
                            }
                            t5_0 = (t5_0 + 1);
                            t7 = ((s32)(t5_0) < (s32)((*(u8*)((a0 + 0x12)) & 0xff)));
                        } while ((t7 != 0));
                    }
                    *(u16*)(((a0 + (t5 * 2)) + 0x34)) = a1;
                    return;
                }
            }
            t5 = (t5 + 1);
        } while (((s32)(((s32)(t5) < (s32)((*(u8*)((a0 + 0x12)) & 0xff)))) != 0));
        return;
    } else {
        return;
    }
}
