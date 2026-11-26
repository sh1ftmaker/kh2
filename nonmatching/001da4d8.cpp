// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001da4d8 func_001da4d8
u32 func_001da4d8(u32 a0, u32 a1) asm("func_001da4d8");
u32 func_001da4d8(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    u32 v0;
    u32 v0_0;
    u32 t5;
    u32 t5_1;
    u32 v0_2;
    u32 t5_3;
    u32 v0_4;
    u32 t5_5;
    u32 v0_6;
    u32 t5_7;
    u32 v0_8;
    u32 v0_9;
    t6 = *(u32*)((a0 + 4));
    t7 = (t6 << 1);
    *(u32*)((a0 + 4)) = (t6 + 1);
    if ((((a1 & 0xffff) >> 6) != 1)) {
        if (((s32)(((a1 & 0xffff) >> 6)) < (s32)(2))) {
            v0 = (((a1 & 0xffff) >> 6) != 0) ? 0 : *(u32*)((a0 + 8));
            t5_5 = *(u16*)(((t7 + *(u32*)(a0)) + 0x10));
            v0_6 = v0;
        } else {
            if ((((a1 & 0xffff) >> 6) != 2)) {
                if ((((a1 & 0xffff) >> 6) == 3)) {
                    v0_0 = *(u32*)(a0);
                    t5 = *(u16*)(((t7 + *(u32*)(a0)) + 0x10));
                    t5_1 = (t5 << 1);
                    v0_2 = (v0_0 + 0x10);
                } else {
                    t5_1 = *(u16*)(((t7 + *(u32*)(a0)) + 0x10));
                    v0_2 = 0;
                }
                t5_3 = t5_1;
                v0_4 = v0_2;
            } else {
                t5_3 = *(u16*)(((t7 + *(u32*)(a0)) + 0x10));
                v0_4 = *(u32*)(*(u32*)((a0 + 8)));
            }
            t5_5 = t5_3;
            v0_6 = v0_4;
        }
        t5_7 = t5_5;
        v0_8 = v0_6;
    } else {
        t5_7 = *(u16*)(((t7 + *(u32*)(a0)) + 0x10));
        v0_8 = *(u32*)((a0 + 0x10));
    }
    v0_9 = (v0_8 + t5_7);
    return v0_9;
}
