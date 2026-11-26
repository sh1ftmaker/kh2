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

// 0x0021fa28 func_0021fa28
f32 func_0021fa28(u32 a0, u32 a1) asm("func_0021fa28");
f32 func_0021fa28(u32 a0, u32 a1) {
    u8 frame[128];
    u32 s3;
    u32 s2;
    u32 t7;
    u32 t7_0;
    f32 f0;
    f32 f2;
    f32 f3;
    f32 f1;
    f32 f2_1;
    f32 f0_2;
    f32 f0_3;
    f32 f0_4;
    f32 f0_5;
    s3 = *(u32*)(a0);
    s2 = *(u32*)(s3);
    if ((s2 != (u32)&D_01d9e360)) {
        t7 = *(u32*)((s3 + 4));
        if (((s32)(t7) != 0)) {
            if (!((*(f32*)((s2 + 0x7c)) == 0.0f))) {
                t7_0 = *(u8*)((s2 + 0x8f));
                if (((s32)(t7_0) != 0)) {
                    func_002f3f98((u32)frame, s2);
                } else {
                    f0 = *(f32*)(((u32)&D_01d9e840 + 0x30));
                    func_002f4000((u32)frame, a1);
                    *(f32*)(((u32)frame + 0x30)) = (f0 + *(f32*)((s2 + 0x80)));
                    f2 = *(f32*)(((u32)&D_01d9e840 + 0x34));
                    *(f32*)(((u32)frame + 0x34)) = (f2 + *(f32*)((s2 + 0x84)));
                    f3 = *(f32*)(((u32)&D_01d9e840 + 0x38));
                    *(f32*)(((u32)frame + 0x38)) = (f3 + *(f32*)((s2 + 0x88)));
                }
                f1 = *(f32*)(((u32)frame + 0x14));
                f2_1 = *(f32*)((a0 + 0xc));
                f0_2 = *(f32*)((u32)frame);
                *(f32*)((u32)frame) = (f0_2 * f2_1);
                *(f32*)(((u32)frame + 0x14)) = (f1 * f2_1);
                func_002f3f40((u32)frame, (u32)frame, *(f32*)(*(u32*)((a0 + 0x10))));
                func_002f3f40((u32)frame + 0x10, (u32)frame + 0x10, *(f32*)((*(u32*)((a0 + 0x10)) + 4)));
                func_002f3f40((u32)frame + 0x20, (u32)frame + 0x20, *(f32*)((*(u32*)((a0 + 0x10)) + 8)));
                func_002f3d08((u32)frame, *(u32*)((a0 + 8)), (u32)frame);
                *(u32*)(((u32)frame + 0x54)) = *(u32*)((a0 + 4));
                *(u8*)(((u32)frame + 0x57)) = (s32)(((f32)((s32)(*(u8*)(((u32)frame + 0x57)))) * *(f32*)((s2 + 0x7c))));
                *(u32*)(((u32)frame + 0x40)) = *(u32*)((s3 + 4));
                *(u32*)(((u32)frame + 0x44)) = (s3 + 8);
                func_0021efc0((u32)frame + 0x40);
                *(u16*)(((u32)frame + 0x52)) = a1;
                *(u32*)(((u32)frame + 0x58)) = 0;
                *(u32*)(((u32)frame + 0x5c)) = 0;
                *(u32*)(((u32)frame + 0x60)) = (u32)frame;
                *(u32*)(((u32)frame + 0x6c)) = 0;
                func_0021f060((u32)frame + 0x40);
                f0_3 = func_0021f060((u32)frame + 0x40);
            } else {
                f0_3 = 0.0f;
            }
            f0_4 = f0_3;
        } else {
            f0_4 = 0.0f;
        }
        f0_5 = f0_4;
    }
    return f0_5;
}
