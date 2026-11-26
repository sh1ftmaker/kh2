// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366164 asm("D_00366164");
extern "C" u32 D_01e37280 asm("D_01e37280");
extern "C" u32 D_01e37ec0 asm("D_01e37ec0");
extern "C" u32 D_01e38980 asm("D_01e38980");
extern "C" u32 func_00309c58() asm("func_00309c58");
extern "C" u32 func_00309d60(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00309d60");
extern "C" u32 func_0030a600() asm("func_0030a600");
extern "C" void func_0030a2d0(u32, u32) asm("func_0030a2d0");
extern "C" void func_0030a300() asm("func_0030a300");
extern "C" void func_0030a3f8() asm("func_0030a3f8");

// 0x0030a6c8 func_0030a6c8
u32 func_0030a6c8(u32 a0, u32 a1) asm("func_0030a6c8");
u32 func_0030a6c8(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    func_0030a2d0(0xfe, a1);
    if (((s32)(*(u32*)(&D_00366164)) == 0)) {
        func_0030a3f8();
    }
    if (((s32)(func_0030a600()) != 0)) {
        func_0030a300();
        v0_6 = 0xfffefffc;
    } else {
        if (((s32)(func_00309c58()) != 0)) {
            func_0030a300();
            v0_5 = 0xfffffff0;
        } else {
            if (((s32)((a0 & 0x3fff)) == 0)) {
                if (((s32)(a0) != 0)) {
                    if (((s32)(((u32)(0xfffff) < (u32)(a0))) == 0)) {
                        if (((s32)(a1) != 0)) {
                            if (((s32)(((u32)(a1) < (u32)(0x21))) == 0)) {
                                func_0030a300();
                                v0_0 = 0xffffffea;
                            } else {
                                *(u32*)(&D_01e37280) = a0;
                                *(u32*)(((u32)&D_01e37280 + 4)) = a1;
                                *(u32*)((u32)frame) = 0;
                                *(u32*)(((u32)frame + 8)) = 0;
                                if (((s32)(func_00309d60((u32)&D_01e38980, 0xfe, 0, (u32)&D_01e37280, 8, (u32)&D_01e37ec0, 4, 0)) < 0)) {
                                    func_0030a300();
                                    v0 = 0xfffffff5;
                                } else {
                                    s0 = *(u32*)(((u32)&D_01e37ec0 | 0x20000000));
                                    func_0030a300();
                                    v0 = s0;
                                }
                                v0_0 = v0;
                            }
                            v0_1 = v0_0;
                        } else {
                            func_0030a300();
                            v0_1 = 0xffffffea;
                        }
                        v0_2 = v0_1;
                    } else {
                        func_0030a300();
                        v0_2 = 0xffffffea;
                    }
                    v0_3 = v0_2;
                } else {
                    func_0030a300();
                    v0_3 = 0xffffffea;
                }
                v0_4 = v0_3;
            } else {
                func_0030a300();
                v0_4 = 0xffffffea;
            }
            v0_5 = v0_4;
        }
        v0_6 = v0_5;
    }
    return v0_6;
}
