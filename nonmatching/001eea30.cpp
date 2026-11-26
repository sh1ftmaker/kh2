// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" f32 func_001ee980(u32, u32, u32, f32, f32) asm("func_001ee980");
extern "C" f32 func_001ee988(u32) asm("func_001ee988");

// 0x001eea30 func_001eea30
void func_001eea30(u32 a0, u32 a1, u32 a2) asm("func_001eea30");
void func_001eea30(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 s0_0;
    u32 a1_1;
    u32 a2_2;
    u32 a0_3;
    u32 a1_4;
    u32 a2_5;
    u32 a0_6;
    u32 a1_7;
    u32 a2_8;
    u32 s0_9;
    u32 s3;
    u32 a0_10;
    u32 a1_11;
    u32 a2_12;
    u32 a0_13;
    u32 a1_14;
    u32 a2_15;
    if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
        if (((s32)((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00))) == 0)) {
            if ((*(u32*)((a0 + 0xc)) == 0)) {
                s0 = *(u32*)(*(u32*)((a2 + 0xc)));
                *(f32*)(((a0 + s0) + 0xa0)) = func_001ee988(*(u8*)((a1 + 0x14)));
                *(f32*)((((a0 + s0) + 0xa0) + 4)) = func_001ee988(*(u8*)((a1 + 0x14)));
                *(f32*)((((a0 + s0) + 0xa0) + 8)) = func_001ee988(*(u8*)((a1 + 0x14)));
                s0_0 = (*(u32*)((a1 + 4)) != 0xffffffff) ? ((a0 + *(u32*)((a1 + 4))) + 0xa0) : (u32)&D_01d9e360;
                *(f32*)(s0_0) = (*(f32*)(s0_0) + func_001ee980(*(u32*)((a1 + 4)), a1_1, a2_2, *(f32*)((a1 + 8)), *(f32*)(((a0 + s0) + 0xa0))));
                *(f32*)((s0_0 + 4)) = (*(f32*)((s0_0 + 4)) + func_001ee980(a0_3, a1_4, a2_5, *(f32*)((a1 + 0xc)), *(f32*)((((a0 + s0) + 0xa0) + 4))));
                *(f32*)((s0_0 + 8)) = (*(f32*)((s0_0 + 8)) + func_001ee980(a0_6, a1_7, a2_8, *(f32*)((a1 + 0x10)), *(f32*)((((a0 + s0) + 0xa0) + 8))));
            } else {
                if ((*(u32*)(a1) == *(u32*)((a0 + 0xc)))) {
                    s0_9 = (*(u32*)((a1 + 4)) != 0xffffffff) ? ((a0 + *(u32*)((a1 + 4))) + 0xa0) : (u32)&D_01d9e360;
                    s3 = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                    *(f32*)(s0_9) = (*(f32*)(s0_9) + func_001ee980(*(u32*)((a1 + 4)), a1, a2, *(f32*)((a1 + 8)), *(f32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0))));
                    *(f32*)((s0_9 + 4)) = (*(f32*)((s0_9 + 4)) + func_001ee980(a0_10, a1_11, a2_12, *(f32*)((a1 + 0xc)), *(f32*)((s3 + 4))));
                    *(f32*)((s0_9 + 8)) = (*(f32*)((s0_9 + 8)) + func_001ee980(a0_13, a1_14, a2_15, *(f32*)((a1 + 0x10)), *(f32*)((s3 + 8))));
                }
            }
        }
    }
    return;
}
