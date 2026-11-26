// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001333c8(u32, f32) asm("func_001333c8");

// 0x001332e8 func_001332e8
void func_001332e8(u32 a0, f32 fa0) asm("func_001332e8");
void func_001332e8(u32 a0, f32 fa0) {
    u32 v0;
    u32 t6;
    u8 t6_0;
    v0 = func_001333c8(a0, fa0);
    if (((s32)(v0) != 0)) {
        t6 = *(u32*)((a0 + 0x14));
        t6_0 = (t6 & 1);
        if (((s32)((*(u32*)((a0 + 0x14)) & 2)) == 0)) {
            if (((s32)(t6_0) != 0)) {
                *(u32*)((a0 + 0x14)) = (t6 & 0xfffffffe);
            } else {
                *(u32*)((a0 + 0x24)) = (*(u32*)((a0 + 0x24)) + (s32)((*(f32*)((v0 + 4)) * (fa0 * *(f32*)((a0 + 0x18))))));
                *(f32*)((a0 + 0xc)) = (*(f32*)((a0 + 0xc)) + (fa0 * *(f32*)((a0 + 0x18))));
                *(u32*)((a0 + 0x28)) = (*(u32*)((a0 + 0x28)) + (s32)((*(f32*)((v0 + 8)) * (fa0 * *(f32*)((a0 + 0x18))))));
            }
        }
    }
    return;
}
