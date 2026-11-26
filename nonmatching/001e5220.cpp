// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e3f0 asm("D_01d9e3f0");
extern "C" u32 func_002f2be0(u32, u32) asm("func_002f2be0");
extern "C" void func_002f28b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002f28b8");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x001e5220 func_001e5220
u32 func_001e5220(u32 a0, u32 a1) asm("func_001e5220");
u32 func_001e5220(u32 a0, u32 a1) {
    u32 t6;
    t6 = ((s32)(((s32)(*(s16*)(a0)) < (s32)(0x3000))) == 0) ? (((*(s16*)(a0) + ((s32)((a1 << 0x10)) >> 0x10)) + -0x3000) << 0x10) : (((*(s16*)(a0) + ((s32)((a1 << 0x10)) >> 0x10)) + -0x2a00) << 0x10);
    func_002f28b8((u32)&D_01d9e3f0, (s32)(t6) >> 0x10, *(s16*)((a0 + 4)), *(s16*)((a0 + 6)), *(s16*)((a0 + 8)), *(s16*)((a0 + 0xa)), *(s16*)((a0 + 0xc)), *(s16*)((a0 + 0xe)));
    func_003058a0(0);
    return func_002f2be0((u32)&D_01d9e3f0, a0 + 0x20);
}
