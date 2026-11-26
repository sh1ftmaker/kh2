// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" u32 func_002226b8(u32, u32, u32) asm("func_002226b8");

// 0x001f4eb8 func_001f4eb8
void func_001f4eb8(u32 a0, u32 a1, u32 a2) asm("func_001f4eb8");
void func_001f4eb8(u32 a0, u32 a1, u32 a2) {
    u32 a0_0;
    u32 a0_1;
    a0_0 = (a0 + *(u32*)(*(u32*)((a2 + 0xc))));
    if ((*(u32*)((a0 + 0xc)) == *(u32*)(a1))) {
        a0_1 = (a0_0 + 0xa0);
        *(f32*)((a0_1 + 0x10)) = *(f32*)((a1 + 8));
        *(f32*)((a0_1 + 0x18)) = *(f32*)((a1 + 4));
        *(f32*)((a0_1 + 0x14)) = *(f32*)((a1 + 0xc));
        a1 = (*(u32*)((a1 + 0x10)) != 0xffffffff) ? ((*(u32*)((((*(u32*)((a1 + 0x10)) << 4) + *(u32*)((*(u32*)(&D_01d9e6e0) + 0x80))) + 4)) + *(u32*)((a1 + 0x14))) + 0xa0) : (u32)&D_01d9e360;
        *(u32*)((a0_1 + 0x1c)) = a1;
        if ((a1 == (u32)&D_01d9e360)) {
            *(u32*)((a0_1 + 0x1c)) = 0;
        }
    }
    if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
        if (((s32)((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00))) == 0)) {
            func_002226b8(a0_1, *(u32*)(&D_01d9e6e8) + 0x40, a2);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
