// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352bd0 asm("D_00352bd0");
extern "C" u32 func_001e2760(u32, u32) asm("func_001e2760");

// 0x001e0fe8 func_001e0fe8
u32 func_001e0fe8(u32 a0) asm("func_001e0fe8");
u32 func_001e0fe8(u32 a0) {
    u32 v0;
    u32 t7;
    u32 t4;
    v0 = func_001e2760(*(u32*)(&D_00352bd0), *(u32*)((a0 + 0x20)));
    t7 = *(u8*)(v0);
    if (((s32)(((s32)((t7 << 0x18)) >> 0x18)) < 0)) {
        *(u32*)((a0 + 0x24)) = 2;
    } else {
        *(u8*)(v0) = (t7 + 0xa);
        if (((s32)(((s32)(((t7 + 0xa) << 0x18)) >> 0x18)) < 0)) {
            t4 = 0xffffff80;
        } else {
            t4 = (t7 + 0xa);
        }
        *(u8*)(v0) = t4;
        *(u8*)((v0 + 1)) = 0;
        *(u8*)((v0 + 2)) = 0;
        *(u8*)((v0 + 3)) = 0xa;
    }
    return v0;
}
