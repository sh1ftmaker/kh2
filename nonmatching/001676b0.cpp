// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_004f526c asm("D_004f526c");
extern "C" u32 D_004f5270 asm("D_004f5270");

// 0x001676b0 func_001676b0
void func_001676b0(u32 a0, u32 a1) asm("func_001676b0");
void func_001676b0(u32 a0, u32 a1) {
    u32 t7;
    f32 f2;
    *(u64*)((a0 + 0x18)) = 0;
    t7 = *(u64*)(a0);
    *(u64*)(a0) = a1;
    *(u64*)((a0 + 8)) = ((t7 ^ a1) & a1);
    *(u64*)((a0 + 0x10)) = ((t7 ^ a1) & ~((0 | a1)));
    if (((s32)(((t7 ^ a1) & a1)) != 0)) {
        *(u64*)((a0 + 0x18)) = ((t7 ^ a1) & a1);
        *(f32*)((a0 + 0x40)) = *(f32*)(&D_004f526c);
        return;
    } else {
        if (((s32)(a1) != 0)) {
            f2 = *(f32*)((a0 + 0x40));
            *(f32*)((a0 + 0x40)) = (f2 - *(f32*)(&D_00349e10));
            if (((f2 - *(f32*)(&D_00349e10)) <= 0.0f)) {
                *(u64*)((a0 + 0x18)) = a1;
                *(f32*)((a0 + 0x40)) = *(f32*)(&D_004f5270);
            }
        }
        return;
    }
}
