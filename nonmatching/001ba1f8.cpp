// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d48de0 asm("D_01d48de0");
extern "C" u32 func_0016a070(u32, u32, u32, u32) asm("func_0016a070");
extern "C" u32 func_001a3888(u32) asm("func_001a3888");

// 0x001ba1f8 func_001ba1f8
// minilink-rodata 0x0036dbe4   (float literals live here in the original)
void func_001ba1f8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001ba1f8");
void func_001ba1f8(u32 a0, u32 a1, u32 a2, u32 a3) {
    *(u32*)((a0 + 4)) = a2;
    *(f32*)(a0) = 30.0f;
    *(u32*)((a0 + 8)) = a1;
    *(u32*)((a0 + 0xc)) = func_0016a070(a1, a1, a2, a3);
    *(u32*)((a0 + 0x10)) = (func_001a3888(*(u32*)((a0 + 4))) ? 0 : a3);
    if ((*(u32*)(((u32)&D_01d48de0 + 4)) == 0)) {
        *(u32*)(((u32)&D_01d48de0 + 4)) = a0;
        *(u32*)(&D_01d48de0) = a0;
        *(u32*)((a0 + 0x14)) = 0;
    } else {
        *(u32*)((*(u32*)(((u32)&D_01d48de0 + 4)) + 0x14)) = a0;
        *(u32*)((a0 + 0x14)) = 0;
        *(u32*)(((u32)&D_01d48de0 + 4)) = a0;
    }
    return;
}
