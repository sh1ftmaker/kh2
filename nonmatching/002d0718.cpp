// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001444c8(u32, u32, u32) asm("func_001444c8");
extern "C" f32 func_001a9350(u32) asm("func_001a9350");
extern "C" u32 func_0016e920(u32, u32) asm("func_0016e920");
extern "C" u32 func_0016f6f8(u32) asm("func_0016f6f8");
extern "C" u32 func_001a93e8(u32) asm("func_001a93e8");
extern "C" void func_001a91f8(u32, u32, u32) asm("func_001a91f8");
extern "C" void func_001a92d8(u32, u32, u32) asm("func_001a92d8");

// 0x002d0718 func_002d0718
// minilink-rodata 0x0037598c   (float literals live here in the original)
f32 func_002d0718(u32 a0, u32 a1) asm("_ZN2Ti5MGObj25get_bbox_for_appear_checkEPKN2YS13UNIT_DATA_OBJE");
f32 func_002d0718(u32 a0, u32 a1) {
    u8 frame[96];
    u32 s4;
    u32 s0;
    u32 v0;
    f32 f0;
    s4 = func_0016e920(*(u32*)(a1), a1);
    if (((s32)(func_0016f6f8(*(u32*)(a1))) != 0)) {
        s0 = *(u32*)(a1);
        func_001a91f8((u32)frame, (u32)frame, (u32)frame + 0x10);
        func_001a92d8((u32)frame, s0, s4);
        v0 = func_001a93e8((u32)frame);
        ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(v0) + 0x10))))(v0, (u32)frame + 0x20, (u32)frame + 0x30);
        *(f32*)(((u32)frame + 0x24)) = -(*(f32*)(((u32)frame + 0x24)));
        *(f32*)(((u32)frame + 0x28)) = -(*(f32*)(((u32)frame + 0x28)));
        *(f32*)(((u32)frame + 0x34)) = -(*(f32*)(((u32)frame + 0x34)));
        *(f32*)(((u32)frame + 0x38)) = -(*(f32*)(((u32)frame + 0x38)));
        func_001444c8((u32)frame + 0x40, (u32)frame + 0x20, (u32)frame + 0x30);
        *(u32*)(a0) = *(u32*)(((u32)frame + 0x40));
        *(u32*)((a0 + 4)) = *(u32*)(((u32)frame + 0x44));
        *(u32*)((a0 + 8)) = *(u32*)(((u32)frame + 0x48));
        *(u32*)((a0 + 0xc)) = *(u32*)(((u32)frame + 0x4c));
        *(u32*)((a0 + 0x10)) = *(u32*)(((u32)frame + 0x50));
        *(u32*)((a0 + 0x14)) = *(u32*)(((u32)frame + 0x54));
        func_001a9350((u32)frame);
        f0 = func_001a9350((u32)frame);
    } else {
        *(f32*)((u32)frame) = -100.0f;
        *(f32*)(((u32)frame + 4)) = -100.0f;
        *(f32*)(((u32)frame + 8)) = -100.0f;
        *(f32*)(((u32)frame + 0xc)) = 0.0f;
        *(f32*)(((u32)frame + 0x10)) = 100.0f;
        *(f32*)(((u32)frame + 0x14)) = 100.0f;
        *(f32*)(((u32)frame + 0x18)) = 100.0f;
        *(f32*)(((u32)frame + 0x1c)) = 0.0f;
        func_001444c8((u32)frame + 0x20, (u32)frame, (u32)frame + 0x10);
        *(u32*)(a0) = *(u32*)(((u32)frame + 0x20));
        *(u32*)((a0 + 4)) = *(u32*)(((u32)frame + 0x24));
        *(u32*)((a0 + 8)) = *(u32*)(((u32)frame + 0x28));
        *(u32*)((a0 + 0xc)) = *(u32*)(((u32)frame + 0x2c));
        *(u32*)((a0 + 0x10)) = *(u32*)(((u32)frame + 0x30));
        *(u32*)((a0 + 0x14)) = *(u32*)(((u32)frame + 0x34));
        f0 = func_001444c8((u32)frame + 0x20, (u32)frame, (u32)frame + 0x10);
    }
    return f0;
}
