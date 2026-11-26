// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003660d4 asm("D_003660d4");
extern "C" u32 D_01e35680 asm("D_01e35680");
extern "C" u32 func_003111f0(u32, u32) asm("func_003111f0");

// 0x00306e80 func_00306e80
u32 func_00306e80(u32 a0) asm("func_00306e80");
u32 func_00306e80(u32 a0) {
    u32 a1_0;
    u32 v0;
    u32 v0_1;
    a1_0 = *(u32*)(&D_003660d4);
    if (((s32)(((s32)(a1_0) < (s32)(0x7e))) == 0)) {
        *(u32*)(&D_003660d4) = 0;
        *(u8*)(((u32)&D_01e35680 + 0x7f)) = 0;
        func_003111f0((u32)&D_01e35680, a1_0);
        a1_0 = *(u32*)(&D_003660d4);
    }
    if ((a0 == 0xa)) {
        *(u32*)(&D_003660d4) = 0;
        v0 = (a1_0 + (u32)&D_01e35680);
        *(u8*)(v0) = a0;
        *(u8*)((v0 + 1)) = 0;
        return func_003111f0((u32)&D_01e35680, a1_0);
    } else {
        *(u32*)(&D_003660d4) = (a1_0 + 1);
        v0_1 = (a1_0 + (u32)&D_01e35680);
        *(u8*)(v0_1) = a0;
        return v0_1;
    }
}
