// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003769c8 asm("D_003769c8");
extern "C" u32 D_01e2da80 asm("D_01e2da80");
extern "C" u32 D_01e2fe40 asm("D_01e2fe40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_002f5c48(u32) asm("func_002f5c48");
extern "C" void func_00305640(u32, u32, u32) asm("func_00305640");
extern "C" void func_00305660(u32, u32, u32, u32, u32, u32) asm("func_00305660");

// 0x002f5558 func_002f5558
u32 func_002f5558(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_002f5558");
u32 func_002f5558(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u8 frame[16];
    u32 a1_0;
    u32 a2_1;
    u32 a3_2;
    u32 s2;
    u32 s4;
    u32 s6;
    u32 t0;
    u32 a3_3;
    u32 s2_4;
    u32 s6_5;
    u32 sp;
    u32 t0_6;
    u32 loc_0;
    u32 a1_7;
    u32 a2_8;
    u32 a1_9;
    u32 a2_10;
    u32 v0;
    u32 s0;
    u32 v0_11;
    func_00305660(*(u32*)(&D_01e2fe40), a1, a2, a3, a4, a5);
    *(u32*)(&D_01e2da80) = a0;
    *(u32*)(((u32)&D_01e2da80 + 4)) = a1;
    *(u32*)(((u32)&D_01e2da80 + 8)) = *(u32*)(a2);
    *(u32*)(((u32)&D_01e2da80 + 0xc)) = *(u32*)(a4);
    if (((s32)(*(u32*)(a2)) > 0)) {
        a1_0 = 0;
        a2_1 = ((u32)&D_01e2da80 + 0x10);
        a3_2 = 0x1e30000;
        s2 = (u32)&D_01e2da80;
        s4 = a3;
        s6 = 0x1e30000;
        t0 = 0x1e30000;
        do {
            *(u8*)((a2_1 + a1_0)) = *(u8*)(a3);
            a1_0 = (a1_0 + 1);
            a3 = (s4 + a1_0);
        } while (((s32)(a3) != 0));
        a3_3 = (a3_2 + -0x2580);
        s2_4 = s2;
        s6_5 = s6;
        t0_6 = t0;
    } else {
        a3_3 = (u32)&D_01e2da80;
        s2_4 = (u32)&D_01e2da80;
        s6_5 = 0x1e30000;
        sp = (u32)frame;
        t0_6 = 0x1e30000;
    }
    loc_0 = 0;
    if (((s32)(func_003094b8(t0_6 + -0x2680, 0x80001318, 0, a3_3, 0x90, a3_3, 0x90, 0)) < 0)) {
        func_002f5c48((u32)&D_003769c8);
        func_00305640(*(u32*)((s6_5 + -0x1c0)), a1_7, a2_8);
        v0_11 = 0;
    } else {
        if (((s32)(*(u32*)((s2_4 + 0x110))) >= 0)) {
            *(u32*)(a2) = *(u32*)((s2_4 + 8));
            *(u32*)(a4) = *(u32*)((s2_4 + 0xc));
            if (((s32)(*(u32*)((s2_4 + 0xc))) > 0)) {
                a1_9 = 0;
                a2_10 = (s2_4 + 0x90);
                v0 = (s2_4 + 0x90);
                do {
                    *(u8*)((a5 + a1_9)) = *(u8*)(v0);
                    a1_9 = (a1_9 + 1);
                    v0 = (a2_10 + a1_9);
                } while (((s32)(v0) != 0));
            }
        }
        s0 = *(u32*)((s2_4 + 0x110));
        func_00305640(*(u32*)((s6_5 + -0x1c0)), a1_9, a2_10);
        v0_11 = s0;
    }
    return v0_11;
}
