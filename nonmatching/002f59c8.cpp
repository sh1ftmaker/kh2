// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00376a78 asm("D_00376a78");
extern "C" u32 D_00376aa8 asm("D_00376aa8");
extern "C" u32 D_01e2d9d0 asm("D_01e2d9d0");
extern "C" u32 D_01e2db40 asm("D_01e2db40");
extern "C" u32 D_01e2fe40 asm("D_01e2fe40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" u32 func_003096b8(u32) asm("func_003096b8");
extern "C" void func_002f5c48(u32, u32, u32, u32, u32) asm("func_002f5c48");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00305660(u32, u32, u32, u32, u32) asm("func_00305660");

// 0x002f59c8 func_002f59c8
u32 func_002f59c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_002f59c8");
u32 func_002f59c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u8 frame[16];
    u32 a1_0;
    u32 a2_1;
    u32 t0;
    u32 a1_2;
    u32 a2_3;
    u32 a3_4;
    u32 s2;
    u32 s4;
    u32 s6;
    u32 a3_5;
    u32 s2_6;
    u32 s6_7;
    u32 sp;
    u32 loc_0;
    u32 v0;
    u32 sp_8;
    u32 v0_9;
    u32 sp_10;
    u32 v0_11;
    if (((s32)(((s32)(*(u32*)(a2)) < (s32)(0x2081))) == 0)) {
        func_002f5c48((u32)&D_00376a78, *(u32*)(a2), a2, a3, a4);
        sp_10 = (u32)frame;
        v0_11 = 0;
    } else {
        func_00305660(*(u32*)(&D_01e2fe40), a1, a2, a3, a4);
        if ((func_003096b8((u32)&D_01e2d9d0) == 1)) {
            func_002f5c48((u32)&D_00376aa8, a1_0, a2_1, 0x1e30000, t0);
            func_00305640(*(u32*)(&D_01e2fe40));
            sp_8 = (u32)frame;
            v0_9 = 0;
        } else {
            *(u32*)(&D_01e2db40) = a0;
            *(u32*)(((u32)&D_01e2db40 + 4)) = a1;
            *(u32*)(((u32)&D_01e2db40 + 8)) = *(u32*)(a2);
            if (((s32)(*(u32*)(a2)) > 0)) {
                a1_2 = 0;
                a2_3 = ((u32)&D_01e2db40 + 0xc);
                a3_4 = 0x1e30000;
                s2 = 0x1e30000;
                s4 = a3;
                s6 = 0x1e30000;
                do {
                    *(u8*)((a2_3 + a1_2)) = *(u8*)(a3);
                    a1_2 = (a1_2 + 1);
                    a3 = (s4 + a1_2);
                } while (((s32)(a3) != 0));
                a3_5 = a3_4;
                s2_6 = s2;
                s6_7 = s6;
            } else {
                a3_5 = 0x1e30000;
                s2_6 = 0x1e30000;
                s6_7 = 0x1e30000;
                sp = (u32)frame;
            }
            loc_0 = 0;
            if (((s32)(func_003094b8(s6_7 + -0x2630, 0x8000131c, 1, a3_5 + -0x24c0, 0x2090, a3_5 + -0x24c0, 0x2090, a4)) < 0)) {
                func_00305640(*(u32*)((s2_6 + -0x1c0)));
                v0 = 0;
            } else {
                func_00305640(*(u32*)((s2_6 + -0x1c0)));
                v0 = 1;
            }
            sp_8 = sp;
            v0_9 = v0;
        }
        sp_10 = sp_8;
        v0_11 = v0_9;
    }
    return v0_11;
}
