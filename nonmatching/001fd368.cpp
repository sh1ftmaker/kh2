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

// 0x001fd368 func_001fd368
// minilink-rodata 0x0037027c   (float literals live here in the original)
f32 func_001fd368(u32 a0, u32 a1, u32 a2) asm("func_001fd368");
f32 func_001fd368(u32 a0, u32 a1, u32 a2) {
    u8 loc_1b;
    u32 loc_0;
    u8 loc_a;
    u16 loc_8;
    u32 loc_1c;
    u32 loc_38;
    u32 loc_14;
    u8 loc_19;
    u32 loc_10;
    u32 loc_3c;
    u8 loc_18;
    u8 loc_1a;
    u32 loc_4;
    u32 loc_20;
    u32 loc_28;
    u32 loc_2c;
    u32 loc_24;
    u32 loc_34;
    u8 loc_4d;
    u32 loc_c;
    u32 loc_40;
    u32 loc_44;
    u8 loc_4c;
    f32 f0;
    f32 f0_0;
    if ((*(u32*)((a1 + 4)) != 0xffff)) {
        loc_1b = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xb));
        if (((s32)(*(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xb))) != 0)) {
            loc_0 = 0;
            if (((s32)((*(u8*)((a1 + 0x20)) & 2)) != 0)) {
                loc_0 = 4;
                if (((s32)((*(u32*)(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c))) & 1)) == 0)) {
                    loc_0 = 0xc;
                }
            } else {
                if (((s32)(((*(u8*)((a1 + 0x20)) & 1) & 0xff)) != 0)) {
                    loc_0 = 0x80;
                }
                if (((*(u32*)(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c))) & 1) == 0)) {
                    loc_0 = (loc_0 | 8);
                }
            }
            if (((s32)((*(u32*)(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c))) & 2)) == 0)) {
                loc_0 = (loc_0 | 0x10);
            }
            loc_8 = *(u16*)((*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c)) + 0x16));
            loc_a = 0;
            loc_1c = 0;
            loc_38 = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x90));
            loc_14 = (s32)((*(f32*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0) + 0xc)) * 65536.0f));
            loc_4 = (u32)&D_01d9eac0;
            loc_c = 0;
            loc_10 = (s32)((*(f32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0)) * 65536.0f));
            loc_18 = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8));
            loc_19 = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 9));
            loc_1a = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xa));
            loc_20 = (*(u32*)(&D_01d9e6e8) + 0x50);
            loc_24 = (u32)&D_01d9e9c0;
            loc_28 = (u32)&D_01d9e980;
            loc_2c = (*(u32*)(&D_01d9e6e8) + 0x10);
            loc_34 = *(u32*)(&D_01d9eaa4);
            loc_3c = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x94));
            loc_40 = 0;
            loc_44 = (*(u32*)(&D_01d9e6e8) + 0x50);
            loc_4c = 0;
            loc_4d = *(u8*)((a1 + 0x21));
            *(u32*)(&D_01d9eaa4) = func_0020f1e0(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c)), (u32)&loc_0, *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x20)), *(u32*)(&D_01d9e6e8) + 0x10, *(u8*)((a1 + 0x21)), *(u32*)(&D_01d9e6e8) + 0x50, *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xa)), *(u32*)(&D_01d9eaa4));
            f0 = func_0020f1e0(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c)), (u32)&loc_0, *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x20)), *(u32*)(&D_01d9e6e8) + 0x10, *(u8*)((a1 + 0x21)), *(u32*)(&D_01d9e6e8) + 0x50, *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xa)), *(u32*)(&D_01d9eaa4));
        }
        f0_0 = f0;
    }
    return f0_0;
}
