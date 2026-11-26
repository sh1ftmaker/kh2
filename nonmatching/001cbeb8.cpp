// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001cba90 asm("D_001cba90");
extern "C" u32 D_00351fe4 asm("D_00351fe4");
extern "C" u32 D_0036e180 asm("D_0036e180");
extern "C" u32 func_001cbc50(u32, u32, u32, u32) asm("func_001cbc50");

// 0x001cbeb8 func_001cbeb8
u32 func_001cbeb8(u32 a0, u32 a1) asm("func_001cbeb8");
u32 func_001cbeb8(u32 a0, u32 a1) {
    u32 v0;
    u32 t5;
    if (((s32)(*(u32*)(&D_00351fe4)) != 0)) {
        v0 = func_001cbc50(*(u32*)(&D_00351fe4), (a1 << 4) + (u32)&D_0036e180, a0, 0);
        *(u32*)((v0 + 0x10)) = (u32)&D_001cba90;
        *(u32*)((v0 + 0x28)) = (*(u32*)((v0 + 0x28)) | 3);
        t5 = v0;
    } else {
        t5 = 0;
    }
    return t5;
}
