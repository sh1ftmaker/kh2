// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363d10 asm("D_00363d10");
extern "C" u32 D_00376900 asm("D_00376900");
extern "C" u32 D_01e2d980 asm("D_01e2d980");
extern "C" u32 D_01e2da80 asm("D_01e2da80");
extern "C" u32 D_01e2fe40 asm("D_01e2fe40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_002f5c48(u32) asm("func_002f5c48");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00305660(u32, u32, u32) asm("func_00305660");

// 0x002f4e30 func_002f4e30
u32 func_002f4e30(u32 a0, u32 a1, u32 a2) asm("func_002f4e30");
u32 func_002f4e30(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 a1_0;
    u32 a2_1;
    u32 a3_2;
    u32 s1;
    u32 s4;
    u32 t0;
    u32 s0;
    u32 v0;
    u32 v0_3;
    if (((s32)(*(u32*)(&D_00363d10)) == 0)) {
        v0_3 = 0;
    } else {
        func_00305660(*(u32*)(&D_01e2fe40), a1, a2);
        *(u32*)(&D_01e2da80) = *(u32*)(a0);
        *(u32*)(((u32)&D_01e2da80 + 0x28)) = a1;
        *(u32*)(((u32)&D_01e2da80 + 0x2c)) = a2;
        *(u32*)(((u32)&D_01e2da80 + 4)) = *(u32*)((a0 + 4));
        *(u32*)(((u32)&D_01e2da80 + 8)) = *(u32*)((a0 + 8));
        *(u32*)(((u32)&D_01e2da80 + 0xc)) = *(u32*)((a0 + 0xc));
        *(u32*)(((u32)&D_01e2da80 + 0x10)) = *(u32*)((a0 + 0x10));
        a1_0 = 0;
        a2_1 = (a0 + 0x14);
        a3_2 = 0x1e30000;
        s1 = (u32)&D_01e2da80;
        s4 = 0x1e30000;
        t0 = ((u32)&D_01e2da80 + 0x14);
        do {
            *(u8*)((t0 + a1_0)) = *(u8*)((a2_1 + a1_0));
            a1_0 = (a1_0 + 1);
        } while (((s32)(((s32)(a1_0) < (s32)(0x10))) != 0));
        *(u32*)((u32)frame) = 0;
        if (((s32)(func_003094b8((u32)&D_01e2d980, 0x80001301, 0, a3_2 + -0x2580, 0x90, a3_2 + -0x2580, 0x90, 0)) < 0)) {
            func_002f5c48((u32)&D_00376900);
            func_00305640(*(u32*)((s4 + -0x1c0)));
            v0 = 0;
        } else {
            s0 = *(u32*)((s1 + 0x24));
            func_00305640(*(u32*)((s4 + -0x1c0)));
            v0 = s0;
        }
        v0_3 = v0;
    }
    return v0_3;
}
