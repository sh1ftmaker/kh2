// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00365948 asm("D_00365948");
extern "C" u32 D_0036594c asm("D_0036594c");
extern "C" u32 D_01e33480 asm("D_01e33480");
extern "C" u32 D_01e33500 asm("D_01e33500");
extern "C" u32 func_00305670(u32, u32, u32) asm("func_00305670");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x002fc200 func_002fc200
u32 func_002fc200(u32 a0, u32 a1, u32 a2) asm("func_002fc200");
u32 func_002fc200(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 s5;
    u32 s4;
    u32 s3;
    u32 s2;
    u32 s0;
    u32 a2_1;
    u32 a0_2;
    u32 a2_3;
    u32 s3_4;
    u32 s4_5;
    u32 s5_6;
    u32 sp;
    u32 loc_0;
    u32 v0_7;
    u32 sp_8;
    u32 v0_9;
    u32 sp_10;
    u32 v0_11;
    if (((s32)(*(u32*)(((u32)&D_01e33480 + 0x24))) == 0)) {
        sp_10 = (u32)frame;
        v0_11 = 0xffffff9c;
    } else {
        if (((s32)(func_00305670(*(u32*)(&D_0036594c), a1, a2)) < 0)) {
            sp_8 = (u32)frame;
            v0_9 = 0xffffff38;
        } else {
            *(u32*)(&D_01e33500) = a0;
            if (((s32)(((s32)(a2) < (s32)(0x11))) != 0)) {
                *(u32*)(((u32)&D_01e33500 + 0x14)) = a2;
                *(u32*)(((u32)&D_01e33500 + 0x18)) = 0;
                *(u32*)(((u32)&D_01e33500 + 0xc)) = 0;
            } else {
                v0 = (a1 + -1);
                *(u32*)(((u32)&D_01e33500 + 0x18)) = (a1 + ((v0 & 0xfffffff0) - (a1 + -0x10)));
                *(u32*)(((u32)&D_01e33500 + 0xc)) = (a2 - ((v0 & 0xfffffff0) - (a1 + -0x10)));
                *(u32*)(((u32)&D_01e33500 + 0x14)) = ((v0 & 0xfffffff0) - (a1 + -0x10));
            }
            if (((s32)(*(u32*)(((u32)&D_01e33500 + 0x14))) != 0)) {
                v0_0 = a1;
                s5 = 0x360000;
                s4 = 0x1e30000;
                s3 = 0x1e30000;
                s2 = 0x1e30000;
                s0 = 0x300000;
                a2_1 = 0;
                a0_2 = (u32)&D_01e33500;
                do {
                    *(u8*)(((a0_2 + a2_1) + 0x20)) = *(u8*)(v0_0);
                    a2_3 = (a2_1 + 1);
                    a2_1 = a2_3;
                    v0_0 = (a1 + a2_3);
                } while (((s32)(v0_0) != 0));
                a2 = s0;
                a0 = s2;
                s3_4 = s3;
                s4_5 = s4;
                s5_6 = s5;
            } else {
                a2 = 0x300000;
                a0 = 0x1e30000;
                s3_4 = 0x1e30000;
                s4_5 = 0x1e30000;
                s5_6 = 0x360000;
                sp = (u32)frame;
            }
            func_003058a0(0);
            loc_0 = 0;
            if (((s32)(func_003094b8(s4_5 + 0x3480, 6, 1, s3_4 + 0x3500, 0x30, a0 + 0x4a40, 4, a2 + -0x4458)) != 0)) {
                func_00305640(*(u32*)((s5_6 + 0x594c)));
                v0_7 = 0xffffffa5;
            } else {
                *(u32*)(&D_00365948) = 6;
                v0_7 = 0;
            }
            sp_8 = sp;
            v0_9 = v0_7;
        }
        sp_10 = sp_8;
        v0_11 = v0_9;
    }
    return v0_11;
}
