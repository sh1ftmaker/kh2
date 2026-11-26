// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003769a0 asm("D_003769a0");
extern "C" u32 D_01e2d980 asm("D_01e2d980");
extern "C" u32 D_01e2da80 asm("D_01e2da80");
extern "C" u32 D_01e2fe40 asm("D_01e2fe40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_002f5c48(u32) asm("func_002f5c48");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00305660(u32) asm("func_00305660");

// 0x002f5498 func_002f5498
u32 func_002f5498(u32 a0) asm("func_002f5498");
u32 func_002f5498(u32 a0) {
    u8 frame[16];
    u32 s0;
    u32 v0;
    func_00305660(*(u32*)(&D_01e2fe40));
    *(u32*)(((u32)&D_01e2da80 + 8)) = 2;
    *(u32*)((u32)frame) = 0;
    *(u32*)(((u32)&D_01e2da80 + 0x10)) = *(u32*)((a0 + 8));
    *(u32*)(((u32)&D_01e2da80 + 0x14)) = *(u32*)((a0 + 0xc));
    if (((s32)(func_003094b8((u32)&D_01e2d980, 0x8000131d, 0, (u32)&D_01e2da80, 0x90, (u32)&D_01e2da80, 0x90, 0)) < 0)) {
        func_002f5c48((u32)&D_003769a0);
        func_00305640(*(u32*)(&D_01e2fe40));
        v0 = 0xffffffff;
    } else {
        s0 = *(u32*)(((u32)&D_01e2da80 + 4));
        func_00305640(*(u32*)(&D_01e2fe40));
        v0 = s0;
    }
    return v0;
}
