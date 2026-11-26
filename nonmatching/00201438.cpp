// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00354bc0 asm("D_00354bc0");
extern "C" u32 D_00354bd0 asm("D_00354bd0");
extern "C" u32 func_0021ebe8(u32, u32) asm("func_0021ebe8");

// 0x00201438 func_00201438
// minilink-rodata 0x003702c4   (float literals live here in the original)
f32 func_00201438(u32 a0, u32 a1) asm("func_00201438");
f32 func_00201438(u32 a0, u32 a1) {
    u8 frame[16];
    f32 f1;
    f32 f3;
    u32 s0;
    u32 s0_0;
    f32 f2;
    u32 v0;
    f1 = (*(f32*)(&D_00354bd0) * 32768.0f);
    f3 = (*(f32*)(((u32)&D_00354bd0 + 8)) * 32768.0f);
    s0 = (a0 + *(u32*)((*(u32*)((a1 + 0xc)) + 0xc)));
    s0_0 = (s0 + 0xa0);
    f2 = (*(f32*)(((u32)&D_00354bd0 + 4)) * 32768.0f);
    *(u32*)((u32)frame) = (s32)((f1 / 3.1415927410125732f));
    *(u32*)(((u32)frame + 4)) = (s32)((f2 / 3.1415927410125732f));
    *(u32*)(((u32)frame + 8)) = (s32)((f3 / 3.1415927410125732f));
    v0 = func_0021ebe8(s0_0, (u32)frame);
    *(f32*)((s0_0 + 0x30)) = *(f32*)(&D_00354bc0);
    *(f32*)((s0_0 + 0x34)) = *(f32*)(((u32)&D_00354bc0 + 4));
    *(f32*)((s0_0 + 0x38)) = *(f32*)(((u32)&D_00354bc0 + 8));
    return v0;
}
