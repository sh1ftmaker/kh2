// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e21f40 asm("D_01e21f40");
extern "C" u32 D_01e22040 asm("D_01e22040");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");

// 0x002b84b8 func_002b84b8
u32 func_002b84b8() asm("func_002b84b8");
u32 func_002b84b8() {
    u32 loc_0;
    u32 fp;
    fp = (u32)&loc_0;
    do {
        loc_0 = 0;
        *(u32*)((fp + 0x10)) = func_003094b8((u32)&D_01e22040, 4, 0, (u32)&D_01e21f40, 0x100, (u32)&D_01e21f40, 0x100, 0);
    } while (((s32)(*(u32*)((fp + 0x10))) != 0));
    return *(u32*)(&D_01e21f40);
}
