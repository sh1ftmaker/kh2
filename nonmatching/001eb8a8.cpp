// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e980 asm("D_01d9e980");
extern "C" u32 D_01d9e9c0 asm("D_01d9e9c0");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 D_01d9eac0 asm("D_01d9eac0");
extern "C" f32 func_0020f1e0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0020f1e0");

// 0x001eb8a8 func_001eb8a8
// minilink-rodata 0x003700c4   (float literals live here in the original)
f32 func_001eb8a8(u32 a0, u32 a1, u32 a2) asm("func_001eb8a8");
f32 func_001eb8a8(u32 a0, u32 a1, u32 a2) {
    u8 frame[96];
    u32 t5;
    u32 t7;
    u32 t4;
    u32 t7_0;
    u32 t6;
    u32 a0_1;
    u32 t7_2;
    u32 t7_3;
    u32 t5_4;
    f32 f0;
    f32 f1;
    f32 f0_5;
    f32 f0_6;
    t5 = *(u32*)((a2 + 0xc));
    t7 = *(u32*)((t5 + 8));
    t4 = *(u32*)((a1 + 4));
    if ((t4 != 0xffff)) {
        t7_0 = *(u32*)(t5);
        t6 = *(u8*)((((a0 + t7_0) + 0xa0) + 0xb));
        *(u8*)(((u32)frame + 0x1b)) = t6;
        if (((s32)(t6) != 0)) {
            a0_1 = *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (t4 * 0x24)) + 0x1c));
            if (((s32)((*(u32*)(a0_1) & 1)) != 0)) {
                t7_2 = 0x80;
            } else {
                t7_2 = 0xc;
            }
            *(u32*)((u32)frame) = t7_2;
            if (((s32)((*(u32*)(a0_1) & 2)) == 0)) {
                t7_3 = *(u32*)((u32)frame);
                *(u32*)((u32)frame) = (t7_3 | 0x10);
            }
            *(u8*)(((u32)frame + 0xa)) = 0;
            *(u16*)(((u32)frame + 8)) = *(u16*)((a0_1 + 0x16));
            t5_4 = *(u32*)(&D_01d9e6e8);
            *(u32*)(((u32)frame + 0x1c)) = 0;
            *(u32*)(((u32)frame + 0x38)) = *(u32*)((t5_4 + 0x90));
            *(u32*)(((u32)frame + 0x3c)) = *(u32*)((t5_4 + 0x94));
            f0 = *(f32*)((((a0 + t7) + 0xa0) + 0xc));
            f1 = *(f32*)(((a0 + t7) + 0xa0));
            *(u8*)(((u32)frame + 0x18)) = *(u8*)((((a0 + t7_0) + 0xa0) + 8));
            *(u32*)(((u32)frame + 4)) = (u32)&D_01d9eac0;
            *(u32*)(((u32)frame + 0xc)) = 0;
            *(u32*)(((u32)frame + 0x10)) = (s32)((f1 * 65536.0f));
            *(u32*)(((u32)frame + 0x14)) = (s32)((f0 * 65536.0f));
            *(u8*)(((u32)frame + 0x19)) = *(u8*)((((a0 + t7_0) + 0xa0) + 9));
            *(u8*)(((u32)frame + 0x1a)) = *(u8*)((((a0 + t7_0) + 0xa0) + 0xa));
            *(u32*)(((u32)frame + 0x20)) = (t5_4 + 0x50);
            *(u32*)(((u32)frame + 0x24)) = (u32)&D_01d9e9c0;
            *(u32*)(((u32)frame + 0x28)) = (u32)&D_01d9e980;
            *(u32*)(((u32)frame + 0x2c)) = (t5_4 + 0x10);
            *(u32*)(((u32)frame + 0x34)) = *(u32*)(&D_01d9eaa4);
            *(u32*)(((u32)frame + 0x40)) = 0;
            *(u32*)(((u32)frame + 0x44)) = 0;
            *(u8*)(((u32)frame + 0x4c)) = 0;
            *(u8*)(((u32)frame + 0x4d)) = 0;
            *(u32*)(&D_01d9eaa4) = func_0020f1e0(a0_1, (u32)frame, *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (t4 * 0x24)) + 0x20)), *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (t4 * 0x24), (a0 + t7) + 0xa0, t5_4 + 0x10, t5_4 + 0x50, *(u32*)(&D_01d9eaa4));
            f0_5 = func_0020f1e0(a0_1, (u32)frame, *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (t4 * 0x24)) + 0x20)), *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (t4 * 0x24), (a0 + t7) + 0xa0, t5_4 + 0x10, t5_4 + 0x50, *(u32*)(&D_01d9eaa4));
        }
        f0_6 = f0_5;
    }
    return f0_6;
}
