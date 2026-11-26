// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001fa950(u32, u32, u32) asm("func_001fa950");

// 0x001fb720 func_001fb720
void func_001fb720(u32 a0, u32 a1, u32 a2) asm("func_001fb720");
void func_001fb720(u32 a0, u32 a1, u32 a2) {
    u32 s2;
    s2 = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
    func_001fa950(a0, a1, a2);
    if ((*(u32*)(a1) == *(u32*)((a0 + 0xc)))) {
        *(f32*)((s2 + 0x44)) = *(f32*)((a1 + 0xc));
        *(f32*)((s2 + 0x40)) = (f32)((s32)(*(u16*)((a1 + 0x14))));
    }
    return;
}
