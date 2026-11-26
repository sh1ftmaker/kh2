// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003511bc asm("D_003511bc");
extern "C" u32 D_003511c3 asm("D_003511c3");
extern "C" u32 D_01d48cb8 asm("D_01d48cb8");
extern "C" u32 func_00170b30(u32) asm("func_00170b30");
extern "C" u32 func_001b7f30(u32, u32) asm("func_001b7f30");
extern "C" u32 func_001b7f88(u32) asm("func_001b7f88");

// 0x001b7e68 func_001b7e68
u32 func_001b7e68(u32 a0, u32 a1) asm("func_001b7e68");
u32 func_001b7e68(u32 a0, u32 a1) {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    v0 = func_001b7f30(a0, a1);
    if (((s32)(a1) != 0)) {
        s0 = (a1 + 1);
        s1 = (s0 << 4);
        if (((s32)(((u32)(s0) < (u32)(0x400))) != 0)) {
            *(u8*)(&D_003511c3) = 0;
            if (((s32)(((u32)(*(u32*)(&D_003511bc)) < (u32)((*(u32*)(&D_01d48cb8) + s1)))) != 0)) {
                v0_0 = func_001b7f88(s1);
                v0 = v0_0;
            }
            *(u32*)(a0) = *(u32*)(&D_01d48cb8);
            *(u32*)(&D_01d48cb8) = (*(u32*)(&D_01d48cb8) + s1);
        } else {
            v0_1 = func_00170b30(s1);
            *(u32*)(a0) = v0_1;
            *(u8*)(&D_003511c3) = 1;
            v0 = v0_1;
        }
        *(u32*)((a0 + 4)) = (*(u32*)(a0) + s1);
        *(u32*)((a0 + 8)) = (*(u32*)(a0) + 0x10);
    }
    return v0;
}
