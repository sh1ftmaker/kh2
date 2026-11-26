// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f12c asm("D_0035f12c");
extern "C" u32 D_00373aa8 asm("D_00373aa8");
extern "C" u32 D_01e21ed0 asm("D_01e21ed0");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_002595b8(u32, u32, u32) asm("func_002595b8");
extern "C" u32 func_00271710(u32, u32, u32, u32, u32) asm("func_00271710");
extern "C" u32 func_00271828(u32, u32) asm("func_00271828");
extern "C" u32 func_00272c20(u32) asm("func_00272c20");
extern "C" u32 func_00273140(u32) asm("func_00273140");
extern "C" u32 func_00273180(u32, u32) asm("func_00273180");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" u32 func_002fde18(u32, u32, u32) asm("func_002fde18");
extern "C" void func_002713a0(u32, u32, u32) asm("func_002713a0");

// 0x002713c8 ttarget0_002713c8()
u32 lift_002713c8() asm("_Z17ttarget0_002713c8v");
u32 lift_002713c8() {
    u8 frame[80];
    u32 t6;
    u32 t7;
    u32 s1;
    u32 s7;
    u32 s0;
    u32 t7_0;
    u32 t7_1;
    u32 t6_2;
    u32 v0;
    u32 s7_3;
    u32 t7_4;
    u32 t7_5;
    u32 fp;
    u32 s1_6;
    u32 s5;
    u32 s3;
    u32 s4;
    u32 t6_7;
    u32 t6_8;
    u32 t6_9;
    u32 s6;
    u32 s6_10;
    u32 s6_11;
    u32 t7_12;
    u32 t5;
    u32 t7_13;
    u32 t6_14;
    u32 t6_15;
    u32 t7_16;
    u32 t6_17;
    u32 t7_18;
    u32 t6_19;
    u32 t7_20;
    u32 t6_21;
    u32 t7_22;
    u32 v0_23;
    u32 v0_24;
    u32 t6_25;
    u32 t6_26;
    u32 a0_27;
    u32 a0_28;
    u32 t7_29;
    u32 v0_30;
    u32 t7_31;
    u32 v0_32;
    u32 t7_33;
    u32 t7_34;
    *(u32*)(((u32)frame + 0x24)) = func_00287bc0();
    *(u32*)(((u32)frame + 0x38)) = func_00257770();
    t6 = *(u32*)(((u32)frame + 0x24));
    if ((t6 == 0x19)) {
        *(u32*)(((u32)frame + 0x28)) = func_0028b040(*(u32*)(&D_0035f01c));
    } else {
        *(u32*)(((u32)frame + 0x28)) = func_00257070(0x19);
    }
    t7 = *(u32*)(((u32)frame + 0x20));
    func_002713a0(*(u32*)(((u32)frame + 0x28)), (u32)&D_01e21ed0, (u32)frame + 0x20);
    if (((s32)(t7) > 0)) {
        s1 = 0x1e20000;
        s7 = 0;
        s0 = (u32)frame;
        do {
            t7_0 = *(u32*)((s1 + 0x1ed0));
            *(u32*)((s0 + (s7 * 4))) = func_00272c20(*(s8*)((t7_0 + s7)));
            t7_1 = *(u32*)(((u32)frame + 0x20));
            s7 = (s7 + 1);
        } while (((s32)(((s32)(s7) < (s32)(t7_1))) != 0));
    }
    *(u32*)(((u32)frame + 0x34)) = 0;
    func_002fde18(*(u32*)(((u32)frame + 0x38)) + 0xae10, 0, 0x300);
    *(u32*)(((u32)frame + 0x30)) = 0;
    t6_2 = *(u32*)(((u32)frame + 0x20));
    v0 = func_002fde18(*(u32*)(((u32)frame + 0x38)) + 0xb110, 0, 0x60);
    if (((s32)(t6_2) > 0)) {
        *(u32*)(((u32)frame + 0x40)) = (u32)frame;
        s7_3 = 0;
        t7_4 = *(u32*)(((u32)frame + 0x40));
        do {
            t7_5 = *(u32*)(t7_4);
            *(u32*)(((u32)frame + 0x2c)) = t7_5;
            if (((s32)(t7_5) > 0)) {
                fp = 0;
                s1_6 = (*(u32*)(((u32)frame + 0x34)) << 3);
                s5 = ((*(u32*)(((u32)frame + 0x30)) << 5) + *(u32*)(((u32)frame + 0x38)));
                s3 = ((*(u32*)(((u32)frame + 0x30)) << 5) + *(u32*)(((u32)frame + 0x38)));
                s4 = ((*(u32*)(((u32)frame + 0x30)) << 2) + *(u32*)(((u32)frame + 0x38)));
                do {
                    t6_7 = *(u32*)(&D_01e21ed0);
                    *(u32*)(((u32)frame + 0x3c)) = 0xffffffff;
                    t6_8 = *(s8*)((t6_7 + s7_3));
                    if ((t6_8 != 1)) {
                        if (((s32)(t6_8) < (s32)(2))) {
                            if (((s32)(t6_8) == 0)) {
                                t6_9 = *(u32*)(((u32)frame + 0x24));
                                if ((t6_9 == 0x19)) {
                                    *(u32*)(((u32)frame + 0x3c)) = *(s8*)((fp + (u32)&D_00373aa8));
                                }
                                s6 = 1;
                            } else {
                                s6 = 0;
                            }
                            s6_10 = s6;
                        } else {
                            s6_10 = 0;
                        }
                        s6_11 = s6_10;
                    } else {
                        s6_11 = 1;
                    }
                    t7_12 = *(u32*)(&D_01e21ed0);
                    t5 = *(s8*)((t7_12 + s7_3));
                    if ((t5 != 3)) {
                        t7_13 = *(u32*)(&D_0035f12c);
                        t6_14 = *(s16*)(((s1_6 + t7_13) + 8));
                        if (((s32)(t6_14) != 0)) {
                            t6_15 = *(u8*)((func_00273140(*(u32*)(((u32)frame + 0x34))) + 2));
                            if ((t6_15 == 0x12)) {
                                t7_16 = *(u32*)(&D_0035f12c);
                            } else {
                                t6_17 = *(u32*)(&D_0035f12c);
                                t7_18 = *(s8*)(((s1_6 + t6_17) + 0xa));
                            }
                        } else {
                            t6_19 = *(u32*)(&D_0035f12c);
                            t7_20 = *(s8*)(((s1_6 + t6_19) + 0xa));
                        }
                        t6_21 = *(u32*)(&D_0035f12c);
                        t7_22 = *(u32*)(((u32)frame + 0x34));
                        *(u32*)(((u32)frame + 0x34)) = (t7_22 + 1);
                        v0_23 = func_00271710(*(s16*)(((s1_6 + t6_21) + 8)), (s3 + (fp * 0x20)) + 0xae10, s6_11, (u32)(*(s8*)(((s1_6 + t7_16) + 0xa))) < (u32)(1), *(u32*)(((u32)frame + 0x3c)));
                        s1_6 = (s1_6 + 8);
                        v0 = v0_23;
                    } else {
                        v0_24 = func_00271828(*(s8*)((*(u32*)(&D_0035f12c) + 3)), (s5 + (fp * 0x20)) + 0xae10);
                        v0 = v0_24;
                    }
                    t6_25 = *(u32*)(((u32)frame + 0x28));
                    if (((s32)(t6_25) != 0)) {
                        t6_26 = *(u32*)(&D_01e21ed0);
                        a0_27 = *(s8*)((t6_26 + s7_3));
                        if ((a0_27 != 2)) {
                            a0_28 = *(s8*)((t6_26 + s7_3));
                            if ((a0_28 == 4)) {
                                t7_29 = *(u32*)(&D_0035f12c);
                                v0_30 = func_002595b8(*(u8*)((func_00273180(*(s8*)((t6_26 + s7_3)), *(s8*)(((s1_6 + t7_29) + 3))) + 4)), (s4 + (fp * 4)) + 0xb110, 1);
                                v0 = v0_30;
                            }
                        } else {
                            t7_31 = *(u32*)(&D_0035f12c);
                            v0_32 = func_002595b8(*(u8*)((func_00273180(*(s8*)((t6_26 + s7_3)), *(s8*)(((s1_6 + t7_31) + 3))) + 4)), (s4 + (fp * 4)) + 0xb110, 1);
                            v0 = v0_32;
                        }
                    }
                    t7_33 = *(u32*)(((u32)frame + 0x30));
                    *(u32*)(((u32)frame + 0x30)) = (t7_33 + 1);
                    fp = (fp + 1);
                } while (((s32)(((s32)(fp) < (s32)(*(u32*)(((u32)frame + 0x2c))))) != 0));
                t6_2 = *(u32*)(((u32)frame + 0x20));
            }
            t7_34 = *(u32*)(((u32)frame + 0x40));
            *(u32*)(((u32)frame + 0x40)) = (t7_34 + 4);
            s7_3 = (s7_3 + 1);
            t7_4 = *(u32*)(((u32)frame + 0x40));
        } while (((s32)(t7_4) != 0));
    }
    return v0;
}
