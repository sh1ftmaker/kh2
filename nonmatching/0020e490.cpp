// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00370720 asm("D_00370720");
extern "C" u32 func_002f25a0(u32, u32) asm("func_002f25a0");
extern "C" u32 func_002f2be0(u32, u32) asm("func_002f2be0");
extern "C" void func_002f28b8() asm("func_002f28b8");
extern "C" void func_002fd348(u32) asm("func_002fd348");
extern "C" void func_002fe0a0(u32, u32) asm("func_002fe0a0");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x0020e490 func_0020e490
u32 func_0020e490(u32 a0, u32 a1) asm("func_0020e490");
u32 func_0020e490(u32 a0, u32 a1) {
    u8 frame[96];
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)((a0 + 0x14))) == 0)) {
        func_002fe0a0((u32)&D_00370720, a1);
        func_002fd348(1);
    }
    func_002f28b8();
    func_002f25a0(0, 0);
    func_003058a0(0);
    v0 = func_002f2be0((u32)frame, *(u32*)((a0 + 0x14)));
    if (((s32)(a1) != 0)) {
        v0_0 = func_002f25a0(0, 0);
        v0 = v0_0;
    }
    return v0;
}
