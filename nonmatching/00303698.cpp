// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00303698 func_00303698
u32 func_00303698(u32 a0, u32 a1) asm("func_00303698");
u32 func_00303698(u32 a0, u32 a1) {
    u32 s2;
    u32 s3;
    u32 s1;
    u32 s1_0;
    u32 s0;
    s2 = (a0 + 0x1d8);
    s3 = 0;
    if (((s32)(s2) != 0)) {
        s1 = *(u32*)((s2 + 4));
        do {
            s1_0 = (*(u32*)((s2 + 4)) + -1);
            s0 = *(u32*)((s2 + 8));
            while (((s32)(s1_0) >= 0)) {
                if ((*(s16*)((s0 + 0xc)) != 0)) {
                    s3 = (s3 | ((u32(*)(u32, u32))(a1))(s0, a1));
                }
                s0 = (s0 + 0x58);
                s1_0 = (s1_0 + -1);
            }
            s1 = s1_0;
            s2 = *(u32*)(s2);
        } while ((s2 != 0));
    }
    return s3;
}
