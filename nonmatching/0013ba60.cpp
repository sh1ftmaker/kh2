// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348060 asm("D_00348060");
extern "C" u32 D_003483f0 asm("D_003483f0");
extern "C" u32 D_00348400 asm("D_00348400");
extern "C" u32 D_00348410 asm("D_00348410");
extern "C" u32 func_0013b9e0(u32, u32, u32, u32, u32, u32, u32) asm("func_0013b9e0");
extern "C" u32 func_0013ba50(u32) asm("func_0013ba50");

// 0x0013ba60 func_0013ba60
u32 func_0013ba60(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_0013ba60");
u32 func_0013ba60(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u32 v0;
    *(u32*)(a5) = *(u32*)(((((a4 * 0xc) + a2) << 2) + (u32)&D_00348060));
    if (((s32)(a1) == 0)) {
        if (((s32)(func_0013b9e0(a0, a4, a2, a3, a4, a5, a6)) != 0)) {
            *(u8*)(a3) = 1;
            *(u32*)(a5) = *(u32*)(((a2 << 2) + (u32)&D_003483f0));
        } else {
            if (((s32)(func_0013ba50(a0)) == 0)) {
                *(u32*)(a5) = *(u32*)(((a2 << 2) + (u32)&D_00348400));
            }
        }
        *(u32*)(a6) = *(u32*)(((a2 << 2) + (u32)&D_00348410));
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}
