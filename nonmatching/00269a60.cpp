// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f018 asm("D_0035f018");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f0ec asm("D_0035f0ec");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257130(u32) asm("func_00257130");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00269508(u32) asm("func_00269508");
extern "C" u32 func_002695a0(u32) asm("func_002695a0");
extern "C" u32 func_0026a178(u32, u32) asm("func_0026a178");
extern "C" u32 func_002811b0(u32, u32) asm("func_002811b0");
extern "C" u32 func_00281f18(u32) asm("func_00281f18");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" u32 func_00291068(u32, u32, u32, u32, u32, u32) asm("func_00291068");
extern "C" u32 func_00291110(u32, u32, u32, u32, u32, u32, u32) asm("func_00291110");
extern "C" u32 func_00291358(u32) asm("func_00291358");
extern "C" void func_00263a58(u32, u32) asm("func_00263a58");
extern "C" void func_002817b8() asm("func_002817b8");
extern "C" void func_00281cf0(u32) asm("func_00281cf0");

// 0x00269a60 func_00269a60
u32 func_00269a60() asm("_ZN2Tz7CmEquip14UpdateHelpMessEv");
u32 func_00269a60() {
    u32 s6;
    u32 s1;
    u32 v0;
    u32 s5;
    u32 s5_0;
    u32 s5_1;
    u32 s5_2;
    u32 s5_3;
    u32 s5_4;
    u32 s5_5;
    u32 s5_6;
    u32 s5_7;
    u32 s5_8;
    u32 s4;
    u32 v0_9;
    u32 s4_10;
    u32 v0_11;
    u32 s0;
    u32 s4_12;
    u32 v0_13;
    u32 s3;
    u32 a0_14;
    u32 s0_15;
    u32 v0_16;
    u32 s0_17;
    u32 s0_18;
    u32 v0_19;
    u32 s0_20;
    u32 s0_21;
    s6 = func_00257770();
    s1 = func_00287bc0();
    v0 = func_0028b040(*(u32*)(&D_0035f01c));
    if ((s1 != 2)) {
        if (((s32)(((u32)((s1 + -5)) < (u32)(2))) != 0)) {
            if ((func_00281f18(*(u32*)(&D_0035f0ec)) != 0)) {
                if (((s32)(func_0026a178(v0, 0xffffffff)) == 0)) {
                    s5_0 = 1;
                } else {
                    if (((s32)(*(u16*)(func_0026a178(v0, 0xffffffff))) == 0)) {
                        s5 = 1;
                    } else {
                        s5 = 0;
                    }
                    s5_0 = s5;
                }
                s5_1 = s5_0;
            } else {
                s5_1 = 1;
            }
            s5_5 = s5_1;
        } else {
            if (((s32)(v0) != 0)) {
                if ((func_0026a178(v0 + -1, 0xffffffff) != 0)) {
                    if (((s32)(*(u16*)(func_0026a178(v0 + -1, 0xffffffff))) == 0)) {
                        s5_2 = 1;
                    } else {
                        s5_2 = 0;
                    }
                    s5_3 = s5_2;
                } else {
                    s5_3 = 1;
                }
                s5_4 = s5_3;
            } else {
                s5_4 = 1;
            }
            s5_5 = s5_4;
        }
        s5_8 = s5_5;
    } else {
        if (((s32)(func_0026a178(v0, 0xffffffff)) == 0)) {
            s5_7 = 1;
        } else {
            if (((s32)(*(u16*)(func_0026a178(v0, 0xffffffff))) == 0)) {
                s5_6 = 1;
            } else {
                s5_6 = 0;
            }
            s5_7 = s5_6;
        }
        s5_8 = s5_7;
    }
    func_00263a58((*(u16*)((func_0026a178(v0, 0xffffffff) + 0xa)) | 0xffff8000) & 0xffff, 1);
    if ((s1 == 2)) {
        s4 = func_002811b0(*(u32*)(&D_0035f010), func_00257070(1));
        v0_9 = func_0028b040(*(u32*)(&D_0035f01c));
        s0 = v0_9;
        s4_12 = s4;
        v0_13 = v0_9;
    } else {
        s4_10 = func_002811b0(*(u32*)(&D_0035f010), func_00257070(1));
        v0_11 = func_00257070(2);
        s0 = v0_11;
        s4_12 = s4_10;
        v0_13 = v0_11;
    }
    if ((func_00269508(v0_13) == 1)) {
        s3 = func_002695a0(s0);
    } else {
        s3 = 0;
    }
    if (((s32)(s5_8) != 0)) {
        func_002817b8();
        if ((s1 == 2)) {
            return func_00291358(*(u32*)(&D_0035f018));
        } else {
            s0_15 = func_00281f20(func_00257130(a0_14));
            v0_16 = func_002570a0(2);
            s0_17 = *(u16*)(((v0_16 * 6) + s0_15));
            return func_00291110(*(u32*)(&D_0035f018), 3, *(u16*)(((v0_16 * 6) + s0_15)), 0, s6 + 0xb350, s4_12, s3);
        }
    } else {
        func_00281cf0(*(u16*)((func_0026a178(v0 - ((u32)((s1 + -7)) < (u32)(3)), 0xffffffff) + 0x14)));
        if ((s1 == 2)) {
            return func_00291068(*(u32*)(&D_0035f018), 1, *(u16*)(func_0026a178(v0 - ((u32)((s1 + -7)) < (u32)(3)), 0xffffffff)), s6 + 0xb350, s4_12, s3);
        } else {
            s0_18 = func_00281f20(func_00257130(v0 - ((u32)((s1 + -7)) < (u32)(3))));
            v0_19 = func_002570a0(2);
            if (((s32)(((u32)((s1 + -5)) < (u32)(2))) != 0)) {
                s0_20 = *(u16*)(((v0_19 * 6) + s0_18));
            } else {
                s0_21 = *(u16*)(((v0_19 * 6) + s0_18));
            }
            return func_00291110(*(u32*)(&D_0035f018), 3, s0_20, *(u16*)(func_0026a178(v0 - ((u32)((s1 + -7)) < (u32)(3)), 0xffffffff)), s6 + 0xb350, s4_12, s3);
        }
    }
}
