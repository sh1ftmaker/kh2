// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f0a8 asm("D_0035f0a8");

// 0x00258ce8 func_00258ce8
void func_00258ce8(u32 a0) asm("_ZN2Tz6CmComm15InitConfirmMessEPKt");
void func_00258ce8(u32 a0) {
    u32 t5;
    u32 t6;
    if (((s32)(a0) == 0)) {
        *(u16*)(&D_0035f0a8) = 0xffff9fcf;
        *(u16*)(((u32)&D_0035f0a8 + 2)) = 0xffff9fd0;
        *(u16*)(((u32)&D_0035f0a8 + 4)) = 0xffff9fd1;
        return;
    } else {
        t5 = 2;
        t6 = (u32)&D_0035f0a8;
        do {
            *(u16*)((t6 + ((t5 - 2) * -2))) = *(u16*)(a0);
            a0 = (a0 + 2);
            t5 = (t5 + -1);
        } while (((s32)(t5) >= 0));
        return;
    }
}
