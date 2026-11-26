// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366164 asm("D_00366164");
extern "C" u32 D_00378290 asm("D_00378290");
extern "C" u32 D_01e37280 asm("D_01e37280");
extern "C" u32 D_01e37ec0 asm("D_01e37ec0");
extern "C" u32 D_01e38980 asm("D_01e38980");
extern "C" u32 func_00305620(u32) asm("func_00305620");
extern "C" u32 func_00309d60(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00309d60");
extern "C" void func_00305630(u32) asm("func_00305630");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_0030a2d0(u32) asm("func_0030a2d0");
extern "C" void func_0030a300() asm("func_0030a300");
extern "C" void func_0030a3f8() asm("func_0030a3f8");

// 0x0030c008 func_0030c008
u32 func_0030c008(u32 a0) asm("func_0030c008");
u32 func_0030c008(u32 a0) {
    u8 frame[64];
    u32 s1;
    u32 s0;
    u32 v0;
    u32 v0_0;
    func_0030a2d0(0xf);
    if (((s32)(*(u32*)(&D_00366164)) == 0)) {
        func_0030a3f8();
    }
    *(u32*)(((u32)&D_01e37280 + 0xc)) = a0;
    *(u32*)(((u32)frame + 0x14)) = 1;
    *(u32*)(((u32)frame + 0x18)) = 0;
    *(u32*)(((u32)frame + 0x24)) = (u32)&D_00378290;
    *(u32*)(&D_01e37280) = func_00305620((u32)frame + 0x10);
    *(u32*)(((u32)&D_01e37280 + 4)) = ((u32)frame + 0x30);
    *(u32*)(((u32)&D_01e37280 + 8)) = 4;
    *(u32*)((u32)frame) = 0;
    *(u32*)(((u32)frame + 8)) = 0;
    s1 = func_00305620((u32)frame + 0x10);
    if (((s32)(func_00309d60((u32)&D_01e38980, 0xf, 0, (u32)&D_01e37280, 0x10, (u32)&D_01e37ec0, 4, 0)) < 0)) {
        func_00305630(s1);
        func_0030a300();
        v0_0 = 0xfffffff5;
    } else {
        s0 = *(u32*)(((u32)&D_01e37ec0 | 0x20000000));
        func_0030a300();
        if (((s32)(s0) == 0)) {
            func_00305630(s1);
            v0 = 0xfffffff5;
        } else {
            func_00305660(s1);
            func_00305630(s1);
            v0 = *(u32*)(((u32)frame + 0x30));
        }
        v0_0 = v0;
    }
    return v0_0;
}
