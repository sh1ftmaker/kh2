// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366164 asm("D_00366164");
extern "C" u32 D_00378230 asm("D_00378230");
extern "C" u32 D_01e37280 asm("D_01e37280");
extern "C" u32 D_01e37ec0 asm("D_01e37ec0");
extern "C" u32 D_01e38980 asm("D_01e38980");
extern "C" u32 func_00305620(u32, u32) asm("func_00305620");
extern "C" u32 func_00309d60(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00309d60");
extern "C" u32 func_00309e50(u32, u32, u32, u32, u32) asm("func_00309e50");
extern "C" void func_002fdd68(u32, u32, u32) asm("func_002fdd68");
extern "C" void func_00305630(u32) asm("func_00305630");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_00308a80(u32, u32) asm("func_00308a80");
extern "C" void func_0030a2d0(u32) asm("func_0030a2d0");
extern "C" void func_0030a300() asm("func_0030a300");
extern "C" void func_0030a3f8() asm("func_0030a3f8");

// 0x0030b7f8 func_0030b7f8
u32 func_0030b7f8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_0030b7f8");
u32 func_0030b7f8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u8 frame[64];
    u32 s2;
    u32 s2_0;
    u32 s0;
    u32 v0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    s2 = func_00309e50(a0, a1, a2, a3, a4);
    func_0030a2d0(0x1a);
    if (((s32)(*(u32*)(&D_00366164)) == 0)) {
        func_0030a3f8();
    }
    if (((s32)(s2) != 0)) {
        if (((s32)(*(u32*)((s2 + 4))) == 0)) {
            func_0030a300();
            v0_4 = 0xfffffff7;
        } else {
            if (((s32)(((u32)(a3) < (u32)(0x401))) != 0)) {
                if (((s32)(((u32)(a5) < (u32)(0x401))) == 0)) {
                    func_0030a300();
                    v0_2 = 0xffffffea;
                } else {
                    if (((s32)(a2) == 0)) {
                        *(u32*)(((u32)&D_01e37280 + 0x41c)) = 0;
                    } else {
                        func_002fdd68((u32)&D_01e37280 + 0x14, a2, a3);
                    }
                    *(u32*)(((u32)&D_01e37280 + 0x10)) = a1;
                    *(u32*)(((u32)&D_01e37280 + 0xc)) = *(u32*)(s2);
                    *(u32*)(((u32)&D_01e37280 + 0x41c)) = a3;
                    *(u32*)(((u32)frame + 0x14)) = 1;
                    *(u32*)(((u32)frame + 0x24)) = (u32)&D_00378230;
                    *(u32*)(((u32)frame + 0x18)) = 0;
                    *(u32*)(((u32)&D_01e37280 + 0x418)) = a5;
                    *(u32*)(((u32)&D_01e37280 + 4)) = ((u32)frame + 0x30);
                    *(u32*)(((u32)&D_01e37280 + 8)) = 4;
                    *(u32*)(((u32)&D_01e37280 + 0x414)) = a4;
                    *(u32*)((u32)&D_01e37280) = func_00305620((u32)frame + 0x10, 1);
                    s2_0 = func_00305620((u32)frame + 0x10, 1);
                    func_00308a80((u32)&D_01e37280, 0x420);
                    *(u32*)((u32)frame) = 0;
                    *(u32*)(((u32)frame + 8)) = 0;
                    if (((s32)(func_00309d60((u32)&D_01e38980, 0x1a, 0, (u32)&D_01e37280, 0x420, (u32)&D_01e37ec0, 4, 0)) < 0)) {
                        func_00305630(s2_0);
                        func_0030a300();
                        v0_1 = 0xfffffff5;
                    } else {
                        s0 = *(u32*)(((u32)&D_01e37ec0 | 0x20000000));
                        func_0030a300();
                        if (((s32)(s0) == 0)) {
                            func_00305630(s2_0);
                            v0 = 0xfffffff5;
                        } else {
                            func_00305660(s2_0);
                            func_00305630(s2_0);
                            v0 = *(u32*)(((u32)frame + 0x30));
                        }
                        v0_1 = v0;
                    }
                    v0_2 = v0_1;
                }
                v0_3 = v0_2;
            } else {
                func_0030a300();
                v0_3 = 0xffffffea;
            }
            v0_4 = v0_3;
        }
        v0_5 = v0_4;
    } else {
        func_0030a300();
        v0_5 = 0xfffffff7;
    }
    return v0_5;
}
