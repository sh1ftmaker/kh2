// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0018d940(u32, u32, u32, u32) asm("func_0018d940");
extern "C" u32 func_0018da18(u32, u32, u32, u32) asm("func_0018da18");
extern "C" u32 func_001c0320(u32, u32, u32) asm("func_001c0320");

// 0x0018db38 YS::ATTACK::strike(YS::BTLOBJ*, int, int)
u32 lift_0018db38(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS6ATTACK6strikeEPNS_6BTLOBJEii");
u32 lift_0018db38(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 loc_0;
    u32 v0;
    u32 t7;
    if (((s32)(func_0018d940(a0, a1, a2, a3)) != 0)) {
        v0 = func_0018da18(a0, a1, func_001c0320(a1 + 0xa50, a0, (u32)&loc_0), a3);
        *(u8*)((v0 + 0x24)) = a2;
        if (((s32)(loc_0) == 0)) {
            *(u32*)((v0 + 0x18)) = (*(u32*)((v0 + 0x18)) | 3);
        }
        t7 = v0;
    } else {
        t7 = 0;
    }
    return t7;
}
