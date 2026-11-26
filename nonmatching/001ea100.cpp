// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 func_001e7a98(u32, u32, u32) asm("func_001e7a98");

// 0x001ea100 func_001ea100
f32 func_001ea100(u32 a0, u32 a1, u32 a2) asm("func_001ea100");
f32 func_001ea100(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    u32 v0;
    u32 v0_0;
    u32 t7_1;
    u32 t5;
    f32 f0;
    if ((*(u32*)((a1 + 0xc)) != 0xffffffff)) {
        t7 = (*(u32*)((*(u32*)(&D_01d9e6e0) + 0x80)) + (*(u32*)((a1 + 0xc)) << 4));
        if (((s32)(t7) != 0)) {
            v0 = func_001e7a98(*(u32*)(&D_01d9e6e0), t7, a2);
            *(u32*)((v0 + 4)) = a0;
            v0_0 = v0;
        } else {
            v0_0 = 0;
        }
        t7_1 = (v0_0 + *(u32*)((a1 + 0x10)));
        *(f32*)((t7_1 + 0xa0)) = (f32)((s32)(*(s16*)(a2)));
        t5 = (t7_1 + 0xa0);
        *(f32*)((t5 + 4)) = (f32)((s32)(*(s16*)((a2 + 2))));
        *(f32*)((t5 + 8)) = (f32)((s32)(*(s16*)((a2 + 4))));
        f0 = (f32)((s32)(*(s16*)((a2 + 4))));
    }
    return f0;
}
