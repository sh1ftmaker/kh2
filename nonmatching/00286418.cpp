// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2e4 asm("D_0035f2e4");
extern "C" u32 func_002812e0(u32) asm("func_002812e0");

// 0x00286418 func_00286418
u32 func_00286418(u32 a0) asm("_ZN2Tz8CmNewFlg9isStatNewEi");
u32 func_00286418(u32 a0) {
    u32 s0;
    u32 s1;
    u32 t5;
    u32 s0_1;
    u32 v0;
    if (((s32)(a0) >= 0)) {
        s0 = ((u32)(0) < (u32)((*(u32*)(((*(u32*)(&D_0035f2e4) + ((a0 >> 5) << 2)) + 0xc8)) & (1 << (a0 & 0x1f)))));
        if (((s32)(func_002812e0(a0)) != 0)) {
            if (((s32)(a0) < (s32)(5))) {
                s0 = 0;
            }
        }
        v0 = s0;
    } else {
        s1 = 0;
        t5 = *(u32*)(&D_0035f2e4);
        do {
            s0_1 = ((u32)(0) < (u32)((*(u32*)(((t5 + ((s1 >> 5) << 2)) + 0xc8)) & (1 << (s1 & 0x1f)))));
            if (((s32)(func_002812e0(a0)) != 0)) {
                s0_1 = (((s32)(s1) < (s32)(5)) ? 0 : s0_1);
            }
            if (((s32)(s0_1) != 0)) {
                return s0_1;
            }
            s1 = (s1 + 1);
            t5 = *(u32*)(&D_0035f2e4);
        } while (((s32)(((s32)(s1) < (s32)(9))) != 0));
        v0 = s0_1;
    }
    return v0;
}
