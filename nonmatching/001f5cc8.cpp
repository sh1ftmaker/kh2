// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" f32 func_002226b8(u32, u32) asm("func_002226b8");
extern "C" u32 func_001e7a98(u32, u32, u32) asm("func_001e7a98");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");
extern "C" void func_002f3d98(u32, u32) asm("func_002f3d98");
extern "C" void func_002f3f10(u32, u32, u32) asm("func_002f3f10");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");

// 0x001f5cc8 func_001f5cc8
// minilink-rodata 0x003701bc   (float literals live here in the original)
f32 func_001f5cc8(u32 a0, u32 a1, u32 a2) asm("func_001f5cc8");
f32 func_001f5cc8(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 s1;
    if (((s32)((*(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 0x10)) << 4))) != 0)) {
        v0 = func_001e7a98(*(u32*)(&D_01d9e6e0), *(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 0x10)) << 4), a2);
        *(u32*)((v0 + 4)) = a0;
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    *(f32*)((u32)frame) = (f32)((s32)(*(s16*)(a2)));
    *(f32*)(((u32)frame + 4)) = (f32)((s32)(*(s16*)((a2 + 2))));
    *(f32*)(((u32)frame + 8)) = (f32)((s32)(*(s16*)((a2 + 4))));
    *(f32*)(((u32)frame + 0xc)) = 1.0f;
    s0 = ((v0_0 + *(u32*)((a1 + 0x14))) + 0xa0);
    s1 = ((v0_0 + *(u32*)((a1 + 0x1c))) + 0xa0);
    func_002f3cd8((u32)frame, *(u32*)(&D_01d9e6e8) + 0x10, (u32)frame);
    func_002226b8(s0, (u32)frame);
    func_002f3f10((u32)frame, (u32)frame, *(u32*)(&D_01d9e6e8) + 0x40);
    func_002f3d98((u32)frame, (u32)frame);
    func_002f3f40((u32)frame, (u32)frame, *(f32*)((a1 + 8)));
    return func_002226b8(s1, (u32)frame);
}
