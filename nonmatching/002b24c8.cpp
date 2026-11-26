// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 D_0035f638 asm("D_0035f638");
extern "C" u32 D_00374cd0 asm("D_00374cd0");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_0023f988(u32, u32) asm("func_0023f988");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00292630(u32) asm("func_00292630");
extern "C" u32 func_002b23e0(u32) asm("func_002b23e0");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");
extern "C" void func_00239558(u32, u32, u32) asm("func_00239558");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_002b1bd0(u32) asm("func_002b1bd0");
extern "C" void func_002b2428(u32) asm("func_002b2428");
extern "C" void func_002b27c8() asm("func_002b27c8");
extern "C" void func_002b28b0(u32, u32, u32, u32) asm("func_002b28b0");
extern "C" void func_002b2a18() asm("func_002b2a18");
extern "C" void func_002b2da8(u32) asm("func_002b2da8");
extern "C" void func_002b3050(u32) asm("func_002b3050");

// 0x002b24c8 func_002b24c8
void func_002b24c8() asm("_ZN2Tz8JmPuzzle9UpdateGraEv");
void func_002b24c8() {
    u32 loc_10;
    u32 loc_14;
    u32 loc_28;
    u32 loc_24;
    u32 loc_18;
    u32 loc_2c;
    u32 s0;
    u32 t6;
    u32 loc_20;
    u32 loc_1c;
    u32 loc_30;
    u32 loc_34;
    u32 s2;
    u32 s2_0;
    u32 s3;
    u32 s5;
    u32 t5;
    u32 s0_1;
    u32 s6;
    u32 s7;
    u32 fp;
    u32 s1;
    u32 s5_2;
    u32 loc_0;
    u32 s3_3;
    u32 s6_4;
    if (((*(u32*)((*(u32*)(&D_0035f638) + 0x34)) & 0x100) == 0)) {
        if (((s32)(*(s8*)((*(u32*)(&D_0035f638) + 0x34))) >= 0)) {
            func_002b2428(*(s8*)((*(u32*)(&D_0035f638) + 0x34)));
        }
    } else {
        if (((s32)(*(s8*)((*(u32*)(&D_0035f638) + 0x34))) >= 0)) {
            if ((func_00292630(*(u32*)(&D_0035f638)) == 0)) {
                loc_10 = func_002766d0();
                loc_14 = 0;
                loc_28 = func_002b23e0(0xffffffff);
                func_002b27c8();
                loc_24 = (*(u32*)(&D_0035f634) + 0x52e0);
                loc_18 = (*(u32*)(&D_0035f3d4) + 2);
                loc_2c = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f210)), 6);
                s0 = (loc_10 + 0xdca0);
                func_002362b0(s0, func_0023f988(*(u32*)(&D_0035f638), 0));
                *(u8*)((s0 + 0x190)) = 1;
                t6 = (((*(u32*)(loc_28) >> 0x19) & 4) + (u32)&D_00374cd0);
                loc_20 = *(s16*)((t6 + 2));
                loc_1c = *(s8*)((t6 + 1));
                if (((s32)(*(s8*)((t6 + 1))) > 0)) {
                    loc_30 = 0;
                    loc_34 = 0;
                    do {
                        if (((s32)(*(s8*)(t6)) > 0)) {
                            s2_0 = (loc_34 * 0x198);
                            s3 = 0;
                            s5 = 0;
                            t5 = 0x360000;
                            do {
                                s0_1 = (*(u32*)((t5 + -0x9cc)) + s2_0);
                                s6 = *(s8*)(t6);
                                s7 = loc_30;
                                fp = loc_34;
                                func_001386e0(s0_1, loc_18, loc_2c, loc_10 + 0xdca0, 0, 0);
                                s1 = (s0_1 + 0x18);
                                if (((s32)(loc_14) == 0)) {
                                    if ((s3 == 0)) {
                                        *(u32*)((s1 + 0xb8)) = (*(u32*)((s1 + 0xb8)) | 8);
                                        *(u8*)((s0_1 + 0x195)) = 1;
                                    }
                                }
                                func_00139620(s0_1);
                                func_0028dcc0(s0_1, loc_24);
                                *(u32*)((s1 + 0xb8)) = ((*(u32*)((s1 + 0xb8)) & 0xffffdfff) | 0x2000);
                                s5_2 = (s5 + loc_20);
                                func_00138c68(s0_1, s5, s7);
                                func_002b28b0((*(u32*)(loc_28) >> 0x1b) & 1, fp + s3, 0, (u32)&loc_0);
                                s3_3 = (s3 + 1);
                                func_00239558(s1, (u32)&loc_0, (u32)&loc_0 + 8);
                                s2_0 = (s2_0 + 0x198);
                                s3 = s3_3;
                                s5 = s5_2;
                                t5 = 0x360000;
                            } while (((s32)(((s32)(s3_3) < (s32)(s6))) != 0));
                            s2 = s2_0;
                            s6_4 = s6;
                        } else {
                            s6_4 = *(s8*)(t6);
                        }
                        loc_14 = (loc_14 + 1);
                        loc_30 = (loc_30 + loc_20);
                        loc_34 = (loc_34 + s6_4);
                    } while (((s32)(((s32)(loc_14) < (s32)(loc_1c))) != 0));
                }
                func_002b1bd0(1);
                func_002b2a18();
                if (((s32)((*(u32*)(loc_28) & 0x4000000)) == 0)) {
                    func_002b2da8(0);
                    func_002b3050(1);
                }
                *(u8*)((*(u32*)(&D_0035f638) + 0x34)) = 0xffffffff;
                *(u32*)((*(u32*)(&D_0035f638) + 0x34)) = (*(u32*)((*(u32*)(&D_0035f638) + 0x34)) & 0xfffffeff);
            }
        }
    }
    return;
}
