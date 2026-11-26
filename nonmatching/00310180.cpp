// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00367118 asm("D_00367118");

// 0x00310180 func_00310180
u32 func_00310180(u32 a0, u32 a1) asm("func_00310180");
u32 func_00310180(u32 a0, u32 a1) {
    if (((s32)(*(u32*)(((u32)&D_00367118 + 8))) < 0)) {
        return 0x80008001;
    } else {
        if (((s32)(a0) != 0)) {
            *(u32*)(a0) = *(u32*)(((u32)&D_00367118 + 0x10));
        }
        if (((s32)(a1) != 0)) {
            *(u32*)(a1) = (0x80 - *(u32*)(((u32)&D_00367118 + 0x10)));
        }
        return 0;
    }
}
