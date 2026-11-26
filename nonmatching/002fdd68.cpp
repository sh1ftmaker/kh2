// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x002fdd68 func_002fdd68
u32 func_002fdd68(u32 a0, u32 a1, u32 a2) asm("func_002fdd68");
u32 func_002fdd68(u32 a0, u32 a1, u32 a2) {
    u32 a3_0;
    u32 a0_1;
    u32 a2_2;
    a3_0 = a0;
    if (((s32)(((u32)(a2) < (u32)(0x20))) == 0)) {
        if ((((a1 | a0) & 0xf) == 0)) {
            do {
                *(Q16*)(a3_0) = *(Q16*)(a1);
                *(Q16*)((a3_0 + 0x10)) = *(Q16*)((a1 + 0x10));
                a1 = ((a1 + 0x10) + 0x10);
                a2 = (a2 + -0x20);
                a3_0 = ((a3_0 + 0x10) + 0x10);
            } while (((s32)(((u32)(a2) < (u32)(0x20))) == 0));
            if (((s32)(((u32)(a2) < (u32)(8))) == 0)) {
                do {
                    *(u64*)(a3_0) = *(u64*)(a1);
                    a1 = (a1 + 8);
                    a2 = (a2 + -8);
                    a3_0 = (a3_0 + 8);
                } while (((s32)(((u32)(a2) < (u32)(8))) == 0));
            }
        }
    }
    a0_1 = 0xffffffff;
    a2_2 = (a2 + -1);
    while ((a2_2 != a0_1)) {
        *(u8*)(a3_0) = *(u8*)(a1);
        a1 = (a1 + 1);
        a2_2 = (a2_2 + -1);
        a3_0 = (a3_0 + 1);
    }
    return a0;
}
