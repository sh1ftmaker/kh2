// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 D_01c61b08 asm("D_01c61b08");
extern "C" u32 func_00196388(u32, u32) asm("func_00196388");
extern "C" u32 func_001963f8(u32) asm("func_001963f8");

// 0x001966b0 func_001966b0
u32 func_001966b0(u32 a0) asm("func_001966b0");
u32 func_001966b0(u32 a0) {
    u32 v0;
    *(u16*)((((a0 << 2) + (u32)&D_0032bb30) + 0x1ef8)) = 0xffffffff;
    v0 = func_00196388(*(u8*)((((a0 << 1) + *(u32*)(&D_01c61b08)) + 2)), *(u8*)((((a0 << 1) + *(u32*)(&D_01c61b08)) + 3)));
    if (((s32)(v0) >= 0)) {
        return func_001963f8(v0);
    } else {
        return v0;
    }
}
