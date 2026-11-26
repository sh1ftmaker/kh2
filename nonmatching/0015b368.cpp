// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ab50 asm("D_0034ab50");
extern "C" u32 func_0013a7e8(u32, u32, u32, u32) asm("func_0013a7e8");
extern "C" u32 func_0015b4f8(u32, u32, u32) asm("func_0015b4f8");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");
extern "C" void func_00239bf8(u32, u32) asm("func_00239bf8");

// 0x0015b368 dk::Exp::create(int, YI::IMAGE*, int)
u32 lift_0015b368(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2dk3Exp6createEiPN2YI5IMAGEEi");
u32 lift_0015b368(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[32];
    u32 v0;
    u32 v0_0;
    u32 s2;
    u32 s4;
    u32 s1;
    u32 sp;
    u32 v0_1;
    u32 s2_2;
    u32 s4_3;
    u32 s5;
    u32 v0_5;
    u32 v0_6;
    v0 = func_0013a7e8(0, a1, a2, a3);
    func_001386e0(a0, 0xed8, v0, a2, a1, 0xf);
    v0_0 = func_0015b4f8((u32)&D_0034ab50, a3, (u32)frame);
    *(u32*)((a0 + 0x1b4)) = v0_0;
    s2 = 0;
    if (((s32)(v0_0) > 0)) {
        s4 = 0;
        s1 = (u32)frame;
        do {
            func_00239988((a0 + (s4 * 0x158)) + 0x1b8, v0, a2);
            func_00239bf8((a0 + (s4 * 0x158)) + 0x1b8, *(u32*)((s1 + (s4 * 4))));
            s2 = (s2 + func_0023aa98((a0 + (s4 * 0x158)) + 0x1b8));
            s4 = (s4 + 1);
        } while (((s32)(((s32)(s4) < (s32)(*(u32*)((a0 + 0x1b4))))) != 0));
    } else {
        sp = (u32)frame;
    }
    v0_1 = func_0023aa98(a0 + 0x18);
    *(u32*)((a0 + 0x178)) = (((s32)(((s2 + v0_1) + ((s2 + v0_1) >> 0x1f))) >> 1) - v0_1);
    if (((s32)(*(u32*)((a0 + 0x1b4))) > 0)) {
        s2_2 = 0;
        s4_3 = 0;
        s5 = ((s32)(((s2 + v0_1) + ((s2 + v0_1) >> 0x1f))) >> 1);
        do {
            *(u32*)(((a0 + (s4_3 * 4)) + 0xb20)) = (s2_2 - s5);
            v0_5 = func_0023aa98((a0 + (s4_3 * 0x158)) + 0x1b8);
            s2_2 = (s2_2 + v0_5);
            s4_3 = (s4_3 + 1);
        } while (((s32)(((s32)(s4_3) < (s32)(*(u32*)((a0 + 0x1b4))))) != 0));
        v0_6 = v0_5;
    } else {
        v0_6 = (((s32)(((s2 + v0_1) + ((s2 + v0_1) >> 0x1f))) >> 1) - v0_1);
    }
    return v0_6;
}
