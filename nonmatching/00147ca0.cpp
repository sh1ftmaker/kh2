// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00147c78(u32, u32, f32) asm("func_00147c78");
extern "C" void func_00147ca0(u32, u32, f32) asm("func_00147ca0");

// 0x00147ca0 func_00147ca0
void func_00147ca0(u32 a0, u32 a1, f32 fa0) asm("func_00147ca0");
void func_00147ca0(u32 a0, u32 a1, f32 fa0) {
    u32 t7;
    u32 t7_0;
    u32 t6;
    u32 t6_1;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    u32 t7_5;
    u32 t7_6;
    u32 t6_7;
    u32 s0;
    u32 a1_8;
    t7 = *(u32*)((a1 + 0xf8));
    if (((s32)((t7 & 4)) != 0)) {
        t7_0 = (*(u16*)((a1 + 0x11c)) << 3);
        t6 = *(u32*)(((a0 + t7_0) + 0x4364));
        if (((s32)((t6 & 1)) != 0)) {
            func_00147c78(a0, a1, fa0);
            *(f32*)((a0 + 0x794)) = fa0;
            t6_1 = *(u32*)((a0 + 0xc40));
            t7_2 = (t6_1 << 2);
            *(u32*)(((a0 + t7_2) + 0x798)) = a1;
            *(u32*)((a0 + 0xc40)) = (t6_1 + 1);
            t7_3 = *(u32*)((a0 + 0x536c));
            t7_4 = (t7_3 << 2);
            t7_5 = (t7_4 + a0);
            t7_6 = (t7_5 + 0x770);
            t6_7 = *(u32*)((t7_6 + 0xc));
            *(u32*)((t7_6 + 0xc)) = (t6_7 + 1);
        }
    }
    s0 = 0;
    while ((a1_8 = (s0 == 0) ? *(u32*)((a1 + 0xf0)) : *(u32*)((s0 + 0xec))), (s0 = a1_8), ((s32)(a1_8) != 0)) {
        func_00147ca0(a0, a1_8, fa0);
    }
    return;
}
