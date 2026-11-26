// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0018c528(u32) asm("func_0018c528");
extern "C" u32 func_00198450(u32) asm("func_00198450");
extern "C" u32 func_0019b308(u32) asm("func_0019b308");

// 0x0018ad18 func_0018ad18
u32 func_0018ad18(u32 a0) asm("_ZN2YS3NPC15_OVR_initializeEv");
u32 func_0018ad18(u32 a0) {
    u32 v0;
    u32 t3;
    u32 t7;
    u8 t7_0;
    u32 t7_1;
    u32 s3;
    u32 v0_2;
    u32 s1;
    u32 v0_3;
    v0 = func_00198450(a0);
    if (((s32)(*(u32*)((a0 + 0x81c))) == 0)) {
        t7_1 = *(u32*)((a0 + 0xb04));
    } else {
        t3 = 0;
        t7 = *(u32*)((a0 + 0x81c));
        for (;;) {
            t7_0 = (((s32)(*(u32*)((t7 + 0x24))) >> t3) & 1);
            if (((s32)(t7_0) != 0)) {
                *(u32*)(((a0 + 0xb04) + ((t3 >> 5) << 2))) = (*(u32*)(((a0 + 0xb04) + ((t3 >> 5) << 2))) | (1 << (t3 & 0x1f)));
            }
            if (((u32)((t3 + 1)) >= (u32)(7))) {
                break;
            }
            t3 = (t3 + 1);
            t7 = *(u32*)((a0 + 0x81c));
        }
        t7_1 = t7;
    }
    if (((s32)((t7_1 & 1)) != 0)) {
        *(u32*)((a0 + 0xa40)) = 2;
        *(u32*)((a0 + 0xa44)) = 0;
        *(u32*)((a0 + 0xa48)) = 0;
        s3 = *(u16*)((*(u32*)((*(u32*)((a0 + 0x818)) + 8)) + 0xa));
        v0_2 = func_0019b308(*(u32*)((a0 + 0x818)));
        if (((s32)(s3) != 0)) {
            s1 = v0_2;
            do {
                if (((*(u32*)(s1) & 0xff0000ff) == 0x4000000)) {
                    v0_3 = func_0018c528(*(u8*)((s1 + 1)));
                    *(u32*)((a0 + 0xa48)) = v0_3;
                    v0_2 = v0_3;
                }
                s3 = (s3 + -1);
                s1 = (s1 + 0x10);
            } while (((s32)(s3) != 0));
        }
        v0 = v0_2;
    }
    return v0;
}
