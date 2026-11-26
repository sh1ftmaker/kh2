// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00133ae8 wtarget_00133ae8(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00133ae8(u32 a0, u8 a1) asm("_Z16wtarget_00133ae8jjjj");
void lift_00133ae8(u32 a0, u8 a1) {
    *(u64*)((*(u32*)((a0 + 0x20)) + 0x10)) = ((*(u64*)((*(u32*)((a0 + 0x20)) + 0x10)) & 0xffff8000) | ((u32)((((*(u32*)((a0 + 0x18)) - *(u32*)((a0 + 0x20))) + -0x20) >> 4)) & 0x7fff));
    if (((s32)(a1) != 0)) {
        if (((*(u64*)((*(u32*)((a0 + 0x20)) + 0x10)) & 0x7fff) == 0)) {
            *(u32*)((a0 + 0x18)) = *(u32*)((a0 + 0x20));
        } else {
            *(u16*)(*(u32*)((a0 + 0x20))) = ((*(u16*)((*(u32*)((a0 + 0x20)) + 0x10)) & 0x7fff) + 1);
            *(u32*)((*(u32*)((a0 + 0x20)) + 0xc)) = (*(u16*)(*(u32*)((a0 + 0x20))) | 0x50000000);
        }
    } else {
        *(u16*)(*(u32*)((a0 + 0x20))) = ((*(u16*)((*(u32*)((a0 + 0x20)) + 0x10)) & 0x7fff) + 1);
        *(u32*)((*(u32*)((a0 + 0x20)) + 0xc)) = (*(u16*)(*(u32*)((a0 + 0x20))) | 0x50000000);
    }
    *(u32*)((a0 + 0x20)) = 0;
    return;
}
