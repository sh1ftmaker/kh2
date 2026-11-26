// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00147c78(u32, u32, f32) asm("func_00147c78");
extern "C" void func_00147d80(u32, u32, f32) asm("func_00147d80");

// 0x00147d80 func_00147d80
void func_00147d80(u32 a0, u32 a1, f32 fa0) asm("func_00147d80");
void func_00147d80(u32 a0, u32 a1, f32 fa0) {
    u32 t7;
    u32 t7_0;
    u32 s0;
    u32 s0_1;
    u32 s0_2;
    u32 t5;
    u32 t6;
    u32 t6_3;
    u32 s0_4;
    u32 a1_5;
    if (((s32)((*(u32*)((a1 + 0xf8)) & 4)) != 0)) {
        t7 = (*(u16*)((a1 + 0x11c)) << 3);
        if (((s32)((*(u32*)(((a0 + t7) + 0x4364)) & 1)) != 0)) {
            if ((*(u8*)((a1 + 0xeb)) != 0)) {
                t7_0 = (*(u32*)((a0 + 0x536c)) << 2);
                s0 = *(u32*)(((t7_0 + a0) + 0xc50));
                func_00147c78(a0, a1, fa0);
                *(u8*)((a1 + 0xf)) = 0xffffff80;
                s0_1 = (s0 * 0x370);
                s0_2 = (s0_1 + a0);
                t5 = (s0_2 + 0xc60);
                *(f32*)((t5 + 4)) = fa0;
                t6 = (*(u32*)((s0_2 + 0xfc0)) << 2);
                *(u32*)(((t6 + t5) + 8)) = a1;
                *(u32*)((s0_2 + 0xfc0)) = (*(u32*)((s0_2 + 0xfc0)) + 1);
            }
            t6_3 = (*(u32*)((a0 + 0x536c)) + a1);
            *(u8*)(((t6_3 + 0x100) + 0xe)) = 2;
        }
    }
    s0_4 = 0;
    while ((a1_5 = (s0_4 == 0) ? *(u32*)((a1 + 0xf0)) : *(u32*)((s0_4 + 0xec))), (s0_4 = a1_5), ((s32)(a1_5) != 0)) {
        func_00147d80(a0, a1_5, fa0);
    }
    return;
}
