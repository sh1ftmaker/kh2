// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00315948 func_00315948
u32 func_00315948(u32 a0, u32 a1, u32 a2) asm("_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PPv");
u32 func_00315948(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 v0;
    *(u32*)((u32)frame) = 0;
    *(u32*)(((u32)frame + 4)) = 0;
    *(u32*)(((u32)frame + 8)) = 0x10;
    *(u32*)(((u32)frame + 0xc)) = 0;
    ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x18))))(a0, a1, *(u32*)(a2), (u32)frame);
    if (((s32)(((*(u32*)(((u32)frame + 4)) & 6) ^ 6)) == 0)) {
        *(u32*)(a2) = *(u32*)((u32)frame);
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}
