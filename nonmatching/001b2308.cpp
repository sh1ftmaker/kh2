// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d48c80 asm("D_01d48c80");
extern "C" u32 func_001050d8(u32, u32) asm("func_001050d8");

// 0x001b2308 func_001b2308
// minilink-rodata 0x0036d9c8   (float literals live here in the original)
void func_001b2308(u32 a0, u32 a1) asm("func_001b2308");
void func_001b2308(u32 a0, u32 a1) {
    *(u32*)((a0 + 4)) = 0;
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 8)) = 0;
    *(u32*)((a0 + 0xc)) = 0;
    *(f32*)((a0 + 0x10)) = 50.0f;
    *(u32*)((a0 + 0x14)) = func_001050d8(a1 << 4, a1);
    if ((*(u32*)(((u32)&D_01d48c80 + 4)) == 0)) {
        *(u32*)(((u32)&D_01d48c80 + 4)) = a0;
        *(u32*)(&D_01d48c80) = a0;
        *(u32*)((a0 + 0x18)) = 0;
    } else {
        *(u32*)((*(u32*)(((u32)&D_01d48c80 + 4)) + 0x18)) = a0;
        *(u32*)((a0 + 0x18)) = 0;
        *(u32*)(((u32)&D_01d48c80 + 4)) = a0;
    }
    return;
}
