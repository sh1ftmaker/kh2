// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002f6440 func_002f6440
u32 func_002f6440(u32 a0, u32 a1) asm("func_002f6440");
u32 func_002f6440(u32 a0, u32 a1) {
    u32 a2_0;
    u32 a3_1;
    u32 t0;
    u32 t1;
    a2_0 = 0;
    a3_1 = 0;
    t0 = 0;
    t1 = 0;
    do {
        if (((s32)((((s32)(*(u8*)(a0)) >> t0) & 1)) != 0)) {
            *(u32*)(a1) = 1;
            *(u32*)((a1 + 8)) = t1;
            *(u32*)((a1 + 0xc)) = a3_1;
            if (((s32)(((u32)((a2_0 + -0x10)) < (u32)(0x10))) == 0)) {
                if (((u32)((a2_0 + -0x23)) < (u32)(4))) {
                    *(u32*)((a1 + 4)) = 8;
                    t1 = (t1 + 1);
                } else {
                    a3_1 = (a3_1 + 1);
                    *(u32*)((a1 + 4)) = 1;
                    if (((s32)((a3_1 & 7)) == 0)) {
                        t1 = (t1 + 1);
                        a3_1 = 0;
                    }
                }
            } else {
                *(u32*)((a1 + 4)) = 8;
                t1 = (t1 + 1);
            }
        } else {
            *(u32*)(a1) = 0;
            *(u32*)((a1 + 8)) = 0;
            *(u32*)((a1 + 0xc)) = 0;
        }
        t0 = (t0 + 1);
        a2_0 = (a2_0 + 1);
        if (((s32)((t0 & 7)) == 0)) {
            a0 = (a0 + 1);
            t0 = 0;
        }
        a1 = (a1 + 0x10);
    } while (((s32)(((s32)(a2_0) < (s32)(0x28))) != 0));
    return 1;
}
