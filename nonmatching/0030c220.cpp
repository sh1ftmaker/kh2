// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366164 asm("D_00366164");
extern "C" u32 D_003782a8 asm("D_003782a8");
extern "C" u32 D_01e37280 asm("D_01e37280");
extern "C" u32 D_01e37ec0 asm("D_01e37ec0");
extern "C" u32 D_01e38980 asm("D_01e38980");
extern "C" u32 func_00305620(u32) asm("func_00305620");
extern "C" u32 func_00309d60(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00309d60");
extern "C" u32 func_00309e50() asm("func_00309e50");
extern "C" void func_00305630(u32) asm("func_00305630");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_0030a2d0(u32) asm("func_0030a2d0");
extern "C" void func_0030a300() asm("func_0030a300");

// 0x0030c220 func_0030c220
u32 func_0030c220() asm("func_0030c220");
u32 func_0030c220() {
    u32 s0;
    u32 loc_8;
    u32 loc_14;
    u32 loc_24;
    u32 loc_18;
    u32 loc_30;
    u32 loc_0;
    u32 s1;
    u32 s0_0;
    u32 v0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    s0 = func_00309e50();
    func_0030a2d0(0xa);
    if (((s32)(*(u32*)(&D_00366164)) != 0)) {
        if (((s32)(s0) != 0)) {
            if ((*(u32*)((s0 + 4)) == 0)) {
                func_0030a300();
                v0_2 = 0xfffffff7;
            } else {
                loc_14 = 1;
                loc_18 = 0;
                loc_24 = (u32)&D_003782a8;
                *(u32*)(((u32)&D_01e37280 + 0xc)) = *(u32*)(s0);
                loc_0 = 0;
                loc_8 = 0;
                *(u32*)(&D_01e37280) = func_00305620((u32)&loc_8 + 8);
                *(u32*)(((u32)&D_01e37280 + 4)) = (u32)&loc_30;
                *(u32*)(((u32)&D_01e37280 + 8)) = 4;
                s1 = func_00305620((u32)&loc_8 + 8);
                if (((s32)(func_00309d60((u32)&D_01e38980, 0xa, 0, (u32)&D_01e37280, 0x14, (u32)&D_01e37ec0, 4, 0)) < 0)) {
                    func_00305630(s1);
                    func_0030a300();
                    v0_1 = 0xfffffff5;
                } else {
                    *(u32*)((s0 + 4)) = 0;
                    s0_0 = *(u32*)(((u32)&D_01e37ec0 | 0x20000000));
                    func_0030a300();
                    if (((s32)(s0_0) == 0)) {
                        func_00305630(s1);
                        v0 = 0xfffffff5;
                    } else {
                        func_00305660(s1);
                        func_00305630(s1);
                        v0 = (((s32)(0xffffffff) < (s32)(loc_30)) ? 0 : loc_30);
                    }
                    v0_1 = v0;
                }
                v0_2 = v0_1;
            }
            v0_3 = v0_2;
        } else {
            func_0030a300();
            v0_3 = 0xfffffff7;
        }
        v0_4 = v0_3;
    } else {
        func_0030a300();
        v0_4 = 0xfffffff7;
    }
    return v0_4;
}
