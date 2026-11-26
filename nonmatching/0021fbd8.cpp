// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e840 asm("D_01d9e840");
extern "C" f32 func_0021f060(u32) asm("func_0021f060");
extern "C" void func_0021efc0(u32) asm("func_0021efc0");
extern "C" void func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");
extern "C" void func_002f3f88(u32, u32) asm("func_002f3f88");

// 0x0021fbd8 func_0021fbd8
// minilink-rodata 0x00370b78   (float literals live here in the original)
f32 func_0021fbd8(u32 a0, u32 a1) asm("func_0021fbd8");
f32 func_0021fbd8(u32 a0, u32 a1) {
    u8 frame[128];
    u32 s0;
    u32 s2;
    f32 f20;
    f32 f2;
    f32 f20_0;
    f32 f0;
    f32 f0_1;
    f32 f0_2;
    if ((*(u32*)(*(u32*)(a0)) != (u32)&D_01d9e360)) {
        if (((s32)(*(u32*)((*(u32*)(a0) + 4))) != 0)) {
            if (!((*(f32*)((*(u32*)(*(u32*)(a0)) + 0x7c)) == 0.0f))) {
                s0 = *(u32*)(*(u32*)(a0));
                s2 = *(u32*)(a0);
                func_002f3f88((u32)frame, *(u32*)(*(u32*)(a0)) + 0x40);
                func_002f3f88((u32)frame + 0x10, s0 + 0x50);
                func_002f3f88((u32)frame + 0x20, s0 + 0x60);
                func_002f3f88((u32)frame + 0x30, s0 + 0x30);
                f20 = ((*(f32*)((a0 + 0xc)) * *(f32*)((s0 + 0xa4))) / (f32)((s32)(*(u16*)((a0 + 0x10)))));
                func_002f3f40((u32)frame, (u32)frame, -(((*(f32*)((a0 + 0xc)) * *(f32*)((s0 + 0xa4))) / (f32)((s32)(*(u16*)((a0 + 0x10)))))));
                func_002f3f40((u32)frame + 0x10, (u32)frame + 0x10, f20);
                if ((*(u8*)((s0 + 0x8f)) == 0)) {
                    *(f32*)(((u32)frame + 0x30)) = (*(f32*)(((u32)&D_01d9e840 + 0x30)) + *(f32*)((s0 + 0x80)));
                    *(f32*)(((u32)frame + 0x34)) = (*(f32*)(((u32)&D_01d9e840 + 0x34)) + *(f32*)((s0 + 0x84)));
                    *(f32*)(((u32)frame + 0x38)) = (*(f32*)(((u32)&D_01d9e840 + 0x38)) + *(f32*)((s0 + 0x88)));
                }
                func_002f3f40((u32)frame, (u32)frame, *(f32*)(*(u32*)((a0 + 0x14))));
                func_002f3f40((u32)frame + 0x10, (u32)frame + 0x10, *(f32*)((*(u32*)((a0 + 0x14)) + 4)));
                func_002f3f40((u32)frame + 0x20, (u32)frame + 0x20, *(f32*)((*(u32*)((a0 + 0x14)) + 8)));
                func_002f3d08((u32)frame, *(u32*)((a0 + 8)), (u32)frame);
                *(u32*)(((u32)frame + 0x54)) = *(u32*)((a0 + 4));
                f2 = !((1.0f < (*(f32*)((s0 + 0xa4)) / (f32)((s32)(*(u16*)((a0 + 0x12))))))) ? (*(f32*)((s0 + 0xa4)) / (f32)((s32)(*(u16*)((a0 + 0x12))))) : 1.0f;
                *(u8*)(((u32)frame + 0x57)) = (s32)((((f32)((s32)(*(u8*)(((u32)frame + 0x57)))) * *(f32*)((s0 + 0x7c))) * f2));
                *(u32*)(((u32)frame + 0x40)) = *(u32*)((s2 + 4));
                *(u32*)(((u32)frame + 0x44)) = (s2 + 8);
                f20_0 = (*(f32*)((s0 + 0xa4)) / (f32)((s32)(*(u16*)((a0 + 0x12)))));
                func_0021efc0((u32)frame + 0x40);
                *(u16*)(((u32)frame + 0x52)) = a1;
                *(u32*)(((u32)frame + 0x58)) = 0;
                *(u16*)(((u32)frame + 0x5c)) = 0;
                *(u16*)(((u32)frame + 0x5e)) = 0;
                *(u32*)(((u32)frame + 0x60)) = (u32)frame;
                *(u32*)(((u32)frame + 0x6c)) = 0;
                func_0021f060((u32)frame + 0x40);
                f0 = func_0021f060((u32)frame + 0x40);
            } else {
                f0 = 0.0f;
            }
            f0_1 = f0;
        } else {
            f0_1 = 0.0f;
        }
        f0_2 = f0_1;
    }
    return f0_2;
}
