// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f038 asm("D_0035f038");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x002577b0 func_002577b0
u32 func_002577b0() asm("func_002577b0");
u32 func_002577b0() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 a0_6;
    u32 s2;
    u32 s3;
    u32 s0;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    if (((s32)(*(u32*)(&D_0035f038)) != 0)) {
        v0 = func_00139d78(*(u32*)(&D_0035f038));
        if ((v0 == 0)) {
            v0_0 = func_00139d78(*(u32*)(&D_0035f038) + 0x198);
            if ((v0_0 == 0)) {
                v0_1 = func_00139d78(*(u32*)(&D_0035f038) + 0x330);
                if ((v0_1 == 0)) {
                    v0_2 = func_00139d78(*(u32*)(&D_0035f038) + 0x4c8);
                    if ((v0_2 == 0)) {
                        v0_3 = func_00139d78(*(u32*)(&D_0035f038) + 0x660);
                        if ((v0_3 == 0)) {
                            v0_4 = func_00139d78(*(u32*)(&D_0035f038) + 0x814);
                            if ((v0_4 == 0)) {
                                v0_5 = func_00139d78(*(u32*)(&D_0035f038) + 0x9c8);
                                if ((v0_5 == 0)) {
                                    a0_6 = *(u32*)(&D_0035f038);
                                    s2 = 0;
                                    s3 = 0;
                                    s0 = 0;
                                    do {
                                        v0_7 = func_00139d78((a0_6 + (s0 + (s2 * 0x1b4))) + 0xd30);
                                        if ((v0_7 != 0)) {
                                            v0_5 = v0_7;
                                            break;
                                        }
                                        v0_8 = func_00139d78((*(u32*)(&D_0035f038) + (s0 + (s2 * 0x1b4))) + 0x3610);
                                        if ((v0_8 != 0)) {
                                            v0_5 = v0_8;
                                            break;
                                        }
                                        v0_9 = func_00139d78((*(u32*)(&D_0035f038) + (s0 + (s2 * 0x1b4))) + 0x5ef0);
                                        if ((v0_9 != 0)) {
                                            v0_5 = v0_9;
                                            break;
                                        }
                                        v0_10 = func_00139d78((*(u32*)(&D_0035f038) + (s3 + (s2 * 0x198))) + 0x87d0);
                                        if ((v0_10 != 0)) {
                                            v0_5 = v0_10;
                                            break;
                                        }
                                        a0_6 = *(u32*)(&D_0035f038);
                                        s2 = (s2 + 1);
                                        v0_5 = v0_10;
                                    } while (((s32)(((s32)(s2) < (s32)(0x18))) != 0));
                                }
                                v0_4 = v0_5;
                            }
                            v0_3 = v0_4;
                        }
                        v0_2 = v0_3;
                    }
                    v0_1 = v0_2;
                }
                v0_0 = v0_1;
            }
            v0 = v0_0;
        }
        v0_11 = v0;
    } else {
        v0_11 = 0;
    }
    return v0_11;
}
