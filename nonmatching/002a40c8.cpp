// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5e8 asm("D_0035f5e8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x002a40c8 func_002a40c8
u32 func_002a40c8() asm("_ZN2Tz10JmTreasure11isExistListEv");
u32 func_002a40c8() {
    u32 v0;
    u32 s0;
    u32 s3;
    u32 a0_0;
    u32 s1;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 a0_5;
    u32 s3_6;
    u32 s0_7;
    u32 v0_8;
    u32 v0_9;
    v0 = func_00139d78(*(u32*)(&D_0035f5e8) + 0x72c0);
    if ((v0 == 0)) {
        s0 = (0 * 0xcc0);
        s3 = 0;
        do {
            a0_0 = *(u32*)(&D_0035f5e8);
            s1 = 0;
            do {
                v0_1 = func_00139d78(s0 + a0_0);
                if (((s32)(v0_1) != 0)) {
                    return v0_1;
                }
                a0_0 = *(u32*)(&D_0035f5e8);
                s0 = (s0 + 0x198);
                s1 = (s1 + 1);
            } while (((s32)(((s32)(s1) < (s32)(8))) != 0));
            s0 = ((s3 + 1) * 0xcc0);
            s3 = (s3 + 1);
        } while (((s32)(((s32)(s3) < (s32)(9))) != 0));
        v0_2 = func_00139d78(*(u32*)(&D_0035f5e8) + 0x7458);
        if ((v0_2 == 0)) {
            v0_3 = func_00139d78(*(u32*)(&D_0035f5e8) + 0x760c);
            if ((v0_3 == 0)) {
                v0_4 = func_00139d78(*(u32*)(&D_0035f5e8) + 0x77c0);
                if ((v0_4 == 0)) {
                    a0_5 = *(u32*)(&D_0035f5e8);
                    s3_6 = 0;
                    s0_7 = 0;
                    do {
                        v0_8 = func_00139d78((a0_5 + (s0_7 + (s3_6 * 0x1b4))) + 0x7974);
                        if (((s32)(v0_8) != 0)) {
                            v0_4 = v0_8;
                            break;
                        }
                        v0_9 = func_00139d78((*(u32*)(&D_0035f5e8) + (s0_7 + (s3_6 * 0x1b4))) + 0x88c8);
                        if (((s32)(v0_9) != 0)) {
                            v0_4 = v0_9;
                            break;
                        }
                        a0_5 = *(u32*)(&D_0035f5e8);
                        s3_6 = (s3_6 + 1);
                        v0_4 = v0_9;
                    } while (((s32)(((s32)(s3_6) < (s32)(9))) != 0));
                }
                v0_3 = v0_4;
            }
            v0_2 = v0_3;
        }
        v0 = v0_2;
    }
    return v0;
}
