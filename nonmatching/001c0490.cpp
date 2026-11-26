// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_00186ce8(u32) asm("func_00186ce8");

// 0x001c0490 func_001c0490
void func_001c0490(u32 a0) asm("_ZN2YS12ATTACK_CHECK4execEv");
void func_001c0490(u32 a0) {
    u32 t4;
    u32 a0_0;
    if ((0.0f < *(f32*)((a0 + 0x2c)))) {
        if (((s32)(*(u32*)(a0)) == 0) || ((s32)(func_00186ce8(*(u32*)(a0))) == 0)) {
            *(f32*)((a0 + 0x2c)) = (*(f32*)((a0 + 0x2c)) - *(f32*)(&D_00349e10));
        }
    }
    t4 = 3;
    a0_0 = (a0 + 0x30);
    do {
        if (((s32)(*(u32*)(a0_0)) != 0)) {
            *(f32*)((a0_0 + 4)) = (*(f32*)((a0_0 + 4)) - *(f32*)(&D_00349e10));
            if (((*(f32*)((a0_0 + 4)) - *(f32*)(&D_00349e10)) <= 0.0f)) {
                *(u32*)(((a0 + 4) + ((*(u32*)(a0_0) >> 5) << 2))) = (*(u32*)(((a0 + 4) + ((*(u32*)(a0_0) >> 5) << 2))) & ~((0 | (1 << (*(u32*)(a0_0) & 0x1f)))));
                *(u32*)(a0_0) = 0;
            }
        }
        a0_0 = (a0_0 + 8);
        t4 = (t4 + -1);
    } while (((s32)(t4) >= 0));
    return;
}
