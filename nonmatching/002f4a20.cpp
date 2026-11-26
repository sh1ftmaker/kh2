// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2d980 asm("D_01e2d980");
extern "C" u32 D_01e2da80 asm("D_01e2da80");
extern "C" void func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");

// 0x002f4a20 func_002f4a20
u32 func_002f4a20() asm("func_002f4a20");
u32 func_002f4a20() {
    u8 frame[16];
    *(u32*)((u32)frame) = 0;
    func_003094b8((u32)&D_01e2d980, 0x80001363, 0, (u32)&D_01e2da80, 0x90, (u32)&D_01e2da80, 0x90, 0);
    return *(u32*)(&D_01e2da80);
}
