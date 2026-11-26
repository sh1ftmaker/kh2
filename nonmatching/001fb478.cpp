// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003590b0 asm("D_003590b0");
extern "C" u32 func_0021f5d8(u32, u32) asm("func_0021f5d8");

// 0x001fb478 func_001fb478
u32 func_001fb478(u32 a0, u32 a1) asm("func_001fb478");
u32 func_001fb478(u32 a0, u32 a1) {
    u32 s0;
    u32 v0;
    s0 = ((a0 + *(u32*)(*(u32*)((a1 + 0xc)))) + 0xa0);
    v0 = func_0021f5d8((a0 + *(u32*)(*(u32*)((a1 + 0xc)))) + 0xa0, a1);
    *(u32*)((s0 + 0x9c)) = 0;
    *(u32*)((s0 + 0xa8)) = 0;
    *(u8*)((s0 + 0x8c)) = *(u8*)(&D_003590b0);
    *(u8*)((s0 + 0x8d)) = 2;
    *(u8*)((s0 + 0xc0)) = 0;
    *(u8*)((s0 + 0xc1)) = 0;
    *(u8*)(&D_003590b0) = (*(u8*)(&D_003590b0) + 1);
    return v0;
}
