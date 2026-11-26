// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c6cabc asm("D_01c6cabc");

// 0x001a1840 wtarget_001a1840(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036d454   (float literals live here in the original)
void lift_001a1840(u32 a0) asm("_Z16wtarget_001a1840jjjj");
void lift_001a1840(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x244))) != 0)) {
        *(u8*)((*(u32*)((a0 + 0x244)) + 4)) = *(u8*)(a0);
        *(u8*)((*(u32*)((a0 + 0x244)) + 5)) = *(u8*)((a0 + 4));
        *(u8*)((*(u32*)((a0 + 0x244)) + 6)) = *(u8*)((a0 + 0x180));
        *(u8*)((*(u32*)((a0 + 0x244)) + 7)) = *(u8*)((a0 + 0x184));
        *(u8*)((*(u32*)((a0 + 0x244)) + 0xc)) = (s32)((*(f32*)((a0 + 0x1bc)) / 60.0f));
        *(u8*)((*(u32*)((a0 + 0x244)) + 0xd)) = (s32)((*(f32*)((a0 + 0x1c0)) / 60.0f));
    }
    if (((s32)(*(u32*)((a0 + 0x260))) != 0)) {
        *(u8*)((*(u32*)((a0 + 0x260)) + 0x1038)) = *(u8*)((a0 + 0x1b0));
        *(u8*)((*(u32*)((a0 + 0x260)) + 0x1039)) = *(u8*)((a0 + 0x1b1));
        *(u8*)((*(u32*)((a0 + 0x260)) + 0x103a)) = *(u8*)((a0 + 0x1b2));
        *(u8*)((*(u32*)((a0 + 0x260)) + 0x103b)) = *(u8*)((a0 + 0x1b3));
        *(f32*)((*(u32*)((a0 + 0x260)) + 0x103c)) = *(f32*)((a0 + 0x1b4));
        *(f32*)((*(u32*)((a0 + 0x260)) + 0x1040)) = *(f32*)((a0 + 0x1b8));
        *(u32*)(&D_01c6cabc) = *(u32*)((a0 + 8));
    }
    return;
}
