// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5e8 asm("D_0035f5e8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x002a41f0 func_002a41f0
void func_002a41f0() asm("_ZN2Tz10JmTreasure9LeaveListEv");
void func_002a41f0() {
    u32 s3;
    u32 s0;
    u32 s1;
    u32 s3_0;
    u32 s0_1;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f5e8) + 0x72c0)) != 0)) {
        func_00139510(*(u32*)(&D_0035f5e8) + 0x72c0);
    }
    s3 = 0;
    s0 = (0 * 0xcc0);
    do {
        s1 = 7;
        do {
            if (((s32)(func_00139d78(s0 + *(u32*)(&D_0035f5e8))) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0 + *(u32*)(&D_0035f5e8))) + 0x14))))(s0 + *(u32*)(&D_0035f5e8));
            }
            s1 = (s1 + -1);
            s0 = (s0 + 0x198);
        } while (((s32)(s1) >= 0));
        s3 = (s3 + 1);
        s0 = (s3 * 0xcc0);
    } while (((s32)(((s32)(s3) < (s32)(9))) != 0));
    if (((s32)(func_00139d78(*(u32*)(&D_0035f5e8) + 0x7458)) != 0)) {
        func_00139510(*(u32*)(&D_0035f5e8) + 0x7458);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f5e8) + 0x760c)) != 0)) {
        func_00139510(*(u32*)(&D_0035f5e8) + 0x760c);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f5e8) + 0x77c0)) != 0)) {
        func_00139510(*(u32*)(&D_0035f5e8) + 0x77c0);
    }
    s3_0 = 8;
    s0_1 = 0;
    do {
        if (((s32)(func_00139d78((*(u32*)(&D_0035f5e8) + s0_1) + 0x7974)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0_1 + *(u32*)(&D_0035f5e8)) + 0x7974)) + 0x14))))((s0_1 + *(u32*)(&D_0035f5e8)) + 0x7974);
        }
        if (((s32)(func_00139d78((*(u32*)(&D_0035f5e8) + s0_1) + 0x88c8)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0_1 + *(u32*)(&D_0035f5e8)) + 0x88c8)) + 0x14))))((s0_1 + *(u32*)(&D_0035f5e8)) + 0x88c8);
        }
        s3_0 = (s3_0 + -1);
        s0_1 = (s0_1 + 0x1b4);
    } while (((s32)(s3_0) >= 0));
    return;
}
