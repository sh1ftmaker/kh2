// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3c4 asm("D_0035f3c4");
extern "C" u32 D_0035f3cc asm("D_0035f3cc");
extern "C" void func_0028c0a0(u32, u32, u32, u32, u32, u32) asm("func_0028c0a0");

// 0x0028c2c8 func_0028c2c8
u32 func_0028c2c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_0028c2c8");
u32 func_0028c2c8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 s1;
    *(u32*)((*(u32*)(&D_0035f3c4) + 0x3780)) = (*(u32*)((*(u32*)(&D_0035f3c4) + 0x3780)) + -1);
    s1 = (*(u32*)(&D_0035f3c4) + (*(u32*)(((((*(u32*)((*(u32*)(&D_0035f3c4) + 0x3780)) + -1) << 2) + *(u32*)(&D_0035f3c4)) + 0x3700)) * 0x1b8));
    func_0028c0a0(*(u32*)(&D_0035f3c4) + (*(u32*)(((((*(u32*)((*(u32*)(&D_0035f3c4) + 0x3780)) + -1) << 2) + *(u32*)(&D_0035f3c4)) + 0x3700)) * 0x1b8), a2, a0, a1, a3, a4);
    if (((s32)(*(u8*)((a1 + 0x190))) != 0)) {
        *(u32*)(((s1 + 0x18) + 0xb8)) = (*(u32*)(((s1 + 0x18) + 0xb8)) | 8);
    } else {
        *(u32*)(((s1 + 0x18) + 0xb8)) = (*(u32*)(((s1 + 0x18) + 0xb8)) & 0xfffffff7);
    }
    *(u32*)((s1 + 0x1b4)) = 0;
    *(u32*)(&D_0035f3cc) = (*(u32*)(&D_0035f3cc) + 1);
    return s1;
}
