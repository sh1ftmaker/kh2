// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 func_0021d048(u32, u32, u32) asm("func_0021d048");

// 0x001ebb30 func_001ebb30
void func_001ebb30(u32 a0, u32 a1, u32 a2) asm("func_001ebb30");
void func_001ebb30(u32 a0, u32 a1, u32 a2) {
    u8 frame[48];
    if ((*(u32*)((a1 + 4)) != 0xffff)) {
        *(u64*)(((u32)frame + 8)) = 0;
        *(u32*)(((u32)frame + 0x10)) = (*(u32*)(&D_01d9e6e8) + 0x50);
        *(u8*)(((u32)frame + 0x18)) = 0;
        *(u32*)(((u32)frame + 0x1c)) = 0;
        if (((s32)(*(u8*)((a1 + 0xc))) == 0)) {
            *(u16*)(((u32)frame + 2)) = 0x80;
        } else {
            *(u16*)(((u32)frame + 2)) = 0;
        }
        if ((*(u8*)((a1 + 0xd)) == 1)) {
            *(u16*)(((u32)frame + 2)) = (*(u16*)(((u32)frame + 2)) | 0x10);
        }
        *(u8*)(((u32)frame + 4)) = *(u8*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0) + 8));
        *(u8*)(((u32)frame + 5)) = *(u8*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0) + 9));
        *(u8*)(((u32)frame + 6)) = *(u8*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0) + 0xa));
        *(u8*)(((u32)frame + 7)) = *(u8*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0) + 0xb));
        *(u32*)(((u32)frame + 0x14)) = *(u32*)(&D_01d9eaa4);
        *(u32*)(&D_01d9eaa4) = func_0021d048(*(u32*)((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x14)) + (*(u32*)((a1 + 4)) << 3))) + *(s16*)(((*(u32*)((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x14)) + (*(u32*)((a1 + 4)) << 3))) + (*(u16*)((((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0) + 4)) << 3)) + 0x10)), (u32)frame, *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x14)) + (*(u32*)((a1 + 4)) << 3)) + 4)));
    }
    return;
}
