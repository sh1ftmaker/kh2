// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 func_001faea8(u32, u32, u32) asm("func_001faea8");
extern "C" void func_001fa668(u32, u32) asm("func_001fa668");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");

// 0x001fb3c8 func_001fb3c8
// minilink-rodata 0x00370260   (float literals live here in the original)
f32 func_001fb3c8(u32 a0, u32 a1, u32 a2) asm("func_001fb3c8");
f32 func_001fb3c8(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 s0;
    f32 f20;
    func_001fa668(a0, a1);
    *(u32*)((u32)frame) = 0;
    *(f32*)(((u32)frame + 0xc)) = 1.0f;
    s0 = (a0 + *(u32*)(*(u32*)((a2 + 0xc))));
    *(u32*)(((u32)frame + 4)) = 0;
    *(u32*)(((u32)frame + 8)) = 0;
    func_002f3cd8((u32)frame, *(u32*)(&D_01d9e6e8) + 0x50, (u32)frame);
    f20 = (1.0f / *(f32*)(((u32)frame + 0xc)));
    func_002f3f40(s0 + 0x150, (u32)frame, 1.0f / *(f32*)(((u32)frame + 0xc)));
    return func_001faea8(s0 + 0xa0, 0, 0);
}
