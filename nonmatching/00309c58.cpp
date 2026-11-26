// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366170 asm("D_00366170");
extern "C" u32 D_01e38780 asm("D_01e38780");
extern "C" void func_00305640(u32, u32, u32) asm("func_00305640");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_00309be8() asm("func_00309be8");

// 0x00309c58 func_00309c58
u32 func_00309c58() asm("func_00309c58");
u32 func_00309c58() {
    u8 frame[16];
    u32 a1_0;
    u32 a2_1;
    u32 s0;
    u32 s1;
    u32 s0_2;
    u32 s0_3;
    u32 s1_4;
    u32 sp;
    func_00309be8();
    func_00305660(*(u32*)(&D_00366170));
    if (((s32)(((u32)((u32)&D_01e38780) < (u32)(((u32)&D_01e38780 + 0x200)))) != 0)) {
        a1_0 = (u32)&D_01e38780;
        a2_1 = ((u32)&D_01e38780 + 0x200);
        s0 = 0;
        s1 = 0x360000;
        do {
            s0_2 = (*(u32*)((a1_0 + 4)) ? (s0 + 1) : s0);
            a1_0 = (a1_0 + 0x10);
            s0 = s0_2;
        } while (((s32)(((u32)(a1_0) < (u32)(a2_1))) != 0));
        s0_3 = s0;
        s1_4 = s1;
    } else {
        s0_3 = 0;
        s1_4 = 0x360000;
        sp = (u32)frame;
    }
    func_00305640(*(u32*)((s1_4 + 0x6170)), a1_0, a2_1);
    return s0_3;
}
