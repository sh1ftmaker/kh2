// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366164 asm("D_00366164");
extern "C" u32 D_00378248 asm("D_00378248");
extern "C" u32 D_01e37280 asm("D_01e37280");
extern "C" u32 D_01e37ec0 asm("D_01e37ec0");
extern "C" u32 D_01e38980 asm("D_01e38980");
extern "C" u32 func_00305620(u32, u32) asm("func_00305620");
extern "C" u32 func_00309d60(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00309d60");
extern "C" void func_00305630(u32) asm("func_00305630");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_0030a2d0(u32, u32) asm("func_0030a2d0");
extern "C" void func_0030a300() asm("func_0030a300");
extern "C" void func_0030a3f8() asm("func_0030a3f8");

// 0x0030b9e0 u_call4_0030b9e0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_0030b9e0(u32 a0, u32 a1) asm("_Z16u_call4_0030b9e0jjjj");
u32 lift_0030b9e0(u32 a0, u32 a1) {
    u32 loc_30;
    u32 s0;
    u32 s0_0;
    u32 loc_14;
    u32 loc_8;
    u32 loc_24;
    u32 loc_18;
    u32 loc_0;
    u32 s1;
    u32 s0_1;
    u32 v0;
    u32 v0_2;
    u32 s0_3;
    u32 s1_4;
    u32 s0_5;
    u32 v0_6;
    u32 v0_7;
    func_0030a2d0(a1, a1);
    if ((*(u32*)(&D_00366164) == 0)) {
        func_0030a3f8();
    }
    *(u8*)(((u32)&D_01e37280 + 0xc)) = *(u8*)(a0);
    if (((s32)((*(u8*)(a0) << 0x18)) != 0)) {
        s0 = 1;
        do {
            if (((s32)(((s32)((s0 + 1)) < (s32)(0x400))) == 0)) {
                if (((s0 + 1) == 0x400)) {
                    *(u8*)(((u32)&D_01e37280 + 0x40b)) = 0;
                    s0_0 = 0x3ff;
                } else {
                    s0_0 = (s0 + 1);
                }
                loc_14 = 1;
                loc_18 = 0;
                loc_24 = (u32)&D_00378248;
                loc_0 = 0;
                loc_8 = 0;
                *(u32*)((u32)&D_01e37280) = func_00305620((u32)&loc_8 + 8, 0x380000);
                *(u32*)(((u32)&D_01e37280 + 4)) = (u32)&loc_30;
                *(u32*)(((u32)&D_01e37280 + 8)) = 4;
                s1 = func_00305620((u32)&loc_8 + 8, 0x380000);
                if (((s32)(func_00309d60((u32)&D_01e38980, a1, 0, (u32)&D_01e37280, s0_0 + 0xd, (u32)&D_01e37ec0, 4, 0)) < 0)) {
                    func_00305630(s1);
                    func_0030a300();
                    v0_2 = 0xfffffff5;
                } else {
                    s0_1 = *(u32*)(((u32)&D_01e37ec0 | 0x20000000));
                    func_0030a300();
                    if (((s32)(s0_1) == 0)) {
                        func_00305630(s1);
                        v0 = 0xfffffff5;
                    } else {
                        func_00305660(s1);
                        func_00305630(s1);
                        v0 = loc_30;
                    }
                    v0_2 = v0;
                }
                return v0_2;
            }
            *(u8*)((((u32)&D_01e37280 + (s0 + 1)) + 0xc)) = *(u8*)((a0 + (s0 + 1)));
            s0 = (s0 + 1);
        } while (((*(u8*)((a0 + s0)) << 0x18) != 0));
        s0_3 = s0;
    } else {
        s0_3 = 0;
    }
    if ((s0_3 == 0x400)) {
        *(u8*)(((u32)&D_01e37280 + 0x40b)) = 0;
        s0_3 = 0x3ff;
    }
    loc_14 = 1;
    loc_18 = 0;
    loc_24 = (u32)&D_00378248;
    loc_0 = 0;
    loc_8 = 0;
    *(u32*)((u32)&D_01e37280) = func_00305620((u32)&loc_8 + 8, 0x380000);
    *(u32*)(((u32)&D_01e37280 + 4)) = (u32)&loc_30;
    *(u32*)(((u32)&D_01e37280 + 8)) = 4;
    s1_4 = func_00305620((u32)&loc_8 + 8, 0x380000);
    if (((s32)(func_00309d60((u32)&D_01e38980, a1, 0, (u32)&D_01e37280, s0_3 + 0xd, (u32)&D_01e37ec0, 4, 0)) < 0)) {
        func_00305630(s1_4);
        func_0030a300();
        v0_7 = 0xfffffff5;
    } else {
        s0_5 = *(u32*)(((u32)&D_01e37ec0 | 0x20000000));
        func_0030a300();
        if (((s32)(s0_5) == 0)) {
            func_00305630(s1_4);
            v0_6 = 0xfffffff5;
        } else {
            func_00305660(s1_4);
            func_00305630(s1_4);
            v0_6 = loc_30;
        }
        v0_7 = v0_6;
    }
    return v0_7;
}
