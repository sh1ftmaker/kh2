// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003769e8 asm("D_003769e8");
extern "C" u32 D_01e2da80 asm("D_01e2da80");
extern "C" u32 D_01e2fe40 asm("D_01e2fe40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_002f5c48(u32) asm("func_002f5c48");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00305660(u32, u32, u32, u32) asm("func_00305660");

// 0x002f56e8 func_002f56e8
void func_002f56e8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002f56e8");
void func_002f56e8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[16];
    u32 a1_0;
    u32 a2_1;
    u32 a3_2;
    u32 s2;
    u32 s4;
    u32 s5;
    u32 t0;
    u32 a3_3;
    u32 s2_4;
    u32 s5_5;
    u32 sp;
    u32 t0_6;
    u32 loc_0;
    u32 s0;
    func_00305660(*(u32*)(&D_01e2fe40), a1, a2, a3);
    *(u32*)(&D_01e2da80) = a0;
    *(u32*)(((u32)&D_01e2da80 + 4)) = a1;
    *(u32*)(((u32)&D_01e2da80 + 8)) = *(u32*)(a2);
    if (((s32)(*(u32*)(a2)) > 0)) {
        a1_0 = 0;
        a2_1 = ((u32)&D_01e2da80 + 0xc);
        a3_2 = 0x1e30000;
        s2 = (u32)&D_01e2da80;
        s4 = a3;
        s5 = 0x1e30000;
        t0 = 0x1e30000;
        do {
            a1_0 = (a1_0 + 1);
            *(u8*)((a2_1 + a1_0)) = *(u8*)(a3);
            a3 = (s4 + a1_0);
        } while (((s32)(a3) != 0));
        a3_3 = (a3_2 + -0x2580);
        s2_4 = s2;
        s5_5 = s5;
        t0_6 = t0;
    } else {
        a3_3 = (u32)&D_01e2da80;
        s2_4 = (u32)&D_01e2da80;
        s5_5 = 0x1e30000;
        sp = (u32)frame;
        t0_6 = 0x1e30000;
    }
    loc_0 = 0;
    if (((s32)(func_003094b8(t0_6 + -0x2680, 0x80001319, 0, a3_3, 0x90, a3_3, 0x90, 0)) < 0)) {
        func_002f5c48((u32)&D_003769e8);
    } else {
        if (((s32)(*(u32*)((s2_4 + 0x8c))) >= 0)) {
            *(u32*)(a2) = *(u32*)((s2_4 + 8));
        }
        s0 = *(u32*)((s2_4 + 0x8c));
    }
    func_00305640(*(u32*)((s5_5 + -0x1c0)));
    return;
}
