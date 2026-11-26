// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001facf8(u32, u32, u32) asm("func_001facf8");

// 0x001fbb20 func_001fbb20
void func_001fbb20(u32 a0, u32 a1, u32 a2) asm("func_001fbb20");
void func_001fbb20(u32 a0, u32 a1, u32 a2) {
    u32 s2;
    s2 = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
    func_001facf8(a0, a1, a2);
    if ((*(u32*)(a1) == *(u32*)((a0 + 0xc)))) {
        *(f32*)((s2 + 0x20)) = *(f32*)((a1 + 0xc));
        *(f32*)((s2 + 0x28)) = (f32)((s32)(*(u16*)((a1 + 0x10))));
        *(u16*)((s2 + 0x2c)) = *(u16*)((a1 + 0x12));
    }
    return;
}
