// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 func_0018ca48(u32, u32, u32) asm("func_0018ca48");

// 0x0018cd28 func_0018cd28
void func_0018cd28(u32 a0, u32 a1, u32 a2) asm("_ZN2YS6DAMAGE8get_blowERfS1_");
void func_0018cd28(u32 a0, u32 a1, u32 a2) {
    *(f32*)(a1) = *(f32*)((*(u32*)(&D_00352130) + 0x24));
    *(f32*)(a2) = *(f32*)((*(u32*)(&D_00352130) + 0x28));
    if ((func_0018ca48(*(u8*)((a0 + 0x27)), a1, a2) == 4)) {
        if ((*(u32*)((a0 + 0x20)) != 0)) {
            if ((*(u32*)((*(u32*)((a0 + 0x20)) + 0xc)) != 0)) {
                *(f32*)(a1) = (f32)((s32)(*(s16*)((*(u32*)((a0 + 0x20)) + 0xc))));
                *(f32*)(a2) = (f32)((s32)(*(s16*)((*(u32*)((a0 + 0x20)) + 0xe))));
            }
        }
    }
    return;
}
