// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002ffd00(u32) asm("func_002ffd00");
extern "C" u32 func_00302b18(u32) asm("func_00302b18");

// 0x002ffc50 func_002ffc50
u32 func_002ffc50(u32 a0) asm("func_002ffc50");
u32 func_002ffc50(u32 a0) {
    u8 frame[1120];
    u32 v0;
    *(u32*)(((u32)frame + 0x10)) = ((u32)frame + 0x60);
    *(u32*)((u32)frame) = ((u32)frame + 0x60);
    *(u32*)(((u32)frame + 8)) = 0x400;
    *(u16*)(((u32)frame + 0xc)) = (*(u16*)((a0 + 0xc)) & 0xfffd);
    *(u16*)(((u32)frame + 0xe)) = *(u16*)((a0 + 0xe));
    *(u32*)(((u32)frame + 0x14)) = 0x400;
    *(u32*)(((u32)frame + 0x18)) = 0;
    *(u32*)(((u32)frame + 0x1c)) = *(u32*)((a0 + 0x1c));
    *(u32*)(((u32)frame + 0x24)) = *(u32*)((a0 + 0x24));
    *(u32*)(((u32)frame + 0x54)) = *(u32*)((a0 + 0x54));
    v0 = func_002ffd00((u32)frame);
    if (((s32)(v0) >= 0)) {
        v0 = (func_00302b18((u32)frame) ? 0xffffffff : v0);
    }
    if (((s32)((*(u16*)(((u32)frame + 0xc)) & 0x40)) != 0)) {
        *(u16*)((a0 + 0xc)) = (*(u16*)((a0 + 0xc)) | 0x40);
    }
    return v0;
}
