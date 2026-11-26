// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001d4f40(u32, u32, u32) asm("func_001d4f40");
extern "C" u32 func_00321728(u32, u32, u32) asm("func_00321728");

// 0x001d4ef0 func_001d4ef0
u32 func_001d4ef0(u32 a0, u32 a1) asm("func_001d4ef0");
u32 func_001d4ef0(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_00321728(a0 + 0x38, 1, *(u8*)(a1));
    *(u8*)((v0 + 1)) = (*(u8*)((v0 + 1)) + 1);
    return func_001d4f40(a0, *(u16*)((a1 + 0x42)), *(u8*)((v0 + 1)));
}
