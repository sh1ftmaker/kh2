// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 D_00351eb8 asm("D_00351eb8");
extern "C" u32 D_00351ec0 asm("D_00351ec0");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001b8fd8(u32, u32) asm("func_001b8fd8");
extern "C" u32 func_001bbf40() asm("func_001bbf40");
extern "C" u32 func_001c8db8(u32, u32) asm("func_001c8db8");
extern "C" u32 func_001c9b38(u32) asm("func_001c9b38");

// 0x001bc568 func_001bc568
u32 func_001bc568(u32 a0, u32 a1) asm("_ZN2YS12COMMAND_SLOT8CanDriveEPKNS_12COMMAND_ELEMEPNS_6PLAYERE");
u32 func_001bc568(u32 a0, u32 a1) {
    u32 v0;
    u32 a0_0;
    u32 v0_1;
    u32 a0_2;
    u32 a0_3;
    u32 a0_4;
    u32 a0_5;
    u32 a0_6;
    u32 a0_7;
    u32 a0_8;
    u32 a0_9;
    u32 a0_10;
    u32 a0_11;
    if (((s32)(func_001b8fd8(a0, a1)) == 0)) {
        if ((func_001c8db8((u32)&D_00351eb8, 0) == 0)) {
            if (((s32)(func_001c8db8((u32)&D_00351ec0, 0)) == 0)) {
                if (((s32)(func_0019ba60(a1)) != 0)) {
                    if (((s32)((*(u32*)((a1 + 0x588)) & 0x1000000)) != 0)) {
                        if ((func_001c9b38(a0) == 0)) {
                            if (((*(u32*)((*(u32*)((a1 + 0xc)) + 8)) & 0x20) == 0)) {
                                if ((*(u32*)((a1 + 0xb50)) != 7)) {
                                    if ((*(u32*)((a1 + 0xb50)) == 0xc)) {
                                        a0_3 = 0;
                                    } else {
                                        if ((*(s16*)((a0 + 4)) == 3)) {
                                            if (((s32)(func_001bbf40()) == 0)) {
                                                v0 = ((s32)((*(u32*)(&D_0034f240) & 0x40000)) == 0) ? ((u32)(((u32)(*(u8*)((*(u32*)((a1 + 0x48c)) + 0x1b1))) < (u32)(*(u8*)((a0 + 0x1c))))) < (u32)(1)) : 0;
                                                a0_0 = v0;
                                            } else {
                                                a0_0 = 0;
                                            }
                                            a0_2 = a0_0;
                                        } else {
                                            v0_1 = ((s32)((*(u32*)(&D_0034f240) & 0x40000)) == 0) ? ((u32)(((u32)(*(u8*)((*(u32*)((a1 + 0x48c)) + 0x1b1))) < (u32)(*(u8*)((a0 + 0x1c))))) < (u32)(1)) : 0;
                                            a0_2 = v0_1;
                                        }
                                        a0_3 = a0_2;
                                    }
                                    a0_4 = a0_3;
                                } else {
                                    a0_4 = 0;
                                }
                                a0_5 = a0_4;
                            } else {
                                a0_5 = 0;
                            }
                            a0_6 = a0_5;
                        } else {
                            a0_6 = 0;
                        }
                        a0_7 = a0_6;
                    } else {
                        a0_7 = 0;
                    }
                    a0_8 = a0_7;
                } else {
                    a0_8 = 0;
                }
                a0_9 = a0_8;
            } else {
                a0_9 = 0;
            }
            a0_10 = a0_9;
        } else {
            a0_10 = 0;
        }
        a0_11 = a0_10;
    } else {
        a0_11 = 1;
    }
    return a0_11;
}
