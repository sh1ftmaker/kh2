// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3b38 asm("D_004f3b38");
extern "C" void func_00160488(u32, u8, u8, u8) asm("func_00160488");

// 0x001611a8 func_001611a8
void func_001611a8(u8 a0, u8 a1, u8 a2) asm("_ZN2dk5BgObj11setColorAllEhhh");
void func_001611a8(u8 a0, u8 a1, u8 a2) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_004f3b38) : *(u32*)((s0 + 0x80))), (s0 = a0), ((s32)(a0) != 0)) {
        func_00160488(a0, a0, a1, a2);
    }
    return;
}
