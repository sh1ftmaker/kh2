// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002f67a0 asm("D_002f67a0");
extern "C" u32 D_00363d94 asm("D_00363d94");
extern "C" u32 D_00376b70 asm("D_00376b70");
extern "C" u32 D_01e331d8 asm("D_01e331d8");
extern "C" u32 func_00305420(u32, u32, u32, u32, u32) asm("func_00305420");
extern "C" void func_003054b0(u32, u32, u32, u32, u32) asm("func_003054b0");
extern "C" void func_00306760(u32, u32) asm("func_00306760");

// 0x002f6870 func_002f6870
u32 func_002f6870(u32 a0, u32 a1, u32 a2) asm("func_002f6870");
u32 func_002f6870(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_00363d94)) == 0)) {
        *(u32*)(((u32)&D_01e331d8 + 4)) = (u32)&D_002f67a0;
        *(u32*)(((u32)&D_01e331d8 + 8)) = a1;
        *(u32*)(((u32)&D_01e331d8 + 0xc)) = a2;
        *(u32*)(((u32)&D_01e331d8 + 0x10)) = 0;
        *(u32*)(((u32)&D_01e331d8 + 0x14)) = a0;
        *(u32*)(((u32)&D_01e331d8 + 0x20)) = (u32)&D_00376b70;
        v0 = func_00305420((u32)&D_01e331d8, (u32)&D_00376b70, a2, a0, a1);
        *(u32*)(&D_00363d94) = v0;
        func_00306760(v0, 0);
        v0_0 = 1;
    } else {
        func_003054b0(*(u32*)(&D_00363d94), a0, a2, a0, a1);
        v0_0 = 0;
    }
    return v0_0;
}
