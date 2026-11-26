// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bf00 asm("D_01e2bf00");
extern "C" f32 func_001065a8(u32, u32, u32, u32, f32, f32) asm("func_001065a8");

// 0x002e7340 func_002e7340
void func_002e7340(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0, f32 fa1) asm("func_002e7340");
void func_002e7340(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0, f32 fa1) {
    *(u32*)((a0 + 4)) = a1;
    *(u32*)((a0 + 8)) = (a2 + -1);
    *(u32*)((a0 + 0xc)) = (a3 + 1);
    *(f32*)((a0 + 0x10)) = fa0;
    *(f32*)((a0 + 0x14)) = fa1;
    *(u32*)((a0 + 0x18)) = *(u8*)(a3);
    if ((*(u32*)(((u32)&D_01e2bf00 + 4)) == 0)) {
        *(u32*)(((u32)&D_01e2bf00 + 4)) = a0;
        *(u32*)(&D_01e2bf00) = a0;
        *(u32*)(a0) = 0;
    } else {
        *(u32*)(*(u32*)(((u32)&D_01e2bf00 + 4))) = a0;
        *(u32*)(a0) = 0;
        *(u32*)(((u32)&D_01e2bf00 + 4)) = a0;
    }
    *(f32*)((a0 + 0x1c)) = func_001065a8(a0, a1, a2 + -1, a3, *(f32*)((a0 + 0x10)), *(f32*)((a0 + 0x14)));
    return;
}
