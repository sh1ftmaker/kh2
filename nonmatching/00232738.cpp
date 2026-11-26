// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de20 asm("D_0035de20");
extern "C" u32 D_0035de2c asm("D_0035de2c");
extern "C" u32 D_0035de4c asm("D_0035de4c");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_00225b50(u32) asm("func_00225b50");
extern "C" u32 func_00225e48() asm("func_00225e48");
extern "C" u32 func_002baa20(u32) asm("func_002baa20");
extern "C" void func_002278e0(u32) asm("func_002278e0");
extern "C" void func_002326d0(u32) asm("func_002326d0");
extern "C" void func_00232718() asm("func_00232718");
extern "C" void func_002baa48(u32) asm("func_002baa48");

// 0x00232738 sa::EVENT::audio_ctrl()
void lift_00232738() asm("_ZN2sa5EVENT10audio_ctrlEv");
void lift_00232738() {
    u32 s1;
    u32 s2;
    u32 s0;
    u32 s5;
    u32 s5_0;
    u32 s5_1;
    u32 s5_2;
    u32 s5_3;
    u32 s0_4;
    u32 s3;
    u32 s5_5;
    u32 s5_6;
    if (((s32)(*(u32*)(&D_0035de4c)) != 0)) {
        if (((s32)(*(s16*)((*(u32*)(&D_0035de4c) + 4))) > 0)) {
            s1 = (*(u32*)(&D_0035de4c) + 8);
            s2 = *(s16*)((*(u32*)(&D_0035de4c) + 4));
            do {
                if ((*(s8*)((s1 + 6)) != 1)) {
                    if (((s32)(*(s8*)((s1 + 6))) < (s32)(2))) {
                        if ((*(s8*)((s1 + 6)) == 0)) {
                            if (((s32)(*(u32*)(&D_0035de20)) >= (s32)(*(s16*)((s1 + 4))))) {
                                if ((*(u32*)((*(u32*)(s1) + 4)) == 3)) {
                                    *(u8*)((s1 + 6)) = 1;
                                    s0 = *(u32*)(s1);
                                    s5 = *(u32*)(&D_0035de20);
                                    if ((func_00225e48() == 0)) {
                                        if ((func_00225b50(*(s16*)((s1 + 4))) == 0)) {
                                            if ((func_00225b00(*(s16*)((s1 + 4))) == 0)) {
                                                func_002326d0(s0);
                                                *(u32*)(&D_0035de2c) = (*(u32*)(&D_0035de2c) + 1);
                                            }
                                        }
                                    }
                                    s5_0 = s5;
                                } else {
                                    s5_0 = *(u32*)(&D_0035de20);
                                }
                                s5_1 = s5_0;
                            } else {
                                s5_1 = *(u32*)(&D_0035de20);
                            }
                            s5_2 = s5_1;
                        } else {
                            s5_2 = *(u32*)(&D_0035de20);
                        }
                        s5_3 = s5_2;
                    } else {
                        s5_3 = *(u32*)(&D_0035de20);
                    }
                    s5_6 = s5_3;
                } else {
                    s0_4 = *(s8*)((s1 + 6));
                    s3 = *(u32*)(s1);
                    s5_5 = *(u32*)(&D_0035de20);
                    if (((s32)(func_00225e48()) != 0)) {
                        if ((func_002baa20(*(u32*)((s3 + 0x14))) == s0_4)) {
                            func_002baa48(*(u32*)((s3 + 0x14)));
                            func_00232718();
                            func_002278e0(s3);
                            *(u8*)((s1 + 6)) = 2;
                        }
                    } else {
                        if (((s32)(func_002baa20(*(u32*)((s3 + 0x14)))) == 0)) {
                            func_00232718();
                            func_002278e0(s3);
                            *(u8*)((s1 + 6)) = 2;
                        }
                    }
                    s5_6 = s5_5;
                }
                s1 = (s1 + 0x20);
                s2 = (s2 + -1);
            } while (((s32)(s2) != 0));
        }
    }
    return;
}
