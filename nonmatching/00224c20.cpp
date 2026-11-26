// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00370cd8 asm("D_00370cd8");
extern "C" u32 D_00370ce8 asm("D_00370ce8");
extern "C" u32 D_00370cf8 asm("D_00370cf8");
extern "C" u32 D_00370d08 asm("D_00370d08");
extern "C" u32 D_00370d18 asm("D_00370d18");
extern "C" u32 func_00227120() asm("func_00227120");
extern "C" u32 func_002ff538(u32, u32, u32) asm("func_002ff538");

// 0x00224c20 func_00224c20
u32 func_00224c20() asm("_ZN2sa5EVENT18checkMusicalMemoryEv");
u32 func_00224c20() {
    u32 t6;
    u32 t6_0;
    u32 t6_1;
    u32 t6_2;
    if (((s32)(func_002ff538(func_00227120(), (u32)&D_00370cd8, 0xc)) != 0)) {
        if (((s32)(func_002ff538(func_00227120(), (u32)&D_00370ce8, 0xc)) != 0)) {
            if (((s32)(func_002ff538(func_00227120(), (u32)&D_00370cf8, 0xc)) != 0)) {
                if (((s32)(func_002ff538(func_00227120(), (u32)&D_00370d08, 0xc)) != 0)) {
                    t6 = (func_002ff538(func_00227120(), (u32)&D_00370d18, 0xc) ? 0xffffffff : 5);
                } else {
                    t6 = 4;
                }
                t6_0 = t6;
            } else {
                t6_0 = 3;
            }
            t6_1 = t6_0;
        } else {
            t6_1 = 2;
        }
        t6_2 = t6_1;
    } else {
        t6_2 = 1;
    }
    return t6_2;
}
