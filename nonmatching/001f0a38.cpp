// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e840 asm("D_01d9e840");
extern "C" u32 D_01d9e980 asm("D_01d9e980");
extern "C" u32 D_01d9e9c0 asm("D_01d9e9c0");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 D_01d9eac0 asm("D_01d9eac0");
extern "C" f32 func_0020f1e0(u32, u32, u32) asm("func_0020f1e0");
extern "C" void func_002f3d08(u32, u32, u32) asm("func_002f3d08");

// 0x001f0a38 func_001f0a38
// minilink-rodata 0x00370138   (float literals live here in the original)
f32 func_001f0a38(u32 a0, u32 a1, u32 a2) asm("func_001f0a38");
f32 func_001f0a38(u32 a0, u32 a1, u32 a2) {
    u8 frame[160];
    u32 t7;
    u8 t7_0;
    u32 s2;
    u32 s4;
    u32 s2_1;
    u32 s4_2;
    u32 t7_3;
    f32 f0;
    f32 f0_4;
    if ((*(u32*)((a1 + 4)) != 0xffff)) {
        *(u8*)(((u32)frame + 0x18)) = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8));
        *(u8*)(((u32)frame + 0x19)) = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 9));
        *(u8*)(((u32)frame + 0x1a)) = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xa));
        *(u8*)(((u32)frame + 0x1b)) = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xb));
        if (((s32)(*(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xb))) != 0)) {
            *(u32*)((u32)frame) = 0;
            if (((s32)((*(u8*)((a1 + 0x22)) & 2)) != 0)) {
                *(u32*)((u32)frame) = 4;
            } else {
                t7 = *(u8*)((a1 + 0x22));
                t7_0 = (t7 & 1);
                if (((s32)(t7_0) != 0)) {
                    *(u32*)((u32)frame) = 0x80;
                }
            }
            if (((s32)((*(u32*)(*(u32*)((((*(u32*)((a1 + 4)) * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x1c))) & 1)) == 0)) {
                *(u32*)((u32)frame) = (*(u32*)((u32)frame) | 8);
            }
            if (((*(u32*)(*(u32*)((((*(u32*)((a1 + 4)) * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x1c))) & 2) == 0)) {
                *(u32*)((u32)frame) = (*(u32*)((u32)frame) | 0x10);
            }
            if (((s32)(*(u8*)((a1 + 0x23))) != 0)) {
                *(u32*)((u32)frame) = (*(u32*)((u32)frame) | 0x200);
            }
            if (((s32)(*(u8*)((a1 + 0x24))) != 0)) {
                *(u32*)((u32)frame) = (*(u32*)((u32)frame) | 0x100);
            }
            if (((s32)(*(u8*)((a1 + 0x25))) != 0)) {
                *(u32*)((u32)frame) = ((*(u32*)((u32)frame) & 0xffffffef) | 0x2000);
                *(u32*)(((u32)frame + 0x30)) = ((u32)frame + 0x60);
                s2 = *(u32*)((((*(u32*)((a1 + 4)) * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x1c));
                s4 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0);
                func_002f3d08((u32)frame + 0x60, (u32)&D_01d9e840, *(u32*)(&D_01d9e6e8) + 0x10);
                s2_1 = s2;
                s4_2 = s4;
            } else {
                *(u32*)(((u32)frame + 0x30)) = 0;
                s2_1 = *(u32*)((((*(u32*)((a1 + 4)) * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x1c));
                s4_2 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0);
            }
            *(u32*)(((u32)frame + 4)) = (u32)&D_01d9eac0;
            t7_3 = (*(u8*)((a1 + 0x20)) == 0xff) ? *(u16*)((s2_1 + 0x16)) : *(u16*)((a1 + 0x20));
            *(u16*)(((u32)frame + 8)) = t7_3;
            *(u8*)(((u32)frame + 0xa)) = 0;
            *(u32*)(((u32)frame + 0xc)) = 0;
            *(u32*)(((u32)frame + 0x10)) = (s32)((*(f32*)((s4_2 + 4)) * 65536.0f));
            *(u32*)(((u32)frame + 0x14)) = (s32)((*(f32*)((s4_2 + 0x10)) * 65536.0f));
            if (((s32)(*(u8*)((a1 + 0x26))) != 0)) {
                *(u32*)(((u32)frame + 0x44)) = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 0xc))) + 0xa0);
            } else {
                *(u32*)(((u32)frame + 0x44)) = 0;
            }
            *(u32*)(((u32)frame + 0x1c)) = 0;
            *(u32*)(((u32)frame + 0x20)) = (*(u32*)(&D_01d9e6e8) + 0x50);
            *(u32*)(((u32)frame + 0x24)) = (u32)&D_01d9e9c0;
            *(u32*)(((u32)frame + 0x2c)) = (*(u32*)(&D_01d9e6e8) + 0x10);
            *(u32*)(((u32)frame + 0x34)) = *(u32*)(&D_01d9eaa4);
            *(u32*)(((u32)frame + 0x28)) = (u32)&D_01d9e980;
            *(u32*)(((u32)frame + 0x38)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x90));
            *(u32*)(((u32)frame + 0x3c)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x94));
            *(u32*)(((u32)frame + 0x40)) = 0;
            *(u8*)(((u32)frame + 0x4c)) = 0;
            *(u8*)(((u32)frame + 0x4d)) = 0;
            *(u32*)(&D_01d9eaa4) = func_0020f1e0(s2_1, (u32)frame, *(u32*)((((*(u32*)((a1 + 4)) * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x20)));
            f0 = func_0020f1e0(s2_1, (u32)frame, *(u32*)((((*(u32*)((a1 + 4)) * 0x24) + *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10))) + 0x20)));
        }
        f0_4 = f0;
    }
    return f0_4;
}
