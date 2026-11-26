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

// 0x001eb668 func_001eb668
void func_001eb668(u32 a0, u32 a1, u32 a2) asm("func_001eb668");
void func_001eb668(u32 a0, u32 a1, u32 a2) {
    u8 frame[96];
    if ((*(u32*)((a1 + 4)) != 0xffff)) {
        *(u8*)(((u32)frame + 0x1b)) = ((s32)(*(s16*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 6))) >> 7);
        if (((s32)((((s32)(*(s16*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 6))) >> 7) & 0xff)) != 0)) {
            *(u32*)((u32)frame) = 0x80;
            if (((s32)((*(u32*)(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c))) & 2)) == 0)) {
                *(u32*)((u32)frame) = 0x90;
            }
            *(u16*)(((u32)frame + 8)) = *(u16*)((a1 + 8));
            *(u8*)(((u32)frame + 0xa)) = 0;
            *(u32*)(((u32)frame + 0x1c)) = 0;
            *(u32*)(((u32)frame + 0x38)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x90));
            *(u32*)(((u32)frame + 4)) = (u32)&D_01d9eac0;
            *(u32*)(((u32)frame + 0xc)) = 0;
            *(u64*)(((u32)frame + 0x10)) = 0;
            *(u32*)(((u32)frame + 0x3c)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x94));
            *(u32*)(((u32)frame + 0x40)) = 0;
            *(u8*)(((u32)frame + 0x18)) = ((s32)(*(s16*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0))) >> 7);
            *(u8*)(((u32)frame + 0x19)) = ((s32)(*(s16*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 2))) >> 7);
            *(u8*)(((u32)frame + 0x1a)) = ((s32)(*(s16*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 4))) >> 7);
            *(u32*)(((u32)frame + 0x20)) = (*(u32*)(&D_01d9e6e8) + 0x50);
            *(u32*)(((u32)frame + 0x24)) = (u32)&D_01d9e9c0;
            *(u32*)(((u32)frame + 0x28)) = (u32)&D_01d9e980;
            *(u32*)(((u32)frame + 0x2c)) = (*(u32*)(&D_01d9e6e8) + 0x10);
            *(u32*)(((u32)frame + 0x34)) = *(u32*)(&D_01d9eaa4);
            *(u32*)(((u32)frame + 0x44)) = 0;
            *(u32*)(&D_01d9eaa4) = func_0020f1e0(*(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x1c)), (u32)frame, *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (*(u32*)((a1 + 4)) * 0x24)) + 0x20)));
        }
    }
    return;
}
