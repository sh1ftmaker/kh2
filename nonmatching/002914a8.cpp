// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00374488 asm("D_00374488");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");

// 0x002914a8 func_002914a8
u32 func_002914a8(u32 a0, u32 a1) asm("func_002914a8");
u32 func_002914a8(u32 a0, u32 a1) {
    u32 v0;
    u32 t6;
    v0 = func_001a80c8(a1);
    if (((s32)(*(s8*)(&D_00374488)) >= 0)) {
        t6 = (u32)&D_00374488;
        do {
            t6 = (t6 + 1);
            if ((*(u8*)((v0 + 2)) == *(s8*)(t6))) {
                return 1;
            }
        } while (((s32)(*(s8*)(t6)) >= 0));
    }
    return 0;
}
