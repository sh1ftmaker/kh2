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

// 0x001f5f10 func_001f5f10
// minilink-rodata 0x003701c0   (float literals live here in the original)
f32 func_001f5f10(u32 a0, u32 a1, u32 a2) asm("func_001f5f10");
f32 func_001f5f10(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 t5;
    u32 t6;
    u32 t7;
    u32 v0;
    u32 v0_0;
    u32 s1;
    u32 s0;
    t5 = *(u32*)(&D_01d9e6e0);
    t6 = *(u32*)((a1 + 0xc));
    t7 = *(u32*)((t5 + 0x80));
    if (((s32)((t7 + (t6 << 4))) != 0)) {
        v0 = func_001e7a98(t5, t7 + (t6 << 4), a2);
        *(u32*)((v0 + 4)) = a0;
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    s1 = *(u32*)((a1 + 0x18));
    s0 = *(u32*)((a1 + 0x10));
    *(f32*)((u32)frame) = (f32)((s32)(*(s16*)(a2)));
    *(f32*)(((u32)frame + 4)) = (f32)((s32)(*(s16*)((a2 + 2))));
    *(f32*)(((u32)frame + 8)) = (f32)((s32)(*(s16*)((a2 + 4))));
    *(f32*)(((u32)frame + 0xc)) = 1.0f;
    func_002f3cd8((u32)frame, *(u32*)(&D_01d9e6e8) + 0x10, (u32)frame);
    func_002226b8((v0_0 + s0) + 0xa0, (u32)frame);
    func_002f3f10((u32)frame, (u32)frame, *(u32*)(&D_01d9e6e8) + 0x40);
    func_002f3d98((u32)frame, (u32)frame);
    return func_002226b8((v0_0 + s1) + 0xa0, (u32)frame);
}
