// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f244 asm("D_0035f244");
extern "C" u32 D_0035f248 asm("D_0035f248");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x0027e770 func_0027e770
void func_0027e770() asm("_ZN2Tz10SimpleStat5LeaveEv");
void func_0027e770() {
    u32 s0;
    u32 s3;
    u32 t7;
    u32 s0_0;
    u32 s1;
    u32 s0_1;
    u32 s1_2;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f244))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f244)) + 0x14))))(*(u32*)(&D_0035f244));
    }
    s0 = 0x360000;
    s3 = 0;
    t7 = 0x13fc;
    do {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f248) + (s3 * 0x13fc))) != 0)) {
            func_00139510(*(u32*)(&D_0035f248) + (s3 * 0x13fc));
        }
        if (((s32)(func_00139d78((*(u32*)(&D_0035f248) + (s3 * 0x13fc)) + 0x1b4)) != 0)) {
            func_00139510((*(u32*)(&D_0035f248) + (s3 * 0x13fc)) + 0x1b4);
        }
        s0_0 = (s3 * 0x13fc);
        s1 = 1;
        do {
            if (((s32)(func_00139d78((s0_0 + *(u32*)(&D_0035f248)) + 0x34c)) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s0_0 + *(u32*)(&D_0035f248)) + 0x34c)) + 0x14))))((s0_0 + *(u32*)(&D_0035f248)) + 0x34c);
            }
            if ((func_00139d78((s0_0 + *(u32*)(&D_0035f248)) + 0x67c) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s0_0 + *(u32*)(&D_0035f248)) + 0x67c)) + 0x14))))((s0_0 + *(u32*)(&D_0035f248)) + 0x67c);
            }
            s0_0 = (s0_0 + 0x198);
            s1 = (s1 + -1);
        } while (((s32)(s1) >= 0));
        s0_1 = (s3 * 0x13fc);
        s1_2 = 2;
        do {
            if (((s32)(func_00139d78((s0_1 + *(u32*)(&D_0035f248)) + 0x9ac)) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s0_1 + *(u32*)(&D_0035f248)) + 0x9ac)) + 0x14))))((s0_1 + *(u32*)(&D_0035f248)) + 0x9ac);
            }
            if ((func_00139d78((s0_1 + *(u32*)(&D_0035f248)) + 0xec8) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s0_1 + *(u32*)(&D_0035f248)) + 0xec8)) + 0x14))))((s0_1 + *(u32*)(&D_0035f248)) + 0xec8);
            }
            s0_1 = (s0_1 + 0x1b4);
            s1_2 = (s1_2 + -1);
        } while (((s32)(s1_2) >= 0));
        s0 = s0_1;
        s3 = (s3 + 1);
        t7 = ((s32)(s3) < (s32)(4));
    } while ((t7 != 0));
    return;
}
