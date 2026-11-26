// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0018f010(u32, u32) asm("func_0018f010");
extern "C" void func_0018ef68(u32, u32, u32) asm("func_0018ef68");
extern "C" void func_001c0320(u32, u32, u32) asm("func_001c0320");

// 0x0018e7c0 func_0018e7c0
void func_0018e7c0(u32 a0, u32 a1) asm("_ZN2YS11ATTACK_WORK7reflectEPS0_");
void func_0018e7c0(u32 a0, u32 a1) {
    u8 frame[32];
    *(u8*)((*(u32*)(a0) + 0xa4)) = (*(u8*)((*(u32*)(a0) + 0xa4)) + 1);
    if ((func_0018f010(*(u32*)(a1), a1) == 0) || (*(u8*)((*(u32*)((*(u32*)(a1) + 0x28)) + 0x13)) != 2)) {
        func_001c0320(*(u32*)(a0) + 0x30, *(u32*)(a1), (u32)frame);
        if (((*(u32*)((*(u32*)(a0) + 4)) & 0x100) == 0)) {
            func_001c0320(*(u32*)((*(u32*)(a0) + 0xc)) + 0xa50, *(u32*)(a1), (u32)frame);
        }
    }
    if ((*(u8*)((*(u32*)((*(u32*)(a0) + 0x28)) + 0x13)) != 2)) {
        *(u32*)((*(u32*)(a0) + 4)) = (*(u32*)((*(u32*)(a0) + 4)) | 0x200);
        *(u32*)((*(u32*)(a0) + 0x84)) = *(u32*)((*(u32*)(a1) + 0xc));
    }
    if (((*(u32*)((*(u32*)(a0) + 4)) & 0x100) == 0)) {
        ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(a0) + 0xc))) + 0x6c))))(*(u32*)((*(u32*)(a0) + 0xc)), a0, a1);
    }
    if (((s32)(*(u32*)((*(u32*)(a0) + 0x98))) != 0)) {
        *(u32*)(((u32)frame + 0x10)) = *(u32*)((*(u32*)(a0) + 0xa0));
        *(u32*)(((u32)frame + 0x14)) = *(u32*)(a0);
        *(u32*)(((u32)frame + 0x18)) = *(u32*)(a1);
        func_0018ef68(*(u32*)(a0) + 0x98, (u32)frame + 0x10, 3);
    }
    return;
}
