// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0035da80 asm("D_0035da80");
extern "C" u32 D_01d9ea94 asm("D_01d9ea94");
extern "C" u32 func_001e8fe0(u32, u32) asm("func_001e8fe0");

// 0x001fc5b8 func_001fc5b8
u32 func_001fc5b8(u32 a0, u32 a1, u32 a2) asm("func_001fc5b8");
u32 func_001fc5b8(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 t7;
    u32 a0_0;
    u32 t5;
    u32 t1;
    u32 t6;
    u32 t3;
    u32 t7_1;
    u32 t2;
    u32 v0;
    t7 = *(u32*)((a2 + 0xc));
    a0_0 = *(u32*)(t7);
    *(u32*)(&D_01d9ea94) = ((a0 + a0_0) + 0xa0);
    *(u64*)((u32)frame) = *(u64*)((((a0 + a0_0) + 0xa0) + 0x80));
    t5 = *(u32*)((((a0 + a0_0) + 0xa0) + 0x88));
    t1 = *(u32*)((((a0 + *(u32*)((t7 + 4))) + 0xa0) + 8));
    t6 = *(u32*)((u32)frame);
    t3 = *(u32*)(((a0 + *(u32*)((t7 + 4))) + 0xa0));
    *(u32*)(((u32)frame + 8)) = (t5 - t1);
    t7_1 = *(u32*)(((u32)frame + 4));
    t2 = *(u32*)((((a0 + *(u32*)((t7 + 4))) + 0xa0) + 4));
    *(u32*)((((a0 + a0_0) + 0xa0) + 0x80)) = t3;
    *(u32*)((((a0 + a0_0) + 0xa0) + 0x84)) = t2;
    *(u32*)((((a0 + a0_0) + 0xa0) + 0x88)) = t1;
    *(u32*)((u32)frame) = (t6 - t3);
    *(u32*)(((u32)frame + 4)) = (t7_1 - t2);
    v0 = func_001e8fe0((a0 + a0_0) + 0xe0, (u32)frame);
    *(Q16*)((((a0 + a0_0) + 0xa0) + 0x70)) = *(Q16*)(&D_0035da80);
    return v0;
}
