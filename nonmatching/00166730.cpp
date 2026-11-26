// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001667d0(u32) asm("func_001667d0");

// 0x00166730 func_00166730
u32 func_00166730(u32 a0) asm("func_00166730");
u32 func_00166730(u32 a0) {
    u32 v0;
    u32 t5;
    u32 t4;
    v0 = *(u32*)(a0);
    t5 = *(u16*)((a0 + 4));
    t4 = *(u16*)((a0 + 8));
    return ((((u32)((v0 << 5)) | ((u64)(1) << 0x3d)) | (((u32)(func_001667d0(*(u16*)((a0 + 4)))) << 0x1a) | ((u64)(1) << 0x22))) | (((t4 << 0x14) | (9 << 0x1e)) | ((((t5 >> 6) & 0xffff) << 0xe) | ((u64)(1) << 0x33))));
}
