// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e980 asm("D_01d9e980");
extern "C" u32 D_01d9e9c0 asm("D_01d9e9c0");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 D_01d9eac0 asm("D_01d9eac0");
extern "C" u32 func_0020f1e0(u32, u32, u32) asm("func_0020f1e0");

// 0x001eb528 func_001eb528
void func_001eb528(u32 a0, u32 a1, u32 a2) asm("func_001eb528");
void func_001eb528(u32 a0, u32 a1, u32 a2) {
    u8 frame[96];
    u32 t7;
    if ((*(u32*)((a1 + 4)) != 0xffff)) {
        *(u8*)(((u32)frame + 0x1b)) = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xb));
        if (((s32)(*(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xb))) != 0)) {
            if (((s32)((*(u32*)(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c))) & 1)) != 0)) {
                t7 = 0x80;
            } else {
                t7 = 0xc;
            }
            *(u32*)((u32)frame) = t7;
            if (((s32)((*(u32*)(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c))) & 2)) == 0)) {
                *(u32*)((u32)frame) = (*(u32*)((u32)frame) | 0x10);
            }
            *(u16*)(((u32)frame + 8)) = *(u16*)((*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c)) + 0x16));
            *(u8*)(((u32)frame + 0xa)) = 0;
            *(u32*)(((u32)frame + 0x1c)) = 0;
            *(u32*)(((u32)frame + 0x38)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x90));
            *(u32*)(((u32)frame + 4)) = (u32)&D_01d9eac0;
            *(u32*)(((u32)frame + 0x3c)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x94));
            *(u32*)(((u32)frame + 0xc)) = 0;
            *(u64*)(((u32)frame + 0x10)) = 0;
            *(u8*)(((u32)frame + 0x18)) = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 8));
            *(u8*)(((u32)frame + 0x19)) = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 9));
            *(u8*)(((u32)frame + 0x1a)) = *(u8*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 0xa));
            *(u32*)(((u32)frame + 0x20)) = (*(u32*)(&D_01d9e6e8) + 0x50);
            *(u32*)(((u32)frame + 0x24)) = (u32)&D_01d9e9c0;
            *(u32*)(((u32)frame + 0x28)) = (u32)&D_01d9e980;
            *(u32*)(((u32)frame + 0x2c)) = (*(u32*)(&D_01d9e6e8) + 0x10);
            *(u32*)(((u32)frame + 0x34)) = *(u32*)(&D_01d9eaa4);
            *(u32*)(((u32)frame + 0x40)) = 0;
            *(u32*)(((u32)frame + 0x44)) = 0;
            *(u8*)(((u32)frame + 0x4c)) = 0;
            *(u8*)(((u32)frame + 0x4d)) = 0;
            *(u32*)(&D_01d9eaa4) = func_0020f1e0(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c)), (u32)frame, *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x20)));
        }
    }
    return;
}
