// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e840 asm("D_01d9e840");
extern "C" f32 func_0021f060(u32) asm("func_0021f060");
extern "C" void func_0021efc0(u32) asm("func_0021efc0");
extern "C" void func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");
extern "C" void func_002f3f98(u32, u32) asm("func_002f3f98");
extern "C" void func_002f4000(u32, u32) asm("func_002f4000");

// 0x0021fe40 func_0021fe40
// minilink-rodata 0x00370b7c   (float literals live here in the original)
f32 func_0021fe40(u32 a0, u32 a1) asm("func_0021fe40");
f32 func_0021fe40(u32 a0, u32 a1) {
    u8 frame[128];
    f32 f21;
    u32 s2;
    u32 s3;
    f32 f20;
    u32 s2_0;
    u32 s3_1;
    f32 f20_2;
    f32 f20_3;
    u32 s2_4;
    u32 s3_5;
    f32 f0;
    f32 f0_6;
    f32 f0_7;
    if ((*(u32*)(*(u32*)(a0)) != (u32)&D_01d9e360)) {
        if (((s32)(*(u32*)((*(u32*)(a0) + 4))) != 0)) {
            if (!((*(f32*)((*(u32*)(*(u32*)(a0)) + 0x7c)) == 0.0f))) {
                f21 = (1.0f < (*(f32*)((*(u32*)(*(u32*)(a0)) + 0xa4)) / (f32)((s32)(*(u16*)((a0 + 0x10)))))) ? 0.0f : (1.0f - (*(f32*)((*(u32*)(*(u32*)(a0)) + 0xa4)) / (f32)((s32)(*(u16*)((a0 + 0x10))))));
                if (((s32)(*(u8*)((*(u32*)(*(u32*)(a0)) + 0x8f))) != 0)) {
                    s2 = *(u32*)(*(u32*)(a0));
                    s3 = *(u32*)(a0);
                    f20 = (*(f32*)((*(u32*)(*(u32*)(a0)) + 0xa4)) / (f32)((s32)(*(u16*)((a0 + 0x10)))));
                    func_002f3f98((u32)frame, *(u32*)(*(u32*)(a0)));
                    f20_3 = f20;
                    s2_4 = s2;
                    s3_5 = s3;
                } else {
                    s2_0 = *(u32*)(*(u32*)(a0));
                    s3_1 = *(u32*)(a0);
                    f20_2 = (*(f32*)((*(u32*)(*(u32*)(a0)) + 0xa4)) / (f32)((s32)(*(u16*)((a0 + 0x10)))));
                    func_002f4000((u32)frame, a1);
                    *(f32*)(((u32)frame + 0x30)) = (*(f32*)(((u32)&D_01d9e840 + 0x30)) + *(f32*)((s2_0 + 0x80)));
                    *(f32*)(((u32)frame + 0x34)) = (*(f32*)(((u32)&D_01d9e840 + 0x34)) + *(f32*)((s2_0 + 0x84)));
                    *(f32*)(((u32)frame + 0x38)) = (*(f32*)(((u32)&D_01d9e840 + 0x38)) + *(f32*)((s2_0 + 0x88)));
                    f20_3 = f20_2;
                    s2_4 = s2_0;
                    s3_5 = s3_1;
                }
                *(f32*)((u32)frame) = *(f32*)((a0 + 0xc));
                if ((*(u8*)((a0 + 0x12)) != 1)) {
                    if ((*(u8*)((a0 + 0x12)) == 2)) {
                        *(f32*)((u32)frame) = (*(f32*)((a0 + 0xc)) * (f20_3 + 1.0f));
                    }
                } else {
                    *(f32*)((u32)frame) = (*(f32*)((a0 + 0xc)) * f21);
                }
                *(f32*)(((u32)frame + 0x14)) = *(f32*)((a0 + 0xc));
                if ((*(u8*)((a0 + 0x13)) != 1)) {
                    if ((*(u8*)((a0 + 0x13)) == 2)) {
                        *(f32*)(((u32)frame + 0x14)) = (*(f32*)((a0 + 0xc)) * (f20_3 + 1.0f));
                    }
                } else {
                    *(f32*)(((u32)frame + 0x14)) = (*(f32*)((a0 + 0xc)) * f21);
                }
                func_002f3f40((u32)frame, (u32)frame, *(f32*)(*(u32*)((a0 + 0x14))));
                func_002f3f40((u32)frame + 0x10, (u32)frame + 0x10, *(f32*)((*(u32*)((a0 + 0x14)) + 4)));
                func_002f3d08((u32)frame, *(u32*)((a0 + 8)), (u32)frame);
                *(u32*)(((u32)frame + 0x54)) = *(u32*)((a0 + 4));
                *(u8*)(((u32)frame + 0x57)) = (s32)((((f32)((s32)(*(u8*)(((u32)frame + 0x57)))) * *(f32*)((s2_4 + 0x7c))) * f21));
                *(u32*)(((u32)frame + 0x40)) = *(u32*)((s3_5 + 4));
                *(u32*)(((u32)frame + 0x44)) = (s3_5 + 8);
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
                f0 = *(f32*)((*(u32*)(*(u32*)(a0)) + 0x7c));
            }
            f0_6 = f0;
        }
        f0_7 = f0_6;
    }
    return f0_7;
}
