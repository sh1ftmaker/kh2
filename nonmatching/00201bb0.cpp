// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e6f0 asm("D_01d9e6f0");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");

// 0x00201bb0 func_00201bb0
// minilink-rodata 0x003702d8   (float literals live here in the original)
void func_00201bb0(u32 a0, u32 a1, u32 a2) asm("func_00201bb0");
void func_00201bb0(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    f32 f20;
    *(u32*)((u32)frame) = 0;
    *(f32*)(((u32)frame + 4)) = (*(f32*)((a0 + 0x10)) * 0.5f);
    *(u32*)(((u32)frame + 8)) = 0;
    *(f32*)(((u32)frame + 0xc)) = 1.0f;
    f20 = (-(*(f32*)((a0 + 0x10))) * 0.5f);
    func_002f3cd8(a1, *(u32*)(&D_01d9e6e8) + 0x10, (u32)frame);
    *(f32*)(((u32)frame + 4)) = f20;
    func_002f3cd8(a2, *(u32*)(&D_01d9e6e8) + 0x10, (u32)frame);
    if (((s32)(*(u8*)((a0 + 0x15))) != 0)) {
        func_002f3cd8(a1, (u32)&D_01d9e6f0, a1);
        func_002f3cd8(a2, (u32)&D_01d9e6f0, a2);
    }
    return;
}
