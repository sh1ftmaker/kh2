// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3fc asm("D_0035f3fc");
extern "C" u32 D_0035f410 asm("D_0035f410");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x0028d008 func_0028d008
u32 func_0028d008(u32 a0) asm("_ZN2Tz10MenuCursor7isExistEi");
u32 func_0028d008(u32 a0) {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_0035f3fc)) != 0)) {
        v0 = func_00139d78(*(u32*)(&D_0035f3fc) + (a0 * 0x198));
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    if (((s32)(v0_0) != 0)) {
        v0_0 = ((((s32)(*(u32*)(&D_0035f410)) >> a0) & 1) ? 0 : v0_0);
    }
    return v0_0;
}
