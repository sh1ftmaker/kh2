// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00239558 YI::SPRITE::SetDirextUV(unsigned short*, unsigned short*)
void lift_00239558(u32 a0, u32 a1, u32 a2) asm("_ZN2YI6SPRITE11SetDirextUVEPtS1_");
void lift_00239558(u32 a0, u32 a1, u32 a2) {
    u32 t2;
    *(u32*)((a0 + 0x10)) = (*(u32*)((a0 + 0x10)) | 0x40);
    t2 = 0;
    do {
        *(u16*)((a0 + 0xa0)) = *(u16*)(((t2 << 1) + a1));
        *(u16*)((a0 + 0xa8)) = *(u16*)(((t2 << 1) + a2));
        t2 = (t2 + 1);
        a0 = (a0 + 2);
    } while (((s32)(((s32)(t2) < (s32)(4))) != 0));
    return;
}
