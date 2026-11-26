// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dc9c asm("D_0034dc9c");
extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 D_0034dca8 asm("D_0034dca8");
extern "C" u32 D_01c5c440 asm("D_01c5c440");
extern "C" void func_001700e8(u32, u32) asm("func_001700e8");

// 0x00170b30 func_00170b30
u32 func_00170b30(u32 a0) asm("func_00170b30");
u32 func_00170b30(u32 a0) {
    u32 a0_0;
    u32 s0;
    *(u32*)(&D_0034dc9c) = (*(u32*)(&D_0034dc9c) - ((a0 + 0x7f) & 0xffffff80));
    *(u32*)(&D_0034dca8) = (*(u32*)(&D_0034dca8) + -1);
    *(u32*)((((*(u32*)(&D_0034dca8) + -1) << 2) + (u32)&D_01c5c440)) = ((a0 + 0x7f) & 0xffffff80);
    a0_0 = *(u32*)(&D_0034dca0);
    while (((s32)(a0_0) != 0)) {
        s0 = *(u32*)((a0_0 + 0x3c));
        if (((s32)(((u32)(*(u32*)(&D_0034dc9c)) < (u32)((*(u32*)((a0_0 + 0x34)) + *(u32*)((a0_0 + 0x2c)))))) != 0)) {
            if (((s32)((((s32)(*(u32*)((a0_0 + 0x28))) < (s32)(0x2710)) ^ 1)) == 0)) {
                *(u8*)((a0_0 + 1)) = 0;
                *(u32*)((a0_0 + 0x34)) = 0;
            } else {
                func_001700e8(a0_0, 0);
            }
        }
        a0_0 = s0;
    }
    return *(u32*)(&D_0034dc9c);
}
