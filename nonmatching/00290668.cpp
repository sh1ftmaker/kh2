// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");
extern "C" void func_002367c8(u32) asm("func_002367c8");
extern "C" void func_00290740(u32, u32, u32, u32) asm("func_00290740");

// 0x00290668 Tz::Selector::CreateHelpGra(...)
u32 lift_00290668(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2Tz8Selector13CreateHelpGraEz");
u32 lift_00290668(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    func_00290740(a0, a1, a2, a3);
    func_002362b0(a0 + 0x1a0, a2);
    func_002367c8(a0 + 0x1a0);
    v0 = func_001386e0(a0, *(u32*)((a0 + 0x198)), a1, a0 + 0x1a0, a3, 0);
    *(u32*)(((a0 + 0x18) + 0xb8)) = (*(u32*)(((a0 + 0x18) + 0xb8)) | 8);
    *(u8*)((a0 + 0x195)) = 1;
    return v0;
}
