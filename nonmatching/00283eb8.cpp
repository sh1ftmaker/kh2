// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00374268 asm("D_00374268");
extern "C" u32 D_00374270 asm("D_00374270");
extern "C" u32 D_003742c8 asm("D_003742c8");
extern "C" u32 func_00283a58(u32, u32) asm("func_00283a58");
extern "C" u32 func_002fee78(u32, u32, u32, u32) asm("func_002fee78");

// 0x00283eb8 func_00283eb8
u32 func_00283eb8(u32 a0, u32 a1) asm("func_00283eb8");
u32 func_00283eb8(u32 a0, u32 a1) {
    u32 s1;
    u32 s0;
    u32 v0;
    s1 = (a1 << 3);
    s0 = *(u8*)(((s1 + (u32)&D_003742c8) + 7));
    v0 = func_00283a58(a0, a1);
    if (((s32)((s0 & 0xfb)) != 0)) {
        if ((v0 == 1)) {
            if (((s32)((s0 & 2)) == 0)) {
                v0 = 2;
            }
        }
    } else {
        v0 = 2;
    }
    return func_002fee78(a0, (u32)&D_00374270, *(u32*)((s1 + (u32)&D_003742c8)), *(s8*)((v0 + (u32)&D_00374268)));
}
