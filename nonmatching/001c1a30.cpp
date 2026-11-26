// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001c1a30 func_001c1a30
void func_001c1a30(u32 a0, u32 a1) asm("_ZN2YS10MASSEFFECT14make_referenceERNS0_9REFERENCEE");
void func_001c1a30(u32 a0, u32 a1) {
    *(u32*)((a0 + 0x20)) = *(u32*)(a1);
    if (((s32)(*(u32*)((*(u32*)((a0 + 0x1c)) + 4))) != 0)) {
        if ((*(u32*)((*(u32*)((a0 + 0x1c)) + 4)) != 1)) {
            return;
        } else {
            *(f32*)(*(u32*)(a1)) = *(f32*)(a0);
            *(f32*)((*(u32*)(a1) + 4)) = *(f32*)((a0 + 4));
            *(f32*)((*(u32*)(a1) + 8)) = *(f32*)((a0 + 8));
            *(u8*)((*(u32*)(a1) + 0xc)) = *(u8*)((a0 + 0x15));
            *(u8*)((*(u32*)(a1) + 0xd)) = *(u8*)((a0 + 0x17));
            *(u8*)((*(u32*)(a1) + 0xe)) = *(u8*)((a0 + 0x18));
            *(u8*)((*(u32*)(a1) + 0xf)) = *(u8*)((a0 + 0x16));
            *(u32*)(a1) = (*(u32*)(a1) + 0x10);
            return;
        }
    } else {
        *(f32*)(*(u32*)(a1)) = *(f32*)(a0);
        *(f32*)((*(u32*)(a1) + 4)) = *(f32*)((a0 + 4));
        *(f32*)((*(u32*)(a1) + 8)) = *(f32*)((a0 + 8));
        *(u8*)((*(u32*)(a1) + 0xc)) = *(u8*)((a0 + 0x14));
        *(u8*)((*(u32*)(a1) + 0xd)) = *(u8*)((a0 + 0x15));
        *(u8*)((*(u32*)(a1) + 0xe)) = *(u8*)((a0 + 0x16));
        *(u8*)((*(u32*)(a1) + 0xf)) = *(u8*)((a0 + 0x17));
        *(u32*)(a1) = (*(u32*)(a1) + 0x10);
        return;
    }
}
